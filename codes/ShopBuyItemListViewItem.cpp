void __fastcall ShopBuyItemListViewItem___ctor(
        ShopBuyItemListViewItem_o *this,
        int32_t index,
        int32_t shopKind,
        ShopEntity_o *shopEntity,
        int64_t enterTime,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x2

  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields._ShopKind_k__BackingField = shopKind;
  this->fields._EnterTime_k__BackingField = enterTime;
  ShopBuyItemListViewItem__Modify(this, shopEntity, v10);
}


ItemEntity_array *__fastcall ShopBuyItemListViewItem__GetEventItemEntities(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Int32_array *itemIds; // x8
  __int64 v8; // x22
  __int64 v9; // x0
  ItemEntity_array *v10; // x20
  unsigned __int64 v11; // x21
  signed __int64 v12; // x24
  BattleServantConfConponent_o *i; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v15; // x2
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x23
  __int64 v24; // x0
  __int64 v25; // x0

  if ( (byte_421A0D6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4);
    sub_B0D8A4(&ItemEntity___TypeInfo, v5);
    this = (ShopBuyItemListViewItem_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_421A0D6 = 1;
  }
  if ( !shopEntity )
    goto LABEL_18;
  this = (ShopBuyItemListViewItem_o *)ShopEntity__GetItemID(shopEntity, (const MethodInfo *)shopEntity);
  if ( (int)this < 1 )
    return 0LL;
  itemIds = shopEntity->fields.itemIds;
  if ( !itemIds )
    goto LABEL_18;
  v8 = *(_QWORD *)&itemIds->max_length;
  v9 = sub_B0D8BC(ItemEntity___TypeInfo, (unsigned int)v8);
  v10 = (ItemEntity_array *)v9;
  if ( (int)v8 >= 1 )
  {
    v11 = 0LL;
    v12 = (int)v8;
    for ( i = (BattleServantConfConponent_o *)(v9 + 32); ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
    {
      this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        break;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)this,
                                                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__GetItemIDs(shopEntity, v11, v15);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      this = (ShopBuyItemListViewItem_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            MasterData_WarQuestSelectionMaster,
                                            (int32_t)this,
                                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v10 )
        break;
      v22 = (System_Int32_array **)this;
      if ( this )
      {
        this = (ShopBuyItemListViewItem_o *)sub_B0D964(this, v10->obj.klass->_1.element_class);
        if ( !this )
        {
          v25 = sub_B0D99C(0LL);
          sub_B0D948(v25, 0LL);
        }
      }
      if ( v11 >= v10->max_length )
      {
        v24 = sub_B0D9A8(this);
        sub_B0D948(v24, 0LL);
      }
      i->klass = (BattleServantConfConponent_c *)v22;
      sub_B0D840(i, v22, v16, v17, v18, v19, v20, v21);
      if ( (__int64)++v11 >= v12 )
        return v10;
    }
LABEL_18:
    sub_B0D97C(this);
  }
  return v10;
}


int32_t __fastcall ShopBuyItemListViewItem__GetEventPrice(
        ShopBuyItemListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_B0D97C(0LL);
  return ShopEntity__GetPrices(Shop_k__BackingField, num, method);
}


bool __fastcall ShopBuyItemListViewItem__GetIsPreparation(
        ShopBuyItemListViewItem_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ShopEntity_o *Shop_k__BackingField; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return ShopEntity__IsPreparation(Shop_k__BackingField, message, itemName, method);
  *message = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)message,
    0LL,
    (System_String_array **)itemName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  *itemName = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)itemName, 0LL, v11, v12, v13, v14, v15, v16);
  return 1;
}


