System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetAddNewLine(
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v3; // x1
  bool IsNullOrEmpty; // w0
  System_String_o **v5; // x8

  if ( (byte_41891C6 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_26/*"\n"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_41891C6 = 1;
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
  if ( (byte_41891C1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, itemEntity);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_2633/*"BUY_AFTER_QP_NUM"*/, v10);
    sub_B2C35C(&StringLiteral_2634/*"BUY_AFTER_USER_ITEM_NUM"*/, v11);
    entity = (ShopEntity_o *)sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_41891C1 = 1;
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
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2634/*"BUY_AFTER_USER_ITEM_NUM"*/, 0LL);
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
      sub_B2C434(entity, itemEntity);
    }
LABEL_26:
    entity = (ShopEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( entity )
    {
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)entity,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
  entity = (ShopEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2633/*"BUY_AFTER_QP_NUM"*/, 0LL);
  if ( !SelfUserGame )
    goto LABEL_38;
  v17 = (System_String_o *)entity;
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(
                                   SelfUserGame->fields.qp - v6->fields.setNum * buyCount,
                                   0LL);
  qp = SelfUserGame->fields.qp;
LABEL_37:
  v22 = (Il2CppObject *)LocalizationManager__GetNumberFormat(qp, 0LL);
  return System_String__Format_44301068(v17, NumberFormat, v22, 0LL);
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
  SetItemEntity_array *List; // x22
  System_String_o *v19; // x19
  ServantMaster_o *MasterData_WarQuestSelectionMaster; // x24
  ItemMaster_o *v21; // x25
  ShopEntity_o *v22; // x2
  const MethodInfo *v23; // x6
  __int64 v24; // x23
  __int64 v25; // x8
  unsigned __int64 v26; // x28
  System_String_o *v27; // x23
  SetItemEntity_o *v28; // x26
  System_String_o *RequestResultPresentBoxMessage; // x0
  const MethodInfo *v30; // x5
  System_String_o *UserItemMessage; // x0
  System_String_o *v33; // x1
  System_String_o *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x19
  __int64 v69; // x0
  __int64 v70; // x0

  if ( (byte_41891C3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&buyCount);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_SetItemMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopDetailMaster___, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&string___TypeInfo, v10);
    sub_B2C35C(&StringLiteral_12070/*"SET_ITEM_GET_SERVANT_MSG"*/, v11);
    sub_B2C35C(&StringLiteral_27/*"\n\n"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    sub_B2C35C(&StringLiteral_12069/*"SET_ITEM_GET_ITEM_MSG"*/, v14);
    byte_41891C3 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SetItemMaster___);
  if ( !entity )
    goto LABEL_57;
  v17 = (SetItemMaster_o *)Instance;
  Instance = ShopEntity__get_TargetId(entity, 0LL);
  if ( !v17 )
    goto LABEL_57;
  List = SetItemMaster__GetList(v17, Instance, 0LL);
  v19 = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_WarQuestSelectionMaster = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  v21 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopDetailMaster___);
  if ( !Instance )
    goto LABEL_57;
  Instance = (__int64)ShopDetailMaster__getShopDetailEntity((ShopDetailMaster_o *)Instance, entity->fields.id, 0LL);
  if ( Instance )
  {
    v24 = Instance;
    Instance = System_String__IsNullOrEmpty(*(System_String_o **)(Instance + 40), 0LL);
    if ( (Instance & 1) == 0 )
      return *(System_String_o **)(v24 + 40);
  }
  if ( !List )
    goto LABEL_57;
  v25 = *(_QWORD *)&List->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    v27 = v19;
    while ( v26 < (unsigned int)v25 )
    {
      v28 = List->m_Items[v26];
      RequestResultPresentBoxMessage = ShopRequestResultDialogMessageMaker__GetRequestResultPresentBoxMessage(
                                         MasterData_WarQuestSelectionMaster,
                                         v21,
                                         v22,
                                         v28,
                                         v27,
                                         buyCount,
                                         v23);
      v27 = System_String__Concat_44305532(v27, RequestResultPresentBoxMessage, 0LL);
      UserItemMessage = ShopRequestResultDialogMessageMaker__GetRequestResultGetUserItemMessage(
                          v21,
                          entity,
                          v28,
                          v19,
                          buyCount,
                          v30);
      Instance = (__int64)System_String__Concat_44305532(v19, UserItemMessage, 0LL);
      LODWORD(v25) = List->max_length;
      ++v26;
      v19 = (System_String_o *)Instance;
      if ( (__int64)v26 >= (int)v25 )
        goto LABEL_20;
    }
