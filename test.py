def get_minutes_to_leave(current_time):
    hour, minute = map(int, current_time.split(':'))
    minutes_past_current = 0

    while True:
        minute += 1
        if minute == 60:
            minute = 0
            hour += 1
            if hour == 12:
                hour = 0

        minutes_past_current += 1
        if hour % 5 == minute // 12:
            break

    return minutes_past_current

current_time = input("Enter the current time in hh:mm format: ") 
minutes_to_leave = get_minutes_to_leave(current_time)
print(minutes_to_leave)





import heapq

def scheduleTasks(taskInput):
    n = taskInput[0]
    tasks = []

    # Read tasks and store them in a list with their enqueue time, processing time, and original index
    for i in range(n):
        enqueue_time = taskInput[2 + 2 * i] 
        processing_time = taskInput[3 + 2 * i]
        tasks.append((enqueue_time, processing_time, i))

    # Sort tasks by their enqueue time
    tasks.sort()
    
    result = []
    min_heap = []
    current_time = 0
    i = 0

    while i < len(tasks) or min_heap:
        # Add all tasks that are available to the min_heap
        while i < len(tasks) and tasks[i][0] <= current_time:
            heapq.heappush(min_heap, (tasks[i][1], tasks[i][2]))
            i += 1
        
        if not min_heap:
            # If the heap is empty, move current_time to the enqueue time of the next task
            current_time = tasks[i][0]
        else:
            # Get the task with the smallest processing time (and smallest index in case of tie)
            processing_time, index = heapq.heappop(min_heap)
            current_time += processing_time
            result.append(index)

    return result

# Example usage
taskInput = [
    4,
    2,
    1, 5,
    2, 6,
    2, 4,
    7, 10
]

print(scheduleTasks(taskInput))  # Output: [0, 2, 1, 3]
