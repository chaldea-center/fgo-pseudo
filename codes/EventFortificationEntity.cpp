void __fastcall EventFortificationEntity___ctor(EventFortificationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE4BA & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FE4BA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventFortificationEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_49FE4B7 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_49FE4B7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_2E398EC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventFortificationEntity__CreatePrimaryKey(
        EventFortificationEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventFortificationEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}


int32_t __fastcall EventFortificationEntity__GetGiftItemIcon(
        EventFortificationEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  GiftEntity_o *DataById; // x0

  if ( (byte_49FE4B8 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_GiftMaster___, method);
    sub_1B64870(&DataManager_TypeInfo, v3);
    byte_49FE4B8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_object )
    sub_1B64ACC(0LL, v5);
  DataById = GiftMaster__getDataById((GiftMaster_o *)Master_object, this->fields.giftId, 0LL);
  if ( DataById )
    return GiftEntity__getIconImageId(DataById, 0LL);
  else
    return -1;
}


bool __fastcall EventFortificationEntity__IsOpenFortificationWarningDialog(
        EventFortificationEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  System_Object_array *setSvtInfos; // x19
  EventFortificationEntity___c_c *v17; // x0
  System_Func_object__bool__o *_9__14_0; // x20
  Il2CppObject *v19; // x21
  struct EventFortificationEntity___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FE4B9 & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Any_SetSvtInfo___, method);
    sub_1B64870(&Method_DataManager_GetMaster_EventFortificationDetailMaster___, v3);
    sub_1B64870(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v4);
    sub_1B64870(&DataManager_TypeInfo, v5);
    sub_1B64870(&System_Func_SetSvtInfo__bool__TypeInfo, v6);
    sub_1B64870(&NetworkManager_TypeInfo, v7);
    sub_1B64870(&Method_EventFortificationEntity___c__IsOpenFortificationWarningDialog_b__14_0__, v8);
    sub_1B64870(&EventFortificationEntity___c_TypeInfo, v9);
    byte_49FE4B9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  entity = 0LL;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_22;
  UserEventFortificationMaster__TryGetEntity(
    (UserEventFortificationMaster_o *)Master_object,
    &entity,
    UserId,
    this->fields.eventId,
    this->fields.idx,
    0LL);
  UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  if ( !UserId )
    goto LABEL_22;
  UserId = (int64_t)EventFortificationDetailMaster__GetEntitiesByOpend(
                      (EventFortificationDetailMaster_o *)UserId,
                      this->fields.eventId,
                      this->fields.idx,
                      v13);
  if ( !entity )
    return 1;
  setSvtInfos = (System_Object_array *)entity->fields.setSvtInfos;
  if ( !setSvtInfos )
    return 1;
  if ( !UserId )
LABEL_22:
    sub_1B64ACC(UserId, v12);
  if ( (signed int)setSvtInfos->max_length < *(_DWORD *)(UserId + 24) )
    return 1;
  v17 = EventFortificationEntity___c_TypeInfo;
  if ( !EventFortificationEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationEntity___c_TypeInfo);
    v17 = EventFortificationEntity___c_TypeInfo;
  }
  _9__14_0 = (System_Func_object__bool__o *)v17->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = EventFortificationEntity___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__14_0 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_SetSvtInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__14_0,
      v19,
      Method_EventFortificationEntity___c__IsOpenFortificationWarningDialog_b__14_0__,
      0LL);
    static_fields = EventFortificationEntity___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_SetSvtInfo__bool__o *)_9__14_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v21, v22);
  }
  return BasicHelper__Any_object__48393208(
           setSvtInfos,
           (System_Func_T__bool__o *)_9__14_0,
           (const MethodInfo_2E26BF8 *)Method_BasicHelper_Any_SetSvtInfo___);
}


void __fastcall EventFortificationEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FE4BB & 1) == 0 )
  {
    sub_1B64870(&EventFortificationEntity___c_TypeInfo, v1);
    byte_49FE4BB = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(EventFortificationEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventFortificationEntity___c_TypeInfo->static_fields->__9 = (struct EventFortificationEntity___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)EventFortificationEntity___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall EventFortificationEntity___c___ctor(EventFortificationEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventFortificationEntity___c___IsOpenFortificationWarningDialog_b__14_0(
        EventFortificationEntity___c_o *this,
        SetSvtInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1B64ACC(this, 0LL);
  return !info->fields.type && info->fields.svtId < 1;
}