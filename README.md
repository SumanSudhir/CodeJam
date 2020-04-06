# CodeJam
https://codingcompetitions.withgoogle.com/codejam/






<div class="problem-statement-string"><h3>Problem 1</h3> <p>
  Vestigium means "trace" in Latin. In this problem we work with Latin squares
  and matrix traces.
</p><p>
  The <i>trace</i> of a square matrix is the sum of the values on the main
  diagonal (which runs from the upper left to the lower right).
</p><p>
  An <b>N</b>-by-<b>N</b> square matrix is a <i>Latin square</i> if each
  cell contains one of <b>N</b> different values, and no value is repeated
  within a row or a column. In this problem, we will deal only with "natural
  Latin squares" in which the <b>N</b> values are the integers between 1 and
  <b>N</b>.
</p><p>
  Given a matrix that contains only integers between 1 and <b>N</b>, we want to
  compute its trace and check whether it is a natural Latin square. To give
  some additional information, instead of simply telling us whether the matrix
  is a natural Latin square or not, please compute the number of rows and the
  number of columns that contain repeated values.
</p> <h3>Input</h3> <p>
  The first line of the input gives the number of test cases, <b>T</b>.
  <b>T</b> test cases follow. Each starts with a line containing a single
  integer <b>N</b>: the size of the matrix to explore. Then, <b>N</b> lines
  follow. The i-th of these lines contains <b>N</b> integers
  <b>M<sub>i,1</sub></b>, <b>M<sub>i,2</sub></b> ..., <b>M<sub>i,N</sub></b>.
  <b>M<sub>i,j</sub></b> is the integer in the i-th row and j-th column of the
  matrix.
</p> <h3>Output</h3> <p>
  For each test case, output one line containing <code>Case #x: k r c</code>,
  where <code>x</code> is the test case number (starting from 1),
  <code>k</code> is the trace of the matrix, <code>r</code> is the number of
  rows of the matrix that contain repeated elements, and <code>c</code> is the
  number of columns of the matrix that contain repeated elements.
</p> <h3>Limits</h3> <h4>Test set 1 (Visible Verdict)</h4> <p>
  Time limit: 20 seconds per test set.<br>
  Memory limit: 1GB.<br>
  1 ≤ <b>T</b> ≤ 100.<br>
  2 ≤ <b>N</b> ≤ 100.<br>
  1 ≤ <b>M<sub>i,j</sub></b> ≤ <b>N</b>, for all i, j.<br></p> <h3>Sample</h3> <div class="problem-io-wrapper"><table><tr><td><br> <span class="io-table-header">Input</span> <br>&nbsp;
  </td> <td><br> <span class="io-table-header">Output</span> <br>&nbsp;
  </td></tr> <tr><td><pre class="io-content">3
4
1 2 3 4
2 1 4 3
3 4 1 2
4 3 2 1
4
2 2 2 2
2 3 2 3
2 2 2 3
2 2 2 2
3
2 1 3
1 3 2
1 2 3

  </pre></td> <td><pre class="io-content">Case #1: 4 0 0
Case #2: 9 4 4
Case #3: 8 0 2

  </pre></td></tr></table></div> <p>
  In Sample Case #1, the input is a natural Latin square, which means no row or
  column has repeated elements. All four values in the main diagonal are 1, and
  so the trace (their sum) is 4.
</p><p>
  In Sample Case #2, all rows and columns have repeated elements. Notice that
  each row or column with repeated elements is counted only once regardless of
  the number of elements that are repeated or how often they are repeated
  within the row or column. In addition, notice that some integers in the range
  1 through <b>N</b> may be absent from the input.
</p><p>
  In Sample Case #3, the leftmost and rightmost columns have repeated elements.
</p></div>




<div class="problem-statement-string"><h3>Problem 2</h3> <p>
  tl;dr: Given a string of digits <b>S</b>, insert a minimum number of opening
  and closing parentheses into it such that the resulting string is balanced and
  each digit d is inside exactly d pairs of matching parentheses.
