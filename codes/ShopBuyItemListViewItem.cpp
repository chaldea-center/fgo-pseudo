void ShopBuyItemListViewItem___ctor(
        ShopBuyItemListViewItem_o *this,
        int32_t index,
        int32_t shopKind,
        ShopEntity_o *shopEntity,
        int64_t enterTime,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x2

  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields._ShopKind_k__BackingField = shopKind;
  this->fields._EnterTime_k__BackingField = enterTime;
  ShopBuyItemListViewItem__Modify(this, shopEntity, v10);
}


ItemEntity_array *ShopBuyItemListViewItem__GetEventItemEntities(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  int32_t ItemCount; // w23
  __int64 v5; // x0
  unsigned int *v6; // x20
  unsigned __int64 v7; // x21
  MissionNaviTransitionBoardItem_o *v8; // x22
  __int64 v9; // x27
  Il2CppObject *MasterData_object; // x23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  ShopBuyItemListViewItem_o *v17; // x23
  __int64 v18; // x1
  __int64 v20; // x0

  if ( (byte_596C7B4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&ItemEntity___TypeInfo);
    this = (ShopBuyItemListViewItem_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C7B4 = 1;
  }
  if ( !shopEntity )
    goto LABEL_17;
  if ( ShopEntity__GetItemID(shopEntity, 0) < 1 )
    return 0;
  ItemCount = ShopEntity__GetItemCount(shopEntity, 0);
  v5 = sub_2213B20(ItemEntity___TypeInfo, (unsigned int)ItemCount);
  v6 = (unsigned int *)v5;
  if ( ItemCount >= 1 )
  {
    v7 = 0;
    v8 = (MissionNaviTransitionBoardItem_o *)(v5 + 32);
    v9 = (unsigned int)ItemCount;
    while ( 1 )
    {
      this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__GetItemIDs(shopEntity, v7, 0);
      if ( !MasterData_object )
        break;
      this = (ShopBuyItemListViewItem_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                            (int32_t)this,
                                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v6 )
        break;
      v17 = this;
      if ( this )
      {
        this = (ShopBuyItemListViewItem_o *)sub_2213BB4(this, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
        if ( !this )
        {
          v20 = sub_2213D00(0, v18);
          sub_2213BA0(v20, 0);
        }
      }
      if ( v7 >= v6[6] )
        sub_2213CE4(this);
      v8->klass = (MissionNaviTransitionBoardItem_c *)v17;
      sub_2213A04(v8, (int32_t)v17, v11, v12, v13, v14, v15, v16);
      ++v7;
      v8 = (MissionNaviTransitionBoardItem_o *)((char *)v8 + 8);
      if ( v9 == v7 )
        return (ItemEntity_array *)v6;
    }
LABEL_17:
    sub_2213CDC(this, shopEntity);
  }
  return (ItemEntity_array *)v6;
}


// local variable allocation has failed, the output may be wrong!
int32_t ShopBuyItemListViewItem__GetEventPrice(ShopBuyItemListViewItem_o *this, int32_t num, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_2213CDC(0, *(_QWORD *)&num);
  return ShopEntity__GetPrices(Shop_k__BackingField, num, 0);
}


bool ShopBuyItemListViewItem__GetIsPreparation(
        ShopBuyItemListViewItem_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ShopEntity_o *Shop_k__BackingField; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  ShopEntity_o *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct ItemEntity_o *itemEntity; // x8
  System_String_o *name; // x1
  System_String_o **v28; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
  {
    *message = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)message,
      0,
      (System_String_o *)itemName,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    *itemName = 0;
    v28 = itemName;
    LODWORD(name) = 0;
    goto LABEL_6;
  }
  if ( ShopEntity__IsItemMaxButShopAvailable(Shop_k__BackingField, 0) )
  {
    *message = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)message, 0, v13, v14, v15, v16, v17, v18);
    itemEntity = this->fields.itemEntity;
    if ( itemEntity )
    {
      name = itemEntity->fields.name;
      v28 = itemName;
      *itemName = name;
LABEL_6:
      sub_2213A04((MissionNaviTransitionBoardItem_o *)v28, (int32_t)name, v20, v21, v22, v23, v24, v25);
      return 1;
    }
LABEL_9:
    sub_2213CDC(v19, v12);
  }
  v19 = this->fields._Shop_k__BackingField;
  if ( !v19 )
    goto LABEL_9;
  return ShopEntity__IsPreparation(v19, message, itemName, 0);
}


