System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetAddNewLine(
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o **v4; // x8

  if ( (byte_4A05333 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_43/*"\n"*/, method);
    sub_1B686D4(&StringLiteral_1/*""*/, v3);
    byte_4A05333 = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    v4 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v4 = (System_String_o **)&StringLiteral_43/*"\n"*/;
  return *v4;
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
        ShopEntity_o *entity,
        ItemEntity_o *itemEntity,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopEntity_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t type; // w8
  int32_t monitor; // w21
  UserGameEntity_o *SelfUserGame; // x21
  System_String_o *v17; // x22
  Il2CppObject *NumberFormat; // x19
  int32_t qp; // w0
  Il2CppObject *MasterData_object; // x21
  int64_t UserId; // x22
  Il2CppObject *v22; // x2

  v6 = entity;
  if ( (byte_4A0532E & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserItemMaster___, itemEntity);
    sub_1B686D4(&LocalizationManager_TypeInfo, v7);
    sub_1B686D4(&NetworkManager_TypeInfo, v8);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B686D4(&StringLiteral_3091/*"BUY_AFTER_QP_NUM"*/, v10);
    sub_1B686D4(&StringLiteral_3092/*"BUY_AFTER_USER_ITEM_NUM"*/, v11);
    entity = (ShopEntity_o *)sub_1B686D4(&StringLiteral_1/*""*/, v12);
    byte_4A0532E = 1;
  }
  if ( !v6 )
    goto LABEL_35;
  if ( v6->fields.purchaseType != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !itemEntity )
    goto LABEL_35;
  type = itemEntity->fields.type;
  if ( type > 4 )
  {
    switch ( type )
    {
      case 5:
        entity = (ShopEntity_o *)UserGameMaster__getSelfUserGame(0LL);
        if ( entity )
        {
          monitor = (int32_t)entity[1].monitor;
          goto LABEL_31;
        }
        goto LABEL_35;
      case 13:
        entity = (ShopEntity_o *)UserGameMaster__getSelfUserGame(0LL);
        if ( entity )
        {
          monitor = UserGameEntity__GetFriendPoint((UserGameEntity_o *)entity, 0LL);
          goto LABEL_31;
        }
        goto LABEL_35;
      case 22:
        entity = (ShopEntity_o *)UserGameMaster__getSelfUserGame(0LL);
        if ( entity )
        {
          monitor = HIDWORD(entity[1].monitor);
LABEL_31:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3092/*"BUY_AFTER_USER_ITEM_NUM"*/, 0LL);
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(
                                           monitor - v6->fields.setNum * buyCount,
                                           0LL);
          qp = monitor;
          goto LABEL_34;
        }
        goto LABEL_35;
    }
    goto LABEL_25;
  }
  if ( type != 1 )
  {
    if ( type == 2 )
    {
      entity = (ShopEntity_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( entity )
      {
        monitor = (int32_t)entity[1].klass;
        goto LABEL_31;
      }
LABEL_35:
      sub_1B68930(entity, itemEntity);
    }
LABEL_25:
    entity = (ShopEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( entity )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)entity,
                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      entity = (ShopEntity_o *)ShopEntity__get_TargetId(v6, 0LL);
      if ( MasterData_object )
      {
        entity = (ShopEntity_o *)UserItemMaster__GetEntityDefinitely(
                                   (UserItemMaster_o *)MasterData_object,
                                   UserId,
                                   (int32_t)entity,
                                   0LL);
        if ( entity )
        {
          monitor = *(&entity->fields.eventId + 1);
          goto LABEL_31;
        }
      }
    }
    goto LABEL_35;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  entity = (ShopEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3091/*"BUY_AFTER_QP_NUM"*/, 0LL);
  if ( !SelfUserGame )
    goto LABEL_35;
  v17 = (System_String_o *)entity;
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(
                                   SelfUserGame->fields.qp - v6->fields.setNum * buyCount,
                                   0LL);
  qp = SelfUserGame->fields.qp;
LABEL_34:
  v22 = (Il2CppObject *)LocalizationManager__GetNumberFormat(qp, 0LL);
  return System_String__Format_61433840(v17, NumberFormat, v22, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessage(
        ShopEntity_o *entity,
        int32_t buyCount,
        const MethodInfo *method)
{
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
  __int64 Instance; // x0
  __int64 v16; // x1
  SetItemMaster_o *v17; // x19
  SetItemEntity_array *List; // x0
  System_String_o *v19; // x19
  SetItemEntity_array *v20; // x22
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v22; // x25
  ShopEntity_o *v23; // x2
  const MethodInfo *v24; // x6
  __int64 v25; // x24
  __int64 v26; // x8
  unsigned __int64 v27; // x28
  System_String_o *v28; // x24
  SetItemEntity_o *v29; // x26
  System_String_o *RequestResultPresentBoxMessage; // x0
  const MethodInfo *v31; // x5
  System_String_o *UserItemMessage; // x0
  System_String_o *v34; // x1
  System_String_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3

  if ( (byte_4A05330 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&buyCount);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B686D4(&Method_DataManager_GetMasterData_SetItemMaster___, v6);
    sub_1B686D4(&Method_DataManager_GetMasterData_ShopDetailMaster___, v7);
    sub_1B686D4(&LocalizationManager_TypeInfo, v8);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B686D4(&string___TypeInfo, v10);
    sub_1B686D4(&StringLiteral_11915/*"SET_ITEM_GET_SERVANT_MSG"*/, v11);
    sub_1B686D4(&StringLiteral_44/*"\n\n"*/, v12);
    sub_1B686D4(&StringLiteral_1/*""*/, v13);
    sub_1B686D4(&StringLiteral_11914/*"SET_ITEM_GET_ITEM_MSG"*/, v14);
    byte_4A05330 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_SetItemMaster___);
  if ( !entity )
    goto LABEL_42;
  v17 = (SetItemMaster_o *)Instance;
  Instance = ShopEntity__get_TargetId(entity, 0LL);
  if ( !v17 )
    goto LABEL_42;
  List = SetItemMaster__GetList(v17, Instance, 0LL);
  v19 = (System_String_o *)StringLiteral_1/*""*/;
  v20 = List;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  v22 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)ShopDetailMaster__getShopDetailEntity((ShopDetailMaster_o *)Instance, entity->fields.id, 0LL);
  if ( Instance )
  {
    v25 = Instance;
    Instance = System_String__IsNullOrEmpty(*(System_String_o **)(Instance + 40), 0LL);
    if ( (Instance & 1) == 0 )
      return *(System_String_o **)(v25 + 40);
  }
  if ( !v20 )
    goto LABEL_42;
  v26 = *(_QWORD *)&v20->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    v28 = v19;
    while ( v27 < (unsigned int)v26 )
    {
      v29 = v20->m_Items[v27];
      RequestResultPresentBoxMessage = ShopRequestResultDialogMessageMaker__GetRequestResultPresentBoxMessage(
                                         (ServantMaster_o *)MasterData_object,
                                         (ItemMaster_o *)v22,
                                         v23,
                                         v29,
                                         v28,
                                         buyCount,
                                         v24);
      v28 = System_String__Concat_61419468(v28, RequestResultPresentBoxMessage, 0LL);
      UserItemMessage = ShopRequestResultDialogMessageMaker__GetRequestResultGetUserItemMessage(
                          (ItemMaster_o *)v22,
                          entity,
                          v29,
                          v19,
                          buyCount,
                          v31);
      Instance = (__int64)System_String__Concat_61419468(v19, UserItemMessage, 0LL);
      LODWORD(v26) = v20->max_length;
      ++v27;
      v19 = (System_String_o *)Instance;
      if ( (__int64)v27 >= (int)v26 )
        goto LABEL_20;
    }
LABEL_41:
    sub_1B68938(Instance, v16);
  }
  v28 = v19;
LABEL_20:
  if ( !System_String__IsNullOrEmpty(v28, 0LL) && !System_String__IsNullOrEmpty(v19, 0LL) )
  {
    Instance = sub_1B6877C(string___TypeInfo, 5LL);
    if ( Instance )
    {
      v38 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_41;
      *(_QWORD *)(Instance + 32) = v28;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(Instance + 32), (int32_t)v28, v36, v37);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11915/*"SET_ITEM_GET_SERVANT_MSG"*/, 0LL);
      if ( *(_DWORD *)(v38 + 24) <= 1u )
        goto LABEL_41;
      *(_QWORD *)(v38 + 40) = Instance;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v38 + 40), Instance, v39, v40);
      if ( *(_DWORD *)(v38 + 24) <= 2u )
        goto LABEL_41;
      v43 = StringLiteral_44/*"\n\n"*/;
      *(_QWORD *)(v38 + 48) = StringLiteral_44/*"\n\n"*/;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v38 + 48), v43, v41, v42);
      if ( *(_DWORD *)(v38 + 24) <= 3u )
        goto LABEL_41;
      *(_QWORD *)(v38 + 56) = v19;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v38 + 56), (int32_t)v19, v44, v45);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11914/*"SET_ITEM_GET_ITEM_MSG"*/, 0LL);
      if ( *(_DWORD *)(v38 + 24) <= 4u )
        goto LABEL_41;
      *(_QWORD *)(v38 + 64) = Instance;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v38 + 64), Instance, v46, v47);
      return System_String__Concat_61432996((System_String_array *)v38, 0LL);
    }
