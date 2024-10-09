#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include <vector>

int main(void)
{
	int i = 0;

	Animal	*groupOfAnimals[10];
	// groupOfAnimals.resize(10);
	std::string ideas[100];

ideas[0] = "A traveling library on wheels";
ideas[1] = "Eco-friendly packaging solutions";
ideas[2] = "A podcast about obscure historical events";
ideas[3] = "A recipe book for single servings";
ideas[4] = "A mobile app for language exchange";
ideas[5] = "A community garden project";
ideas[6] = "A documentary on urban wildlife";
ideas[7] = "A subscription box for local artisans";
ideas[8] = "A website for sharing DIY home improvement tips";
ideas[9] = "A virtual reality travel experience";
ideas[10] = "A pop-up café that features local artists";
ideas[11] = "An educational board game for kids";
ideas[12] = "A series of workshops on mindfulness";
ideas[13] = "A clothing swap event";
ideas[14] = "A mobile farmers market";
ideas[15] = "A children's book about mental health";
ideas[16] = "A campaign for beach clean-ups";
ideas[17] = "An online platform for pet adoption";
ideas[18] = "A social media challenge for sustainability";
ideas[19] = "A guided nature walk series";
ideas[20] = "A recipe-sharing app for families";
ideas[21] = "A digital archive of local histories";
ideas[22] = "A mentorship program for young entrepreneurs";
ideas[23] = "A community mural project";
ideas[24] = "A cookbook featuring international street food";
ideas[25] = "A podcast about mental health awareness";
ideas[26] = "A film festival focusing on short films";
ideas[27] = "A series of workshops on financial literacy";
ideas[28] = "An online marketplace for handmade crafts";
ideas[29] = "A mobile app for volunteer opportunities";
ideas[30] = "A cooking class featuring seasonal ingredients";
ideas[31] = "A fitness challenge app for friends";
ideas[32] = "A local history walking tour";
ideas[33] = "A blog dedicated to sustainable fashion";
ideas[34] = "A series of nature photography contests";
ideas[35] = "A volunteer program for local schools";
ideas[36] = "A mobile app for tracking personal goals";
ideas[37] = "A community potluck dinner";
ideas[38] = "A digital platform for collaborative art projects";
ideas[39] = "An outdoor movie night series";
ideas[40] = "A wildlife conservation awareness campaign";
ideas[41] = "A traveling art exhibit";
ideas[42] = "A project documenting local legends";
ideas[43] = "An interactive online map of historical sites";
ideas[44] = "A monthly book club focusing on diverse authors";
ideas[45] = "A series of workshops on coding for beginners";
ideas[46] = "A podcast featuring interviews with local leaders";
ideas[47] = "A weekend retreat for creative writing";
ideas[48] = "A community-based recycling initiative";
ideas[49] = "A website for sharing travel tips and itineraries";
ideas[50] = "A mobile app for mindfulness meditation";
ideas[51] = "A documentary series on grassroots movements";
ideas[52] = "A recipe contest featuring local ingredients";
ideas[53] = "A series of yoga classes in local parks";
ideas[54] = "A platform for crowdfunding community projects";
ideas[55] = "A travel guide for hidden gems in your city";
ideas[56] = "A blog about urban gardening";
ideas[57] = "A community art supply swap";
ideas[58] = "A video series on local food producers";
ideas[59] = "A mentorship program for aspiring artists";
ideas[60] = "A book exchange program in public libraries";
ideas[61] = "A challenge for zero waste living";
ideas[62] = "A digital platform for neighborhood watch groups";
ideas[63] = "A series of talks on climate change solutions";
ideas[64] = "A podcast about personal growth stories";
ideas[65] = "A community bike repair workshop";
ideas[66] = "An interactive online journal for self-reflection";
ideas[67] = "A cooking show featuring family recipes";
ideas[68] = "A campaign for improving local public spaces";
ideas[69] = "A series of workshops on effective communication";
ideas[70] = "A mobile app for finding local events";
ideas[71] = "A fundraising event for local charities";
ideas[72] = "A book series focused on mental health";
ideas[73] = "A digital storytelling project for seniors";
ideas[74] = "A community choir for all ages";
ideas[75] = "A platform for sharing sustainability tips";
ideas[76] = "A series of fitness classes in local parks";
ideas[77] = "An art installation promoting mental health";
ideas[78] = "A podcast discussing cultural heritage";
ideas[79] = "A community knitting circle";
ideas[80] = "A mobile app for mental wellness resources";
ideas[81] = "A photo project documenting everyday life";
ideas[82] = "A blog about adventures in hiking";
ideas[83] = "A series of workshops on plant-based cooking";
ideas[84] = "A community cleanup competition";
ideas[85] = "An online course for digital literacy";
ideas[86] = "A project creating accessible public art";
ideas[87] = "A social media campaign for kindness";
ideas[88] = "A blog featuring interviews with local chefs";
ideas[89] = "A series of environmental education programs";
ideas[90] = "A community theater project";
ideas[91] = "A podcast about science for everyone";
ideas[92] = "A local history trivia night";
ideas[93] = "A challenge for daily gratitude journaling";
ideas[94] = "A photo contest celebrating community diversity";
ideas[95] = "A series of talks on personal development";
ideas[96] = "A community-based art gallery";
ideas[97] = "A podcast about everyday heroes";
ideas[98] = "A workshop series on eco-conscious living";
ideas[99] = "A mobile app for exploring nature trails";

	while(i < 5)
	{
		groupOfAnimals[i] = new Cat();
		i ++;
	}
	while(i < 10)
	{
		groupOfAnimals[i] = new Dog();
		i ++;
	}
	i = 0;
	while(i < 10)
	{
		groupOfAnimals[i]->makeSound();
		i ++;
	}




	
 	groupOfAnimals[0]->getIdeas(ideas);

 	groupOfAnimals[2] = groupOfAnimals[0];
 	
 	i = 0;
	delete groupOfAnimals[0];
	// while(i < 10)
	// {
	// 	delete groupOfAnimals[i];
	// 	i ++;
	// }
	groupOfAnimals[2]->printIdeas();
	
	
}