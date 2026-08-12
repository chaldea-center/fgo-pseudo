void ExRoomShopComponent___ctor(ExRoomShopComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596AE8C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_596AE8C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  this->fields.targetShopEntities = (struct System_Collections_Generic_List_ShopEntity__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.targetShopEntities, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ExRoomShopComponent__Awake(ExRoomShopComponent_o *this, const MethodInfo *method)
{
  ;
}


void ExRoomShopComponent__CacheShopInfo(ExRoomShopComponent_o *this, const MethodInfo *method)
{
  ExRoomShopComponent_o *v2; // x19
  struct System_Collections_Generic_List_ShopEntity__o *targetShopEntities; // x8
  int32_t size; // w2
  int v5; // w9
  System_Collections_Generic_List_ShopEntity__o *TargetRegularShopEntities; // x20
  const MethodInfo *v7; // x0
  const Il2CppType **v8; // x8

  v2 = this;
  if ( (byte_596AE86 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEntity__AddRange__);
    this = (ExRoomShopComponent_o *)sub_2213A60(&Method_System_Collections_Generic_List_ShopEntity__Clear__);
    byte_596AE86 = 1;
  }
  targetShopEntities = v2->fields.targetShopEntities;
  if ( !targetShopEntities )
    goto LABEL_12;
  size = targetShopEntities->fields._size;
  v5 = targetShopEntities->fields._version + 1;
  targetShopEntities->fields._size = 0;
  targetShopEntities->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)targetShopEntities->fields._items, 0, size, 0);
  TargetRegularShopEntities = ExRoomShopComponent__GetTargetRegularShopEntities((const MethodInfo *)this);
  v7 = (const MethodInfo *)System_Linq_Enumerable__FirstOrDefault_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)TargetRegularShopEntities,
                             (const MethodInfo_3881578 *)Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___);
  v8 = v7 ? v7[1].parameters : 0LL;
  v2->fields.cacheRegularShopCloseAt = (int64_t)v8;
  this = (ExRoomShopComponent_o *)ExRoomShopComponent__GetTargetDailyShopEntities(v7);
  if ( !v2->fields.targetShopEntities
    || (System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)v2->fields.targetShopEntities,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_ShopEntity__AddRange__),
        (this = (ExRoomShopComponent_o *)v2->fields.targetShopEntities) == 0) )
  {
LABEL_12:
    sub_2213CDC(this, method);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)TargetRegularShopEntities,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_ShopEntity__AddRange__);
}


void ExRoomShopComponent__CheckIsRegularShopDataExpired(ExRoomShopComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t cacheRegularShopCloseAt; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x19
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x21
  ExRoomShopComponent___c_c *v13; // x8
  struct ExRoomShopComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__28_0; // x22
  Il2CppObject *v16; // x23
  struct ExRoomShopComponent___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596AE83 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ExRoomShopComponent___c__CheckIsRegularShopDataExpired_b__28_0__);
    sub_2213A60(&ExRoomShopComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_6084/*"EX_ROOM_SHOP_DATA_EXPIRED_MESSAGE"*/);
    sub_2213A60(&StringLiteral_6085/*"EX_ROOM_SHOP_DATA_EXPIRED_TITLE"*/);
    byte_596AE83 = 1;
  }
  if ( !this->fields.isRequestedRegularExpireReboot )
  {
    cacheRegularShopCloseAt = this->fields.cacheRegularShopCloseAt;
    if ( cacheRegularShopCloseAt >= 1 )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
      if ( cacheRegularShopCloseAt < NetworkManager__getTime(0) )
      {
        this->fields.isRequestedRegularExpireReboot = 1;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
        v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6085/*"EX_ROOM_SHOP_DATA_EXPIRED_TITLE"*/, 0);
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_6084/*"EX_ROOM_SHOP_DATA_EXPIRED_MESSAGE"*/, 0);
        v12 = v9;
        v13 = ExRoomShopComponent___c_TypeInfo;
        if ( !*(&ExRoomShopComponent___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ExRoomShopComponent___c_TypeInfo, v10, v11);
          v13 = ExRoomShopComponent___c_TypeInfo;
        }
        static_fields = v13->static_fields;
        _9__28_0 = static_fields->__9__28_0;
        if ( !_9__28_0 )
        {
          if ( !*(&v13->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v13, v10, v11);
            static_fields = ExRoomShopComponent___c_TypeInfo->static_fields;
          }
          v16 = (Il2CppObject *)static_fields->__9;
          _9__28_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__28_0,
            v16,
            Method_ExRoomShopComponent___c__CheckIsRegularShopDataExpired_b__28_0__,
            0);
          v17 = ExRoomShopComponent___c_TypeInfo->static_fields;
          v17->__9__28_0 = _9__28_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v17->__9__28_0,
            (int32_t)_9__28_0,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
        }
        if ( !Instance )
          sub_2213CDC(v9, v10);
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v8,
          v12,
          _9__28_0,
          -1,
          0,
          0,
          0,
          1,
          0,
          0,
          0,
          0,
          0.0,
          0,
          0);
      }
    }
  }
}


void ExRoomShopComponent__CloseBuyItemConfirmMenu(ExRoomShopComponent_o *this, const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x0

  buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
  if ( !buyItemConfirmMenu )
    goto LABEL_10;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0) )
  {
    buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_10;
    ShopBuyItemConfirmMenu__Close(buyItemConfirmMenu, 0);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyBulkItemConfirmMenu;
  if ( !buyItemConfirmMenu )
LABEL_10:
    sub_2213CDC(buyItemConfirmMenu, method);
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyBulkItemConfirmMenu;
    if ( buyItemConfirmMenu )
    {
      ShopBuyBulkItemConfirmMenu__Close((ShopBuyBulkItemConfirmMenu_o *)buyItemConfirmMenu, 0);
      return;
    }
    goto LABEL_10;
  }
}


