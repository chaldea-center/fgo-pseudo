void __fastcall EventCooltimeRewardEntity___ctor(EventCooltimeRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4216F02 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4216F02 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCooltimeRewardEntity__CreatePK(
        int32_t eventId,
        int32_t spotId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4216EFE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&spotId);
    byte_4216EFE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           spotId,
           lv,
           (const MethodInfo_1713844 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v3; // x1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_4216F01 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_GiftMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_4216F01 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
  return GiftMaster__getDataById(Master_WarQuestSelectionMaster, this->fields.giftId, 0LL);
}


EventCooltimeRewardEntity_GiftMakingVelocityInfo_o *__fastcall EventCooltimeRewardEntity__GetGiftMakingVelocityInfo(
        EventCooltimeRewardEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t cooltime; // w20
  int32_t upperLimitGiftNum; // w19
  EventCooltimeRewardEntity_GiftMakingVelocityInfo_o *v6; // x21

  if ( (byte_4216EFF & 1) == 0 )
  {
    sub_B0D8A4(&EventCooltimeRewardEntity_GiftMakingVelocityInfo_TypeInfo, method);
    byte_4216EFF = 1;
  }
  cooltime = this->fields.cooltime;
  upperLimitGiftNum = this->fields.upperLimitGiftNum;
  v6 = (EventCooltimeRewardEntity_GiftMakingVelocityInfo_o *)sub_B0D974(
                                                               EventCooltimeRewardEntity_GiftMakingVelocityInfo_TypeInfo,
                                                               method,
                                                               v2);
  EventCooltimeRewardEntity_GiftMakingVelocityInfo___ctor(v6, cooltime, upperLimitGiftNum, 0LL);
  return v6;
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
  __int64 v3; // x1
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_4216F00 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_CommonReleaseMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_4216F00 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
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