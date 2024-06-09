function scheduleTasks(taskInput) {
  const tasks = [];
  for (let i = 2; i < taskInput.length; i += 2) {
      tasks.push([taskInput[i], taskInput[i + 1], (i - 2) / 2]); // [enqueueTime, processingTime, index]
  }

  // Sort tasks based on enqueueTime, then by processingTime, and then by index
  tasks.sort((a, b) => {
      if (a[0] !== b[0]) return a[0] - b[0];
      if (a[1] !== b[1]) return a[1] - b[1];
      return a[2] - b[2];
  });

  const result = [];
  const minHeap = [];
  let currentTime = 0;
  let i = 0;

  while (i < tasks.length || minHeap.length > 0) {
      // Add all available tasks to the minHeap
      while (i < tasks.length && tasks[i][0] <= currentTime) {
          minHeap.push(tasks[i]);
          minHeap.sort((a, b) => {
              if (a[1] !== b[1]) return a[1] - b[1];
              return a[2] - b[2];
          });
          i++;
      }

      if (minHeap.length === 0) {
          currentTime = tasks[i][0];
      } else {
          const [enqueueTime, processingTime, index] = minHeap.shift();
          currentTime += processingTime;
          result.push(index);
      }
  }

  return result;
}

// Example usage
const taskInput = [
  4,
  2,
  1, 5,
  2, 6,
  2, 4,
  7, 10
];

console.log(scheduleTasks(taskInput)); // Output: [0, 2, 1, 3]
 