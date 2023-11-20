void __fastcall BattleServantActionHistory___ctor(
        BattleServantActionHistory_o *this,
        int32_t type,
        int32_t in_targetUniqueID,
        int32_t wavecount,
        bool isOpponent,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actType = type;
  this->fields.targetUniqueId = in_targetUniqueID;
  this->fields.waveCount = wavecount;
  this->fields.isOpponent = isOpponent;
}


bool __fastcall BattleServantActionHistory__IsOpponent(BattleServantActionHistory_o *this, const MethodInfo *method)
{
  return this->fields.isOpponent;
}


int32_t __fastcall BattleServantActionHistory__getReactionTarget(
        BattleServantActionHistory_o *this,
        const MethodInfo *method)
{
  return this->fields.targetUniqueId;
}


bool __fastcall BattleServantActionHistory__isDamage(BattleServantActionHistory_o *this, const MethodInfo *method)
{
  int32_t actType; // w8

  actType = this->fields.actType;
  return (unsigned int)(actType - 1) < 4 || (actType | 1) == 7;
}