void ExRoomShopComponent__EndRequestShop(
        ExRoomShopComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  void *servant; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x3
  struct ShopBuyItemListViewItem_o *selectedBuyItem; // x8
  struct ExRoomRootComponent_o *root; // x8
  __int64 v10; // x2
  struct ShopBuyItemListViewItem_o *v11; // x8
  struct ShopEntity_o *Shop_k__BackingField; // x8
  System_String_o *v13; // x20
  struct ShopBuyItemListViewItem_o *v14; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  struct ShopBuyItemListViewItem_o *v16; // x8
  ItemEntity_o *v17; // x22
  struct ShopBuyItemListViewItem_o *v18; // x8
  System_String_o *v19; // x21
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  RequestResultDialog_o *requestResultDialog; // x23
  System_Action_bool__o *v22; // x24
  RequestResultDialog_o *v23; // x21
  System_Action_bool__o *v24; // x22

  if ( (byte_596AE81 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_ExRoomShopComponent_OnEndRequestResultDialog__);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596AE81 = 1;
  }
  servant = (void *)System_String__op_Equality(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0);
  if ( ((unsigned __int8)servant & 1) != 0 )
  {
    ExRoomShopComponent__SetListViewInputMode(this, v6);
    return;
  }
  selectedBuyItem = this->fields.selectedBuyItem;
  if ( selectedBuyItem && selectedBuyItem->fields._Shop_k__BackingField )
  {
    root = this->fields.root;
    if ( !root )
      goto LABEL_25;
    servant = root->fields.servant;
    if ( !servant )
      goto LABEL_25;
    ExRoomServant__PlayVoice((ExRoomServant_o *)servant, 7, 1, v7);
    servant = this->fields.selectedBuyItem;
    if ( !servant )
      goto LABEL_25;
    servant = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageNormal(
                (ShopBuyItemListViewItem_o *)servant,
                *((ShopEntity_o **)servant + 15),
                this->fields.selectedBuyCount,
                0);
    v11 = this->fields.selectedBuyItem;
    if ( !v11 )
      goto LABEL_25;
    Shop_k__BackingField = v11->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_25;
    v13 = (System_String_o *)servant;
    if ( Shop_k__BackingField->fields.purchaseType == 1 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v10);
      servant = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
      v14 = this->fields.selectedBuyItem;
      if ( v14 )
      {
        v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)servant;
        servant = v14->fields._Shop_k__BackingField;
        if ( servant )
        {
          servant = (void *)ShopEntity__get_TargetId((ShopEntity_o *)servant, 0);
          if ( v15 )
          {
            servant = DataMasterBase_object__object__int___GetEntity(
                        v15,
                        (int32_t)servant,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            v16 = this->fields.selectedBuyItem;
            if ( v16 )
            {
              v17 = (ItemEntity_o *)servant;
              servant = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                          v16->fields._Shop_k__BackingField,
                          (ItemEntity_o *)servant,
                          this->fields.selectedBuyCount,
                          0);
              v18 = this->fields.selectedBuyItem;
              if ( v18 )
              {
                v19 = (System_String_o *)servant;
                RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                                        v18->fields._Shop_k__BackingField,
                                                        v17,
                                                        0);
                requestResultDialog = this->fields.requestResultDialog;
                v22 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
                System_Action_bool____ctor(
                  v22,
                  (Il2CppObject *)this,
                  Method_ExRoomShopComponent_OnEndRequestResultDialog__,
                  0);
                if ( requestResultDialog )
                {
                  RequestResultDialog__Open(requestResultDialog, v13, RequestResultDialogNumMessageNormal, v19, v22, 0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_25:
      sub_2213CDC(servant, v6);
    }
    v23 = this->fields.requestResultDialog;
    v24 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v24, (Il2CppObject *)this, Method_ExRoomShopComponent_OnEndRequestResultDialog__, 0);
    if ( !v23 )
      goto LABEL_25;
    RequestResultDialog__Open_41777812(v23, (System_String_o *)StringLiteral_1/*""*/, v13, v24, -1, 0);
  }
  else
  {
    ExRoomShopComponent__RefreshShopPanelStatus(this, v6);
  }
}


System_Collections_Generic_List_ShopEntity__o *ExRoomShopComponent__GetTargetDailyShopEntities(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  int v3; // w8
  Il2CppObject *Master_object; // x20
  void *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *TodayEnableEntityList; // x21
  System_Collections_Generic_List_T__o *v8; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x23
  Il2CppObject *Entity; // x0
  ShopEntity_o *v13; // x21
  const MethodInfo_3CEF9D8 *v14; // x4
  __int64 v15; // x0
  System_ValueTuple_int__object__o v16; // x1
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  MissionNaviTransitionBoardItem_o *v25; // x0
  __int64 v26; // x2
  struct ExRoomShopComponent___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__37_0; // x20
  Il2CppObject *v29; // x21
  struct ExRoomShopComponent___c_StaticFields *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x1
  __int64 v38; // x2
  ExRoomShopComponent___c_c *v39; // x0
  struct ExRoomShopComponent___c_StaticFields *v40; // x8
  System_Func_T__TResult__o *_9__37_1; // x20
  Il2CppObject *v42; // x21
  struct ExRoomShopComponent___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_ValueTuple_int__object__o v52; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+30h] [xbp-80h] BYREF
  System_ValueTuple_int__object__o v55; // 0:x0.16

  if ( (byte_596AE89 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_ValueTuple_int__ShopEntity___TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ShopDailyMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_ValueTuple_int__ShopEntity___ShopEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_ShopEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ShopDailyEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ShopDailyEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ShopDailyEntity__get_Current__);
    sub_2213A60(&System_Func_ValueTuple_int__ShopEntity___ShopEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_int__ShopEntity___Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopDailyEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_int__ShopEntity___Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_int__ShopEntity____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ValueTuple_int__ShopEntity___TypeInfo);
    sub_2213A60(&Method_ExRoomShopComponent___c__GetTargetDailyShopEntities_b__37_0__);
    sub_2213A60(&Method_ExRoomShopComponent___c__GetTargetDailyShopEntities_b__37_1__);
    sub_2213A60(&ExRoomShopComponent___c_TypeInfo);
    sub_2213A60(&Method_System_ValueTuple_int__ShopEntity___ctor__);
    byte_596AE89 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v54, 0, sizeof(v54));
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopMaster___);
  v5 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopDailyMaster___);
  if ( !v5 )
    goto LABEL_35;
  TodayEnableEntityList = (System_Collections_Generic_List_object__o *)ShopDailyMaster__GetTodayEnableEntityList(
                                                                         (ShopDailyMaster_o *)v5,
                                                                         20,
                                                                         0);
  v8 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_ValueTuple_int__ShopEntity___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__object_____ctor(
    v8,
    (const MethodInfo_43F6D18 *)Method_System_Collections_Generic_List_ValueTuple_int__ShopEntity____ctor__);
  if ( !TodayEnableEntityList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    TodayEnableEntityList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ShopDailyEntity__GetEnumerator__);
  v54 = v53;
  v53.fields._list = 0;
  *(_QWORD *)&v53.fields._index = &v54;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v54,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ShopDailyEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v54.fields._current;
    if ( v54.fields._current )
    {
      if ( !Master_object )
        sub_2213CDC(v9, v10);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 HIDWORD(v54.fields._current[1].klass),
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      v13 = (ShopEntity_o *)Entity;
      if ( Entity && ShopEntity__IsEnable((ShopEntity_o *)Entity, 0, 0) && !ShopEntity__IsHiddenInCaseOfBuying(v13, 0) )
      {
        v55.fields.Item2 = (Il2CppObject *)HIDWORD(current[1].monitor);
        *(_QWORD *)&v52.fields.Item1 = 0;
        v52.fields.Item2 = 0;
        *(_QWORD *)&v55.fields.Item1 = &v52;
        System_ValueTuple_int__object____ctor(
          v55,
          (int32_t)v13,
          (Il2CppObject *)Method_System_ValueTuple_int__ShopEntity___ctor__,
          v14);
        if ( !v8
          || (v16 = v52,
              items = v8->fields._items,
              v23 = Method_System_Collections_Generic_List_ValueTuple_int__ShopEntity___Add__,
              ++v8->fields._version,
              !items) )
        {
          sub_2213CDC(v15, *(_QWORD *)&v16.fields.Item1);
        }
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_ValueTuple_int__object____AddWithResize(
            v8,
            v16,
            *(const MethodInfo_43F75D0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = (MissionNaviTransitionBoardItem_o *)(&items->obj + size);
          v8->fields._size = size + 1;
          v25->fields.sortValue0B = (int64_t)v16.fields.Item2;
          v25 = (MissionNaviTransitionBoardItem_o *)((char *)v25 + 40);
          *(_QWORD *)&v25[-1].fields._BoardType_k__BackingField = *(_QWORD *)&v16.fields.Item1;
          sub_2213A04(v25, 0, (System_String_o *)v16.fields.Item2, v17, v18, v19, v20, v21);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v54,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ShopDailyEntity__Dispose__);
  v5 = ExRoomShopComponent___c_TypeInfo;
  if ( !*(&ExRoomShopComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExRoomShopComponent___c_TypeInfo, v6, v26);
    v5 = ExRoomShopComponent___c_TypeInfo;
  }
  static_fields = (struct ExRoomShopComponent___c_StaticFields *)*((_QWORD *)v5 + 23);
  _9__37_0 = (System_Comparison_T__o *)static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( !*((_DWORD *)v5 + 57) )
    {
      j_il2cpp_runtime_class_init_0(v5, v6, v26);
      static_fields = ExRoomShopComponent___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_ValueTuple_int__ShopEntity___TypeInfo);
    System_Comparison_ValueTuple_int__object_____ctor(
      _9__37_0,
      v29,
      Method_ExRoomShopComponent___c__GetTargetDailyShopEntities_b__37_0__,
      0);
    v30 = ExRoomShopComponent___c_TypeInfo->static_fields;
    v30->__9__37_0 = (struct System_Comparison_ValueTuple_int__ShopEntity___o *)_9__37_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->__9__37_0, (int32_t)_9__37_0, v31, v32, v33, v34, v35, v36);
  }
  if ( !v8 )
LABEL_35:
    sub_2213CDC(v5, v6);
  System_Collections_Generic_List_ValueTuple_int__object____Sort_71274688(
    v8,
    _9__37_0,
    (const MethodInfo_43F90C0 *)Method_System_Collections_Generic_List_ValueTuple_int__ShopEntity___Sort__);
  v39 = ExRoomShopComponent___c_TypeInfo;
  if ( !*(&ExRoomShopComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExRoomShopComponent___c_TypeInfo, v37, v38);
    v39 = ExRoomShopComponent___c_TypeInfo;
  }
  v40 = v39->static_fields;
  _9__37_1 = (System_Func_T__TResult__o *)v40->__9__37_1;
  if ( !_9__37_1 )
  {
    if ( !*(&v39->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v39, v37, v38);
      v40 = ExRoomShopComponent___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)v40->__9;
    _9__37_1 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_ValueTuple_int__ShopEntity___ShopEntity__TypeInfo);
    System_Func_ValueTuple_int__object___object____ctor(
      _9__37_1,
      v42,
      Method_ExRoomShopComponent___c__GetTargetDailyShopEntities_b__37_1__,
      0);
    v43 = ExRoomShopComponent___c_TypeInfo->static_fields;
    v43->__9__37_1 = (struct System_Func_ValueTuple_int__ShopEntity___ShopEntity__o *)_9__37_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v43->__9__37_1, (int32_t)_9__37_1, v44, v45, v46, v47, v48, v49);
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ValueTuple_int__object___object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                                                               (System_Func_TSource__TResult__o *)_9__37_1,
                                                               (const MethodInfo_388C518 *)Method_System_Linq_Enumerable_Select_ValueTuple_int__ShopEntity___ShopEntity___);
  return (System_Collections_Generic_List_ShopEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                            v50,
                                                            (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
}


System_Collections_Generic_List_ShopEntity__o *ExRoomShopComponent__GetTargetRegularShopEntities(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EnableEntitiyList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  long double v8; // q0
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0

  if ( (byte_596AE88 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_ShopEntity___);
    sub_2213A60(&Method_DataManager_GetMaster_ShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_ShopEntity___);
    byte_596AE88 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v4);
  EnableEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEnableEntitiyList(
                                                                             (ShopMaster_o *)Master_object,
                                                                             0,
                                                                             19,
                                                                             0);
  if ( !EnableEntitiyList )
  {
    v9 = Method_System_Array_Empty_ShopEntity___;
    v10 = *((_QWORD *)Method_System_Array_Empty_ShopEntity___ + 7);
    if ( !v10 )
    {
      sub_224B964(Method_System_Array_Empty_ShopEntity___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
      v11 = sub_224B908(v8);
    if ( !*(_DWORD *)(v11 + 228) )
      *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v11, v6, v7);
    v12 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
      v12 = sub_224B908(v8);
    EnableEntitiyList = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v12 + 184);
  }
  return (System_Collections_Generic_List_ShopEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                            EnableEntitiyList,
                                                            (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
}


System_Collections_Generic_List_ShopEntity__o *ExRoomShopComponent__GetTargetShopEntities(const MethodInfo *method)
{
  System_Collections_Generic_List_ShopEntity__o *TargetRegularShopEntities; // x19
  System_Collections_Generic_List_ShopEntity__o *TargetDailyShopEntities; // x0
  __int64 v3; // x1
  System_Collections_Generic_IEnumerable_T__o *v4; // x20
  int32_t size; // w24
  int32_t v6; // w22
  System_Collections_Generic_List_object__o *v7; // x21

  if ( (byte_596AE87 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Count_ShopEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEntity___ctor___91664120);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    method = (const MethodInfo *)sub_2213A60(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_596AE87 = 1;
  }
  TargetRegularShopEntities = ExRoomShopComponent__GetTargetRegularShopEntities(method);
  TargetDailyShopEntities = ExRoomShopComponent__GetTargetDailyShopEntities((const MethodInfo *)TargetRegularShopEntities);
  if ( !TargetDailyShopEntities
    || (v4 = (System_Collections_Generic_IEnumerable_T__o *)TargetDailyShopEntities,
        size = TargetDailyShopEntities->fields._size,
        v6 = System_Linq_Enumerable__Count_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)TargetRegularShopEntities,
               (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_ShopEntity___),
        v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ShopEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor_71840884(
          v7,
          v6 + size,
          (const MethodInfo_4483474 *)Method_System_Collections_Generic_List_ShopEntity___ctor___91664120),
        !v7) )
  {
    sub_2213CDC(TargetDailyShopEntities, v3);
  }
  System_Collections_Generic_List_object___AddRange(
    v7,
    v4,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_ShopEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)TargetRegularShopEntities,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_ShopEntity__AddRange__);
  return (System_Collections_Generic_List_ShopEntity__o *)v7;
}


void ExRoomShopComponent__Init(ExRoomShopComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *ComponentInParent_object__58855988; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Action_c *v16; // x0
  struct GiftButtonCtrl_o *giftButtonControl; // x20
  System_Action_o *v18; // x21
  GiftButtonCtrl_o *shopButtonSprite; // x0
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct GiftButtonCtrl_o *v27; // x20
  System_Func_bool__bool__o *v28; // x21
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x1
  __int64 v36; // x2
  UISprite_o *helpButtonSprite; // x20
  const MethodInfo *v38; // x1
  ShopBuyItemListViewManager_o *shopBuyItemListViewManager; // x20
  System_Action_o *v40; // x21
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_596AE7D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInParent_ExRoomRootComponent___);
    sub_2213A60(&Method_ExRoomShopComponent_OnGiftClose__);
    sub_2213A60(&Method_ExRoomShopComponent_OnGiftOpen__);
    sub_2213A60(&Method_ExRoomShopComponent__Init_b__21_0__);
    sub_2213A60(&System_Func_bool__bool__TypeInfo);
    sub_2213A60(&StringLiteral_18260/*"btn_help"*/);
    sub_2213A60(&StringLiteral_18253/*"btn_exroom_05"*/);
    byte_596AE7D = 1;
  }
  ComponentInParent_object__58855988 = UnityEngine_Component__GetComponentInParent_object__58855988(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_3821234 *)Method_UnityEngine_Component_GetComponentInParent_ExRoomRootComponent___);
  this->fields.root = (struct ExRoomRootComponent_o *)ComponentInParent_object__58855988;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.root,
    (int32_t)ComponentInParent_object__58855988,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  this->fields.selectedBuyItem = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectedBuyItem, 0, v10, v11, v12, v13, v14, v15);
  v16 = System_Action_TypeInfo;
  giftButtonControl = this->fields.giftButtonControl;
  this->fields.selectedBuyCount = 0;
  this->fields.isRequestedRegularExpireReboot = 0;
  this->fields.cacheRegularShopCloseAt = 0;
  this->fields.viewState = 0;
  v18 = (System_Action_o *)sub_2213CCC(v16);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ExRoomShopComponent_OnGiftOpen__, 0);
  if ( !giftButtonControl )
    goto LABEL_22;
  giftButtonControl->fields.OnGiftOpenAdditionalAction = v18;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&giftButtonControl->fields.OnGiftOpenAdditionalAction,
    (int32_t)v18,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = this->fields.giftButtonControl;
  v28 = (System_Func_bool__bool__o *)sub_2213CCC(System_Func_bool__bool__TypeInfo);
  System_Func_bool__bool____ctor(v28, (Il2CppObject *)this, Method_ExRoomShopComponent_OnGiftClose__, 0);
  if ( !v27 )
    goto LABEL_22;
  v27->fields.OnGiftCloseAdditionalAction = v28;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v27->fields.OnGiftCloseAdditionalAction,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  shopButtonSprite = this->fields.giftButtonControl;
  if ( !shopButtonSprite )
    goto LABEL_22;
  GiftButtonCtrl__InvalidateGiftInfo(shopButtonSprite, 0);
  helpButtonSprite = this->fields.helpButtonSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v35, v36);
  AtlasManager__SetCommon(helpButtonSprite, 0);
  shopButtonSprite = (GiftButtonCtrl_o *)this->fields.helpButtonSprite;
  if ( !shopButtonSprite )
    goto LABEL_22;
  UISprite__set_spriteName((UISprite_o *)shopButtonSprite, (System_String_o *)StringLiteral_18260/*"btn_help"*/, 0);
  AtlasManager__SetBanner(this->fields.shopButtonSprite, (System_String_o *)StringLiteral_18253/*"btn_exroom_05"*/, 0);
  shopButtonSprite = (GiftButtonCtrl_o *)this->fields.shopButtonSprite;
  if ( !shopButtonSprite )
    goto LABEL_22;
  shopButtonSprite = (GiftButtonCtrl_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)shopButtonSprite,
                                           0);
  if ( !shopButtonSprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)shopButtonSprite, 1, 0);
  shopButtonSprite = (GiftButtonCtrl_o *)this->fields.shopByListRootObject;
  if ( !shopButtonSprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)shopButtonSprite, 1, 0);
  shopButtonSprite = (GiftButtonCtrl_o *)this->fields.buyItemConfirmMenu;
  if ( !shopButtonSprite )
    goto LABEL_22;
  ShopBuyItemConfirmMenu__Init((ShopBuyItemConfirmMenu_o *)shopButtonSprite, 0);
  shopButtonSprite = (GiftButtonCtrl_o *)this->fields.buyBulkItemConfirmMenu;
  if ( !shopButtonSprite )
    goto LABEL_22;
  ShopBuyBulkItemConfirmMenu__Init((ShopBuyBulkItemConfirmMenu_o *)shopButtonSprite, 0);
  shopButtonSprite = (GiftButtonCtrl_o *)this->fields.shopCurrencyInfoController;
  if ( !shopButtonSprite )
    goto LABEL_22;
  ShopCurrencyInfoController__RefreshCurrencyInfo((ShopCurrencyInfoController_o *)shopButtonSprite, 0, 0, 0);
  ExRoomShopComponent__CacheShopInfo(this, v38);
  shopButtonSprite = (GiftButtonCtrl_o *)this->fields.shopBuyItemListViewManager;
  if ( !shopButtonSprite )
    goto LABEL_22;
  ShopBuyItemListViewManager__CreateExRoomAllList(
    (ShopBuyItemListViewManager_o *)shopButtonSprite,
    this->fields.targetShopEntities,
    0);
  shopButtonSprite = (GiftButtonCtrl_o *)this->fields.shopBuyItemListViewManager;
  if ( !shopButtonSprite )
    goto LABEL_22;
  ShopBuyItemListViewManager__FocusTopItem((ShopBuyItemListViewManager_o *)shopButtonSprite, 0, 0);
  shopBuyItemListViewManager = this->fields.shopBuyItemListViewManager;
  v40 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_ExRoomShopComponent__Init_b__21_0__, 0);
  if ( !shopBuyItemListViewManager
    || (ShopBuyItemListViewManager__SetMode_41958800(shopBuyItemListViewManager, 1, v40, 0.1, 0),
        (shopButtonSprite = (GiftButtonCtrl_o *)this->fields.shopCurrencyInfoController) == 0)
    || (ShopCurrencyInfoController__RefreshCurrencyInfoForExRoom(
          (ShopCurrencyInfoController_o *)shopButtonSprite,
          24,
          this->fields.targetShopEntities,
          0),
        (shopButtonSprite = (GiftButtonCtrl_o *)this->fields.shopCurrencyInfoPanel) == 0)
    || (((void (__fastcall *)(GiftButtonCtrl_o *, Il2CppClass *, double))shopButtonSprite->klass[1]._1.element_class)(
          shopButtonSprite,
          shopButtonSprite->klass[1]._1.castClass,
          0.0),
        (shopButtonSprite = (GiftButtonCtrl_o *)this->fields.shopCurrencyInfoPanel) == 0) )
  {
LABEL_22:
    sub_2213CDC(shopButtonSprite, v20);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)shopButtonSprite, 0);
  TweenAlpha__Begin(gameObject, 0.3, 1.0, 0);
}