bool __fastcall ShopBuyItemListViewItem__GetIsRarePriShopPurchased(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *v12; // [xsp+8h] [xbp-28h] BYREF
  UserEventEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_421A0D7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, shopEntity);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_421A0D7 = 1;
  }
  entity = 0LL;
  v12 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !shopEntity || !MasterData_WarQuestSelectionMaster )
    goto LABEL_20;
  if ( !UserEventMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          (int64_t)Instance,
          shopEntity->fields.eventId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_20;
  if ( !UserEventEntity__getEventFlag(entity, 1, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &v12,
          shopEntity->fields.eventId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 1;
  Instance = (DataManager_o *)v12;
  if ( !v12 )
LABEL_20:
    sub_B0D97C(Instance);
  return !EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)v12, 0LL);
}


ItemEntity_o *__fastcall ShopBuyItemListViewItem__GetItemEntity(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t purchaseType; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v8; // x1
  int32_t v9; // w1

  if ( (byte_421A0D4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4);
    this = (ShopBuyItemListViewItem_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421A0D4 = 1;
  }
  if ( !shopEntity )
    goto LABEL_15;
  purchaseType = shopEntity->fields.purchaseType;
  if ( purchaseType == 3 || purchaseType == 2 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopBuyItemListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( this )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
        v9 = 2;
        return (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 v9,
                                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      }
    }
LABEL_15:
    sub_B0D97C(this);
  }
  if ( purchaseType == 1 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)this,
                                                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__get_TargetId(shopEntity, v8);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v9 = (int)this;
        return (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 v9,
                                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      }
    }
    goto LABEL_15;
  }
  return 0LL;
}


bool __fastcall ShopBuyItemListViewItem__GetNowPurchaseShopSendType(
        ShopBuyItemListViewItem_o *this,
        bool *isTake,
        bool *isSend,
        bool *isQuest,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6
  ShopEntity_o *Shop_k__BackingField; // x0
  int32_t buyQuestNum; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+8h] [xbp-28h] BYREF
  int32_t buyServantNum; // [xsp+18h] [xbp-18h] BYREF
  int32_t buyItemNum; // [xsp+1Ch] [xbp-14h] BYREF

  buyItemNum = 0;
  buyServantNum = 0;
  buyQuestNum = 0;
  *isTake = 0;
  *isSend = 0;
  *isQuest = 0;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
  {
    buyItemNum = 0;
    buyServantNum = 0;
    *(_QWORD *)buyCmdCodeNum = 0LL;
    buyQuestNum = 0;
    ShopEntity__GetLastPurchaseSum(
      Shop_k__BackingField,
      &buyItemNum,
      &buyServantNum,
      &buyCmdCodeNum[1],
      buyCmdCodeNum,
      &buyQuestNum,
      v5);
    LOBYTE(Shop_k__BackingField) = 1;
    *isTake = buyItemNum > 0;
    *isSend = buyCmdCodeNum[1] + buyServantNum + buyCmdCodeNum[0] > 0;
    *isQuest = buyQuestNum > 0;
  }
  return (char)Shop_k__BackingField;
}


QuestEntity_o *__fastcall ShopBuyItemListViewItem__GetQuestEntity(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v7; // x1

  if ( (byte_421A0D5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, shopEntity);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4);
    this = (ShopBuyItemListViewItem_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421A0D5 = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( shopEntity->fields.purchaseType == 6 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)this,
                                                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__get_TargetId(shopEntity, v7);
      if ( MasterData_WarQuestSelectionMaster )
        return (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  (int32_t)this,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    }
LABEL_9:
    sub_B0D97C(this);
  }
  return 0LL;
}