bool ShopBuyItemListViewItem__GetIsRarePriShopPurchased(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *MasterData_object; // x20
  EventDetailEntity_o *v10; // [xsp+0h] [xbp-40h] BYREF
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596C7B5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C7B5 = 1;
  }
  v10 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !shopEntity || !MasterData_object )
    goto LABEL_23;
  if ( !UserEventMaster__TryGetEntity(
          (UserEventMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          shopEntity->fields.eventId,
          0) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_23;
  if ( !UserEventEntity__getEventFlag(entity, 1, 0) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (Il2CppObject **)&v10,
          shopEntity->fields.eventId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 1;
  Instance = (DataManager_o *)v10;
  if ( !v10 )
LABEL_23:
    sub_2213CDC(Instance, v5);
  return !EventDetailEntity__IsTimeStatusRecord(v10, 0);
}


ItemEntity_o *ShopBuyItemListViewItem__GetItemEntity(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  int32_t purchaseType; // w8
  Il2CppObject *MasterData_object; // x20
  int32_t v6; // w1

  if ( (byte_596C7B3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    this = (ShopBuyItemListViewItem_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C7B3 = 1;
  }
  if ( !shopEntity )
    goto LABEL_15;
  purchaseType = shopEntity->fields.purchaseType;
  if ( purchaseType == 3 || purchaseType == 2 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopBuyItemListViewItem_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( this )
      {
        v6 = 2;
        return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 v6,
                                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      }
    }
LABEL_15:
    sub_2213CDC(this, shopEntity);
  }
  if ( purchaseType == 1 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__get_TargetId(shopEntity, 0);
      if ( MasterData_object )
      {
        v6 = (int)this;
        this = (ShopBuyItemListViewItem_o *)MasterData_object;
        return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 v6,
                                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      }
    }
    goto LABEL_15;
  }
  return 0;
}


bool ShopBuyItemListViewItem__GetNowPurchaseShopSendType(
        ShopBuyItemListViewItem_o *this,
        bool *isTake,
        bool *isSend,
        bool *isQuest,
        const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x22
  int32_t v9; // w11
  int v10; // w8
  int32_t v11; // w9
  int32_t buyQuestNum; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t buyServantNum[2]; // [xsp+18h] [xbp-28h] BYREF

  *isTake = 0;
  *isSend = 0;
  *isQuest = 0;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  *(_QWORD *)buyCmdCodeNum = 0;
  buyQuestNum = 0;
  if ( !Shop_k__BackingField )
    return 0;
  *(_QWORD *)buyServantNum = 0;
  *(_QWORD *)buyCmdCodeNum = 0;
  buyQuestNum = 0;
  ShopEntity__GetLastPurchaseSum(
    Shop_k__BackingField,
    &buyServantNum[1],
    buyServantNum,
    &buyCmdCodeNum[1],
    buyCmdCodeNum,
    &buyQuestNum,
    0);
  v9 = buyCmdCodeNum[0];
  v10 = buyCmdCodeNum[1] + buyServantNum[0];
  v11 = buyQuestNum;
  *isTake = buyServantNum[1] > 0;
  *isSend = v10 + v9 > 0;
  *isQuest = v11 > 0;
  return 1;
}


bool ShopBuyItemListViewItem__GetSendType(
        ShopBuyItemListViewItem_o *this,
        bool *isTake,
        bool *isSend,
        bool *isQuest,
        const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x22
  int v9; // w11
  int v10; // w8
  int32_t v11; // w9
  int32_t buyQuestNum[2]; // [xsp+0h] [xbp-40h] BYREF
  __int64 buyCmdCodeNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t buyServantNum[2]; // [xsp+18h] [xbp-28h] BYREF

  *isTake = 0;
  *isSend = 0;
  *isQuest = 0;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  *(_QWORD *)buyQuestNum = 0;
  buyCmdCodeNum = 0;
  if ( !Shop_k__BackingField )
    return 0;
  *(_QWORD *)buyServantNum = 0;
  *(_QWORD *)buyQuestNum = 0;
  buyCmdCodeNum = 0;
  ShopEntity__GetSum(
    Shop_k__BackingField,
    &buyServantNum[1],
    buyServantNum,
    (int32_t *)&buyCmdCodeNum + 1,
    (int32_t *)&buyCmdCodeNum,
    &buyQuestNum[1],
    buyQuestNum,
    0);
  v9 = buyCmdCodeNum;
  v10 = HIDWORD(buyCmdCodeNum) + buyServantNum[0];
  v11 = buyQuestNum[1];
  *isTake = buyServantNum[1] > 0;
  *isSend = v10 + v9 > 0;
  *isQuest = v11 > 0;
  return 1;
}


bool ShopBuyItemListViewItem__IsDisabledDisp(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ShopEntity_o *Shop_k__BackingField; // x0
  __int64 v6; // x1
  ShopEntity_o *v8; // x0
  System_Int32_array *possessionAnotherItemId; // [xsp+8h] [xbp-28h] BYREF
  System_String_o *itemName; // [xsp+10h] [xbp-20h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-18h] BYREF

  itemName = 0;
  message = 0;
  possessionAnotherItemId = 0;
  if ( ShopBuyItemListViewItem__GetIsPreparation(this, &message, &itemName, v2) )
  {
    return 1;
  }
  else
  {
    Shop_k__BackingField = this->fields._Shop_k__BackingField;
    if ( Shop_k__BackingField
      && ShopEntity__IsSoldOut(Shop_k__BackingField, 0)
      && !this->fields._IsNotHavingShopItemReceived_k__BackingField )
    {
      v8 = this->fields._Shop_k__BackingField;
      if ( !v8 )
        sub_2213CDC(0, v6);
      return !ShopEntity__IsAnotherItemBuyable(v8, &possessionAnotherItemId, 0);
    }
    else
    {
      return 0;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool ShopBuyItemListViewItem__IsInfoButtonDisableInPreparation(
        ShopBuyItemListViewItem_o *this,
        bool isPreparation,
        const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  if ( !isPreparation )
    return 0;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
LABEL_8:
    sub_2213CDC(Shop_k__BackingField, isPreparation);
  if ( !ShopEntity__IsSoldOut(Shop_k__BackingField, 0) )
  {
    Shop_k__BackingField = this->fields._Shop_k__BackingField;
    if ( Shop_k__BackingField )
      return !ShopEntity__IsItemMaxButShopAvailable(Shop_k__BackingField, 0);
    goto LABEL_8;
  }
  return 0;
}


bool ShopBuyItemListViewItem__IsPrepareTextOnMask(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t ShopKind_k__BackingField; // w8
  ShopEntity_o *Shop_k__BackingField; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t TargetId; // w20
  UserPresentBoxMaster_o *v9; // x20
  System_String_o *v10; // x21
  System_String_o *v11; // x0
  int32_t v12; // w20
  System_String_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t v16; // w21
  __int64 v17; // x1
  __int64 v18; // x2
  UserPresentBoxMaster_o *v19; // x20
  __int64 v20; // x2
  Il2CppObject *Master_object; // x20
  System_Object_array *List; // x20
  System_Func_object__bool__o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  UserPresentBoxMaster_o *v26; // x20
  struct ShopEntity_o *v27; // x8
  ShopReleaseEntity_array *EntitiyList; // x0
  int max_length; // w9
  int32_t v30; // w10
  ShopReleaseEntity_o *v31; // x11
  bool IsAlreadyInPossessionNotHaving; // w8
  struct ShopEntity_o *v33; // x8
  int32_t v35; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596C7BA & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_UserEquipEntity___);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_Func_UserEquipEntity__bool__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_ShopBuyItemListViewItem__IsPrepareTextOnMask_b__88_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C7BA = 1;
  }
  ShopKind_k__BackingField = this->fields._ShopKind_k__BackingField;
  LOBYTE(Shop_k__BackingField) = 0;
  v35 = 0;
  if ( ShopKind_k__BackingField != 6 )
    return (char)Shop_k__BackingField;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
LABEL_62:
    sub_2213CDC(Shop_k__BackingField, method);
  if ( Shop_k__BackingField->fields.purchaseType == 19 )
  {
    TargetId = ShopEntity__get_TargetId(Shop_k__BackingField, 0);
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6, v7);
    if ( CondType__IsCommandCodeGet(TargetId, 0) )
      goto LABEL_43;
    Shop_k__BackingField = (ShopEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Shop_k__BackingField )
      goto LABEL_62;
    Shop_k__BackingField = (ShopEntity_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Shop_k__BackingField,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    if ( !this->fields._Shop_k__BackingField )
      goto LABEL_62;
    v9 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
    Shop_k__BackingField = (ShopEntity_o *)ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, 0);
    if ( !v9 )
      goto LABEL_62;
    if ( UserPresentBoxMaster__isExist(v9, 11, (int32_t)Shop_k__BackingField, 0) )
      goto LABEL_43;
    Shop_k__BackingField = this->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_62;
  }
  if ( Shop_k__BackingField->fields.purchaseType == 14 )
  {
    v35 = ShopEntity__get_TargetId(Shop_k__BackingField, 0);
    Shop_k__BackingField = (ShopEntity_o *)System_Int32__ToString((int32_t)&v35, 0);
    if ( !Shop_k__BackingField )
      goto LABEL_62;
    v10 = (System_String_o *)Shop_k__BackingField;
    v11 = System_String__Substring_75702848(
            (System_String_o *)Shop_k__BackingField,
            0,
            Shop_k__BackingField->fields.id - 2,
            0);
    v12 = System_Int32__Parse(v11, 0);
    v13 = System_String__Substring(v10, v10->fields._stringLength - 2, 0);
    v16 = System_Int32__Parse(v13, 0);
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v14, v15);
    if ( CondType__IsReleaseCostume(v12, v16, 0) )
      goto LABEL_43;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v17, v18);
    if ( CondType__IsCostumeGet(v12, v16, 0) )
      goto LABEL_43;
    Shop_k__BackingField = (ShopEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Shop_k__BackingField )
      goto LABEL_62;
    Shop_k__BackingField = (ShopEntity_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Shop_k__BackingField,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    if ( !this->fields._Shop_k__BackingField )
      goto LABEL_62;
    v19 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
    Shop_k__BackingField = (ShopEntity_o *)ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, 0);
    if ( !v19 )
      goto LABEL_62;
    if ( UserPresentBoxMaster__isExist(v19, 9, (int32_t)Shop_k__BackingField, 0) )
      goto LABEL_43;
    Shop_k__BackingField = this->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_62;
  }
  if ( Shop_k__BackingField->fields.purchaseType != 2 )
    goto LABEL_46;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEquipMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v20);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Shop_k__BackingField = (ShopEntity_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v20);
    Shop_k__BackingField = (ShopEntity_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_62;
  List = (System_Object_array *)UserEquipMaster__getList(
                                  (UserEquipMaster_o *)Master_object,
                                  (int64_t)Shop_k__BackingField[1].klass->_1.element_class,
                                  0);
  v23 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserEquipEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)this,
    Method_ShopBuyItemListViewItem__IsPrepareTextOnMask_b__88_0__,
    0);
  if ( BasicHelper__Any_object__58785420(
         List,
         (System_Func_T__bool__o *)v23,
         (const MethodInfo_380FE8C *)Method_BasicHelper_Any_UserEquipEntity___) )
  {
LABEL_43:
    LOBYTE(Shop_k__BackingField) = 0;
    return (char)Shop_k__BackingField;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24, v25);
  Shop_k__BackingField = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !this->fields._Shop_k__BackingField )
    goto LABEL_62;
  v26 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
  Shop_k__BackingField = (ShopEntity_o *)ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, 0);
  if ( !v26 )
    goto LABEL_62;
  if ( UserPresentBoxMaster__isExist(v26, 5, (int32_t)Shop_k__BackingField, 0) )
    goto LABEL_43;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_62;
