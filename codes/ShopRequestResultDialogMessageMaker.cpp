System_String_o *ShopRequestResultDialogMessageMaker__GetAddNewLine(System_String_o *message, const MethodInfo *method)
{
  __int64 *v3; // x8

  if ( (byte_4C3F283 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F283 = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0) )
    v3 = &StringLiteral_1/*""*/;
  else
    v3 = &StringLiteral_43/*"\n"*/;
  return (System_String_o *)*v3;
}


System_String_o *ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
        ShopEntity_o *entity,
        ItemEntity_o *itemEntity,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopEntity_o *v6; // x20
  int32_t type; // w8
  int32_t id; // w21
  UserGameEntity_o *SelfUserGame; // x21
  System_String_o *v11; // x22
  Il2CppObject *NumberFormat; // x19
  Il2CppObject *NumberFormatLong; // x0
  Il2CppObject *MasterData_object; // x21
  NetworkManager_c *v15; // x0
  int64_t userIdNumber; // x22

  v6 = entity;
  if ( (byte_4C3F27E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_3011/*"BUY_AFTER_QP_NUM"*/);
    sub_1C37058(&StringLiteral_3012/*"BUY_AFTER_USER_ITEM_NUM"*/);
    entity = (ShopEntity_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F27E = 1;
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
          id = entity[1].fields.id;
          goto LABEL_35;
        }
        goto LABEL_39;
      case 13:
        entity = (ShopEntity_o *)UserGameMaster__getSelfUserGame(0);
        if ( entity )
        {
          id = UserGameEntity__GetFriendPoint((UserGameEntity_o *)entity, 0);
          goto LABEL_35;
        }
        goto LABEL_39;
      case 22:
        entity = (ShopEntity_o *)UserGameMaster__getSelfUserGame(0);
        if ( entity )
        {
          id = entity[1].fields.baseShopId;
LABEL_35:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3012/*"BUY_AFTER_USER_ITEM_NUM"*/, 0);
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(id - v6->fields.setNum * buyCount, 0);
          NumberFormatLong = (Il2CppObject *)LocalizationManager__GetNumberFormat(id, 0);
          return System_String__Format_63602948(v11, NumberFormat, NumberFormatLong, 0);
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
        id = (int32_t)entity[1].monitor;
        goto LABEL_35;
      }
LABEL_39:
      sub_1C372B4(entity);
    }
LABEL_25:
    entity = (ShopEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( entity )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)entity,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C3CD62 )
      {
        sub_1C37058(&NetworkManager_TypeInfo);
        byte_4C3CD62 = 1;
      }
      v15 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v15 = NetworkManager_TypeInfo;
      }
      userIdNumber = v15->static_fields->userIdNumber;
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
          id = *(&entity->fields.eventId + 1);
          goto LABEL_35;
        }
      }
    }
    goto LABEL_39;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  entity = (ShopEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3011/*"BUY_AFTER_QP_NUM"*/, 0);
  if ( !SelfUserGame )
    goto LABEL_39;
  v11 = (System_String_o *)entity;
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(
                                   SelfUserGame->fields.qp - v6->fields.setNum * buyCount,
                                   0);
  NumberFormatLong = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(SelfUserGame->fields.qp, 0);
  return System_String__Format_63602948(v11, NumberFormat, NumberFormatLong, 0);
}


