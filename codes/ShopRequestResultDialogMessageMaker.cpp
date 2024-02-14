System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetAddNewLine(
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v3; // x1
  bool IsNullOrEmpty; // w0
  System_String_o **v5; // x8

  if ( (byte_4216101 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_4216101 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(message, 0LL);
  v5 = (System_String_o **)&StringLiteral_1/*""*/;
  if ( !IsNullOrEmpty )
    v5 = (System_String_o **)&StringLiteral_26/*"\n"*/;
  return *v5;
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
  int32_t klass; // w21
  UserGameEntity_o *SelfUserGame; // x21
  System_String_o *v17; // x22
  Il2CppObject *NumberFormat; // x19
  int32_t qp; // w0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x22
  Il2CppObject *v22; // x0

  v6 = entity;
  if ( (byte_42160FC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, itemEntity);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_2644/*"BUY_AFTER_QP_NUM"*/, v10);
    sub_B0D8A4(&StringLiteral_2645/*"BUY_AFTER_USER_ITEM_NUM"*/, v11);
    entity = (ShopEntity_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_42160FC = 1;
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
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2645/*"BUY_AFTER_USER_ITEM_NUM"*/, 0LL);
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
      sub_B0D97C(entity);
    }
LABEL_26:
    entity = (ShopEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( entity )
    {
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)entity,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
  entity = (ShopEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2644/*"BUY_AFTER_QP_NUM"*/, 0LL);
  if ( !SelfUserGame )
    goto LABEL_38;
  v17 = (System_String_o *)entity;
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(
                                   SelfUserGame->fields.qp - v6->fields.setNum * buyCount,
                                   0LL);
  qp = SelfUserGame->fields.qp;
LABEL_37:
  v22 = (Il2CppObject *)LocalizationManager__GetNumberFormat(qp, 0LL);
  return System_String__Format_43845440(v17, NumberFormat, v22, 0LL);
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
  SetItemMaster_o *v16; // x19
  SetItemEntity_array *List; // x22
  System_String_o *v18; // x19
  ServantMaster_o *MasterData_WarQuestSelectionMaster; // x24
  ItemMaster_o *v20; // x25
  ShopEntity_o *v21; // x2
  const MethodInfo *v22; // x6
  __int64 v23; // x23
  __int64 v24; // x8
  unsigned __int64 v25; // x28
  System_String_o *v26; // x23
  SetItemEntity_o *v27; // x26
  System_String_o *RequestResultPresentBoxMessage; // x0
  const MethodInfo *v29; // x5
  System_String_o *UserItemMessage; // x0
  System_String_o *v32; // x1
  System_String_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x19
  __int64 v68; // x0
  __int64 v69; // x0

  if ( (byte_42160FE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&buyCount);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SetItemMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopDetailMaster___, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&string___TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_12108/*"SET_ITEM_GET_SERVANT_MSG"*/, v11);
    sub_B0D8A4(&StringLiteral_27/*"\n\n"*/, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    sub_B0D8A4(&StringLiteral_12107/*"SET_ITEM_GET_ITEM_MSG"*/, v14);
    byte_42160FE = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SetItemMaster___);
  if ( !entity )
    goto LABEL_57;
  v16 = (SetItemMaster_o *)Instance;
  Instance = ShopEntity__get_TargetId(entity, 0LL);
  if ( !v16 )
    goto LABEL_57;
  List = SetItemMaster__GetList(v16, Instance, 0LL);
  v18 = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_WarQuestSelectionMaster = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  v20 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
  if ( !Instance )
    goto LABEL_57;
  Instance = (__int64)ShopDetailMaster__getShopDetailEntity((ShopDetailMaster_o *)Instance, entity->fields.id, 0LL);
  if ( Instance )
  {
    v23 = Instance;
    Instance = System_String__IsNullOrEmpty(*(System_String_o **)(Instance + 40), 0LL);
    if ( (Instance & 1) == 0 )
      return *(System_String_o **)(v23 + 40);
  }
  if ( !List )
    goto LABEL_57;
  v24 = *(_QWORD *)&List->max_length;
  if ( (int)v24 >= 1 )
  {
    v25 = 0LL;
    v26 = v18;
    while ( v25 < (unsigned int)v24 )
    {
      v27 = List->m_Items[v25];
      RequestResultPresentBoxMessage = ShopRequestResultDialogMessageMaker__GetRequestResultPresentBoxMessage(
                                         MasterData_WarQuestSelectionMaster,
                                         v20,
                                         v21,
                                         v27,
                                         v26,
                                         buyCount,
                                         v22);
      v26 = System_String__Concat_43849904(v26, RequestResultPresentBoxMessage, 0LL);
      UserItemMessage = ShopRequestResultDialogMessageMaker__GetRequestResultGetUserItemMessage(
                          v20,
                          entity,
                          v27,
                          v18,
                          buyCount,
                          v29);
      Instance = (__int64)System_String__Concat_43849904(v18, UserItemMessage, 0LL);
      LODWORD(v24) = List->max_length;
      ++v25;
      v18 = (System_String_o *)Instance;
      if ( (__int64)v25 >= (int)v24 )
        goto LABEL_20;
    }
LABEL_56:
    v68 = sub_B0D9A8(Instance);
    sub_B0D948(v68, 0LL);
  }
  v26 = v18;
LABEL_20:
  if ( !System_String__IsNullOrEmpty(v26, 0LL) && !System_String__IsNullOrEmpty(v18, 0LL) )
  {
    Instance = sub_B0D8BC(string___TypeInfo, 5LL);
    if ( Instance )
    {
      v40 = (System_String_array *)Instance;
      if ( !v26 || (Instance = sub_B0D964(v26, *(_QWORD *)(*(_QWORD *)Instance + 64LL))) != 0 )
      {
        if ( !v40->max_length )
          goto LABEL_56;
        v40->m_Items[0] = v26;
        sub_B0D840(
          (BattleServantConfConponent_o *)v40->m_Items,
          (System_Int32_array **)v26,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12108/*"SET_ITEM_GET_SERVANT_MSG"*/, 0LL);
        v47 = (System_Int32_array **)Instance;
        if ( !Instance || (Instance = sub_B0D964(Instance, v40->obj.klass->_1.element_class)) != 0 )
        {
          if ( v40->max_length <= 1 )
            goto LABEL_56;
          v40->m_Items[1] = (System_String_o *)v47;
          sub_B0D840((BattleServantConfConponent_o *)&v40->m_Items[1], v47, v41, v42, v43, v44, v45, v46);
          Instance = StringLiteral_27/*"\n\n"*/;
          if ( StringLiteral_27/*"\n\n"*/ )
          {
            Instance = sub_B0D964(StringLiteral_27/*"\n\n"*/, v40->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_58;
            v54 = (System_Int32_array **)StringLiteral_27/*"\n\n"*/;
          }
          else
          {
            v54 = 0LL;
          }
          if ( v40->max_length <= 2 )
            goto LABEL_56;
          v40->m_Items[2] = (System_String_o *)v54;
          sub_B0D840((BattleServantConfConponent_o *)&v40->m_Items[2], v54, v48, v49, v50, v51, v52, v53);
          if ( !v18 || (Instance = sub_B0D964(v18, v40->obj.klass->_1.element_class)) != 0 )
          {
            if ( v40->max_length <= 3 )
              goto LABEL_56;
            v40->m_Items[3] = v18;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v40->m_Items[3],
              (System_Int32_array **)v18,
              v55,
              v56,
              v57,
              v58,
              v59,
              v60);
            Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12107/*"SET_ITEM_GET_ITEM_MSG"*/, 0LL);
            v67 = (System_Int32_array **)Instance;
            if ( !Instance || (Instance = sub_B0D964(Instance, v40->obj.klass->_1.element_class)) != 0 )
            {
              if ( v40->max_length <= 4 )
                goto LABEL_56;
              v40->m_Items[4] = (System_String_o *)v67;
              sub_B0D840((BattleServantConfConponent_o *)&v40->m_Items[4], v67, v61, v62, v63, v64, v65, v66);
              return System_String__Concat_43930028(v40, 0LL);
            }
          }
        }
      }
LABEL_58:
      v69 = sub_B0D99C(Instance);
      sub_B0D948(v69, 0LL);
    }
LABEL_57:
    sub_B0D97C(Instance);
  }
  if ( System_String__IsNullOrEmpty(v26, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(v18, 0LL) )
      return (System_String_o *)StringLiteral_1/*""*/;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12107/*"SET_ITEM_GET_ITEM_MSG"*/, 0LL);
    v33 = v18;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12108/*"SET_ITEM_GET_SERVANT_MSG"*/, 0LL);
    v33 = v26;
  }
  return System_String__Concat_43849904(v33, v32, 0LL);
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
  System_String_o *v14; // x19
  Il2CppObject *NumberFormat; // x23
  ShopDetailEntity_o *ShopDetailEntity; // x0
  ShopDetailEntity_o *v17; // x24
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  __int64 *v21; // x8
  System_String_o *v23; // x0
  bool isQuest; // [xsp+Ch] [xbp-44h] BYREF
  bool isSend; // [xsp+18h] [xbp-38h] BYREF
  bool isTake; // [xsp+1Ch] [xbp-34h] BYREF

  v6 = item;
  if ( (byte_42160FA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopDetailMaster___, entity);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&StringLiteral_12173/*"SHOP_BUY_SUCCESS_SEND_PRESENT_BOX"*/, v9);
    sub_B0D8A4(&StringLiteral_12170/*"SHOP_BUY_SUCCESS"*/, v10);
    sub_B0D8A4(&StringLiteral_12172/*"SHOP_BUY_SUCCESS_SEND_MIX"*/, v11);
    item = (ShopBuyItemListViewItem_o *)sub_B0D8A4(&StringLiteral_12171/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v12);
    byte_42160FA = 1;
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
    || (v14 = (System_String_o *)item,
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(entity->fields.setNum * buyCount, 0LL),
        (item = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (item = (ShopBuyItemListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)item,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopDetailMaster___)) == 0LL )
  {
LABEL_38:
    sub_B0D97C(item);
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
    v18 = System_String__Format(v14, NumberFormat, 0LL);
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
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12171/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v20 = System_String__Format(v19, NumberFormat, 0LL);
    v18 = System_String__Concat_43849904(v14, v20, 0LL);
  }
  v14 = v18;