LABEL_46:
  if ( Shop_k__BackingField->fields.purchaseType != 16 )
  {
LABEL_58:
    IsAlreadyInPossessionNotHaving = ShopEntity__GetIsAlreadyInPossessionNotHaving(Shop_k__BackingField, 0, 0);
    Shop_k__BackingField = 0;
    if ( IsAlreadyInPossessionNotHaving )
      return (char)Shop_k__BackingField;
    v33 = this->fields._Shop_k__BackingField;
    if ( v33 )
    {
      LOBYTE(Shop_k__BackingField) = v33->fields.purchaseType != 24;
      return (char)Shop_k__BackingField;
    }
    goto LABEL_62;
  }
  Shop_k__BackingField = (ShopEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Shop_k__BackingField )
    goto LABEL_62;
  Shop_k__BackingField = (ShopEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Shop_k__BackingField,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
  v27 = this->fields._Shop_k__BackingField;
  if ( !v27 || !Shop_k__BackingField )
    goto LABEL_62;
  EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Shop_k__BackingField, v27->fields.id, 0);
  if ( !EntitiyList )
  {
    v35 = 0;
    sub_2213CDC(0, method);
  }
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
  {
LABEL_57:
    Shop_k__BackingField = this->fields._Shop_k__BackingField;
    v35 = max_length & ~(max_length >> 31);
    if ( !Shop_k__BackingField )
      goto LABEL_62;
    goto LABEL_58;
  }
  v30 = 0;
  while ( 1 )
  {
    if ( max_length == v30 )
    {
      v35 = EntitiyList->max_length;
      sub_2213CE4(EntitiyList);
    }
    v31 = EntitiyList->m_Items[v30];
    if ( !v31 )
    {
      v35 = v30;
      sub_2213CDC(EntitiyList, method);
    }
    if ( v31->fields.condType == 67 )
      break;
    if ( (max_length & ~(max_length >> 31)) == ++v30 )
      goto LABEL_57;
  }
  v35 = v30;
  LOBYTE(Shop_k__BackingField) = 0;
  return (char)Shop_k__BackingField;
}