</p><p>
  Let the <i>nesting</i> of two parentheses within a string be the substring
  that occurs strictly between them. An opening parenthesis and a closing
  parenthesis that is further to its right are said to <i>match</i> if their
  nesting is empty, or if every parenthesis in their nesting matches with
  another parenthesis in their nesting. The <i>nesting depth</i> of a position
  p is the number of pairs of matching parentheses m such that p is included in
  the nesting of m.
</p><p>
  For example, in the following strings, all digits match their nesting
  depth: <code>0((2)1)</code>, <code>(((3))1(2))</code>, <code>((((4))))</code>,
  <code>((2))((2))(1)</code>. The first three strings have minimum length among
  those that have the same digits in the same order, but the last one does not
  since <code>((22)1)</code> also has the digits <code>221</code> and is
  shorter.
</p><p>
  Given a string of digits <b>S</b>, find another string S',
  comprised of parentheses and digits, such that:
  <ul><li>all parentheses in S' match some other parenthesis,</li> <li>removing any and all parentheses from S' results in <b>S</b>,</li> <li>each digit in S' is equal to its nesting depth, and</li> <li>S' is of minimum length.</li></ul></p> <h3>Input</h3> <p>
  The first line of the input gives the number of test cases, <b>T</b>.
  <b>T</b> lines follow. Each line represents a test case and contains only the
  string <b>S</b>.
</p> <h3>Output</h3> <p>
  For each test case, output one line containing <code>Case #x: y</code>, where
  <code>x</code> is the test case number (starting from 1) and <code>y</code>
  is the string S' defined above.
</p> <h3>Limits</h3> <p>
  Time limit: 20 seconds per test set.<br>
  Memory limit: 1GB.<br>
  1 ≤ <b>T</b> ≤ 100.<br>
  1 ≤ length of <b>S</b> ≤ 100.<br></p> <h4>Test set 1 (Visible Verdict)</h4> <p>
  Each character in <b>S</b> is either <code>0</code> or <code>1</code>.<br></p> <h4>Test set 2 (Visible Verdict)</h4> <p>
  Each character in <b>S</b> is a decimal digit between <code>0</code> and
  <code>9</code>, inclusive.<br></p> <h3>Sample</h3> <div class="problem-io-wrapper"><table><tr><td><br> <span class="io-table-header">Input</span> <br>&nbsp;
  </td> <td><br> <span class="io-table-header">Output</span> <br>&nbsp;
  </td></tr> <tr><td><pre class="io-content">4
0000
101
111000
1

  </pre></td> <td><pre class="io-content">Case #1: 0000