LABEL_42:
    sub_1B68930(Instance, v16);
  }
  if ( System_String__IsNullOrEmpty(v28, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(v19, 0LL) )
      return (System_String_o *)StringLiteral_1/*""*/;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_11914/*"SET_ITEM_GET_ITEM_MSG"*/, 0LL);
    v35 = v19;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_11915/*"SET_ITEM_GET_SERVANT_MSG"*/, 0LL);
    v35 = v28;
  }
  return System_String__Concat_61419468(v35, v34, 0LL);
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageNormal(
        ShopBuyItemListViewItem_o *item,
        ShopEntity_o *entity,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopBuyItemListViewItem_o *v6; // x22
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *BulkNameText; // x19
  ShopBuyItemListViewItem_o *v14; // x19
  Il2CppObject *NumberFormat; // x23
  ShopDetailEntity_o *ShopDetailEntity; // x0
  ShopDetailEntity_o *v17; // x24
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  _BOOL4 v21; // w20
  __int64 *v22; // x8
  System_String_o *v24; // x0
  bool isQuest; // [xsp+4h] [xbp-4Ch] BYREF
  bool isSend; // [xsp+8h] [xbp-48h] BYREF
  bool isTake; // [xsp+Ch] [xbp-44h] BYREF

  v6 = item;
  if ( (byte_4A0532C & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ShopDetailMaster___, entity);
    sub_1B686D4(&LocalizationManager_TypeInfo, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B686D4(&StringLiteral_11980/*"SHOP_BUY_SUCCESS_SEND_PRESENT_BOX"*/, v9);
    sub_1B686D4(&StringLiteral_11977/*"SHOP_BUY_SUCCESS"*/, v10);
    sub_1B686D4(&StringLiteral_11979/*"SHOP_BUY_SUCCESS_SEND_MIX"*/, v11);
    item = (ShopBuyItemListViewItem_o *)sub_1B686D4(&StringLiteral_11978/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v12);
    byte_4A0532C = 1;
  }
  isTake = 0;
  isSend = 0;
  isQuest = 0;
  if ( !v6 )
    goto LABEL_31;
  ShopBuyItemListViewItem__GetSendType(v6, &isTake, &isSend, &isQuest, 0LL);
  BulkNameText = ShopBuyItemListViewItem__get_BulkNameText(v6, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  item = (ShopBuyItemListViewItem_o *)LocalizationManager__ReplaceCommonTag(BulkNameText, 0, 0LL);
  if ( !entity
    || (v14 = item,
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(entity->fields.setNum * buyCount, 0LL),
        (item = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (item = (ShopBuyItemListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)item,
                                              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ShopDetailMaster___)) == 0LL )
  {
LABEL_31:
    sub_1B68930(item, entity);
  }
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity((ShopDetailMaster_o *)item, entity->fields.id, 0LL);
  if ( ShopDetailEntity )
  {
    v17 = ShopDetailEntity;
    if ( !System_String__IsNullOrEmpty(ShopDetailEntity->fields.afterMessage, 0LL) )
      return v17->fields.afterMessage;
  }
  if ( ShopBuyItemListViewItem__get_IsExchangeQP(v6, 0LL) )
  {
    v18 = System_String__Format((System_String_o *)v14, NumberFormat, 0LL);
LABEL_18:
    v14 = (ShopBuyItemListViewItem_o *)v18;
    goto LABEL_19;
  }
  if ( NumberFormat && entity->fields.setNum * buyCount >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11978/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v20 = System_String__Format(v19, NumberFormat, 0LL);
    v18 = System_String__Concat_61419468((System_String_o *)v14, v20, 0LL);
    goto LABEL_18;
  }
LABEL_19:
  v21 = isSend;
  if ( isSend && isTake )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = &StringLiteral_11979/*"SHOP_BUY_SUCCESS_SEND_MIX"*/;
    goto LABEL_29;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v21 )
      goto LABEL_26;
LABEL_28:
    v22 = &StringLiteral_11977/*"SHOP_BUY_SUCCESS"*/;
    goto LABEL_29;
  }
  if ( !isSend )
    goto LABEL_28;
LABEL_26:
  v22 = &StringLiteral_11980/*"SHOP_BUY_SUCCESS_SEND_PRESENT_BOX"*/;
LABEL_29:
  v24 = LocalizationManager__Get((System_String_o *)*v22, 0LL);
  return System_String__Format(v24, (Il2CppObject *)v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageStoneFragments(
        ShopEntity_o *entity,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopEntity_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *Name; // x21
  System_String_o *v11; // x21
  Il2CppObject *NumberFormat; // x22
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  Il2CppObject *entitya; // [xsp+8h] [xbp-38h] BYREF

  v4 = entity;
  if ( (byte_4A0532D & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_ShopDetailMaster___, *(_QWORD *)&buyCount);
    sub_1B686D4(&DataManager_TypeInfo, v5);
    sub_1B686D4(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__, v6);
    sub_1B686D4(&LocalizationManager_TypeInfo, v7);
    sub_1B686D4(&StringLiteral_11977/*"SHOP_BUY_SUCCESS"*/, v8);
    entity = (ShopEntity_o *)sub_1B686D4(&StringLiteral_11978/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v9);
    byte_4A0532D = 1;
  }
  entitya = 0LL;
  if ( !v4 )
    goto LABEL_21;
  Name = ShopEntity__getName(v4, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__ReplaceCommonTag(Name, 0, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.setNum * buyCount, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  entity = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ShopDetailMaster___);
  if ( !entity )
    goto LABEL_21;
  entity = (ShopEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                             &entitya,
                             v4->fields.id,
                             (const MethodInfo_30E4514 *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)entity & 1) != 0 )
  {
    if ( entitya )
    {
      entity = (ShopEntity_o *)System_String__IsNullOrEmpty((System_String_o *)entitya[2].monitor, 0LL);
      if ( ((unsigned __int8)entity & 1) != 0 )
        goto LABEL_12;
      if ( entitya )
        return (System_String_o *)entitya[2].monitor;
    }
LABEL_21:
    sub_1B68930(entity, *(_QWORD *)&buyCount);
  }
LABEL_12:
  if ( v4->fields.setNum * buyCount >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11978/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v14 = System_String__Format(v13, NumberFormat, 0LL);
    v11 = System_String__Concat_61419468(v11, v14, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11977/*"SHOP_BUY_SUCCESS"*/, 0LL);
  return System_String__Format(v15, (Il2CppObject *)v11, 0LL);
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
        ShopEntity_o *shopEntity,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  ShopEntity_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t type; // w8
  __int64 *v10; // x8

  v4 = shopEntity;
  if ( (byte_4A0532F & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, itemEntity);
    sub_1B686D4(&StringLiteral_2048/*"ADD_USER_ITEM_MSG"*/, v5);
    sub_1B686D4(&StringLiteral_2049/*"ADD_USER_QP_MSG"*/, v6);
    sub_1B686D4(&StringLiteral_2050/*"ADD_USER_SVT_COIN_MSG"*/, v7);
    shopEntity = (ShopEntity_o *)sub_1B686D4(&StringLiteral_1/*""*/, v8);
    byte_4A0532F = 1;
  }
  if ( !v4 )
    goto LABEL_19;
  if ( v4->fields.purchaseType != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !itemEntity )
LABEL_19:
    sub_1B68930(shopEntity, itemEntity);
  type = itemEntity->fields.type;
  if ( type == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = &StringLiteral_2049/*"ADD_USER_QP_MSG"*/;
  }
  else if ( type == 29 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = &StringLiteral_2050/*"ADD_USER_SVT_COIN_MSG"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = &StringLiteral_2048/*"ADD_USER_ITEM_MSG"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v10, 0LL);
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultGetUserItemMessage(
        ItemMaster_o *itemMaster,
        ShopEntity_o *entity,
        SetItemEntity_o *setItemEntity,
        System_String_o *getUserItemMessage,
        int32_t buyCount,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t purchaseType; // w8
  System_String_o *v17; // x20
  System_String_o *Name; // x22
  System_String_o *v19; // x22
  System_String_o *NumberFormat; // x0
  const MethodInfo *v21; // x1
  Il2CppObject *v22; // x23
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x19
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v30; // x24
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  System_String_o *v35; // x21
  const MethodInfo *v36; // x1
  System_String_o *AddNewLine; // x0
  System_String_o *v38; // x19
  ItemMaster_o *v39; // x20
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  int v42; // [xsp+Ch] [xbp-44h] BYREF

  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster;
  if ( (byte_4A05331 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, entity);
    sub_1B686D4(&int_TypeInfo, v11);
    sub_1B686D4(&LocalizationManager_TypeInfo, v12);
    sub_1B686D4(&StringLiteral_11978/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v13);
    sub_1B686D4(&StringLiteral_11916/*"SET_ITEM_INDIVIDUAL"*/, v14);
    itemMaster = (ItemMaster_o *)sub_1B686D4(&StringLiteral_1/*""*/, v15);
    byte_4A05331 = 1;
  }
  if ( !setItemEntity )
    goto LABEL_23;
  purchaseType = setItemEntity->fields.purchaseType;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  if ( purchaseType == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11978/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v42 = setItemEntity->fields.setNum * buyCount;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v31, v32, v33);
    v35 = System_String__Format(v30, v34, 0LL);
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v36);
    v38 = System_String__Concat_61419468(v17, AddNewLine, 0LL);
    itemMaster = (ItemMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11916/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( v10 )
    {
      v39 = itemMaster;
      itemMaster = (ItemMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                     v10,
                                     setItemEntity->fields.targetId,
                                     (const MethodInfo_30E44C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( itemMaster )
      {
        v40 = (Il2CppObject *)System_String__Concat_61419468(itemMaster->fields._MasterName_k__BackingField, v35, 0LL);
        v41 = System_String__Format((System_String_o *)v39, v40, 0LL);
        return System_String__Concat_61419468(v38, v41, 0LL);
      }
    }
LABEL_23:
    sub_1B68930(itemMaster, entity);
  }
  if ( purchaseType != 7 )
    return v17;
  if ( !entity )
    goto LABEL_23;
  Name = ShopEntity__getName(entity, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__ReplaceCommonTag(Name, 0, 0LL);
  NumberFormat = LocalizationManager__GetNumberFormat(entity->fields.setNum * buyCount, 0LL);
  if ( NumberFormat && entity->fields.setNum * buyCount >= 1 )
  {
    v22 = (Il2CppObject *)NumberFormat;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11978/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v24 = System_String__Format(v23, v22, 0LL);
    v19 = System_String__Concat_61419468(v19, v24, 0LL);
  }
  v25 = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v21);
  v26 = System_String__Concat_61419468(v17, v25, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11916/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
  v28 = System_String__Format(v27, (Il2CppObject *)v19, 0LL);
  return System_String__Concat_61419468(v26, v28, 0LL);
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultPresentBoxMessage(
        ServantMaster_o *servantMaster,
        ItemMaster_o *itemMaster,
        ShopEntity_o *entity,
        SetItemEntity_o *setItemEntity,
        System_String_o *presentBoxMessage,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_String_o *v18; // x24
  void *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_String_o *v24; // x25
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  const MethodInfo *v27; // x1
  int32_t purchaseType; // w8
  System_String_o *v29; // x22
  System_String_o *v30; // x0
  System_String_o *v31; // x21
  System_String_o *v32; // x23
  System_String_o *Name; // x0
  Il2CppObject *v34; // x0
  System_String_o *v35; // x1
  System_String_o *v36; // x0
  System_String_o *AddNewLine; // x0
  System_String_o *v38; // x20
  System_String_o *v39; // x23
  Il2CppObject *v40; // x0
  int v42; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A05332 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, itemMaster);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B686D4(&int_TypeInfo, v13);
    sub_1B686D4(&LocalizationManager_TypeInfo, v14);
    sub_1B686D4(&StringLiteral_11978/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v15);
    sub_1B686D4(&StringLiteral_11916/*"SET_ITEM_INDIVIDUAL"*/, v16);
    sub_1B686D4(&StringLiteral_1/*""*/, v17);
    byte_4A05332 = 1;
  }
  v18 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11978/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
  if ( !setItemEntity )
    goto LABEL_21;
  v24 = (System_String_o *)v19;
  v42 = setItemEntity->fields.setNum * buyCount;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v21, v22, v23);
  v26 = System_String__Format(v24, v25, 0LL);
  purchaseType = setItemEntity->fields.purchaseType;
  v29 = v26;
  if ( purchaseType == 18 )
  {
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v27);
    v38 = System_String__Concat_61419468(v18, AddNewLine, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11916/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( itemMaster )
    {
      v39 = (System_String_o *)v19;
      v19 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_30E44C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( v19 )
      {
        v40 = (Il2CppObject *)System_String__Concat_61419468(*((System_String_o **)v19 + 3), v29, 0LL);
        v35 = System_String__Format(v39, v40, 0LL);
        v36 = v38;
        return System_String__Concat_61419468(v36, v35, 0LL);
      }
    }
LABEL_21:
    sub_1B68930(v19, v20);
  }
  if ( purchaseType == 4 )
  {
    v30 = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v27);
    v31 = System_String__Concat_61419468(v18, v30, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11916/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( servantMaster )
    {
      v32 = (System_String_o *)v19;
      v19 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)servantMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v19 )
      {
        Name = ServantEntity__getName((ServantEntity_o *)v19, 0, -1, 0LL);
        v34 = (Il2CppObject *)System_String__Concat_61419468(Name, v29, 0LL);
        v35 = System_String__Format(v32, v34, 0LL);
        v36 = v31;
        return System_String__Concat_61419468(v36, v35, 0LL);
      }
    }
    goto LABEL_21;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}