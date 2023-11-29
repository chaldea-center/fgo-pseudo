void __fastcall EventRewardEntity___ctor(EventRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F6156 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F6156 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRewardEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  if ( (byte_40F6151 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int__long___, *(_QWORD *)&slot);
    byte_40F6151 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__long_(
           eventId,
           slot,
           groupId,
           point,
           (const MethodInfo_18C29C0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x1
  int32_t type; // w8
  GiftEntity_o *GiftData; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  EventRewardSetEntity_o *RewardSetData; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_o *name; // x1
  EventRewardExtraEntity_o *SetRewardData; // x0
  System_Int32_array **v43; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *nameTexta; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F6155 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, nameText);
    byte_40F6155 = 1;
  }
  v43 = 0LL;
  nameTexta = 0LL;
  *nameText = (System_String_o *)StringLiteral_1;
  sub_B16F98(
    (BattleServantConfConponent_o *)nameText,
    (System_Int32_array **)StringLiteral_1,
    (System_String_array **)countText,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  *countText = (System_String_o *)StringLiteral_1;
  sub_B16F98(
    (BattleServantConfConponent_o *)countText,
    (System_Int32_array **)StringLiteral_1,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  type = this->fields.type;
  if ( type == 1 )
  {
    GiftData = EventRewardEntity__getGiftData(this, v17);
    if ( GiftData )
    {
      GiftEntity__GetInfo(GiftData, &nameTexta, (System_String_o **)&v43, 0LL);
      v20 = (System_Int32_array **)nameTexta;
      *nameText = nameTexta;
      sub_B16F98((BattleServantConfConponent_o *)nameText, v20, v21, v22, v23, v24, v25, v26);
      v27 = v43;
      *countText = (System_String_o *)v43;
      sub_B16F98((BattleServantConfConponent_o *)countText, v27, v28, v29, v30, v31, v32, v33);
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
  sub_B16F98((BattleServantConfConponent_o *)nameText, (System_Int32_array **)name, v35, v36, v37, v38, v39, v40);
}


GiftEntity_o *__fastcall EventRewardEntity__getGiftData(EventRewardEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40F6152 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F6152 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return GiftMaster__getDataById(MasterData_WarQuestSelectionMaster, this->fields.giftId, 0LL);
}


EventRewardSetEntity_o *__fastcall EventRewardEntity__getRewardSetData(
        EventRewardEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  EventRewardSetMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40F6154 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRewardSetMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F6154 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventRewardSetMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRewardSetMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return EventRewardSetMaster__GetEntity(
           MasterData_WarQuestSelectionMaster,
           2,
           this->fields.eventId,
           this->fields.giftId,
           0LL);
}


EventRewardExtraEntity_o *__fastcall EventRewardEntity__getSetRewardData(
        EventRewardEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  WarEntity_array *Entitys_WarMaster__WarEntity; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int max_length; // w9
  unsigned int v9; // w10
  EventRewardExtraEntity_o *v10; // x8

  if ( (byte_40F6153 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_getEntitys_EventRewardExtraMaster__EventRewardExtraEntity___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F6153 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Entitys_WarMaster__WarEntity = DataManager__getEntitys_WarMaster__WarEntity_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_18C3518 *)Method_DataManager_getEntitys_EventRewardExtraMaster__EventRewardExtraEntity___);
  if ( !Entitys_WarMaster__WarEntity )
    goto LABEL_14;
  max_length = Entitys_WarMaster__WarEntity->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        sub_B17100(Entitys_WarMaster__WarEntity, v6, v7);
        sub_B170A0();
      }
      v10 = (EventRewardExtraEntity_o *)Entitys_WarMaster__WarEntity->m_Items[v9];
      if ( !v10 )
        break;
      if ( v10->fields.eventId == this->fields.eventId && v10->fields.point == this->fields.point )
        return v10;
      if ( (int)++v9 >= max_length )
        return 0LL;
    }
LABEL_14:
    sub_B170D4();
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