void TerminalApSeedExchangeManager___ctor(TerminalApSeedExchangeManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TerminalApSeedExchangeManager__CloseDialogs(TerminalApSeedExchangeManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5936585 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5936585 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseApSeedBulkExchangeDialog((CommonUI_o *)Instance, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_21FFECC(Instance, v3);
  }
  CommonUI__CloseItemExchangeResultDialog((CommonUI_o *)Instance, 0, 0);
}


void TerminalApSeedExchangeManager__EndRequestShop(
        TerminalApSeedExchangeManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  TerminalSceneComponent_c *v8; // x0
  UnityEngine_Object_o *mInstance; // x20
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  ScrPlayerStatus_o *v12; // x0
  struct TerminalSceneComponent_o *klass; // x8
  UnityEngine_Object_o *mPlayerStatus; // x20
  __int64 v15; // x2
  struct TerminalSceneComponent_o *v16; // x8
  struct TerminalSceneComponent_o *v17; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  __int64 v19; // x2
  struct TerminalSceneComponent_o *v20; // x8
  struct ScrTerminalListTop_o *v21; // x8
  UnityEngine_Object_o *mQuestBoardListViewManager; // x20

  if ( (byte_5936583 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_5936583 = 1;
  }
  v5 = System_String__op_Equality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0);
  if ( v5 )
  {
    TerminalApSeedExchangeManager__CloseDialogs((TerminalApSeedExchangeManager_o *)v5, v6);
    return;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v7);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v8 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v7);
    v8 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v8->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v11);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v11);
      v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = (struct TerminalSceneComponent_o *)v12->fields.rpRoot->klass;
    if ( klass )
    {
      mPlayerStatus = (UnityEngine_Object_o *)klass->fields.mPlayerStatus;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
      if ( UnityEngine_Object__op_Inequality(mPlayerStatus, 0, 0) )
      {
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v15);
        if ( !byte_5931EF0 )
        {
          sub_21FFC50(&TerminalSceneComponent_TypeInfo);
          byte_5931EF0 = 1;
        }
        v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v15);
          v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        }
        v16 = (struct TerminalSceneComponent_o *)v12->fields.rpRoot->klass;
        if ( !v16 )
          goto LABEL_57;
        v12 = v16->fields.mPlayerStatus;
        if ( !v12 )
          goto LABEL_57;
        ScrPlayerStatus__mfInitUserData(v12, 0);
      }
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v15);
      if ( !byte_5931EF0 )
      {
        sub_21FFC50(&TerminalSceneComponent_TypeInfo);
        byte_5931EF0 = 1;
      }
      v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v15);
        v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
      }
      v17 = (struct TerminalSceneComponent_o *)v12->fields.rpRoot->klass;
      if ( v17 )
      {
        mTerminalList = (UnityEngine_Object_o *)v17->fields.mTerminalList;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v15);
        if ( !UnityEngine_Object__op_Inequality(mTerminalList, 0, 0) )
          goto LABEL_56;
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v19);
        if ( !byte_5931EF0 )
        {
          sub_21FFC50(&TerminalSceneComponent_TypeInfo);
          byte_5931EF0 = 1;
        }
        v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v19);
          v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        }
        v20 = (struct TerminalSceneComponent_o *)v12->fields.rpRoot->klass;
        if ( v20 )
        {
          v21 = v20->fields.mTerminalList;
          if ( v21 )
          {
            mQuestBoardListViewManager = (UnityEngine_Object_o *)v21->fields.mQuestBoardListViewManager;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v19);
            v12 = (ScrPlayerStatus_o *)UnityEngine_Object__op_Inequality(mQuestBoardListViewManager, 0, 0);
            if ( ((unsigned __int8)v12 & 1) == 0 )
              goto LABEL_56;
            if ( mQuestBoardListViewManager )
            {
              QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)mQuestBoardListViewManager, 1, 0);
              goto LABEL_56;
            }
          }
        }
      }
    }
LABEL_57:
    sub_21FFECC(v12, v10);
  }
LABEL_56:
  TerminalApSeedExchangeManager__ShowExchangeResultDialog(this, v10);
}


