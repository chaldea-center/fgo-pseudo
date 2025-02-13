System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetAddNewLine(
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_4BD8A3B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8A3B = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    v3 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v3 = (System_String_o **)&StringLiteral_43/*"\n"*/;
  return *v3;
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
        ShopEntity_o *entity,
        ItemEntity_o *itemEntity,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopEntity_o *v6; // x20
  int32_t type; // w8
  int32_t monitor; // w21
  UserGameEntity_o *SelfUserGame; // x21
  System_String_o *v11; // x22
  Il2CppObject *NumberFormat; // x19
  int32_t qp; // w0
  Il2CppObject *MasterData_object; // x21
  NetworkManager_c *v15; // x0
  int64_t userIdNumber; // x22
  Il2CppObject *v17; // x2

  v6 = entity;
  if ( (byte_4BD8A36 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_3158/*"BUY_AFTER_QP_NUM"*/);
    sub_1C21E38(&StringLiteral_3159/*"BUY_AFTER_USER_ITEM_NUM"*/);
    entity = (ShopEntity_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8A36 = 1;
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
        entity = (ShopEntity_o *)UserGameMaster__getSelfUserGame(0LL);
        if ( entity )
        {
          monitor = (int32_t)entity[1].monitor;
          goto LABEL_35;
        }
        goto LABEL_39;
      case 13:
        entity = (ShopEntity_o *)UserGameMaster__getSelfUserGame(0LL);
        if ( entity )
        {
          monitor = UserGameEntity__GetFriendPoint((UserGameEntity_o *)entity, 0LL);
          goto LABEL_35;
        }
        goto LABEL_39;
      case 22:
        entity = (ShopEntity_o *)UserGameMaster__getSelfUserGame(0LL);
        if ( entity )
        {
          monitor = HIDWORD(entity[1].monitor);
LABEL_35:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3159/*"BUY_AFTER_USER_ITEM_NUM"*/, 0LL);
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(
                                           monitor - v6->fields.setNum * buyCount,
                                           0LL);
          qp = monitor;
          goto LABEL_38;
        }
        goto LABEL_39;
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
        goto LABEL_35;
      }
LABEL_39:
      sub_1C22094(entity, itemEntity);
    }
LABEL_25:
    entity = (ShopEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( entity )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)entity,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      v15 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v15 = NetworkManager_TypeInfo;
      }
      userIdNumber = v15->static_fields->userIdNumber;
      entity = (ShopEntity_o *)ShopEntity__get_TargetId(v6, 0LL);
      if ( MasterData_object )
      {
        entity = (ShopEntity_o *)UserItemMaster__GetEntityDefinitely(
                                   (UserItemMaster_o *)MasterData_object,
                                   userIdNumber,
                                   (int32_t)entity,
                                   0LL);
        if ( entity )
        {
          monitor = *(&entity->fields.eventId + 1);
          goto LABEL_35;
        }
      }
    }
    goto LABEL_39;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  entity = (ShopEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3158/*"BUY_AFTER_QP_NUM"*/, 0LL);
  if ( !SelfUserGame )
    goto LABEL_39;
  v11 = (System_String_o *)entity;
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(
                                   SelfUserGame->fields.qp - v6->fields.setNum * buyCount,
                                   0LL);
  qp = SelfUserGame->fields.qp;
LABEL_38:
  v17 = (Il2CppObject *)LocalizationManager__GetNumberFormat(qp, 0LL);
  return System_String__Format_63129848(v11, NumberFormat, v17, 0LL);
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessage(
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
  __int64 v16; // x8
  unsigned __int64 v17; // x28
  System_String_o *v18; // x24
  SetItemEntity_o *v19; // x26
  System_String_o *RequestResultPresentBoxMessage; // x0
  const MethodInfo *v21; // x5
  System_String_o *UserItemMessage; // x0
  System_String_o *v24; // x1
  System_String_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7

  if ( (byte_4BD8A38 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SetItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_12184/*"SET_ITEM_GET_SERVANT_MSG"*/);
    sub_1C21E38(&StringLiteral_44/*"\n\n"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_12183/*"SET_ITEM_GET_ITEM_MSG"*/);
    byte_4BD8A38 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SetItemMaster___);
  if ( !entity )
    goto LABEL_42;
  v7 = (SetItemMaster_o *)Instance;
  Instance = ShopEntity__get_TargetId(entity, 0LL);
  if ( !v7 )
    goto LABEL_42;
  List = SetItemMaster__GetList(v7, Instance, 0LL);
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  v10 = List;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  v12 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)ShopDetailMaster__getShopDetailEntity((ShopDetailMaster_o *)Instance, entity->fields.id, 0LL);
  if ( Instance )
  {
    v15 = Instance;
    Instance = System_String__IsNullOrEmpty(*(System_String_o **)(Instance + 40), 0LL);
    if ( (Instance & 1) == 0 )
      return *(System_String_o **)(v15 + 40);
  }
  if ( !v10 )
    goto LABEL_42;
  v16 = *(_QWORD *)&v10->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    v18 = v9;
    while ( v17 < (unsigned int)v16 )
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
      v18 = System_String__Concat_63115476(v18, RequestResultPresentBoxMessage, 0LL);
      UserItemMessage = ShopRequestResultDialogMessageMaker__GetRequestResultGetUserItemMessage(
                          (ItemMaster_o *)v12,
                          entity,
                          v19,
                          v9,
                          buyCount,
                          v21);
      Instance = (__int64)System_String__Concat_63115476(v9, UserItemMessage, 0LL);
      LODWORD(v16) = v10->max_length;
      ++v17;
      v9 = (System_String_o *)Instance;
      if ( (__int64)v17 >= (int)v16 )
        goto LABEL_20;
    }
