void BattleSkillDropInfo___ctor(
        BattleSkillDropInfo_o *this,
        int32_t uniqueId,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  FunctionEntity_o *funcEnt; // x0
  __int64 v8; // x1
  struct BattleSkillDropInfo_JsonConvertData_o **p_data; // x20

  if ( (byte_4CF13FA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_EnumUtility_CastToEnum_DropInfo_DropEffectType___);
    byte_4CF13FA = 1;
  }
  DropInfo___ctor((DropInfo_o *)this, 0);
  this->fields.dropperUniqueId = uniqueId;
  if ( !baseVals )
    goto LABEL_9;
  this->fields._SkillId_k__BackingField = DataVals__GetParam(baseVals, 3, 0, 0);
  this->fields._SkillLv_k__BackingField = DataVals__GetParam(baseVals, 4, 0, 0);
  funcEnt = baseVals->fields.funcEnt;
  if ( !funcEnt )
    goto LABEL_9;
  p_data = &this->fields.data;
  funcEnt = (FunctionEntity_o *)FunctionEntity__TryGetBattleSkillDropInfoDict(funcEnt, &this->fields.data, 0);
  if ( ((unsigned __int8)funcEnt & 1) != 0 )
  {
    if ( *p_data )
    {
      this->fields.effectType = EnumUtility__CastToEnum_Int32Enum_(
                                  (*p_data)->fields.dropEffectType,
                                  0,
                                  (const MethodInfo_31773B8 *)Method_EnumUtility_CastToEnum_DropInfo_DropEffectType___);
      goto LABEL_8;
    }
LABEL_9:
    sub_1C7BD40(funcEnt, v8);
  }
LABEL_8:
  this->fields.rarity = 1000;
  DropInfo__setNum((DropInfo_o *)this, 1, 0);
}


void BattleSkillDropInfo__SetBattleMoveObject(
        BattleSkillDropInfo_o *this,
        BattleMoveObject_o *moveObject,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._BattleMoveObject_k__BackingField = moveObject;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._BattleMoveObject_k__BackingField,
    (int32_t)moveObject,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


int32_t BattleSkillDropInfo__get_AppearEffectId(BattleSkillDropInfo_o *this, const MethodInfo *method)
{
  struct BattleSkillDropInfo_JsonConvertData_o *data; // x8

  data = this->fields.data;
  if ( data )
    return data->fields.appearEffectId;
  else
    return 0;
}


int32_t BattleSkillDropInfo__get_AppearItemWait(BattleSkillDropInfo_o *this, const MethodInfo *method)
{
  struct BattleSkillDropInfo_JsonConvertData_o *data; // x8

  data = this->fields.data;
  if ( data )
    return data->fields.appearItemWait;
  else
    return 0;
}


BattleMoveObject_o *BattleSkillDropInfo__get_BattleMoveObject(BattleSkillDropInfo_o *this, const MethodInfo *method)
{
  return this->fields._BattleMoveObject_k__BackingField;
}


int32_t BattleSkillDropInfo__get_BreakEffectId(BattleSkillDropInfo_o *this, const MethodInfo *method)
{
  struct BattleSkillDropInfo_JsonConvertData_o *data; // x8

  data = this->fields.data;
  if ( data )
    return data->fields.breakEffectId;
  else
    return 0;
}


int32_t BattleSkillDropInfo__get_ImageId(BattleSkillDropInfo_o *this, const MethodInfo *method)
{
  struct BattleSkillDropInfo_JsonConvertData_o *data; // x8

  data = this->fields.data;
  if ( data )
    return data->fields.imageId;
  else
    return 0;
}


bool BattleSkillDropInfo__get_IsRandomShiftInitialPosition(BattleSkillDropInfo_o *this, const MethodInfo *method)
{
  struct BattleSkillDropInfo_JsonConvertData_o *data; // x8

  data = this->fields.data;
  return data && data->fields.isRandomShiftInitialPosition == 1;
}


int32_t BattleSkillDropInfo__get_SkillId(BattleSkillDropInfo_o *this, const MethodInfo *method)
{
  return this->fields._SkillId_k__BackingField;
}


int32_t BattleSkillDropInfo__get_SkillLv(BattleSkillDropInfo_o *this, const MethodInfo *method)
{
  return this->fields._SkillLv_k__BackingField;
}


void BattleSkillDropInfo__set_BattleMoveObject(
        BattleSkillDropInfo_o *this,
        BattleMoveObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._BattleMoveObject_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._BattleMoveObject_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleSkillDropInfo_JsonConvertData___ctor(BattleSkillDropInfo_JsonConvertData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}