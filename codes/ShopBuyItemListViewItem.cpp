void __fastcall ShopBuyItemListViewItem___ctor(
        ShopBuyItemListViewItem_o *this,
        int32_t index,
        int32_t shopKind,
        ShopEntity_o *shopEntity,
        int64_t enterTime,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x2

  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t ItemCount; // w22
  __int64 v11; // x0
  ItemEntity_array *v12; // x20
  unsigned __int64 v13; // x21
  __int64 v14; // x24
  PartyOrganizationUtility_o *i; // x22
  Il2CppObject *MasterData_object; // x23
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  ShopBuyItemListViewItem_o *v23; // x23
  __int64 v25; // x0

  if ( (byte_4B126A2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity, method);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&ItemEntity___TypeInfo, v6, v7);
    this = (ShopBuyItemListViewItem_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B126A2 = 1;
  }
  if ( !shopEntity )
    goto LABEL_17;
  if ( ShopEntity__GetItemID(shopEntity, 0LL) < 1 )
    return 0LL;
  ItemCount = ShopEntity__GetItemCount(shopEntity, 0LL);
  v11 = sub_1BCA888(ItemEntity___TypeInfo, (unsigned int)ItemCount);
  v12 = (ItemEntity_array *)v11;
  if ( ItemCount >= 1 )
  {
    v13 = 0LL;
    v14 = (unsigned int)ItemCount;
    for ( i = (PartyOrganizationUtility_o *)(v11 + 32); ; i = (PartyOrganizationUtility_o *)((char *)i + 8) )
    {
      this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__GetItemIDs(shopEntity, v13, 0LL);
      if ( !MasterData_object )
        break;
      this = (ShopBuyItemListViewItem_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                            (int32_t)this,
                                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v12 )
        break;
      v23 = this;
      if ( this )
      {
        this = (ShopBuyItemListViewItem_o *)sub_1BCA91C(this, v12->obj.klass->_1.element_class);
        if ( !this )
        {
          v25 = sub_1BCAA60();
          sub_1BCA908(v25, 0LL);
        }
      }
      if ( v13 >= v12->max_length )
        sub_1BCAA44(this, shopEntity);
      i->klass = (PartyOrganizationUtility_c *)v23;
      sub_1BCA784(i, (int64_t)v23, v17, v18, v19, v20, v21, v22);
      if ( v14 == ++v13 )
        return v12;
    }
LABEL_17:
    sub_1BCAA3C(this, shopEntity);
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopBuyItemListViewItem__GetEventPrice(
        ShopBuyItemListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_1BCAA3C(0LL, *(_QWORD *)&num);
  return ShopEntity__GetPrices(Shop_k__BackingField, num, 0LL);
}


bool __fastcall ShopBuyItemListViewItem__GetIsPreparation(
        ShopBuyItemListViewItem_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ShopEntity_o *Shop_k__BackingField; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return ShopEntity__IsPreparation(Shop_k__BackingField, message, itemName, 0LL);
  *message = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)message, 0LL, (int64_t)itemName, (int32_t)method, v4, v5, v6, v7);
  *itemName = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)itemName, 0LL, v11, v12, v13, v14, v15, v16);
  return 1;
}