LABEL_21:
  if ( isSend && isTake )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = &StringLiteral_12172/*"SHOP_BUY_SUCCESS_SEND_MIX"*/;
  }
  else if ( isSend )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = &StringLiteral_12173/*"SHOP_BUY_SUCCESS_SEND_PRESENT_BOX"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = &StringLiteral_12170/*"SHOP_BUY_SUCCESS"*/;
  }
  v23 = LocalizationManager__Get((System_String_o *)*v21, 0LL);
  return System_String__Format(v23, (Il2CppObject *)v14, 0LL);
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
  WarEntity_o *entitya; // [xsp+8h] [xbp-28h] BYREF

  v4 = entity;
  if ( (byte_42160FB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ShopDetailMaster___, *(_QWORD *)&buyCount);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_12170/*"SHOP_BUY_SUCCESS"*/, v8);
    entity = (ShopEntity_o *)sub_B0D8A4(&StringLiteral_12171/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v9);
    byte_42160FB = 1;
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
  v11 = LocalizationManager__ReplaceCommonTag(Name, 0, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.setNum * buyCount, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  entity = (ShopEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ShopDetailMaster___);
  if ( !entity )
    goto LABEL_25;
  entity = (ShopEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)entity,
                             &entitya,
                             v4->fields.id,
                             (const MethodInfo_2669C30 *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__);
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
    sub_B0D97C(entity);
  }
