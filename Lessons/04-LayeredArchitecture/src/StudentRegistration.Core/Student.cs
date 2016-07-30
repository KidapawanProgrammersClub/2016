using System;

namespace StudentRegistration.Core
{
    public class Student
    {
        public int ID { get; set; }
        public string FirstName { get; set; }
        public string LastName { get; set; }

        public void RegisterForCourse(Course course)
        {
            //TODO: register student for course/subject
        }
    }
}
