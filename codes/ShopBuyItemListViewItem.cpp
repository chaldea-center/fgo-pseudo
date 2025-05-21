void __fastcall ShopBuyItemListViewItem___ctor(
        ShopBuyItemListViewItem_o *this,
        int32_t index,
        int32_t shopKind,
        ShopEntity_o *shopEntity,
        int64_t enterTime,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x2

  ListViewItem___ctor_42734232((ListViewItem_o *)this, index, 0LL);
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
  int32_t ItemCount; // w22
  __int64 v8; // x0
  ItemEntity_array *v9; // x20
  unsigned __int64 v10; // x21
  __int64 v11; // x24
  CGThumbnailListItem_o *i; // x22
  Il2CppObject *MasterData_object; // x23
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  ShopBuyItemListViewItem_o *v16; // x23
  __int64 v18; // x0

  if ( (byte_4B40D2E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4);
    sub_1BDB878(&ItemEntity___TypeInfo, v5);
    this = (ShopBuyItemListViewItem_o *)sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B40D2E = 1;
  }
  if ( !shopEntity )
    goto LABEL_17;
  if ( ShopEntity__GetItemID(shopEntity, 0LL) < 1 )
    return 0LL;
  ItemCount = ShopEntity__GetItemCount(shopEntity, 0LL);
  v8 = sub_1BDB920(ItemEntity___TypeInfo, (unsigned int)ItemCount);
  v9 = (ItemEntity_array *)v8;
  if ( ItemCount >= 1 )
  {
    v10 = 0LL;
    v11 = (unsigned int)ItemCount;
    for ( i = (CGThumbnailListItem_o *)(v8 + 32); ; i = (CGThumbnailListItem_o *)((char *)i + 8) )
    {
      this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__GetItemIDs(shopEntity, v10, 0LL);
      if ( !MasterData_object )
        break;
      this = (ShopBuyItemListViewItem_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                            (int32_t)this,
                                            (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v9 )
        break;
      v16 = this;
      if ( this )
      {
        this = (ShopBuyItemListViewItem_o *)sub_1BDB9B4(this, v9->obj.klass->_1.element_class);
        if ( !this )
        {
          v18 = sub_1BDBAF8();
          sub_1BDB9A0(v18, 0LL);
        }
      }
      if ( v10 >= v9->max_length )
        sub_1BDBADC(this, shopEntity, v14);
      i->klass = (CGThumbnailListItem_c *)v16;
      sub_1BDB81C(i, (int32_t)v16, v14, v15);
      if ( v11 == ++v10 )
        return v9;
    }
LABEL_17:
    sub_1BDBAD4(this, shopEntity);
  }
  return v9;
}


int32_t __fastcall ShopBuyItemListViewItem__GetEventPrice(
        ShopBuyItemListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_1BDBAD4(0LL, num);
  return ShopEntity__GetPrices(Shop_k__BackingField, num, 0LL);
}


bool __fastcall ShopBuyItemListViewItem__GetIsPreparation(
        ShopBuyItemListViewItem_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return ShopEntity__IsPreparation(Shop_k__BackingField, message, itemName, 0LL);
  *message = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)message, 0, (int32_t)itemName, method);
  *itemName = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)itemName, 0, v7, v8);
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
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20
  EventDetailEntity_o *v13; // [xsp+0h] [xbp-40h] BYREF
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B40D2F & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventDetailMaster___, shopEntity);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserEventMaster___, v4);
    sub_1BDB878(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1BDB878(&NetworkManager_TypeInfo, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B40D2F = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v9);
    byte_4B3ED56 = 1;
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
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_23;
  if ( !UserEventEntity__getEventFlag(entity, 1, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (Il2CppObject **)&v13,
          shopEntity->fields.eventId,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 1;
  Instance = (DataManager_o *)v13;
  if ( !v13 )
LABEL_23:
    sub_1BDBAD4(Instance, v9);
  return !EventDetailEntity__IsTimeStatusRecord(v13, 0LL);
}


ItemEntity_o *__fastcall ShopBuyItemListViewItem__GetItemEntity(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t purchaseType; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // x20
  int32_t v8; // w1

  if ( (byte_4B40D2C & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4);
    this = (ShopBuyItemListViewItem_o *)sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B40D2C = 1;
  }
  if ( !shopEntity )
    goto LABEL_15;
  purchaseType = shopEntity->fields.purchaseType;
  if ( purchaseType == 3 || purchaseType == 2 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopBuyItemListViewItem_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( this )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
        v8 = 2;
        return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 MasterData_object,
                                 v8,
                                 (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      }
    }
LABEL_15:
    sub_1BDBAD4(this, shopEntity);
  }
  if ( purchaseType == 1 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                          (DataManager_o *)this,
                                                                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
      if ( MasterData_object )
      {
        v8 = (int)this;
        return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 MasterData_object,
                                 v8,
                                 (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  struct ShopEntity_o *Shop_k__BackingField; // x21
  ShopEntity_o *v9; // x0
  int32_t buyQuestNum; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t buyServantNum[2]; // [xsp+18h] [xbp-28h] BYREF

  *isTake = 0;
  *isSend = 0;
  *isQuest = 0;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
  {
    v9 = this->fields._Shop_k__BackingField;
    *(_QWORD *)buyServantNum = 0LL;
    *(_QWORD *)buyCmdCodeNum = 0LL;
    buyQuestNum = 0;
    ShopEntity__GetLastPurchaseSum(
      v9,
      &buyServantNum[1],
      buyServantNum,
      &buyCmdCodeNum[1],
      buyCmdCodeNum,
      &buyQuestNum,
      0LL);
    *isTake = buyServantNum[1] > 0;
    *isSend = buyCmdCodeNum[1] + buyServantNum[0] + buyCmdCodeNum[0] > 0;
    *isQuest = buyQuestNum > 0;
  }
  return Shop_k__BackingField != 0LL;
}


QuestEntity_o *__fastcall ShopBuyItemListViewItem__GetQuestEntity(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4B40D2D & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestMaster___, shopEntity);
    sub_1BDB878(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4);
    this = (ShopBuyItemListViewItem_o *)sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B40D2D = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( shopEntity->fields.purchaseType == 6 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
      if ( MasterData_object )
        return (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  (int32_t)this,
                                  (const MethodInfo_32E1E3C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    }
LABEL_9:
    sub_1BDBAD4(this, shopEntity);
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
  struct ShopEntity_o *Shop_k__BackingField; // x21
  ShopEntity_o *v9; // x0
  __int64 v11; // [xsp+0h] [xbp-40h] BYREF
  __int64 buyCmdCodeNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t buyServantNum[2]; // [xsp+18h] [xbp-28h] BYREF

  *isTake = 0;
  *isSend = 0;
  *isQuest = 0;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
  {
    v9 = this->fields._Shop_k__BackingField;
    *(_QWORD *)buyServantNum = 0LL;
    v11 = 0LL;
    buyCmdCodeNum = 0LL;
    ShopEntity__GetSum(
      v9,
      &buyServantNum[1],
      buyServantNum,
      (int32_t *)&buyCmdCodeNum + 1,
      (int32_t *)&buyCmdCodeNum,
      (int32_t *)&v11 + 1,
      (int32_t *)&v11,
      0LL);
    *isTake = buyServantNum[1] > 0;
    *isSend = HIDWORD(buyCmdCodeNum) + buyServantNum[0] + (int)buyCmdCodeNum > 0;
    *isQuest = SHIDWORD(v11) > 0;
  }
  return Shop_k__BackingField != 0LL;
}


bool __fastcall ShopBuyItemListViewItem__IsDisabledDisp(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ShopEntity_o *Shop_k__BackingField; // x0
  __int64 v6; // x1
  ShopEntity_o *v8; // x0
  System_Int32_array *possessionAnotherItemId; // [xsp+8h] [xbp-28h] BYREF
  System_String_o *itemName; // [xsp+10h] [xbp-20h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-18h] BYREF

  itemName = 0LL;
  message = 0LL;
  possessionAnotherItemId = 0LL;
  if ( ShopBuyItemListViewItem__GetIsPreparation(this, &message, &itemName, v2) )
  {
    return 1;
  }
  else
  {
    Shop_k__BackingField = this->fields._Shop_k__BackingField;
    if ( Shop_k__BackingField
      && ShopEntity__IsSoldOut(Shop_k__BackingField, 0LL)
      && !this->fields._IsNotHavingShopItemReceived_k__BackingField )
    {
      v8 = this->fields._Shop_k__BackingField;
      if ( !v8 )
        sub_1BDBAD4(0LL, v6);
      return !ShopEntity__IsAnotherItemBuyable(v8, &possessionAnotherItemId, 0LL);
    }
    else
    {
      return 0;
    }
  }
}


bool __fastcall ShopBuyItemListViewItem__IsPrepareTextOnMask(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  bool v13; // w8
  ShopEntity_o *Shop_k__BackingField; // x0
  int32_t TargetId; // w20
  UserPresentBoxMaster_o *v16; // x20
  System_String_o *v17; // x21
  System_String_o *v18; // x0
  int32_t v19; // w20
  System_String_o *v20; // x0
  int32_t v21; // w21
  UserPresentBoxMaster_o *v22; // x20
  Il2CppObject *Master_object; // x20
  System_Object_array *List; // x20
  System_Func_object__bool__o *v25; // x21
  UserPresentBoxMaster_o *v26; // x20
  struct ShopEntity_o *v28; // x8
  __int64 v29; // x2
  int eventId; // w8
  int i; // w9
  __int64 v32; // x10
  int32_t v33; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B40D34 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_UserEquipEntity___, method);
    sub_1BDB878(&CondType_TypeInfo, v3);
    sub_1BDB878(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_UserEquipMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&System_Func_UserEquipEntity__bool__TypeInfo, v9);
    sub_1BDB878(&NetworkManager_TypeInfo, v10);
    sub_1BDB878(&Method_ShopBuyItemListViewItem__IsPrepareTextOnMask_b__89_0__, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B40D34 = 1;
  }
  v33 = 0;
  v13 = 0;
  if ( this->fields._ShopKind_k__BackingField == 6 )
  {
    Shop_k__BackingField = this->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_59;
    if ( Shop_k__BackingField->fields.purchaseType == 19 )
    {
      TargetId = ShopEntity__get_TargetId(Shop_k__BackingField, 0LL);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsCommandCodeGet(TargetId, 0LL) )
        return 0;
      Shop_k__BackingField = (ShopEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Shop_k__BackingField )
        goto LABEL_59;
      Shop_k__BackingField = (ShopEntity_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Shop_k__BackingField,
                                               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( !this->fields._Shop_k__BackingField )
        goto LABEL_59;
      v16 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
      Shop_k__BackingField = (ShopEntity_o *)ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, 0LL);
      if ( !v16 )
        goto LABEL_59;
      if ( UserPresentBoxMaster__isExist(v16, 11, (int32_t)Shop_k__BackingField, 0LL) )
        return 0;
      Shop_k__BackingField = this->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_59;
    }
    if ( Shop_k__BackingField->fields.purchaseType == 14 )
    {
      v33 = ShopEntity__get_TargetId(Shop_k__BackingField, 0LL);
      Shop_k__BackingField = (ShopEntity_o *)System_Int32__ToString((int32_t)&v33, 0LL);
      if ( !Shop_k__BackingField )
        goto LABEL_59;
      v17 = (System_String_o *)Shop_k__BackingField;
      v18 = System_String__Substring_62618184(
              (System_String_o *)Shop_k__BackingField,
              0,
              Shop_k__BackingField->fields.id - 2,
              0LL);
      v19 = System_Int32__Parse(v18, 0LL);
      v20 = System_String__Substring(v17, v17->fields._stringLength - 2, 0LL);
      v21 = System_Int32__Parse(v20, 0LL);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsReleaseCostume(v19, v21, 0LL) )
        return 0;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsCostumeGet(v19, v21, 0LL) )
        return 0;
      Shop_k__BackingField = (ShopEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Shop_k__BackingField )
        goto LABEL_59;
      Shop_k__BackingField = (ShopEntity_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Shop_k__BackingField,
                                               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( !this->fields._Shop_k__BackingField )
        goto LABEL_59;
      v22 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
      Shop_k__BackingField = (ShopEntity_o *)ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, 0LL);
      if ( !v22 )
        goto LABEL_59;
      if ( UserPresentBoxMaster__isExist(v22, 9, (int32_t)Shop_k__BackingField, 0LL) )
        return 0;
      Shop_k__BackingField = this->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_59;
    }
    if ( Shop_k__BackingField->fields.purchaseType != 2 )
      goto LABEL_46;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserEquipMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B3ED56 )
    {
      sub_1BDB878(&NetworkManager_TypeInfo, method);
      byte_4B3ED56 = 1;
    }
    Shop_k__BackingField = (ShopEntity_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Shop_k__BackingField = (ShopEntity_o *)NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_59;
    List = (System_Object_array *)UserEquipMaster__getList(
                                    (UserEquipMaster_o *)Master_object,
                                    *((_QWORD *)Shop_k__BackingField[1].monitor + 8),
                                    0LL);
    v25 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_UserEquipEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v25,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewItem__IsPrepareTextOnMask_b__89_0__,
      0LL);
    if ( !BasicHelper__Any_object__50450088(
            List,
            (System_Func_T__bool__o *)v25,
            (const MethodInfo_301CEA8 *)Method_BasicHelper_Any_UserEquipEntity___) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Shop_k__BackingField = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
      if ( this->fields._Shop_k__BackingField )
      {
        v26 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
        Shop_k__BackingField = (ShopEntity_o *)ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, 0LL);
        if ( v26 )
        {
          if ( UserPresentBoxMaster__isExist(v26, 5, (int32_t)Shop_k__BackingField, 0LL) )
            return 0;
          Shop_k__BackingField = this->fields._Shop_k__BackingField;
          if ( Shop_k__BackingField )
          {
LABEL_46:
            if ( Shop_k__BackingField->fields.purchaseType == 16 )
            {
              Shop_k__BackingField = (ShopEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Shop_k__BackingField )
                goto LABEL_59;
              Shop_k__BackingField = (ShopEntity_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)Shop_k__BackingField,
                                                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
              v28 = this->fields._Shop_k__BackingField;
              if ( !v28 )
                goto LABEL_59;
              if ( !Shop_k__BackingField )
                goto LABEL_59;
              Shop_k__BackingField = (ShopEntity_o *)ShopReleaseMaster__GetEntitiyList(
                                                       (ShopReleaseMaster_o *)Shop_k__BackingField,
                                                       v28->fields.id,
                                                       0LL);
              v33 = 0;
              if ( !Shop_k__BackingField )
                goto LABEL_59;
              eventId = Shop_k__BackingField->fields.eventId;
              if ( eventId >= 1 )
              {
                for ( i = 0; i != eventId; v33 = ++i )
                {
                  if ( eventId == i )
                    sub_1BDBADC(Shop_k__BackingField, method, v29);
                  v32 = *((_QWORD *)&Shop_k__BackingField->fields.itemIds + i);
                  if ( !v32 )
                    goto LABEL_59;
                  if ( *(_DWORD *)(v32 + 20) == 67 )
                    return 0;
                }
              }
              Shop_k__BackingField = this->fields._Shop_k__BackingField;
              if ( !Shop_k__BackingField )
                goto LABEL_59;
            }
            return !ShopEntity__GetIsAlreadyInPossessionNotHaving(Shop_k__BackingField, 0, 0LL);
          }
        }
      }
LABEL_59:
      sub_1BDBAD4(Shop_k__BackingField, method);
    }
    return 0;
  }
  return v13;
}


