# COMP4106-Project: Warehouse navigation bot

Carleton University\
Winter 2019

Artificial Intelligence\
John Oommen\
Assignment 2

By: David N. Zilio (Skote2) \
Proposal: Wednesday 7<sup>th</sup> March 2019
Demo: TBD\
TA: Karim

The course project is an arbitrary AI project selected by me, the student. The Project is worth 30% of the course grade and expected to take 2 times the amount of time of a regular assignment.

## Proposal

---

### Defining the problem domain

Amazon is known for their unique and advanced solutions to the problem of inventory managment. Amazon manages their warehouses with bots. The bots wander the warehouse to stock it, and collect inventory for orders. Given the nature of how Amazon recieves orders it often needs to retrieve inventory immidiately after an order is made so that the product can make shipment times from two days to as low as an hour, near their more advanced warehouses.

### Motivation for the problem

The efficient prioritization, managment and timely achievement of the tasks at hand ensure a warehousing system with no bottleneck. By getting items to customers faster, Amazon has managed to create a world with near instant access to magnitudes more items than retail could provide. A better marketplace which is more convenient and saves people time while giving them access to lower prices is only made possible with the strong backbone of a responsive warehouse. The warehouse cannot bottleneck and while it provides a reliably faster but also cheaper alternative to retail.\
Ultimately this is a difficult challenge. The semantics of managing logistics has crippled many a company before and will cripple many more.

### The bots' AI

The solution used must be efficient which means metrics must be used against it

#### Means of gauging performance

* Djikstra's for pathing efficiency
* comparative between bots for item value over time considering weights and volumes

#### Potential means of the bots' reasoning

* Hive mind
* neural nets
* genetic algorithms
  * competetive bots breeding
* state space solution
* collecting multiple items at once
* picking up new items for its "shopping list" while actively searching so that higher priority items get out faster, if necessary.
  * item time restrictions
  * item values