LABEL_56:
    v69 = sub_B2C460(Instance);
    sub_B2C400(v69, 0LL);
  }
  v27 = v19;
LABEL_20:
  if ( !System_String__IsNullOrEmpty(v27, 0LL) && !System_String__IsNullOrEmpty(v19, 0LL) )
  {
    Instance = sub_B2C374(string___TypeInfo, 5LL);
    if ( Instance )
    {
      v41 = (System_String_array *)Instance;
      if ( !v27 || (Instance = sub_B2C41C(v27, *(_QWORD *)(*(_QWORD *)Instance + 64LL))) != 0 )
      {
        if ( !v41->max_length )
          goto LABEL_56;
        v41->m_Items[0] = v27;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)v41->m_Items,
          (System_Int32_array **)v27,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12070/*"SET_ITEM_GET_SERVANT_MSG"*/, 0LL);
        v48 = (System_Int32_array **)Instance;
        if ( !Instance || (Instance = sub_B2C41C(Instance, v41->obj.klass->_1.element_class)) != 0 )
        {
          if ( v41->max_length <= 1 )
            goto LABEL_56;
          v41->m_Items[1] = (System_String_o *)v48;
          sub_B2C2F8((BattleServantConfConponent_o *)&v41->m_Items[1], v48, v42, v43, v44, v45, v46, v47);
          Instance = StringLiteral_27/*"\n\n"*/;
          if ( StringLiteral_27/*"\n\n"*/ )
          {
            Instance = sub_B2C41C(StringLiteral_27/*"\n\n"*/, v41->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_58;
            v55 = (System_Int32_array **)StringLiteral_27/*"\n\n"*/;
          }
          else
          {
            v55 = 0LL;
          }
          if ( v41->max_length <= 2 )
            goto LABEL_56;
          v41->m_Items[2] = (System_String_o *)v55;
          sub_B2C2F8((BattleServantConfConponent_o *)&v41->m_Items[2], v55, v49, v50, v51, v52, v53, v54);
          if ( !v19 || (Instance = sub_B2C41C(v19, v41->obj.klass->_1.element_class)) != 0 )
          {
            if ( v41->max_length <= 3 )
              goto LABEL_56;
            v41->m_Items[3] = v19;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v41->m_Items[3],
              (System_Int32_array **)v19,
              v56,
              v57,
              v58,
              v59,
              v60,
              v61);
            Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12069/*"SET_ITEM_GET_ITEM_MSG"*/, 0LL);
            v68 = (System_Int32_array **)Instance;
            if ( !Instance || (Instance = sub_B2C41C(Instance, v41->obj.klass->_1.element_class)) != 0 )
            {
              if ( v41->max_length <= 4 )
                goto LABEL_56;
              v41->m_Items[4] = (System_String_o *)v68;
              sub_B2C2F8((BattleServantConfConponent_o *)&v41->m_Items[4], v68, v62, v63, v64, v65, v66, v67);
              return System_String__Concat_44385656(v41, 0LL);
            }
          }
        }
      }
LABEL_58:
      v70 = sub_B2C454(Instance);
      sub_B2C400(v70, 0LL);
    }