bool __fastcall ShopBuyItemListViewItem__GetSendType(
        ShopBuyItemListViewItem_o *this,
        bool *isTake,
        bool *isSend,
        bool *isQuest,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x7
  ShopEntity_o *Shop_k__BackingField; // x0
  int32_t buyQuestNum[2]; // [xsp+0h] [xbp-30h] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+8h] [xbp-28h] BYREF
  int32_t buyServantNum; // [xsp+18h] [xbp-18h] BYREF
  int32_t buyItemNum; // [xsp+1Ch] [xbp-14h] BYREF

  buyItemNum = 0;
  buyServantNum = 0;
  *(_QWORD *)buyQuestNum = 0LL;
  *isTake = 0;
  *isSend = 0;
  *isQuest = 0;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
  {
    buyItemNum = 0;
    buyServantNum = 0;
    *(_QWORD *)buyQuestNum = 0LL;
    *(_QWORD *)buyCmdCodeNum = 0LL;
    ShopEntity__GetSum(
      Shop_k__BackingField,
      &buyItemNum,
      &buyServantNum,
      &buyCmdCodeNum[1],
      buyCmdCodeNum,
      &buyQuestNum[1],
      buyQuestNum,
      v5);
    LOBYTE(Shop_k__BackingField) = 1;
    *isTake = buyItemNum > 0;
    *isSend = buyCmdCodeNum[1] + buyServantNum + buyCmdCodeNum[0] > 0;
    *isQuest = buyQuestNum[1] > 0;
  }
  return (char)Shop_k__BackingField;
}


bool __fastcall ShopBuyItemListViewItem__IsPrepareTextOnMask(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  bool result; // w0
  int64_t Shop_k__BackingField; // x0
  int32_t TargetId; // w20
  const MethodInfo *v18; // x1
  UserPresentBoxMaster_o *v19; // x20
  System_String_o *v20; // x21
  System_String_o *v21; // x0
  int32_t v22; // w20
  System_String_o *v23; // x0
  int32_t v24; // w21
  const MethodInfo *v25; // x1
  UserPresentBoxMaster_o *v26; // x20
  UserEquipMaster_o *Master_WarQuestSelectionMaster; // x20
  UserEquipEntity_array *List; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v31; // x21
  const MethodInfo *v32; // x1
  UserPresentBoxMaster_o *v33; // x20
  struct ShopEntity_o *v34; // x8
  int v35; // w8
  int v36; // w9
  __int64 v37; // x10
  bool IsAlreadyInPossession; // w8
  __int64 v39; // x0
  int32_t v40; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_421A0DC & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_UserEquipEntity___, method);
    sub_B0D8A4(&CondType_TypeInfo, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEquipMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Func_UserEquipEntity__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_UserEquipEntity__bool__TypeInfo, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    sub_B0D8A4(&Method_ShopBuyItemListViewItem__IsPrepareTextOnMask_b__87_0__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_421A0DC = 1;
  }
  v40 = 0;
  result = 0;
  if ( this->fields._ShopKind_k__BackingField != 6 )
    return result;
  Shop_k__BackingField = (int64_t)this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_63;
  if ( *(_DWORD *)(Shop_k__BackingField + 48) == 19 )
  {
    TargetId = ShopEntity__get_TargetId((ShopEntity_o *)Shop_k__BackingField, method);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsCommandCodeGet(TargetId, 0LL) )
      return 0;
    Shop_k__BackingField = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Shop_k__BackingField )
      goto LABEL_63;
    Shop_k__BackingField = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)Shop_k__BackingField,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    if ( !this->fields._Shop_k__BackingField )
      goto LABEL_63;
    v19 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
    Shop_k__BackingField = ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, v18);
    if ( !v19 )
      goto LABEL_63;
    if ( UserPresentBoxMaster__isExist(v19, 11, Shop_k__BackingField, 0LL) )
      return 0;
    Shop_k__BackingField = (int64_t)this->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_63;
  }
  if ( *(_DWORD *)(Shop_k__BackingField + 48) == 14 )
  {
    v40 = ShopEntity__get_TargetId((ShopEntity_o *)Shop_k__BackingField, method);
    Shop_k__BackingField = (int64_t)System_Int32__ToString((int32_t)&v40, 0LL);
    if ( !Shop_k__BackingField )
      goto LABEL_63;
    v20 = (System_String_o *)Shop_k__BackingField;
    v21 = System_String__Substring_43913640(
            (System_String_o *)Shop_k__BackingField,
            0,
            *(_DWORD *)(Shop_k__BackingField + 16) - 2,
            0LL);
    v22 = System_Int32__Parse(v21, 0LL);
    v23 = System_String__Substring(v20, v20->fields.m_stringLength - 2, 0LL);
    v24 = System_Int32__Parse(v23, 0LL);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsReleaseCostume(v22, v24, 0LL) )
      return 0;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsCostumeGet(v22, v24, 0LL) )
      return 0;
    Shop_k__BackingField = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Shop_k__BackingField )
      goto LABEL_63;
    Shop_k__BackingField = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)Shop_k__BackingField,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    if ( !this->fields._Shop_k__BackingField )
      goto LABEL_63;
    v26 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
    Shop_k__BackingField = ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, v25);
    if ( !v26 )
      goto LABEL_63;
    if ( UserPresentBoxMaster__isExist(v26, 9, Shop_k__BackingField, 0LL) )
      return 0;
    Shop_k__BackingField = (int64_t)this->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_63;
  }
  if ( *(_DWORD *)(Shop_k__BackingField + 48) == 2 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserEquipMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEquipMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Shop_k__BackingField = NetworkManager__get_UserId(0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_63;
    List = UserEquipMaster__getList(Master_WarQuestSelectionMaster, Shop_k__BackingField, 0LL);
    v31 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_UserEquipEntity__bool__TypeInfo,
                                                                               v29,
                                                                               v30);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v31,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewItem__IsPrepareTextOnMask_b__87_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_UserEquipEntity__bool___ctor__);
    if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
            (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)List,
            (System_Func_T__bool__o *)v31,
            (const MethodInfo_17071E4 *)Method_BasicHelper_Any_UserEquipEntity___) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Shop_k__BackingField = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
      if ( !this->fields._Shop_k__BackingField )
        goto LABEL_63;
      v33 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
      Shop_k__BackingField = ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, v32);
      if ( !v33 )
        goto LABEL_63;
      if ( !UserPresentBoxMaster__isExist(v33, 5, Shop_k__BackingField, 0LL) )
      {
        Shop_k__BackingField = (int64_t)this->fields._Shop_k__BackingField;
        if ( !Shop_k__BackingField )
          goto LABEL_63;
        goto LABEL_46;
      }
    }
    return 0;
  }
