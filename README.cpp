#Test
package com.java1996.cn;
import static org.junit.Assert.*;
import org.junit.Test;

public class ElevatorTest{
	@Test
	public void test1() 
	{
		Elevator elevator1 = new Elevator();
		elevator1.set_ele_num(1);
		elevator1.set_currentpose(20);
		elevator1.set_condition(0);

		Elevator elevator2 = new Elevator();
		elevator2.set_ele_num(2);
		elevator2.set_currentpose(5);
		elevator2.set_condition(0);
		
		Elevator elevator3 = new Elevator();
		elevator3.set_ele_num(3);
		elevator3.set_currentpose(6);
		elevator3.set_condition(0);

		
		Elevator elevator4 = new Elevator();
		elevator4.set_ele_num(4);
		elevator4.set_currentpose(12);
		elevator4.set_condition(0);

		
		People people = new People();
		people.set_location(19);
		people.set_Goto(6);
		
		assertEquals("elevator1",new ag().fun( elevator1, elevator2, elevator3, elevator4, people));
		
	}
	@Test
	public void test2() 
	{
		Elevator elevator1 = new Elevator();
		elevator1.set_ele_num(1);
		elevator1.set_currentpose(8);
		elevator1.set_condition(1);

		Elevator elevator2 = new Elevator();
		elevator2.set_ele_num(2);
		elevator2.set_currentpose(6);
		elevator2.set_condition(1);
		
		Elevator elevator3 = new Elevator();
		elevator3.set_ele_num(3);
		elevator3.set_currentpose(5);
		elevator3.set_condition(-1);

		
		Elevator elevator4 = new Elevator();
		elevator4.set_ele_num(4);
		elevator4.set_currentpose(12);
		elevator4.set_condition(1);

		
		People people = new People();
		people.set_location(6);
		people.set_Goto(20);
		
		assertEquals("elevator4",new ag().fun( elevator1, elevator2, elevator3, elevator4, people));
		
	}
}
