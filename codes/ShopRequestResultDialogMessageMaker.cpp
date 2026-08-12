System_String_o *ShopRequestResultDialogMessageMaker__GetAddNewLine(System_String_o *message, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_596C8A4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C8A4 = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0) )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)&StringLiteral_43/*"\n"*/;
  return *v3;
}


System_String_o *ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
        ShopEntity_o *entity,
        ItemEntity_o *itemEntity,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopEntity_o *v6; // x20
  int32_t type; // w8
  __int64 v8; // x2
  int32_t monitor; // w21
  __int64 v11; // x1
  __int64 v12; // x2
  UserGameEntity_o *SelfUserGame; // x21
  ShopEntity_o *v14; // x22
  System_String_o *NumberFormatLong; // x19
  Il2CppObject *v16; // x2
  System_String_o *v17; // x0
  Il2CppObject *v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *MasterData_object; // x21
  NetworkManager_c *v22; // x0
  int64_t userIdNumber; // x22
  System_String_o *v24; // x0
  int32_t v25; // w8
  System_String_o *v26; // x19
  System_String_o *NumberFormat; // x20

  v6 = entity;
  if ( (byte_596C89F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3133/*"BUY_AFTER_QP_NUM"*/);
    sub_2213A60(&StringLiteral_3134/*"BUY_AFTER_USER_ITEM_NUM"*/);
    entity = (ShopEntity_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C89F = 1;
  }
  if ( !v6 )
    goto LABEL_39;
  if ( v6->fields.purchaseType != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !itemEntity )
    goto LABEL_39;
  type = itemEntity->fields.type;
  if ( type > 4 )
  {
    switch ( type )
    {
      case 5:
        entity = (ShopEntity_o *)UserGameMaster__getSelfUserGame(0);
        if ( entity )
        {
          monitor = (int32_t)entity[1].monitor;
          goto LABEL_35;
        }
        goto LABEL_39;
      case 13:
        entity = (ShopEntity_o *)UserGameMaster__getSelfUserGame(0);
        if ( entity )
        {
          monitor = UserGameEntity__GetFriendPoint((UserGameEntity_o *)entity, 0);
          goto LABEL_35;
        }
        goto LABEL_39;
      case 22:
        entity = (ShopEntity_o *)UserGameMaster__getSelfUserGame(0);
        if ( entity )
        {
          monitor = HIDWORD(entity[1].monitor);
LABEL_35:
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemEntity, v8);
          v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3134/*"BUY_AFTER_USER_ITEM_NUM"*/, 0);
          v25 = monitor - v6->fields.setNum * buyCount;
          v26 = v24;
          NumberFormat = LocalizationManager__GetNumberFormat(v25, 0);
          v16 = (Il2CppObject *)LocalizationManager__GetNumberFormat(monitor, 0);
          v17 = v26;
          v18 = (Il2CppObject *)NumberFormat;
          return System_String__Format_75697880(v17, v18, v16, 0);
        }
        goto LABEL_39;
    }
    goto LABEL_25;
  }
  if ( type != 1 )
  {
    if ( type == 2 )
    {
      entity = (ShopEntity_o *)UserGameMaster__getSelfUserGame(0);
      if ( entity )
      {
        monitor = (int32_t)entity[1].klass;
        goto LABEL_35;
      }
LABEL_39:
      sub_2213CDC(entity, itemEntity);
    }
LABEL_25:
    entity = (ShopEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( entity )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)entity,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19, v20);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      v22 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19, v20);
        v22 = NetworkManager_TypeInfo;
      }
      userIdNumber = v22->static_fields->userIdNumber;
      entity = (ShopEntity_o *)ShopEntity__get_TargetId(v6, 0);
      if ( MasterData_object )
      {
        entity = (ShopEntity_o *)UserItemMaster__GetEntityDefinitely(
                                   (UserItemMaster_o *)MasterData_object,
                                   userIdNumber,
                                   (int32_t)entity,
                                   0);
        if ( entity )
        {
          monitor = *(&entity->fields.eventId + 1);
          goto LABEL_35;
        }
      }
    }
    goto LABEL_39;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  entity = (ShopEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3133/*"BUY_AFTER_QP_NUM"*/, 0);
  if ( !SelfUserGame )
    goto LABEL_39;
  v14 = entity;
  NumberFormatLong = LocalizationManager__GetNumberFormatLong(SelfUserGame->fields.qp - v6->fields.setNum * buyCount, 0);
  v16 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(SelfUserGame->fields.qp, 0);
  v17 = (System_String_o *)v14;
  v18 = (Il2CppObject *)NumberFormatLong;
  return System_String__Format_75697880(v17, v18, v16, 0);
}


