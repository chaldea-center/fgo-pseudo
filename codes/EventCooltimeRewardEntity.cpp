void __fastcall EventCooltimeRewardEntity___ctor(EventCooltimeRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_48E2746 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataEntityBase_string___ctor__, method);
    byte_48E2746 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_2FE68C4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCooltimeRewardEntity__CreatePK(
        int32_t eventId,
        int32_t spotId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_48E2742 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&spotId);
    byte_48E2742 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           spotId,
           lv,
           (const MethodInfo_2D612C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_48E2745 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_GiftMaster___, method);
    sub_1B00CCC(&DataManager_TypeInfo, v3);
    byte_48E2745 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_object )
    sub_1B00F28(0LL, v5);
  return GiftMaster__getDataById((GiftMaster_o *)Master_object, this->fields.giftId, 0LL);
}


EventCooltimeRewardEntity_GiftMakingVelocityInfo_o *__fastcall EventCooltimeRewardEntity__GetGiftMakingVelocityInfo(
        EventCooltimeRewardEntity_o *this,
        const MethodInfo *method)
{
  int32_t cooltime; // w20
  int32_t upperLimitGiftNum; // w21
  __int64 v5; // x19
  int v6; // w8
  int v7; // w9

  if ( (byte_48E2743 & 1) == 0 )
  {
    sub_1B00CCC(&EventCooltimeRewardEntity_GiftMakingVelocityInfo_TypeInfo, method);
    byte_48E2743 = 1;
  }
  cooltime = this->fields.cooltime;
  upperLimitGiftNum = this->fields.upperLimitGiftNum;
  v5 = sub_1B00F18(EventCooltimeRewardEntity_GiftMakingVelocityInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( cooltime >= upperLimitGiftNum )
  {
    v7 = cooltime / upperLimitGiftNum;
    v6 = 1;
  }
  else
  {
    v6 = upperLimitGiftNum / cooltime;
    v7 = 1;
  }
  *(_DWORD *)(v5 + 16) = v7;
  *(_DWORD *)(v5 + 20) = v6;
  return (EventCooltimeRewardEntity_GiftMakingVelocityInfo_o *)v5;
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
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_48E2744 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_CommonReleaseMaster___, method);
    sub_1B00CCC(&DataManager_TypeInfo, v3);
    byte_48E2744 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_object )
    sub_1B00F28(0LL, v5);
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, this->fields.commonReleaseId, 0LL, 0, 0LL);
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