LABEL_46:
  if ( *(_DWORD *)(Shop_k__BackingField + 48) == 16 )
  {
    Shop_k__BackingField = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Shop_k__BackingField )
      goto LABEL_63;
    Shop_k__BackingField = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)Shop_k__BackingField,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v34 = this->fields._Shop_k__BackingField;
    if ( !v34 )
      goto LABEL_63;
    if ( !Shop_k__BackingField )
      goto LABEL_63;
    Shop_k__BackingField = (int64_t)ShopReleaseMaster__GetEntitiyList(
                                      (ShopReleaseMaster_o *)Shop_k__BackingField,
                                      v34->fields.id,
                                      0LL);
    v40 = 0;
    if ( !Shop_k__BackingField )
      goto LABEL_63;
    v35 = *(_DWORD *)(Shop_k__BackingField + 24);
    if ( v35 >= 1 )
    {
      v36 = 0;
      while ( 1 )
      {
        if ( v36 >= (unsigned int)v35 )
        {
          v39 = sub_B0D9A8(Shop_k__BackingField);
          sub_B0D948(v39, 0LL);
        }
        v37 = *(_QWORD *)(Shop_k__BackingField + 8LL * v36 + 32);
        if ( !v37 )
          break;
        if ( *(_DWORD *)(v37 + 20) == 67 )
          return 0;
        v40 = ++v36;
        if ( v36 >= v35 )
          goto LABEL_57;
      }
LABEL_63:
      sub_B0D97C(Shop_k__BackingField);
    }
