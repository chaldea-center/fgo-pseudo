void EventRewardEntity___ctor(EventRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30AF6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D30AF6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventRewardEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  if ( (byte_4D30AF1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
    byte_4D30AF1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__long_(
           eventId,
           slot,
           groupId,
           point,
           (const MethodInfo_31A35B0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x1
  int32_t type; // w8
  GiftEntity_o *GiftData; // x0
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  EventRewardSetEntity_o *RewardSetData; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_String_o *name; // x1
  EventRewardExtraEntity_o *SetRewardData; // x0
  System_String_o *v43; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *nameTexta; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D30AF5 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D30AF5 = 1;
  }
  v43 = 0;
  nameTexta = 0;
  *nameText = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)nameText,
    StringLiteral_1/*""*/,
    (int32_t)countText,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  *countText = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)countText, StringLiteral_1/*""*/, v11, v12, v13, v14, v15, v16);
  type = this->fields.type;
  if ( type == 1 )
  {
    GiftData = EventRewardEntity__getGiftData(this, v17);
    if ( GiftData )
    {
      GiftEntity__GetInfo(GiftData, &nameTexta, &v43, 0);
      v20 = (int)nameTexta;
      *nameText = nameTexta;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)nameText, v20, v21, v22, v23, v24, v25, v26);
      v27 = (int)v43;
      *countText = v43;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)countText, v27, v28, v29, v30, v31, v32, v33);
    }
    type = this->fields.type;
  }
  if ( type == 3 )
  {
    RewardSetData = EventRewardEntity__getRewardSetData(this, v17);
    if ( !RewardSetData )
      return;
    name = RewardSetData->fields.name;
  }
  else
  {
    SetRewardData = EventRewardEntity__getSetRewardData(this, v17);
    if ( !SetRewardData )
      return;
    name = SetRewardData->fields.name;
  }
  *nameText = name;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)nameText, (int32_t)name, v35, v36, v37, v38, v39, v40);
}


GiftEntity_o *EventRewardEntity__getGiftData(EventRewardEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D30AF2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30AF2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_GiftMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v4);
  }
  return GiftMaster__getDataById((GiftMaster_o *)Instance, this->fields.giftId, 0);
}


EventRewardSetEntity_o *EventRewardEntity__getRewardSetData(EventRewardEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_4D30AF4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventRewardSetMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30AF4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventRewardSetMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v4);
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
  int v6; // w10
  EventRewardExtraEntity_o *v7; // x8

  if ( (byte_4D30AF3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventRewardExtraMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__getEntitys__);
    byte_4D30AF3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Object_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventRewardExtraMaster___);
  if ( !Master_object )
    goto LABEL_16;
  Master_object = DataMasterBase_object__object__object___getEntitys(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    (const MethodInfo_3467458 *)Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__getEntitys__);
  if ( !Master_object )
    goto LABEL_16;
  max_length = Master_object->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( max_length == v6 )
        sub_1C93D34(Master_object);
      v7 = (EventRewardExtraEntity_o *)Master_object->m_Items[v6];
      if ( !v7 )
        break;
      if ( v7->fields.eventId == this->fields.eventId && v7->fields.point == this->fields.point )
        return v7;
      if ( max_length == ++v6 )
        return 0;
    }
LABEL_16:
    sub_1C93D2C(Master_object, v4);
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