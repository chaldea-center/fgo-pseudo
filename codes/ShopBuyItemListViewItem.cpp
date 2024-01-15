void __fastcall ShopBuyItemListViewItem___ctor(
        ShopBuyItemListViewItem_o *this,
        int32_t index,
        int32_t shopKind,
        ShopEntity_o *shopEntity,
        int64_t enterTime,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x2

  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
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
  __int64 v7; // x2
  struct System_Int32_array *itemIds; // x8
  __int64 v9; // x22
  __int64 v10; // x0
  ItemEntity_array *v11; // x20
  unsigned __int64 v12; // x21
  signed __int64 v13; // x24
  BattleServantConfConponent_o *i; // x22
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v17; // x2
  int32_t v18; // w0
  WarEntity_o *Entity; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x23

  if ( (byte_40FF7DD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4);
    sub_B16FFC(&ItemEntity___TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FF7DD = 1;
  }
  if ( !shopEntity )
    goto LABEL_18;
  if ( ShopEntity__GetItemID(shopEntity, (const MethodInfo *)shopEntity) < 1 )
    return 0LL;
  itemIds = shopEntity->fields.itemIds;
  if ( !itemIds )
    goto LABEL_18;
  v9 = *(_QWORD *)&itemIds->max_length;
  v10 = sub_B17014(ItemEntity___TypeInfo, (unsigned int)v9, v7);
  v11 = (ItemEntity_array *)v10;
  if ( (int)v9 >= 1 )
  {
    v12 = 0LL;
    v13 = (int)v9;
    for ( i = (BattleServantConfConponent_o *)(v10 + 32); ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      v18 = ShopEntity__GetItemIDs(shopEntity, v12, v17);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 v18,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v11 )
        break;
      v27 = (System_Int32_array **)Entity;
      if ( Entity )
      {
        Entity = (WarEntity_o *)sub_B170BC(Entity, v11->obj.klass->_1.element_class);
        if ( !Entity )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v12 >= v11->max_length )
      {
        sub_B17100(Entity, v20, v21);
        sub_B170A0();
      }
      i->klass = (BattleServantConfConponent_c *)v27;
      sub_B16F98(i, v27, v21, v22, v23, v24, v25, v26);
      if ( (__int64)++v12 >= v13 )
        return v11;
    }
LABEL_18:
    sub_B170D4();
  }
  return v11;
}


int32_t __fastcall ShopBuyItemListViewItem__GetEventPrice(
        ShopBuyItemListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_B170D4();
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
  sub_B16F98(
    (BattleServantConfConponent_o *)message,
    0LL,
    (System_String_array **)itemName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  *itemName = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)itemName, 0LL, v11, v12, v13, v14, v15, v16);
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
  WebViewManager_o *Instance; // x0
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  WebViewManager_o *v11; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x0
  WarEntity_o *v15; // [xsp+8h] [xbp-28h] BYREF
  UserEventEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40FF7DE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, shopEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FF7DE = 1;
  }
  entity = 0LL;
  v15 = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !shopEntity || !MasterData_WarQuestSelectionMaster )
    goto LABEL_20;
  if ( !UserEventMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          UserId,
          shopEntity->fields.eventId,
          0LL) )
    return 0;
  if ( !entity )
    goto LABEL_20;
  if ( !UserEventEntity__getEventFlag(entity, 1, 0LL) )
    return 0;
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v11 )
    goto LABEL_20;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v11,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !v12 )
    goto LABEL_20;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v12,
          &v15,
          shopEntity->fields.eventId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 1;
  if ( !v15 )
LABEL_20:
    sub_B170D4();
  return !EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)v15, 0LL);
}


ItemEntity_o *__fastcall ShopBuyItemListViewItem__GetItemEntity(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t purchaseType; // w8
  WebViewManager_o *v7; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  const MethodInfo *v9; // x1
  int32_t TargetId; // w0
  int32_t v11; // w1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FF7DB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FF7DB = 1;
  }
  if ( !shopEntity )
    goto LABEL_15;
  purchaseType = shopEntity->fields.purchaseType;
  if ( purchaseType == 3 || purchaseType == 2 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
        v11 = 2;
        return (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 v8,
                                 v11,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      }
    }