void ShopBuyItemListViewItem__Modify(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  ShopBuyItemListViewItem_o *v4; // x19
  ItemEntity_o *ItemEntity; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  ShopBuyItemListViewItem_o *v12; // x0
  const MethodInfo *v13; // x2
  bool IsRarePriShopPurchased; // w0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  ShopBuyItemListViewItem_o *v21; // x0
  MethodInfo *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct ShopEntity_o *Shop_k__BackingField; // x8
  CommonConsumeEntity_array *CommonConsumeEntities; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  MissionNaviTransitionBoardItem_o *p_EventItemEntities_k__BackingField; // x0
  ItemEntity_array *EventItemEntities; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  char *Instance; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x2
  Il2CppObject *Master_object; // x21
  int32_t *v49; // x8
  __int64 v50; // x2
  Il2CppObject *MasterData_object; // x21

  v4 = this;
  if ( (byte_596C7B2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserShopDailyMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    this = (ShopBuyItemListViewItem_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C7B2 = 1;
  }
  ItemEntity = ShopBuyItemListViewItem__GetItemEntity(this, shopEntity, method);
  v4->fields.itemEntity = ItemEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.itemEntity, (int32_t)ItemEntity, v6, v7, v8, v9, v10, v11);
  IsRarePriShopPurchased = ShopBuyItemListViewItem__GetIsRarePriShopPurchased(v12, shopEntity, v13);
  v4->fields._Shop_k__BackingField = shopEntity;
  v4->fields._IsRarePriShopPurchased_k__BackingField = IsRarePriShopPurchased;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields._Shop_k__BackingField,
    (int32_t)shopEntity,
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
      CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(shopEntity, 0);
      v4->fields._CommonConsumeEntities_k__BackingField = CommonConsumeEntities;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v4->fields._CommonConsumeEntities_k__BackingField,
        (int32_t)CommonConsumeEntities,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    p_EventItemEntities_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v4->fields._EventItemEntities_k__BackingField;
  }
  else
  {
    EventItemEntities = ShopBuyItemListViewItem__GetEventItemEntities(v21, shopEntity, v22);
    v4->fields._EventItemEntities_k__BackingField = EventItemEntities;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v4->fields._EventItemEntities_k__BackingField,
      (int32_t)EventItemEntities,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    p_EventItemEntities_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v4->fields._CommonConsumeEntities_k__BackingField;
  }
  p_EventItemEntities_k__BackingField->klass = 0;
  sub_2213A04(p_EventItemEntities_k__BackingField, 0, (System_String_o *)v22, v23, v24, v25, v26, v27);
  if ( !shopEntity )
    goto LABEL_33;
  if ( shopEntity->fields.shopType != 20 )
  {
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v45, v50);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (char *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v45, v50);
        Instance = (char *)NetworkManager_TypeInfo;
      }
      if ( MasterData_object )
      {
        Instance = (char *)UserShopMaster__GetEntityDefinitely(
                             (UserShopMaster_o *)MasterData_object,
                             *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                             shopEntity->fields.baseShopId,
                             0);
        if ( Instance )
        {
          v49 = (int32_t *)(Instance + 28);
          goto LABEL_32;
        }
      }
    }