LABEL_14:
  if ( v4->fields.setNum * buyCount >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12171/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v14 = System_String__Format(v13, NumberFormat, 0LL);
    v11 = System_String__Concat_43849904(v11, v14, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12170/*"SHOP_BUY_SUCCESS"*/, 0LL);
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
  if ( (byte_42160FD & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, itemEntity);
    sub_B0D8A4(&StringLiteral_1664/*"ADD_USER_ITEM_MSG"*/, v5);
    sub_B0D8A4(&StringLiteral_1665/*"ADD_USER_QP_MSG"*/, v6);
    sub_B0D8A4(&StringLiteral_1666/*"ADD_USER_SVT_COIN_MSG"*/, v7);
    shopEntity = (ShopEntity_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_42160FD = 1;
  }
  if ( !v4 )
    goto LABEL_22;
  if ( v4->fields.purchaseType != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !itemEntity )
LABEL_22:
    sub_B0D97C(shopEntity);
  type = itemEntity->fields.type;
  if ( type == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = &StringLiteral_1665/*"ADD_USER_QP_MSG"*/;
  }
  else if ( type == 29 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = &StringLiteral_1666/*"ADD_USER_SVT_COIN_MSG"*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = &StringLiteral_1664/*"ADD_USER_ITEM_MSG"*/;
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
  ItemMaster_o *v10; // x23
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
  Il2CppObject *v31; // x0
  System_String_o *v32; // x21
  const MethodInfo *v33; // x1
  System_String_o *AddNewLine; // x0
  System_String_o *v35; // x19
  System_String_o *v36; // x20
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  int v39; // [xsp+Ch] [xbp-34h] BYREF

  v10 = itemMaster;
  if ( (byte_42160FF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, entity);
    sub_B0D8A4(&int_TypeInfo, v11);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_12171/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v13);
    sub_B0D8A4(&StringLiteral_12109/*"SET_ITEM_INDIVIDUAL"*/, v14);
    itemMaster = (ItemMaster_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v15);
    byte_42160FF = 1;
  }
  if ( !setItemEntity )
    goto LABEL_27;
  purchaseType = setItemEntity->fields.purchaseType;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  if ( purchaseType == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12171/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v39 = setItemEntity->fields.setNum * buyCount;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
    v32 = System_String__Format(v30, v31, 0LL);
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v33);
    v35 = System_String__Concat_43849904(v17, AddNewLine, 0LL);
    itemMaster = (ItemMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12109/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( v10 )
    {
      v36 = (System_String_o *)itemMaster;
      itemMaster = (ItemMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)v10,
                                     setItemEntity->fields.targetId,
                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( itemMaster )
      {
        v37 = (Il2CppObject *)System_String__Concat_43849904(itemMaster->fields._MasterName_k__BackingField, v32, 0LL);
        v38 = System_String__Format(v36, v37, 0LL);
        return System_String__Concat_43849904(v35, v38, 0LL);
      }
    }
LABEL_27:
    sub_B0D97C(itemMaster);
  }
  if ( purchaseType != 7 )
    return v17;
  if ( !entity )
    goto LABEL_27;
  Name = ShopEntity__getName(entity, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v19 = LocalizationManager__ReplaceCommonTag(Name, 0, 0LL);
  NumberFormat = LocalizationManager__GetNumberFormat(entity->fields.setNum * buyCount, 0LL);
  if ( NumberFormat && entity->fields.setNum * buyCount >= 1 )
  {
    v22 = (Il2CppObject *)NumberFormat;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12171/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v24 = System_String__Format(v23, v22, 0LL);
    v19 = System_String__Concat_43849904(v19, v24, 0LL);
  }
  v25 = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v21);
  v26 = System_String__Concat_43849904(v17, v25, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12109/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
  v28 = System_String__Format(v27, (Il2CppObject *)v19, 0LL);
  return System_String__Concat_43849904(v26, v28, 0LL);
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
  System_String_o *v20; // x25
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  const MethodInfo *v23; // x1
  int32_t purchaseType; // w8
  System_String_o *v25; // x22
  System_String_o *v26; // x0
  System_String_o *v27; // x21
  System_String_o *v28; // x23
  System_String_o *Name; // x0
  Il2CppObject *v30; // x0
  System_String_o *v31; // x1
  System_String_o *v32; // x0
  System_String_o *AddNewLine; // x0
  System_String_o *v34; // x20
  System_String_o *v35; // x23
  Il2CppObject *v36; // x0
  int v38; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4216100 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, itemMaster);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B0D8A4(&int_TypeInfo, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_12171/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v15);
    sub_B0D8A4(&StringLiteral_12109/*"SET_ITEM_INDIVIDUAL"*/, v16);
    sub_B0D8A4(&StringLiteral_1/*""*/, v17);
    byte_4216100 = 1;
  }
  v18 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12171/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
  if ( !setItemEntity )
    goto LABEL_23;
  v20 = (System_String_o *)v19;
  v38 = setItemEntity->fields.setNum * buyCount;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  v22 = System_String__Format(v20, v21, 0LL);
  purchaseType = setItemEntity->fields.purchaseType;
  v25 = v22;
  if ( purchaseType == 18 )
  {
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v23);
    v34 = System_String__Concat_43849904(v18, AddNewLine, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12109/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( itemMaster )
    {
      v35 = (System_String_o *)v19;
      v19 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)itemMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( v19 )
      {
        v36 = (Il2CppObject *)System_String__Concat_43849904(*((System_String_o **)v19 + 3), v25, 0LL);
        v31 = System_String__Format(v35, v36, 0LL);
        v32 = v34;
        return System_String__Concat_43849904(v32, v31, 0LL);
      }
    }
LABEL_23:
    sub_B0D97C(v19);
  }
  if ( purchaseType == 4 )
  {
    v26 = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v23);
    v27 = System_String__Concat_43849904(v18, v26, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12109/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( servantMaster )
    {
      v28 = (System_String_o *)v19;
      v19 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v19 )
      {
        Name = ServantEntity__getName((ServantEntity_o *)v19, 0, -1, 0LL);
        v30 = (Il2CppObject *)System_String__Concat_43849904(Name, v25, 0LL);
        v31 = System_String__Format(v28, v30, 0LL);
        v32 = v27;
        return System_String__Concat_43849904(v32, v31, 0LL);
      }
    }
    goto LABEL_23;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}