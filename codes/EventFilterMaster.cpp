void EventFilterMaster___ctor(EventFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59707E2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string___ctor__);
    byte_59707E2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    189,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *EventFilterMaster__GetButtonTextFromLocalization(
        int32_t eventId,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  __int64 *v7; // x8

  if ( (byte_59707E5 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12216/*"SERVANT_SORT_BONUS_KIND_ALL"*/);
    sub_2213A60(&StringLiteral_12221/*"SERVANT_SORT_BONUS_KIND_CLOSE_EVENT"*/);
    sub_2213A60(&StringLiteral_12223/*"SERVANT_SORT_BONUS_KIND_FINISH_EVENT"*/);
    byte_59707E5 = 1;
  }
  if ( kind <= 4 )
  {
    if ( kind <= 2 )
    {
      if ( kind != 2 )
      {
LABEL_20:
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
        v7 = &StringLiteral_12216/*"SERVANT_SORT_BONUS_KIND_ALL"*/;
        return LocalizationManager__Get((System_String_o *)*v7, 0);
      }
      return EventFilterMaster__GetFilterButtonTextEventCampaign(eventId, *(const MethodInfo **)&kind);
    }
    if ( kind == 3 )
      return EventFilterMaster__GetFilterButtonTextEventCampaign(eventId, *(const MethodInfo **)&kind);
    return EventFilterMaster__GetFilterButtonTextEvent(index, *(const MethodInfo **)&kind);
  }
  if ( kind <= 6 )
  {
    if ( kind != 5 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v7 = &StringLiteral_12223/*"SERVANT_SORT_BONUS_KIND_FINISH_EVENT"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0);
    }
    return EventFilterMaster__GetFilterButtonTextEvent(index, *(const MethodInfo **)&kind);
  }
  if ( kind != 7 )
  {
    if ( kind == 8 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v7 = &StringLiteral_12221/*"SERVANT_SORT_BONUS_KIND_CLOSE_EVENT"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0);
    }
    goto LABEL_20;
  }
  return EventFilterMaster__GetFilterButtonTextServant(index, *(const MethodInfo **)&kind);
}


System_String_o *EventFilterMaster__GetFilterButtonTextEvent(int32_t num, const MethodInfo *method)
{
  System_String_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x19
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  if ( (byte_59707E6 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12224/*"SERVANT_SORT_BONUS_KIND_ONLY"*/);
    sub_2213A60(&StringLiteral_12222/*"SERVANT_SORT_BONUS_KIND_EVENT_"*/);
    byte_59707E6 = 1;
  }
  if ( (unsigned int)(num - 5) >= 0xFFFFFFFC )
  {
    v4 = System_Int32__ToString((int32_t)&v7, 0);
    v6 = System_String__Concat_75651716((System_String_o *)StringLiteral_12222/*"SERVANT_SORT_BONUS_KIND_EVENT_"*/, v4, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
    return LocalizationManager__Get(v6, 0);
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    return LocalizationManager__Get((System_String_o *)StringLiteral_12224/*"SERVANT_SORT_BONUS_KIND_ONLY"*/, 0);
  }
}


System_String_o *EventFilterMaster__GetFilterButtonTextEventCampaign(int32_t campaignId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  EventCampaignEntity_o *Data; // x19
  System_String_o *result; // x0
  __int64 v9; // x1
  int32_t target; // w8
  System_String_o *v11; // x20
  int *v12; // x1
  __int64 v13; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  int32_t calcType; // w8
  int32_t v17; // w8
  bool v18; // vf
  int value; // w8
  int v20; // [xsp+4h] [xbp-2Ch] BYREF
  int v21; // [xsp+8h] [xbp-28h] BYREF
  int v22; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59707E7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12219/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_FRIENDSHIP"*/);
    sub_2213A60(&StringLiteral_12220/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_SUCCESS"*/);
    sub_2213A60(&StringLiteral_12218/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_EXP"*/);
    sub_2213A60(&StringLiteral_12217/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN"*/);
    byte_59707E7 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v4);
  Data = EventCampaignMaster__getData((EventCampaignMaster_o *)Master_object, campaignId, v5);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_12217/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN"*/, 0);
  if ( !Data )
    return result;
  target = Data->fields.target;
  if ( target == 2 )
  {
LABEL_10:
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12218/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_EXP"*/, 0);
    v12 = &v22;
    v13 = qword_5984348;
    v22 = Data->fields.value / 1000;
    goto LABEL_23;
  }
  if ( (target & 0xFFFFFFFE) == 4 || (unsigned int)(target - 32) < 2 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12220/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_SUCCESS"*/, 0);
    v12 = &v21;
    v13 = qword_5984348;
    v21 = Data->fields.value / 1000;
    goto LABEL_23;
  }
  if ( target == 31 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12219/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_FRIENDSHIP"*/, 0);
    calcType = Data->fields.calcType;
    v11 = v15;
    if ( calcType == 1 )
    {
      value = Data->fields.value;
      if ( value >= 1 )
LABEL_33:
        value /= 0xAu;
    }
    else
    {
      if ( calcType == 2 )
      {
        v17 = Data->fields.value;
        v18 = __OFSUB__(v17, 1000);
        value = v17 - 1000;
        if ( !((value < 0) ^ v18 | (value == 0)) )
          goto LABEL_33;
      }
      value = 0;
    }
    v12 = &v20;
    v20 = value;
    v13 = qword_5984348;
LABEL_23:
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(v13, v12);
    return System_String__Format(v11, v14, 0);
  }
  if ( target == 27 )
    goto LABEL_10;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
  return LocalizationManager__Get((System_String_o *)StringLiteral_12217/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN"*/, 0);
}


System_String_o *EventFilterMaster__GetFilterButtonTextServant(int32_t num, const MethodInfo *method)
{
  System_String_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x19
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  if ( (byte_59707E8 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12226/*"SERVANT_SORT_BONUS_KIND_SERVANT_"*/);
    sub_2213A60(&StringLiteral_12225/*"SERVANT_SORT_BONUS_KIND_SERVANT"*/);
    byte_59707E8 = 1;
  }
  if ( (unsigned int)(num - 5) >= 0xFFFFFFFC )
  {
    v4 = System_Int32__ToString((int32_t)&v7, 0);
    v6 = System_String__Concat_75651716((System_String_o *)StringLiteral_12226/*"SERVANT_SORT_BONUS_KIND_SERVANT_"*/, v4, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
    return LocalizationManager__Get(v6, 0);
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    return LocalizationManager__Get((System_String_o *)StringLiteral_12225/*"SERVANT_SORT_BONUS_KIND_SERVANT"*/, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
bool EventFilterMaster__TryGetEntity(
        EventFilterMaster_o *this,
        EventFilterEntity_o **entity,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59707E3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string__TryGetEntity__);
    byte_59707E3 = 1;
  }
  PK = (Il2CppObject *)EventFilterEntity__CreatePK(id, type, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventFilterMaster__TryGetEntity_48991628(
        EventFilterMaster_o *this,
        EventFilterEntity_o **entity,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59707E4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string__TryGetEntity__);
    byte_59707E4 = 1;
  }
  PK = (Il2CppObject *)EventFilterEntity__CreatePK(id, type, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string__TryGetEntity__);
}