void EventFortificationEntity___ctor(EventFortificationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59707F2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_59707F2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventFortificationEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_59707F0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59707F0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventFortificationEntity__CreatePrimaryKey(EventFortificationEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventFortificationEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}


bool EventFortificationEntity__IsOpenFortificationWarningDialog(
        EventFortificationEntity_o *this,
        const MethodInfo *method)
{
  int v3; // w8
  __int64 v4; // x1
  Il2CppObject *Master_object; // x20
  EventFortificationDetailMaster_o *EntitiesByOpend; // x0
  const MethodInfo *v7; // x3
  struct SetSvtInfo_array *setSvtInfos; // x19
  EventFortificationEntity___c_c *v11; // x0
  struct EventFortificationEntity___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__13_0; // x20
  Il2CppObject *v14; // x21
  struct EventFortificationEntity___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59707F1 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_SetSvtInfo___);
    sub_2213A60(&Method_DataManager_GetMaster_EventFortificationDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_Func_SetSvtInfo__bool__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_EventFortificationEntity___c__IsOpenFortificationWarningDialog_b__13_0__);
    sub_2213A60(&EventFortificationEntity___c_TypeInfo);
    byte_59707F1 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  entity = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  EntitiesByOpend = (EventFortificationDetailMaster_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
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
  EntitiesByOpend = (EventFortificationDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  if ( !EntitiesByOpend )
    goto LABEL_26;
  EntitiesByOpend = (EventFortificationDetailMaster_o *)EventFortificationDetailMaster__GetEntitiesByOpend(
                                                          EntitiesByOpend,
                                                          this->fields.eventId,
                                                          this->fields.idx,
                                                          v7);
  if ( !entity )
    return 1;
  setSvtInfos = entity->fields.setSvtInfos;
  if ( !setSvtInfos )
    return 1;
  if ( !EntitiesByOpend )
LABEL_26:
    sub_2213CDC(EntitiesByOpend, v4);
  if ( SLODWORD(setSvtInfos->max_length) < SLODWORD(EntitiesByOpend->fields._MasterName_k__BackingField) )
    return 1;
  v11 = EventFortificationEntity___c_TypeInfo;
  if ( !*(&EventFortificationEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationEntity___c_TypeInfo, v4);
    v11 = EventFortificationEntity___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__13_0 = (System_Func_object__bool__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v4);
      static_fields = EventFortificationEntity___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_SetSvtInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__13_0,
      v14,
      Method_EventFortificationEntity___c__IsOpenFortificationWarningDialog_b__13_0__,
      0);
    v15 = EventFortificationEntity___c_TypeInfo->static_fields;
    v15->__9__13_0 = (struct System_Func_SetSvtInfo__bool__o *)_9__13_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__13_0, (int32_t)_9__13_0, v16, v17, v18, v19, v20, v21);
  }
  return BasicHelper__Any_object__58785420(
           (System_Object_array *)setSvtInfos,
           (System_Func_T__bool__o *)_9__13_0,
           (const MethodInfo_380FE8C *)Method_BasicHelper_Any_SetSvtInfo___);
}


void EventFortificationEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59707F3 & 1) == 0 )
  {
    sub_2213A60(&EventFortificationEntity___c_TypeInfo);
    byte_59707F3 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventFortificationEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventFortificationEntity___c_TypeInfo->static_fields->__9 = (struct EventFortificationEntity___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventFortificationEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventFortificationEntity___c___ctor(EventFortificationEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventFortificationEntity___c___IsOpenFortificationWarningDialog_b__13_0(
        EventFortificationEntity___c_o *this,
        SetSvtInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_2213CDC(this, 0);
  return !info->fields.type && info->fields.svtId < 1;
}