System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetAddNewLine(
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v3; // x1
  bool IsNullOrEmpty; // w0
  System_String_o **v5; // x8

  if ( (byte_40FB78A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_26, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40FB78A = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(message, 0LL);
  v5 = (System_String_o **)&StringLiteral_1;
  if ( !IsNullOrEmpty )
    v5 = (System_String_o **)&StringLiteral_26;
  return *v5;
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
        ShopEntity_o *entity,
        ItemEntity_o *itemEntity,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t type; // w8
  UserGameEntity_o *v14; // x0
  int32_t mana; // w21
  UserGameEntity_o *v17; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v19; // x0
  UserGameEntity_o *v20; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x22
  Il2CppObject *NumberFormat; // x19
  int32_t qp; // w0
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x22
  int32_t TargetId; // w0
  UserItemEntity_o *EntityDefinitely; // x0
  Il2CppObject *v30; // x0

  if ( (byte_40FB785 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, itemEntity);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_2622, v10);
    sub_B16FFC(&StringLiteral_2623, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40FB785 = 1;
  }
  if ( !entity )
    goto LABEL_38;
  if ( entity->fields.purchaseType != 1 )
    return (System_String_o *)StringLiteral_1;
  if ( !itemEntity )
    goto LABEL_38;
  type = itemEntity->fields.type;
  if ( type > 4 )
  {
    switch ( type )
    {
      case 5:
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
        if ( SelfUserGame )
        {
          mana = SelfUserGame->fields.mana;
          goto LABEL_33;
        }
        goto LABEL_38;
      case 13:
        v19 = UserGameMaster__getSelfUserGame(0LL);
        if ( v19 )
        {
          mana = UserGameEntity__GetFriendPoint(v19, 0LL);
          goto LABEL_33;
        }
        goto LABEL_38;
      case 22:
        v14 = UserGameMaster__getSelfUserGame(0LL);
        if ( v14 )
        {
          mana = v14->fields.rarePri;
LABEL_33:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2623, 0LL);
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(
                                           mana - entity->fields.setNum * buyCount,
                                           0LL);
          qp = mana;
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
      v17 = UserGameMaster__getSelfUserGame(0LL);
      if ( v17 )
      {
        mana = v17->fields.stone;
        goto LABEL_33;
      }
LABEL_38:
      sub_B170D4();
    }
LABEL_26:
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      TargetId = ShopEntity__get_TargetId(entity, 0LL);
      if ( MasterData_WarQuestSelectionMaster )
      {
        EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                             MasterData_WarQuestSelectionMaster,
                             UserId,
                             TargetId,
                             0LL);
        if ( EntityDefinitely )
        {
          mana = EntityDefinitely->fields.num;
          goto LABEL_33;
        }
      }
    }
    goto LABEL_38;
  }
  v20 = UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_2622, 0LL);
  if ( !v20 )
    goto LABEL_38;
  v22 = v21;
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(
                                   v20->fields.qp - entity->fields.setNum * buyCount,
                                   0LL);
  qp = v20->fields.qp;