LABEL_15:
    sub_B170D4();
  }
  if ( purchaseType == 1 )
  {
    v7 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v7 )
    {
      v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)v7,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      TargetId = ShopEntity__get_TargetId(shopEntity, v9);
      if ( v8 )
      {
        v11 = TargetId;
        return (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 v8,
                                 v11,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v8; // x1
  int32_t TargetId; // w0

  if ( (byte_40FF7DC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, shopEntity);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FF7DC = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( shopEntity->fields.purchaseType == 6 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
      TargetId = ShopEntity__get_TargetId(shopEntity, v8);
      if ( MasterData_WarQuestSelectionMaster )
        return (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  TargetId,
                                  (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    }
LABEL_9:
    sub_B170D4();
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
  bool result; // w0
  struct ShopEntity_o *Shop_k__BackingField; // x0
  int32_t TargetId; // w20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v12; // x1
  UserPresentBoxMaster_o *v13; // x20
  int32_t v14; // w0
  System_String_o *v15; // x0
  System_String_o *v16; // x21
  System_String_o *v17; // x0
  int32_t v18; // w20
  System_String_o *v19; // x0
  int32_t v20; // w21
  WebViewManager_o *v21; // x0
  WarQuestSelectionMaster_o *v22; // x0
  const MethodInfo *v23; // x1
  UserPresentBoxMaster_o *v24; // x20
  int32_t v25; // w0
  WebViewManager_o *v26; // x0
  ShopReleaseMaster_o *v27; // x0
  struct ShopEntity_o *v28; // x8
  ShopReleaseEntity_array *EntitiyList; // x0
  __int64 v30; // x1
  int max_length; // w8
  int v32; // w9
  ShopReleaseEntity_o *v33; // x10
  bool IsAlreadyInPossession; // w8
  int32_t v35; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FF7E3 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FF7E3 = 1;
  }
  v35 = 0;
  result = 0;
  if ( this->fields._ShopKind_k__BackingField != 6 )
    return result;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_47;
  if ( Shop_k__BackingField->fields.purchaseType == 19 )
  {
    TargetId = ShopEntity__get_TargetId(Shop_k__BackingField, method);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsCommandCodeGet(TargetId, 0LL) )
      return 0;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    if ( !this->fields._Shop_k__BackingField )
      goto LABEL_47;
    v13 = (UserPresentBoxMaster_o *)MasterData_WarQuestSelectionMaster;
    v14 = ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, v12);
    if ( !v13 )
      goto LABEL_47;
    if ( UserPresentBoxMaster__isExist(v13, 11, v14, 0LL) )
      return 0;
    Shop_k__BackingField = this->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_47;
  }
  if ( Shop_k__BackingField->fields.purchaseType == 14 )
  {
    v35 = ShopEntity__get_TargetId(Shop_k__BackingField, method);
    v15 = System_Int32__ToString((int32_t)&v35, 0LL);
    if ( !v15 )
      goto LABEL_47;
    v16 = v15;
    v17 = System_String__Substring_43807468(v15, 0, v15->fields.m_stringLength - 2, 0LL);
    v18 = System_Int32__Parse(v17, 0LL);
    v19 = System_String__Substring(v16, v16->fields.m_stringLength - 2, 0LL);
    v20 = System_Int32__Parse(v19, 0LL);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsReleaseCostume(v18, v20, 0LL) )
    {
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsCostumeGet(v18, v20, 0LL) )
      {
        v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v21 )
          goto LABEL_47;
        v22 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v21,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( !this->fields._Shop_k__BackingField )
          goto LABEL_47;
        v24 = (UserPresentBoxMaster_o *)v22;
        v25 = ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, v23);
        if ( !v24 )
          goto LABEL_47;
        if ( !UserPresentBoxMaster__isExist(v24, 9, v25, 0LL) )
        {
          Shop_k__BackingField = this->fields._Shop_k__BackingField;
          if ( !Shop_k__BackingField )
            goto LABEL_47;
          goto LABEL_30;
        }
      }
    }
    return 0;
  }
LABEL_30:
  if ( Shop_k__BackingField->fields.purchaseType == 16 )
  {
    v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v26 )
      goto LABEL_47;
    v27 = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v26,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v28 = this->fields._Shop_k__BackingField;
    if ( !v28 )
      goto LABEL_47;
    if ( !v27 )
      goto LABEL_47;
    EntitiyList = ShopReleaseMaster__GetEntitiyList(v27, v28->fields.id, 0LL);
    v35 = 0;
    if ( !EntitiyList )
      goto LABEL_47;
    max_length = EntitiyList->max_length;
    if ( max_length >= 1 )
    {
      v32 = 0;
      while ( 1 )
      {
        if ( v32 >= (unsigned int)max_length )
        {
          sub_B17100(EntitiyList, v30, v2);
          sub_B170A0();
        }
        v33 = EntitiyList->m_Items[v32];
        if ( !v33 )
          break;
        if ( v33->fields.condType == 67 )
          return 0;
        v35 = ++v32;
        if ( v32 >= max_length )
          goto LABEL_41;
      }
LABEL_47:
      sub_B170D4();
    }
