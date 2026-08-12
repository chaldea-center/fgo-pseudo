void BattleServantActionHistory___ctor(
        BattleServantActionHistory_o *this,
        int32_t type,
        int32_t in_targetUniqueID,
        int32_t wavecount,
        bool isOpponent,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.actType = type;
  this->fields.targetUniqueId = in_targetUniqueID;
  this->fields.waveCount = wavecount;
  this->fields.isOpponent = isOpponent;
  this->fields.isEnableLastAttackInfo = (unsigned int)(type - 3) < 0xFFFFFFFE;
}


void BattleServantActionHistory___ctor_53523256(
        BattleServantActionHistory_o *this,
        BattleServantActionHistory_SaveData_o *save,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !save )
    sub_2213CDC(v5, v6);
  *(_QWORD *)&this->fields.actType = *(_QWORD *)&save->fields.actType;
  this->fields.waveCount = save->fields.waveCount;
  *(_WORD *)&this->fields.isOpponent = *(_WORD *)&save->fields.isOpponent;
}


BattleServantActionHistory_SaveData_o *BattleServantActionHistory__GetSaveData(
        BattleServantActionHistory_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_597374B & 1) == 0 )
  {
    sub_2213A60(&BattleServantActionHistory_SaveData_TypeInfo);
    byte_597374B = 1;
  }
  v3 = sub_2213CCC(BattleServantActionHistory_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 16) = *(_QWORD *)&this->fields.actType;
  *(_DWORD *)(v3 + 24) = this->fields.waveCount;
  *(_WORD *)(v3 + 28) = *(_WORD *)&this->fields.isOpponent;
  return (BattleServantActionHistory_SaveData_o *)v3;
}


bool BattleServantActionHistory__IsAttackDamage(BattleServantActionHistory_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.actType - 1) < 2;
}


bool BattleServantActionHistory__IsOpponent(BattleServantActionHistory_o *this, const MethodInfo *method)
{
  return this->fields.isOpponent;
}


int32_t BattleServantActionHistory__getReactionTarget(BattleServantActionHistory_o *this, const MethodInfo *method)
{
  return this->fields.targetUniqueId;
}


bool BattleServantActionHistory__isDamage(BattleServantActionHistory_o *this, const MethodInfo *method)
{
  return (this->fields.actType < 8u) & (0xDEu >> this->fields.actType);
}


void BattleServantActionHistory_SaveData___ctor(BattleServantActionHistory_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}