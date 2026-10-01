1. Introduction to SE (Software Engineering)
Software Engineering is the systematic, disciplined, and quantifiable approach to
the
development, operation, and maintenance of software. It applies engineering
principles to
create software that is reliable, efficient, scalable, and economical.
2. SDLC (Software Development Life Cycle)
The SDLC is a structured process used by IT industries to design, develop, and
test high-quality software.
1. Requirement Analysis: Gathering business needs from stakeholders to define
the project's exact scope.
2. System Design: Creating the architectural blueprint, database design, and
interface mockups based on requirements.
3. Implementation: Writing the actual source code using appropriate
programming languages and frameworks.
4. Testing: Verifying that the code works correctly, fixing bugs, and ensuring it
meets user expectations.
3. What is UML? (Definition & Advantages)
Unified Modeling Language (UML) is a standardized, general-purpose
modeling language used to visualize, specify, construct, and document the
artifacts of a software system.
• Advantages:
o Standardization: Provides a universal language that developers, architects, and
business analysts all understand.
o Clarity: Simplifies complex system design by breaking it down into visual
blueprints.
o Better Planning: Helps identify design flaws, system bottlenecks, and
dependencies before writing code.
o Documentation: Acts as a permanent visual reference for future maintenance
and scaling.
4. Types of UML Diagrams
UML diagrams are divided into two main categories: static structures and
dynamic behaviors.
Structural Diagrams (Static Views)
• Class Diagram: Shows the system's classes, attributes, operations, and the static
relationships between them.
• Object Diagram: Captures a snapshot of the instances (objects) of classes at a
specific point in time.
• Component Diagram: Illustrates how software components (libraries,
executables, modules) are organized and wired together.
• Deployment Diagram: Models the physical hardware runtime environment,
showing where software components reside.
• Package Diagram: Organizes system elements into groups or namespaces to
show structural dependencies.
Behavioral Diagrams (Dynamic Views)
• Use Case Diagram: Models how external actors interact with the system to
achieve specific functional goals.
• Sequence Diagram: Shows how objects interact in a sequential time order to
execute a specific workflow.
• Activity Diagram: Represents the step-by-step procedural flow of control or
data within a system (like a flowchart).
• State Diagram: Models the lifecycle of a single object as it changes states in
response to external events.
• Communication Diagram: Focuses on the structural organization of objects that
send and receive messages.
5. Important UML Diagrams & Components
Your lab specifically highlights three crucial diagrams required for practical
software design:
A. Use Case Diagram
Maps out the system functions from a user's perspective.
• Actor: An external entity (human, device, or external system) that interacts with
the system. Represented by a stick figure.
• Use Case: A specific function or task performed by the system. Represented by
an oval shape.
• System Boundary: A box drawn around the use cases to define what is inside
the
system versus what is external.
• Example:
o Actor: Customer
o Use Case: Login, View Product, Make Payment
B. Class Diagram
The foundation of object-oriented design, representing the structural building
blocks of your application.
• Each class is represented by a box split into three horizontal sections:
1. Top: Class Name (e.g., User)
2. Middle: Attributes/Variables(e.g., - email: String)
3. Bottom: Operations/Methods (e.g., + verifyPassword())
C. Sequence Diagram
An interaction diagram detailing how operations are carried out over time.
• Lifelines: Vertical dashed lines representing the lifespan of an object during the
interaction.
• Activation Boxes: Thin vertical rectangles on the lifelines showing when an
object is actively executing a task.
• Messages: Horizontal arrows pointing from sender to receiver showing function
calls and returns.
6. UML Relationships
Relationships define how different elements in your design connect and interact
with one another.
• Association: A structural relationship where one object uses or interacts with
another object. (e.g., A Driver drives a Car). Represented by a straight solid line.
• Aggregation: A part-whole relationship where the child can exist independently
of the parent. (e.g., A Department has Professors. If the department closes, the
professors still exist). Represented by a clear diamond arrow.
• Composition: A strict part-whole relationship where the child cannot exist
without the parent. (e.g., A House has Rooms. If the house is destroyed, the
rooms cease to exist). Represented by a solid black diamond arrow.
• Inheritance / Generalization: A relationship where a child class inherits
attributes and methods from a parent class. (e.g., A Dog is an Animal).
Represented by a solid line with a hollow triangle arrow.
• Dependency: A weaker relationship where a change in one class may affect
another class that relies on it. Represented by a dashed arrow.
7. Introduction to Rational Rose
Definition
Rational Rose is an automated, component-based Visual Modeling tool designed
to build, document, and manage object-oriented software architectures using the
Unified Modeling
Language (UML). It acts as a graphical design platform that converts abstract
business logic into structural software models, directly linking the design phase
with source code generation.
Applications
• System Architecture Design: Mapping out complex software structures,
databases, and system topologies before development starts.
• Legacy Code Modernization: Reverse-engineering older, undocumented
codebases into visual models to understand how they work.
• Enterprise Business Modeling: Documenting organizational workflows, user
permissions, and business processes using Use Case and Activity diagrams.
• Cross-Language Code Skeleton Generation: Creating base structural
frameworks for multi-language projects (e.g., generating C++, Java, or Ada files
from a single model).
Advantages
• Round-Trip Engineering: Keeps diagrams and source code synchronized
automatically, reducing manual documentation updates.
• Error Prevention: Detects architectural flaws, logic bottlenecks, and structural
dependency issues early in the design cycle.
• Enhanced Collaboration: Standardizes technical documentation using global
UML rules, helping developers, managers, and stakeholders communicate
effectively.
• Component Reusability: Allows teams to identify repeating patterns and design
modular, reusable components across different projects
