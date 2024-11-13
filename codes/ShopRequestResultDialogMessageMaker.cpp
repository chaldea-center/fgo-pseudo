System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetAddNewLine(
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o **v6; // x8

  if ( (byte_4B1277F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B1277F = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    v6 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v6 = (System_String_o **)&StringLiteral_43/*"\n"*/;
  return *v6;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
        ShopEntity_o *entity,
        ItemEntity_o *itemEntity,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopEntity_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t type; // w8
  int32_t monitor; // w21
  __int64 v22; // x1
  UserGameEntity_o *SelfUserGame; // x21
  System_String_o *v24; // x22
  Il2CppObject *NumberFormat; // x19
  int32_t qp; // w0
  __int64 v27; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t UserId; // x22
  Il2CppObject *v30; // x2

  v6 = entity;
  if ( (byte_4B1277A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, itemEntity, *(_QWORD *)&buyCount);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_3135/*"BUY_AFTER_QP_NUM"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3136/*"BUY_AFTER_USER_ITEM_NUM"*/, v15, v16);
    entity = (ShopEntity_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B1277A = 1;
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
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemEntity);
          v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3136/*"BUY_AFTER_USER_ITEM_NUM"*/, 0LL);
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
      sub_1BCAA3C(entity, itemEntity);
    }
LABEL_25:
    entity = (ShopEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( entity )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)entity,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  entity = (ShopEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3135/*"BUY_AFTER_QP_NUM"*/, 0LL);
  if ( !SelfUserGame )
    goto LABEL_35;
  v24 = (System_String_o *)entity;
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(
                                   SelfUserGame->fields.qp - v6->fields.setNum * buyCount,
                                   0LL);
  qp = SelfUserGame->fields.qp;
LABEL_34:
  v30 = (Il2CppObject *)LocalizationManager__GetNumberFormat(qp, 0LL);
  return System_String__Format_62415592(v24, NumberFormat, v30, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessage(
        ShopEntity_o *entity,
        int32_t buyCount,
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 Instance; // x0
  __int64 v26; // x1
  SetItemMaster_o *v27; // x19
  SetItemEntity_array *List; // x0
  System_String_o *v29; // x19
  SetItemEntity_array *v30; // x22
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v32; // x25
  ShopEntity_o *v33; // x2
  const MethodInfo *v34; // x6
  __int64 v35; // x24
  __int64 v36; // x8
  unsigned __int64 v37; // x28
  System_String_o *v38; // x24
  SetItemEntity_o *v39; // x26
  System_String_o *RequestResultPresentBoxMessage; // x0
  const MethodInfo *v41; // x5
  System_String_o *UserItemMessage; // x0
  __int64 v44; // x1
  __int64 v45; // x1
  System_String_o *v46; // x1
  System_String_o *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x20
  __int64 v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7

  if ( (byte_4B1277C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&buyCount, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SetItemMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopDetailMaster___, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&string___TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_12103/*"SET_ITEM_GET_SERVANT_MSG"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_44/*"\n\n"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_12102/*"SET_ITEM_GET_ITEM_MSG"*/, v23, v24);
    byte_4B1277C = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SetItemMaster___);
  if ( !entity )
    goto LABEL_42;
  v27 = (SetItemMaster_o *)Instance;
  Instance = ShopEntity__get_TargetId(entity, 0LL);
  if ( !v27 )
    goto LABEL_42;
  List = SetItemMaster__GetList(v27, Instance, 0LL);
  v29 = (System_String_o *)StringLiteral_1/*""*/;
  v30 = List;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  v32 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)ShopDetailMaster__getShopDetailEntity((ShopDetailMaster_o *)Instance, entity->fields.id, 0LL);
  if ( Instance )
  {
    v35 = Instance;
    Instance = System_String__IsNullOrEmpty(*(System_String_o **)(Instance + 40), 0LL);
    if ( (Instance & 1) == 0 )
      return *(System_String_o **)(v35 + 40);
  }
  if ( !v30 )
    goto LABEL_42;
  v36 = *(_QWORD *)&v30->max_length;
  if ( (int)v36 >= 1 )
  {
    v37 = 0LL;
    v38 = v29;
    while ( v37 < (unsigned int)v36 )
    {
      v39 = v30->m_Items[v37];
      RequestResultPresentBoxMessage = ShopRequestResultDialogMessageMaker__GetRequestResultPresentBoxMessage(
                                         (ServantMaster_o *)MasterData_object,
                                         (ItemMaster_o *)v32,
                                         v33,
                                         v39,
                                         v38,
                                         buyCount,
                                         v34);
      v38 = System_String__Concat_62401220(v38, RequestResultPresentBoxMessage, 0LL);
      UserItemMessage = ShopRequestResultDialogMessageMaker__GetRequestResultGetUserItemMessage(
                          (ItemMaster_o *)v32,
                          entity,
                          v39,
                          v29,
                          buyCount,
                          v41);
      Instance = (__int64)System_String__Concat_62401220(v29, UserItemMessage, 0LL);
      LODWORD(v36) = v30->max_length;
      ++v37;
      v29 = (System_String_o *)Instance;
      if ( (__int64)v37 >= (int)v36 )
        goto LABEL_20;
    }
LABEL_41:
    sub_1BCAA44(Instance, v26);
  }
  v38 = v29;
LABEL_20:
  if ( !System_String__IsNullOrEmpty(v38, 0LL) && !System_String__IsNullOrEmpty(v29, 0LL) )
  {
    Instance = sub_1BCA888(string___TypeInfo, 5LL);
    if ( Instance )
    {
      v54 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_41;
      *(_QWORD *)(Instance + 32) = v38;
      sub_1BCA784((PartyOrganizationUtility_o *)(Instance + 32), (int64_t)v38, v48, v49, v50, v51, v52, v53);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12103/*"SET_ITEM_GET_SERVANT_MSG"*/, 0LL);
      if ( *(_DWORD *)(v54 + 24) <= 1u )
        goto LABEL_41;
      *(_QWORD *)(v54 + 40) = Instance;
      sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 40), Instance, v56, v57, v58, v59, v60, v61);
      if ( *(_DWORD *)(v54 + 24) <= 2u )
        goto LABEL_41;
      v68 = StringLiteral_44/*"\n\n"*/;
      *(_QWORD *)(v54 + 48) = StringLiteral_44/*"\n\n"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 48), v68, v62, v63, v64, v65, v66, v67);
      if ( *(_DWORD *)(v54 + 24) <= 3u )
        goto LABEL_41;
      *(_QWORD *)(v54 + 56) = v29;
      sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 56), (int64_t)v29, v69, v70, v71, v72, v73, v74);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12102/*"SET_ITEM_GET_ITEM_MSG"*/, 0LL);
      if ( *(_DWORD *)(v54 + 24) <= 4u )
        goto LABEL_41;
      *(_QWORD *)(v54 + 64) = Instance;
      sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 64), Instance, v75, v76, v77, v78, v79, v80);
      return System_String__Concat_62414748((System_String_array *)v54, 0LL);
    }