LABEL_41:
    sub_1C2209C(Instance, v6);
  }
  v18 = v9;
LABEL_20:
  if ( !System_String__IsNullOrEmpty(v18, 0LL) && !System_String__IsNullOrEmpty(v9, 0LL) )
  {
    Instance = sub_1C21EE0(string___TypeInfo, 5LL);
    if ( Instance )
    {
      v32 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_41;
      *(_QWORD *)(Instance + 32) = v18;
      sub_1C21DDC((PartyOrganizationUtility_o *)(Instance + 32), (int64_t)v18, v26, v27, v28, v29, v30, v31);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12184/*"SET_ITEM_GET_SERVANT_MSG"*/, 0LL);
      if ( *(_DWORD *)(v32 + 24) <= 1u )
        goto LABEL_41;
      *(_QWORD *)(v32 + 40) = Instance;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v32 + 40), Instance, v33, v34, v35, v36, v37, v38);
      if ( *(_DWORD *)(v32 + 24) <= 2u )
        goto LABEL_41;
      v45 = StringLiteral_44/*"\n\n"*/;
      *(_QWORD *)(v32 + 48) = StringLiteral_44/*"\n\n"*/;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v32 + 48), v45, v39, v40, v41, v42, v43, v44);
      if ( *(_DWORD *)(v32 + 24) <= 3u )
        goto LABEL_41;
      *(_QWORD *)(v32 + 56) = v9;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v32 + 56), (int64_t)v9, v46, v47, v48, v49, v50, v51);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12183/*"SET_ITEM_GET_ITEM_MSG"*/, 0LL);
      if ( *(_DWORD *)(v32 + 24) <= 4u )
        goto LABEL_41;
      *(_QWORD *)(v32 + 64) = Instance;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v32 + 64), Instance, v52, v53, v54, v55, v56, v57);
      return System_String__Concat_63129004((System_String_array *)v32, 0LL);
    }
