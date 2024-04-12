void __fastcall EventRewardEntity___ctor(EventRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42ACB1A & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42ACB1A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRewardEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  if ( (byte_42ACB15 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
    byte_42ACB15 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__long_(
           eventId,
           slot,
           groupId,
           point,
           (const MethodInfo_1A4E8C0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
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
  const MethodInfo *v7; // x1
  int32_t type; // w8
  GiftEntity_o *GiftData; // x0
  EventRewardSetEntity_o *RewardSetData; // x0
  System_String_o *name; // x1
  EventRewardExtraEntity_o *SetRewardData; // x0
  System_String_o *v13; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *nameTexta; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42ACB19 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42ACB19 = 1;
  }
  v13 = 0LL;
  nameTexta = 0LL;
  *nameText = (System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(nameText);
  *countText = (System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(countText);
  type = this->fields.type;
  if ( type == 1 )
  {
    GiftData = EventRewardEntity__getGiftData(this, v7);
    if ( GiftData )
    {
      GiftEntity__GetInfo(GiftData, &nameTexta, &v13, 0LL);
      *nameText = nameTexta;
      sub_B52920(nameText);
      *countText = v13;
      sub_B52920(countText);
    }
    type = this->fields.type;
  }
  if ( type == 3 )
  {
    RewardSetData = EventRewardEntity__getRewardSetData(this, v7);
    if ( !RewardSetData )
      return;
    name = RewardSetData->fields.name;
  }
  else
  {
    SetRewardData = EventRewardEntity__getSetRewardData(this, v7);
    if ( !SetRewardData )
      return;
    name = SetRewardData->fields.name;
  }
  *nameText = name;
  sub_B52920(nameText);
}


GiftEntity_o *__fastcall EventRewardEntity__getGiftData(EventRewardEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42ACB16 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42ACB16 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v4);
  }
  return GiftMaster__getDataById((GiftMaster_o *)Instance, this->fields.giftId, 0LL);
}


EventRewardSetEntity_o *__fastcall EventRewardEntity__getRewardSetData(
        EventRewardEntity_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42ACB18 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventRewardSetMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42ACB18 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRewardSetMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v4);
  }
  return EventRewardSetMaster__GetEntity(
           (EventRewardSetMaster_o *)Instance,
           2,
           this->fields.eventId,
           this->fields.giftId,
           0LL);
}


EventRewardExtraEntity_o *__fastcall EventRewardEntity__getSetRewardData(
        EventRewardEntity_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  int v5; // w9
  unsigned int v6; // w10
  EventRewardExtraEntity_o *v7; // x8
  __int64 v9; // x0

  if ( (byte_42ACB17 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_getEntitys_EventRewardExtraMaster__EventRewardExtraEntity___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42ACB17 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__getEntitys_WarMaster__WarEntity_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F418 *)Method_DataManager_getEntitys_EventRewardExtraMaster__EventRewardExtraEntity___);
  if ( !Instance )
    goto LABEL_14;
  v5 = *((_DWORD *)Instance + 6);
  if ( v5 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= v5 )
      {
        v9 = sub_B52A88(Instance);
        sub_B52A28(v9, 0LL);
      }
      v7 = (EventRewardExtraEntity_o *)*((_QWORD *)Instance + (int)v6 + 4);
      if ( !v7 )
        break;
      if ( v7->fields.eventId == this->fields.eventId && v7->fields.point == this->fields.point )
        return v7;
      if ( (int)++v6 >= v5 )
        return 0LL;
    }
LABEL_14:
    sub_B52A5C(Instance, v4);
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