LABEL_33:
    sub_2213CDC(Instance, v45);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v45, v46);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserShopDailyMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v45, v47);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (char *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v45, v47);
    Instance = (char *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_33;
  Instance = (char *)UserShopDailyMaster__GetEntityDefinitely(
                       (UserShopDailyMaster_o *)Master_object,
                       *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                       shopEntity->fields.id,
                       0);
  if ( !Instance )
    goto LABEL_33;
  v49 = (int32_t *)(Instance + 32);
LABEL_32:
  v4->fields._TotalNum_k__BackingField = *v49;
  v4->fields._IsNotHavingShopItemReceived_k__BackingField = ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0);
  v4->fields._IsAlreadyInPossession_k__BackingField = ShopEntity__GetIsAlreadyInPossessionNotHaving(shopEntity, 0, 0);
}


bool ShopBuyItemListViewItem__SetSortValue(
        ShopBuyItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x8
  FilterKindList_c *v10; // x0
  __int64 v11; // x2
  struct ItemEntity_o *itemEntity; // x8
  struct ItemEntity_o *v13; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596C7B1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_596C7B1 = 1;
  }
  entity = 0;
  ClassFilterKindList = (System_Collections_Generic_List_T__o *)ListViewItem__SetSortValue(
                                                                  (ListViewItem_o *)this,
                                                                  sort,
                                                                  0);
  if ( ((unsigned __int8)ClassFilterKindList & 1) == 0 )
    return 0;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_33;
  if ( Shop_k__BackingField->fields.purchaseType != 16 )
  {
    if ( Shop_k__BackingField->fields.shopType == 17 )
    {
      v10 = FilterKindList_TypeInfo;
      if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v6, v7);
        v10 = FilterKindList_TypeInfo;
      }
      ClassFilterKindList = (System_Collections_Generic_List_T__o *)v10->static_fields->ClassFilterKindList;
      if ( ClassFilterKindList )
      {
        ClassFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        ClassFilterKindList,
                                                                        (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( sort )
        {
          ClassFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__IsUnSelectedAllTargetFilters(
                                                                          sort,
                                                                          (ListViewSort_FilterKind_array *)ClassFilterKindList,
                                                                          0);
          if ( ((unsigned __int8)ClassFilterKindList & 1) != 0 )
            return 1;
          itemEntity = this->fields.itemEntity;
          if ( itemEntity )
          {
            if ( itemEntity->fields.type != 29 )
              return 1;
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v11);
            ClassFilterKindList = (System_Collections_Generic_List_T__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
            v13 = this->fields.itemEntity;
            if ( v13 )
            {
              if ( ClassFilterKindList )
                return !DataMasterBase_object__object__int___TryGetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)ClassFilterKindList,
                          &entity,
                          v13->fields.value,
                          (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__)
                    || ListViewSort__IsMatchClassFilter(sort, (ServantEntity_o *)entity, 0);
            }
          }
        }
      }
    }
    else
    {
      if ( !sort )
        goto LABEL_33;
      if ( ListViewSort__GetFilter(sort, 52, 0) )
      {
        ClassFilterKindList = (System_Collections_Generic_List_T__o *)this->fields._Shop_k__BackingField;
        if ( !ClassFilterKindList )
          goto LABEL_33;
        if ( !ShopEntity__IsServantGet((ShopEntity_o *)ClassFilterKindList, 0) )
          return 0;
      }
      if ( !ListViewSort__GetFilter(sort, 53, 0) )
        return 1;
      ClassFilterKindList = (System_Collections_Generic_List_T__o *)this->fields._Shop_k__BackingField;
      if ( ClassFilterKindList )
        return !ShopEntity__IsServantGet((ShopEntity_o *)ClassFilterKindList, 0);
    }