LABEL_42:
    sub_1C22094(Instance, v6);
  }
  if ( System_String__IsNullOrEmpty(v18, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(v9, 0LL) )
      return (System_String_o *)StringLiteral_1/*""*/;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12183/*"SET_ITEM_GET_ITEM_MSG"*/, 0LL);
    v25 = v9;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12184/*"SET_ITEM_GET_SERVANT_MSG"*/, 0LL);
    v25 = v18;
  }
  return System_String__Concat_63115476(v25, v24, 0LL);
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageNormal(
        ShopBuyItemListViewItem_o *item,
        ShopEntity_o *entity,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopBuyItemListViewItem_o *v6; // x22
  System_String_o *BulkNameText; // x19
  ShopBuyItemListViewItem_o *v8; // x19
  Il2CppObject *NumberFormat; // x23
  ShopDetailEntity_o *ShopDetailEntity; // x0
  ShopDetailEntity_o *v11; // x24
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  _BOOL4 v15; // w20
  __int64 *v16; // x8
  System_String_o *v18; // x0
  bool isQuest; // [xsp+4h] [xbp-4Ch] BYREF
  bool isSend; // [xsp+8h] [xbp-48h] BYREF
  bool isTake; // [xsp+Ch] [xbp-44h] BYREF

  v6 = item;
  if ( (byte_4BD8A34 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_12253/*"SHOP_BUY_SUCCESS_SEND_PRESENT_BOX"*/);
    sub_1C21E38(&StringLiteral_12250/*"SHOP_BUY_SUCCESS"*/);
    sub_1C21E38(&StringLiteral_12252/*"SHOP_BUY_SUCCESS_SEND_MIX"*/);
    item = (ShopBuyItemListViewItem_o *)sub_1C21E38(&StringLiteral_12251/*"SHOP_BUY_SUCCESS_MULTIPLE"*/);
    byte_4BD8A34 = 1;
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
    || (v8 = item,
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(entity->fields.setNum * buyCount, 0LL),
        (item = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (item = (ShopBuyItemListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)item,
                                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ShopDetailMaster___)) == 0LL )
  {
LABEL_31:
    sub_1C22094(item, entity);
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
    v12 = System_String__Format((System_String_o *)v8, NumberFormat, 0LL);
LABEL_18:
    v8 = (ShopBuyItemListViewItem_o *)v12;
    goto LABEL_19;
  }
  if ( NumberFormat && entity->fields.setNum * buyCount >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12251/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v14 = System_String__Format(v13, NumberFormat, 0LL);
    v12 = System_String__Concat_63115476((System_String_o *)v8, v14, 0LL);
    goto LABEL_18;
  }
LABEL_19:
  v15 = isSend;
  if ( isSend && isTake )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = &StringLiteral_12252/*"SHOP_BUY_SUCCESS_SEND_MIX"*/;
    goto LABEL_29;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v15 )
      goto LABEL_26;
LABEL_28:
    v16 = &StringLiteral_12250/*"SHOP_BUY_SUCCESS"*/;
    goto LABEL_29;
  }
  if ( !isSend )
    goto LABEL_28;
LABEL_26:
  v16 = &StringLiteral_12253/*"SHOP_BUY_SUCCESS_SEND_PRESENT_BOX"*/;