LABEL_37:
  v30 = (Il2CppObject *)LocalizationManager__GetNumberFormat(qp, 0LL);
  return System_String__Format_43739268(v22, NumberFormat, v30, 0LL);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  SetItemMaster_o *v17; // x19
  int32_t TargetId; // w0
  SetItemEntity_array *List; // x22
  System_String_o *v20; // x19
  WebViewManager_o *v21; // x0
  ServantMaster_o *v22; // x24
  WebViewManager_o *v23; // x0
  ItemMaster_o *v24; // x25
  WebViewManager_o *v25; // x0
  ShopDetailMaster_o *v26; // x0
  __int64 ShopDetailEntity; // x0
  System_Int32_array **v28; // x1
  ShopEntity_o *v29; // x2
  const MethodInfo *v30; // x6
  __int64 v31; // x23
  __int64 v32; // x8
  unsigned __int64 v33; // x28
  System_String_o *v34; // x23
  SetItemEntity_o *v35; // x26
  System_String_o *RequestResultPresentBoxMessage; // x0
  const MethodInfo *v37; // x5
  System_String_o *UserItemMessage; // x0
  __int64 v40; // x2
  System_String_o *v41; // x1
  System_String_o *v42; // x0
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array *v48; // x20
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x21
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x19

  if ( (byte_40FB787 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&buyCount);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_SetItemMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopDetailMaster___, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&string___TypeInfo, v10);
    sub_B16FFC(&StringLiteral_12019, v11);
    sub_B16FFC(&StringLiteral_27, v12);
    sub_B16FFC(&StringLiteral_1, v13);
    sub_B16FFC(&StringLiteral_12018, v14);
    byte_40FB787 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SetItemMaster___);
  if ( !entity )
    goto LABEL_57;
  v17 = (SetItemMaster_o *)MasterData_WarQuestSelectionMaster;
  TargetId = ShopEntity__get_TargetId(entity, 0LL);
  if ( !v17 )
    goto LABEL_57;
  List = SetItemMaster__GetList(v17, TargetId, 0LL);
  v20 = (System_String_o *)StringLiteral_1;
  v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v21 )
    goto LABEL_57;
  v22 = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)v21,
                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v23 )
    goto LABEL_57;
  v24 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)v23,
                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v25 )
    goto LABEL_57;
  v26 = (ShopDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v25,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
  if ( !v26 )
    goto LABEL_57;
  ShopDetailEntity = (__int64)ShopDetailMaster__getShopDetailEntity(v26, entity->fields.id, 0LL);
  if ( ShopDetailEntity )
  {
    v31 = ShopDetailEntity;
    ShopDetailEntity = System_String__IsNullOrEmpty(*(System_String_o **)(ShopDetailEntity + 40), 0LL);
    if ( (ShopDetailEntity & 1) == 0 )
      return *(System_String_o **)(v31 + 40);
  }
  if ( !List )
    goto LABEL_57;
  v32 = *(_QWORD *)&List->max_length;
  if ( (int)v32 >= 1 )
  {
    v33 = 0LL;
    v34 = v20;
    while ( v33 < (unsigned int)v32 )
    {
      v35 = List->m_Items[v33];
      RequestResultPresentBoxMessage = ShopRequestResultDialogMessageMaker__GetRequestResultPresentBoxMessage(
                                         v22,
                                         v24,
                                         v29,
                                         v35,
                                         v34,
                                         buyCount,
                                         v30);
      v34 = System_String__Concat_43743732(v34, RequestResultPresentBoxMessage, 0LL);
      UserItemMessage = ShopRequestResultDialogMessageMaker__GetRequestResultGetUserItemMessage(
                          v24,
                          entity,
                          v35,
                          v20,
                          buyCount,
                          v37);
      ShopDetailEntity = (__int64)System_String__Concat_43743732(v20, UserItemMessage, 0LL);
      LODWORD(v32) = List->max_length;
      ++v33;
      v20 = (System_String_o *)ShopDetailEntity;
      if ( (__int64)v33 >= (int)v32 )
        goto LABEL_20;
    }
LABEL_56:
    sub_B17100(ShopDetailEntity, v28, v29);
    sub_B170A0();
  }
  v34 = v20;
LABEL_20:
  if ( !System_String__IsNullOrEmpty(v34, 0LL) && !System_String__IsNullOrEmpty(v20, 0LL) )
  {
    ShopDetailEntity = sub_B17014(string___TypeInfo, 5LL, v40);
    if ( ShopDetailEntity )
    {
      v48 = (System_String_array *)ShopDetailEntity;
      if ( !v34 || (ShopDetailEntity = sub_B170BC(v34, *(_QWORD *)(*(_QWORD *)ShopDetailEntity + 64LL))) != 0 )
      {
        if ( !v48->max_length )
          goto LABEL_56;
        v48->m_Items[0] = v34;
        sub_B16F98(
          (BattleServantConfConponent_o *)v48->m_Items,
          (System_Int32_array **)v34,
          (System_String_array **)v29,
          v43,
          v44,
          v45,
          v46,
          v47);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        ShopDetailEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12019, 0LL);
        v54 = (System_Int32_array **)ShopDetailEntity;
        if ( !ShopDetailEntity
          || (ShopDetailEntity = sub_B170BC(ShopDetailEntity, v48->obj.klass->_1.element_class)) != 0 )
        {
          if ( v48->max_length <= 1 )
            goto LABEL_56;
          v48->m_Items[1] = (System_String_o *)v54;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v48->m_Items[1],
            v54,
            (System_String_array **)v29,
            v49,
            v50,
            v51,
            v52,
            v53);
          ShopDetailEntity = StringLiteral_27;
          if ( StringLiteral_27 )
          {
            ShopDetailEntity = sub_B170BC(StringLiteral_27, v48->obj.klass->_1.element_class);
            if ( !ShopDetailEntity )
              goto LABEL_58;
            v28 = (System_Int32_array **)StringLiteral_27;
          }
          else
          {
            v28 = 0LL;
          }
          if ( v48->max_length <= 2 )
            goto LABEL_56;
          v48->m_Items[2] = (System_String_o *)v28;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v48->m_Items[2],
            v28,
            (System_String_array **)v29,
            v55,
            v56,
            v57,
            v58,
            v59);
          if ( !v20 || (ShopDetailEntity = sub_B170BC(v20, v48->obj.klass->_1.element_class)) != 0 )
          {
            if ( v48->max_length <= 3 )
              goto LABEL_56;
            v48->m_Items[3] = v20;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v48->m_Items[3],
              (System_Int32_array **)v20,
              (System_String_array **)v29,
              v60,
              v61,
              v62,
              v63,
              v64);
            ShopDetailEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12018, 0LL);
            v70 = (System_Int32_array **)ShopDetailEntity;
            if ( !ShopDetailEntity
              || (ShopDetailEntity = sub_B170BC(ShopDetailEntity, v48->obj.klass->_1.element_class)) != 0 )
            {
              if ( v48->max_length <= 4 )
                goto LABEL_56;
              v48->m_Items[4] = (System_String_o *)v70;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v48->m_Items[4],
                v70,
                (System_String_array **)v29,
                v65,
                v66,
                v67,
                v68,
                v69);
              return System_String__Concat_43823856(v48, 0LL);
            }
          }
        }
      }