LABEL_33:
    sub_2213CDC(ClassFilterKindList, v6);
  }
  if ( !sort )
    goto LABEL_33;
  return !ListViewSort__GetFilter(sort, 52, 0);
}


bool ShopBuyItemListViewItem__TryGetClosedMessage(
        ShopBuyItemListViewItem_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( !this->fields._Shop_k__BackingField )
    sub_2213CDC(this, message);
  *message = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)message,
    0,
    (System_String_o *)itemName,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  *itemName = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)itemName, 0, v9, v10, v11, v12, v13, v14);
  return 0;
}


bool ShopBuyItemListViewItem___IsPrepareTextOnMask_b__88_0(
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
  if ( (byte_596C7BB & 1) == 0 )
  {
    this = (ShopBuyItemListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C7BB = 1;
  }
  if ( !equip )
    goto LABEL_8;
  v6 = *(_QWORD *)&equip->fields.equipId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&equip->fields.equipId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equip, method);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  this = (ShopBuyItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v9, 0);
  Shop_k__BackingField = v4->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
LABEL_8:
    sub_2213CDC(this, equip);
  return (_DWORD)this == ShopEntity__get_TargetId(Shop_k__BackingField, 0);
}


int64_t ShopBuyItemListViewItem__get_ActiveTime(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)this->fields._Shop_k__BackingField;
  if ( result )
    return ShopEntity__GetActiveTime((ShopEntity_o *)result, 0);
  return result;
}


