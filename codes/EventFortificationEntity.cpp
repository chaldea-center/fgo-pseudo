void EventFortificationEntity___ctor(EventFortificationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2727D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C2727D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventFortificationEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4C2727A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C2727A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventFortificationEntity__CreatePrimaryKey(EventFortificationEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventFortificationEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}


int32_t EventFortificationEntity__GetGiftItemIcon(EventFortificationEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  GiftEntity_o *DataById; // x0

  if ( (byte_4C2727B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C2727B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v4);
  DataById = GiftMaster__getDataById((GiftMaster_o *)Master_object, this->fields.giftId, 0);
  if ( DataById )
    return GiftEntity__getIconImageId(DataById, 0);
  else
    return -1;
}


bool EventFortificationEntity__IsOpenFortificationWarningDialog(
        EventFortificationEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  EventFortificationDetailMaster_o *EntitiesByOpend; // x0
  const MethodInfo *v6; // x3
  struct SetSvtInfo_array *setSvtInfos; // x19
  EventFortificationEntity___c_c *v10; // x0
  System_Func_object__bool__o *_9__14_0; // x20
  Il2CppObject *v12; // x21
  struct EventFortificationEntity___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2727C & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_SetSvtInfo___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventFortificationDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&System_Func_SetSvtInfo__bool__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_EventFortificationEntity___c__IsOpenFortificationWarningDialog_b__14_0__);
    sub_1C2D490(&EventFortificationEntity___c_TypeInfo);
    byte_4C2727C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  entity = 0;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  EntitiesByOpend = (EventFortificationDetailMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    EntitiesByOpend = (EventFortificationDetailMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_26;
  UserEventFortificationMaster__TryGetEntity(
    (UserEventFortificationMaster_o *)Master_object,
    &entity,
    (int64_t)EntitiesByOpend[2].fields.list[1].monitor,
    this->fields.eventId,
    this->fields.idx,
    0);
  EntitiesByOpend = (EventFortificationDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  if ( !EntitiesByOpend )
    goto LABEL_26;
  EntitiesByOpend = (EventFortificationDetailMaster_o *)EventFortificationDetailMaster__GetEntitiesByOpend(
                                                          EntitiesByOpend,
                                                          this->fields.eventId,
                                                          this->fields.idx,
                                                          v6);
  if ( !entity )
    return 1;
  setSvtInfos = entity->fields.setSvtInfos;
  if ( !setSvtInfos )
    return 1;
  if ( !EntitiesByOpend )
LABEL_26:
    sub_1C2D6EC(EntitiesByOpend, v3);
  if ( SLODWORD(setSvtInfos->max_length) < SLODWORD(EntitiesByOpend->fields._MasterName_k__BackingField) )
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
    _9__14_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_SetSvtInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__14_0,
      v12,
      Method_EventFortificationEntity___c__IsOpenFortificationWarningDialog_b__14_0__,
      0);
    static_fields = EventFortificationEntity___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_SetSvtInfo__bool__o *)_9__14_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v14, v15);
  }
  return BasicHelper__Any_object__51084700(
           (System_Object_array *)setSvtInfos,
           (System_Func_T__bool__o *)_9__14_0,
           (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_SetSvtInfo___);
}


void EventFortificationEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2727E & 1) == 0 )
  {
    sub_1C2D490(&EventFortificationEntity___c_TypeInfo);
    byte_4C2727E = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventFortificationEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventFortificationEntity___c_TypeInfo->static_fields->__9 = (struct EventFortificationEntity___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)EventFortificationEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventFortificationEntity___c___ctor(EventFortificationEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventFortificationEntity___c___IsOpenFortificationWarningDialog_b__14_0(
        EventFortificationEntity___c_o *this,
        SetSvtInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C2D6EC(this, 0);
  return !info->fields.type && info->fields.svtId < 1;
}