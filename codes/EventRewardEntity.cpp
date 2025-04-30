void __fastcall EventRewardEntity___ctor(EventRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E59A & 1) == 0 )
  {
    sub_1B863B8(&Method_DataEntityBase_string___ctor__, method);
    byte_4A4E59A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3211E14 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRewardEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  if ( (byte_4A4E595 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataEntityBase_CreateMultiplePK_int__int__int__long___, *(_QWORD *)&slot);
    byte_4A4E595 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__long_(
           eventId,
           slot,
           groupId,
           point,
           (const MethodInfo_2F6C82C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
}


System_String_o *__fastcall EventRewardEntity__CreatePrimaryKey(EventRewardEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventRewardEntity__CreatePK(
           this->fields.eventId,
           this->fields.slot,
           this->fields.groupId,
           this->fields.point,
           v2);
}


void __fastcall EventRewardEntity__GetInfo(
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

  if ( (byte_4A4E599 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, nameText);
    byte_4A4E599 = 1;
  }
  v23 = 0LL;
  nameTexta = 0LL;
  *nameText = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)nameText, (int32_t)StringLiteral_1/*""*/, (int32_t)countText, method);
  *countText = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)countText, (int32_t)StringLiteral_1/*""*/, v7, v8);
  type = this->fields.type;
  if ( type == 1 )
  {
    GiftData = EventRewardEntity__getGiftData(this, v9);
    if ( GiftData )
    {
      GiftEntity__GetInfo(GiftData, &nameTexta, &v23, 0LL);
      v12 = (int)nameTexta;
      *nameText = nameTexta;
      sub_1B8635C((CGThumbnailListItem_o *)nameText, v12, v13, v14);
      v15 = (int)v23;
      *countText = v23;
      sub_1B8635C((CGThumbnailListItem_o *)countText, v15, v16, v17);
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
  sub_1B8635C((CGThumbnailListItem_o *)nameText, (int32_t)name, v19, v20);
}


GiftEntity_o *__fastcall EventRewardEntity__getGiftData(EventRewardEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A4E596 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_GiftMaster___, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A4E596 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_1B86614(Instance, v5);
  }
  return GiftMaster__getDataById((GiftMaster_o *)Instance, this->fields.giftId, 0LL);
}


EventRewardSetEntity_o *__fastcall EventRewardEntity__getRewardSetData(
        EventRewardEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4

  if ( (byte_4A4E598 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventRewardSetMaster___, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A4E598 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventRewardSetMaster___)) == 0LL )
  {
    sub_1B86614(Instance, v5);
  }
  return EventRewardSetMaster__GetEntity(
           (EventRewardSetMaster_o *)Instance,
           2,
           this->fields.eventId,
           this->fields.giftId,
           v6);
}


EventRewardExtraEntity_o *__fastcall EventRewardEntity__getSetRewardData(
        EventRewardEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Object_array *Master_object; // x0
  __int64 v6; // x1
  int max_length; // w9
  int v8; // w10
  EventRewardExtraEntity_o *v9; // x8

  if ( (byte_4A4E597 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_EventRewardExtraMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    sub_1B863B8(&Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__getEntitys__, v4);
    byte_4A4E597 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Object_array *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventRewardExtraMaster___);
  if ( !Master_object )
    goto LABEL_16;
  Master_object = DataMasterBase_object__object__object___getEntitys(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    (const MethodInfo_3217FBC *)Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__getEntitys__);
  if ( !Master_object )
    goto LABEL_16;
  max_length = Master_object->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( max_length == v8 )
        sub_1B8661C(Master_object, v6);
      v9 = (EventRewardExtraEntity_o *)Master_object->m_Items[v8];
      if ( !v9 )
        break;
      if ( v9->fields.eventId == this->fields.eventId && v9->fields.point == this->fields.point )
        return v9;
      if ( max_length == ++v8 )
        return 0LL;
    }
LABEL_16:
    sub_1B86614(Master_object, v6);
  }
  return 0LL;
}


bool __fastcall EventRewardEntity__isQp(EventRewardEntity_o *this, const MethodInfo *method)
{
  GiftEntity_o *GiftData; // x0

  return this->fields.type == 1
      && (GiftData = EventRewardEntity__getGiftData(this, method)) != 0LL
      && GiftEntity__isQp(GiftData, 0LL);
}