bool __fastcall ShopBuyItemListViewItem__GetIsRarePriShopPurchased(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x20
  EventDetailEntity_o *v18; // [xsp+0h] [xbp-30h] BYREF
  UserEventEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B126A3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, shopEntity, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B126A3 = 1;
  }
  v18 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !shopEntity || !MasterData_object )
    goto LABEL_19;
  if ( !UserEventMaster__TryGetEntity(
          (UserEventMaster_o *)MasterData_object,
          &entity,
          (int64_t)Instance,
          shopEntity->fields.eventId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_19;
  if ( !UserEventEntity__getEventFlag(entity, 1, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (Il2CppObject **)&v18,
          shopEntity->fields.eventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 1;
  Instance = (DataManager_o *)v18;
  if ( !v18 )
LABEL_19:
    sub_1BCAA3C(Instance, v13);
  return !EventDetailEntity__IsTimeStatusRecord(v18, 0LL);
}


ItemEntity_o *__fastcall ShopBuyItemListViewItem__GetItemEntity(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t purchaseType; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // x20
  int32_t v10; // w1

  if ( (byte_4B126A0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity, method);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4, v5);
    this = (ShopBuyItemListViewItem_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B126A0 = 1;
  }
  if ( !shopEntity )
    goto LABEL_15;
  purchaseType = shopEntity->fields.purchaseType;
  if ( purchaseType == 3 || purchaseType == 2 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopBuyItemListViewItem_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( this )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
        v10 = 2;
        return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 MasterData_object,
                                 v10,
                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      }
    }
LABEL_15:
    sub_1BCAA3C(this, shopEntity);
  }
  if ( purchaseType == 1 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                          (DataManager_o *)this,
                                                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
      if ( MasterData_object )
      {
        v10 = (int)this;
        return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 MasterData_object,
                                 v10,
                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4B126A1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, shopEntity, method);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4, v5);
    this = (ShopBuyItemListViewItem_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B126A1 = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( shopEntity->fields.purchaseType == 6 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
      if ( MasterData_object )
        return (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  (int32_t)this,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    }
LABEL_9:
    sub_1BCAA3C(this, shopEntity);
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


bool __fastcall ShopBuyItemListViewItem__IsPrepareTextOnMask(ShopBuyItemListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  bool v24; // w8
  int64_t Shop_k__BackingField; // x0
  __int64 v26; // x1
  int32_t TargetId; // w20
  UserPresentBoxMaster_o *v28; // x20
  System_String_o *v29; // x21
  System_String_o *v30; // x0
  int32_t v31; // w20
  System_String_o *v32; // x0
  __int64 v33; // x1
  int32_t v34; // w21
  __int64 v35; // x1
  UserPresentBoxMaster_o *v36; // x20
  __int64 v37; // x1
  Il2CppObject *Master_object; // x20
  System_Object_array *List; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Func_object__bool__o *v43; // x21
  __int64 v44; // x1
  UserPresentBoxMaster_o *v45; // x20
  struct ShopEntity_o *v47; // x8
  int v48; // w8
  int i; // w9
  __int64 v50; // x10
  int32_t v51; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B126A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_UserEquipEntity___, method, v2);
    sub_1BCA7E0(&CondType_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEquipMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Func_UserEquipEntity__bool__TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_ShopBuyItemListViewItem__IsPrepareTextOnMask_b__89_0__, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    byte_4B126A8 = 1;
  }
  v51 = 0;
  v24 = 0;
  if ( this->fields._ShopKind_k__BackingField == 6 )
  {
    Shop_k__BackingField = (int64_t)this->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_55;
    if ( *(_DWORD *)(Shop_k__BackingField + 48) == 19 )
    {
      TargetId = ShopEntity__get_TargetId((ShopEntity_o *)Shop_k__BackingField, 0LL);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v26);
      if ( CondType__IsCommandCodeGet(TargetId, 0LL) )
        return 0;
      Shop_k__BackingField = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Shop_k__BackingField )
        goto LABEL_55;
      Shop_k__BackingField = (int64_t)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Shop_k__BackingField,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( !this->fields._Shop_k__BackingField )
        goto LABEL_55;
      v28 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
      Shop_k__BackingField = ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, 0LL);
      if ( !v28 )
        goto LABEL_55;
      if ( UserPresentBoxMaster__isExist(v28, 11, Shop_k__BackingField, 0LL) )
        return 0;
      Shop_k__BackingField = (int64_t)this->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_55;
    }
    if ( *(_DWORD *)(Shop_k__BackingField + 48) == 14 )
    {
      v51 = ShopEntity__get_TargetId((ShopEntity_o *)Shop_k__BackingField, 0LL);
      Shop_k__BackingField = (int64_t)System_Int32__ToString((int32_t)&v51, 0LL);
      if ( !Shop_k__BackingField )
        goto LABEL_55;
      v29 = (System_String_o *)Shop_k__BackingField;
      v30 = System_String__Substring_62420224(
              (System_String_o *)Shop_k__BackingField,
              0,
              *(_DWORD *)(Shop_k__BackingField + 16) - 2,
              0LL);
      v31 = System_Int32__Parse(v30, 0LL);
      v32 = System_String__Substring(v29, v29->fields._stringLength - 2, 0LL);
      v34 = System_Int32__Parse(v32, 0LL);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v33);
      if ( CondType__IsReleaseCostume(v31, v34, 0LL) )
        return 0;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v35);
      if ( CondType__IsCostumeGet(v31, v34, 0LL) )
        return 0;
      Shop_k__BackingField = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Shop_k__BackingField )
        goto LABEL_55;
      Shop_k__BackingField = (int64_t)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Shop_k__BackingField,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( !this->fields._Shop_k__BackingField )
        goto LABEL_55;
      v36 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
      Shop_k__BackingField = ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, 0LL);
      if ( !v36 )
        goto LABEL_55;
      if ( UserPresentBoxMaster__isExist(v36, 9, Shop_k__BackingField, 0LL) )
        return 0;
      Shop_k__BackingField = (int64_t)this->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_55;
    }
    if ( *(_DWORD *)(Shop_k__BackingField + 48) != 2 )
      goto LABEL_42;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEquipMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v37);
    Shop_k__BackingField = NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_55;
    List = (System_Object_array *)UserEquipMaster__getList(
                                    (UserEquipMaster_o *)Master_object,
                                    Shop_k__BackingField,
                                    0LL);
    v43 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_UserEquipEntity__bool__TypeInfo, v40, v41, v42);
    System_Func_object__bool____ctor(
      v43,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewItem__IsPrepareTextOnMask_b__89_0__,
      0LL);
    if ( !BasicHelper__Any_object__49274176(
            List,
            (System_Func_T__bool__o *)v43,
            (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_UserEquipEntity___) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v44);
      Shop_k__BackingField = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
      if ( this->fields._Shop_k__BackingField )
      {
        v45 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
        Shop_k__BackingField = ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, 0LL);
        if ( v45 )
        {
          if ( UserPresentBoxMaster__isExist(v45, 5, Shop_k__BackingField, 0LL) )
            return 0;
          Shop_k__BackingField = (int64_t)this->fields._Shop_k__BackingField;
          if ( Shop_k__BackingField )
          {
LABEL_42:
            if ( *(_DWORD *)(Shop_k__BackingField + 48) == 16 )
            {
              Shop_k__BackingField = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Shop_k__BackingField )
                goto LABEL_55;
              Shop_k__BackingField = (int64_t)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Shop_k__BackingField,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
              v47 = this->fields._Shop_k__BackingField;
              if ( !v47 )
                goto LABEL_55;
              if ( !Shop_k__BackingField )
                goto LABEL_55;
              Shop_k__BackingField = (int64_t)ShopReleaseMaster__GetEntitiyList(
                                                (ShopReleaseMaster_o *)Shop_k__BackingField,
                                                v47->fields.id,
                                                0LL);
              v51 = 0;
              if ( !Shop_k__BackingField )
                goto LABEL_55;
              v48 = *(_DWORD *)(Shop_k__BackingField + 24);
              if ( v48 >= 1 )
              {
                for ( i = 0; i != v48; v51 = ++i )
                {
                  if ( v48 == i )
                    sub_1BCAA44(Shop_k__BackingField, method);
                  v50 = *(_QWORD *)(Shop_k__BackingField + 8LL * i + 32);
                  if ( !v50 )
                    goto LABEL_55;
                  if ( *(_DWORD *)(v50 + 20) == 67 )
                    return 0;
                }
              }
              Shop_k__BackingField = (int64_t)this->fields._Shop_k__BackingField;
              if ( !Shop_k__BackingField )
                goto LABEL_55;
            }
            return !ShopEntity__GetIsAlreadyInPossessionNotHaving((ShopEntity_o *)Shop_k__BackingField, 0, 0LL);
          }
        }
      }
