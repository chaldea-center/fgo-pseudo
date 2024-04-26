System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetAddNewLine(
        System_String_o *message,
        const MethodInfo *method)
{
  bool IsNullOrEmpty; // w0
  System_String_o **v4; // x8

  if ( (byte_43536F9 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_26/*"\n"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43536F9 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(message, 0LL);
  v4 = (System_String_o **)&StringLiteral_1/*""*/;
  if ( !IsNullOrEmpty )
    v4 = (System_String_o **)&StringLiteral_26/*"\n"*/;
  return *v4;
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
        ShopEntity_o *entity,
        ItemEntity_o *itemEntity,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopEntity_o *v6; // x20
  int32_t type; // w8
  int32_t klass; // w21
  UserGameEntity_o *SelfUserGame; // x21
  System_String_o *v11; // x22
  Il2CppObject *NumberFormat; // x19
  int32_t qp; // w0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x22
  Il2CppObject *v16; // x0

  v6 = entity;
  if ( (byte_43536F4 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_2695/*"BUY_AFTER_QP_NUM"*/);
    sub_B70694(&StringLiteral_2696/*"BUY_AFTER_USER_ITEM_NUM"*/);
    entity = (ShopEntity_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_43536F4 = 1;
  }
  if ( !v6 )
    goto LABEL_38;
  if ( v6->fields.purchaseType != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !itemEntity )
    goto LABEL_38;
  type = itemEntity->fields.type;
  if ( type > 4 )
  {
    switch ( type )
    {
      case 5:
        entity = (ShopEntity_o *)UserGameMaster__getSelfUserGame(0LL);
        if ( entity )
        {
          klass = (int32_t)entity[1].klass;
          goto LABEL_33;
        }
        goto LABEL_38;
      case 13:
        entity = (ShopEntity_o *)UserGameMaster__getSelfUserGame(0LL);
        if ( entity )
        {
          klass = UserGameEntity__GetFriendPoint((UserGameEntity_o *)entity, 0LL);
          goto LABEL_33;
        }
        goto LABEL_38;
      case 22:
        entity = (ShopEntity_o *)UserGameMaster__getSelfUserGame(0LL);
        if ( entity )
        {
          klass = HIDWORD(entity[1].klass);
LABEL_33:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2696/*"BUY_AFTER_USER_ITEM_NUM"*/, 0LL);
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(klass - v6->fields.setNum * buyCount, 0LL);
          qp = klass;
          goto LABEL_37;
        }
        goto LABEL_38;
    }
    goto LABEL_26;
  }
  if ( type != 1 )
  {
    if ( type == 2 )
    {
      entity = (ShopEntity_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( entity )
      {
        klass = (int32_t)entity->fields.warningMessage;
        goto LABEL_33;
      }
LABEL_38:
      sub_B7076C(entity, itemEntity);
    }
LABEL_26:
    entity = (ShopEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( entity )
    {
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)entity,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      entity = (ShopEntity_o *)ShopEntity__get_TargetId(v6, 0LL);
      if ( MasterData_WarQuestSelectionMaster )
      {
        entity = (ShopEntity_o *)UserItemMaster__GetEntityDefinitely(
                                   MasterData_WarQuestSelectionMaster,
                                   UserId,
                                   (int32_t)entity,
                                   0LL);
        if ( entity )
        {
          klass = *(&entity->fields.eventId + 1);
          goto LABEL_33;
        }
      }
    }
    goto LABEL_38;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  entity = (ShopEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2695/*"BUY_AFTER_QP_NUM"*/, 0LL);
  if ( !SelfUserGame )
    goto LABEL_38;
  v11 = (System_String_o *)entity;
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(
                                   SelfUserGame->fields.qp - v6->fields.setNum * buyCount,
                                   0LL);
  qp = SelfUserGame->fields.qp;
LABEL_37:
  v16 = (Il2CppObject *)LocalizationManager__GetNumberFormat(qp, 0LL);
  return System_String__Format_44753704(v11, NumberFormat, v16, 0LL);
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessage(
        ShopEntity_o *entity,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v6; // x1
  SetItemMaster_o *v7; // x19
  SetItemEntity_array *List; // x22
  System_String_o *v9; // x19
  ServantMaster_o *MasterData_WarQuestSelectionMaster; // x24
  ItemMaster_o *v11; // x25
  ShopEntity_o *v12; // x2
  const MethodInfo *v13; // x6
  __int64 v14; // x23
  __int64 v15; // x8
  unsigned __int64 v16; // x28
  System_String_o *v17; // x23
  SetItemEntity_o *v18; // x26
  System_String_o *RequestResultPresentBoxMessage; // x0
  const MethodInfo *v20; // x5
  System_String_o *UserItemMessage; // x0
  System_String_o *v23; // x1
  System_String_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x19
  __int64 v59; // x0
  __int64 v60; // x0

  if ( (byte_43536F6 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SetItemMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_12238/*"SET_ITEM_GET_SERVANT_MSG"*/);
    sub_B70694(&StringLiteral_27/*"\n\n"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_12237/*"SET_ITEM_GET_ITEM_MSG"*/);
    byte_43536F6 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SetItemMaster___);
  if ( !entity )
    goto LABEL_57;
  v7 = (SetItemMaster_o *)Instance;
  Instance = ShopEntity__get_TargetId(entity, 0LL);
  if ( !v7 )
    goto LABEL_57;
  List = SetItemMaster__GetList(v7, Instance, 0LL);
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_WarQuestSelectionMaster = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  v11 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
  if ( !Instance )
    goto LABEL_57;
  Instance = (__int64)ShopDetailMaster__getShopDetailEntity((ShopDetailMaster_o *)Instance, entity->fields.id, 0LL);
  if ( Instance )
  {
    v14 = Instance;
    Instance = System_String__IsNullOrEmpty(*(System_String_o **)(Instance + 40), 0LL);
    if ( (Instance & 1) == 0 )
      return *(System_String_o **)(v14 + 40);
  }
  if ( !List )
    goto LABEL_57;
  v15 = *(_QWORD *)&List->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    v17 = v9;
    while ( v16 < (unsigned int)v15 )
    {
      v18 = List->m_Items[v16];
      RequestResultPresentBoxMessage = ShopRequestResultDialogMessageMaker__GetRequestResultPresentBoxMessage(
                                         MasterData_WarQuestSelectionMaster,
                                         v11,
                                         v12,
                                         v18,
                                         v17,
                                         buyCount,
                                         v13);
      v17 = System_String__Concat_44758168(v17, RequestResultPresentBoxMessage, 0LL);
      UserItemMessage = ShopRequestResultDialogMessageMaker__GetRequestResultGetUserItemMessage(
                          v11,
                          entity,
                          v18,
                          v9,
                          buyCount,
                          v20);
      Instance = (__int64)System_String__Concat_44758168(v9, UserItemMessage, 0LL);
      LODWORD(v15) = List->max_length;
      ++v16;
      v9 = (System_String_o *)Instance;
      if ( (__int64)v16 >= (int)v15 )
        goto LABEL_20;
    }
LABEL_56:
    v59 = sub_B70798(Instance);
    sub_B70738(v59, 0LL);
  }
  v17 = v9;
LABEL_20:
  if ( !System_String__IsNullOrEmpty(v17, 0LL) && !System_String__IsNullOrEmpty(v9, 0LL) )
  {
    Instance = sub_B706AC(string___TypeInfo, 5LL);
    if ( Instance )
    {
      v31 = (System_String_array *)Instance;
      if ( !v17 || (Instance = sub_B70754(v17, *(_QWORD *)(*(_QWORD *)Instance + 64LL))) != 0 )
      {
        if ( !v31->max_length )
          goto LABEL_56;
        v31->m_Items[0] = v17;
        sub_B70630(
          (BattleServantConfConponent_o *)v31->m_Items,
          (System_Int32_array **)v17,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12238/*"SET_ITEM_GET_SERVANT_MSG"*/, 0LL);
        v38 = (System_Int32_array **)Instance;
        if ( !Instance || (Instance = sub_B70754(Instance, v31->obj.klass->_1.element_class)) != 0 )
        {
          if ( v31->max_length <= 1 )
            goto LABEL_56;
          v31->m_Items[1] = (System_String_o *)v38;
          sub_B70630((BattleServantConfConponent_o *)&v31->m_Items[1], v38, v32, v33, v34, v35, v36, v37);
          Instance = StringLiteral_27/*"\n\n"*/;
          if ( StringLiteral_27/*"\n\n"*/ )
          {
            Instance = sub_B70754(StringLiteral_27/*"\n\n"*/, v31->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_58;
            v45 = (System_Int32_array **)StringLiteral_27/*"\n\n"*/;
          }
          else
          {
            v45 = 0LL;
          }
          if ( v31->max_length <= 2 )
            goto LABEL_56;
          v31->m_Items[2] = (System_String_o *)v45;
          sub_B70630((BattleServantConfConponent_o *)&v31->m_Items[2], v45, v39, v40, v41, v42, v43, v44);
          if ( !v9 || (Instance = sub_B70754(v9, v31->obj.klass->_1.element_class)) != 0 )
          {
            if ( v31->max_length <= 3 )
              goto LABEL_56;
            v31->m_Items[3] = v9;
            sub_B70630(
              (BattleServantConfConponent_o *)&v31->m_Items[3],
              (System_Int32_array **)v9,
              v46,
              v47,
              v48,
              v49,
              v50,
              v51);
            Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12237/*"SET_ITEM_GET_ITEM_MSG"*/, 0LL);
            v58 = (System_Int32_array **)Instance;
            if ( !Instance || (Instance = sub_B70754(Instance, v31->obj.klass->_1.element_class)) != 0 )
            {
              if ( v31->max_length <= 4 )
                goto LABEL_56;
              v31->m_Items[4] = (System_String_o *)v58;
              sub_B70630((BattleServantConfConponent_o *)&v31->m_Items[4], v58, v52, v53, v54, v55, v56, v57);
              return System_String__Concat_44838292(v31, 0LL);
            }
          }
        }
      }
LABEL_58:
      v60 = sub_B7078C(Instance);
      sub_B70738(v60, 0LL);
    }
LABEL_57:
    sub_B7076C(Instance, v6);
  }
  if ( System_String__IsNullOrEmpty(v17, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(v9, 0LL) )
      return (System_String_o *)StringLiteral_1/*""*/;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12237/*"SET_ITEM_GET_ITEM_MSG"*/, 0LL);
    v24 = v9;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12238/*"SET_ITEM_GET_SERVANT_MSG"*/, 0LL);
    v24 = v17;
  }
  return System_String__Concat_44758168(v24, v23, 0LL);
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageNormal(
        ShopBuyItemListViewItem_o *item,
        ShopEntity_o *entity,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopBuyItemListViewItem_o *v6; // x22
  System_String_o *BulkNameText; // x19
  System_String_o *v8; // x19
  Il2CppObject *NumberFormat; // x23
  ShopDetailEntity_o *ShopDetailEntity; // x0
  ShopDetailEntity_o *v11; // x24
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  __int64 *v15; // x8
  System_String_o *v17; // x0
  bool isQuest; // [xsp+Ch] [xbp-44h] BYREF
  bool isSend; // [xsp+18h] [xbp-38h] BYREF
  bool isTake; // [xsp+1Ch] [xbp-34h] BYREF

  v6 = item;
  if ( (byte_43536F2 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_12303/*"SHOP_BUY_SUCCESS_SEND_PRESENT_BOX"*/);
    sub_B70694(&StringLiteral_12300/*"SHOP_BUY_SUCCESS"*/);
    sub_B70694(&StringLiteral_12302/*"SHOP_BUY_SUCCESS_SEND_MIX"*/);
    item = (ShopBuyItemListViewItem_o *)sub_B70694(&StringLiteral_12301/*"SHOP_BUY_SUCCESS_MULTIPLE"*/);
    byte_43536F2 = 1;
  }
  isTake = 0;
  isSend = 0;
  isQuest = 0;
  if ( !v6 )
    goto LABEL_38;
  ShopBuyItemListViewItem__GetSendType(v6, &isTake, &isSend, &isQuest, 0LL);
  BulkNameText = ShopBuyItemListViewItem__get_BulkNameText(v6, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  item = (ShopBuyItemListViewItem_o *)LocalizationManager__ReplaceCommonTag(BulkNameText, 0, 0LL);
  if ( !entity
    || (v8 = (System_String_o *)item,
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(entity->fields.setNum * buyCount, 0LL),
        (item = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (item = (ShopBuyItemListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)item,
                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopDetailMaster___)) == 0LL )
  {
LABEL_38:
    sub_B7076C(item, entity);
  }
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity((ShopDetailMaster_o *)item, entity->fields.id, 0LL);
  if ( ShopDetailEntity )
  {
    v11 = ShopDetailEntity;
    if ( !System_String__IsNullOrEmpty(ShopDetailEntity->fields.afterMessage, 0LL) )
      return v11->fields.afterMessage;
  }
  if ( ShopBuyItemListViewItem__get_IsExchangeQP(v6, 0LL) )
  {
    v12 = System_String__Format(v8, NumberFormat, 0LL);
  }
  else
  {
    if ( !NumberFormat || entity->fields.setNum * buyCount < 1 )
      goto LABEL_21;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12301/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v14 = System_String__Format(v13, NumberFormat, 0LL);
    v12 = System_String__Concat_44758168(v8, v14, 0LL);
  }
  v8 = v12;
LABEL_21:
  if ( isSend && isTake )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = &StringLiteral_12302/*"SHOP_BUY_SUCCESS_SEND_MIX"*/;
  }
  else if ( isSend )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = &StringLiteral_12303/*"SHOP_BUY_SUCCESS_SEND_PRESENT_BOX"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = &StringLiteral_12300/*"SHOP_BUY_SUCCESS"*/;
  }
  v17 = LocalizationManager__Get((System_String_o *)*v15, 0LL);
  return System_String__Format(v17, (Il2CppObject *)v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageStoneFragments(
        ShopEntity_o *entity,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopEntity_o *v4; // x20
  System_String_o *Name; // x21
  System_String_o *v6; // x21
  Il2CppObject *NumberFormat; // x22
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  WarEntity_o *entitya; // [xsp+8h] [xbp-28h] BYREF

  v4 = entity;
  if ( (byte_43536F3 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ShopDetailMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_12300/*"SHOP_BUY_SUCCESS"*/);
    entity = (ShopEntity_o *)sub_B70694(&StringLiteral_12301/*"SHOP_BUY_SUCCESS_MULTIPLE"*/);
    byte_43536F3 = 1;
  }
  entitya = 0LL;
  if ( !v4 )
    goto LABEL_25;
  Name = ShopEntity__getName(v4, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__ReplaceCommonTag(Name, 0, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.setNum * buyCount, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  entity = (ShopEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ShopDetailMaster___);
  if ( !entity )
    goto LABEL_25;
  entity = (ShopEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)entity,
                             &entitya,
                             v4->fields.id,
                             (const MethodInfo_21C049C *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)entity & 1) != 0 )
  {
    if ( entitya )
    {
      entity = (ShopEntity_o *)System_String__IsNullOrEmpty(entitya->fields.longName, 0LL);
      if ( ((unsigned __int8)entity & 1) != 0 )
        goto LABEL_14;
      if ( entitya )
        return entitya->fields.longName;
    }
LABEL_25:
    sub_B7076C(entity, *(_QWORD *)&buyCount);
  }
LABEL_14:
  if ( v4->fields.setNum * buyCount >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12301/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v9 = System_String__Format(v8, NumberFormat, 0LL);
    v6 = System_String__Concat_44758168(v6, v9, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12300/*"SHOP_BUY_SUCCESS"*/, 0LL);
  return System_String__Format(v10, (Il2CppObject *)v6, 0LL);
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
        ShopEntity_o *shopEntity,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  ShopEntity_o *v4; // x20
  int32_t type; // w8
  __int64 *v6; // x8

  v4 = shopEntity;
  if ( (byte_43536F5 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_1686/*"ADD_USER_ITEM_MSG"*/);
    sub_B70694(&StringLiteral_1687/*"ADD_USER_QP_MSG"*/);
    sub_B70694(&StringLiteral_1688/*"ADD_USER_SVT_COIN_MSG"*/);
    shopEntity = (ShopEntity_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_43536F5 = 1;
  }
  if ( !v4 )
    goto LABEL_22;
  if ( v4->fields.purchaseType != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !itemEntity )
LABEL_22:
    sub_B7076C(shopEntity, itemEntity);
  type = itemEntity->fields.type;
  if ( type == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_1687/*"ADD_USER_QP_MSG"*/;
  }
  else if ( type == 29 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_1688/*"ADD_USER_SVT_COIN_MSG"*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_1686/*"ADD_USER_ITEM_MSG"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v6, 0LL);
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultGetUserItemMessage(
        ItemMaster_o *itemMaster,
        ShopEntity_o *entity,
        SetItemEntity_o *setItemEntity,
        System_String_o *getUserItemMessage,
        int32_t buyCount,
        const MethodInfo *method)
{
  ItemMaster_o *v10; // x23
  int32_t purchaseType; // w8
  System_String_o *v12; // x20
  System_String_o *Name; // x22
  System_String_o *v14; // x22
  System_String_o *NumberFormat; // x0
  const MethodInfo *v16; // x1
  Il2CppObject *v17; // x23
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x19
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v25; // x24
  __int64 v26; // x2
  Il2CppObject *v27; // x0
  System_String_o *v28; // x21
  const MethodInfo *v29; // x1
  System_String_o *AddNewLine; // x0
  System_String_o *v31; // x19
  System_String_o *v32; // x20
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  int v35; // [xsp+Ch] [xbp-34h] BYREF

  v10 = itemMaster;
  if ( (byte_43536F7 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_12301/*"SHOP_BUY_SUCCESS_MULTIPLE"*/);
    sub_B70694(&StringLiteral_12239/*"SET_ITEM_INDIVIDUAL"*/);
    itemMaster = (ItemMaster_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_43536F7 = 1;
  }
  if ( !setItemEntity )
    goto LABEL_27;
  purchaseType = setItemEntity->fields.purchaseType;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( purchaseType == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12301/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v35 = setItemEntity->fields.setNum * buyCount;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v26);
    v28 = System_String__Format(v25, v27, 0LL);
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v29);
    v31 = System_String__Concat_44758168(v12, AddNewLine, 0LL);
    itemMaster = (ItemMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12239/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( v10 )
    {
      v32 = (System_String_o *)itemMaster;
      itemMaster = (ItemMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)v10,
                                     setItemEntity->fields.targetId,
                                     (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( itemMaster )
      {
        v33 = (Il2CppObject *)System_String__Concat_44758168(itemMaster->fields._MasterName_k__BackingField, v28, 0LL);
        v34 = System_String__Format(v32, v33, 0LL);
        return System_String__Concat_44758168(v31, v34, 0LL);
      }
    }
LABEL_27:
    sub_B7076C(itemMaster, entity);
  }
  if ( purchaseType != 7 )
    return v12;
  if ( !entity )
    goto LABEL_27;
  Name = ShopEntity__getName(entity, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__ReplaceCommonTag(Name, 0, 0LL);
  NumberFormat = LocalizationManager__GetNumberFormat(entity->fields.setNum * buyCount, 0LL);
  if ( NumberFormat && entity->fields.setNum * buyCount >= 1 )
  {
    v17 = (Il2CppObject *)NumberFormat;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12301/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v19 = System_String__Format(v18, v17, 0LL);
    v14 = System_String__Concat_44758168(v14, v19, 0LL);
  }
  v20 = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v16);
  v21 = System_String__Concat_44758168(v12, v20, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12239/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
  v23 = System_String__Format(v22, (Il2CppObject *)v14, 0LL);
  return System_String__Concat_44758168(v21, v23, 0LL);
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
  System_String_o *v12; // x24
  void *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x25
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x1
  int32_t purchaseType; // w8
  System_String_o *v21; // x22
  System_String_o *v22; // x0
  System_String_o *v23; // x21
  System_String_o *v24; // x23
  System_String_o *Name; // x0
  Il2CppObject *v26; // x0
  System_String_o *v27; // x1
  System_String_o *v28; // x0
  System_String_o *AddNewLine; // x0
  System_String_o *v30; // x20
  System_String_o *v31; // x23
  Il2CppObject *v32; // x0
  int v34; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_43536F8 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_12301/*"SHOP_BUY_SUCCESS_MULTIPLE"*/);
    sub_B70694(&StringLiteral_12239/*"SET_ITEM_INDIVIDUAL"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43536F8 = 1;
  }
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12301/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
  if ( !setItemEntity )
    goto LABEL_23;
  v16 = (System_String_o *)v13;
  v34 = setItemEntity->fields.setNum * buyCount;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v15);
  v18 = System_String__Format(v16, v17, 0LL);
  purchaseType = setItemEntity->fields.purchaseType;
  v21 = v18;
  if ( purchaseType == 18 )
  {
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v19);
    v30 = System_String__Concat_44758168(v12, AddNewLine, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12239/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( itemMaster )
    {
      v31 = (System_String_o *)v13;
      v13 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)itemMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( v13 )
      {
        v32 = (Il2CppObject *)System_String__Concat_44758168(*((System_String_o **)v13 + 3), v21, 0LL);
        v27 = System_String__Format(v31, v32, 0LL);
        v28 = v30;
        return System_String__Concat_44758168(v28, v27, 0LL);
      }
    }
LABEL_23:
    sub_B7076C(v13, v14);
  }
  if ( purchaseType == 4 )
  {
    v22 = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v19);
    v23 = System_String__Concat_44758168(v12, v22, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12239/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( servantMaster )
    {
      v24 = (System_String_o *)v13;
      v13 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v13 )
      {
        Name = ServantEntity__getName((ServantEntity_o *)v13, 0, -1, 0LL);
        v26 = (Il2CppObject *)System_String__Concat_44758168(Name, v21, 0LL);
        v27 = System_String__Format(v24, v26, 0LL);
        v28 = v23;
        return System_String__Concat_44758168(v28, v27, 0LL);
      }
    }
    goto LABEL_23;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}