bool ExRoomShopComponent__IsBuyableBulk(
        ExRoomShopComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  ShopEntity_o *Shop_k__BackingField; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Master_object; // x21
  char v9; // w21
  int64_t CurrencyCount; // x20

  if ( (byte_596AE85 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    this = (ExRoomShopComponent_o *)sub_2213A60(&DataManager_TypeInfo);
    byte_596AE85 = 1;
  }
  if ( !item )
    goto LABEL_18;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_18;
  if ( ShopEntity__IsSoldOut(item->fields._Shop_k__BackingField, 0) || !ShopEntity__IsEnable(Shop_k__BackingField, 0, 0) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  this = (ExRoomShopComponent_o *)ShopBuyItemListViewItem__get_TargetId(item, 0);
  if ( !Master_object )
LABEL_18:
    sub_2213CDC(this, item);
  if ( UserItemMaster__IsItemMaxLeftEqual((UserItemMaster_o *)Master_object, (int32_t)this, 1, 0) )
    return 0;
  if ( ShopBuyItemListViewItem__get_LimitNum(item, 0) )
    v9 = ShopBuyItemListViewItem__get_LimitNum(item, 0) - item->fields._TotalNum_k__BackingField > 1;
  else
    v9 = 1;
  CurrencyCount = ShopEntity__GetCurrencyCount(Shop_k__BackingField, 0);
  if ( CurrencyCount >= 2 * ShopEntity__GetPrice(Shop_k__BackingField, 0) )
    return v9;
  else
    return 0;
}


void ExRoomShopComponent__OnClickHelp(ExRoomShopComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_596AE8A & 1) == 0 )
  {
    sub_2213A60(&Method_ExRoomShopComponent_OnClickHelp__);
    byte_596AE8A = 1;
  }
  v2 = Method_ExRoomShopComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_ExRoomShopComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_2213A78(Method_ExRoomShopComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_2213A44(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 120, 0, 0, 0);
}


void ExRoomShopComponent__OnClickShop(ExRoomShopComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_596AE8B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_ExRoomShopComponent_OnClickShop__);
    sub_2213A60(&Method_ExRoomShopComponent__OnClickShop_b__39_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AE8B = 1;
  }
  v3 = Method_ExRoomShopComponent_OnClickShop__;
  if ( (*((_BYTE *)Method_ExRoomShopComponent_OnClickShop__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ExRoomShopComponent_OnClickShop__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v6, v7);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ExRoomShopComponent__OnClickShop_b__39_0__, 0);
  if ( !v9 )
    sub_2213CDC(v12, v13);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, v11, 0);
}