void __fastcall ShopBuyItemListViewItem__Modify(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  ShopBuyItemListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  ItemEntity_o *ItemEntity; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  ShopBuyItemListViewItem_o *v10; // x0
  const MethodInfo *v11; // x2
  bool IsRarePriShopPurchased; // w0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  ShopBuyItemListViewItem_o *v15; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  struct ShopEntity_o *Shop_k__BackingField; // x8
  CommonConsumeEntity_array *CommonConsumeEntities; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  CGThumbnailListItem_o *p_EventItemEntities_k__BackingField; // x0
  ItemEntity_array *EventItemEntities; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  void *Instance; // x0
  __int64 v27; // x1
  Il2CppObject *MasterData_object; // x21

  v4 = this;
  if ( (byte_4B40D2B & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserShopMaster___, shopEntity);
    sub_1BDB878(&NetworkManager_TypeInfo, v5);
    this = (ShopBuyItemListViewItem_o *)sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B40D2B = 1;
  }
  ItemEntity = ShopBuyItemListViewItem__GetItemEntity(this, shopEntity, method);
  v4->fields.itemEntity = ItemEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.itemEntity, (int32_t)ItemEntity, v8, v9);
  IsRarePriShopPurchased = ShopBuyItemListViewItem__GetIsRarePriShopPurchased(v10, shopEntity, v11);
  v4->fields._Shop_k__BackingField = shopEntity;
  v4->fields._IsRarePriShopPurchased_k__BackingField = IsRarePriShopPurchased;
  sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._Shop_k__BackingField, (int32_t)shopEntity, v13, v14);
  Shop_k__BackingField = v4->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField && Shop_k__BackingField->fields.payType == 14 )
  {
    if ( shopEntity )
    {
      CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(shopEntity, 0LL);
      v4->fields._CommonConsumeEntities_k__BackingField = CommonConsumeEntities;
      sub_1BDB81C(
        (CGThumbnailListItem_o *)&v4->fields._CommonConsumeEntities_k__BackingField,
        (int32_t)CommonConsumeEntities,
        v20,
        v21);
    }
    v4->fields._EventItemEntities_k__BackingField = 0LL;
    p_EventItemEntities_k__BackingField = (CGThumbnailListItem_o *)&v4->fields._EventItemEntities_k__BackingField;
  }
  else
  {
    EventItemEntities = ShopBuyItemListViewItem__GetEventItemEntities(v15, shopEntity, v16);
    v4->fields._EventItemEntities_k__BackingField = EventItemEntities;
    sub_1BDB81C(
      (CGThumbnailListItem_o *)&v4->fields._EventItemEntities_k__BackingField,
      (int32_t)EventItemEntities,
      v24,
      v25);
    v4->fields._CommonConsumeEntities_k__BackingField = 0LL;
    p_EventItemEntities_k__BackingField = (CGThumbnailListItem_o *)&v4->fields._CommonConsumeEntities_k__BackingField;
  }
  sub_1BDB81C(p_EventItemEntities_k__BackingField, 0, (int32_t)v16, v17);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v27);
    byte_4B3ED56 = 1;
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
                     0LL)) == 0LL )
  {
LABEL_20:
    sub_1BDBAD4(Instance, v27);
  }
  v4->fields._TotalNum_k__BackingField = *((_DWORD *)Instance + 7);
  v4->fields._IsNotHavingShopItemReceived_k__BackingField = ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0LL);
  v4->fields._IsAlreadyInPossession_k__BackingField = ShopEntity__GetIsAlreadyInPossessionNotHaving(shopEntity, 0, 0LL);
}


