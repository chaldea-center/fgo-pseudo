void __fastcall EventFortificationEntity___ctor(EventFortificationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B111 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B111 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventFortificationEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4A5B10E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B10E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  GiftEntity_o *DataById; // x0

  if ( (byte_4A5B10F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5B10F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
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
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_Object_array *setSvtInfos; // x19
  EventFortificationEntity___c_c *v10; // x0
  System_Func_object__bool__o *_9__14_0; // x20
  Il2CppObject *v12; // x21
  struct EventFortificationEntity___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B110 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_SetSvtInfo___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventFortificationDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Func_SetSvtInfo__bool__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_EventFortificationEntity___c__IsOpenFortificationWarningDialog_b__14_0__);
    sub_1B885B0(&EventFortificationEntity___c_TypeInfo);
    byte_4A5B110 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  entity = 0LL;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
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
  UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  if ( !UserId )
    goto LABEL_22;
  UserId = (int64_t)EventFortificationDetailMaster__GetEntitiesByOpend(
                      (EventFortificationDetailMaster_o *)UserId,
                      this->fields.eventId,
                      this->fields.idx,
                      v6);
  if ( !entity )
    return 1;
  setSvtInfos = (System_Object_array *)entity->fields.setSvtInfos;
  if ( !setSvtInfos )
    return 1;
  if ( !UserId )
LABEL_22:
    sub_1B8880C(UserId, v5);
  if ( (signed int)setSvtInfos->max_length < *(_DWORD *)(UserId + 24) )
    return 1;
  v10 = EventFortificationEntity___c_TypeInfo;
  if ( !EventFortificationEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationEntity___c_TypeInfo);
    v10 = EventFortificationEntity___c_TypeInfo;
  }
  _9__14_0 = (System_Func_object__bool__o *)v10->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = EventFortificationEntity___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__14_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_SetSvtInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__14_0,
      v12,
      Method_EventFortificationEntity___c__IsOpenFortificationWarningDialog_b__14_0__,
      0LL);
    static_fields = EventFortificationEntity___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_SetSvtInfo__bool__o *)_9__14_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v14, v15);
  }
  return BasicHelper__Any_object__48672124(
           setSvtInfos,
           (System_Func_T__bool__o *)_9__14_0,
           (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_SetSvtInfo___);
}


void __fastcall EventFortificationEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B112 & 1) == 0 )
  {
    sub_1B885B0(&EventFortificationEntity___c_TypeInfo);
    byte_4A5B112 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventFortificationEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventFortificationEntity___c_TypeInfo->static_fields->__9 = (struct EventFortificationEntity___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventFortificationEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return !info->fields.type && info->fields.svtId < 1;
}