// local variable allocation has failed, the output may be wrong!
void ExRoomShopComponent__OnDecideBuyItemConfirm(
        ExRoomShopComponent_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  struct ShopBuyItemListViewItem_o *selectedBuyItem; // x8
  ShopEntity_o *Shop_k__BackingField; // x0
  int32_t id; // w21
  ShopDailyEntity_o *ShopDailyEntity; // x0
  int32_t dayKey; // w22
  NetworkManager_ResultCallbackFunc_o *v11; // x23
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Request_object; // x0
  __int64 v15; // x1

  if ( (byte_596AE80 & 1) == 0 )
  {
    sub_2213A60(&Method_ExRoomShopComponent_EndRequestShop__);
    sub_2213A60(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596AE80 = 1;
  }
  ExRoomShopComponent__CloseBuyItemConfirmMenu(this, *(const MethodInfo **)&buyCount);
  if ( buyCount > 0
    && (selectedBuyItem = this->fields.selectedBuyItem) != 0
    && (Shop_k__BackingField = selectedBuyItem->fields._Shop_k__BackingField) != 0 )
  {
    id = Shop_k__BackingField->fields.id;
    this->fields.selectedBuyCount = buyCount;
    ShopDailyEntity = ShopEntity__get_ShopDailyEntity(Shop_k__BackingField, 0);
    if ( ShopDailyEntity )
      dayKey = ShopDailyEntity->fields.dayKey;
    else
      dayKey = 0;
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v11, (Il2CppObject *)this, Method_ExRoomShopComponent_EndRequestShop__, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12, v13);
    Request_object = NetworkManager__getRequest_object_(
                       v11,
                       (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    if ( !Request_object )
      sub_2213CDC(0, v15);
    PurchaseRequest__beginRequest((PurchaseRequest_o *)Request_object, id, buyCount, 0, 0, 0, dayKey, 0);
  }
  else
  {
    ExRoomShopComponent__SetListViewInputMode(this, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void ExRoomShopComponent__OnEndRequestResultDialog(
        ExRoomShopComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  RequestResultDialog_o *requestResultDialog; // x0
  const MethodInfo *v5; // x1

  requestResultDialog = this->fields.requestResultDialog;
  if ( !requestResultDialog )
    sub_2213CDC(0, isDecide);
  RequestResultDialog__Close(requestResultDialog, 0);
  ExRoomShopComponent__RefreshShopPanelStatus(this, v5);
}


// local variable allocation has failed, the output may be wrong!
bool ExRoomShopComponent__OnGiftClose(ExRoomShopComponent_o *this, bool hasGetServant, const MethodInfo *method)
{
  GiftButtonCtrl_o *giftButtonControl; // x0

  giftButtonControl = this->fields.giftButtonControl;
  if ( !giftButtonControl
    || (GiftButtonCtrl__InvalidateGiftInfo(giftButtonControl, 0),
        (giftButtonControl = (GiftButtonCtrl_o *)this->fields.shopCurrencyInfoController) == 0)
    || (ShopCurrencyInfoController__RefreshCurrencyInfoForExRoom(
          (ShopCurrencyInfoController_o *)giftButtonControl,
          24,
          this->fields.targetShopEntities,
          0),
        (giftButtonControl = (GiftButtonCtrl_o *)this->fields.shopBuyItemListViewManager) == 0) )
  {
    sub_2213CDC(giftButtonControl, hasGetServant);
  }
  ShopBuyItemListViewManager__InvalidateList((ShopBuyItemListViewManager_o *)giftButtonControl, 0);
  return 1;
}


void ExRoomShopComponent__OnGiftOpen(ExRoomShopComponent_o *this, const MethodInfo *method)
{
  struct ExRoomRootComponent_o *root; // x8

  root = this->fields.root;
  if ( !root || (this = (ExRoomShopComponent_o *)root->fields.servant) == 0 )
    sub_2213CDC(this, method);
  ExRoomServant__StopVoice((ExRoomServant_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
void ExRoomShopComponent__OnSelectBuyItem(ExRoomShopComponent_o *this, int32_t selectedIndex, const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *shopBuyItemListViewManager; // x0
  struct ShopBuyItemListViewItem_o *Item; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  ShopBuyItemListViewItem_o *v13; // x20
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  ExRoomShopComponent_o *v16; // x0
  const MethodInfo *v17; // x2
  bool IsBuyableBulk; // w0
  ShopEntity_o *Shop_k__BackingField; // x21
  ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x22
  System_Action_int__o *v21; // x23
  ShopBuyItemListViewManager_o *v22; // x20
  System_Action_int__o *v23; // x21
  ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x22
  int32_t ShopKind_k__BackingField; // w20
  System_Action_int__o *v26; // x23

  if ( (byte_596AE7F & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_ExRoomShopComponent_OnDecideBuyItemConfirm__);
    sub_2213A60(&Method_ExRoomShopComponent_OnSelectBuyItem__);
    byte_596AE7F = 1;
  }
  shopBuyItemListViewManager = this->fields.shopBuyItemListViewManager;
  if ( !shopBuyItemListViewManager )
    goto LABEL_16;
  Item = ShopBuyItemListViewManager__GetItem(shopBuyItemListViewManager, selectedIndex, 0);
  if ( !Item )
  {
    v22 = this->fields.shopBuyItemListViewManager;
    v23 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v23, (Il2CppObject *)this, (intptr_t)Method_ExRoomShopComponent_OnSelectBuyItem__, 0);
    if ( v22 )
    {
      ShopBuyItemListViewManager__SetMode(v22, 2, v23, 0);
      return;
    }
    goto LABEL_16;
  }
  v13 = Item;
  this->fields.selectedBuyItem = Item;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectedBuyItem,
    (int32_t)Item,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v14 = Method_ExRoomShopComponent_OnSelectBuyItem__;
  if ( (*((_BYTE *)Method_ExRoomShopComponent_OnSelectBuyItem__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_2213A78(Method_ExRoomShopComponent_OnSelectBuyItem__);
  v15 = (System_Reflection_MethodBase_o *)sub_2213A44(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
  IsBuyableBulk = ExRoomShopComponent__IsBuyableBulk(v16, v13, v17);
  Shop_k__BackingField = v13->fields._Shop_k__BackingField;
  if ( IsBuyableBulk )
  {
    buyBulkItemConfirmMenu = this->fields.buyBulkItemConfirmMenu;
    v21 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v21, (Il2CppObject *)this, Method_ExRoomShopComponent_OnDecideBuyItemConfirm__, 0);
    if ( !buyBulkItemConfirmMenu )
      goto LABEL_16;
    ShopBuyBulkItemConfirmMenu__Open(buyBulkItemConfirmMenu, Shop_k__BackingField, v13, v21, 8, 0);
  }
  else
  {
    buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
    ShopKind_k__BackingField = v13->fields._ShopKind_k__BackingField;
    v26 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v26, (Il2CppObject *)this, Method_ExRoomShopComponent_OnDecideBuyItemConfirm__, 0);
    if ( !buyItemConfirmMenu )
      goto LABEL_16;
    ShopBuyItemConfirmMenu__Open(buyItemConfirmMenu, Shop_k__BackingField, ShopKind_k__BackingField, v26, 0, 0, 0, 8, 0);
  }
  shopBuyItemListViewManager = (ShopBuyItemListViewManager_o *)this->fields.shopCurrencyInfoController;
  if ( !shopBuyItemListViewManager )
LABEL_16:
    sub_2213CDC(shopBuyItemListViewManager, *(_QWORD *)&selectedIndex);
  ShopCurrencyInfoController__RefreshCurrencyInfoForExRoom(
    (ShopCurrencyInfoController_o *)shopBuyItemListViewManager,
    24,
    this->fields.targetShopEntities,
    0);
}


void ExRoomShopComponent__Quit(ExRoomShopComponent_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x19
  char *helpButtonSprite; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t viewState; // w22
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  ShopBuyItemListViewManager_o *shopBuyItemListViewManager; // x20
  System_Action_o *v47; // x21
  const MethodInfo *v48; // x1

  if ( (byte_596AE7E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ExRoomShopComponent___c__DisplayClass22_0__Quit_b__0__);
    sub_2213A60(&ExRoomShopComponent___c__DisplayClass22_0_TypeInfo);
    byte_596AE7E = 1;
  }
  v5 = sub_2213CCC(ExRoomShopComponent___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  this->fields.selectedBuyItem = 0;
  viewState = this->fields.viewState;
  this->fields.viewState = 2;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectedBuyItem, 0, v21, v22, v23, v24, v25, v26);
  helpButtonSprite = (char *)this->fields.helpButtonSprite;
  this->fields.selectedBuyCount = 0;
  if ( !helpButtonSprite )
    goto LABEL_19;
  helpButtonSprite = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpButtonSprite, 0);
  if ( !helpButtonSprite )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButtonSprite, 0, 0);
  helpButtonSprite = (char *)this->fields.giftButtonControl;
  if ( !helpButtonSprite )
    goto LABEL_19;
  helpButtonSprite = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpButtonSprite, 0);
  if ( !helpButtonSprite )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButtonSprite, 0, 0);
  helpButtonSprite = (char *)this->fields.giftButtonControl;
  if ( !helpButtonSprite )
    goto LABEL_19;
  *((_QWORD *)helpButtonSprite + 13) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(helpButtonSprite + 104), 0, v27, v28, v29, v30, v31, v32);
  helpButtonSprite = (char *)this->fields.giftButtonControl;
  if ( !helpButtonSprite )
    goto LABEL_19;
  *((_QWORD *)helpButtonSprite + 12) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(helpButtonSprite + 96), 0, v33, v34, v35, v36, v37, v38);
  helpButtonSprite = (char *)this->fields.giftButtonControl;
  if ( !helpButtonSprite )
    goto LABEL_19;
  *((_QWORD *)helpButtonSprite + 14) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(helpButtonSprite + 112), 0, v39, v40, v41, v42, v43, v44);
  helpButtonSprite = (char *)this->fields.shopButtonSprite;
  if ( !helpButtonSprite )
    goto LABEL_19;
  helpButtonSprite = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpButtonSprite, 0);
  if ( !helpButtonSprite )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButtonSprite, 0, 0);
  helpButtonSprite = (char *)this->fields.shopCurrencyInfoPanel;
  if ( !helpButtonSprite )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpButtonSprite, 0);
  helpButtonSprite = (char *)TweenAlpha__Begin(gameObject, 0.3, 0.0, 0);
  shopBuyItemListViewManager = this->fields.shopBuyItemListViewManager;
  if ( viewState == 1 )
  {
    v47 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v47, (Il2CppObject *)v5, Method_ExRoomShopComponent___c__DisplayClass22_0__Quit_b__0__, 0);
    if ( shopBuyItemListViewManager )
    {
      ShopBuyItemListViewManager__SetMode_41958800(shopBuyItemListViewManager, 4, v47, 0.1, 0);
      return;
    }
