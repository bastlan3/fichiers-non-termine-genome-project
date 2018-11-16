#include "case_two.h"
#include <iostream>
case_two::case_two (int l, std::string file, std::string gene_seq){
	lenght=l;
	name =file;
	genome= gene_seq;
	matrix(l);
	
	//do we open flows here?
	}

void case_two::step(){
	int counter(0);
	while (not EOF/*bedfile*/){
		//has to read line+ return first values of bed file
		weights();
		counter++;
		}
	divide_matrix(counter)
	}
	
void case_two::weights(std::array <int, 3> info){
	int K;
	K=info[0];
	std::array<double, lenght> tmp;
	int start(info[1]);
	int stop(info[2]);
	int size size_motif(start, stop);
	double weight(1);
	if (size!=lenght) {
		weight=1/(size+1);
			for (int i(0); i<size; i++){
				tmp += compute(start +i, weight);//verif
			}
		}else 
		compute(start, weight);
	}

void case_two::compute(int debut,int weight){
	//has to iterate on the genome on the lenght only
	std::array<int, lenght> result;	
	std::array<std::char, lenght> letter_code;
	if (weight!=1){
		letter_code=tmp[lenght-1];
		letter_code+=lecteur.lit(debut, lenght-1)
		}else if(overlap[counter_overlap]){
			int size_overlapped(counter-debut)
			letter_code = (tmp.end()-size,tmp.end());///////////
			letter_code+=lecteur.lit(debut+size_overlapped, lenght-size_overlapped);
			}
			//ne fonctionne pas pour les sequences plus longues
		//std::vector<int> overlaped;
		//int longueur (lenght-(counter-debut[pos]));
		//overlaped=iter(debut[pos])
		//result =(tmp.end()-overlaped.size(), tmp.end())
		//result+=overlaped
		}else {
			result=iter(debut[pos])
		}
	for (int i(0);i<lenght;++i){
		switch (letter_code[i]){
			case A : result[i]=0;
			break;
			case C : result[i]=1;
			break;
			case G : result[i]=2;
			break;
			case T : result[i]=3;
			break;
			case a : result[i]=0;
			break;
			case c : result[i]=1;
			break;
			case g : result[i]=2;
			break;
			case t : result[i]=3;
			break;
			default : break; ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			}
		}
	add_matrix(result, weight);
	tmp= result;
	++counter_overlap;
	}
	
void case_two::add_matrix(std::array<double, lenght> seq, double weight){
	for (int i(0); i<lenght; ++i)
	 matrix[i][seq[i]]+=weight;
	}
	
std::array <int, 3> case_two::readline(){
	//has to iterrate each line of the bed file and separate at tabs return the kromosome start and end
	//already done?
	}
	
int case_two::size_motif(int start, int end){
	return end -start-lenght;
	}

void case_two::divide_matrix(int weight){
	for (int i(0);i<lenght;++i){
		for (int j(0);j<4;++j){
			matrix[i][j]/=weight
			}
		}
	}

 case_two::read_bed(){
	string chromo, pos, debut, fin;
	while (not eof){
		pos=fichier.getline();
		int K (pos[3])//verifier la position
		pos.erase(pos.start, pos.start+4);
		int start(0);
		for (int i(0);i<pos.size()){
			if (pos[i]=='	') {
				++start;
				pos.erase(pos[i]);
				}
			if (start==0){
				chromo+=pos[i]
			}else if(start==1){
				debut+=pos[i]
				}else if(start==1){
					fin+=pos[i]
					}
		
			pos.erase(i);
			}
		add_bed(chromo, debut, fin);
		}
	}
	
std::vector<int> case_two::iter (int start,int longueur= lenght){
	std::vector<int> result;	
	for (inti (0);i<start+longueur;+i){
		counter++
		int c;
		if (counter>start){
			result += char
			}
		c= getchar();
		}
	return result;
	}

void case_two::add_bed(string chromo, string d, string f){
	int start, end;
	chromo= (chromo.begin()+3, chromo.end());
	(bed(std::stio(chromo)).second).push_back(std::make_pair(std::stio(d),std::stio(f)));
	}
	
void case_two::tri(){
	int taille (bed.size());
	for(int i(0);i<=taille;i++){
		std::vectort<std::pair<int,int>>tmp1=(bed(i).second)
		std::vector<int>tmp2=tmp1.first;
		std::vector<int>tmp3=tmp1.second;		
		std::sort(tmp1.begin(), tmp1.end());
		std::sort(tmp2.begin(), tmp2.end());
		(bed(i).second).first=tmp1;
		(bed(i).second).second=tmp2;
		}
	}

void case_two::overlapping(){
	int taille (bed.size());
	int size ((bed.second).size())
	for(int j(0);i<=taille;i++){
		for(int i(0);i<size;++i){
			if ((bed(j).second)[i+1].first>(bed(j).second)[i].second){
				overlap.push_back(true);
				}else{
					overlap.push_back(false);
				}
			}
		}
	}