bool __fastcall ShopBuyItemListViewItem__SetSortValue(
        ShopBuyItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v10; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8
  FilterKindList_c *v13; // x0
  struct ItemEntity_o *itemEntity; // x8
  struct ItemEntity_o *v15; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B40D2A & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, sort);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1BDB878(&FilterKindList_TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v8);
    byte_4B40D2A = 1;
  }
  entity = 0LL;
  ClassFilterKindList = (System_Collections_Generic_List_T__o *)ListViewItem__SetSortValue(
                                                                  (ListViewItem_o *)this,
                                                                  sort,
                                                                  0LL);
  if ( ((unsigned __int8)ClassFilterKindList & 1) == 0 )
    return 0;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_33;
  if ( Shop_k__BackingField->fields.purchaseType != 16 )
  {
    if ( Shop_k__BackingField->fields.shopType == 17 )
    {
      v13 = FilterKindList_TypeInfo;
      if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v13 = FilterKindList_TypeInfo;
      }
      ClassFilterKindList = (System_Collections_Generic_List_T__o *)v13->static_fields->ClassFilterKindList;
      if ( ClassFilterKindList )
      {
        ClassFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        ClassFilterKindList,
                                                                        (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( sort )
        {
          ClassFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__IsUnSelectedAllTargetFilters(
                                                                          sort,
                                                                          (ListViewSort_FilterKind_array *)ClassFilterKindList,
                                                                          0LL);
          if ( ((unsigned __int8)ClassFilterKindList & 1) != 0 )
            return 1;
          itemEntity = this->fields.itemEntity;
          if ( itemEntity )
          {
            if ( itemEntity->fields.type != 29 )
              return 1;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            ClassFilterKindList = (System_Collections_Generic_List_T__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
            v15 = this->fields.itemEntity;
            if ( v15 )
            {
              if ( ClassFilterKindList )
                return !DataMasterBase_object__object__int___TryGetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)ClassFilterKindList,
                          &entity,
                          v15->fields.value,
                          (const MethodInfo_32E1E88 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__)
                    || ListViewSort__IsMatchClassFilter(sort, (ServantEntity_o *)entity, 0LL);
            }
          }
        }
      }
    }
    else
    {
      if ( !sort )
        goto LABEL_33;
      if ( ListViewSort__GetFilter(sort, 52, 0LL) )
      {
        ClassFilterKindList = (System_Collections_Generic_List_T__o *)this->fields._Shop_k__BackingField;
        if ( !ClassFilterKindList )
          goto LABEL_33;
        if ( !ShopEntity__IsServantGet((ShopEntity_o *)ClassFilterKindList, 0LL) )
          return 0;
      }
      if ( !ListViewSort__GetFilter(sort, 53, 0LL) )
        return 1;
      ClassFilterKindList = (System_Collections_Generic_List_T__o *)this->fields._Shop_k__BackingField;
      if ( ClassFilterKindList )
        return !ShopEntity__IsServantGet((ShopEntity_o *)ClassFilterKindList, 0LL);
    }
LABEL_33:
    sub_1BDBAD4(ClassFilterKindList, v10);
  }
  if ( !sort )
    goto LABEL_33;
  return !ListViewSort__GetFilter(sort, 52, 0LL);
}


