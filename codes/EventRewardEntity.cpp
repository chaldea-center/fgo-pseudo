void __fastcall EventRewardEntity___ctor(EventRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22055 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C22055 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRewardEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  if ( (byte_4C22050 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int__int__int__long___, *(_QWORD *)&slot);
    byte_4C22050 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__long_(
           eventId,
           slot,
           groupId,
           point,
           (const MethodInfo_2FEED78 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x1
  int32_t type; // w8
  GiftEntity_o *GiftData; // x0
  System_String_o *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_String_o *v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  EventRewardSetEntity_o *RewardSetData; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_String_o *name; // x1
  EventRewardExtraEntity_o *SetRewardData; // x0
  System_String_o *v43; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *nameTexta; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C22054 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, nameText);
    byte_4C22054 = 1;
  }
  v43 = 0LL;
  nameTexta = 0LL;
  *nameText = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)nameText,
    (int64_t)StringLiteral_1/*""*/,
    (int64_t)countText,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  *countText = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)countText, (int64_t)StringLiteral_1/*""*/, v11, v12, v13, v14, v15, v16);
  type = this->fields.type;
  if ( type == 1 )
  {
    GiftData = EventRewardEntity__getGiftData(this, v17);
    if ( GiftData )
    {
      GiftEntity__GetInfo(GiftData, &nameTexta, &v43, 0LL);
      v20 = nameTexta;
      *nameText = nameTexta;
      sub_1C3B708((PartyOrganizationUtility_o *)nameText, (int64_t)v20, v21, v22, v23, v24, v25, v26);
      v27 = v43;
      *countText = v43;
      sub_1C3B708((PartyOrganizationUtility_o *)countText, (int64_t)v27, v28, v29, v30, v31, v32, v33);
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
  sub_1C3B708((PartyOrganizationUtility_o *)nameText, (int64_t)name, v35, v36, v37, v38, v39, v40);
}


GiftEntity_o *__fastcall EventRewardEntity__getGiftData(EventRewardEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C22051 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_GiftMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C22051 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v5);
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

  if ( (byte_4C22053 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventRewardSetMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C22053 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventRewardSetMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v5);
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

  if ( (byte_4C22052 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventRewardExtraMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    sub_1C3B764(&Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__getEntitys__, v4);
    byte_4C22052 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Object_array *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventRewardExtraMaster___);
  if ( !Master_object )
    goto LABEL_16;
  Master_object = DataMasterBase_object__object__object___getEntitys(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    (const MethodInfo_329EB84 *)Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__getEntitys__);
  if ( !Master_object )
    goto LABEL_16;
  max_length = Master_object->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( max_length == v8 )
        sub_1C3B9C8(Master_object, v6);
      v9 = (EventRewardExtraEntity_o *)Master_object->m_Items[v8];
      if ( !v9 )
        break;
      if ( v9->fields.eventId == this->fields.eventId && v9->fields.point == this->fields.point )
        return v9;
      if ( max_length == ++v8 )
        return 0LL;
    }
LABEL_16:
    sub_1C3B9C0(Master_object, v6);
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