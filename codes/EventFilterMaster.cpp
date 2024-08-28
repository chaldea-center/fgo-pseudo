void __fastcall EventFilterMaster___ctor(EventFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A1FA75 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string___ctor__, method);
    byte_4A1FA75 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    183,
    (const MethodInfo_30F8A78 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventFilterMaster__GetButtonTextFromLocalization(
        int32_t eventId,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 *v11; // x8

  if ( (byte_4A1FA78 & 1) == 0 )
  {
    sub_1B715CC(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_1B715CC(&StringLiteral_11634/*"SERVANT_SORT_BONUS_KIND_ALL"*/, v7);
    sub_1B715CC(&StringLiteral_11639/*"SERVANT_SORT_BONUS_KIND_CLOSE_EVENT"*/, v8);
    sub_1B715CC(&StringLiteral_11641/*"SERVANT_SORT_BONUS_KIND_FINISH_EVENT"*/, v9);
    byte_4A1FA78 = 1;
  }
  switch ( kind )
  {
    case 2:
    case 3:
      return EventFilterMaster__GetFilterButtonTextEventCampaign(eventId, *(const MethodInfo **)&kind);
    case 4:
    case 5:
      return EventFilterMaster__GetFilterButtonTextEvent(index, *(const MethodInfo **)&kind);
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = &StringLiteral_11641/*"SERVANT_SORT_BONUS_KIND_FINISH_EVENT"*/;
      return LocalizationManager__Get((System_String_o *)*v11, 0LL);
    case 7:
      return EventFilterMaster__GetFilterButtonTextServant(index, *(const MethodInfo **)&kind);
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = &StringLiteral_11639/*"SERVANT_SORT_BONUS_KIND_CLOSE_EVENT"*/;
      return LocalizationManager__Get((System_String_o *)*v11, 0LL);
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = &StringLiteral_11634/*"SERVANT_SORT_BONUS_KIND_ALL"*/;
      return LocalizationManager__Get((System_String_o *)*v11, 0LL);
  }
}


System_String_o *__fastcall EventFilterMaster__GetFilterButtonTextEvent(int32_t num, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v6; // x0
  System_String_o *v7; // x19
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = num;
  if ( (byte_4A1FA79 & 1) == 0 )
  {
    sub_1B715CC(&LocalizationManager_TypeInfo, method);
    sub_1B715CC(&StringLiteral_11642/*"SERVANT_SORT_BONUS_KIND_ONLY"*/, v3);
    sub_1B715CC(&StringLiteral_11640/*"SERVANT_SORT_BONUS_KIND_EVENT_"*/, v4);
    byte_4A1FA79 = 1;
  }
  if ( (unsigned int)(num - 1) <= 3 )
  {
    v6 = System_Int32__ToString((int32_t)&v8, 0LL);
    v7 = System_String__Concat_61505504((System_String_o *)StringLiteral_11640/*"SERVANT_SORT_BONUS_KIND_EVENT_"*/, v6, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get(v7, 0LL);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_11642/*"SERVANT_SORT_BONUS_KIND_ONLY"*/, 0LL);
  }
}


System_String_o *__fastcall EventFilterMaster__GetFilterButtonTextEventCampaign(
        int32_t campaignId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  EventCampaignEntity_o *Data; // x19
  System_String_o *result; // x0
  int32_t target; // w8
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_String_o *v19; // x20
  System_Int32_c *v20; // x0
  int *v21; // x1
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  int32_t calcType; // w8
  int v25; // w8
  int value; // w8
  int v27; // [xsp+4h] [xbp-2Ch] BYREF
  int v28; // [xsp+8h] [xbp-28h] BYREF
  int v29; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A1FA7A & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_EventCampaignMaster___, method);
    sub_1B715CC(&DataManager_TypeInfo, v3);
    sub_1B715CC(&int_TypeInfo, v4);
    sub_1B715CC(&LocalizationManager_TypeInfo, v5);
    sub_1B715CC(&StringLiteral_11637/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_FRIENDSHIP"*/, v6);
    sub_1B715CC(&StringLiteral_11638/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_SUCCESS"*/, v7);
    sub_1B715CC(&StringLiteral_11636/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_EXP"*/, v8);
    sub_1B715CC(&StringLiteral_11635/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN"*/, v9);
    byte_4A1FA7A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_object )
    sub_1B71828(0LL, v11);
  Data = EventCampaignMaster__getData((EventCampaignMaster_o *)Master_object, campaignId, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_11635/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN"*/, 0LL);
  if ( !Data )
    return result;
  target = Data->fields.target;
  if ( target == 2 )
  {
LABEL_10:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11636/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_EXP"*/, 0LL);
    v20 = int_TypeInfo;
    v29 = Data->fields.value / 1000;
    v21 = &v29;
    goto LABEL_23;
  }
  if ( (target & 0xFFFFFFFE) == 4 || (unsigned int)(target - 32) < 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11638/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_SUCCESS"*/, 0LL);
    v20 = int_TypeInfo;
    v28 = Data->fields.value / 1000;
    v21 = &v28;
    goto LABEL_23;
  }
  if ( target == 31 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11637/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_FRIENDSHIP"*/, 0LL);
    calcType = Data->fields.calcType;
    v19 = v23;
    if ( calcType == 2 )
    {
      value = Data->fields.value;
      if ( value >= 1001 )
      {
        v25 = value - 1000;
LABEL_32:
        if ( v25 >= 1 )
          v25 /= 0xAu;
        goto LABEL_35;
      }
    }
    else if ( calcType == 1 )
    {
      v25 = Data->fields.value;
      goto LABEL_32;
    }
    v25 = 0;
LABEL_35:
    v21 = &v27;
    v27 = v25;
    v20 = int_TypeInfo;
LABEL_23:
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(v20, v21, v16, v17, v18);
    return System_String__Format(v19, v22, 0LL);
  }
  if ( target == 27 )
    goto LABEL_10;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_11635/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN"*/, 0LL);
}


System_String_o *__fastcall EventFilterMaster__GetFilterButtonTextServant(int32_t num, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v6; // x0
  System_String_o *v7; // x19
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = num;
  if ( (byte_4A1FA7B & 1) == 0 )
  {
    sub_1B715CC(&LocalizationManager_TypeInfo, method);
    sub_1B715CC(&StringLiteral_11644/*"SERVANT_SORT_BONUS_KIND_SERVANT_"*/, v3);
    sub_1B715CC(&StringLiteral_11643/*"SERVANT_SORT_BONUS_KIND_SERVANT"*/, v4);
    byte_4A1FA7B = 1;
  }
  if ( (unsigned int)(num - 1) <= 3 )
  {
    v6 = System_Int32__ToString((int32_t)&v8, 0LL);
    v7 = System_String__Concat_61505504((System_String_o *)StringLiteral_11644/*"SERVANT_SORT_BONUS_KIND_SERVANT_"*/, v6, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get(v7, 0LL);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_11643/*"SERVANT_SORT_BONUS_KIND_SERVANT"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFilterMaster__TryGetEntity(
        EventFilterMaster_o *this,
        EventFilterEntity_o **entity,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A1FA76 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string__TryGetEntity__, entity);
    byte_4A1FA76 = 1;
  }
  PK = (Il2CppObject *)EventFilterEntity__CreatePK(id, type, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30F8B08 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFilterMaster__TryGetEntity_38927152(
        EventFilterMaster_o *this,
        EventFilterEntity_o **entity,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A1FA77 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string__TryGetEntity__, entity);
    byte_4A1FA77 = 1;
  }
  PK = (Il2CppObject *)EventFilterEntity__CreatePK(id, type, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30F8B08 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string__TryGetEntity__);
}