LABEL_57:
    Shop_k__BackingField = (int64_t)this->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_63;
  }
  if ( (*(_BYTE *)(Shop_k__BackingField + 45) & 0x20) == 0 )
    return 1;
  IsAlreadyInPossession = ShopEntity__GetIsAlreadyInPossession((ShopEntity_o *)Shop_k__BackingField, 0, v2);
  result = 0;
  if ( !IsAlreadyInPossession )
    return 1;
  return result;
}


void __fastcall ShopBuyItemListViewItem__Modify(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  ShopBuyItemListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Int32_array **ItemEntity; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  ShopBuyItemListViewItem_o *v14; // x0
  const MethodInfo *v15; // x2
  bool IsRarePriShopPurchased; // w0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  ShopBuyItemListViewItem_o *v23; // x0
  const MethodInfo *v24; // x1
  MethodInfo *v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct ShopEntity_o *Shop_k__BackingField; // x8
  System_Int32_array **CommonConsumeEntities; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  BattleServantConfConponent_o *p_EventItemEntities_k__BackingField; // x0
  System_Int32_array **EventItemEntities; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int64_t Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x2
  bool v51; // w8

  v4 = this;
  if ( (byte_421A0D3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserShopMaster___, shopEntity);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    this = (ShopBuyItemListViewItem_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_421A0D3 = 1;
  }
  ItemEntity = (System_Int32_array **)ShopBuyItemListViewItem__GetItemEntity(this, shopEntity, method);
  v4->fields.itemEntity = (struct ItemEntity_o *)ItemEntity;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.itemEntity, ItemEntity, v8, v9, v10, v11, v12, v13);
  IsRarePriShopPurchased = ShopBuyItemListViewItem__GetIsRarePriShopPurchased(v14, shopEntity, v15);
  v4->fields._Shop_k__BackingField = shopEntity;
  v4->fields._IsRarePriShopPurchased_k__BackingField = IsRarePriShopPurchased;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v4->fields._Shop_k__BackingField,
    (System_Int32_array **)shopEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Shop_k__BackingField = v4->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField && Shop_k__BackingField->fields.payType == 14 )
  {
    if ( shopEntity )
    {
      CommonConsumeEntities = (System_Int32_array **)ShopEntity__GetCommonConsumeEntities(shopEntity, v24);
      v4->fields._CommonConsumeEntities_k__BackingField = (struct CommonConsumeEntity_array *)CommonConsumeEntities;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v4->fields._CommonConsumeEntities_k__BackingField,
        CommonConsumeEntities,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    v4->fields._EventItemEntities_k__BackingField = 0LL;
    p_EventItemEntities_k__BackingField = (BattleServantConfConponent_o *)&v4->fields._EventItemEntities_k__BackingField;
  }
  else
  {
    EventItemEntities = (System_Int32_array **)ShopBuyItemListViewItem__GetEventItemEntities(v23, shopEntity, v25);
    v4->fields._EventItemEntities_k__BackingField = (struct ItemEntity_array *)EventItemEntities;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v4->fields._EventItemEntities_k__BackingField,
      EventItemEntities,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    v4->fields._CommonConsumeEntities_k__BackingField = 0LL;
    p_EventItemEntities_k__BackingField = (BattleServantConfConponent_o *)&v4->fields._CommonConsumeEntities_k__BackingField;
  }
  sub_B0D840(p_EventItemEntities_k__BackingField, 0LL, (System_String_array **)v25, v26, v27, v28, v29, v30);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !shopEntity
    || !MasterData_WarQuestSelectionMaster
    || (Instance = (int64_t)UserShopMaster__GetEntityDefinitely(
                              MasterData_WarQuestSelectionMaster,
                              Instance,
                              shopEntity->fields.baseShopId,
                              0LL)) == 0 )
  {
LABEL_20:
    sub_B0D97C(Instance);
  }
  v4->fields._TotalNum_k__BackingField = *(_DWORD *)(Instance + 28);
  v4->fields._IsNotHavingShopItemReceived_k__BackingField = ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, v49);
  v51 = (shopEntity->fields.flag & 0x2000) != 0 && ShopEntity__GetIsAlreadyInPossession(shopEntity, 0, v50);
  v4->fields._IsAlreadyInPossession_k__BackingField = v51;
}