void TerminalApSeedExchangeManager__Initialize(TerminalApSeedExchangeManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  ShopEntity_array *EnableEntitiyList_49820452; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  TerminalApSeedExchangeManager___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x20
  struct TerminalApSeedExchangeManager___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__4_0; // x21
  Il2CppObject *v13; // x22
  struct TerminalApSeedExchangeManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  ApSeedExchangeButton_o *apSeedExchangeButton; // x20
  ShopEntity_o *shopEntity; // x21
  System_Action_o *v30; // x22

  if ( (byte_5936580 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ShopMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_21FFC50(&System_Func_ShopEntity__bool__TypeInfo);
    sub_21FFC50(&Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__);
    sub_21FFC50(&Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__);
    sub_21FFC50(&TerminalApSeedExchangeManager___c_TypeInfo);
    byte_5936580 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_15;
  EnableEntitiyList_49820452 = ShopMaster__GetEnableEntitiyList_49820452((ShopMaster_o *)Master_object, 0, 14, 0);
  v9 = TerminalApSeedExchangeManager___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntitiyList_49820452;
  if ( !*(&TerminalApSeedExchangeManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalApSeedExchangeManager___c_TypeInfo, v7, v8);
    v9 = TerminalApSeedExchangeManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__4_0 = (System_Func_object__bool__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v7, v8);
      static_fields = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__4_0, v13, Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__, 0);
    v14 = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
    v14->__9__4_0 = (struct System_Func_ShopEntity__bool__o *)_9__4_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__4_0, (int32_t)_9__4_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = System_Linq_Enumerable__Where_object_(
          v10,
          (System_Func_TSource__bool__o *)_9__4_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  Master_object = System_Linq_Enumerable__FirstOrDefault_object_(
                    v21,
                    (const MethodInfo_384E0B0 *)Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___);
  if ( !this
    || (this->fields.shopEntity = (struct ShopEntity_o *)Master_object,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.shopEntity,
          (int32_t)Master_object,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27),
        apSeedExchangeButton = this->fields.apSeedExchangeButton,
        shopEntity = this->fields.shopEntity,
        v30 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v30,
          (Il2CppObject *)this,
          Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__,
          0),
        !apSeedExchangeButton) )
  {
LABEL_15:
    sub_21FFECC(Master_object, v5);
  }
  ApSeedExchangeButton__SetupBtn(apSeedExchangeButton, shopEntity, v30, 0);
}


void TerminalApSeedExchangeManager__OnClickApSeedExchangeButton(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  ShopEntity_o *shopEntity; // x20
  ShopBuyItemListViewItem_o *v4; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  Il2CppObject *Instance; // x0
  ShopEntity_o *v12; // x20
  ShopBuyItemListViewItem_o *listViewItem; // x21
  CommonUI_o *v14; // x22
  System_Action_int__o *v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_5936581 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__TypeInfo);
    sub_21FFC50(&ShopBuyItemListViewItem_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__);
    byte_5936581 = 1;
  }
  shopEntity = this->fields.shopEntity;
  if ( shopEntity )
  {
    v4 = (ShopBuyItemListViewItem_o *)sub_21FFEBC(ShopBuyItemListViewItem_TypeInfo);
    ShopBuyItemListViewItem___ctor(v4, 0, 18, shopEntity, -1, 0);
    this->fields.listViewItem = v4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.listViewItem, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = this->fields.shopEntity;
    listViewItem = this->fields.listViewItem;
    v14 = (CommonUI_o *)Instance;
    v15 = (System_Action_int__o *)sub_21FFEBC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v15,
      (Il2CppObject *)this,
      Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__,
      0);
    if ( !v14 )
      sub_21FFECC(v16, v17);
    CommonUI__OpenApSeedBulkExchangeDialog(v14, v12, listViewItem, v15, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void TerminalApSeedExchangeManager__OnCloseResultDialog(
        TerminalApSeedExchangeManager_o *this,
        bool isOk,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5936586 & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5936586 = 1;
  }
  TerminalApSeedExchangeManager__CloseDialogs(this, (const MethodInfo *)isOk);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  CommonUI__UpdateApRecoverItemListDialog((CommonUI_o *)Instance, 0);
}