System_String_o *ShopBuyItemListViewItem__get_BulkNameText(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ItemEntity_o *itemEntity; // x8

  if ( (byte_596C7B7 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_11289/*"QP_UNIT"*/);
    byte_596C7B7 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity || itemEntity->fields.type != 1 )
    return ShopBuyItemListViewItem__get_NameText(this, method);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  return LocalizationManager__Get((System_String_o *)StringLiteral_11289/*"QP_UNIT"*/, 0);
}


CommonConsumeEntity_array *ShopBuyItemListViewItem__get_CommonConsumeEntities(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommonConsumeEntities_k__BackingField;
}


System_String_o *ShopBuyItemListViewItem__get_DetailText(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ItemEntity_o *itemEntity; // x0
  LocalizationManager_c *v7; // x0

  if ( (byte_596C7B8 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596C7B8 = 1;
  }
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return Shop_k__BackingField->fields.detail;
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return ItemEntity__GetDetail(itemEntity, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  if ( !byte_596B976 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596B976 = 1;
  }
  v7 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    v7 = LocalizationManager_TypeInfo;
  }
  return v7->static_fields->unknownNameText;
}


int64_t ShopBuyItemListViewItem__get_EnterTime(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._EnterTime_k__BackingField;
}


ItemEntity_array *ShopBuyItemListViewItem__get_EventItemEntities(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._EventItemEntities_k__BackingField;
}


bool ShopBuyItemListViewItem__get_IsAlreadyInPossession(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsAlreadyInPossession_k__BackingField;
}


bool ShopBuyItemListViewItem__get_IsChocolateSvtEquip(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8
  int32_t purchaseType; // w8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  ShopEntity_o *v7; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  int32_t v9; // w2
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_596C7B9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C7B9 = 1;
  }
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  entity = 0;
  if ( !Shop_k__BackingField )
    return 0;
  purchaseType = Shop_k__BackingField->fields.purchaseType;
  if ( purchaseType != 8 && purchaseType != 4 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = this->fields._Shop_k__BackingField;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( v7 )
  {
    Instance = (Il2CppObject *)ShopEntity__get_TargetId(v7, 0);
    v9 = (int)Instance;
    if ( !v8 )
LABEL_16:
      sub_2213CDC(Instance, v6);
  }
  else
  {
    v9 = 0;
    if ( !Instance )
      goto LABEL_16;
  }
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v8,
         &entity,
         v9,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( !entity )
      goto LABEL_16;
    return ServantEntity__get_IsChocolateSvtEquip((ServantEntity_o *)entity, 0);
  }
  else
  {
    return 0;
  }
}


bool ShopBuyItemListViewItem__get_IsExchangeQP(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8

  itemEntity = this->fields.itemEntity;
  return itemEntity && itemEntity->fields.type == 1;
}


bool ShopBuyItemListViewItem__get_IsHaveIconShowable(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_2213CDC(0, method);
  return ShopEntity__checkFlag(Shop_k__BackingField, 0x4000, 0);
}


bool ShopBuyItemListViewItem__get_IsIndefinitePeriodShowable(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_2213CDC(0, method);
  return ShopEntity__checkFlag(Shop_k__BackingField, 0x40000, 0);
}


bool ShopBuyItemListViewItem__get_IsItemTypeCommonConsume(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  return Shop_k__BackingField && Shop_k__BackingField->fields.payType == 14;
}


bool ShopBuyItemListViewItem__get_IsItemTypeFree(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  return Shop_k__BackingField && Shop_k__BackingField->fields.payType == 13;
}


bool ShopBuyItemListViewItem__get_IsItemTypeRarePri(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  return Shop_k__BackingField && Shop_k__BackingField->fields.payType == 10;
}


