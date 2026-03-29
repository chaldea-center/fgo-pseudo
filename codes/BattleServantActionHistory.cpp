void BattleServantActionHistory___ctor(
        BattleServantActionHistory_o *this,
        int32_t type,
        int32_t in_targetUniqueID,
        int32_t wavecount,
        bool isOpponent,
        const MethodInfo *method)
{
  bool v10; // w23

  v10 = isOpponent;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.actType = type;
  this->fields.targetUniqueId = in_targetUniqueID;
  this->fields.waveCount = wavecount;
  this->fields.isOpponent = v10;
  this->fields.isEnableLastAttackInfo = (unsigned int)(type - 1) > 1;
}


void BattleServantActionHistory___ctor_47134152(
        BattleServantActionHistory_o *this,
        BattleServantActionHistory_SaveData_o *save,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !save )
    sub_1C93D2C(v5, v6);
  *(_QWORD *)&this->fields.actType = *(_QWORD *)&save->fields.actType;
  this->fields.waveCount = save->fields.waveCount;
  this->fields.isOpponent = save->fields.isOpponent;
  this->fields.isEnableLastAttackInfo = save->fields.isEnableLastAttackInfo;
}


BattleServantActionHistory_SaveData_o *BattleServantActionHistory__GetSaveData(
        BattleServantActionHistory_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D3379B & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantActionHistory_SaveData_TypeInfo);
    byte_4D3379B = 1;
  }
  v3 = sub_1C93D20(BattleServantActionHistory_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C93D2C(v4, v5);
  *(_QWORD *)(v3 + 16) = *(_QWORD *)&this->fields.actType;
  *(_DWORD *)(v3 + 24) = this->fields.waveCount;
  *(_BYTE *)(v3 + 28) = this->fields.isOpponent;
  *(_BYTE *)(v3 + 29) = this->fields.isEnableLastAttackInfo;
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
  unsigned int v2; // w8
  _BOOL4 v3; // w0

  v2 = this->fields.actType - 1;
  if ( v2 > 6 )
    LOBYTE(v3) = 0;
  else
    return (0x6Fu >> v2) & 1;
  return v3;
}


void BattleServantActionHistory_SaveData___ctor(BattleServantActionHistory_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}