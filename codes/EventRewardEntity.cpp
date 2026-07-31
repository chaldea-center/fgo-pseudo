void EventRewardEntity___ctor(EventRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59388A9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59388A9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventRewardEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  if ( (byte_59388A4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
    byte_59388A4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__long_(
           eventId,
           slot,
           groupId,
           point,
           (const MethodInfo_382195C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
}


System_String_o *EventRewardEntity__CreatePrimaryKey(EventRewardEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventRewardEntity__CreatePK(
           this->fields.eventId,
           this->fields.slot,
           this->fields.groupId,
           this->fields.point,
           v2);
}


void EventRewardEntity__GetInfo(
        EventRewardEntity_o *this,
        System_String_o **nameText,
        System_String_o **countText,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v11; // w1
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1
  int32_t type; // w8
  GiftEntity_o *GiftData; // x0
  int32_t v22; // w1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t v29; // w1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  EventRewardSetEntity_o *RewardSetData; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_String_o **p_name; // x8
  EventRewardExtraEntity_o *SetRewardData; // x0
  System_String_o *v45; // x1
  System_String_o *v46; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *nameTexta; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59388A8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59388A8 = 1;
  }
  v11 = (int)StringLiteral_1/*""*/;
  v46 = 0;
  nameTexta = 0;
  *nameText = (System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)nameText,
    v11,
    (System_String_o *)countText,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v12 = (int)StringLiteral_1/*""*/;
  *countText = (System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)countText, v12, v13, v14, v15, v16, v17, v18);
  type = this->fields.type;
  if ( type == 1 )
  {
    GiftData = EventRewardEntity__getGiftData(this, v19);
    if ( GiftData )
    {
      GiftEntity__GetInfo(GiftData, &nameTexta, &v46, 0);
      v22 = (int)nameTexta;
      *nameText = nameTexta;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)nameText, v22, v23, v24, v25, v26, v27, v28);
      v29 = (int)v46;
      *countText = v46;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)countText, v29, v30, v31, v32, v33, v34, v35);
    }
    type = this->fields.type;
  }
  if ( type == 3 )
  {
    RewardSetData = EventRewardEntity__getRewardSetData(this, v19);
    if ( !RewardSetData )
      return;
    p_name = &RewardSetData->fields.name;
  }
  else
  {
    SetRewardData = EventRewardEntity__getSetRewardData(this, v19);
    if ( !SetRewardData )
      return;
    p_name = &SetRewardData->fields.name;
  }
  v45 = *p_name;
  *nameText = *p_name;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)nameText, (int32_t)v45, v37, v38, v39, v40, v41, v42);
}


GiftEntity_o *EventRewardEntity__getGiftData(EventRewardEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_59388A5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59388A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  return GiftMaster__getDataById((GiftMaster_o *)Instance, this->fields.giftId, 0);
}


EventRewardSetEntity_o *EventRewardEntity__getRewardSetData(EventRewardEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_59388A7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRewardSetMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59388A7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRewardSetMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  return EventRewardSetMaster__GetEntity(
           (EventRewardSetMaster_o *)Instance,
           2,
           this->fields.eventId,
           this->fields.giftId,
           v5);
}


EventRewardExtraEntity_o *EventRewardEntity__getSetRewardData(EventRewardEntity_o *this, const MethodInfo *method)
{
  System_Object_array *Master_object; // x0
  __int64 v4; // x1
  int max_length; // w9
  int v6; // w11
  EventRewardExtraEntity_o *v7; // x8

  if ( (byte_59388A6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventRewardExtraMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__getEntitys__);
    byte_59388A6 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (System_Object_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventRewardExtraMaster___);
  if ( !Master_object )
    goto LABEL_16;
  Master_object = DataMasterBase_object__object__object___getEntitys(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    (const MethodInfo_3EE13C0 *)Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__getEntitys__);
  if ( !Master_object )
    goto LABEL_16;
  max_length = Master_object->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( max_length == v6 )
        sub_21FFED4(Master_object);
      v7 = (EventRewardExtraEntity_o *)Master_object->m_Items[v6];
      if ( !v7 )
        break;
      if ( v7->fields.eventId == this->fields.eventId && v7->fields.point == this->fields.point )
        return v7;
      if ( (max_length & ~(max_length >> 31)) == ++v6 )
        return 0;
    }
LABEL_16:
    sub_21FFECC(Master_object, v4);
  }
  return 0;
}


bool EventRewardEntity__isQp(EventRewardEntity_o *this, const MethodInfo *method)
{
  GiftEntity_o *GiftData; // x0

  return this->fields.type == 1
      && (GiftData = EventRewardEntity__getGiftData(this, method)) != 0
      && GiftEntity__isQp(GiftData, 0);
}