System_String_o *ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessage(
        ShopEntity_o *entity,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v6; // x1
  SetItemMaster_o *v7; // x19
  SetItemEntity_array *List; // x0
  System_String_o *v9; // x19
  SetItemEntity_array *v10; // x22
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v12; // x25
  ShopEntity_o *v13; // x2
  const MethodInfo *v14; // x6
  __int64 v15; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x28
  System_String_o *v18; // x24
  SetItemEntity_o *v19; // x26
  System_String_o *RequestResultPresentBoxMessage; // x0
  const MethodInfo *v21; // x5
  System_String_o *UserItemMessage; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  System_String_o *v28; // x1
  System_String_o *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  int32_t v51; // w1
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7

  if ( (byte_596C8A1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SetItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_12538/*"SET_ITEM_GET_SERVANT_MSG"*/);
    sub_2213A60(&StringLiteral_44/*"\n\n"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_12537/*"SET_ITEM_GET_ITEM_MSG"*/);
    byte_596C8A1 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SetItemMaster___);
  if ( !entity )
    goto LABEL_42;
  v7 = (SetItemMaster_o *)Instance;
  Instance = ShopEntity__get_TargetId(entity, 0);
  if ( !v7 )
    goto LABEL_42;
  List = SetItemMaster__GetList(v7, Instance, 0);
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  v10 = List;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  v12 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopDetailMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)ShopDetailMaster__getShopDetailEntity((ShopDetailMaster_o *)Instance, entity->fields.id, 0);
  if ( Instance )
  {
    v15 = Instance;
    Instance = System_String__IsNullOrEmpty(*(System_String_o **)(Instance + 40), 0);
    if ( (Instance & 1) == 0 )
      return *(System_String_o **)(v15 + 40);
  }
  if ( !v10 )
    goto LABEL_42;
  max_length = v10->max_length;
  if ( (int)max_length >= 1 )
  {
    v17 = 0;
    v18 = v9;
    while ( v17 < (unsigned int)max_length )
    {
      v19 = v10->m_Items[v17];
      RequestResultPresentBoxMessage = ShopRequestResultDialogMessageMaker__GetRequestResultPresentBoxMessage(
                                         (ServantMaster_o *)MasterData_object,
                                         (ItemMaster_o *)v12,
                                         v13,
                                         v19,
                                         v18,
                                         buyCount,
                                         v14);
      v18 = System_String__Concat_75651716(v18, RequestResultPresentBoxMessage, 0);
      UserItemMessage = ShopRequestResultDialogMessageMaker__GetRequestResultGetUserItemMessage(
                          (ItemMaster_o *)v12,
                          entity,
                          v19,
                          v9,
                          buyCount,
                          v21);
      Instance = (__int64)System_String__Concat_75651716(v9, UserItemMessage, 0);
      LODWORD(max_length) = v10->max_length;
      ++v17;
      v9 = (System_String_o *)Instance;
      if ( (__int64)v17 >= (int)max_length )
        goto LABEL_20;
    }
LABEL_41:
    sub_2213CE4(Instance);
  }
  v18 = v9;
LABEL_20:
  if ( !System_String__IsNullOrEmpty(v18, 0) && !System_String__IsNullOrEmpty(v9, 0) )
  {
    Instance = sub_2213B20(string___TypeInfo, 5);
    if ( Instance )
    {
      v36 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_41;
      *(_QWORD *)(Instance + 32) = v18;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(Instance + 32), (int32_t)v18, v30, v31, v32, v33, v34, v35);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37, v38);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12538/*"SET_ITEM_GET_SERVANT_MSG"*/, 0);
      if ( (*(_DWORD *)(v36 + 24) & 0xFFFFFFFE) == 0 )
        goto LABEL_41;
      *(_QWORD *)(v36 + 40) = Instance;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 40), Instance, v39, v40, v41, v42, v43, v44);
      if ( *(_DWORD *)(v36 + 24) <= 2u )
        goto LABEL_41;
      v51 = StringLiteral_44/*"\n\n"*/;
      *(_QWORD *)(v36 + 48) = StringLiteral_44/*"\n\n"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 48), v51, v45, v46, v47, v48, v49, v50);
      if ( (*(_DWORD *)(v36 + 24) & 0xFFFFFFFC) == 0 )
        goto LABEL_41;
      *(_QWORD *)(v36 + 56) = v9;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 56), (int32_t)v9, v52, v53, v54, v55, v56, v57);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12537/*"SET_ITEM_GET_ITEM_MSG"*/, 0);
      if ( *(_DWORD *)(v36 + 24) <= 4u )
        goto LABEL_41;
      *(_QWORD *)(v36 + 64) = Instance;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 64), Instance, v58, v59, v60, v61, v62, v63);
      return System_String__Concat_75697120((System_String_array *)v36, 0);
    }