System_String_o *ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessage(
        ShopEntity_o *entity,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  SetItemMaster_o *v6; // x19
  SetItemEntity_array *List; // x0
  System_String_o *v8; // x19
  SetItemEntity_array *v9; // x22
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v11; // x25
  ShopEntity_o *v12; // x2
  const MethodInfo *v13; // x6
  __int64 v14; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v16; // x28
  System_String_o *v17; // x24
  SetItemEntity_o *v18; // x26
  System_String_o *RequestResultPresentBoxMessage; // x0
  const MethodInfo *v20; // x5
  System_String_o *UserItemMessage; // x0
  System_String_o *v23; // x1
  System_String_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3

  if ( (byte_4C3F280 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SetItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_12023/*"SET_ITEM_GET_SERVANT_MSG"*/);
    sub_1C37058(&StringLiteral_44/*"\n\n"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_12022/*"SET_ITEM_GET_ITEM_MSG"*/);
    byte_4C3F280 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SetItemMaster___);
  if ( !entity )
    goto LABEL_42;
  v6 = (SetItemMaster_o *)Instance;
  Instance = ShopEntity__get_TargetId(entity, 0);
  if ( !v6 )
    goto LABEL_42;
  List = SetItemMaster__GetList(v6, Instance, 0);
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  v9 = List;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  v11 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)ShopDetailMaster__getShopDetailEntity((ShopDetailMaster_o *)Instance, entity->fields.id, 0);
  if ( Instance )
  {
    v14 = Instance;
    Instance = System_String__IsNullOrEmpty(*(System_String_o **)(Instance + 40), 0);
    if ( (Instance & 1) == 0 )
      return *(System_String_o **)(v14 + 40);
  }
  if ( !v9 )
    goto LABEL_42;
  max_length = v9->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    v17 = v8;
    while ( v16 < (unsigned int)max_length )
    {
      v18 = v9->m_Items[v16];
      RequestResultPresentBoxMessage = ShopRequestResultDialogMessageMaker__GetRequestResultPresentBoxMessage(
                                         (ServantMaster_o *)MasterData_object,
                                         (ItemMaster_o *)v11,
                                         v12,
                                         v18,
                                         v17,
                                         buyCount,
                                         v13);
      v17 = System_String__Concat_63561656(v17, RequestResultPresentBoxMessage, 0);
      UserItemMessage = ShopRequestResultDialogMessageMaker__GetRequestResultGetUserItemMessage(
                          (ItemMaster_o *)v11,
                          entity,
                          v18,
                          v8,
                          buyCount,
                          v20);
      Instance = (__int64)System_String__Concat_63561656(v8, UserItemMessage, 0);
      LODWORD(max_length) = v9->max_length;
      ++v16;
      v8 = (System_String_o *)Instance;
      if ( (__int64)v16 >= (int)max_length )
        goto LABEL_20;
    }
LABEL_41:
    sub_1C372BC(Instance);
  }
  v17 = v8;
LABEL_20:
  if ( !System_String__IsNullOrEmpty(v17, 0) && !System_String__IsNullOrEmpty(v8, 0) )
  {
    Instance = sub_1C37100(string___TypeInfo, 5);
    if ( Instance )
    {
      v27 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_41;
      *(_QWORD *)(Instance + 32) = v17;
      sub_1C36FFC((CGThumbnailListItem_o *)(Instance + 32), (int32_t)v17, v25, v26);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12023/*"SET_ITEM_GET_SERVANT_MSG"*/, 0);
      if ( *(_DWORD *)(v27 + 24) <= 1u )
        goto LABEL_41;
      *(_QWORD *)(v27 + 40) = Instance;
      sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 40), Instance, v28, v29);
      if ( *(_DWORD *)(v27 + 24) <= 2u )
        goto LABEL_41;
      v32 = StringLiteral_44/*"\n\n"*/;
      *(_QWORD *)(v27 + 48) = StringLiteral_44/*"\n\n"*/;
      sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 48), v32, v30, v31);
      if ( *(_DWORD *)(v27 + 24) <= 3u )
        goto LABEL_41;
      *(_QWORD *)(v27 + 56) = v8;
      sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 56), (int32_t)v8, v33, v34);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12022/*"SET_ITEM_GET_ITEM_MSG"*/, 0);
      if ( *(_DWORD *)(v27 + 24) <= 4u )
        goto LABEL_41;
      *(_QWORD *)(v27 + 64) = Instance;
      sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 64), Instance, v35, v36);
      return System_String__Concat_63602172((System_String_array *)v27, 0);
    }
LABEL_42:
    sub_1C372B4(Instance);
  }
  if ( System_String__IsNullOrEmpty(v17, 0) )
  {
    if ( System_String__IsNullOrEmpty(v8, 0) )
      return (System_String_o *)StringLiteral_1/*""*/;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12022/*"SET_ITEM_GET_ITEM_MSG"*/, 0);
    v24 = v8;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12023/*"SET_ITEM_GET_SERVANT_MSG"*/, 0);
    v24 = v17;
  }
  return System_String__Concat_63561656(v24, v23, 0);
}