bool __fastcall ShopBuyItemListViewItem__TryGetClosedMessage(
        ShopBuyItemListViewItem_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( !this->fields._Shop_k__BackingField )
    sub_1BDBAD4(this, message);
  *message = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)message, 0, (int32_t)itemName, method);
  *itemName = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)itemName, 0, v5, v6);
  return 0;
}


bool __fastcall ShopBuyItemListViewItem___IsPrepareTextOnMask_b__89_0(
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
  if ( (byte_4B40D35 & 1) == 0 )
  {
    this = (ShopBuyItemListViewItem_o *)sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equip);
    byte_4B40D35 = 1;
  }
  if ( !equip )
    goto LABEL_8;
  v6 = *(_QWORD *)&equip->fields.equipId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&equip->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  this = (ShopBuyItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v9, 0LL);
  Shop_k__BackingField = v4->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
LABEL_8:
    sub_1BDBAD4(this, equip);
  return (_DWORD)this == ShopEntity__get_TargetId(Shop_k__BackingField, 0LL);
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

  if ( (byte_4B40D31 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_10813/*"QP_UNIT"*/, v3);
    byte_4B40D31 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity || itemEntity->fields.type != 1 )
    return ShopBuyItemListViewItem__get_NameText(this, method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10813/*"QP_UNIT"*/, 0LL);
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

  if ( (byte_4B40D32 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    byte_4B40D32 = 1;
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
      if ( !byte_4B3FEFD )
      {
        sub_1BDB878(&LocalizationManager_TypeInfo, method);
        byte_4B3FEFD = 1;
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  ShopEntity_o *v9; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  int32_t v11; // w2
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B40D33 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B40D33 = 1;
  }
  entity = 0LL;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    return 0;
  purchaseType = Shop_k__BackingField->fields.purchaseType;
  if ( purchaseType != 8 && purchaseType != 4 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = this->fields._Shop_k__BackingField;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( v9 )
  {
    Instance = (Il2CppObject *)ShopEntity__get_TargetId(v9, 0LL);
    v11 = (int)Instance;
    if ( !v10 )
LABEL_16:
      sub_1BDBAD4(Instance, v8);
  }
  else
  {
    v11 = 0;
    if ( !Instance )
      goto LABEL_16;
  }
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v10,
         &entity,
         v11,
         (const MethodInfo_32E1E88 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = entity;
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
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_1BDBAD4(0LL, method);
  return ShopEntity__checkFlag(Shop_k__BackingField, 0x4000, 0LL);
}


bool __fastcall ShopBuyItemListViewItem__get_IsIndefinitePeriodShowable(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_1BDBAD4(0LL, method);
  return ShopEntity__checkFlag(Shop_k__BackingField, 0x40000, 0LL);
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
    LOBYTE(Shop_k__BackingField) = ShopEntity__IsSoldOut(Shop_k__BackingField, 0LL);
  return (char)Shop_k__BackingField;
}


int32_t __fastcall ShopBuyItemListViewItem__get_ItemCount(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_1BDBAD4(0LL, method);
  return ShopEntity__GetItemCount(Shop_k__BackingField, 0LL);
}


int32_t __fastcall ShopBuyItemListViewItem__get_ItemId(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8

  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.id;
  else
    return 0;
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

  if ( (byte_4B40D30 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19073/*"error"*/, method);
    byte_4B40D30 = 1;
  }
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return ShopEntity__getName(Shop_k__BackingField, 0LL);
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.name;
  else
    return (System_String_o *)StringLiteral_19073/*"error"*/;
}


int32_t __fastcall ShopBuyItemListViewItem__get_Price(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0
  struct ItemEntity_o *itemEntity; // x8

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return ShopEntity__GetPrice(Shop_k__BackingField, 0LL);
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
    return ShopEntity__GetPriceIcon(Shop_k__BackingField, 0LL);
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
    LODWORD(Shop_k__BackingField) = ShopEntity__get_TargetId(Shop_k__BackingField, 0LL);
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
    sub_1BDBAD4(this, method);
  return Shop_k__BackingField->fields.infoMessage;
}


void __fastcall ShopBuyItemListViewItem__set_CommonConsumeEntities(
        ShopBuyItemListViewItem_o *this,
        CommonConsumeEntity_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CommonConsumeEntities_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._CommonConsumeEntities_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  const MethodInfo *v3; // x3

  this->fields._EventItemEntities_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._EventItemEntities_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  const MethodInfo *v3; // x3

  this->fields._Shop_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._Shop_k__BackingField, (int32_t)value, (int32_t)method, v3);
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