LABEL_57:
    sub_B2C434(Instance, v16);
  }
  if ( System_String__IsNullOrEmpty(v27, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(v19, 0LL) )
      return (System_String_o *)StringLiteral_1/*""*/;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12069/*"SET_ITEM_GET_ITEM_MSG"*/, 0LL);
    v34 = v19;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12070/*"SET_ITEM_GET_SERVANT_MSG"*/, 0LL);
    v34 = v27;
  }
  return System_String__Concat_44305532(v34, v33, 0LL);
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
  if ( (byte_41891BF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopDetailMaster___, entity);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&StringLiteral_12135/*"SHOP_BUY_SUCCESS_SEND_PRESENT_BOX"*/, v9);
    sub_B2C35C(&StringLiteral_12132/*"SHOP_BUY_SUCCESS"*/, v10);
    sub_B2C35C(&StringLiteral_12134/*"SHOP_BUY_SUCCESS_SEND_MIX"*/, v11);
    item = (ShopBuyItemListViewItem_o *)sub_B2C35C(&StringLiteral_12133/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v12);
    byte_41891BF = 1;
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
        (item = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (item = (ShopBuyItemListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)item,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopDetailMaster___)) == 0LL )
  {
LABEL_38:
    sub_B2C434(item, entity);
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
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12133/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v20 = System_String__Format(v19, NumberFormat, 0LL);
    v18 = System_String__Concat_44305532(v14, v20, 0LL);
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
    v21 = &StringLiteral_12134/*"SHOP_BUY_SUCCESS_SEND_MIX"*/;
  }
  else if ( isSend )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = &StringLiteral_12135/*"SHOP_BUY_SUCCESS_SEND_PRESENT_BOX"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = &StringLiteral_12132/*"SHOP_BUY_SUCCESS"*/;
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
  if ( (byte_41891C0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ShopDetailMaster___, *(_QWORD *)&buyCount);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_12132/*"SHOP_BUY_SUCCESS"*/, v8);
    entity = (ShopEntity_o *)sub_B2C35C(&StringLiteral_12133/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v9);
    byte_41891C0 = 1;
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
  entity = (ShopEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ShopDetailMaster___);
  if ( !entity )
    goto LABEL_25;
  entity = (ShopEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)entity,
                             &entitya,
                             v4->fields.id,
                             (const MethodInfo_24E412C *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__);
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
    sub_B2C434(entity, *(_QWORD *)&buyCount);
  }
