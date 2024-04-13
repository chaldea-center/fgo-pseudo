System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetAddNewLine(
        System_String_o *message,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  bool IsNullOrEmpty; // w0
  System_String_o **v9; // x8

  if ( (byte_42EA6AC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EA6AC = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(message, 0LL);
  v9 = (System_String_o **)&StringLiteral_1/*""*/;
  if ( !IsNullOrEmpty )
    v9 = (System_String_o **)&StringLiteral_26/*"\n"*/;
  return *v9;
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
        ShopEntity_o *entity,
        ItemEntity_o *itemEntity,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopEntity_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int32_t type; // w8
  int32_t klass; // w21
  UserGameEntity_o *SelfUserGame; // x21
  System_String_o *v29; // x22
  Il2CppObject *NumberFormat; // x19
  int32_t qp; // w0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x22
  Il2CppObject *v34; // x0

  v6 = entity;
  if ( (byte_42EA6A7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, (_DWORD)itemEntity, buyCount, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&NetworkManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_2687/*"BUY_AFTER_QP_NUM"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_2688/*"BUY_AFTER_USER_ITEM_NUM"*/, v19, v20, v21);
    entity = (ShopEntity_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v22, v23, v24);
    byte_42EA6A7 = 1;
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
          v29 = LocalizationManager__Get((System_String_o *)StringLiteral_2688/*"BUY_AFTER_USER_ITEM_NUM"*/, 0LL);
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
      sub_B5D69C(entity, itemEntity);
    }
LABEL_26:
    entity = (ShopEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( entity )
    {
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)entity,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
  entity = (ShopEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2687/*"BUY_AFTER_QP_NUM"*/, 0LL);
  if ( !SelfUserGame )
    goto LABEL_38;
  v29 = (System_String_o *)entity;
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(
                                   SelfUserGame->fields.qp - v6->fields.setNum * buyCount,
                                   0LL);
  qp = SelfUserGame->fields.qp;
LABEL_37:
  v34 = (Il2CppObject *)LocalizationManager__GetNumberFormat(qp, 0LL);
  return System_String__Format_44573324(v29, NumberFormat, v34, 0LL);
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessage(
        ShopEntity_o *entity,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 Instance; // x0
  __int64 v37; // x1
  SetItemMaster_o *v38; // x19
  SetItemEntity_array *List; // x22
  System_String_o *v40; // x19
  ServantMaster_o *MasterData_WarQuestSelectionMaster; // x24
  ItemMaster_o *v42; // x25
  ShopEntity_o *v43; // x2
  const MethodInfo *v44; // x6
  __int64 v45; // x23
  __int64 v46; // x8
  unsigned __int64 v47; // x28
  System_String_o *v48; // x23
  SetItemEntity_o *v49; // x26
  System_String_o *RequestResultPresentBoxMessage; // x0
  const MethodInfo *v51; // x5
  System_String_o *UserItemMessage; // x0
  System_String_o *v54; // x1
  System_String_o *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array *v62; // x20
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x21
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x19
  __int64 v90; // x0
  __int64 v91; // x0

  if ( (byte_42EA6A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, buyCount, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SetItemMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopDetailMaster___, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&string___TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_12217/*"SET_ITEM_GET_SERVANT_MSG"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_27/*"\n\n"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_12216/*"SET_ITEM_GET_ITEM_MSG"*/, v33, v34, v35);
    byte_42EA6A9 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SetItemMaster___);
  if ( !entity )
    goto LABEL_57;
  v38 = (SetItemMaster_o *)Instance;
  Instance = ShopEntity__get_TargetId(entity, 0LL);
  if ( !v38 )
    goto LABEL_57;
  List = SetItemMaster__GetList(v38, Instance, 0LL);
  v40 = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_WarQuestSelectionMaster = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  v42 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopDetailMaster___);
  if ( !Instance )
    goto LABEL_57;
  Instance = (__int64)ShopDetailMaster__getShopDetailEntity((ShopDetailMaster_o *)Instance, entity->fields.id, 0LL);
  if ( Instance )
  {
    v45 = Instance;
    Instance = System_String__IsNullOrEmpty(*(System_String_o **)(Instance + 40), 0LL);
    if ( (Instance & 1) == 0 )
      return *(System_String_o **)(v45 + 40);
  }
  if ( !List )
    goto LABEL_57;
  v46 = *(_QWORD *)&List->max_length;
  if ( (int)v46 >= 1 )
  {
    v47 = 0LL;
    v48 = v40;
    while ( v47 < (unsigned int)v46 )
    {
      v49 = List->m_Items[v47];
      RequestResultPresentBoxMessage = ShopRequestResultDialogMessageMaker__GetRequestResultPresentBoxMessage(
                                         MasterData_WarQuestSelectionMaster,
                                         v42,
                                         v43,
                                         v49,
                                         v48,
                                         buyCount,
                                         v44);
      v48 = System_String__Concat_44577788(v48, RequestResultPresentBoxMessage, 0LL);
      UserItemMessage = ShopRequestResultDialogMessageMaker__GetRequestResultGetUserItemMessage(
                          v42,
                          entity,
                          v49,
                          v40,
                          buyCount,
                          v51);
      Instance = (__int64)System_String__Concat_44577788(v40, UserItemMessage, 0LL);
      LODWORD(v46) = List->max_length;
      ++v47;
      v40 = (System_String_o *)Instance;
      if ( (__int64)v47 >= (int)v46 )
        goto LABEL_20;
    }
LABEL_56:
    v90 = sub_B5D6C8(Instance);
    sub_B5D668(v90, 0LL);
  }
  v48 = v40;
LABEL_20:
  if ( !System_String__IsNullOrEmpty(v48, 0LL) && !System_String__IsNullOrEmpty(v40, 0LL) )
  {
    Instance = sub_B5D5DC(string___TypeInfo, 5LL);
    if ( Instance )
    {
      v62 = (System_String_array *)Instance;
      if ( !v48 || (Instance = sub_B5D684(v48, *(_QWORD *)(*(_QWORD *)Instance + 64LL))) != 0 )
      {
        if ( !v62->max_length )
          goto LABEL_56;
        v62->m_Items[0] = v48;
        sub_B5D560(
          (BattleServantConfConponent_o *)v62->m_Items,
          (System_Int32_array **)v48,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12217/*"SET_ITEM_GET_SERVANT_MSG"*/, 0LL);
        v69 = (System_Int32_array **)Instance;
        if ( !Instance || (Instance = sub_B5D684(Instance, v62->obj.klass->_1.element_class)) != 0 )
        {
          if ( v62->max_length <= 1 )
            goto LABEL_56;
          v62->m_Items[1] = (System_String_o *)v69;
          sub_B5D560((BattleServantConfConponent_o *)&v62->m_Items[1], v69, v63, v64, v65, v66, v67, v68);
          Instance = StringLiteral_27/*"\n\n"*/;
          if ( StringLiteral_27/*"\n\n"*/ )
          {
            Instance = sub_B5D684(StringLiteral_27/*"\n\n"*/, v62->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_58;
            v76 = (System_Int32_array **)StringLiteral_27/*"\n\n"*/;
          }
          else
          {
            v76 = 0LL;
          }
          if ( v62->max_length <= 2 )
            goto LABEL_56;
          v62->m_Items[2] = (System_String_o *)v76;
          sub_B5D560((BattleServantConfConponent_o *)&v62->m_Items[2], v76, v70, v71, v72, v73, v74, v75);
          if ( !v40 || (Instance = sub_B5D684(v40, v62->obj.klass->_1.element_class)) != 0 )
          {
            if ( v62->max_length <= 3 )
              goto LABEL_56;
            v62->m_Items[3] = v40;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v62->m_Items[3],
              (System_Int32_array **)v40,
              v77,
              v78,
              v79,
              v80,
              v81,
              v82);
            Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12216/*"SET_ITEM_GET_ITEM_MSG"*/, 0LL);
            v89 = (System_Int32_array **)Instance;
            if ( !Instance || (Instance = sub_B5D684(Instance, v62->obj.klass->_1.element_class)) != 0 )
            {
              if ( v62->max_length <= 4 )
                goto LABEL_56;
              v62->m_Items[4] = (System_String_o *)v89;
              sub_B5D560((BattleServantConfConponent_o *)&v62->m_Items[4], v89, v83, v84, v85, v86, v87, v88);
              return System_String__Concat_44657912(v62, 0LL);
            }
          }
        }
      }
LABEL_58:
      v91 = sub_B5D6BC(Instance);
      sub_B5D668(v91, 0LL);
    }
LABEL_57:
    sub_B5D69C(Instance, v37);
  }
  if ( System_String__IsNullOrEmpty(v48, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(v40, 0LL) )
      return (System_String_o *)StringLiteral_1/*""*/;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12216/*"SET_ITEM_GET_ITEM_MSG"*/, 0LL);
    v55 = v40;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12217/*"SET_ITEM_GET_SERVANT_MSG"*/, 0LL);
    v55 = v48;
  }
  return System_String__Concat_44577788(v55, v54, 0LL);
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageNormal(
        ShopBuyItemListViewItem_o *item,
        ShopEntity_o *entity,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopBuyItemListViewItem_o *v6; // x22
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  System_String_o *BulkNameText; // x19
  System_String_o *v26; // x19
  Il2CppObject *NumberFormat; // x23
  ShopDetailEntity_o *ShopDetailEntity; // x0
  ShopDetailEntity_o *v29; // x24
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  __int64 *v33; // x8
  System_String_o *v35; // x0
  bool isQuest; // [xsp+Ch] [xbp-44h] BYREF
  bool isSend; // [xsp+18h] [xbp-38h] BYREF
  bool isTake; // [xsp+1Ch] [xbp-34h] BYREF

  v6 = item;
  if ( (byte_42EA6A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopDetailMaster___, (_DWORD)entity, buyCount, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_12282/*"SHOP_BUY_SUCCESS_SEND_PRESENT_BOX"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_12279/*"SHOP_BUY_SUCCESS"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_12281/*"SHOP_BUY_SUCCESS_SEND_MIX"*/, v19, v20, v21);
    item = (ShopBuyItemListViewItem_o *)sub_B5D5C4(&StringLiteral_12280/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v22, v23, v24);
    byte_42EA6A5 = 1;
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
    || (v26 = (System_String_o *)item,
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(entity->fields.setNum * buyCount, 0LL),
        (item = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (item = (ShopBuyItemListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)item,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopDetailMaster___)) == 0LL )
  {
LABEL_38:
    sub_B5D69C(item, entity);
  }
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity((ShopDetailMaster_o *)item, entity->fields.id, 0LL);
  if ( ShopDetailEntity )
  {
    v29 = ShopDetailEntity;
    if ( !System_String__IsNullOrEmpty(ShopDetailEntity->fields.afterMessage, 0LL) )
      return v29->fields.afterMessage;
  }
  if ( ShopBuyItemListViewItem__get_IsExchangeQP(v6, 0LL) )
  {
    v30 = System_String__Format(v26, NumberFormat, 0LL);
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
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12280/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v32 = System_String__Format(v31, NumberFormat, 0LL);
    v30 = System_String__Concat_44577788(v26, v32, 0LL);
  }
  v26 = v30;
LABEL_21:
  if ( isSend && isTake )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = &StringLiteral_12281/*"SHOP_BUY_SUCCESS_SEND_MIX"*/;
  }
  else if ( isSend )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = &StringLiteral_12282/*"SHOP_BUY_SUCCESS_SEND_PRESENT_BOX"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = &StringLiteral_12279/*"SHOP_BUY_SUCCESS"*/;
  }
  v35 = LocalizationManager__Get((System_String_o *)*v33, 0LL);
  return System_String__Format(v35, (Il2CppObject *)v26, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageStoneFragments(
        ShopEntity_o *entity,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ShopEntity_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_String_o *Name; // x21
  System_String_o *v22; // x21
  Il2CppObject *NumberFormat; // x22
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  WarEntity_o *entitya; // [xsp+8h] [xbp-28h] BYREF

  v5 = entity;
  if ( (byte_42EA6A6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ShopDetailMaster___, buyCount, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_12279/*"SHOP_BUY_SUCCESS"*/, v15, v16, v17);
    entity = (ShopEntity_o *)sub_B5D5C4(&StringLiteral_12280/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v18, v19, v20);
    byte_42EA6A6 = 1;
  }
  entitya = 0LL;
  if ( !v5 )
    goto LABEL_25;
  Name = ShopEntity__getName(v5, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = LocalizationManager__ReplaceCommonTag(Name, 0, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v5->fields.setNum * buyCount, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  entity = (ShopEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopDetailMaster___);
  if ( !entity )
    goto LABEL_25;
  entity = (ShopEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)entity,
                             &entitya,
                             v5->fields.id,
                             (const MethodInfo_23FAE6C *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__);
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
    sub_B5D69C(entity, *(_QWORD *)&buyCount);
  }
LABEL_14:
  if ( v5->fields.setNum * buyCount >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12280/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v25 = System_String__Format(v24, NumberFormat, 0LL);
    v22 = System_String__Concat_44577788(v22, v25, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12279/*"SHOP_BUY_SUCCESS"*/, 0LL);
  return System_String__Format(v26, (Il2CppObject *)v22, 0LL);
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
        ShopEntity_o *shopEntity,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ShopEntity_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t type; // w8
  __int64 *v19; // x8

  v5 = shopEntity;
  if ( (byte_42EA6A8 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)itemEntity, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1681/*"ADD_USER_ITEM_MSG"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1682/*"ADD_USER_QP_MSG"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1683/*"ADD_USER_SVT_COIN_MSG"*/, v12, v13, v14);
    shopEntity = (ShopEntity_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42EA6A8 = 1;
  }
  if ( !v5 )
    goto LABEL_22;
  if ( v5->fields.purchaseType != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !itemEntity )
LABEL_22:
    sub_B5D69C(shopEntity, itemEntity);
  type = itemEntity->fields.type;
  if ( type == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = &StringLiteral_1682/*"ADD_USER_QP_MSG"*/;
  }
  else if ( type == 29 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = &StringLiteral_1683/*"ADD_USER_SVT_COIN_MSG"*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = &StringLiteral_1681/*"ADD_USER_ITEM_MSG"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v19, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int32_t purchaseType; // w8
  System_String_o *v27; // x20
  System_String_o *Name; // x22
  System_String_o *v29; // x22
  System_String_o *NumberFormat; // x0
  const MethodInfo *v31; // x1
  Il2CppObject *v32; // x23
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  System_String_o *v36; // x19
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  System_String_o *v40; // x24
  Il2CppObject *v41; // x0
  System_String_o *v42; // x21
  const MethodInfo *v43; // x1
  System_String_o *AddNewLine; // x0
  System_String_o *v45; // x19
  System_String_o *v46; // x20
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  int v49; // [xsp+Ch] [xbp-34h] BYREF

  v10 = itemMaster;
  if ( (byte_42EA6AA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__,
      (_DWORD)entity,
      (_DWORD)setItemEntity,
      getUserItemMessage);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_12280/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_12218/*"SET_ITEM_INDIVIDUAL"*/, v20, v21, v22);
    itemMaster = (ItemMaster_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    byte_42EA6AA = 1;
  }
  if ( !setItemEntity )
    goto LABEL_27;
  purchaseType = setItemEntity->fields.purchaseType;
  v27 = (System_String_o *)StringLiteral_1/*""*/;
  if ( purchaseType == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12280/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v49 = setItemEntity->fields.setNum * buyCount;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
    v42 = System_String__Format(v40, v41, 0LL);
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v43);
    v45 = System_String__Concat_44577788(v27, AddNewLine, 0LL);
    itemMaster = (ItemMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12218/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( v10 )
    {
      v46 = (System_String_o *)itemMaster;
      itemMaster = (ItemMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)v10,
                                     setItemEntity->fields.targetId,
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( itemMaster )
      {
        v47 = (Il2CppObject *)System_String__Concat_44577788(itemMaster->fields._MasterName_k__BackingField, v42, 0LL);
        v48 = System_String__Format(v46, v47, 0LL);
        return System_String__Concat_44577788(v45, v48, 0LL);
      }
    }
LABEL_27:
    sub_B5D69C(itemMaster, entity);
  }
  if ( purchaseType != 7 )
    return v27;
  if ( !entity )
    goto LABEL_27;
  Name = ShopEntity__getName(entity, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = LocalizationManager__ReplaceCommonTag(Name, 0, 0LL);
  NumberFormat = LocalizationManager__GetNumberFormat(entity->fields.setNum * buyCount, 0LL);
  if ( NumberFormat && entity->fields.setNum * buyCount >= 1 )
  {
    v32 = (Il2CppObject *)NumberFormat;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12280/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v34 = System_String__Format(v33, v32, 0LL);
    v29 = System_String__Concat_44577788(v29, v34, 0LL);
  }
  v35 = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v31);
  v36 = System_String__Concat_44577788(v27, v35, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12218/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
  v38 = System_String__Format(v37, (Il2CppObject *)v29, 0LL);
  return System_String__Concat_44577788(v36, v38, 0LL);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_String_o *v30; // x24
  void *v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x25
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  const MethodInfo *v36; // x1
  int32_t purchaseType; // w8
  System_String_o *v38; // x22
  System_String_o *v39; // x0
  System_String_o *v40; // x21
  System_String_o *v41; // x23
  System_String_o *Name; // x0
  Il2CppObject *v43; // x0
  System_String_o *v44; // x1
  System_String_o *v45; // x0
  System_String_o *AddNewLine; // x0
  System_String_o *v47; // x20
  System_String_o *v48; // x23
  Il2CppObject *v49; // x0
  int v51; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EA6AB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__,
      (_DWORD)itemMaster,
      (_DWORD)entity,
      setItemEntity);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&int_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12280/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_12218/*"SET_ITEM_INDIVIDUAL"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_1/*""*/, v27, v28, v29);
    byte_42EA6AB = 1;
  }
  v30 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12280/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
  if ( !setItemEntity )
    goto LABEL_23;
  v33 = (System_String_o *)v31;
  v51 = setItemEntity->fields.setNum * buyCount;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
  v35 = System_String__Format(v33, v34, 0LL);
  purchaseType = setItemEntity->fields.purchaseType;
  v38 = v35;
  if ( purchaseType == 18 )
  {
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v36);
    v47 = System_String__Concat_44577788(v30, AddNewLine, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12218/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( itemMaster )
    {
      v48 = (System_String_o *)v31;
      v31 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)itemMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( v31 )
      {
        v49 = (Il2CppObject *)System_String__Concat_44577788(*((System_String_o **)v31 + 3), v38, 0LL);
        v44 = System_String__Format(v48, v49, 0LL);
        v45 = v47;
        return System_String__Concat_44577788(v45, v44, 0LL);
      }
    }
LABEL_23:
    sub_B5D69C(v31, v32);
  }
  if ( purchaseType == 4 )
  {
    v39 = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v36);
    v40 = System_String__Concat_44577788(v30, v39, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12218/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( servantMaster )
    {
      v41 = (System_String_o *)v31;
      v31 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v31 )
      {
        Name = ServantEntity__getName((ServantEntity_o *)v31, 0, -1, 0LL);
        v43 = (Il2CppObject *)System_String__Concat_44577788(Name, v38, 0LL);
        v44 = System_String__Format(v41, v43, 0LL);
        v45 = v40;
        return System_String__Concat_44577788(v45, v44, 0LL);
      }
    }
    goto LABEL_23;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}