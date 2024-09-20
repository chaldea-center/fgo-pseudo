void __fastcall ShopBuyItemListViewItem___ctor(
        ShopBuyItemListViewItem_o *this,
        int32_t index,
        int32_t shopKind,
        ShopEntity_o *shopEntity,
        int64_t enterTime,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x2

  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields._ShopKind_k__BackingField = shopKind;
  this->fields._EnterTime_k__BackingField = enterTime;
  ShopBuyItemListViewItem__Modify(this, shopEntity, v10);
}


ItemEntity_array *__fastcall ShopBuyItemListViewItem__GetEventItemEntities(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  int32_t ItemCount; // w22
  __int64 v5; // x0
  ItemEntity_array *v6; // x20
  unsigned __int64 v7; // x21
  __int64 v8; // x24
  ServantStatusBattleListViewItem_o *i; // x22
  Il2CppObject *MasterData_object; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  ShopBuyItemListViewItem_o *v13; // x23
  __int64 v15; // x0

  if ( (byte_4A57733 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&ItemEntity___TypeInfo);
    this = (ShopBuyItemListViewItem_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57733 = 1;
  }
  if ( !shopEntity )
    goto LABEL_17;
  if ( ShopEntity__GetItemID(shopEntity, 0LL) < 1 )
    return 0LL;
  ItemCount = ShopEntity__GetItemCount(shopEntity, 0LL);
  v5 = sub_1B88658(ItemEntity___TypeInfo, (unsigned int)ItemCount);
  v6 = (ItemEntity_array *)v5;
  if ( ItemCount >= 1 )
  {
    v7 = 0LL;
    v8 = (unsigned int)ItemCount;
    for ( i = (ServantStatusBattleListViewItem_o *)(v5 + 32); ; i = (ServantStatusBattleListViewItem_o *)((char *)i + 8) )
    {
      this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__GetItemIDs(shopEntity, v7, 0LL);
      if ( !MasterData_object )
        break;
      this = (ShopBuyItemListViewItem_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                            (int32_t)this,
                                            (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v6 )
        break;
      v13 = this;
      if ( this )
      {
        this = (ShopBuyItemListViewItem_o *)sub_1B886EC(this, v6->obj.klass->_1.element_class);
        if ( !this )
        {
          v15 = sub_1B88830();
          sub_1B886D8(v15, 0LL);
        }
      }
      if ( v7 >= v6->max_length )
        sub_1B88814(this, shopEntity);
      i->klass = (ServantStatusBattleListViewItem_c *)v13;
      sub_1B88554(i, (int32_t)v13, v11, v12);
      if ( v8 == ++v7 )
        return v6;
    }
LABEL_17:
    sub_1B8880C(this, shopEntity);
  }
  return v6;
}


int32_t __fastcall ShopBuyItemListViewItem__GetEventPrice(
        ShopBuyItemListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_1B8880C(0LL, num);
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
  int32_t v8; // w3

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return ShopEntity__IsPreparation(Shop_k__BackingField, message, itemName, 0LL);
  *message = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)message, 0, (int32_t)itemName, (int32_t)method);
  *itemName = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)itemName, 0, v7, v8);
  return 1;
}


bool __fastcall ShopBuyItemListViewItem__GetIsRarePriShopPurchased(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  EventDetailEntity_o *v9; // [xsp+0h] [xbp-30h] BYREF
  UserEventEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A57734 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57734 = 1;
  }
  v9 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (Il2CppObject **)&v9,
          shopEntity->fields.eventId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 1;
  Instance = (DataManager_o *)v9;
  if ( !v9 )
LABEL_19:
    sub_1B8880C(Instance, v5);
  return !EventDetailEntity__IsTimeStatusRecord(v9, 0LL);
}


