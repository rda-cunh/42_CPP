/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 07:53:43 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/09/09 18:50:18 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

// main from the subject
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}

/*
//main from the subject but with a list
int main()
{
    std::list<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << mstack.back() << std::endl;
    mstack.pop_back();
    std::cout << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    //[...]
    mstack.push_back(0);
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::list<int> s(mstack);
    return 0;
} */

/* // my version of the main (adapted from subject)
int main()
{
    std::cout << "*** Tests from subject ***" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << "Top element: " << mstack.top() << std::endl;

    mstack.pop();
    std::cout << "Size after pop one element: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << "Iterating on the stack elements (like in a list or array): "
              << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "*** Other tests: copy constructor, copy assignment operator and printing elements ***" << std::endl;
    MutantStack<int> copy_stack(mstack);
    for (MutantStack<int>::iterator it = copy_stack.begin(); it != copy_stack.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    return 0;
} */