LABEL_55:
      sub_1BCAA3C(Shop_k__BackingField, method);
    }
    return 0;
  }
  return v24;
}


void __fastcall ShopBuyItemListViewItem__Modify(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  ShopBuyItemListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ItemEntity_o *ItemEntity; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  ShopBuyItemListViewItem_o *v16; // x0
  const MethodInfo *v17; // x2
  bool IsRarePriShopPurchased; // w0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  ShopBuyItemListViewItem_o *v25; // x0
  const MethodInfo *v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct ShopEntity_o *Shop_k__BackingField; // x8
  CommonConsumeEntity_array *CommonConsumeEntities; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  PartyOrganizationUtility_o *p_EventItemEntities_k__BackingField; // x0
  ItemEntity_array *EventItemEntities; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t Instance; // x0
  __int64 v49; // x1
  __int64 v50; // x1
  Il2CppObject *MasterData_object; // x21

  v4 = this;
  if ( (byte_4B1269F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, shopEntity, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    this = (ShopBuyItemListViewItem_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B1269F = 1;
  }
  ItemEntity = ShopBuyItemListViewItem__GetItemEntity(this, shopEntity, method);
  v4->fields.itemEntity = ItemEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.itemEntity, (int64_t)ItemEntity, v10, v11, v12, v13, v14, v15);
  IsRarePriShopPurchased = ShopBuyItemListViewItem__GetIsRarePriShopPurchased(v16, shopEntity, v17);
  v4->fields._Shop_k__BackingField = shopEntity;
  v4->fields._IsRarePriShopPurchased_k__BackingField = IsRarePriShopPurchased;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields._Shop_k__BackingField,
    (int64_t)shopEntity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  Shop_k__BackingField = v4->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField && Shop_k__BackingField->fields.payType == 14 )
  {
    if ( shopEntity )
    {
      CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(shopEntity, 0LL);
      v4->fields._CommonConsumeEntities_k__BackingField = CommonConsumeEntities;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields._CommonConsumeEntities_k__BackingField,
        (int64_t)CommonConsumeEntities,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    v4->fields._EventItemEntities_k__BackingField = 0LL;
    p_EventItemEntities_k__BackingField = (PartyOrganizationUtility_o *)&v4->fields._EventItemEntities_k__BackingField;
  }
  else
  {
    EventItemEntities = ShopBuyItemListViewItem__GetEventItemEntities(v25, shopEntity, v26);
    v4->fields._EventItemEntities_k__BackingField = EventItemEntities;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v4->fields._EventItemEntities_k__BackingField,
      (int64_t)EventItemEntities,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    v4->fields._CommonConsumeEntities_k__BackingField = 0LL;
    p_EventItemEntities_k__BackingField = (PartyOrganizationUtility_o *)&v4->fields._CommonConsumeEntities_k__BackingField;
  }
  sub_1BCA784(p_EventItemEntities_k__BackingField, 0LL, (int64_t)v26, v27, v28, v29, v30, v31);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v50);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !shopEntity
    || !MasterData_object
    || (Instance = (int64_t)UserShopMaster__GetEntityDefinitely(
                              (UserShopMaster_o *)MasterData_object,
                              Instance,
                              shopEntity->fields.baseShopId,
                              0LL)) == 0 )
  {
LABEL_16:
    sub_1BCAA3C(Instance, v49);
  }
  v4->fields._TotalNum_k__BackingField = *(_DWORD *)(Instance + 28);
  v4->fields._IsNotHavingShopItemReceived_k__BackingField = ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0LL);
  v4->fields._IsAlreadyInPossession_k__BackingField = ShopEntity__GetIsAlreadyInPossessionNotHaving(shopEntity, 0, 0LL);
}


