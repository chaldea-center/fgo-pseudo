void __fastcall EventFilterMaster___ctor(EventFilterMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1618F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string___ctor__, method, v2);
    byte_4B1618F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    183,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventFilterMaster__GetButtonTextFromLocalization(
        int32_t eventId,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 *v14; // x8

  if ( (byte_4B16192 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&index);
    sub_1BCA7E0(&StringLiteral_11813/*"SERVANT_SORT_BONUS_KIND_ALL"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_11818/*"SERVANT_SORT_BONUS_KIND_CLOSE_EVENT"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_11820/*"SERVANT_SORT_BONUS_KIND_FINISH_EVENT"*/, v11, v12);
    byte_4B16192 = 1;
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v14 = &StringLiteral_11820/*"SERVANT_SORT_BONUS_KIND_FINISH_EVENT"*/;
      return LocalizationManager__Get((System_String_o *)*v14, 0LL);
    case 7:
      return EventFilterMaster__GetFilterButtonTextServant(index, *(const MethodInfo **)&kind);
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v14 = &StringLiteral_11818/*"SERVANT_SORT_BONUS_KIND_CLOSE_EVENT"*/;
      return LocalizationManager__Get((System_String_o *)*v14, 0LL);
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v14 = &StringLiteral_11813/*"SERVANT_SORT_BONUS_KIND_ALL"*/;
      return LocalizationManager__Get((System_String_o *)*v14, 0LL);
  }
}


System_String_o *__fastcall EventFilterMaster__GetFilterButtonTextEvent(int32_t num, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x19
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = num;
  if ( (byte_4B16193 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_11821/*"SERVANT_SORT_BONUS_KIND_ONLY"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_11819/*"SERVANT_SORT_BONUS_KIND_EVENT_"*/, v6, v7);
    byte_4B16193 = 1;
  }
  if ( (unsigned int)(num - 1) <= 3 )
  {
    v9 = System_Int32__ToString((int32_t)&v12, 0LL);
    v11 = System_String__Concat_62401220((System_String_o *)StringLiteral_11819/*"SERVANT_SORT_BONUS_KIND_EVENT_"*/, v9, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
    return LocalizationManager__Get(v11, 0LL);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    return LocalizationManager__Get((System_String_o *)StringLiteral_11821/*"SERVANT_SORT_BONUS_KIND_ONLY"*/, 0LL);
  }
}


System_String_o *__fastcall EventFilterMaster__GetFilterButtonTextEventCampaign(
        int32_t campaignId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Master_object; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  __int64 v21; // x1
  EventCampaignEntity_o *Data; // x19
  System_String_o *result; // x0
  __int64 v24; // x1
  int32_t target; // w8
  System_String_o *v26; // x20
  System_Int32_c *v27; // x0
  int *v28; // x1
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  int32_t calcType; // w8
  int v32; // w8
  int value; // w8
  int v34; // [xsp+4h] [xbp-2Ch] BYREF
  int v35; // [xsp+8h] [xbp-28h] BYREF
  int v36; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16194 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&int_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_11816/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_FRIENDSHIP"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_11817/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_SUCCESS"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_11815/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_EXP"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_11814/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN"*/, v16, v17);
    byte_4B16194 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v19);
  Data = EventCampaignMaster__getData((EventCampaignMaster_o *)Master_object, campaignId, v20);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_11814/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN"*/, 0LL);
  if ( !Data )
    return result;
  target = Data->fields.target;
  if ( target == 2 )
  {
LABEL_10:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11815/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_EXP"*/, 0LL);
    v27 = int_TypeInfo;
    v36 = Data->fields.value / 1000;
    v28 = &v36;
    goto LABEL_23;
  }
  if ( (target & 0xFFFFFFFE) == 4 || (unsigned int)(target - 32) < 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11817/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_SUCCESS"*/, 0LL);
    v27 = int_TypeInfo;
    v35 = Data->fields.value / 1000;
    v28 = &v35;
    goto LABEL_23;
  }
  if ( target == 31 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11816/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_FRIENDSHIP"*/, 0LL);
    calcType = Data->fields.calcType;
    v26 = v30;
    if ( calcType == 2 )
    {
      value = Data->fields.value;
      if ( value >= 1001 )
      {
        v32 = value - 1000;
LABEL_32:
        if ( v32 >= 1 )
          v32 /= 0xAu;
        goto LABEL_35;
      }
    }
    else if ( calcType == 1 )
    {
      v32 = Data->fields.value;
      goto LABEL_32;
    }
    v32 = 0;
LABEL_35:
    v28 = &v34;
    v34 = v32;
    v27 = int_TypeInfo;
LABEL_23:
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(v27, v28);
    return System_String__Format(v26, v29, 0LL);
  }
  if ( target == 27 )
    goto LABEL_10;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  return LocalizationManager__Get((System_String_o *)StringLiteral_11814/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN"*/, 0LL);
}


System_String_o *__fastcall EventFilterMaster__GetFilterButtonTextServant(int32_t num, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x19
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = num;
  if ( (byte_4B16195 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_11823/*"SERVANT_SORT_BONUS_KIND_SERVANT_"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_11822/*"SERVANT_SORT_BONUS_KIND_SERVANT"*/, v6, v7);
    byte_4B16195 = 1;
  }
  if ( (unsigned int)(num - 1) <= 3 )
  {
    v9 = System_Int32__ToString((int32_t)&v12, 0LL);
    v11 = System_String__Concat_62401220((System_String_o *)StringLiteral_11823/*"SERVANT_SORT_BONUS_KIND_SERVANT_"*/, v9, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
    return LocalizationManager__Get(v11, 0LL);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    return LocalizationManager__Get((System_String_o *)StringLiteral_11822/*"SERVANT_SORT_BONUS_KIND_SERVANT"*/, 0LL);
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

  if ( (byte_4B16190 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B16190 = 1;
  }
  PK = (Il2CppObject *)EventFilterEntity__CreatePK(id, type, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFilterMaster__TryGetEntity_39853044(
        EventFilterMaster_o *this,
        EventFilterEntity_o **entity,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16191 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B16191 = 1;
  }
  PK = (Il2CppObject *)EventFilterEntity__CreatePK(id, type, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string__TryGetEntity__);
}