bool __fastcall ShopBuyItemListViewItem__SetSortValue(
        ShopBuyItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ShopEntity_o *v5; // x0
  struct ShopEntity_o *Shop_k__BackingField; // x8
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  v5 = (ShopEntity_o *)ListViewItem__SetSortValue((ListViewItem_o *)this, sort, 0LL);
  if ( ((unsigned __int8)v5 & 1) == 0 )
    return 0;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_16;
  if ( Shop_k__BackingField->fields.purchaseType == 16 )
  {
    if ( sort )
      return !ListViewSort__GetFilter(sort, 52, 0LL);
LABEL_16:
    sub_B0D97C(v5);
  }
  if ( !sort )
    goto LABEL_16;
  if ( ListViewSort__GetFilter(sort, 52, 0LL) )
  {
    v5 = this->fields._Shop_k__BackingField;
    if ( !v5 )
      goto LABEL_16;
    if ( !ShopEntity__IsServantGet(v5, v7) )
      return 0;
  }
  if ( ListViewSort__GetFilter(sort, 53, 0LL) )
  {
    v5 = this->fields._Shop_k__BackingField;
    if ( !v5 )
      goto LABEL_16;
    if ( ShopEntity__IsServantGet(v5, v8) )
      return 0;
  }
  return 1;
}


bool __fastcall ShopBuyItemListViewItem__TryGetClosedMessage(
        ShopBuyItemListViewItem_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( !this->fields._Shop_k__BackingField )
    sub_B0D97C(this);
  *message = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)message,
    0LL,
    (System_String_array **)itemName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  *itemName = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)itemName, 0LL, v9, v10, v11, v12, v13, v14);
  return 0;
}


bool __fastcall ShopBuyItemListViewItem___IsPrepareTextOnMask_b__87_0(
        ShopBuyItemListViewItem_o *this,
        UserEquipEntity_o *equip,
        const MethodInfo *method)
{
  ShopBuyItemListViewItem_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  const MethodInfo *v7; // x1
  ShopEntity_o *Shop_k__BackingField; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_421A0DD & 1) == 0 )
  {
    this = (ShopBuyItemListViewItem_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equip);
    byte_421A0DD = 1;
  }
  if ( !equip )
    goto LABEL_9;
  v6 = *(_QWORD *)&equip->fields.equipId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&equip->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  this = (ShopBuyItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v10, 0LL);
  Shop_k__BackingField = v4->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
LABEL_9:
    sub_B0D97C(this);
  return (_DWORD)this == ShopEntity__get_TargetId(Shop_k__BackingField, v7);
}


int64_t __fastcall ShopBuyItemListViewItem__get_ActiveTime(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return Shop_k__BackingField->fields.closedAt;
  else
    return 0LL;
}


System_String_o *__fastcall ShopBuyItemListViewItem__get_BulkNameText(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ItemEntity_o *itemEntity; // x8

  if ( (byte_421A0D9 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10909/*"QP_UNIT"*/, v3);
    byte_421A0D9 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity || itemEntity->fields.type != 1 )
    return ShopBuyItemListViewItem__get_NameText(this, method);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10909/*"QP_UNIT"*/, 0LL);
}


CommonConsumeEntity_array *__fastcall ShopBuyItemListViewItem__get_CommonConsumeEntities(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommonConsumeEntities_k__BackingField;
}