bool __fastcall ShopBuyItemListViewItem__SetSortValue(
        ShopBuyItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v14; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8
  FilterKindList_c *v17; // x0
  struct ItemEntity_o *itemEntity; // x8
  struct ItemEntity_o *v19; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1269E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, sort, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v11, v12);
    byte_4B1269E = 1;
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
      v17 = FilterKindList_TypeInfo;
      if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v14);
        v17 = FilterKindList_TypeInfo;
      }
      ClassFilterKindList = (System_Collections_Generic_List_T__o *)v17->static_fields->ClassFilterKindList;
      if ( ClassFilterKindList )
      {
        ClassFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        ClassFilterKindList,
                                                                        (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
            ClassFilterKindList = (System_Collections_Generic_List_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
            v19 = this->fields.itemEntity;
            if ( v19 )
            {
              if ( ClassFilterKindList )
                return !DataMasterBase_object__object__int___TryGetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)ClassFilterKindList,
                          &entity,
                          v19->fields.value,
                          (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__)
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
    sub_1BCAA3C(ClassFilterKindList, v14);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( !this->fields._Shop_k__BackingField )
    sub_1BCAA3C(this, message);
  *message = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)message, 0LL, (int64_t)itemName, (int32_t)method, v4, v5, v6, v7);
  *itemName = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)itemName, 0LL, v9, v10, v11, v12, v13, v14);
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
  if ( (byte_4B126A9 & 1) == 0 )
  {
    this = (ShopBuyItemListViewItem_o *)sub_1BCA7E0(
                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                          equip,
                                          method);
    byte_4B126A9 = 1;
  }
  if ( !equip )
    goto LABEL_8;
  v6 = *(_QWORD *)&equip->fields.equipId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&equip->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equip);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  this = (ShopBuyItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v9, 0LL);
  Shop_k__BackingField = v4->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
