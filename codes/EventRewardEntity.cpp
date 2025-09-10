void EventRewardEntity___ctor(EventRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C273D1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C273D1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventRewardEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  if ( (byte_4C273CC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
    byte_4C273CC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__long_(
           eventId,
           slot,
           groupId,
           point,
           (const MethodInfo_30CD4C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  int32_t type; // w8
  GiftEntity_o *GiftData; // x0
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  EventRewardSetEntity_o *RewardSetData; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_String_o *name; // x1
  EventRewardExtraEntity_o *SetRewardData; // x0
  System_String_o *v23; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *nameTexta; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C273D0 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C273D0 = 1;
  }
  v23 = 0;
  nameTexta = 0;
  *nameText = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)nameText, StringLiteral_1/*""*/, (int32_t)countText, method);
  *countText = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)countText, StringLiteral_1/*""*/, v7, v8);
  type = this->fields.type;
  if ( type == 1 )
  {
    GiftData = EventRewardEntity__getGiftData(this, v9);
    if ( GiftData )
    {
      GiftEntity__GetInfo(GiftData, &nameTexta, &v23, 0);
      v12 = (int)nameTexta;
      *nameText = nameTexta;
      sub_1C2D434((CGThumbnailListItem_o *)nameText, v12, v13, v14);
      v15 = (int)v23;
      *countText = v23;
      sub_1C2D434((CGThumbnailListItem_o *)countText, v15, v16, v17);
    }
    type = this->fields.type;
  }
  if ( type == 3 )
  {
    RewardSetData = EventRewardEntity__getRewardSetData(this, v9);
    if ( !RewardSetData )
      return;
    name = RewardSetData->fields.name;
  }
  else
  {
    SetRewardData = EventRewardEntity__getSetRewardData(this, v9);
    if ( !SetRewardData )
      return;
    name = SetRewardData->fields.name;
  }
  *nameText = name;
  sub_1C2D434((CGThumbnailListItem_o *)nameText, (int32_t)name, v19, v20);
}


GiftEntity_o *EventRewardEntity__getGiftData(EventRewardEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C273CD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C273CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  return GiftMaster__getDataById((GiftMaster_o *)Instance, this->fields.giftId, 0);
}


EventRewardSetEntity_o *EventRewardEntity__getRewardSetData(EventRewardEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_4C273CF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventRewardSetMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C273CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRewardSetMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
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
  __int64 v5; // x2
  int max_length; // w9
  int v7; // w10
  EventRewardExtraEntity_o *v8; // x8

  if ( (byte_4C273CE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventRewardExtraMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__getEntitys__);
    byte_4C273CE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Object_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventRewardExtraMaster___);
  if ( !Master_object )
    goto LABEL_16;
  Master_object = DataMasterBase_object__object__object___getEntitys(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    (const MethodInfo_338BAD4 *)Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__getEntitys__);
  if ( !Master_object )
    goto LABEL_16;
  max_length = Master_object->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( max_length == v7 )
        sub_1C2D6F4(Master_object, v4, v5);
      v8 = (EventRewardExtraEntity_o *)Master_object->m_Items[v7];
      if ( !v8 )
        break;
      if ( v8->fields.eventId == this->fields.eventId && v8->fields.point == this->fields.point )
        return v8;
      if ( max_length == ++v7 )
        return 0;
    }
LABEL_16:
    sub_1C2D6EC(Master_object, v4);
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