LABEL_41:
    Shop_k__BackingField = this->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_47;
  }
  if ( (Shop_k__BackingField->fields.flag & 0x2000) == 0 )
    return 1;
  IsAlreadyInPossession = ShopEntity__GetIsAlreadyInPossession(Shop_k__BackingField, 0, v2);
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
  WebViewManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserShopEntity_o *EntityDefinitely; // x0
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x2
  bool v53; // w8

  v4 = this;
  if ( (byte_40FF7DA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, shopEntity);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    this = (ShopBuyItemListViewItem_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FF7DA = 1;
  }
  ItemEntity = (System_Int32_array **)ShopBuyItemListViewItem__GetItemEntity(this, shopEntity, method);
  v4->fields.itemEntity = (struct ItemEntity_o *)ItemEntity;
  sub_B16F98((BattleServantConfConponent_o *)&v4->fields.itemEntity, ItemEntity, v8, v9, v10, v11, v12, v13);
  IsRarePriShopPurchased = ShopBuyItemListViewItem__GetIsRarePriShopPurchased(v14, shopEntity, v15);
  v4->fields._Shop_k__BackingField = shopEntity;
  v4->fields._IsRarePriShopPurchased_k__BackingField = IsRarePriShopPurchased;
  sub_B16F98(
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
      sub_B16F98(
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
    sub_B16F98(
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
  sub_B16F98(p_EventItemEntities_k__BackingField, 0LL, (System_String_array **)v25, v26, v27, v28, v29, v30);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !shopEntity
    || !MasterData_WarQuestSelectionMaster
    || (EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                             MasterData_WarQuestSelectionMaster,
                             UserId,
                             shopEntity->fields.baseShopId,
                             0LL)) == 0LL )
  {
LABEL_20:
    sub_B170D4();
  }
  v4->fields._TotalNum_k__BackingField = EntityDefinitely->fields.num;
  v4->fields._IsNotHavingShopItemReceived_k__BackingField = ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, v51);
  v53 = (shopEntity->fields.flag & 0x2000) != 0 && ShopEntity__GetIsAlreadyInPossession(shopEntity, 0, v52);
  v4->fields._IsAlreadyInPossession_k__BackingField = v53;
}


bool __fastcall ShopBuyItemListViewItem__SetSortValue(
        ShopBuyItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8
  const MethodInfo *v6; // x1
  ShopEntity_o *v7; // x0
  const MethodInfo *v8; // x1
  ShopEntity_o *v9; // x0

  if ( !ListViewItem__SetSortValue((ListViewItem_o *)this, sort, 0LL) )
    return 0;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_16;
  if ( Shop_k__BackingField->fields.purchaseType == 16 )
  {
    if ( sort )
      return !ListViewSort__GetFilter(sort, 52, 0LL);
LABEL_16:
    sub_B170D4();
  }
  if ( !sort )
    goto LABEL_16;
  if ( ListViewSort__GetFilter(sort, 52, 0LL) )
  {
    v7 = this->fields._Shop_k__BackingField;
    if ( !v7 )
      goto LABEL_16;
    if ( !ShopEntity__IsServantGet(v7, v6) )
      return 0;
  }
  if ( ListViewSort__GetFilter(sort, 53, 0LL) )
  {
    v9 = this->fields._Shop_k__BackingField;
    if ( !v9 )
      goto LABEL_16;
    if ( ShopEntity__IsServantGet(v9, v8) )
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
    sub_B170D4();
  *message = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)message,
    0LL,
    (System_String_array **)itemName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  *itemName = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)itemName, 0LL, v9, v10, v11, v12, v13, v14);
  return 0;
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

  if ( (byte_40FF7E0 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_10847/*"QP_UNIT"*/, v3);
    byte_40FF7E0 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity || itemEntity->fields.type != 1 )
    return ShopBuyItemListViewItem__get_NameText(this, method);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10847/*"QP_UNIT"*/, 0LL);
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

  if ( (byte_40FF7E1 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40FF7E1 = 1;
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
      if ( !byte_40F87E5 )
      {
        sub_B16FFC(&LocalizationManager_TypeInfo, method);
        byte_40F87E5 = 1;
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v9; // x1
  ShopEntity_o *v10; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  int32_t TargetId; // w2
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FF7E2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FF7E2 = 1;
  }
  entity = 0LL;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    return 0;
  purchaseType = Shop_k__BackingField->fields.purchaseType;
  if ( purchaseType != 8 && purchaseType != 4 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = this->fields._Shop_k__BackingField;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( v10 )
  {
    TargetId = ShopEntity__get_TargetId(v10, v9);
    if ( !v11 )
LABEL_16:
      sub_B170D4();
  }
  else
  {
    TargetId = 0;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_16;
  }
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v11,
         &entity,
         TargetId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
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
    sub_B170D4();
  return (BYTE1(Shop_k__BackingField->fields.flag) >> 6) & 1;
}


bool __fastcall ShopBuyItemListViewItem__get_IsIndefinitePeriodShowable(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_B170D4();
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
    sub_B170D4();
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

  if ( (byte_40FF7DF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18326/*"error"*/, method);
    byte_40FF7DF = 1;
  }
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return ShopEntity__getName(Shop_k__BackingField, method);
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.name;
  else
    return (System_String_o *)StringLiteral_18326/*"error"*/;
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
    sub_B170D4();
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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