LABEL_14:
  if ( v4->fields.setNum * buyCount >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12133/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v14 = System_String__Format(v13, NumberFormat, 0LL);
    v11 = System_String__Concat_44305532(v11, v14, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12132/*"SHOP_BUY_SUCCESS"*/, 0LL);
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
  if ( (byte_41891C2 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, itemEntity);
    sub_B2C35C(&StringLiteral_1656/*"ADD_USER_ITEM_MSG"*/, v5);
    sub_B2C35C(&StringLiteral_1657/*"ADD_USER_QP_MSG"*/, v6);
    sub_B2C35C(&StringLiteral_1658/*"ADD_USER_SVT_COIN_MSG"*/, v7);
    shopEntity = (ShopEntity_o *)sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_41891C2 = 1;
  }
  if ( !v4 )
    goto LABEL_22;
  if ( v4->fields.purchaseType != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !itemEntity )
LABEL_22:
    sub_B2C434(shopEntity, itemEntity);
  type = itemEntity->fields.type;
  if ( type == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = &StringLiteral_1657/*"ADD_USER_QP_MSG"*/;
  }
  else if ( type == 29 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = &StringLiteral_1658/*"ADD_USER_SVT_COIN_MSG"*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = &StringLiteral_1656/*"ADD_USER_ITEM_MSG"*/;
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
  if ( (byte_41891C4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, entity);
    sub_B2C35C(&int_TypeInfo, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_12133/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v13);
    sub_B2C35C(&StringLiteral_12071/*"SET_ITEM_INDIVIDUAL"*/, v14);
    itemMaster = (ItemMaster_o *)sub_B2C35C(&StringLiteral_1/*""*/, v15);
    byte_41891C4 = 1;
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
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12133/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v39 = setItemEntity->fields.setNum * buyCount;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
    v32 = System_String__Format(v30, v31, 0LL);
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v33);
    v35 = System_String__Concat_44305532(v17, AddNewLine, 0LL);
    itemMaster = (ItemMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12071/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( v10 )
    {
      v36 = (System_String_o *)itemMaster;
      itemMaster = (ItemMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)v10,
                                     setItemEntity->fields.targetId,
                                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( itemMaster )
      {
        v37 = (Il2CppObject *)System_String__Concat_44305532(itemMaster->fields._MasterName_k__BackingField, v32, 0LL);
        v38 = System_String__Format(v36, v37, 0LL);
        return System_String__Concat_44305532(v35, v38, 0LL);
      }
    }
LABEL_27:
    sub_B2C434(itemMaster, entity);
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
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12133/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v24 = System_String__Format(v23, v22, 0LL);
    v19 = System_String__Concat_44305532(v19, v24, 0LL);
  }
  v25 = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v21);
  v26 = System_String__Concat_44305532(v17, v25, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12071/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
  v28 = System_String__Format(v27, (Il2CppObject *)v19, 0LL);
  return System_String__Concat_44305532(v26, v28, 0LL);
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
  System_String_o *v21; // x25
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  const MethodInfo *v24; // x1
  int32_t purchaseType; // w8
  System_String_o *v26; // x22
  System_String_o *v27; // x0
  System_String_o *v28; // x21
  System_String_o *v29; // x23
  System_String_o *Name; // x0
  Il2CppObject *v31; // x0
  System_String_o *v32; // x1
  System_String_o *v33; // x0
  System_String_o *AddNewLine; // x0
  System_String_o *v35; // x20
  System_String_o *v36; // x23
  Il2CppObject *v37; // x0
  int v39; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_41891C5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, itemMaster);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&int_TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_12133/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v15);
    sub_B2C35C(&StringLiteral_12071/*"SET_ITEM_INDIVIDUAL"*/, v16);
    sub_B2C35C(&StringLiteral_1/*""*/, v17);
    byte_41891C5 = 1;
  }
  v18 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12133/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
  if ( !setItemEntity )
    goto LABEL_23;
  v21 = (System_String_o *)v19;
  v39 = setItemEntity->fields.setNum * buyCount;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
  v23 = System_String__Format(v21, v22, 0LL);
  purchaseType = setItemEntity->fields.purchaseType;
  v26 = v23;
  if ( purchaseType == 18 )
  {
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v24);
    v35 = System_String__Concat_44305532(v18, AddNewLine, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12071/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( itemMaster )
    {
      v36 = (System_String_o *)v19;
      v19 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)itemMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( v19 )
      {
        v37 = (Il2CppObject *)System_String__Concat_44305532(*((System_String_o **)v19 + 3), v26, 0LL);
        v32 = System_String__Format(v36, v37, 0LL);
        v33 = v35;
        return System_String__Concat_44305532(v33, v32, 0LL);
      }
    }
LABEL_23:
    sub_B2C434(v19, v20);
  }
  if ( purchaseType == 4 )
  {
    v27 = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v24);
    v28 = System_String__Concat_44305532(v18, v27, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12071/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( servantMaster )
    {
      v29 = (System_String_o *)v19;
      v19 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v19 )
      {
        Name = ServantEntity__getName((ServantEntity_o *)v19, 0, -1, 0LL);
        v31 = (Il2CppObject *)System_String__Concat_44305532(Name, v26, 0LL);
        v32 = System_String__Format(v29, v31, 0LL);
        v33 = v28;
        return System_String__Concat_44305532(v33, v32, 0LL);
      }
    }
    goto LABEL_23;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}