LABEL_19:
    sub_2213CDC(helpButtonSprite, v7);
  }
  if ( !shopBuyItemListViewManager )
    goto LABEL_19;
  ListViewManager__DragMaskEnd((ListViewManager_o *)shopBuyItemListViewManager, 0);
  ExRoomShopComponent___c__DisplayClass22_0___Quit_g__CleanUp_1((ExRoomShopComponent___c__DisplayClass22_0_o *)v5, v48);
  ActionExtensions__Call(*(System_Action_o **)(v5 + 16), 0);
}


void ExRoomShopComponent__RefreshShopPanelStatus(ExRoomShopComponent_o *this, const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *giftButtonControl; // x0
  __int64 v4; // x1
  struct ShopBuyItemListViewManager_o *shopBuyItemListViewManager; // x8
  System_Collections_Generic_List_object__o *itemSortList; // x0
  System_Collections_Generic_List_object__o *targetShopEntities; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x10
  __int128 v12; // q0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x22
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x1
  ExRoomShopComponent_o *v20; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_596AE82 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEntity__GetEnumerator__);
    sub_2213A60(&ShopBuyItemListViewItem_TypeInfo);
    byte_596AE82 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  memset(&v22, 0, sizeof(v22));
  ExRoomShopComponent__CacheShopInfo(this, method);
  shopBuyItemListViewManager = this->fields.shopBuyItemListViewManager;
  if ( !shopBuyItemListViewManager )
    goto LABEL_32;
  itemSortList = (System_Collections_Generic_List_object__o *)shopBuyItemListViewManager->fields.itemSortList;
  if ( itemSortList )
  {
    v20 = this;
    targetShopEntities = (System_Collections_Generic_List_object__o *)this->fields.targetShopEntities;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      itemSortList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v23 = v21;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v23,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v8 )
        break;
      current = v23.fields._current;
      if ( v23.fields._current )
      {
        naturalAligment = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment;
        if ( v23.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (ShopBuyItemListViewItem_c *)v23.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == ShopBuyItemListViewItem_TypeInfo
          && v23.fields._current[7].monitor )
        {
          if ( !targetShopEntities )
            sub_2213CDC(v8, v9);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v21,
            targetShopEntities,
            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ShopEntity__GetEnumerator__);
          v12 = *(_OWORD *)&v21.fields._list;
          v21.fields._list = 0;
          *(_QWORD *)&v21.fields._index = &v22;
          *(_OWORD *)&v22.fields._list = v12;
          v22.fields._current = v21.fields._current;
          while ( 1 )
          {
            v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v22,
                    (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ShopEntity__MoveNext__);
            if ( !v13 )
              break;
            v15 = v22.fields._current;
            if ( v22.fields._current )
            {
              v16 = *(_QWORD *)((char *)&dword_78 + (_QWORD)current);
              if ( !v16 )
                sub_2213CDC(v13, v14);
              if ( LODWORD(v22.fields._current[1].klass) == *(_DWORD *)(v16 + 16) )
                goto LABEL_19;
            }
          }
          v15 = 0;
LABEL_19:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v22,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ShopEntity__Dispose__);
          if ( v15 )
          {
            if ( !current )
              sub_2213CDC(v17, v18);
          }
          else
          {
            v15 = *(Il2CppObject **)((char *)&dword_78 + (_QWORD)current);
          }
          ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)current, (ShopEntity_o *)v15, 0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    this = v20;
  }
  giftButtonControl = this->fields.shopBuyItemListViewManager;
  if ( !giftButtonControl
    || (ShopBuyItemListViewManager__InvalidateList(giftButtonControl, 0),
        (giftButtonControl = (ShopBuyItemListViewManager_o *)this->fields.giftButtonControl) == 0) )
  {
LABEL_32:
    sub_2213CDC(giftButtonControl, v4);
  }
  GiftButtonCtrl__InvalidateGiftInfo((GiftButtonCtrl_o *)giftButtonControl, 0);
  ExRoomShopComponent__SetListViewInputMode(this, v19);
}