// local variable allocation has failed, the output may be wrong!
void TerminalApSeedExchangeManager__OnSelectExchangeItems(
        TerminalApSeedExchangeManager_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  TerminalApSeedExchangeManager_o *v4; // x20
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1
  struct ShopEntity_o *shopEntity; // x8

  v4 = this;
  if ( (byte_5936582 & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (TerminalApSeedExchangeManager_o *)sub_21FFC50(&Method_TerminalApSeedExchangeManager_EndRequestShop__);
    byte_5936582 = 1;
  }
  v4->fields.buyCount = buyCount;
  if ( buyCount )
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)v4,
      Method_TerminalApSeedExchangeManager_EndRequestShop__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Request_object = NetworkManager__getRequest_object_(
                       v5,
                       (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    shopEntity = v4->fields.shopEntity;
    if ( !shopEntity || !Request_object )
      sub_21FFECC(Request_object, v9);
    PurchaseRequest__beginRequest((PurchaseRequest_o *)Request_object, shopEntity->fields.id, buyCount, 0, 0, 0, 0, 0);
  }
  else
  {
    TerminalApSeedExchangeManager__CloseDialogs(this, *(const MethodInfo **)&buyCount);
  }
}


void TerminalApSeedExchangeManager__ShowExchangeResultDialog(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x20
  Il2CppObject *Entity; // x22
  struct ShopEntity_o *shopEntity; // x8
  System_String_o *v8; // x20
  System_String_o *RequestResultDialogItemMessageNormal; // x21
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  Il2CppObject *v11; // x23
  System_Action_bool__o *v12; // x24

  if ( (byte_5936584 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_TerminalApSeedExchangeManager_OnCloseResultDialog__);
    byte_5936584 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.shopEntity )
    goto LABEL_11;
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this->fields.shopEntity, 0);
  if ( !v5 )
    goto LABEL_11;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v5,
             (int32_t)Instance,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  Instance = (DataManager_o *)ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageNormal(
                                this->fields.listViewItem,
                                this->fields.shopEntity,
                                this->fields.buyCount,
                                0);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_11;
  if ( shopEntity->fields.purchaseType == 1 )
  {
    v8 = (System_String_o *)Instance;
    RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                             this->fields.shopEntity,
                                             (ItemEntity_o *)Entity,
                                             this->fields.buyCount,
                                             0);
    RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                            this->fields.shopEntity,
                                            (ItemEntity_o *)Entity,
                                            0);
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_bool__o *)sub_21FFEBC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v12, (Il2CppObject *)this, Method_TerminalApSeedExchangeManager_OnCloseResultDialog__, 0);
    if ( v11 )
    {
      CommonUI__OpenItemExchangeResultDialog(
        (CommonUI_o *)v11,
        v8,
        RequestResultDialogNumMessageNormal,
        RequestResultDialogItemMessageNormal,
        v12,
        0);
      return;
    }
LABEL_11:
    sub_21FFECC(Instance, v4);
  }
}


void TerminalApSeedExchangeManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5936587 & 1) == 0 )
  {
    sub_21FFC50(&TerminalApSeedExchangeManager___c_TypeInfo);
    byte_5936587 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(TerminalApSeedExchangeManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalApSeedExchangeManager___c_TypeInfo->static_fields->__9 = (struct TerminalApSeedExchangeManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TerminalApSeedExchangeManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalApSeedExchangeManager___c___ctor(TerminalApSeedExchangeManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TerminalApSeedExchangeManager___c___Initialize_b__4_0(
        TerminalApSeedExchangeManager___c_o *this,
        ShopEntity_o *ent,
        const MethodInfo *method)
{
  int32_t TargetId; // w0
  __int64 v5; // x1
  __int64 v6; // x2
  BalanceConfig_c *v7; // x8
  int32_t v8; // w19

  if ( (byte_5936588 & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager___c_o *)sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5936588 = 1;
  }
  if ( !ent )
    sub_21FFECC(this, ent);
  TargetId = ShopEntity__get_TargetId(ent, 0);
  v7 = BalanceConfig_TypeInfo;
  v8 = TargetId;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5, v6);
    v7 = BalanceConfig_TypeInfo;
  }
  return v8 == v7->static_fields->ApSeedExchangeTargetItemId;
}