LABEL_29:
  v18 = LocalizationManager__Get((System_String_o *)*v16, 0LL);
  return System_String__Format(v18, (Il2CppObject *)v8, 0LL);
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
  Il2CppObject *entitya; // [xsp+8h] [xbp-38h] BYREF

  v4 = entity;
  if ( (byte_4BD8A35 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ShopDetailMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_12250/*"SHOP_BUY_SUCCESS"*/);
    entity = (ShopEntity_o *)sub_1C21E38(&StringLiteral_12251/*"SHOP_BUY_SUCCESS_MULTIPLE"*/);
    byte_4BD8A35 = 1;
  }
  entitya = 0LL;
  if ( !v4 )
    goto LABEL_21;
  Name = ShopEntity__getName(v4, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__ReplaceCommonTag(Name, 0, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.setNum * buyCount, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  entity = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ShopDetailMaster___);
  if ( !entity )
    goto LABEL_21;
  entity = (ShopEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                             &entitya,
                             v4->fields.id,
                             (const MethodInfo_325BE14 *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__);
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
    sub_1C22094(entity, *(_QWORD *)&buyCount);
  }
LABEL_12:
  if ( v4->fields.setNum * buyCount >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12251/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v9 = System_String__Format(v8, NumberFormat, 0LL);
    v6 = System_String__Concat_63115476(v6, v9, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12250/*"SHOP_BUY_SUCCESS"*/, 0LL);
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
  if ( (byte_4BD8A37 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_2054/*"ADD_USER_ITEM_MSG"*/);
    sub_1C21E38(&StringLiteral_2055/*"ADD_USER_QP_MSG"*/);
    sub_1C21E38(&StringLiteral_2056/*"ADD_USER_SVT_COIN_MSG"*/);
    shopEntity = (ShopEntity_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8A37 = 1;
  }
  if ( !v4 )
    goto LABEL_19;
  if ( v4->fields.purchaseType != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !itemEntity )
LABEL_19:
    sub_1C22094(shopEntity, itemEntity);
  type = itemEntity->fields.type;
  if ( type == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_2055/*"ADD_USER_QP_MSG"*/;
  }
  else if ( type == 29 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_2056/*"ADD_USER_SVT_COIN_MSG"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_2054/*"ADD_USER_ITEM_MSG"*/;
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
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x23
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
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  System_String_o *v30; // x21
  const MethodInfo *v31; // x1
  System_String_o *AddNewLine; // x0
  System_String_o *v33; // x19
  ItemMaster_o *v34; // x20
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  int v37; // [xsp+Ch] [xbp-44h] BYREF

  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster;
  if ( (byte_4BD8A39 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_12251/*"SHOP_BUY_SUCCESS_MULTIPLE"*/);
    sub_1C21E38(&StringLiteral_12185/*"SET_ITEM_INDIVIDUAL"*/);
    itemMaster = (ItemMaster_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8A39 = 1;
  }
  if ( !setItemEntity )
    goto LABEL_23;
  purchaseType = setItemEntity->fields.purchaseType;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( purchaseType == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12251/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v37 = setItemEntity->fields.setNum * buyCount;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v26, v27, v28);
    v30 = System_String__Format(v25, v29, 0LL);
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v31);
    v33 = System_String__Concat_63115476(v12, AddNewLine, 0LL);
    itemMaster = (ItemMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12185/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( v10 )
    {
      v34 = itemMaster;
      itemMaster = (ItemMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                     v10,
                                     setItemEntity->fields.targetId,
                                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( itemMaster )
      {
        v35 = (Il2CppObject *)System_String__Concat_63115476(itemMaster->fields._MasterName_k__BackingField, v30, 0LL);
        v36 = System_String__Format((System_String_o *)v34, v35, 0LL);
        return System_String__Concat_63115476(v33, v36, 0LL);
      }
    }
LABEL_23:
    sub_1C22094(itemMaster, entity);
  }
  if ( purchaseType != 7 )
    return v12;
  if ( !entity )
    goto LABEL_23;
  Name = ShopEntity__getName(entity, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__ReplaceCommonTag(Name, 0, 0LL);
  NumberFormat = LocalizationManager__GetNumberFormat(entity->fields.setNum * buyCount, 0LL);
  if ( NumberFormat && entity->fields.setNum * buyCount >= 1 )
  {
    v17 = (Il2CppObject *)NumberFormat;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12251/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v19 = System_String__Format(v18, v17, 0LL);
    v14 = System_String__Concat_63115476(v14, v19, 0LL);
  }
  v20 = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v16);
  v21 = System_String__Concat_63115476(v12, v20, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12185/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
  v23 = System_String__Format(v22, (Il2CppObject *)v14, 0LL);
  return System_String__Concat_63115476(v21, v23, 0LL);
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
  __int64 v16; // x3
  __int64 v17; // x4
  System_String_o *v18; // x25
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  const MethodInfo *v21; // x1
  int32_t purchaseType; // w8
  System_String_o *v23; // x22
  System_String_o *v24; // x0
  System_String_o *v25; // x21
  System_String_o *v26; // x23
  System_String_o *Name; // x0
  Il2CppObject *v28; // x0
  System_String_o *v29; // x1
  System_String_o *v30; // x0
  System_String_o *AddNewLine; // x0
  System_String_o *v32; // x20
  System_String_o *v33; // x23
  Il2CppObject *v34; // x0
  int v36; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BD8A3A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_12251/*"SHOP_BUY_SUCCESS_MULTIPLE"*/);
    sub_1C21E38(&StringLiteral_12185/*"SET_ITEM_INDIVIDUAL"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8A3A = 1;
  }
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12251/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
  if ( !setItemEntity )
    goto LABEL_21;
  v18 = (System_String_o *)v13;
  v36 = setItemEntity->fields.setNum * buyCount;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v15, v16, v17);
  v20 = System_String__Format(v18, v19, 0LL);
  purchaseType = setItemEntity->fields.purchaseType;
  v23 = v20;
  if ( purchaseType == 18 )
  {
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v21);
    v32 = System_String__Concat_63115476(v12, AddNewLine, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12185/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( itemMaster )
    {
      v33 = (System_String_o *)v13;
      v13 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( v13 )
      {
        v34 = (Il2CppObject *)System_String__Concat_63115476(*((System_String_o **)v13 + 3), v23, 0LL);
        v29 = System_String__Format(v33, v34, 0LL);
        v30 = v32;
        return System_String__Concat_63115476(v30, v29, 0LL);
      }
    }
LABEL_21:
    sub_1C22094(v13, v14);
  }
  if ( purchaseType == 4 )
  {
    v24 = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v21);
    v25 = System_String__Concat_63115476(v12, v24, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12185/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( servantMaster )
    {
      v26 = (System_String_o *)v13;
      v13 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)servantMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v13 )
      {
        Name = ServantEntity__getName((ServantEntity_o *)v13, 0, -1, 0, 0LL);
        v28 = (Il2CppObject *)System_String__Concat_63115476(Name, v23, 0LL);
        v29 = System_String__Format(v26, v28, 0LL);
        v30 = v25;
        return System_String__Concat_63115476(v30, v29, 0LL);
      }
    }
    goto LABEL_21;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}