void ExRoomShopComponent__SetListViewInputMode(ExRoomShopComponent_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *shopCurrencyInfoController; // x0
  ShopBuyItemListViewManager_o *shopBuyItemListViewManager; // x20
  System_Action_int__o *v5; // x21

  if ( (byte_596AE84 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_ExRoomShopComponent_OnSelectBuyItem__);
    byte_596AE84 = 1;
  }
  shopCurrencyInfoController = this->fields.shopCurrencyInfoController;
  if ( !shopCurrencyInfoController
    || (ShopCurrencyInfoController__RefreshCurrencyInfoForExRoom(
          shopCurrencyInfoController,
          24,
          this->fields.targetShopEntities,
          0),
        shopBuyItemListViewManager = this->fields.shopBuyItemListViewManager,
        v5 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo),
        System_Action_int____ctor(v5, (Il2CppObject *)this, (intptr_t)Method_ExRoomShopComponent_OnSelectBuyItem__, 0),
        !shopBuyItemListViewManager) )
  {
    sub_2213CDC(shopCurrencyInfoController, method);
  }
  ShopBuyItemListViewManager__SetMode(shopBuyItemListViewManager, 2, v5, 0);
}


// attributes: thunk
void ExRoomShopComponent__Update(ExRoomShopComponent_o *this, const MethodInfo *method)
{
  ExRoomShopComponent__CheckIsRegularShopDataExpired(this, method);
}