bool ShopBuyItemListViewItem__get_IsNotHavingShopItemReceived(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsNotHavingShopItemReceived_k__BackingField;
}


bool ShopBuyItemListViewItem__get_IsRarePriShopPurchased(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsRarePriShopPurchased_k__BackingField;
}


bool ShopBuyItemListViewItem__get_IsSoldOut(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    LOBYTE(Shop_k__BackingField) = ShopEntity__IsSoldOut(Shop_k__BackingField, 0);
  return (char)Shop_k__BackingField;
}


int32_t ShopBuyItemListViewItem__get_ItemCount(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_2213CDC(0, method);
  return ShopEntity__GetItemCount(Shop_k__BackingField, 0);
}


int32_t ShopBuyItemListViewItem__get_ItemId(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8

  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.id;
  else
    return 0;
}


int32_t ShopBuyItemListViewItem__get_LimitNum(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    LODWORD(Shop_k__BackingField) = ShopEntity__GetPurchaseLimitNum(Shop_k__BackingField, 0);
  return (int)Shop_k__BackingField;
}


System_String_o *ShopBuyItemListViewItem__get_NameText(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0
  struct ItemEntity_o *itemEntity; // x8

  if ( (byte_596C7B6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19957/*"error"*/);
    byte_596C7B6 = 1;
  }
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return ShopEntity__getName(Shop_k__BackingField, 0);
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.name;
  else
    return (System_String_o *)StringLiteral_19957/*"error"*/;
}


int32_t ShopBuyItemListViewItem__get_Price(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0
  struct ItemEntity_o *itemEntity; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return ShopEntity__GetPrice(Shop_k__BackingField, 0);
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.sellQp;
  else
    return 0;
}


int32_t ShopBuyItemListViewItem__get_PriceIcon(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0
  ItemEntity_o *itemEntity; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return ShopEntity__GetPriceIcon(Shop_k__BackingField, 0);
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return ItemEntity__GetPriceIcon(itemEntity, 0);
  else
    return 1;
}


int32_t ShopBuyItemListViewItem__get_PurchaseType(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return Shop_k__BackingField->fields.purchaseType;
  else
    return this->fields.itemEntity != 0;
}


ShopEntity_o *ShopBuyItemListViewItem__get_Shop(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Shop_k__BackingField;
}


int32_t ShopBuyItemListViewItem__get_ShopKind(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._ShopKind_k__BackingField;
}


int32_t ShopBuyItemListViewItem__get_TargetId(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    LODWORD(Shop_k__BackingField) = ShopEntity__get_TargetId(Shop_k__BackingField, 0);
  return (int)Shop_k__BackingField;
}


int32_t ShopBuyItemListViewItem__get_TotalNum(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TotalNum_k__BackingField;
}


System_String_o *ShopBuyItemListViewItem__get_UniqueMessage(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_2213CDC(this, method);
  return Shop_k__BackingField->fields.infoMessage;
}


void ShopBuyItemListViewItem__set_CommonConsumeEntities(
        ShopBuyItemListViewItem_o *this,
        CommonConsumeEntity_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CommonConsumeEntities_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CommonConsumeEntities_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ShopBuyItemListViewItem__set_EnterTime(ShopBuyItemListViewItem_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._EnterTime_k__BackingField = value;
}


void ShopBuyItemListViewItem__set_EventItemEntities(
        ShopBuyItemListViewItem_o *this,
        ItemEntity_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EventItemEntities_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EventItemEntities_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ShopBuyItemListViewItem__set_IsAlreadyInPossession(
        ShopBuyItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsAlreadyInPossession_k__BackingField = value;
}


void ShopBuyItemListViewItem__set_IsNotHavingShopItemReceived(
        ShopBuyItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNotHavingShopItemReceived_k__BackingField = value;
}


void ShopBuyItemListViewItem__set_IsRarePriShopPurchased(
        ShopBuyItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsRarePriShopPurchased_k__BackingField = value;
}


void ShopBuyItemListViewItem__set_Shop(ShopBuyItemListViewItem_o *this, ShopEntity_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Shop_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Shop_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ShopBuyItemListViewItem__set_ShopKind(ShopBuyItemListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ShopKind_k__BackingField = value;
}


void ShopBuyItemListViewItem__set_TotalNum(ShopBuyItemListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._TotalNum_k__BackingField = value;
}