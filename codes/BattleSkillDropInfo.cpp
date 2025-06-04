// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSkillDropInfo___ctor(
        BattleSkillDropInfo_o *this,
        int32_t uniqueId,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  FunctionEntity_o *funcEnt; // x0
  __int64 v8; // x1
  struct BattleSkillDropInfo_JsonConvertData_o **p_data; // x20

  if ( (byte_4B04C15 & 1) == 0 )
  {
    sub_1BC3008(&Method_EnumUtility_CastToEnum_DropInfo_DropEffectType___, *(_QWORD *)&uniqueId);
    byte_4B04C15 = 1;
  }
  DropInfo___ctor((DropInfo_o *)this, 0LL);
  this->fields.dropperUniqueId = uniqueId;
  if ( !baseVals )
    goto LABEL_9;
  this->fields._SkillId_k__BackingField = DataVals__GetParam(baseVals, 3, 0, 0LL);
  this->fields._SkillLv_k__BackingField = DataVals__GetParam(baseVals, 4, 0, 0LL);
  funcEnt = baseVals->fields.funcEnt;
  if ( !funcEnt )
    goto LABEL_9;
  p_data = &this->fields.data;
  funcEnt = (FunctionEntity_o *)FunctionEntity__TryGetBattleSkillDropInfoDict(funcEnt, &this->fields.data, 0LL);
  if ( ((unsigned __int8)funcEnt & 1) != 0 )
  {
    if ( *p_data )
    {
      this->fields.effectType = EnumUtility__CastToEnum_Int32Enum_(
                                  (*p_data)->fields.dropEffectType,
                                  0,
                                  (const MethodInfo_3008E28 *)Method_EnumUtility_CastToEnum_DropInfo_DropEffectType___);
      goto LABEL_8;
    }
LABEL_9:
    sub_1BC3264(funcEnt, v8);
  }
LABEL_8:
  this->fields.rarity = 1000;
  DropInfo__setNum((DropInfo_o *)this, 1, 0LL);
}


void __fastcall BattleSkillDropInfo__SetBattleMoveObject(
        BattleSkillDropInfo_o *this,
        BattleMoveObject_o *moveObject,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BattleMoveObject_k__BackingField = moveObject;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._BattleMoveObject_k__BackingField,
    (int32_t)moveObject,
    (int32_t)method,
    v3);
}


int32_t __fastcall BattleSkillDropInfo__get_AppearEffectId(BattleSkillDropInfo_o *this, const MethodInfo *method)
{
  struct BattleSkillDropInfo_JsonConvertData_o *data; // x8

  data = this->fields.data;
  if ( data )
    return data->fields.appearEffectId;
  else
    return 0;
}


int32_t __fastcall BattleSkillDropInfo__get_AppearItemWait(BattleSkillDropInfo_o *this, const MethodInfo *method)
{
  struct BattleSkillDropInfo_JsonConvertData_o *data; // x8

  data = this->fields.data;
  if ( data )
    return data->fields.appearItemWait;
  else
    return 0;
}


BattleMoveObject_o *__fastcall BattleSkillDropInfo__get_BattleMoveObject(
        BattleSkillDropInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._BattleMoveObject_k__BackingField;
}


int32_t __fastcall BattleSkillDropInfo__get_BreakEffectId(BattleSkillDropInfo_o *this, const MethodInfo *method)
{
  struct BattleSkillDropInfo_JsonConvertData_o *data; // x8

  data = this->fields.data;
  if ( data )
    return data->fields.breakEffectId;
  else
    return 0;
}


int32_t __fastcall BattleSkillDropInfo__get_ImageId(BattleSkillDropInfo_o *this, const MethodInfo *method)
{
  struct BattleSkillDropInfo_JsonConvertData_o *data; // x8

  data = this->fields.data;
  if ( data )
    return data->fields.imageId;
  else
    return 0;
}


bool __fastcall BattleSkillDropInfo__get_IsRandomShiftInitialPosition(
        BattleSkillDropInfo_o *this,
        const MethodInfo *method)
{
  struct BattleSkillDropInfo_JsonConvertData_o *data; // x8

  data = this->fields.data;
  return data && data->fields.isRandomShiftInitialPosition == 1;
}


int32_t __fastcall BattleSkillDropInfo__get_SkillId(BattleSkillDropInfo_o *this, const MethodInfo *method)
{
  return this->fields._SkillId_k__BackingField;
}


int32_t __fastcall BattleSkillDropInfo__get_SkillLv(BattleSkillDropInfo_o *this, const MethodInfo *method)
{
  return this->fields._SkillLv_k__BackingField;
}


void __fastcall BattleSkillDropInfo__set_BattleMoveObject(
        BattleSkillDropInfo_o *this,
        BattleMoveObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BattleMoveObject_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._BattleMoveObject_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleSkillDropInfo_JsonConvertData___ctor(
        BattleSkillDropInfo_JsonConvertData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}