System_String_o *ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageNormal(
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
  if ( (byte_4C3F27C & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_12094/*"SHOP_BUY_SUCCESS_SEND_PRESENT_BOX"*/);
    sub_1C37058(&StringLiteral_12091/*"SHOP_BUY_SUCCESS"*/);
    sub_1C37058(&StringLiteral_12093/*"SHOP_BUY_SUCCESS_SEND_MIX"*/);
    item = (ShopBuyItemListViewItem_o *)sub_1C37058(&StringLiteral_12092/*"SHOP_BUY_SUCCESS_MULTIPLE"*/);
    byte_4C3F27C = 1;
  }
  isTake = 0;
  isSend = 0;
  isQuest = 0;
  if ( !v6 )
    goto LABEL_31;
  ShopBuyItemListViewItem__GetSendType(v6, &isTake, &isSend, &isQuest, 0);
  BulkNameText = ShopBuyItemListViewItem__get_BulkNameText(v6, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  item = (ShopBuyItemListViewItem_o *)LocalizationManager__ReplaceCommonTag(BulkNameText, 0, 0);
  if ( !entity
    || (v8 = item,
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(entity->fields.setNum * buyCount, 0),
        (item = (ShopBuyItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (item = (ShopBuyItemListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)item,
                                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopDetailMaster___)) == 0 )
  {
LABEL_31:
    sub_1C372B4(item);
  }
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity((ShopDetailMaster_o *)item, entity->fields.id, 0);
  if ( ShopDetailEntity )
  {
    v11 = ShopDetailEntity;
    if ( !System_String__IsNullOrEmpty(ShopDetailEntity->fields.afterMessage, 0) )
      return v11->fields.afterMessage;
  }
  if ( ShopBuyItemListViewItem__get_IsExchangeQP(v6, 0) )
  {
    v12 = System_String__Format((System_String_o *)v8, NumberFormat, 0);
LABEL_18:
    v8 = (ShopBuyItemListViewItem_o *)v12;
    goto LABEL_19;
  }
  if ( NumberFormat && entity->fields.setNum * buyCount >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12092/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0);
    v14 = System_String__Format(v13, NumberFormat, 0);
    v12 = System_String__Concat_63561656((System_String_o *)v8, v14, 0);
    goto LABEL_18;
  }
LABEL_19:
  v15 = isSend;
  if ( isSend && isTake )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = &StringLiteral_12093/*"SHOP_BUY_SUCCESS_SEND_MIX"*/;
    goto LABEL_29;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v15 )
      goto LABEL_26;
LABEL_28:
    v16 = &StringLiteral_12091/*"SHOP_BUY_SUCCESS"*/;
    goto LABEL_29;
  }
  if ( !isSend )
    goto LABEL_28;
LABEL_26:
  v16 = &StringLiteral_12094/*"SHOP_BUY_SUCCESS_SEND_PRESENT_BOX"*/;
LABEL_29:
  v18 = LocalizationManager__Get((System_String_o *)*v16, 0);
  return System_String__Format(v18, (Il2CppObject *)v8, 0);
}


System_String_o *ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageStoneFragments(
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
  if ( (byte_4C3F27D & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ShopDetailMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_12091/*"SHOP_BUY_SUCCESS"*/);
    entity = (ShopEntity_o *)sub_1C37058(&StringLiteral_12092/*"SHOP_BUY_SUCCESS_MULTIPLE"*/);
    byte_4C3F27D = 1;
  }
  entitya = 0;
  if ( !v4 )
    goto LABEL_21;
  Name = ShopEntity__getName(v4, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__ReplaceCommonTag(Name, 0, 0);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.setNum * buyCount, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  entity = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ShopDetailMaster___);
  if ( !entity )
    goto LABEL_21;
  entity = (ShopEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                             &entitya,
                             v4->fields.id,
                             (const MethodInfo_33A10EC *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int__TryGetEntity__);
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
    sub_1C372B4(entity);
  }
LABEL_12:
  if ( v4->fields.setNum * buyCount >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12092/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0);
    v9 = System_String__Format(v8, NumberFormat, 0);
    v6 = System_String__Concat_63561656(v6, v9, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12091/*"SHOP_BUY_SUCCESS"*/, 0);
  return System_String__Format(v10, (Il2CppObject *)v6, 0);
}