LABEL_42:
    sub_2213CDC(Instance, v6);
  }
  if ( System_String__IsNullOrEmpty(v18, 0) )
  {
    if ( System_String__IsNullOrEmpty(v9, 0) )
      return (System_String_o *)StringLiteral_1/*""*/;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12537/*"SET_ITEM_GET_ITEM_MSG"*/, 0);
    v29 = v9;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12538/*"SET_ITEM_GET_SERVANT_MSG"*/, 0);
    v29 = v18;
  }
  return System_String__Concat_75651716(v29, v28, 0);
}


System_String_o *ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageNormal(
        ShopBuyItemListViewItem_o *item,
        ShopEntity_o *entity,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopBuyItemListViewItem_o *v6; // x22
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *BulkNameText; // x19
  ShopBuyItemListViewItem_o *v10; // x19
  Il2CppObject *NumberFormat; // x23
  ShopDetailEntity_o *ShopDetailEntity; // x0
  ShopDetailEntity_o *v13; // x24
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  __int64 *v19; // x8
  int v21; // w9
  System_String_o *v22; // x0
  bool isQuest; // [xsp+4h] [xbp-4Ch] BYREF
  bool isSend; // [xsp+8h] [xbp-48h] BYREF
  bool isTake; // [xsp+Ch] [xbp-44h] BYREF

  v6 = item;
  if ( (byte_596C89D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12610/*"SHOP_BUY_SUCCESS_SEND_PRESENT_BOX"*/);
    sub_2213A60(&StringLiteral_12607/*"SHOP_BUY_SUCCESS"*/);
    sub_2213A60(&StringLiteral_12609/*"SHOP_BUY_SUCCESS_SEND_MIX"*/);
    item = (ShopBuyItemListViewItem_o *)sub_2213A60(&StringLiteral_12608/*"SHOP_BUY_SUCCESS_MULTIPLE"*/);
    byte_596C89D = 1;
  }
  isTake = 0;
  isSend = 0;
  isQuest = 0;
  if ( !v6 )
    goto LABEL_33;
  ShopBuyItemListViewItem__GetSendType(v6, &isTake, &isSend, &isQuest, 0);
  BulkNameText = ShopBuyItemListViewItem__get_BulkNameText(v6, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  item = (ShopBuyItemListViewItem_o *)LocalizationManager__ReplaceCommonTag(BulkNameText, 0, 0);
  if ( !entity
    || (v10 = item,
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(entity->fields.setNum * buyCount, 0),
        (item = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (item = (ShopBuyItemListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)item,
                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopDetailMaster___)) == 0 )
  {
LABEL_33:
    sub_2213CDC(item, entity);
  }
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity((ShopDetailMaster_o *)item, entity->fields.id, 0);
  if ( ShopDetailEntity )
  {
    v13 = ShopDetailEntity;
    if ( !System_String__IsNullOrEmpty(ShopDetailEntity->fields.afterMessage, 0) )
      return v13->fields.afterMessage;
  }
  if ( ShopBuyItemListViewItem__get_IsExchangeQP(v6, 0) )
  {
    v16 = System_String__Format((System_String_o *)v10, NumberFormat, 0);
  }
  else
  {
    if ( !NumberFormat || entity->fields.setNum * buyCount < 1 )
      goto LABEL_19;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12608/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0);
    v18 = System_String__Format(v17, NumberFormat, 0);
    v16 = System_String__Concat_75651716((System_String_o *)v10, v18, 0);
  }
  v10 = (ShopBuyItemListViewItem_o *)v16;
LABEL_19:
  if ( isSend && isTake )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
    v19 = &StringLiteral_12609/*"SHOP_BUY_SUCCESS_SEND_MIX"*/;
  }
  else
  {
    v21 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( isSend )
    {
      if ( !v21 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
      v19 = &StringLiteral_12610/*"SHOP_BUY_SUCCESS_SEND_PRESENT_BOX"*/;
    }
    else
    {
      if ( !v21 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
      v19 = &StringLiteral_12607/*"SHOP_BUY_SUCCESS"*/;
    }
  }
  v22 = LocalizationManager__Get((System_String_o *)*v19, 0);
  return System_String__Format(v22, (Il2CppObject *)v10, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageStoneFragments(
        ShopEntity_o *entity,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopEntity_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *Name; // x21
  System_String_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *NumberFormat; // x22
  __int64 v12; // x2
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  Il2CppObject *entitya; // [xsp+8h] [xbp-38h] BYREF

  v4 = entity;
  if ( (byte_596C89E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ShopDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12607/*"SHOP_BUY_SUCCESS"*/);
    entity = (ShopEntity_o *)sub_2213A60(&StringLiteral_12608/*"SHOP_BUY_SUCCESS_MULTIPLE"*/);
    byte_596C89E = 1;
  }
  entitya = 0;
  if ( !v4 )
    goto LABEL_21;
  Name = ShopEntity__getName(v4, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v8 = LocalizationManager__ReplaceCommonTag(Name, 0, 0);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.setNum * buyCount, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
  entity = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopDetailMaster___);
  if ( !entity )
    goto LABEL_21;
  entity = (ShopEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                             &entitya,
                             v4->fields.id,
                             (const MethodInfo_3F10B80 *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)entity & 1) != 0 )
  {
    if ( entitya )
    {
      entity = (ShopEntity_o *)System_String__IsNullOrEmpty((System_String_o *)entitya[2].monitor, 0);
      if ( ((unsigned __int8)entity & 1) != 0 )
        goto LABEL_12;
      if ( entitya )
        return (System_String_o *)entitya[2].monitor;
    }
LABEL_21:
    sub_2213CDC(entity, *(_QWORD *)&buyCount);
  }
LABEL_12:
  if ( v4->fields.setNum * buyCount >= 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&buyCount, v12);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12608/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0);
    v14 = System_String__Format(v13, NumberFormat, 0);
    v8 = System_String__Concat_75651716(v8, v14, 0);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&buyCount, v12);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12607/*"SHOP_BUY_SUCCESS"*/, 0);
  return System_String__Format(v15, (Il2CppObject *)v8, 0);
}