LABEL_42:
    sub_1BCAA3C(Instance, v26);
  }
  if ( System_String__IsNullOrEmpty(v38, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(v29, 0LL) )
      return (System_String_o *)StringLiteral_1/*""*/;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12102/*"SET_ITEM_GET_ITEM_MSG"*/, 0LL);
    v47 = v29;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12103/*"SET_ITEM_GET_SERVANT_MSG"*/, 0LL);
    v47 = v38;
  }
  return System_String__Concat_62401220(v47, v46, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageNormal(
        ShopBuyItemListViewItem_o *item,
        ShopEntity_o *entity,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopBuyItemListViewItem_o *v6; // x22
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  System_String_o *BulkNameText; // x19
  ShopBuyItemListViewItem_o *v21; // x19
  Il2CppObject *NumberFormat; // x23
  ShopDetailEntity_o *ShopDetailEntity; // x0
  ShopDetailEntity_o *v24; // x24
  __int64 v25; // x1
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  _BOOL4 v29; // w20
  __int64 *v30; // x8
  System_String_o *v32; // x0
  bool isQuest; // [xsp+4h] [xbp-4Ch] BYREF
  bool isSend; // [xsp+8h] [xbp-48h] BYREF
  bool isTake; // [xsp+Ch] [xbp-44h] BYREF

  v6 = item;
  if ( (byte_4B12778 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopDetailMaster___, entity, *(_QWORD *)&buyCount);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_12172/*"SHOP_BUY_SUCCESS_SEND_PRESENT_BOX"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_12169/*"SHOP_BUY_SUCCESS"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_12171/*"SHOP_BUY_SUCCESS_SEND_MIX"*/, v15, v16);
    item = (ShopBuyItemListViewItem_o *)sub_1BCA7E0(&StringLiteral_12170/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v17, v18);
    byte_4B12778 = 1;
  }
  isTake = 0;
  isSend = 0;
  isQuest = 0;
  if ( !v6 )
    goto LABEL_31;
  ShopBuyItemListViewItem__GetSendType(v6, &isTake, &isSend, &isQuest, 0LL);
  BulkNameText = ShopBuyItemListViewItem__get_BulkNameText(v6, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  item = (ShopBuyItemListViewItem_o *)LocalizationManager__ReplaceCommonTag(BulkNameText, 0, 0LL);
  if ( !entity
    || (v21 = item,
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(entity->fields.setNum * buyCount, 0LL),
        (item = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (item = (ShopBuyItemListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)item,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopDetailMaster___)) == 0LL )
  {
LABEL_31:
    sub_1BCAA3C(item, entity);
  }
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity((ShopDetailMaster_o *)item, entity->fields.id, 0LL);
  if ( ShopDetailEntity )
  {
    v24 = ShopDetailEntity;
    if ( !System_String__IsNullOrEmpty(ShopDetailEntity->fields.afterMessage, 0LL) )
      return v24->fields.afterMessage;
  }
  if ( ShopBuyItemListViewItem__get_IsExchangeQP(v6, 0LL) )
  {
    v26 = System_String__Format((System_String_o *)v21, NumberFormat, 0LL);
LABEL_18:
    v21 = (ShopBuyItemListViewItem_o *)v26;
    goto LABEL_19;
  }
  if ( NumberFormat && entity->fields.setNum * buyCount >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12170/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v28 = System_String__Format(v27, NumberFormat, 0LL);
    v26 = System_String__Concat_62401220((System_String_o *)v21, v28, 0LL);
    goto LABEL_18;
  }
LABEL_19:
  v29 = isSend;
  if ( isSend && isTake )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
    v30 = &StringLiteral_12171/*"SHOP_BUY_SUCCESS_SEND_MIX"*/;
    goto LABEL_29;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
    if ( v29 )
      goto LABEL_26;
LABEL_28:
    v30 = &StringLiteral_12169/*"SHOP_BUY_SUCCESS"*/;
    goto LABEL_29;
  }
  if ( !isSend )
    goto LABEL_28;
LABEL_26:
  v30 = &StringLiteral_12172/*"SHOP_BUY_SUCCESS_SEND_PRESENT_BOX"*/;
LABEL_29:
  v32 = LocalizationManager__Get((System_String_o *)*v30, 0LL);
  return System_String__Format(v32, (Il2CppObject *)v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageStoneFragments(
        ShopEntity_o *entity,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopEntity_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  System_String_o *Name; // x21
  System_String_o *v17; // x21
  __int64 v18; // x1
  Il2CppObject *NumberFormat; // x22
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  Il2CppObject *entitya; // [xsp+8h] [xbp-38h] BYREF

  v4 = entity;
  if ( (byte_4B12779 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopDetailMaster___, *(_QWORD *)&buyCount, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_12169/*"SHOP_BUY_SUCCESS"*/, v11, v12);
    entity = (ShopEntity_o *)sub_1BCA7E0(&StringLiteral_12170/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v13, v14);
    byte_4B12779 = 1;
  }
  entitya = 0LL;
  if ( !v4 )
    goto LABEL_21;
  Name = ShopEntity__getName(v4, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
  v17 = LocalizationManager__ReplaceCommonTag(Name, 0, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.setNum * buyCount, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  entity = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopDetailMaster___);
  if ( !entity )
    goto LABEL_21;
  entity = (ShopEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                             &entitya,
                             v4->fields.id,
                             (const MethodInfo_31B2E94 *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__);
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
    sub_1BCAA3C(entity, *(_QWORD *)&buyCount);
  }
LABEL_12:
  if ( v4->fields.setNum * buyCount >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&buyCount);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12170/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v21 = System_String__Format(v20, NumberFormat, 0LL);
    v17 = System_String__Concat_62401220(v17, v21, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&buyCount);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12169/*"SHOP_BUY_SUCCESS"*/, 0LL);
  return System_String__Format(v22, (Il2CppObject *)v17, 0LL);
}


System_String_o *__fastcall ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
        ShopEntity_o *shopEntity,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  ShopEntity_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t type; // w8
  __int64 *v14; // x8

  v4 = shopEntity;
  if ( (byte_4B1277B & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, itemEntity, method);
    sub_1BCA7E0(&StringLiteral_2045/*"ADD_USER_ITEM_MSG"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_2046/*"ADD_USER_QP_MSG"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_2047/*"ADD_USER_SVT_COIN_MSG"*/, v9, v10);
    shopEntity = (ShopEntity_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B1277B = 1;
  }
  if ( !v4 )
    goto LABEL_19;
  if ( v4->fields.purchaseType != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !itemEntity )
LABEL_19:
    sub_1BCAA3C(shopEntity, itemEntity);
  type = itemEntity->fields.type;
  if ( type == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemEntity);
    v14 = &StringLiteral_2046/*"ADD_USER_QP_MSG"*/;
  }
  else if ( type == 29 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemEntity);
    v14 = &StringLiteral_2047/*"ADD_USER_SVT_COIN_MSG"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemEntity);
    v14 = &StringLiteral_2045/*"ADD_USER_ITEM_MSG"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v14, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t purchaseType; // w8
  System_String_o *v22; // x20
  __int64 v23; // x1
  System_String_o *Name; // x22
  System_String_o *v25; // x22
  System_String_o *NumberFormat; // x0
  const MethodInfo *v27; // x1
  Il2CppObject *v28; // x23
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x19
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  System_String_o *v37; // x24
  Il2CppObject *v38; // x0
  System_String_o *v39; // x21
  const MethodInfo *v40; // x1
  System_String_o *AddNewLine; // x0
  System_String_o *v42; // x19
  ItemMaster_o *v43; // x20
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  int v46; // [xsp+Ch] [xbp-44h] BYREF

  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster;
  if ( (byte_4B1277D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, entity, setItemEntity);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_12170/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_12104/*"SET_ITEM_INDIVIDUAL"*/, v17, v18);
    itemMaster = (ItemMaster_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B1277D = 1;
  }
  if ( !setItemEntity )
    goto LABEL_23;
  purchaseType = setItemEntity->fields.purchaseType;
  v22 = (System_String_o *)StringLiteral_1/*""*/;
  if ( purchaseType == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, entity);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12170/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v46 = setItemEntity->fields.setNum * buyCount;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
    v39 = System_String__Format(v37, v38, 0LL);
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v40);
    v42 = System_String__Concat_62401220(v22, AddNewLine, 0LL);
    itemMaster = (ItemMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12104/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( v10 )
    {
      v43 = itemMaster;
      itemMaster = (ItemMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                     v10,
                                     setItemEntity->fields.targetId,
                                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( itemMaster )
      {
        v44 = (Il2CppObject *)System_String__Concat_62401220(itemMaster->fields._MasterName_k__BackingField, v39, 0LL);
        v45 = System_String__Format((System_String_o *)v43, v44, 0LL);
        return System_String__Concat_62401220(v42, v45, 0LL);
      }
    }
LABEL_23:
    sub_1BCAA3C(itemMaster, entity);
  }
  if ( purchaseType != 7 )
    return v22;
  if ( !entity )
    goto LABEL_23;
  Name = ShopEntity__getName(entity, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
  v25 = LocalizationManager__ReplaceCommonTag(Name, 0, 0LL);
  NumberFormat = LocalizationManager__GetNumberFormat(entity->fields.setNum * buyCount, 0LL);
  if ( NumberFormat && entity->fields.setNum * buyCount >= 1 )
  {
    v28 = (Il2CppObject *)NumberFormat;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12170/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
    v30 = System_String__Format(v29, v28, 0LL);
    v25 = System_String__Concat_62401220(v25, v30, 0LL);
  }
  v31 = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v27);
  v33 = System_String__Concat_62401220(v22, v31, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12104/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
  v35 = System_String__Format(v34, (Il2CppObject *)v25, 0LL);
  return System_String__Concat_62401220(v33, v35, 0LL);
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
  System_String_o *v24; // x24
  void *v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x25
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  const MethodInfo *v30; // x1
  int32_t purchaseType; // w8
  System_String_o *v32; // x22
  System_String_o *v33; // x0
  __int64 v34; // x1
  System_String_o *v35; // x21
  System_String_o *v36; // x23
  System_String_o *Name; // x0
  Il2CppObject *v38; // x0
  System_String_o *v39; // x1
  System_String_o *v40; // x0
  System_String_o *AddNewLine; // x0
  __int64 v42; // x1
  System_String_o *v43; // x20
  System_String_o *v44; // x23
  Il2CppObject *v45; // x0
  int v47; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B1277E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, itemMaster, entity);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&int_TypeInfo, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_12170/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_12104/*"SET_ITEM_INDIVIDUAL"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v22, v23);
    byte_4B1277E = 1;
  }
  v24 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemMaster);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12170/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0LL);
  if ( !setItemEntity )
    goto LABEL_21;
  v27 = (System_String_o *)v25;
  v47 = setItemEntity->fields.setNum * buyCount;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
  v29 = System_String__Format(v27, v28, 0LL);
  purchaseType = setItemEntity->fields.purchaseType;
  v32 = v29;
  if ( purchaseType == 18 )
  {
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v30);
    v43 = System_String__Concat_62401220(v24, AddNewLine, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12104/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( itemMaster )
    {
      v44 = (System_String_o *)v25;
      v25 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( v25 )
      {
        v45 = (Il2CppObject *)System_String__Concat_62401220(*((System_String_o **)v25 + 3), v32, 0LL);
        v39 = System_String__Format(v44, v45, 0LL);
        v40 = v43;
        return System_String__Concat_62401220(v40, v39, 0LL);
      }
    }
LABEL_21:
    sub_1BCAA3C(v25, v26);
  }
  if ( purchaseType == 4 )
  {
    v33 = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v30);
    v35 = System_String__Concat_62401220(v24, v33, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12104/*"SET_ITEM_INDIVIDUAL"*/, 0LL);
    if ( servantMaster )
    {
      v36 = (System_String_o *)v25;
      v25 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)servantMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v25 )
      {
        Name = ServantEntity__getName((ServantEntity_o *)v25, 0, -1, 0LL);
        v38 = (Il2CppObject *)System_String__Concat_62401220(Name, v32, 0LL);
        v39 = System_String__Format(v36, v38, 0LL);
        v40 = v35;
        return System_String__Concat_62401220(v40, v39, 0LL);
      }
    }
    goto LABEL_21;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}