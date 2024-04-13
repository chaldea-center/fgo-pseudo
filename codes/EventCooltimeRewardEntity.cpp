void __fastcall EventCooltimeRewardEntity___ctor(EventCooltimeRewardEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB163 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EB163 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventCooltimeRewardEntity__CreatePK(
        int32_t eventId,
        int32_t spotId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_42EB15F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, spotId, lv, method);
    byte_42EB15F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           spotId,
           lv,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventCooltimeRewardEntity__CreatePrimaryKey(
        EventCooltimeRewardEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventCooltimeRewardEntity__CreatePK(this->fields.eventId, this->fields.spotId, this->fields.lv, v2);
}


bool __fastcall EventCooltimeRewardEntity__DoesMakeGiftsEverySecond(
        EventCooltimeRewardEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.cooltime < this->fields.upperLimitGiftNum;
}


GiftEntity_o *__fastcall EventCooltimeRewardEntity__GetGiftEntity(
        EventCooltimeRewardEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  GiftMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1

  if ( (byte_42EB162 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42EB162 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
  return GiftMaster__getDataById(Master_WarQuestSelectionMaster, this->fields.giftId, 0LL);
}


EventCooltimeRewardEntity_GiftMakingVelocityInfo_o *__fastcall EventCooltimeRewardEntity__GetGiftMakingVelocityInfo(
        EventCooltimeRewardEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t cooltime; // w20
  int32_t upperLimitGiftNum; // w19
  EventCooltimeRewardEntity_GiftMakingVelocityInfo_o *v7; // x21

  if ( (byte_42EB160 & 1) == 0 )
  {
    sub_B5D5C4(&EventCooltimeRewardEntity_GiftMakingVelocityInfo_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB160 = 1;
  }
  cooltime = this->fields.cooltime;
  upperLimitGiftNum = this->fields.upperLimitGiftNum;
  v7 = (EventCooltimeRewardEntity_GiftMakingVelocityInfo_o *)sub_B5D694(EventCooltimeRewardEntity_GiftMakingVelocityInfo_TypeInfo);
  EventCooltimeRewardEntity_GiftMakingVelocityInfo___ctor(v7, cooltime, upperLimitGiftNum, 0LL);
  return v7;
}


int32_t __fastcall EventCooltimeRewardEntity__GetRewardUnitTime(
        EventCooltimeRewardEntity_o *this,
        const MethodInfo *method)
{
  int32_t upperLimitGiftNum; // w8

  upperLimitGiftNum = this->fields.upperLimitGiftNum;
  if ( upperLimitGiftNum < 1 )
    return 0;
  else
    return this->fields.cooltime / upperLimitGiftNum;
}


bool __fastcall EventCooltimeRewardEntity__IsOpen(EventCooltimeRewardEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1

  if ( (byte_42EB161 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42EB161 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
  return CommonReleaseMaster__IsOpen(Master_WarQuestSelectionMaster, this->fields.commonReleaseId, 0LL, 0, 0LL);
}


void __fastcall EventCooltimeRewardEntity_GiftMakingVelocityInfo___ctor(
        EventCooltimeRewardEntity_GiftMakingVelocityInfo_o *this,
        int32_t coolTime,
        int32_t upperLimitGiftNum,
        const MethodInfo *method)
{
  int v7; // w8
  int v8; // w9

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( coolTime >= upperLimitGiftNum )
  {
    v8 = coolTime / upperLimitGiftNum;
    v7 = 1;
  }
  else
  {
    v7 = upperLimitGiftNum / coolTime;
    v8 = 1;
  }
  this->fields._UnitTime_k__BackingField = v8;
  this->fields._GiftNum_k__BackingField = v7;
}


int32_t __fastcall EventCooltimeRewardEntity_GiftMakingVelocityInfo__get_GiftNum(
        EventCooltimeRewardEntity_GiftMakingVelocityInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._GiftNum_k__BackingField;
}


int32_t __fastcall EventCooltimeRewardEntity_GiftMakingVelocityInfo__get_UnitTime(
        EventCooltimeRewardEntity_GiftMakingVelocityInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._UnitTime_k__BackingField;
}


void __fastcall EventCooltimeRewardEntity_GiftMakingVelocityInfo__set_GiftNum(
        EventCooltimeRewardEntity_GiftMakingVelocityInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._GiftNum_k__BackingField = value;
}


void __fastcall EventCooltimeRewardEntity_GiftMakingVelocityInfo__set_UnitTime(
        EventCooltimeRewardEntity_GiftMakingVelocityInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._UnitTime_k__BackingField = value;
}