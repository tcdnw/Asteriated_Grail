#ifndef TEAM_H
#define TEAM_H

class Team
{
public:
    Team(bool isRed, int moraleMax=15);
    void setGrail(int howMany);
    void setCrystal(int howMany);
    void setGem(int howMany);
    void setMorale(int howMany);
    bool getColor();
    int getGrail();
    int getCrystal();
    int getGem();
    int getMorale();
    int getMoraleMax();
    int getEnergy(){return gem+crystal;}
private:
    bool isRed;
    int grail;
    int crystal;
    int gem;
    int morale; //ʿ��ֵ
    int moraleMax; //ʿ�����ֵ
};

#endif // TEAM_H