Case #2: (1)0(1)
Case #3: (111)000
Case #4: (1)

  </pre></td></tr></table></div> <p>
  The strings <code>()0000()</code>, <code>(1)0(((()))1)</code> and
  <code>(1)(11)000</code> are not valid solutions to Sample Cases #1, #2 and
  #3, respectively, only because they are not of minimum length. In addition,
  <code>1)(</code> and <code>)(1</code> are not valid solutions to Sample Case
  #4 because they contain unmatched parentheses and the nesting depth is 0
  at the position where there is a 1.
</p><p>
  You can create sample inputs that are valid only for Test Set 2 by removing
  the parentheses from the example strings mentioned in the problem statement.
</p></div>




<div class="problem-statement-string"><h3>Problem</h3> <p>
Cameron and Jamie's kid is almost 3 years old! However, even though the child is more independent
now, scheduling kid activities and domestic necessities is still a challenge for the couple.
</p><p>
Cameron and Jamie have a list of <b>N</b> activities to take care of during the day. Each activity
happens during a specified interval during the day. They need to assign each activity to one
of them, so that neither of them is responsible for two activities that overlap.
An activity that ends at time t is not considered to overlap with another activity that
starts at time t.
</p><p>
For example, suppose that Jamie and Cameron need to cover 3 activities: one running
from 18:00 to 20:00, another from 19:00 to 21:00 and another from 22:00 to 23:00.
One possibility would be for Jamie to cover the activity running from 19:00 to 21:00,
with Cameron covering the other two. Another valid schedule would be for Cameron to
cover the activity from 18:00 to 20:00 and Jamie to cover the other two. Notice
that the first two activities overlap in the time between 19:00 and 20:00, so it is
impossible to assign both of those activities to the same partner.
</p><p>
Given the starting and ending times of each activity, find any schedule that does not require
the same person to cover overlapping activities, or say that it is impossible.
</p> <h3>Input</h3> <p>
The first line of the input gives the number of test cases, <b>T</b>. <b>T</b> test cases follow.
Each test case starts with a line containing a single integer <b>N</b>, the number of activities
to assign. Then, <b>N</b> more lines follow. The i-th of these lines (counting starting from 1)
contains two integers <b>S<sub>i</sub></b> and <b>E<sub>i</sub></b>.
The i-th activity starts exactly <b>S<sub>i</sub></b> minutes after
midnight and ends exactly <b>E<sub>i</sub></b> minutes after midnight.
</p> <h3>Output</h3> <p>
For each test case, output one line containing <code>Case #x: y</code>, where <code>x</code> is
the test case number (starting from 1) and <code>y</code> is <code>IMPOSSIBLE</code> if there
is no valid schedule according to the above rules, or a string of exactly <b>N</b> characters
otherwise. The i-th character in <code>y</code> must be <code>C</code> if the i-th activity
is assigned to Cameron in your proposed schedule, and <code>J</code> if it is assigned to
Jamie.
</p><p>
  If there are multiple solutions, you may output any one of them. (See
  "What if a test case has multiple correct solutions?" in the Competing
  section of the
  <a href="https://codingcompetitions.withgoogle.com/codejam/faq#competing">FAQ</a>. This
  information about multiple solutions will not be explicitly stated in the
  remainder of the 2020 contest.)
</p> <h3>Limits</h3> <p>
Time limit: 20 seconds per test set.<br>
Memory limit: 1GB.<br>
1 ≤ <b>T</b> ≤ 100.<br>
0 ≤ <b>S<sub>i</sub></b> &lt; <b>E<sub>i</sub></b> ≤ 24 × 60.<br></p> <h4>Test set 1 (Visible Verdict)</h4> <p>
2 ≤ <b>N</b> ≤ 10.<br></p> <h4>Test set 2 (Visible Verdict)</h4> <p>
2 ≤ <b>N</b> ≤ 1000.<br></p> <h3>Sample</h3> <div class="problem-io-wrapper"><table><tr><td><br> <span class="io-table-header">Input</span> <br>&nbsp;
  </td> <td><br> <span class="io-table-header">Output</span> <br>&nbsp;
  </td></tr> <tr><td><pre class="io-content">4
3
360 480
420 540
600 660
3
0 1440
1 3
2 4
5
99 150
1 100
100 301
2 5
150 250
2
0 720
720 1440

  </pre></td> <td><pre class="io-content">Case #1: CJC
Case #2: IMPOSSIBLE
Case #3: JCCJJ
Case #4: CC

  </pre></td></tr></table></div> <p>
  Sample Case #1 is the one described in the problem statement. As mentioned above, there are other
  valid solutions, like <code>JCJ</code> and <code>JCC</code>.
</p><p>
  In Sample Case #2, all three activities overlap with each other. Assigning them all would mean
  someone would end up with at least two overlapping activities, so there is no valid schedule.
</p><p>
  In Sample Case #3, notice that Cameron ends an activity and starts another one at minute 100.
</p><p>
  In Sample Case #4, any schedule would be valid. Specifically, it is OK for one partner to do
  all activities.
</p></div>





<div class="problem-statement-string"><h3>Problem 4</h3> <p>
  Last year, a research consortium
  <a href="https://codingcompetitions.withgoogle.com/codejam/round/0000000000051705/00000000000881de" target="_blank">had some trouble</a>
  with a distributed database system that sometimes lost pieces of the data.
  You do not need to read or understand that problem in order to solve this
  one!
</p><p>
  The consortium has decided that distributed systems are too complicated, so
  they are storing <b>B</b> bits of important information in a
  single array on one awesome machine. As an additional layer of security,
  they have made it difficult to obtain the information quickly; the user must
  query for a bit position between 1 and <b>B</b>, and then they receive that
  bit of the stored array as a response.
</p><p>
  Unfortunately, this ultra-modern machine is subject to random quantum
  fluctuations! Specifically, after every 1st, 11th, 21st, 31st... etc. query
  is sent, <i>but before the response is given</i>, quantum fluctuation causes
  exactly one of the following four effects, with equal probability:
</p> <ul><li>25% of the time, the array is complemented: every <code>0</code> becomes
    a <code>1</code>, and vice versa.</li> <li>25% of the time, the array is reversed: the first bit swaps with the last
    bit, the second bit swaps with the second-to-last bit, and so on.</li> <li>25% of the time, both of the things above (complementation and reversal)
    happen to the array. (Notice that the order in which they happen does not
    matter.)</li> <li>25% of the time, nothing happens to the array.</li></ul> <p>
  Moreover, there is no indication of what effect the quantum fluctuation
  has had each time. The consortium is now concerned, and it has hired you
  to get its precious data back, in whatever form it is in! Can you find
  the entire array, such that your answer is accurate
  <i>as of the time that you give it</i>? Answering does not count as a query,
  so if you answer after your 30th query, for example, the array will be the
  same as it was after your 21st through 30th queries.
</p> <h3>Input and output</h3> <p>
  This is an interactive problem. You should make sure you have read the
  information in the
  <a href="https://codingcompetitions.withgoogle.com/codejam/faq#interactive-problems" target="_blank">Interactive Problems section</a>
  of our FAQ.
</p><p>
  Initially, your program should read a single line containing two integers
  <b>T</b> and <b>B</b>: the number of test cases and the number of bits
  in the array, respectively. Note that <b>B</b> is the same for every test
  case.
</p><p>
  Then, you need to process <b>T</b> test cases. In each case, the judge begins
  with a predetermined <b>B</b>-bit array; note that this array can vary from
  test case to test case, and is not necessarily chosen at random. Then, you
  may make up to 150 queries of the following form:
</p> <ul><li>Your program outputs one line containing a single integer P between 1 and
    <b>B</b>, inclusive, indicating which position in the array you wish to
    look at.
  </li><li>
    If the number of queries you have made so far ends with a 1, the judge
    chooses one of the four possibilities described above (complementation,
    reversal, complementation + reversal, or nothing), uniformly at random and
    independently of all other choices, and alters the stored array
    accordingly. (Notice that this will happen on the very first query
    you make.)
  </li><li>
    The judge responds with one line containing a single character
    <code>0</code> or <code>1</code>, the value it currently has stored at bit
    position P, or <code>N</code> if you provided a malformed line (e.g., an
    invalid position).
  </li></ul> <p>
  Then, after you have made as many of the 150 queries above as you want, you
  must make one more exchange of the following form:
</p> <ul><li>Your program outputs one line containing a string of <b>B</b> characters,
    each of which is <code>0</code> or <code>1</code>, representing the bits
    <i>currently</i> stored in the array (which will not necessarily match the
    bits that were initially present!)
  </li> <li>
    The judge responds with one line containing a single letter:
    uppercase <code>Y</code> if your answer was correct, and uppercase
    <code>N</code> if it was not (or you provided a malformed line).
    If you receive <code>Y</code>, you should begin the next test case,
    or stop sending input if there are no more test cases.
  </li></ul> <p>
  After the judge sends <code>N</code> to your input stream, it will not send
  any other output. If your program continues to wait for the judge after
  receiving <code>N</code>, your program will time out, resulting in a Time
  Limit Exceeded error. Notice that it is your responsibility to have your
  program exit in time to receive a Wrong Answer judgment instead of a Time
  Limit Exceeded error. As usual, if the memory limit is exceeded, or your
  program gets a runtime error, you will receive the appropriate judgment.
</p> <h3>Limits</h3> <p>
  Time limit: 40 seconds per test set.<br>
  Memory limit: 1GB.<br>
  1 ≤ <b>T</b> ≤ 100.<br></p> <h4>Test set 1 (Visible Verdict)</h4> <p><b>B</b> = 10.<br></p> <h4>Test set 2 (Visible Verdict)</h4> <p><b>B</b> = 20.<br></p> <h4>Test set 3 (Hidden Verdict)</h4> <p><b>B</b> = 100.<br></p> <h3>Testing Tool</h3> <p>
  You can use this testing tool to test locally or on our servers.
  To test locally, you will need to run the tool in parallel with your code;
  you can use our
  <a href="https://storage.googleapis.com/coding-competitions.appspot.com/interactive_runner.py" target="_blank">interactive runner</a>
  for that. <b>The interactive runner was changed after the 2019 contest. Be sure to download the
  latest version.</b> For more information, read the
  <a href="https://codingcompetitions.withgoogle.com/codejam/faq#interactive-problems" target="_blank">Interactive Problems section</a>
  of the FAQ.
</p> <h3>Local Testing Tool</h3> <p>
  To better facilitate local testing, we provide you the following script.
  Instructions are included inside. You are encouraged to add more test cases
  for better testing. Please be advised that although the testing tool is
  intended to simulate the judging system, it is <b>NOT</b> the real judging
  system and might behave differently.
</p> <p>
  If your code passes the testing tool but fails the real judge, please check
  the <a href="https://codingcompetitions.withgoogle.com/codejam/faq#coding">
  Coding section</a> of our FAQ to make sure that you are using the same
  compiler as us.
</p><p><a href="https://codejam.googleapis.com/dashboard/get_file/AQj_6U1J1sPo9tw7JNMSbL8jn9SsS8lo9hUHLBYDH5mNVmgKaV6DJ_zLrVjy9INDjJAIdyRo8tA7aA/local_testing_tool.py" download="local_testing_tool.py">Download local testing tool</a></p> <h3>Sample Interaction</h3> <p>
  The following interaction corresponds to Test Set 1.
</p> <pre>  t, b = readline_int_list()      // reads 100 into t and 10 into b.
  // The judge starts with the predetermined array for this test case:
  // 0001101111. (Note: the actual Test Set 1 will not necessarily
  // use this array.)
  printline 1 to stdout   // we ask about position 1.
  flush stdout
  // Since this is our 1st query, and 1 is 1 mod 10, the judge secretly and
  // randomly chooses one of the four possible quantum fluctuation effects, as
  // described above. It happens to choose complementation + reversal, so now
  // the stored value is 0000100111.
  r = readline_chr()      // reads 0.
  printline 6 to stdout   // we ask about position 6.
  flush stdout
  // Since this is our 2nd query, and 2 is 2 mod 10, the judge does not choose
  // a quantum fluctuation effect.
  r = readline_chr()      // reads 0.
  ...
  // We have omitted the third through tenth queries in this example.
  ...
  printline 1 to stdout   // we decide to ask about position 1 again.
  flush stdout
  // Since this is our 11th query, and 11 is 1 mod 10, the judge secretly and
  // randomly chooses a quantum fluctuation effect, and happens to get
  // reversal, so now the stored value is 1110010000.
  r = readline_chr()      // reads 1.
  printline 1110110000 to stdout   // we try to answer. why?!?!
  flush stdout
  ok = readline_chr()     // reads N -- we have made a mistake!
  exit                    // exits to avoid an ambiguous TLE error
</pre></div>



<div class="problem-statement-string"><h3>Problem 5</h3> <p>
  Indicium means "trace" in Latin. In this problem we work with Latin squares and
  matrix traces.
</p><p>
  A <i>Latin square</i> is an <b>N</b>-by-<b>N</b> square matrix in which each
  cell contains one of <b>N</b> different values, such that no value is
  repeated within a row or a column. In this problem, we will deal only with
  "natural Latin squares" in which the <b>N</b> values are the integers between
  1 and <b>N</b>.
</p><p>
  The <i>trace</i> of a square matrix is the sum of the values on the main
  diagonal (which runs from the upper left to the lower right).
</p><p>
  Given values <b>N</b> and <b>K</b>, produce any <b>N</b>-by-<b>N</b> "natural
  Latin square" with trace <b>K</b>, or say it is impossible. For example, here
  are two possible answers for <b>N</b> = 3, <b>K</b> = 6. In each case, the
  values that contribute to the trace are underlined.
</p><p><code><u>2</u> 1 3&nbsp;&nbsp;&nbsp;<u>3</u> 1 2<br>
  3 <u>2</u> 1&nbsp;&nbsp;&nbsp;1 <u>2</u> 3<br>
  1 3 <u>2</u>&nbsp;&nbsp;&nbsp;2 3 <u>1</u><br></code></p> <h3>Input</h3> <p>
  The first line of the input gives the number of test cases, <b>T</b>.
  <b>T</b> test cases follow. Each consists of one line containing two integers
  <b>N</b> and <b>K</b>: the desired size of the matrix and the desired trace.
</p> <h3>Output</h3> <p>
  For each test case, output one line containing <code>Case #x: y</code>, where
  <code>x</code> is the test case number (starting from 1) and <code>y</code>
  is <code>IMPOSSIBLE</code> if there is no answer for the given parameters or
  <code>POSSIBLE</code> otherwise. In the latter case, output <b>N</b> more
  lines of <b>N</b> integers each, representing a valid "natural Latin square"
  with a trace of <b>K</b>, as described above.
</p> <h3>Limits</h3> <p>
  Time limit: 20 seconds per test set.<br>
  Memory limit: 1GB.<br> <b>N</b> ≤ <b>K</b> ≤ <b>N</b><sup>2</sup>.<br></p> <h4>Test set 1 (Visible Verdict)</h4> <p><b>T</b> = 44.<br>
  2 ≤ <b>N</b> ≤ 5.<br></p> <h4>Test set 2 (Hidden Verdict)</h4> <p>
  1 ≤ <b>T</b> ≤ 100.<br>
  2 ≤ <b>N</b> ≤ 50.<br></p> <h3>Sample</h3> <div class="problem-io-wrapper"><table><tr><td><br> <span class="io-table-header">Input</span> <br>&nbsp;
  </td> <td><br> <span class="io-table-header">Output</span> <br>&nbsp;
  </td></tr> <tr><td><pre class="io-content">2
3 6
2 3

  </pre></td> <td><pre class="io-content">Case #1: POSSIBLE
2 1 3
3 2 1
1 3 2
Case #2: IMPOSSIBLE

  </pre></td></tr></table></div> <p>
  Sample Case #1 is the one described in the problem statement.
</p><p>
  Sample Case #2 has no answer. The only possible 2-by-2
  "natural Latin squares" are as follows:
</p> <code>
  1 2&nbsp;&nbsp;&nbsp;2 1<br>
  2 1&nbsp;&nbsp;&nbsp;1 2<br></code> <p>
  These have traces of 2 and 4, respectively. There is no way to get a trace
  of 3.
</p></div>