System_String_o *ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
        ShopEntity_o *shopEntity,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  ShopEntity_o *v4; // x20
  int32_t type; // w9
  int v6; // w8
  __int64 *v7; // x8

  v4 = shopEntity;
  if ( (byte_596C8A0 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2003/*"ADD_USER_ITEM_MSG"*/);
    sub_2213A60(&StringLiteral_2004/*"ADD_USER_QP_MSG"*/);
    sub_2213A60(&StringLiteral_2005/*"ADD_USER_SVT_COIN_MSG"*/);
    shopEntity = (ShopEntity_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C8A0 = 1;
  }
  if ( !v4 )
    goto LABEL_19;
  if ( v4->fields.purchaseType != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !itemEntity )
LABEL_19:
    sub_2213CDC(shopEntity, itemEntity);
  type = itemEntity->fields.type;
  v6 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( type == 1 )
  {
    if ( !v6 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemEntity, method);
    v7 = &StringLiteral_2004/*"ADD_USER_QP_MSG"*/;
  }
  else if ( type == 29 )
  {
    if ( !v6 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemEntity, method);
    v7 = &StringLiteral_2005/*"ADD_USER_SVT_COIN_MSG"*/;
  }
  else
  {
    if ( !v6 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemEntity, method);
    v7 = &StringLiteral_2003/*"ADD_USER_ITEM_MSG"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v7, 0);
}


System_String_o *ShopRequestResultDialogMessageMaker__GetRequestResultGetUserItemMessage(
        ItemMaster_o *itemMaster,
        ShopEntity_o *entity,
        SetItemEntity_o *setItemEntity,
        System_String_o *getUserItemMessage,
        int32_t buyCount,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x23
  int32_t purchaseType; // w8
  System_String_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *Name; // x22
  System_String_o *v16; // x22
  System_String_o *NumberFormat; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x2
  Il2CppObject *v20; // x23
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_String_o *v26; // x19
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v30; // x24
  Il2CppObject *v31; // x0
  System_String_o *v32; // x21
  const MethodInfo *v33; // x1
  System_String_o *AddNewLine; // x0
  System_String_o *v35; // x19
  ItemMaster_o *v36; // x20
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  int v39; // [xsp+Ch] [xbp-44h] BYREF

  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster;
  if ( (byte_596C8A2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12608/*"SHOP_BUY_SUCCESS_MULTIPLE"*/);
    sub_2213A60(&StringLiteral_12539/*"SET_ITEM_INDIVIDUAL"*/);
    itemMaster = (ItemMaster_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C8A2 = 1;
  }
  if ( !setItemEntity )
    goto LABEL_23;
  purchaseType = setItemEntity->fields.purchaseType;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( purchaseType == 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, entity, setItemEntity);
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12608/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0);
    v39 = setItemEntity->fields.setNum * buyCount;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v39);
    v32 = System_String__Format(v30, v31, 0);
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v33);
    v35 = System_String__Concat_75651716(v12, AddNewLine, 0);
    itemMaster = (ItemMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12539/*"SET_ITEM_INDIVIDUAL"*/, 0);
    if ( v10 )
    {
      v36 = itemMaster;
      itemMaster = (ItemMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                     v10,
                                     setItemEntity->fields.targetId,
                                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( itemMaster )
      {
        v37 = (Il2CppObject *)System_String__Concat_75651716(itemMaster->fields._MasterName_k__BackingField, v32, 0);
        v38 = System_String__Format((System_String_o *)v36, v37, 0);
        return System_String__Concat_75651716(v35, v38, 0);
      }
    }
LABEL_23:
    sub_2213CDC(itemMaster, entity);
  }
  if ( purchaseType != 7 )
    return v12;
  if ( !entity )
    goto LABEL_23;
  Name = ShopEntity__getName(entity, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
  v16 = LocalizationManager__ReplaceCommonTag(Name, 0, 0);
  NumberFormat = LocalizationManager__GetNumberFormat(entity->fields.setNum * buyCount, 0);
  if ( NumberFormat && entity->fields.setNum * buyCount >= 1 )
  {
    v20 = (Il2CppObject *)NumberFormat;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12608/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0);
    v22 = System_String__Format(v21, v20, 0);
    v16 = System_String__Concat_75651716(v16, v22, 0);
  }
  v23 = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v18);
  v26 = System_String__Concat_75651716(v12, v23, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12539/*"SET_ITEM_INDIVIDUAL"*/, 0);
  v28 = System_String__Format(v27, (Il2CppObject *)v16, 0);
  return System_String__Concat_75651716(v26, v28, 0);
}