ItemEntity_o *__fastcall ShopBuyItemListViewItem__GetItemEntity(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  int32_t purchaseType; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // x20
  int32_t v6; // w1

  if ( (byte_4A57731 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    this = (ShopBuyItemListViewItem_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57731 = 1;
  }
  if ( !shopEntity )
    goto LABEL_15;
  purchaseType = shopEntity->fields.purchaseType;
  if ( purchaseType == 3 || purchaseType == 2 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopBuyItemListViewItem_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( this )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
        v6 = 2;
        return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 MasterData_object,
                                 v6,
                                 (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      }
    }
LABEL_15:
    sub_1B8880C(this, shopEntity);
  }
  if ( purchaseType == 1 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                          (DataManager_o *)this,
                                                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
      if ( MasterData_object )
      {
        v6 = (int)this;
        return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 MasterData_object,
                                 v6,
                                 (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4A57732 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    this = (ShopBuyItemListViewItem_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57732 = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( shopEntity->fields.purchaseType == 6 )
  {
    this = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
      this = (ShopBuyItemListViewItem_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
      if ( MasterData_object )
        return (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  (int32_t)this,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    }
LABEL_9:
    sub_1B8880C(this, shopEntity);
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
  bool v3; // w8
  int64_t Shop_k__BackingField; // x0
  int32_t TargetId; // w20
  UserPresentBoxMaster_o *v6; // x20
  System_String_o *v7; // x21
  System_String_o *v8; // x0
  int32_t v9; // w20
  System_String_o *v10; // x0
  int32_t v11; // w21
  UserPresentBoxMaster_o *v12; // x20
  Il2CppObject *Master_object; // x20
  System_Object_array *List; // x20
  System_Func_object__bool__o *v15; // x21
  UserPresentBoxMaster_o *v16; // x20
  struct ShopEntity_o *v18; // x8
  int v19; // w8
  int i; // w9
  __int64 v21; // x10
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A57739 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_UserEquipEntity___);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Func_UserEquipEntity__bool__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_ShopBuyItemListViewItem__IsPrepareTextOnMask_b__89_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57739 = 1;
  }
  v22 = 0;
  v3 = 0;
  if ( this->fields._ShopKind_k__BackingField == 6 )
  {
    Shop_k__BackingField = (int64_t)this->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_55;
    if ( *(_DWORD *)(Shop_k__BackingField + 48) == 19 )
    {
      TargetId = ShopEntity__get_TargetId((ShopEntity_o *)Shop_k__BackingField, 0LL);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsCommandCodeGet(TargetId, 0LL) )
        return 0;
      Shop_k__BackingField = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Shop_k__BackingField )
        goto LABEL_55;
      Shop_k__BackingField = (int64_t)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Shop_k__BackingField,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( !this->fields._Shop_k__BackingField )
        goto LABEL_55;
      v6 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
      Shop_k__BackingField = ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, 0LL);
      if ( !v6 )
        goto LABEL_55;
      if ( UserPresentBoxMaster__isExist(v6, 11, Shop_k__BackingField, 0LL) )
        return 0;
      Shop_k__BackingField = (int64_t)this->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_55;
    }
    if ( *(_DWORD *)(Shop_k__BackingField + 48) == 14 )
    {
      v22 = ShopEntity__get_TargetId((ShopEntity_o *)Shop_k__BackingField, 0LL);
      Shop_k__BackingField = (int64_t)System_Int32__ToString((int32_t)&v22, 0LL);
      if ( !Shop_k__BackingField )
        goto LABEL_55;
      v7 = (System_String_o *)Shop_k__BackingField;
      v8 = System_String__Substring_61726036(
             (System_String_o *)Shop_k__BackingField,
             0,
             *(_DWORD *)(Shop_k__BackingField + 16) - 2,
             0LL);
      v9 = System_Int32__Parse(v8, 0LL);
      v10 = System_String__Substring(v7, v7->fields._stringLength - 2, 0LL);
      v11 = System_Int32__Parse(v10, 0LL);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsReleaseCostume(v9, v11, 0LL) )
        return 0;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsCostumeGet(v9, v11, 0LL) )
        return 0;
      Shop_k__BackingField = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Shop_k__BackingField )
        goto LABEL_55;
      Shop_k__BackingField = (int64_t)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Shop_k__BackingField,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( !this->fields._Shop_k__BackingField )
        goto LABEL_55;
      v12 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
      Shop_k__BackingField = ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, 0LL);
      if ( !v12 )
        goto LABEL_55;
      if ( UserPresentBoxMaster__isExist(v12, 9, Shop_k__BackingField, 0LL) )
        return 0;
      Shop_k__BackingField = (int64_t)this->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_55;
    }
    if ( *(_DWORD *)(Shop_k__BackingField + 48) != 2 )
      goto LABEL_42;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEquipMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Shop_k__BackingField = NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_55;
    List = (System_Object_array *)UserEquipMaster__getList(
                                    (UserEquipMaster_o *)Master_object,
                                    Shop_k__BackingField,
                                    0LL);
    v15 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserEquipEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v15,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewItem__IsPrepareTextOnMask_b__89_0__,
      0LL);
    if ( !BasicHelper__Any_object__48672124(
            List,
            (System_Func_T__bool__o *)v15,
            (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_UserEquipEntity___) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Shop_k__BackingField = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
      if ( this->fields._Shop_k__BackingField )
      {
        v16 = (UserPresentBoxMaster_o *)Shop_k__BackingField;
        Shop_k__BackingField = ShopEntity__get_TargetId(this->fields._Shop_k__BackingField, 0LL);
        if ( v16 )
        {
          if ( UserPresentBoxMaster__isExist(v16, 5, Shop_k__BackingField, 0LL) )
            return 0;
          Shop_k__BackingField = (int64_t)this->fields._Shop_k__BackingField;
          if ( Shop_k__BackingField )
          {
LABEL_42:
            if ( *(_DWORD *)(Shop_k__BackingField + 48) == 16 )
            {
              Shop_k__BackingField = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Shop_k__BackingField )
                goto LABEL_55;
              Shop_k__BackingField = (int64_t)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Shop_k__BackingField,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
              v18 = this->fields._Shop_k__BackingField;
              if ( !v18 )
                goto LABEL_55;
              if ( !Shop_k__BackingField )
                goto LABEL_55;
              Shop_k__BackingField = (int64_t)ShopReleaseMaster__GetEntitiyList(
                                                (ShopReleaseMaster_o *)Shop_k__BackingField,
                                                v18->fields.id,
                                                0LL);
              v22 = 0;
              if ( !Shop_k__BackingField )
                goto LABEL_55;
              v19 = *(_DWORD *)(Shop_k__BackingField + 24);
              if ( v19 >= 1 )
              {
                for ( i = 0; i != v19; v22 = ++i )
                {
                  if ( v19 == i )
                    sub_1B88814(Shop_k__BackingField, method);
                  v21 = *(_QWORD *)(Shop_k__BackingField + 8LL * i + 32);
                  if ( !v21 )
                    goto LABEL_55;
                  if ( *(_DWORD *)(v21 + 20) == 67 )
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
      sub_1B8880C(Shop_k__BackingField, method);
    }
    return 0;
  }
  return v3;
}


void __fastcall ShopBuyItemListViewItem__Modify(
        ShopBuyItemListViewItem_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  ShopBuyItemListViewItem_o *v4; // x19
  ItemEntity_o *ItemEntity; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  ShopBuyItemListViewItem_o *v8; // x0
  const MethodInfo *v9; // x2
  bool IsRarePriShopPurchased; // w0
  int32_t v11; // w2
  int32_t v12; // w3
  ShopBuyItemListViewItem_o *v13; // x0
  const MethodInfo *v14; // x2
  int32_t v15; // w3
  struct ShopEntity_o *Shop_k__BackingField; // x8
  CommonConsumeEntity_array *CommonConsumeEntities; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  ServantStatusBattleListViewItem_o *p_EventItemEntities_k__BackingField; // x0
  ItemEntity_array *EventItemEntities; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int64_t Instance; // x0
  __int64 v25; // x1
  Il2CppObject *MasterData_object; // x21

  v4 = this;
  if ( (byte_4A57730 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    this = (ShopBuyItemListViewItem_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57730 = 1;
  }
  ItemEntity = ShopBuyItemListViewItem__GetItemEntity(this, shopEntity, method);
  v4->fields.itemEntity = ItemEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.itemEntity, (int32_t)ItemEntity, v6, v7);
  IsRarePriShopPurchased = ShopBuyItemListViewItem__GetIsRarePriShopPurchased(v8, shopEntity, v9);
  v4->fields._Shop_k__BackingField = shopEntity;
  v4->fields._IsRarePriShopPurchased_k__BackingField = IsRarePriShopPurchased;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._Shop_k__BackingField, (int32_t)shopEntity, v11, v12);
  Shop_k__BackingField = v4->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField && Shop_k__BackingField->fields.payType == 14 )
  {
    if ( shopEntity )
    {
      CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(shopEntity, 0LL);
      v4->fields._CommonConsumeEntities_k__BackingField = CommonConsumeEntities;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v4->fields._CommonConsumeEntities_k__BackingField,
        (int32_t)CommonConsumeEntities,
        v18,
        v19);
    }
    v4->fields._EventItemEntities_k__BackingField = 0LL;
    p_EventItemEntities_k__BackingField = (ServantStatusBattleListViewItem_o *)&v4->fields._EventItemEntities_k__BackingField;
  }
  else
  {
    EventItemEntities = ShopBuyItemListViewItem__GetEventItemEntities(v13, shopEntity, v14);
    v4->fields._EventItemEntities_k__BackingField = EventItemEntities;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&v4->fields._EventItemEntities_k__BackingField,
      (int32_t)EventItemEntities,
      v22,
      v23);
    v4->fields._CommonConsumeEntities_k__BackingField = 0LL;
    p_EventItemEntities_k__BackingField = (ServantStatusBattleListViewItem_o *)&v4->fields._CommonConsumeEntities_k__BackingField;
  }
  sub_1B88554(p_EventItemEntities_k__BackingField, 0, (int32_t)v14, v15);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    sub_1B8880C(Instance, v25);
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
  ShopEntity_o *v5; // x0
  __int64 v6; // x1
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
    sub_1B8880C(v5, v6);
  }
  if ( !sort )
    goto LABEL_16;
  if ( ListViewSort__GetFilter(sort, 52, 0LL) )
  {
    v5 = this->fields._Shop_k__BackingField;
    if ( !v5 )
      goto LABEL_16;
    if ( !ShopEntity__IsServantGet(v5, 0LL) )
      return 0;
  }
  if ( ListViewSort__GetFilter(sort, 53, 0LL) )
  {
    v5 = this->fields._Shop_k__BackingField;
    if ( !v5 )
      goto LABEL_16;
    if ( ShopEntity__IsServantGet(v5, 0LL) )
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
  int32_t v5; // w2
  int32_t v6; // w3

  if ( !this->fields._Shop_k__BackingField )
    sub_1B8880C(this, message);
  *message = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)message, 0, (int32_t)itemName, (int32_t)method);
  *itemName = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)itemName, 0, v5, v6);
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
  if ( (byte_4A5773A & 1) == 0 )
  {
    this = (ShopBuyItemListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5773A = 1;
  }
  if ( !equip )
    goto LABEL_8;
  v6 = *(_QWORD *)&equip->fields.equipId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&equip->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  this = (ShopBuyItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
  Shop_k__BackingField = v4->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
LABEL_8:
    sub_1B8880C(this, equip);
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
  struct ItemEntity_o *itemEntity; // x8

  if ( (byte_4A57736 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10819/*"QP_UNIT"*/);
    byte_4A57736 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity || itemEntity->fields.type != 1 )
    return ShopBuyItemListViewItem__get_NameText(this, method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10819/*"QP_UNIT"*/, 0LL);
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

  if ( (byte_4A57737 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A57737 = 1;
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
      if ( !byte_4A56A2D )
      {
        sub_1B885B0(&LocalizationManager_TypeInfo);
        byte_4A56A2D = 1;
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
  struct ShopEntity_o *Shop_k__BackingField; // x8
  int32_t purchaseType; // w8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  ShopEntity_o *v7; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  int32_t v9; // w2
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A57738 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57738 = 1;
  }
  entity = 0LL;
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    return 0;
  purchaseType = Shop_k__BackingField->fields.purchaseType;
  if ( purchaseType != 8 && purchaseType != 4 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = this->fields._Shop_k__BackingField;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( v7 )
  {
    Instance = (Il2CppObject *)ShopEntity__get_TargetId(v7, 0LL);
    v9 = (int)Instance;
    if ( !v8 )
LABEL_16:
      sub_1B8880C(Instance, v6);
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
         (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    sub_1B8880C(0LL, method);
  return ShopEntity__checkFlag(Shop_k__BackingField, 0x4000, 0LL);
}


bool __fastcall ShopBuyItemListViewItem__get_IsIndefinitePeriodShowable(
        ShopBuyItemListViewItem_o *this,
        const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x0

  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A57735 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19052/*"error"*/);
    byte_4A57735 = 1;
  }
  Shop_k__BackingField = this->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
    return ShopEntity__getName(Shop_k__BackingField, 0LL);
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.name;
  else
    return (System_String_o *)StringLiteral_19052/*"error"*/;
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
    sub_1B8880C(this, method);
  return Shop_k__BackingField->fields.infoMessage;
}


void __fastcall ShopBuyItemListViewItem__set_CommonConsumeEntities(
        ShopBuyItemListViewItem_o *this,
        CommonConsumeEntity_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._CommonConsumeEntities_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._CommonConsumeEntities_k__BackingField,
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
  int32_t v3; // w3

  this->fields._EventItemEntities_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventItemEntities_k__BackingField,
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
  int32_t v3; // w3

  this->fields._Shop_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._Shop_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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