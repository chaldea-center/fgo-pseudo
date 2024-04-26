void __fastcall ShopBuyItemListViewItem___ctor(
        ShopBuyItemListViewItem_o *this,
        int32_t index,
        int32_t shopKind,
        ShopEntity_o *shopEntity,
        int64_t enterTime,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x2

  ListViewItem___ctor_23967088((ListViewItem_o *)this, index, 0LL);
  this->fields._ShopKind_k__BackingField = shopKind;
  this->fields._EnterTime_k__BackingField = enterTime;
  ShopBuyItemListViewItem__Modify(this, shopEntity, v10);
}


ItemEntity_array *__fastcall ShopBuyItemListViewItem__GetEventItemEntities(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8
  __int64 v5; // x22
  __int64 v6; // x0
  ItemEntity_array *v7; // x20
  unsigned __int64 v8; // x21
  signed __int64 v9; // x24
  BattleServantConfConponent_o *i; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v12; // x2
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x23
  __int64 v21; // x0
  __int64 v22; // x0

  if ( (byte_43579B3 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&ItemEntity___TypeInfo);
    this = (ShopBuyItemListViewItem_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43579B3 = 1;
  }
  if ( !shopEntity )
    goto LABEL_18;
  this = (ShopBuyItemListViewItem_o *)ShopEntity__GetItemID(shopEntity, (const MethodInfo *)shopEntity);
  if ( (int)this < 1 )
    return 0LL;
  itemIds = shopEntity->fields.itemIds;
  if ( !itemIds )
    goto LABEL_18;
  v5 = *(_QWORD *)&itemIds->max_length;
  v6 = sub_B706AC(ItemEntity___TypeInfo, (unsigned int)v5);
  v7 = (ItemEntity_array *)v6;
  if ( (int)v5 >= 1 )
  {
    v8 = 0LL;
    v9 = (int)v5;
    for ( i = (BattleServantConfConponent_o *)(v6 + 32); ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
    {
      this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        break;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)this,
                                                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__GetItemIDs(shopEntity, v8, v12);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      this = (ShopBuyItemListViewItem_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            MasterData_WarQuestSelectionMaster,
                                            (int32_t)this,
                                            (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v7 )
        break;
      v19 = (System_Int32_array **)this;
      if ( this )
      {
        this = (ShopBuyItemListViewItem_o *)sub_B70754(this, v7->obj.klass->_1.element_class);
        if ( !this )
        {
          v22 = sub_B7078C(0LL);
          sub_B70738(v22, 0LL);
        }
      }
      if ( v8 >= v7->max_length )
      {
        v21 = sub_B70798(this);
        sub_B70738(v21, 0LL);
      }
      i->klass = (BattleServantConfConponent_c *)v19;
      sub_B70630(i, v19, v13, v14, v15, v16, v17, v18);
      if ( (__int64)++v8 >= v9 )
        return v7;
    }
LABEL_18:
    sub_B7076C(this, shopEntity);
  }
  return v7;
}


int32_t __fastcall ShopBuyItemListViewItem__GetEventPrice(
        ShopBuyItemListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_B7076C(0LL, num);
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
  sub_B70630(
    (BattleServantConfConponent_o *)message,
    0LL,
    (System_String_array **)itemName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  *itemName = 0LL;
  sub_B70630((BattleServantConfConponent_o *)itemName, 0LL, v11, v12, v13, v14, v15, v16);
  return 1;
}


bool __fastcall ShopBuyItemListViewItem__GetIsRarePriShopPurchased(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *v9; // [xsp+8h] [xbp-28h] BYREF
  UserEventEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_43579B4 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43579B4 = 1;
  }
  entity = 0LL;
  v9 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &v9,
          shopEntity->fields.eventId,
          (const MethodInfo_21C049C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 1;
  Instance = (DataManager_o *)v9;
  if ( !v9 )
LABEL_20:
    sub_B7076C(Instance, v5);
  return !EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)v9, 0LL);
}


ItemEntity_o *__fastcall ShopBuyItemListViewItem__GetItemEntity(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  int32_t purchaseType; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v6; // x1
  int32_t v7; // w1

  if ( (byte_43579B1 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    this = (ShopBuyItemListViewItem_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43579B1 = 1;
  }
  if ( !shopEntity )
    goto LABEL_15;
  purchaseType = shopEntity->fields.purchaseType;
  if ( purchaseType == 3 || purchaseType == 2 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopBuyItemListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( this )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
        v7 = 2;
        return (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 v7,
                                 (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      }
    }
LABEL_15:
    sub_B7076C(this, shopEntity);
  }
  if ( purchaseType == 1 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)this,
                                                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__get_TargetId(shopEntity, v6);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v7 = (int)this;
        return (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 v7,
                                 (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v5; // x1

  if ( (byte_43579B2 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B70694(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    this = (ShopBuyItemListViewItem_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43579B2 = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( shopEntity->fields.purchaseType == 6 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)this,
                                                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__get_TargetId(shopEntity, v5);
      if ( MasterData_WarQuestSelectionMaster )
        return (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  (int32_t)this,
                                  (const MethodInfo_21C0440 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    }
LABEL_9:
    sub_B7076C(this, shopEntity);
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
  bool result; // w0
  int64_t Shop_k__BackingField; // x0
  int32_t TargetId; // w20
  UserPresentBoxMaster_o *v7; // x20
  System_String_o *v8; // x21
  System_String_o *v9; // x0
  int32_t v10; // w20
  System_String_o *v11; // x0
  int32_t v12; // w21
  UserPresentBoxMaster_o *v13; // x20
  UserEquipMaster_o *Master_WarQuestSelectionMaster; // x20
  UserEquipEntity_array *List; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x21
  UserPresentBoxMaster_o *v17; // x20
  struct ShopEntity_o *v18; // x8
  int v19; // w8
  int v20; // w9
  __int64 v21; // x10
  bool IsAlreadyInPossession; // w8
  __int64 v23; // x0
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43579B9 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_UserEquipEntity___);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Func_UserEquipEntity__bool___ctor__);
    sub_B70694(&System_Func_UserEquipEntity__bool__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_ShopBuyItemListViewItem__IsPrepareTextOnMask_b__87_0__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43579B9 = 1;
  }
  v24 = 0;
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
    Shop_k__BackingField = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Shop_k__BackingField )
      goto LABEL_63;
    Shop_k__BackingField = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)Shop_k__BackingField,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    if ( !this->fields._Shop_k__BackingField )
      goto LABEL_63;
    v7 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
    Shop_k__BackingField = ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, method);
    if ( !v7 )
      goto LABEL_63;
    if ( UserPresentBoxMaster__isExist(v7, 11, Shop_k__BackingField, 0LL) )
      return 0;
    Shop_k__BackingField = (int64_t)this->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_63;
  }
  if ( *(_DWORD *)(Shop_k__BackingField + 48) == 14 )
  {
    v24 = ShopEntity__get_TargetId((ShopEntity_o *)Shop_k__BackingField, method);
    Shop_k__BackingField = (int64_t)System_Int32__ToString((int32_t)&v24, 0LL);
    if ( !Shop_k__BackingField )
      goto LABEL_63;
    v8 = (System_String_o *)Shop_k__BackingField;
    v9 = System_String__Substring_44821904(
           (System_String_o *)Shop_k__BackingField,
           0,
           *(_DWORD *)(Shop_k__BackingField + 16) - 2,
           0LL);
    v10 = System_Int32__Parse(v9, 0LL);
    v11 = System_String__Substring(v8, v8->fields.m_stringLength - 2, 0LL);
    v12 = System_Int32__Parse(v11, 0LL);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsReleaseCostume(v10, v12, 0LL) )
      return 0;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsCostumeGet(v10, v12, 0LL) )
      return 0;
    Shop_k__BackingField = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Shop_k__BackingField )
      goto LABEL_63;
    Shop_k__BackingField = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)Shop_k__BackingField,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    if ( !this->fields._Shop_k__BackingField )
      goto LABEL_63;
    v13 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
    Shop_k__BackingField = ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, method);
    if ( !v13 )
      goto LABEL_63;
    if ( UserPresentBoxMaster__isExist(v13, 9, Shop_k__BackingField, 0LL) )
      return 0;
    Shop_k__BackingField = (int64_t)this->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_63;
  }
  if ( *(_DWORD *)(Shop_k__BackingField + 48) == 2 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserEquipMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEquipMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Shop_k__BackingField = NetworkManager__get_UserId(0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_63;
    List = UserEquipMaster__getList(Master_WarQuestSelectionMaster, Shop_k__BackingField, 0LL);
    v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_UserEquipEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v16,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewItem__IsPrepareTextOnMask_b__87_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_UserEquipEntity__bool___ctor__);
    if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
            (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)List,
            (System_Func_T__bool__o *)v16,
            (const MethodInfo_1BDCB34 *)Method_BasicHelper_Any_UserEquipEntity___) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Shop_k__BackingField = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
      if ( !this->fields._Shop_k__BackingField )
        goto LABEL_63;
      v17 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
      Shop_k__BackingField = ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, method);
      if ( !v17 )
        goto LABEL_63;
      if ( !UserPresentBoxMaster__isExist(v17, 5, Shop_k__BackingField, 0LL) )
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
    Shop_k__BackingField = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Shop_k__BackingField )
      goto LABEL_63;
    Shop_k__BackingField = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)Shop_k__BackingField,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v18 = this->fields._Shop_k__BackingField;
    if ( !v18 )
      goto LABEL_63;
    if ( !Shop_k__BackingField )
      goto LABEL_63;
    Shop_k__BackingField = (int64_t)ShopReleaseMaster__GetEntitiyList(
                                      (ShopReleaseMaster_o *)Shop_k__BackingField,
                                      v18->fields.id,
                                      0LL);
    v24 = 0;
    if ( !Shop_k__BackingField )
      goto LABEL_63;
    v19 = *(_DWORD *)(Shop_k__BackingField + 24);
    if ( v19 >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        if ( v20 >= (unsigned int)v19 )
        {
          v23 = sub_B70798(Shop_k__BackingField);
          sub_B70738(v23, 0LL);
        }
        v21 = *(_QWORD *)(Shop_k__BackingField + 8LL * v20 + 32);
        if ( !v21 )
          break;
        if ( *(_DWORD *)(v21 + 20) == 67 )
          return 0;
        v24 = ++v20;
        if ( v20 >= v19 )
          goto LABEL_57;
      }