System_String_o *__fastcall ShopBuyItemListViewItem__get_DetailText(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8
  System_String_o **p_detail; // x8
  struct ItemEntity_o *itemEntity; // x8
  LocalizationManager_c *v6; // x0

  if ( (byte_421A0DA & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    byte_421A0DA = 1;
  }
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
  {
    p_detail = &Shop_k__BackingField->fields.detail;
  }
  else
  {
    itemEntity = this->fields.itemEntity;
    if ( !itemEntity )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_4212885 )
      {
        sub_B0D8A4(&LocalizationManager_TypeInfo, method);
        byte_4212885 = 1;
      }
      v6 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v6 = LocalizationManager_TypeInfo;
      }
      itemEntity = (struct ItemEntity_o *)v6->static_fields;
    }
    p_detail = &itemEntity->fields.detail;
  }
  return *p_detail;
}


int64_t __fastcall ShopBuyItemListViewItem__get_EnterTime(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._EnterTime_k__BackingField;
}


ItemEntity_array *__fastcall ShopBuyItemListViewItem__get_EventItemEntities(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._EventItemEntities_k__BackingField;
}


bool __fastcall ShopBuyItemListViewItem__get_IsAlreadyInPossession(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsAlreadyInPossession_k__BackingField;
}


bool __fastcall ShopBuyItemListViewItem__get_IsChocolateSvtEquip(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8
  int32_t purchaseType; // w8
  DataManager_o *Instance; // x0
  const MethodInfo *v8; // x1
  ShopEntity_o *v9; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  int32_t v11; // w2
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421A0DB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_421A0DB = 1;
  }
  entity = 0LL;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    return 0;
  purchaseType = Shop_k__BackingField->fields.purchaseType;
  if ( purchaseType != 8 && purchaseType != 4 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = this->fields._Shop_k__BackingField;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  if ( v9 )
  {
    Instance = (DataManager_o *)ShopEntity__get_TargetId(v9, v8);
    v11 = (int)Instance;
    if ( !v10 )
LABEL_16:
      sub_B0D97C(Instance);
  }
  else
  {
    v11 = 0;
    if ( !Instance )
      goto LABEL_16;
  }
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v10,
         &entity,
         v11,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_16;
    return ServantEntity__get_IsChocolateSvtEquip((ServantEntity_o *)entity, 0LL);
  }
  else
  {
    return 0;
  }
}


bool __fastcall ShopBuyItemListViewItem__get_IsExchangeQP(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8

  itemEntity = this->fields.itemEntity;
  return itemEntity && itemEntity->fields.type == 1;
}


bool __fastcall ShopBuyItemListViewItem__get_IsHaveIconShowable(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_B0D97C(this);
  return (BYTE1(Shop_k__BackingField->fields.flag) >> 6) & 1;
}


bool __fastcall ShopBuyItemListViewItem__get_IsIndefinitePeriodShowable(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_B0D97C(this);
  return (BYTE2(Shop_k__BackingField->fields.flag) >> 2) & 1;
}


bool __fastcall ShopBuyItemListViewItem__get_IsItemTypeCommonConsume(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  return Shop_k__BackingField && Shop_k__BackingField->fields.payType == 14;
}


bool __fastcall ShopBuyItemListViewItem__get_IsItemTypeFree(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  return Shop_k__BackingField && Shop_k__BackingField->fields.payType == 13;
}


bool __fastcall ShopBuyItemListViewItem__get_IsItemTypeRarePri(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  return Shop_k__BackingField && Shop_k__BackingField->fields.payType == 10;
}


bool __fastcall ShopBuyItemListViewItem__get_IsNotHavingShopItemReceived(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsNotHavingShopItemReceived_k__BackingField;
}


bool __fastcall ShopBuyItemListViewItem__get_IsRarePriShopPurchased(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsRarePriShopPurchased_k__BackingField;
}


bool __fastcall ShopBuyItemListViewItem__get_IsSoldOut(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    LOBYTE(Shop_k__BackingField) = ShopEntity__IsSoldOut(Shop_k__BackingField, method);
  return (char)Shop_k__BackingField;
}