System_String_o *ShopRequestResultDialogMessageMaker__GetRequestResultPresentBoxMessage(
        ServantMaster_o *servantMaster,
        ItemMaster_o *itemMaster,
        ShopEntity_o *entity,
        SetItemEntity_o *setItemEntity,
        System_String_o *presentBoxMessage,
        int32_t buyCount,
        const MethodInfo *method)
{
  System_String_o *v12; // x24
  void *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x25
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x1
  int32_t purchaseType; // w8
  System_String_o *v20; // x22
  System_String_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  System_String_o *v24; // x20
  System_String_o *v25; // x23
  System_String_o *Name; // x0
  Il2CppObject *v27; // x0
  System_String_o *v28; // x1
  System_String_o *v29; // x0
  System_String_o *AddNewLine; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  System_String_o *v33; // x21
  System_String_o *v34; // x23
  Il2CppObject *v35; // x0
  int v37; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_596C8A3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12608/*"SHOP_BUY_SUCCESS_MULTIPLE"*/);
    sub_2213A60(&StringLiteral_12539/*"SET_ITEM_INDIVIDUAL"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C8A3 = 1;
  }
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemMaster, entity);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12608/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0);
  if ( !setItemEntity )
    goto LABEL_21;
  v15 = (System_String_o *)v13;
  v37 = setItemEntity->fields.setNum * buyCount;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v37);
  v17 = System_String__Format(v15, v16, 0);
  purchaseType = setItemEntity->fields.purchaseType;
  v20 = v17;
  if ( purchaseType == 18 )
  {
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v18);
    v33 = System_String__Concat_75651716(v12, AddNewLine, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12539/*"SET_ITEM_INDIVIDUAL"*/, 0);
    if ( itemMaster )
    {
      v34 = (System_String_o *)v13;
      v13 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( v13 )
      {
        v35 = (Il2CppObject *)System_String__Concat_75651716(*((System_String_o **)v13 + 3), v20, 0);
        v28 = System_String__Format(v34, v35, 0);
        v29 = v33;
        return System_String__Concat_75651716(v29, v28, 0);
      }
    }
LABEL_21:
    sub_2213CDC(v13, v14);
  }
  if ( purchaseType == 4 )
  {
    v21 = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v18);
    v24 = System_String__Concat_75651716(v12, v21, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12539/*"SET_ITEM_INDIVIDUAL"*/, 0);
    if ( servantMaster )
    {
      v25 = (System_String_o *)v13;
      v13 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)servantMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v13 )
      {
        Name = ServantEntity__getName((ServantEntity_o *)v13, 0, -1, 0, 0, 0);
        v27 = (Il2CppObject *)System_String__Concat_75651716(Name, v20, 0);
        v28 = System_String__Format(v25, v27, 0);
        v29 = v24;
        return System_String__Concat_75651716(v29, v28, 0);
      }
    }
    goto LABEL_21;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}