void ExRoomShopComponent___Init_b__21_0(ExRoomShopComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *helpButtonSprite; // x0
  ShopBuyItemListViewManager_o *shopBuyItemListViewManager; // x20
  System_Action_int__o *v5; // x21

  if ( (byte_596AE8D & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_ExRoomShopComponent_OnSelectBuyItem__);
    byte_596AE8D = 1;
  }
  if ( this->fields.viewState != 2 )
  {
    helpButtonSprite = (UnityEngine_Component_o *)this->fields.helpButtonSprite;
    this->fields.viewState = 1;
    if ( !helpButtonSprite )
      goto LABEL_10;
    helpButtonSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButtonSprite, 0);
    if ( !helpButtonSprite
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButtonSprite, 1, 0),
          (helpButtonSprite = (UnityEngine_Component_o *)this->fields.giftButtonControl) == 0)
      || (helpButtonSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButtonSprite, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButtonSprite, 1, 0),
          shopBuyItemListViewManager = this->fields.shopBuyItemListViewManager,
          v5 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo),
          System_Action_int____ctor(v5, (Il2CppObject *)this, (intptr_t)Method_ExRoomShopComponent_OnSelectBuyItem__, 0),
          !shopBuyItemListViewManager) )
    {
LABEL_10:
      sub_2213CDC(helpButtonSprite, method);
    }
    ShopBuyItemListViewManager__SetMode(shopBuyItemListViewManager, 2, v5, 0);
  }
}