LABEL_8:
    sub_1BCAA3C(this, equip);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ItemEntity_o *itemEntity; // x8

  if ( (byte_4B126A5 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10955/*"QP_UNIT"*/, v4, v5);
    byte_4B126A5 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity || itemEntity->fields.type != 1 )
    return ShopBuyItemListViewItem__get_NameText(this, method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10955/*"QP_UNIT"*/, 0LL);
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
  __int64 v2; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x8
  System_String_o **p_detail; // x8
  struct ItemEntity_o *itemEntity; // x8
  LocalizationManager_c *v7; // x0

  if ( (byte_4B126A6 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B126A6 = 1;
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      if ( !byte_4B1194D )
      {
        sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
        byte_4B1194D = 1;
      }
      v7 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
        v7 = LocalizationManager_TypeInfo;
      }
      itemEntity = (struct ItemEntity_o *)v7->static_fields;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x8
  int32_t purchaseType; // w8
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  ShopEntity_o *v12; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x19
  int32_t v14; // w2
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B126A7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B126A7 = 1;
  }
  entity = 0LL;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    return 0;
  purchaseType = Shop_k__BackingField->fields.purchaseType;
  if ( purchaseType != 8 && purchaseType != 4 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = this->fields._Shop_k__BackingField;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( v12 )
  {
    Instance = (Il2CppObject *)ShopEntity__get_TargetId(v12, 0LL);
    v14 = (int)Instance;
    if ( !v13 )
LABEL_16:
      sub_1BCAA3C(Instance, v11);
  }
  else
  {
    v14 = 0;
    if ( !Instance )
      goto LABEL_16;
  }
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v13,
         &entity,
         v14,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    sub_1BCAA3C(0LL, method);
  return ShopEntity__checkFlag(Shop_k__BackingField, 0x4000, 0LL);
}


bool __fastcall ShopBuyItemListViewItem__get_IsIndefinitePeriodShowable(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  ShopEntity_o *Shop_k__BackingField; // x0
  struct ItemEntity_o *itemEntity; // x8

  if ( (byte_4B126A4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, method, v2);
    byte_4B126A4 = 1;
  }
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return ShopEntity__getName(Shop_k__BackingField, 0LL);
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.name;
  else
    return (System_String_o *)StringLiteral_19249/*"error"*/;
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
    sub_1BCAA3C(this, method);
  return Shop_k__BackingField->fields.infoMessage;
}


void __fastcall ShopBuyItemListViewItem__set_CommonConsumeEntities(
        ShopBuyItemListViewItem_o *this,
        CommonConsumeEntity_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CommonConsumeEntities_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CommonConsumeEntities_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._EventItemEntities_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EventItemEntities_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Shop_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Shop_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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