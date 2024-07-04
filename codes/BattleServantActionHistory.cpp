void __fastcall BattleServantActionHistory___ctor(
        BattleServantActionHistory_o *this,
        int32_t type,
        int32_t in_targetUniqueID,
        int32_t wavecount,
        bool isOpponent,
        const MethodInfo *method)
{
  bool v10; // w23

  v10 = isOpponent;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actType = type;
  this->fields.targetUniqueId = in_targetUniqueID;
  this->fields.waveCount = wavecount;
  this->fields.isOpponent = v10;
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
  unsigned int v2; // w8
  _BOOL4 v3; // w0

  v2 = this->fields.actType - 1;
  if ( v2 > 6 )
    LOBYTE(v3) = 0;
  else
    return (0x6Fu >> v2) & 1;
  return v3;
}