LABEL_63:
      sub_B7076C(Shop_k__BackingField, method);
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
  System_Int32_array **ItemEntity; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  ShopBuyItemListViewItem_o *v12; // x0
  const MethodInfo *v13; // x2
  bool IsRarePriShopPurchased; // w0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  ShopBuyItemListViewItem_o *v21; // x0
  const MethodInfo *v22; // x1
  MethodInfo *v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct ShopEntity_o *Shop_k__BackingField; // x8
  System_Int32_array **CommonConsumeEntities; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  BattleServantConfConponent_o *p_EventItemEntities_k__BackingField; // x0
  System_Int32_array **EventItemEntities; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int64_t Instance; // x0
  const MethodInfo *v46; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v48; // x2
  bool v49; // w8

  v4 = this;
  if ( (byte_43579B0 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    this = (ShopBuyItemListViewItem_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43579B0 = 1;
  }
  ItemEntity = (System_Int32_array **)ShopBuyItemListViewItem__GetItemEntity(this, shopEntity, method);
  v4->fields.itemEntity = (struct ItemEntity_o *)ItemEntity;
  sub_B70630((BattleServantConfConponent_o *)&v4->fields.itemEntity, ItemEntity, v6, v7, v8, v9, v10, v11);
  IsRarePriShopPurchased = ShopBuyItemListViewItem__GetIsRarePriShopPurchased(v12, shopEntity, v13);
  v4->fields._Shop_k__BackingField = shopEntity;
  v4->fields._IsRarePriShopPurchased_k__BackingField = IsRarePriShopPurchased;
  sub_B70630(
    (BattleServantConfConponent_o *)&v4->fields._Shop_k__BackingField,
    (System_Int32_array **)shopEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  Shop_k__BackingField = v4->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField && Shop_k__BackingField->fields.payType == 14 )
  {
    if ( shopEntity )
    {
      CommonConsumeEntities = (System_Int32_array **)ShopEntity__GetCommonConsumeEntities(shopEntity, v22);
      v4->fields._CommonConsumeEntities_k__BackingField = (struct CommonConsumeEntity_array *)CommonConsumeEntities;
      sub_B70630(
        (BattleServantConfConponent_o *)&v4->fields._CommonConsumeEntities_k__BackingField,
        CommonConsumeEntities,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    v4->fields._EventItemEntities_k__BackingField = 0LL;
    p_EventItemEntities_k__BackingField = (BattleServantConfConponent_o *)&v4->fields._EventItemEntities_k__BackingField;
  }
  else
  {
    EventItemEntities = (System_Int32_array **)ShopBuyItemListViewItem__GetEventItemEntities(v21, shopEntity, v23);
    v4->fields._EventItemEntities_k__BackingField = (struct ItemEntity_array *)EventItemEntities;
    sub_B70630(
      (BattleServantConfConponent_o *)&v4->fields._EventItemEntities_k__BackingField,
      EventItemEntities,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    v4->fields._CommonConsumeEntities_k__BackingField = 0LL;
    p_EventItemEntities_k__BackingField = (BattleServantConfConponent_o *)&v4->fields._CommonConsumeEntities_k__BackingField;
  }
  sub_B70630(p_EventItemEntities_k__BackingField, 0LL, (System_String_array **)v23, v24, v25, v26, v27, v28);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___);
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
    sub_B7076C(Instance, v46);
  }
  v4->fields._TotalNum_k__BackingField = *(_DWORD *)(Instance + 28);
  v4->fields._IsNotHavingShopItemReceived_k__BackingField = ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, v46);
  v49 = (shopEntity->fields.flag & 0x2000) != 0 && ShopEntity__GetIsAlreadyInPossession(shopEntity, 0, v48);
  v4->fields._IsAlreadyInPossession_k__BackingField = v49;
}


bool __fastcall ShopBuyItemListViewItem__SetSortValue(
        ShopBuyItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ShopEntity_o *v5; // x0
  const MethodInfo *v6; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8

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
    sub_B7076C(v5, v6);
  }
  if ( !sort )
    goto LABEL_16;
  if ( ListViewSort__GetFilter(sort, 52, 0LL) )
  {
    v5 = this->fields._Shop_k__BackingField;
    if ( !v5 )
      goto LABEL_16;
    if ( !ShopEntity__IsServantGet(v5, v6) )
      return 0;
  }
  if ( ListViewSort__GetFilter(sort, 53, 0LL) )
  {
    v5 = this->fields._Shop_k__BackingField;
    if ( !v5 )
      goto LABEL_16;
    if ( ShopEntity__IsServantGet(v5, v6) )
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
    sub_B7076C(this, message);
  *message = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)message,
    0LL,
    (System_String_array **)itemName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  *itemName = 0LL;
  sub_B70630((BattleServantConfConponent_o *)itemName, 0LL, v9, v10, v11, v12, v13, v14);
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
  ShopEntity_o *Shop_k__BackingField; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_43579BA & 1) == 0 )
  {
    this = (ShopBuyItemListViewItem_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_43579BA = 1;
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
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  this = (ShopBuyItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v9, 0LL);
  Shop_k__BackingField = v4->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
LABEL_9:
    sub_B7076C(this, equip);
  return (_DWORD)this == ShopEntity__get_TargetId(Shop_k__BackingField, (const MethodInfo *)equip);
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
  struct ItemEntity_o *itemEntity; // x8

  if ( (byte_43579B6 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_11034/*"QP_UNIT"*/);
    byte_43579B6 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity || itemEntity->fields.type != 1 )
    return ShopBuyItemListViewItem__get_NameText(this, method);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_11034/*"QP_UNIT"*/, 0LL);
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

  if ( (byte_43579B7 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_43579B7 = 1;
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
      if ( !byte_434F6FF )
      {
        sub_B70694(&LocalizationManager_TypeInfo);
        byte_434F6FF = 1;
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
  struct ShopEntity_o *Shop_k__BackingField; // x8
  int32_t purchaseType; // w8
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x1
  ShopEntity_o *v7; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  int32_t v9; // w2
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43579B8 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43579B8 = 1;
  }
  entity = 0LL;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    return 0;
  purchaseType = Shop_k__BackingField->fields.purchaseType;
  if ( purchaseType != 8 && purchaseType != 4 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = this->fields._Shop_k__BackingField;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  if ( v7 )
  {
    Instance = (DataManager_o *)ShopEntity__get_TargetId(v7, v6);
    v9 = (int)Instance;
    if ( !v8 )
LABEL_16:
      sub_B7076C(Instance, v6);
  }
  else
  {
    v9 = 0;
    if ( !Instance )
      goto LABEL_16;
  }
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v8,
         &entity,
         v9,
         (const MethodInfo_21C049C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    sub_B7076C(this, method);
  return (BYTE1(Shop_k__BackingField->fields.flag) >> 6) & 1;
}


bool __fastcall ShopBuyItemListViewItem__get_IsIndefinitePeriodShowable(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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

  if ( (byte_43579B5 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_18674/*"error"*/);
    byte_43579B5 = 1;
  }
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return ShopEntity__getName(Shop_k__BackingField, method);
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.name;
  else
    return (System_String_o *)StringLiteral_18674/*"error"*/;
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
    sub_B7076C(this, method);
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
  sub_B70630(
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
  sub_B70630(
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
  sub_B70630(
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