System_String_o *ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
        ShopEntity_o *shopEntity,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  ShopEntity_o *v4; // x20
  int32_t type; // w8
  __int64 *v6; // x8

  v4 = shopEntity;
  if ( (byte_4C3F27F & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_1922/*"ADD_USER_ITEM_MSG"*/);
    sub_1C37058(&StringLiteral_1923/*"ADD_USER_QP_MSG"*/);
    sub_1C37058(&StringLiteral_1924/*"ADD_USER_SVT_COIN_MSG"*/);
    shopEntity = (ShopEntity_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F27F = 1;
  }
  if ( !v4 )
    goto LABEL_19;
  if ( v4->fields.purchaseType != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !itemEntity )
LABEL_19:
    sub_1C372B4(shopEntity);
  type = itemEntity->fields.type;
  if ( type == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_1923/*"ADD_USER_QP_MSG"*/;
  }
  else if ( type == 29 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_1924/*"ADD_USER_SVT_COIN_MSG"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_1922/*"ADD_USER_ITEM_MSG"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v6, 0);
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
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  Il2CppObject *v32; // x0
  System_String_o *v33; // x21
  const MethodInfo *v34; // x1
  System_String_o *AddNewLine; // x0
  System_String_o *v36; // x19
  ItemMaster_o *v37; // x20
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  int v40; // [xsp+Ch] [xbp-44h] BYREF

  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster;
  if ( (byte_4C3F281 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_12092/*"SHOP_BUY_SUCCESS_MULTIPLE"*/);
    sub_1C37058(&StringLiteral_12024/*"SET_ITEM_INDIVIDUAL"*/);
    itemMaster = (ItemMaster_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F281 = 1;
  }
  if ( !setItemEntity )
    goto LABEL_23;
  purchaseType = setItemEntity->fields.purchaseType;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( purchaseType == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12092/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0);
    v40 = setItemEntity->fields.setNum * buyCount;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v26, v27, v28, v29, v30, v31);
    v33 = System_String__Format(v25, v32, 0);
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v34);
    v36 = System_String__Concat_63561656(v12, AddNewLine, 0);
    itemMaster = (ItemMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12024/*"SET_ITEM_INDIVIDUAL"*/, 0);
    if ( v10 )
    {
      v37 = itemMaster;
      itemMaster = (ItemMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                     v10,
                                     setItemEntity->fields.targetId,
                                     (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( itemMaster )
      {
        v38 = (Il2CppObject *)System_String__Concat_63561656(itemMaster->fields._MasterName_k__BackingField, v33, 0);
        v39 = System_String__Format((System_String_o *)v37, v38, 0);
        return System_String__Concat_63561656(v36, v39, 0);
      }
    }
LABEL_23:
    sub_1C372B4(itemMaster);
  }
  if ( purchaseType != 7 )
    return v12;
  if ( !entity )
    goto LABEL_23;
  Name = ShopEntity__getName(entity, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__ReplaceCommonTag(Name, 0, 0);
  NumberFormat = LocalizationManager__GetNumberFormat(entity->fields.setNum * buyCount, 0);
  if ( NumberFormat && entity->fields.setNum * buyCount >= 1 )
  {
    v17 = (Il2CppObject *)NumberFormat;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12092/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0);
    v19 = System_String__Format(v18, v17, 0);
    v14 = System_String__Concat_63561656(v14, v19, 0);
  }
  v20 = ShopRequestResultDialogMessageMaker__GetAddNewLine(getUserItemMessage, v16);
  v21 = System_String__Concat_63561656(v12, v20, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12024/*"SET_ITEM_INDIVIDUAL"*/, 0);
  v23 = System_String__Format(v22, (Il2CppObject *)v14, 0);
  return System_String__Concat_63561656(v21, v23, 0);
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
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
  int v38; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C3F282 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_12092/*"SHOP_BUY_SUCCESS_MULTIPLE"*/);
    sub_1C37058(&StringLiteral_12024/*"SET_ITEM_INDIVIDUAL"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F282 = 1;
  }
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12092/*"SHOP_BUY_SUCCESS_MULTIPLE"*/, 0);
  if ( !setItemEntity )
    goto LABEL_21;
  v20 = (System_String_o *)v13;
  v38 = setItemEntity->fields.setNum * buyCount;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v14, v15, v16, v17, v18, v19);
  v22 = System_String__Format(v20, v21, 0);
  purchaseType = setItemEntity->fields.purchaseType;
  v25 = v22;
  if ( purchaseType == 18 )
  {
    AddNewLine = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v23);
    v34 = System_String__Concat_63561656(v12, AddNewLine, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12024/*"SET_ITEM_INDIVIDUAL"*/, 0);
    if ( itemMaster )
    {
      v35 = (System_String_o *)v13;
      v13 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( v13 )
      {
        v36 = (Il2CppObject *)System_String__Concat_63561656(*((System_String_o **)v13 + 3), v25, 0);
        v31 = System_String__Format(v35, v36, 0);
        v32 = v34;
        return System_String__Concat_63561656(v32, v31, 0);
      }
    }
LABEL_21:
    sub_1C372B4(v13);
  }
  if ( purchaseType == 4 )
  {
    v26 = ShopRequestResultDialogMessageMaker__GetAddNewLine(presentBoxMessage, v23);
    v27 = System_String__Concat_63561656(v12, v26, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12024/*"SET_ITEM_INDIVIDUAL"*/, 0);
    if ( servantMaster )
    {
      v28 = (System_String_o *)v13;
      v13 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)servantMaster,
              setItemEntity->fields.targetId,
              (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v13 )
      {
        Name = ServantEntity__getName((ServantEntity_o *)v13, 0, -1, 0, 0);
        v30 = (Il2CppObject *)System_String__Concat_63561656(Name, v25, 0);
        v31 = System_String__Format(v28, v30, 0);
        v32 = v27;
        return System_String__Concat_63561656(v32, v31, 0);
      }
    }
    goto LABEL_21;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}