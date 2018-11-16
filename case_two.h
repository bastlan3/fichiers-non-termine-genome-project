#include <vector>
#include <string>
#include "Lecture.h"
class case_two{
private: 
std::vector<std::array <double, 4>> matrix;
int lenght;
int counter(0);
int counter_overlap(0)
std::string name;
std::string genome;//do we open a flow in main or just use the name?
std::array<double, lenght> tmp;
std::vector<int> debut;
std::vector<int> fin;
std::vector<bool> overlap;
std::map<int, std::vector<std::pair<int,int>>>bed;
Lecture lecteur;
public:
case_two (int l, std::string file, std::string gene_seq);//has to open flows & test them
void step();//will be repeated until end of the bed file is reached has t have a counter to have a good proba at the end
std::array <int, 3> readline();//has to find the start and end position will call compute
int size_motif(int start, int end);//checks if the size is =to lenght returns the number of char in more or less than lenght
std::array<double, lenght> weights(std::array <int, 3>)/*will call on size_motif to know if ponderation is needed
									if no compute ->add_matrix
									* if yes cuts in size_motif() parts with each time the start seq moving one forward& call compute each time
									* then divide the array by its"wight" to have a correct proba
									* -> then add_matrix*/
void compute(int start);// iterates on sequence and return vector
void add_matrix(std::array<int, lenght>, double weight);//adds the sequence found on the matrix, a==0, t==1,c==2, g==3
void divide_matrix(int weight)
void tri();
void add_bed(string chromo, string d, string f);
}


//questions can a position be easyly found on fasta or has to iter one by one
//		are the bed files in order or do we have to class thoses? K and sequence-> might need a function order
//		what to do when the sequences overlapse?
//		can we move back on fastafile for function weight or do we save the size and cut in in small pieces
//use of ftell() and fseek() to "choose position"-> useful o go back to the first char of the sequence if they overlapse
// use of getc() to return the char pointed and move posiion to next
//could ty to use the position system to not have a counter but not sure it works
//use getline() and find('	') to go in the bed file and choose the position
//

///dans les vector debut et fin utilisation du numero de chromosomecomme premier nombre avant la position$

