void __fastcall EventRewardEntity___ctor(EventRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B263 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B263 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRewardEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  if ( (byte_4A5B25E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
    byte_4A5B25E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__long_(
           eventId,
           slot,
           groupId,
           point,
           (const MethodInfo_2E7E518 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
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
  int32_t v8; // w3
  const MethodInfo *v9; // x1
  int32_t type; // w8
  GiftEntity_o *GiftData; // x0
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  EventRewardSetEntity_o *RewardSetData; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *name; // x1
  EventRewardExtraEntity_o *SetRewardData; // x0
  System_String_o *v23; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *nameTexta; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5B262 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B262 = 1;
  }
  v23 = 0LL;
  nameTexta = 0LL;
  *nameText = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)nameText,
    (int32_t)StringLiteral_1/*""*/,
    (int32_t)countText,
    (int32_t)method);
  *countText = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)countText, (int32_t)StringLiteral_1/*""*/, v7, v8);
  type = this->fields.type;
  if ( type == 1 )
  {
    GiftData = EventRewardEntity__getGiftData(this, v9);
    if ( GiftData )
    {
      GiftEntity__GetInfo(GiftData, &nameTexta, &v23, 0LL);
      v12 = (int)nameTexta;
      *nameText = nameTexta;
      sub_1B88554((ServantStatusBattleListViewItem_o *)nameText, v12, v13, v14);
      v15 = (int)v23;
      *countText = v23;
      sub_1B88554((ServantStatusBattleListViewItem_o *)countText, v15, v16, v17);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)nameText, (int32_t)name, v19, v20);
}


GiftEntity_o *__fastcall EventRewardEntity__getGiftData(EventRewardEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5B25F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B25F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return GiftMaster__getDataById((GiftMaster_o *)Instance, this->fields.giftId, 0LL);
}


EventRewardSetEntity_o *__fastcall EventRewardEntity__getRewardSetData(
        EventRewardEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_4A5B261 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRewardSetMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B261 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRewardSetMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return EventRewardSetMaster__GetEntity(
           (EventRewardSetMaster_o *)Instance,
           2,
           this->fields.eventId,
           this->fields.giftId,
           v5);
}


EventRewardExtraEntity_o *__fastcall EventRewardEntity__getSetRewardData(
        EventRewardEntity_o *this,
        const MethodInfo *method)
{
  System_Object_array *Instance; // x0
  __int64 v4; // x1
  int max_length; // w9
  int v6; // w10
  EventRewardExtraEntity_o *v7; // x8

  if ( (byte_4A5B260 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_getEntitys_EventRewardExtraMaster__EventRewardExtraEntity___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B260 = 1;
  }
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__getEntitys_object__object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7FB68 *)Method_DataManager_getEntitys_EventRewardExtraMaster__EventRewardExtraEntity___);
  if ( !Instance )
    goto LABEL_14;
  max_length = Instance->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( max_length == v6 )
        sub_1B88814(Instance, v4);
      v7 = (EventRewardExtraEntity_o *)Instance->m_Items[v6];
      if ( !v7 )
        break;
      if ( v7->fields.eventId == this->fields.eventId && v7->fields.point == this->fields.point )
        return v7;
      if ( max_length == ++v6 )
        return 0LL;
    }
LABEL_14:
    sub_1B8880C(Instance, v4);
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