void ShopBuyItemListViewItem___ctor(
        ShopBuyItemListViewItem_o *this,
        int32_t index,
        int32_t shopKind,
        ShopEntity_o *shopEntity,
        int64_t enterTime,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x2

  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields._ShopKind_k__BackingField = shopKind;
  this->fields._EnterTime_k__BackingField = enterTime;
  ShopBuyItemListViewItem__Modify(this, shopEntity, v10);
}


ItemEntity_array *ShopBuyItemListViewItem__GetEventItemEntities(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  int32_t ItemCount; // w22
  __int64 v5; // x0
  unsigned int *v6; // x20
  unsigned __int64 v7; // x21
  __int64 v8; // x24
  GrandQuestFolderBoardItem_o *i; // x22
  Il2CppObject *MasterData_object; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  ShopBuyItemListViewItem_o *v17; // x23
  __int64 v19; // x0

  if ( (byte_4D28954 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C94098(&ItemEntity___TypeInfo);
    this = (ShopBuyItemListViewItem_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D28954 = 1;
  }
  if ( !shopEntity )
    goto LABEL_17;
  if ( ShopEntity__GetItemID(shopEntity, 0) < 1 )
    return 0;
  ItemCount = ShopEntity__GetItemCount(shopEntity, 0);
  v5 = sub_1C94140(ItemEntity___TypeInfo, (unsigned int)ItemCount);
  v6 = (unsigned int *)v5;
  if ( ItemCount >= 1 )
  {
    v7 = 0;
    v8 = (unsigned int)ItemCount;
    for ( i = (GrandQuestFolderBoardItem_o *)(v5 + 32); ; i = (GrandQuestFolderBoardItem_o *)((char *)i + 8) )
    {
      this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__GetItemIDs(shopEntity, v7, 0);
      if ( !MasterData_object )
        break;
      this = (ShopBuyItemListViewItem_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                            (int32_t)this,
                                            (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v6 )
        break;
      v17 = this;
      if ( this )
      {
        this = (ShopBuyItemListViewItem_o *)sub_1C941D4(this, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
        if ( !this )
        {
          v19 = sub_1C94314();
          sub_1C941C0(v19, 0);
        }
      }
      if ( v7 >= v6[6] )
        sub_1C942F8(this);
      i->klass = (GrandQuestFolderBoardItem_c *)v17;
      sub_1C9403C(i, (int32_t)v17, v11, v12, v13, v14, v15, v16);
      if ( v8 == ++v7 )
        return (ItemEntity_array *)v6;
    }
LABEL_17:
    sub_1C942F0(this, shopEntity);
  }
  return (ItemEntity_array *)v6;
}


int32_t ShopBuyItemListViewItem__GetEventPrice(ShopBuyItemListViewItem_o *this, int32_t num, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_1C942F0(0, num);
  return ShopEntity__GetPrices(Shop_k__BackingField, num, 0);
}


bool ShopBuyItemListViewItem__GetIsPreparation(
        ShopBuyItemListViewItem_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ShopEntity_o *Shop_k__BackingField; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  ShopEntity_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct ItemEntity_o *itemEntity; // x8
  System_String_o *name; // x1
  System_String_o **v28; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
  {
    *message = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)message, 0, (int32_t)itemName, (int32_t)method, v4, v5, v6, v7);
    *itemName = 0;
    v28 = itemName;
    LODWORD(name) = 0;
    goto LABEL_6;
  }
  if ( ShopEntity__IsItemMaxButShopAvailable(Shop_k__BackingField, 0) )
  {
    *message = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)message, 0, v13, v14, v15, v16, v17, v18);
    itemEntity = this->fields.itemEntity;
    if ( itemEntity )
    {
      name = itemEntity->fields.name;
      v28 = itemName;
      *itemName = name;
LABEL_6:
      sub_1C9403C((GrandQuestFolderBoardItem_o *)v28, (int32_t)name, v20, v21, v22, v23, v24, v25);
      return 1;
    }
LABEL_9:
    sub_1C942F0(v19, v12);
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
  Il2CppObject *MasterData_object; // x20
  EventDetailEntity_o *v9; // [xsp+0h] [xbp-40h] BYREF
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D28955 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C94098(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D28955 = 1;
  }
  v9 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (Il2CppObject **)&v9,
          shopEntity->fields.eventId,
          (const MethodInfo_345B50C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 1;
  Instance = (DataManager_o *)v9;
  if ( !v9 )
LABEL_23:
    sub_1C942F0(Instance, v5);
  return !EventDetailEntity__IsTimeStatusRecord(v9, 0);
}


ItemEntity_o *ShopBuyItemListViewItem__GetItemEntity(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  int32_t purchaseType; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // x20
  int32_t v6; // w1

  if ( (byte_4D28952 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    this = (ShopBuyItemListViewItem_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D28952 = 1;
  }
  if ( !shopEntity )
    goto LABEL_15;
  purchaseType = shopEntity->fields.purchaseType;
  if ( purchaseType == 3 || purchaseType == 2 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopBuyItemListViewItem_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( this )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
        v6 = 2;
        return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 MasterData_object,
                                 v6,
                                 (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      }
    }
LABEL_15:
    sub_1C942F0(this, shopEntity);
  }
  if ( purchaseType == 1 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                          (DataManager_o *)this,
                                                                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__get_TargetId(shopEntity, 0);
      if ( MasterData_object )
      {
        v6 = (int)this;
        return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 MasterData_object,
                                 v6,
                                 (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  ShopEntity_o *Shop_k__BackingField; // x0
  int32_t buyQuestNum; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t buyServantNum[2]; // [xsp+18h] [xbp-28h] BYREF

  *isTake = 0;
  *isSend = 0;
  *isQuest = 0;
  if ( !this->fields._Shop_k__BackingField )
    return 0;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
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
  *isTake = buyServantNum[1] > 0;
  *isSend = buyCmdCodeNum[1] + buyServantNum[0] + buyCmdCodeNum[0] > 0;
  *isQuest = buyQuestNum > 0;
  return 1;
}


QuestEntity_o *ShopBuyItemListViewItem__GetQuestEntity(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4D28953 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C94098(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    this = (ShopBuyItemListViewItem_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D28953 = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( shopEntity->fields.purchaseType == 6 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__get_TargetId(shopEntity, 0);
      if ( MasterData_object )
        return (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  (int32_t)this,
                                  (const MethodInfo_345B4C0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    }
LABEL_9:
    sub_1C942F0(this, shopEntity);
  }
  return 0;
}


bool ShopBuyItemListViewItem__GetSendType(
        ShopBuyItemListViewItem_o *this,
        bool *isTake,
        bool *isSend,
        bool *isQuest,
        const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0
  __int64 v10; // [xsp+0h] [xbp-40h] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t buyServantNum[2]; // [xsp+18h] [xbp-28h] BYREF

  *isTake = 0;
  *isSend = 0;
  *isQuest = 0;
  if ( !this->fields._Shop_k__BackingField )
    return 0;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  *(_QWORD *)buyServantNum = 0;
  v10 = 0;
  *(_QWORD *)buyCmdCodeNum = 0;
  ShopEntity__GetSum(
    Shop_k__BackingField,
    &buyServantNum[1],
    buyServantNum,
    &buyCmdCodeNum[1],
    buyCmdCodeNum,
    (int32_t *)&v10 + 1,
    (int32_t *)&v10,
    0);
  *isTake = buyServantNum[1] > 0;
  *isSend = buyCmdCodeNum[1] + buyServantNum[0] + buyCmdCodeNum[0] > 0;
  *isQuest = SHIDWORD(v10) > 0;
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
        sub_1C942F0(0, v6);
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
    sub_1C942F0(Shop_k__BackingField, isPreparation);
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
  ShopEntity_o *Shop_k__BackingField; // x0
  int32_t TargetId; // w20
  UserPresentBoxMaster_o *v5; // x20
  System_String_o *v6; // x21
  System_String_o *v7; // x0
  int32_t v8; // w20
  System_String_o *v9; // x0
  int32_t v10; // w21
  UserPresentBoxMaster_o *v11; // x20
  Il2CppObject *Master_object; // x20
  System_Object_array *List; // x20
  System_Func_object__bool__o *v14; // x21
  UserPresentBoxMaster_o *v15; // x20
  struct ShopEntity_o *v16; // x8
  int eventId; // w8
  int i; // w9
  __int64 v19; // x10
  bool IsAlreadyInPossessionNotHaving; // w8
  struct ShopEntity_o *v21; // x8
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2895A & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_UserEquipEntity___);
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&System_Func_UserEquipEntity__bool__TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_ShopBuyItemListViewItem__IsPrepareTextOnMask_b__89_0__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2895A = 1;
  }
  v23 = 0;
  LOBYTE(Shop_k__BackingField) = 0;
  if ( this->fields._ShopKind_k__BackingField == 6 )
  {
    Shop_k__BackingField = this->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_61;
    if ( Shop_k__BackingField->fields.purchaseType == 19 )
    {
      TargetId = ShopEntity__get_TargetId(Shop_k__BackingField, 0);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsCommandCodeGet(TargetId, 0) )
        goto LABEL_43;
      Shop_k__BackingField = (ShopEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Shop_k__BackingField )
        goto LABEL_61;
      Shop_k__BackingField = (ShopEntity_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Shop_k__BackingField,
                                               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( !this->fields._Shop_k__BackingField )
        goto LABEL_61;
      v5 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
      Shop_k__BackingField = (ShopEntity_o *)ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, 0);
      if ( !v5 )
        goto LABEL_61;
      if ( UserPresentBoxMaster__isExist(v5, 11, (int32_t)Shop_k__BackingField, 0) )
        goto LABEL_43;
      Shop_k__BackingField = this->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_61;
    }
    if ( Shop_k__BackingField->fields.purchaseType == 14 )
    {
      v23 = ShopEntity__get_TargetId(Shop_k__BackingField, 0);
      Shop_k__BackingField = (ShopEntity_o *)System_Int32__ToString((int32_t)&v23, 0);
      if ( !Shop_k__BackingField )
        goto LABEL_61;
      v6 = (System_String_o *)Shop_k__BackingField;
      v7 = System_String__Substring_64463684(
             (System_String_o *)Shop_k__BackingField,
             0,
             Shop_k__BackingField->fields.id - 2,
             0);
      v8 = System_Int32__Parse(v7, 0);
      v9 = System_String__Substring(v6, v6->fields._stringLength - 2, 0);
      v10 = System_Int32__Parse(v9, 0);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsReleaseCostume(v8, v10, 0) )
        goto LABEL_43;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsCostumeGet(v8, v10, 0) )
        goto LABEL_43;
      Shop_k__BackingField = (ShopEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Shop_k__BackingField )
        goto LABEL_61;
      Shop_k__BackingField = (ShopEntity_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Shop_k__BackingField,
                                               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( !this->fields._Shop_k__BackingField )
        goto LABEL_61;
      v11 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
      Shop_k__BackingField = (ShopEntity_o *)ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, 0);
      if ( !v11 )
        goto LABEL_61;
      if ( UserPresentBoxMaster__isExist(v11, 9, (int32_t)Shop_k__BackingField, 0) )
        goto LABEL_43;
      Shop_k__BackingField = this->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_61;
    }
    if ( Shop_k__BackingField->fields.purchaseType != 2 )
    {
LABEL_46:
      if ( Shop_k__BackingField->fields.purchaseType == 16 )
      {
        Shop_k__BackingField = (ShopEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Shop_k__BackingField )
          goto LABEL_61;
        Shop_k__BackingField = (ShopEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Shop_k__BackingField,
                                                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
        v16 = this->fields._Shop_k__BackingField;
        if ( !v16 )
          goto LABEL_61;
        if ( !Shop_k__BackingField )
          goto LABEL_61;
        Shop_k__BackingField = (ShopEntity_o *)ShopReleaseMaster__GetEntitiyList(
                                                 (ShopReleaseMaster_o *)Shop_k__BackingField,
                                                 v16->fields.id,
                                                 0);
        v23 = 0;
        if ( !Shop_k__BackingField )
          goto LABEL_61;
        eventId = Shop_k__BackingField->fields.eventId;
        if ( eventId >= 1 )
        {
          for ( i = 0; i != eventId; v23 = ++i )
          {
            if ( eventId == i )
              sub_1C942F8(Shop_k__BackingField);
            v19 = *((_QWORD *)&Shop_k__BackingField->fields.itemIds + i);
            if ( !v19 )
              goto LABEL_61;
            if ( *(_DWORD *)(v19 + 20) == 67 )
              goto LABEL_43;
          }
        }
        Shop_k__BackingField = this->fields._Shop_k__BackingField;
        if ( !Shop_k__BackingField )
          goto LABEL_61;
      }
      IsAlreadyInPossessionNotHaving = ShopEntity__GetIsAlreadyInPossessionNotHaving(Shop_k__BackingField, 0, 0);
      Shop_k__BackingField = 0;
      if ( IsAlreadyInPossessionNotHaving )
        return (char)Shop_k__BackingField;
      v21 = this->fields._Shop_k__BackingField;
      if ( v21 )
      {
        LOBYTE(Shop_k__BackingField) = v21->fields.purchaseType != 24;
        return (char)Shop_k__BackingField;
      }
LABEL_61:
      sub_1C942F0(Shop_k__BackingField, method);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserEquipMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
    }
    Shop_k__BackingField = (ShopEntity_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Shop_k__BackingField = (ShopEntity_o *)NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_61;
    List = (System_Object_array *)UserEquipMaster__getList(
                                    (UserEquipMaster_o *)Master_object,
                                    *((_QWORD *)Shop_k__BackingField[1].monitor + 8),
                                    0);
    v14 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_UserEquipEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewItem__IsPrepareTextOnMask_b__89_0__,
      0);
    if ( !BasicHelper__Any_object__51926292(
            List,
            (System_Func_T__bool__o *)v14,
            (const MethodInfo_3185514 *)Method_BasicHelper_Any_UserEquipEntity___) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Shop_k__BackingField = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
      if ( !this->fields._Shop_k__BackingField )
        goto LABEL_61;
      v15 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
      Shop_k__BackingField = (ShopEntity_o *)ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, 0);
      if ( !v15 )
        goto LABEL_61;
      if ( UserPresentBoxMaster__isExist(v15, 5, (int32_t)Shop_k__BackingField, 0) )
        goto LABEL_43;
      Shop_k__BackingField = this->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_61;
      goto LABEL_46;
    }
LABEL_43:
    LOBYTE(Shop_k__BackingField) = 0;
  }
  return (char)Shop_k__BackingField;
}


void ShopBuyItemListViewItem__Modify(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  ShopBuyItemListViewItem_o *v4; // x19
  ItemEntity_o *ItemEntity; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  ShopBuyItemListViewItem_o *v12; // x0
  const MethodInfo *v13; // x2
  bool IsRarePriShopPurchased; // w0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  ShopBuyItemListViewItem_o *v21; // x0
  const MethodInfo *v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct ShopEntity_o *Shop_k__BackingField; // x8
  CommonConsumeEntity_array *CommonConsumeEntities; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  GrandQuestFolderBoardItem_o *p_EventItemEntities_k__BackingField; // x0
  ItemEntity_array *EventItemEntities; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  void *Instance; // x0
  __int64 v45; // x1
  Il2CppObject *MasterData_object; // x21

  v4 = this;
  if ( (byte_4D28951 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C94098(&NetworkManager_TypeInfo);
    this = (ShopBuyItemListViewItem_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D28951 = 1;
  }
  ItemEntity = ShopBuyItemListViewItem__GetItemEntity(this, shopEntity, method);
  v4->fields.itemEntity = ItemEntity;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v4->fields.itemEntity, (int32_t)ItemEntity, v6, v7, v8, v9, v10, v11);
  IsRarePriShopPurchased = ShopBuyItemListViewItem__GetIsRarePriShopPurchased(v12, shopEntity, v13);
  v4->fields._Shop_k__BackingField = shopEntity;
  v4->fields._IsRarePriShopPurchased_k__BackingField = IsRarePriShopPurchased;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v4->fields._Shop_k__BackingField,
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
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v4->fields._CommonConsumeEntities_k__BackingField,
        (int32_t)CommonConsumeEntities,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    v4->fields._EventItemEntities_k__BackingField = 0;
    p_EventItemEntities_k__BackingField = (GrandQuestFolderBoardItem_o *)&v4->fields._EventItemEntities_k__BackingField;
  }
  else
  {
    EventItemEntities = ShopBuyItemListViewItem__GetEventItemEntities(v21, shopEntity, v22);
    v4->fields._EventItemEntities_k__BackingField = EventItemEntities;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&v4->fields._EventItemEntities_k__BackingField,
      (int32_t)EventItemEntities,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    v4->fields._CommonConsumeEntities_k__BackingField = 0;
    p_EventItemEntities_k__BackingField = (GrandQuestFolderBoardItem_o *)&v4->fields._CommonConsumeEntities_k__BackingField;
  }
  sub_1C9403C(p_EventItemEntities_k__BackingField, 0, (int32_t)v22, v23, v24, v25, v26, v27);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !shopEntity
    || !MasterData_object
    || (Instance = UserShopMaster__GetEntityDefinitely(
                     (UserShopMaster_o *)MasterData_object,
                     *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                     shopEntity->fields.baseShopId,
                     0)) == 0 )
  {
LABEL_20:
    sub_1C942F0(Instance, v45);
  }
  v4->fields._TotalNum_k__BackingField = *((_DWORD *)Instance + 7);
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
  struct ShopEntity_o *Shop_k__BackingField; // x8
  FilterKindList_c *v9; // x0
  struct ItemEntity_o *itemEntity; // x8
  struct ItemEntity_o *v11; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D28950 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4D28950 = 1;
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
      v9 = FilterKindList_TypeInfo;
      if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v9 = FilterKindList_TypeInfo;
      }
      ClassFilterKindList = (System_Collections_Generic_List_T__o *)v9->static_fields->ClassFilterKindList;
      if ( ClassFilterKindList )
      {
        ClassFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        ClassFilterKindList,
                                                                        (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            ClassFilterKindList = (System_Collections_Generic_List_T__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
            v11 = this->fields.itemEntity;
            if ( v11 )
            {
              if ( ClassFilterKindList )
                return !DataMasterBase_object__object__int___TryGetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)ClassFilterKindList,
                          &entity,
                          v11->fields.value,
                          (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__)
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
    sub_1C942F0(ClassFilterKindList, v6);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( !this->fields._Shop_k__BackingField )
    sub_1C942F0(this, message);
  *message = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)message, 0, (int32_t)itemName, (int32_t)method, v4, v5, v6, v7);
  *itemName = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)itemName, 0, v9, v10, v11, v12, v13, v14);
  return 0;
}


bool ShopBuyItemListViewItem___IsPrepareTextOnMask_b__89_0(
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
  if ( (byte_4D2895B & 1) == 0 )
  {
    this = (ShopBuyItemListViewItem_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2895B = 1;
  }
  if ( !equip )
    goto LABEL_8;
  v6 = *(_QWORD *)&equip->fields.equipId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&equip->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  this = (ShopBuyItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v9, 0);
  Shop_k__BackingField = v4->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
LABEL_8:
    sub_1C942F0(this, equip);
  return (_DWORD)this == ShopEntity__get_TargetId(Shop_k__BackingField, 0);
}


int64_t ShopBuyItemListViewItem__get_ActiveTime(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return Shop_k__BackingField->fields.closedAt;
  else
    return 0;
}


System_String_o *ShopBuyItemListViewItem__get_BulkNameText(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8

  if ( (byte_4D28957 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10856/*"QP_UNIT"*/);
    byte_4D28957 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity || itemEntity->fields.type != 1 )
    return ShopBuyItemListViewItem__get_NameText(this, method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10856/*"QP_UNIT"*/, 0);
}


CommonConsumeEntity_array *ShopBuyItemListViewItem__get_CommonConsumeEntities(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommonConsumeEntities_k__BackingField;
}


System_String_o *ShopBuyItemListViewItem__get_DetailText(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x8
  System_String_o **p_detail; // x8
  struct ItemEntity_o *itemEntity; // x8
  LocalizationManager_c *v6; // x0

  if ( (byte_4D28958 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    byte_4D28958 = 1;
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
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4D277C7 )
      {
        sub_1C94098(&LocalizationManager_TypeInfo);
        byte_4D277C7 = 1;
      }
      v6 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4D28959 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D28959 = 1;
  }
  entity = 0;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    return 0;
  purchaseType = Shop_k__BackingField->fields.purchaseType;
  if ( purchaseType != 8 && purchaseType != 4 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = this->fields._Shop_k__BackingField;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( v7 )
  {
    Instance = (Il2CppObject *)ShopEntity__get_TargetId(v7, 0);
    v9 = (int)Instance;
    if ( !v8 )
LABEL_16:
      sub_1C942F0(Instance, v6);
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
         (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    sub_1C942F0(0, method);
  return ShopEntity__checkFlag(Shop_k__BackingField, 0x4000, 0);
}


bool ShopBuyItemListViewItem__get_IsIndefinitePeriodShowable(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_1C942F0(0, method);
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
    sub_1C942F0(0, method);
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
  struct ShopEntity_o *Shop_k__BackingField; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return Shop_k__BackingField->fields.limitNum;
  else
    return 0;
}


System_String_o *ShopBuyItemListViewItem__get_NameText(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0
  struct ItemEntity_o *itemEntity; // x8

  if ( (byte_4D28956 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19212/*"error"*/);
    byte_4D28956 = 1;
  }
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return ShopEntity__getName(Shop_k__BackingField, 0);
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.name;
  else
    return (System_String_o *)StringLiteral_19212/*"error"*/;
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
    sub_1C942F0(this, method);
  return Shop_k__BackingField->fields.infoMessage;
}


void ShopBuyItemListViewItem__set_CommonConsumeEntities(
        ShopBuyItemListViewItem_o *this,
        CommonConsumeEntity_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._CommonConsumeEntities_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._CommonConsumeEntities_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._EventItemEntities_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._EventItemEntities_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Shop_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Shop_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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