void EventFilterMaster___ctor(EventFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC739A & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string___ctor__);
    byte_4CC739A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    187,
    (const MethodInfo_340B614 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *EventFilterMaster__GetButtonTextFromLocalization(
        int32_t eventId,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  __int64 *v8; // x8

  if ( (byte_4CC739D & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_11713/*"SERVANT_SORT_BONUS_KIND_ALL"*/);
    sub_1C713B0(&StringLiteral_11718/*"SERVANT_SORT_BONUS_KIND_CLOSE_EVENT"*/);
    sub_1C713B0(&StringLiteral_11720/*"SERVANT_SORT_BONUS_KIND_FINISH_EVENT"*/);
    byte_4CC739D = 1;
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
      v8 = &StringLiteral_11720/*"SERVANT_SORT_BONUS_KIND_FINISH_EVENT"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0);
    case 7:
      return EventFilterMaster__GetFilterButtonTextServant(index, *(const MethodInfo **)&kind);
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11718/*"SERVANT_SORT_BONUS_KIND_CLOSE_EVENT"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0);
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11713/*"SERVANT_SORT_BONUS_KIND_ALL"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0);
  }
}


System_String_o *EventFilterMaster__GetFilterButtonTextEvent(int32_t num, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x19
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = num;
  if ( (byte_4CC739E & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_11721/*"SERVANT_SORT_BONUS_KIND_ONLY"*/);
    sub_1C713B0(&StringLiteral_11719/*"SERVANT_SORT_BONUS_KIND_EVENT_"*/);
    byte_4CC739E = 1;
  }
  if ( (unsigned int)(num - 1) <= 3 )
  {
    v4 = System_Int32__ToString((int32_t)&v6, 0);
    v5 = System_String__Concat_64031724((System_String_o *)StringLiteral_11719/*"SERVANT_SORT_BONUS_KIND_EVENT_"*/, v4, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get(v5, 0);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_11721/*"SERVANT_SORT_BONUS_KIND_ONLY"*/, 0);
  }
}


System_String_o *EventFilterMaster__GetFilterButtonTextEventCampaign(int32_t campaignId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  EventCampaignEntity_o *Data; // x19
  System_String_o *result; // x0
  int32_t target; // w8
  System_String_o *v9; // x20
  System_Int32_c *v10; // x0
  int *v11; // x1
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  int32_t calcType; // w8
  int v15; // w8
  int value; // w8
  int v17; // [xsp+4h] [xbp-2Ch] BYREF
  int v18; // [xsp+8h] [xbp-28h] BYREF
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CC739F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_11716/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_FRIENDSHIP"*/);
    sub_1C713B0(&StringLiteral_11717/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_SUCCESS"*/);
    sub_1C713B0(&StringLiteral_11715/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_EXP"*/);
    sub_1C713B0(&StringLiteral_11714/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN"*/);
    byte_4CC739F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_object )
    sub_1C71608(0, v4);
  Data = EventCampaignMaster__getData((EventCampaignMaster_o *)Master_object, campaignId, v5);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_11714/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN"*/, 0);
  if ( !Data )
    return result;
  target = Data->fields.target;
  if ( target == 2 )
  {
LABEL_10:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11715/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_EXP"*/, 0);
    v10 = int_TypeInfo;
    v19 = Data->fields.value / 1000;
    v11 = &v19;
    goto LABEL_23;
  }
  if ( (target & 0xFFFFFFFE) == 4 || (unsigned int)(target - 32) < 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11717/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_SUCCESS"*/, 0);
    v10 = int_TypeInfo;
    v18 = Data->fields.value / 1000;
    v11 = &v18;
    goto LABEL_23;
  }
  if ( target == 31 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11716/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN_FRIENDSHIP"*/, 0);
    calcType = Data->fields.calcType;
    v9 = v13;
    if ( calcType == 2 )
    {
      value = Data->fields.value;
      if ( value >= 1001 )
      {
        v15 = value - 1000;
LABEL_32:
        if ( v15 >= 1 )
          v15 /= 0xAu;
        goto LABEL_35;
      }
    }
    else if ( calcType == 1 )
    {
      v15 = Data->fields.value;
      goto LABEL_32;
    }
    v15 = 0;
LABEL_35:
    v11 = &v17;
    v17 = v15;
    v10 = int_TypeInfo;
LABEL_23:
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(v10, v11);
    return System_String__Format(v9, v12, 0);
  }
  if ( target == 27 )
    goto LABEL_10;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_11714/*"SERVANT_SORT_BONUS_KIND_CAMPAIGN"*/, 0);
}


System_String_o *EventFilterMaster__GetFilterButtonTextServant(int32_t num, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x19
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = num;
  if ( (byte_4CC73A0 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_11723/*"SERVANT_SORT_BONUS_KIND_SERVANT_"*/);
    sub_1C713B0(&StringLiteral_11722/*"SERVANT_SORT_BONUS_KIND_SERVANT"*/);
    byte_4CC73A0 = 1;
  }
  if ( (unsigned int)(num - 1) <= 3 )
  {
    v4 = System_Int32__ToString((int32_t)&v6, 0);
    v5 = System_String__Concat_64031724((System_String_o *)StringLiteral_11723/*"SERVANT_SORT_BONUS_KIND_SERVANT_"*/, v4, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get(v5, 0);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_11722/*"SERVANT_SORT_BONUS_KIND_SERVANT"*/, 0);
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

  if ( (byte_4CC739B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string__TryGetEntity__);
    byte_4CC739B = 1;
  }
  PK = (Il2CppObject *)EventFilterEntity__CreatePK(id, type, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventFilterMaster__TryGetEntity_42272088(
        EventFilterMaster_o *this,
        EventFilterEntity_o **entity,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC739C & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string__TryGetEntity__);
    byte_4CC739C = 1;
  }
  PK = (Il2CppObject *)EventFilterEntity__CreatePK(id, type, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__string__TryGetEntity__);
}