LABEL_58:
      sub_B170F4(ShopDetailEntity);
      sub_B170A0();
    }
LABEL_57:
    sub_B170D4();
  }
  if ( System_String__IsNullOrEmpty(v34, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(v20, 0LL) )
      return (System_String_o *)StringLiteral_1;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12018, 0LL);
    v42 = v20;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12019, 0LL);
    v42 = v34;
  }
  return System_String__Concat_43743732(v42, v41, 0LL);
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageNormal(
        ShopBuyItemListViewItem_o *item,
        ShopEntity_o *entity,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *BulkNameText; // x19
  System_String_o *v14; // x0
  System_String_o *v15; // x19
  Il2CppObject *NumberFormat; // x23
  WebViewManager_o *Instance; // x0
  ShopDetailMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopDetailEntity_o *ShopDetailEntity; // x0
  ShopDetailEntity_o *v20; // x24
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  __int64 *v24; // x8
  System_String_o *v26; // x0
  bool isQuest; // [xsp+Ch] [xbp-44h] BYREF
  bool isSend; // [xsp+18h] [xbp-38h] BYREF
  bool isTake; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40FB783 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopDetailMaster___, entity);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_12084, v9);
    sub_B16FFC(&StringLiteral_12081, v10);
    sub_B16FFC(&StringLiteral_12083, v11);
    sub_B16FFC(&StringLiteral_12082, v12);
    byte_40FB783 = 1;
  }
  isTake = 0;
  isSend = 0;
  isQuest = 0;
  if ( !item )
    goto LABEL_38;
  ShopBuyItemListViewItem__GetSendType(item, &isTake, &isSend, &isQuest, 0LL);
  BulkNameText = ShopBuyItemListViewItem__get_BulkNameText(item, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__ReplaceCommonTag(BulkNameText, 0, 0LL);
  if ( !entity
    || (v15 = v14,
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(entity->fields.setNum * buyCount, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (ShopDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopDetailMaster___)) == 0LL )
  {
LABEL_38:
    sub_B170D4();
  }
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(MasterData_WarQuestSelectionMaster, entity->fields.id, 0LL);
  if ( ShopDetailEntity )
  {
    v20 = ShopDetailEntity;
    if ( !System_String__IsNullOrEmpty(ShopDetailEntity->fields.afterMessage, 0LL) )
      return v20->fields.afterMessage;
  }
  if ( ShopBuyItemListViewItem__get_IsExchangeQP(item, 0LL) )
  {
    v21 = System_String__Format(v15, NumberFormat, 0LL);
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
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12082, 0LL);
    v23 = System_String__Format(v22, NumberFormat, 0LL);
    v21 = System_String__Concat_43743732(v15, v23, 0LL);
  }
  v15 = v21;
LABEL_21:
  if ( isSend && isTake )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = &StringLiteral_12083;
  }
  else if ( isSend )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = &StringLiteral_12084;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = &StringLiteral_12081;
  }
  v26 = LocalizationManager__Get((System_String_o *)*v24, 0LL);
  return System_String__Format(v26, (Il2CppObject *)v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageStoneFragments(
        ShopEntity_o *entity,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *Name; // x21
  System_String_o *v11; // x21
  Il2CppObject *NumberFormat; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  WarEntity_o *entitya; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FB784 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ShopDetailMaster___, *(_QWORD *)&buyCount);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_12081, v8);
    sub_B16FFC(&StringLiteral_12082, v9);
    byte_40FB784 = 1;
  }
  entitya = 0LL;
  if ( !entity )
    goto LABEL_25;
  Name = ShopEntity__getName(entity, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__ReplaceCommonTag(Name, 0, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(entity->fields.setNum * buyCount, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ShopDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_25;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entitya,
         entity->fields.id,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__) )
  {
    if ( entitya )
    {
      if ( System_String__IsNullOrEmpty(entitya->fields.longName, 0LL) )
        goto LABEL_14;
      if ( entitya )
        return entitya->fields.longName;
    }
LABEL_25:
    sub_B170D4();
  }
LABEL_14:
  if ( entity->fields.setNum * buyCount >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12082, 0LL);
    v15 = System_String__Format(v14, NumberFormat, 0LL);
    v11 = System_String__Concat_43743732(v11, v15, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12081, 0LL);
  return System_String__Format(v16, (Il2CppObject *)v11, 0LL);
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
        ShopEntity_o *shopEntity,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t type; // w8
  __int64 *v10; // x8

  if ( (byte_40FB786 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, itemEntity);
    sub_B16FFC(&StringLiteral_1658, v5);
    sub_B16FFC(&StringLiteral_1659, v6);
    sub_B16FFC(&StringLiteral_1660, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_40FB786 = 1;
  }
  if ( !shopEntity )
    goto LABEL_22;
  if ( shopEntity->fields.purchaseType != 1 )
    return (System_String_o *)StringLiteral_1;
  if ( !itemEntity )
LABEL_22:
    sub_B170D4();
  type = itemEntity->fields.type;
  if ( type == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = &StringLiteral_1659;
  }
  else if ( type == 29 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = &StringLiteral_1660;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = &StringLiteral_1658;
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
  System_String_o *v36; // x0
  System_String_o *v37; // x20
  WarEntity_o *v38; // x0
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  int v41; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FB788 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, entity);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_12082, v13);
    sub_B16FFC(&StringLiteral_12020, v14);
    sub_B16FFC(&StringLiteral_1, v15);
    byte_40FB788 = 1;
  }
  if ( !setItemEntity )
    goto LABEL_27;
  purchaseType = setItemEntity->fields.purchaseType;
  v17 = (System_String_o *)StringLiteral_1;
  if ( purchaseType == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12082, 0LL);
    v41 = setItemEntity->fields.setNum * buyCount;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
    v32 = System_String__Format(v30, v31, 0LL);
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v33);
    v35 = System_String__Concat_43743732(v17, AddNewLine, 0LL);
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12020, 0LL);
    if ( itemMaster )
    {
      v37 = v36;
      v38 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)itemMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( v38 )
      {
        v39 = (Il2CppObject *)System_String__Concat_43743732(v38->fields.age, v32, 0LL);
        v40 = System_String__Format(v37, v39, 0LL);
        return System_String__Concat_43743732(v35, v40, 0LL);
      }
    }