int32_t __fastcall ShopBuyItemListViewItem__get_ItemCount(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8
  struct System_Int32_array *itemIds; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField || (itemIds = Shop_k__BackingField->fields.itemIds) == 0LL )
    sub_B0D97C(this);
  return itemIds->max_length;
}


int32_t __fastcall ShopBuyItemListViewItem__get_LimitNum(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return Shop_k__BackingField->fields.limitNum;
  else
    return 0;
}


System_String_o *__fastcall ShopBuyItemListViewItem__get_NameText(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0
  struct ItemEntity_o *itemEntity; // x8

  if ( (byte_421A0D8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18452/*"error"*/, method);
    byte_421A0D8 = 1;
  }
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return ShopEntity__getName(Shop_k__BackingField, method);
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.name;
  else
    return (System_String_o *)StringLiteral_18452/*"error"*/;
}


int32_t __fastcall ShopBuyItemListViewItem__get_Price(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0
  struct ItemEntity_o *itemEntity; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return ShopEntity__GetPrice(Shop_k__BackingField, method);
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.sellQp;
  else
    return 0;
}


int32_t __fastcall ShopBuyItemListViewItem__get_PriceIcon(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0
  ItemEntity_o *itemEntity; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return ShopEntity__GetPriceIcon(Shop_k__BackingField, method);
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return ItemEntity__GetPriceIcon(itemEntity, 0LL);
  else
    return 1;
}


int32_t __fastcall ShopBuyItemListViewItem__get_PurchaseType(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return Shop_k__BackingField->fields.purchaseType;
  else
    return this->fields.itemEntity != 0LL;
}


ShopEntity_o *__fastcall ShopBuyItemListViewItem__get_Shop(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Shop_k__BackingField;
}


int32_t __fastcall ShopBuyItemListViewItem__get_ShopKind(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._ShopKind_k__BackingField;
}


int32_t __fastcall ShopBuyItemListViewItem__get_TargetId(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    LODWORD(Shop_k__BackingField) = ShopEntity__get_TargetId(Shop_k__BackingField, method);
  return (int)Shop_k__BackingField;
}


int32_t __fastcall ShopBuyItemListViewItem__get_TotalNum(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TotalNum_k__BackingField;
}


System_String_o *__fastcall ShopBuyItemListViewItem__get_UniqueMessage(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_B0D97C(this);
  return Shop_k__BackingField->fields.infoMessage;
}


void __fastcall ShopBuyItemListViewItem__set_CommonConsumeEntities(
        ShopBuyItemListViewItem_o *this,
        CommonConsumeEntity_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._CommonConsumeEntities_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._CommonConsumeEntities_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ShopBuyItemListViewItem__set_EnterTime(
        ShopBuyItemListViewItem_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._EnterTime_k__BackingField = value;
}


void __fastcall ShopBuyItemListViewItem__set_EventItemEntities(
        ShopBuyItemListViewItem_o *this,
        ItemEntity_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._EventItemEntities_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._EventItemEntities_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ShopBuyItemListViewItem__set_IsAlreadyInPossession(
        ShopBuyItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsAlreadyInPossession_k__BackingField = value;
}


void __fastcall ShopBuyItemListViewItem__set_IsNotHavingShopItemReceived(
        ShopBuyItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNotHavingShopItemReceived_k__BackingField = value;
}


void __fastcall ShopBuyItemListViewItem__set_IsRarePriShopPurchased(
        ShopBuyItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsRarePriShopPurchased_k__BackingField = value;
}


void __fastcall ShopBuyItemListViewItem__set_Shop(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Shop_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._Shop_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ShopBuyItemListViewItem__set_ShopKind(
        ShopBuyItemListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ShopKind_k__BackingField = value;
}


void __fastcall ShopBuyItemListViewItem__set_TotalNum(
        ShopBuyItemListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TotalNum_k__BackingField = value;
}