void ExRoomShopComponent___OnClickShop_b__39_0(ExRoomShopComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  int v5; // w9
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ExRoomShopComponent___c_c *v8; // x0
  ExRoomRootComponent_o *root; // x19
  struct ExRoomShopComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__39_1; // x20
  Il2CppObject *v12; // x21
  struct ExRoomShopComponent___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596AE8E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_ExRoomShopComponent___c__OnClickShop_b__39_1__);
    sub_2213A60(&ExRoomShopComponent___c_TypeInfo);
    byte_596AE8E = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_596AEFB )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596AEFB = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v5 = (unsigned __int8)byte_596AEFC;
  v4->static_fields->_IsAutoExRoom_k__BackingField = 1;
  if ( !v5 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596AEFC = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_AutoExRoomType_k__BackingField = 3;
  TerminalPramsManager__SaveExRoomTransitionInfo(0);
  v8 = ExRoomShopComponent___c_TypeInfo;
  root = this->fields.root;
  if ( !*(&ExRoomShopComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExRoomShopComponent___c_TypeInfo, v6, v7);
    v8 = ExRoomShopComponent___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__39_1 = static_fields->__9__39_1;
  if ( !_9__39_1 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6, v7);
      static_fields = ExRoomShopComponent___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__39_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__39_1, v12, Method_ExRoomShopComponent___c__OnClickShop_b__39_1__, 0);
    v13 = ExRoomShopComponent___c_TypeInfo->static_fields;
    v13->__9__39_1 = _9__39_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__39_1, (int32_t)_9__39_1, v14, v15, v16, v17, v18, v19);
  }
  if ( !root )
    sub_2213CDC(v8, v6);
  ExRoomRootComponent__Quit(root, _9__39_1, v7);
}


void ExRoomShopComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596AE8F & 1) == 0 )
  {
    sub_2213A60(&ExRoomShopComponent___c_TypeInfo);
    byte_596AE8F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ExRoomShopComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExRoomShopComponent___c_TypeInfo->static_fields->__9 = (struct ExRoomShopComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ExRoomShopComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomShopComponent___c___ctor(ExRoomShopComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomShopComponent___c___CheckIsRegularShopDataExpired_b__28_0(
        ExRoomShopComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  int v4; // w9
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596AE90 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596AE90 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_596AEFB )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596AEFB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v4 = (unsigned __int8)byte_596AEFC;
  v3->static_fields->_IsAutoExRoom_k__BackingField = 1;
  if ( !v4 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_596AEFC = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_AutoExRoomType_k__BackingField = 3;
  TerminalPramsManager__SaveExRoomTransitionInfo(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
}


int32_t ExRoomShopComponent___c___GetTargetDailyShopEntities_b__37_0(
        ExRoomShopComponent___c_o *this,
        System_ValueTuple_int__ShopEntity__o a,
        System_ValueTuple_int__ShopEntity__o b,
        const MethodInfo *method)
{
  __int64 v4; // x0

  v4 = (unsigned int)(b.fields.Item1 - a.fields.Item1);
  if ( b.fields.Item1 == a.fields.Item1 )
  {
    if ( !a.fields.Item2 || !b.fields.Item2 )
      sub_2213CDC(v4, *(_QWORD *)&a.fields.Item1);
    LODWORD(v4) = a.fields.Item2->fields.priority - b.fields.Item2->fields.priority;
  }
  return v4;
}


ShopEntity_o *ExRoomShopComponent___c___GetTargetDailyShopEntities_b__37_1(
        ExRoomShopComponent___c_o *this,
        System_ValueTuple_int__ShopEntity__o elm,
        const MethodInfo *method)
{
  return elm.fields.Item2;
}


void ExRoomShopComponent___c___OnClickShop_b__39_1(ExRoomShopComponent___c_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x20
  SceneJumpInfo_o *v3; // x19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596AE91 & 1) == 0 )
  {
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596AE91 = 1;
  }
  v2 = **(System_String_o ***)(qword_5984390 + 184);
  v3 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_48464828(v3, v2, 0);
  if ( !v3
    || (SceneJumpInfo__SetReturnNowScene(v3, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v5);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v3, 0);
}


void ExRoomShopComponent___c__DisplayClass22_0___ctor(
        ExRoomShopComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomShopComponent___c__DisplayClass22_0___Quit_b__0(
        ExRoomShopComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  ExRoomShopComponent___c__DisplayClass22_0___Quit_g__CleanUp_1(this, method);
  ActionExtensions__Call(this->fields.callback, 0);
}


void ExRoomShopComponent___c__DisplayClass22_0___Quit_g__CleanUp_1(
        ExRoomShopComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  ExRoomShopComponent___c__DisplayClass22_0_o *v2; // x19
  struct ExRoomShopComponent_o *_4__this; // x8
  struct ExRoomShopComponent_o *v4; // x8
  struct ExRoomShopComponent_o *v5; // x8
  struct System_Collections_Generic_List_ShopEntity__o *targetShopEntities; // x9
  int32_t size; // w2
  int v8; // w10

  v2 = this;
  if ( (byte_596AE92 & 1) == 0 )
  {
    this = (ExRoomShopComponent___c__DisplayClass22_0_o *)sub_2213A60(&Method_System_Collections_Generic_List_ShopEntity__Clear__);
    byte_596AE92 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (ExRoomShopComponent___c__DisplayClass22_0_o *)_4__this->fields.shopBuyItemListViewManager;
  if ( !this )
    goto LABEL_13;
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_13;
  this = (ExRoomShopComponent___c__DisplayClass22_0_o *)v4->fields.shopByListRootObject;
  if ( !this )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_13;
  targetShopEntities = v5->fields.targetShopEntities;
  if ( !targetShopEntities )
    goto LABEL_13;
  size = targetShopEntities->fields._size;
  v8 = targetShopEntities->fields._version + 1;
  targetShopEntities->fields._size = 0;
  targetShopEntities->fields._version = v8;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)targetShopEntities->fields._items, 0, size, 0);
    v5 = v2->fields.__4__this;
    if ( !v5 )
      goto LABEL_13;
  }
  this = (ExRoomShopComponent___c__DisplayClass22_0_o *)v5->fields.shopCurrencyInfoPanel;
  if ( !this )
LABEL_13:
    sub_2213CDC(this, method);
  ((void (__fastcall *)(ExRoomShopComponent___c__DisplayClass22_0_o *, Il2CppClass *, double))this->klass[1]._1.element_class)(
    this,
    this->klass[1]._1.castClass,
    0.0);
}