LABEL_27:
    sub_B170D4();
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
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12082, 0LL);
    v24 = System_String__Format(v23, v22, 0LL);
    v19 = System_String__Concat_43743732(v19, v24, 0LL);
  }
  v25 = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v21);
  v26 = System_String__Concat_43743732(v17, v25, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12020, 0LL);
  v28 = System_String__Format(v27, (Il2CppObject *)v19, 0LL);
  return System_String__Concat_43743732(v26, v28, 0LL);
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
  System_String_o *v19; // x0
  System_String_o *v20; // x25
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  const MethodInfo *v23; // x1
  int32_t purchaseType; // w8
  System_String_o *v25; // x22
  System_String_o *v26; // x0
  System_String_o *v27; // x21
  System_String_o *v28; // x0
  System_String_o *v29; // x23
  ServantEntity_o *v30; // x0
  System_String_o *Name; // x0
  Il2CppObject *v32; // x0
  System_String_o *v33; // x1
  System_String_o *v34; // x0
  System_String_o *AddNewLine; // x0
  System_String_o *v36; // x20
  System_String_o *v37; // x0
  System_String_o *v38; // x23
  WarEntity_o *v39; // x0
  Il2CppObject *v40; // x0
  int v42; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FB789 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, itemMaster);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&int_TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_12082, v15);
    sub_B16FFC(&StringLiteral_12020, v16);
    sub_B16FFC(&StringLiteral_1, v17);
    byte_40FB789 = 1;
  }
  v18 = (System_String_o *)StringLiteral_1;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12082, 0LL);
  if ( !setItemEntity )
    goto LABEL_23;
  v20 = v19;
  v42 = setItemEntity->fields.setNum * buyCount;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  v22 = System_String__Format(v20, v21, 0LL);
  purchaseType = setItemEntity->fields.purchaseType;
  v25 = v22;
  if ( purchaseType == 18 )
  {
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v23);
    v36 = System_String__Concat_43743732(v18, AddNewLine, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12020, 0LL);
    if ( itemMaster )
    {
      v38 = v37;
      v39 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)itemMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( v39 )
      {
        v40 = (Il2CppObject *)System_String__Concat_43743732(v39->fields.age, v25, 0LL);
        v33 = System_String__Format(v38, v40, 0LL);
        v34 = v36;
        return System_String__Concat_43743732(v34, v33, 0LL);
      }
    }
LABEL_23:
    sub_B170D4();
  }
  if ( purchaseType == 4 )
  {
    v26 = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v23);
    v27 = System_String__Concat_43743732(v18, v26, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12020, 0LL);
    if ( servantMaster )
    {
      v29 = v28;
      v30 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
                                 setItemEntity->fields.targetId,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v30 )
      {
        Name = ServantEntity__getName(v30, 0, -1, 0LL);
        v32 = (Il2CppObject *)System_String__Concat_43743732(Name, v25, 0LL);
        v33 = System_String__Format(v29, v32, 0LL);
        v34 = v27;
        return System_String__Concat_43743732(v34, v33, 0LL);
      }
    }
    goto LABEL_23;
  }
  return (System_String_o *)StringLiteral_1;
}