void __fastcall EventRewardEntity___ctor(EventRewardEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5534 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E5534 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRewardEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  if ( (byte_42E552F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__long___, slot, groupId, point);
    byte_42E552F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__long_(
           eventId,
           slot,
           groupId,
           point,
           (const MethodInfo_1AE3988 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
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

  if ( (byte_42E5533 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)nameText, (_DWORD)countText, method);
    byte_42E5533 = 1;
  }
  v13 = 0LL;
  nameTexta = 0LL;
  *nameText = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(nameText);
  *countText = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(countText);
  type = this->fields.type;
  if ( type == 1 )
  {
    GiftData = EventRewardEntity__getGiftData(this, v7);
    if ( GiftData )
    {
      GiftEntity__GetInfo(GiftData, &nameTexta, &v13, 0LL);
      *nameText = nameTexta;
      sub_B5D560(nameText);
      *countText = v13;
      sub_B5D560(countText);
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
  sub_B5D560(nameText);
}


GiftEntity_o *__fastcall EventRewardEntity__getGiftData(EventRewardEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E5530 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E5530 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return GiftMaster__getDataById((GiftMaster_o *)Instance, this->fields.giftId, 0LL);
}


EventRewardSetEntity_o *__fastcall EventRewardEntity__getRewardSetData(
        EventRewardEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E5532 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRewardSetMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E5532 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRewardSetMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  void *Instance; // x0
  __int64 v9; // x1
  int v10; // w9
  unsigned int v11; // w10
  EventRewardExtraEntity_o *v12; // x8
  __int64 v14; // x0

  if ( (byte_42E5531 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_getEntitys_EventRewardExtraMaster__EventRewardExtraEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E5531 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__getEntitys_WarMaster__WarEntity_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE44E0 *)Method_DataManager_getEntitys_EventRewardExtraMaster__EventRewardExtraEntity___);
  if ( !Instance )
    goto LABEL_14;
  v10 = *((_DWORD *)Instance + 6);
  if ( v10 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v10 )
      {
        v14 = sub_B5D6C8(Instance);
        sub_B5D668(v14, 0LL);
      }
      v12 = (EventRewardExtraEntity_o *)*((_QWORD *)Instance + (int)v11 + 4);
      if ( !v12 )
        break;
      if ( v12->fields.eventId == this->fields.eventId && v12->fields.point == this->fields.point )
        return v12;
      if ( (int)++v11 >= v10 )
        return 0LL;
    }
LABEL_14:
    sub_B5D69C(Instance, v9);
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