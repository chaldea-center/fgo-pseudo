void __fastcall TerminalApSeedExchangeManager___ctor(TerminalApSeedExchangeManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__CloseDialogs(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B1A779 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B1A779 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseApSeedExchangeDialog((CommonUI_o *)Instance, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseApSeedBulkExchangeDialog((CommonUI_o *)Instance, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BCB254(Instance, v3);
  }
  CommonUI__CloseItemExchangeResultDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__EndRequestShop(
        TerminalApSeedExchangeManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  TerminalSceneComponent_c *v9; // x0
  UnityEngine_Object_o *mInstance; // x20
  const MethodInfo *v11; // x1
  ScrPlayerStatus_o *v12; // x0
  struct TerminalSceneComponent_o *v13; // x8
  UnityEngine_Object_o *mPlayerStatus; // x20
  struct TerminalSceneComponent_o *v15; // x8
  struct TerminalSceneComponent_o *v16; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  struct TerminalSceneComponent_o *v18; // x8
  struct ScrTerminalListTop_o *v19; // x8
  UnityEngine_Object_o *mQuestBoardListViewManager; // x20

  if ( (byte_4B1A777 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, result);
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v6);
    byte_4B1A777 = 1;
  }
  v7 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22015/*"ng"*/, 0LL);
  if ( v7 )
  {
    TerminalApSeedExchangeManager__CloseDialogs((TerminalApSeedExchangeManager_o *)v7, v8);
    return;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v8);
    byte_4B1676D = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v9->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4B1676D )
    {
      sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v11);
      byte_4B1676D = 1;
    }
    v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
    }
    v13 = **(struct TerminalSceneComponent_o ***)&v12->fields.mIsEnableRpRecoverBtn;
    if ( v13 )
    {
      mPlayerStatus = (UnityEngine_Object_o *)v13->fields.mPlayerStatus;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mPlayerStatus, 0LL, 0LL) )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4B1676D )
        {
          sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v11);
          byte_4B1676D = 1;
        }
        v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        }
        v15 = **(struct TerminalSceneComponent_o ***)&v12->fields.mIsEnableRpRecoverBtn;
        if ( !v15 )
          goto LABEL_57;
        v12 = v15->fields.mPlayerStatus;
        if ( !v12 )
          goto LABEL_57;
        ScrPlayerStatus__mfInitUserData(v12, 0LL);
      }
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4B1676D )
      {
        sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v11);
        byte_4B1676D = 1;
      }
      v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
      }
      v16 = **(struct TerminalSceneComponent_o ***)&v12->fields.mIsEnableRpRecoverBtn;
      if ( v16 )
      {
        mTerminalList = (UnityEngine_Object_o *)v16->fields.mTerminalList;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(mTerminalList, 0LL, 0LL) )
          goto LABEL_56;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4B1676D )
        {
          sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v11);
          byte_4B1676D = 1;
        }
        v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        }
        v18 = **(struct TerminalSceneComponent_o ***)&v12->fields.mIsEnableRpRecoverBtn;
        if ( v18 )
        {
          v19 = v18->fields.mTerminalList;
          if ( v19 )
          {
            mQuestBoardListViewManager = (UnityEngine_Object_o *)v19->fields.mQuestBoardListViewManager;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v12 = (ScrPlayerStatus_o *)UnityEngine_Object__op_Inequality(mQuestBoardListViewManager, 0LL, 0LL);
            if ( ((unsigned __int8)v12 & 1) == 0 )
              goto LABEL_56;
            if ( mQuestBoardListViewManager )
            {
              QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)mQuestBoardListViewManager, 1, 0LL);
              goto LABEL_56;
            }
          }
        }
      }
    }
LABEL_57:
    sub_1BCB254(v12, v11);
  }
LABEL_56:
  TerminalApSeedExchangeManager__ShowExchangeResultDialog(this, v11);
}


void __fastcall TerminalApSeedExchangeManager__Initialize(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  ShopEntity_array *EnableEntitiyList_42000848; // x0
  TerminalApSeedExchangeManager___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_object__bool__o *_9__4_0; // x21
  Il2CppObject *v17; // x22
  struct TerminalApSeedExchangeManager___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  ApSeedExchangeButton_o *apSeedExchangeButton; // x20
  ShopEntity_o *shopEntity; // x21
  System_Action_o *v26; // x22

  if ( (byte_4B1A774 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ShopMaster___, v3);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_ShopEntity___, v6);
    sub_1BCAFF8(&System_Func_ShopEntity__bool__TypeInfo, v7);
    sub_1BCAFF8(&Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__, v8);
    sub_1BCAFF8(&Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__, v9);
    sub_1BCAFF8(&TerminalApSeedExchangeManager___c_TypeInfo, v10);
    byte_4B1A774 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_15;
  EnableEntitiyList_42000848 = ShopMaster__GetEnableEntitiyList_42000848((ShopMaster_o *)Master_object, 0, 14, 0LL);
  v14 = TerminalApSeedExchangeManager___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntitiyList_42000848;
  if ( !TerminalApSeedExchangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalApSeedExchangeManager___c_TypeInfo);
    v14 = TerminalApSeedExchangeManager___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__bool__o *)v14->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = TerminalApSeedExchangeManager___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__4_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__4_0, v17, Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__, 0LL);
    static_fields = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_ShopEntity__bool__o *)_9__4_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v19, v20);
  }
  v21 = System_Linq_Enumerable__Where_object_(
          v15,
          (System_Func_TSource__bool__o *)_9__4_0,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  Master_object = System_Linq_Enumerable__FirstOrDefault_object_(
                    v21,
                    (const MethodInfo_303F1D0 *)Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___);
  if ( !this
    || (this->fields.shopEntity = (struct ShopEntity_o *)Master_object,
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.shopEntity, (int32_t)Master_object, v22, v23),
        apSeedExchangeButton = this->fields.apSeedExchangeButton,
        shopEntity = this->fields.shopEntity,
        v26 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v26,
          (Il2CppObject *)this,
          Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__,
          0LL),
        !apSeedExchangeButton) )
  {
LABEL_15:
    sub_1BCB254(Master_object, v12);
  }
  ApSeedExchangeButton__SetupBtn(apSeedExchangeButton, shopEntity, v26, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__OnClickApSeedExchangeButton(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ShopEntity_o *shopEntity; // x20
  ShopBuyItemListViewItem_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x0
  ShopEntity_o *v11; // x20
  ShopBuyItemListViewItem_o *listViewItem; // x21
  CommonUI_o *v13; // x22
  System_Action_int__o *v14; // x23
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B1A775 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_int__TypeInfo, method);
    sub_1BCAFF8(&ShopBuyItemListViewItem_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BCAFF8(&Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__, v5);
    byte_4B1A775 = 1;
  }
  shopEntity = this->fields.shopEntity;
  if ( shopEntity )
  {
    v7 = (ShopBuyItemListViewItem_o *)sub_1BCB244(ShopBuyItemListViewItem_TypeInfo);
    ShopBuyItemListViewItem___ctor(v7, 0, 18, shopEntity, -1LL, 0LL);
    this->fields.listViewItem = v7;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.listViewItem, (int32_t)v7, v8, v9);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = this->fields.shopEntity;
    listViewItem = this->fields.listViewItem;
    v13 = (CommonUI_o *)Instance;
    v14 = (System_Action_int__o *)sub_1BCB244(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v14,
      (Il2CppObject *)this,
      Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__,
      0LL);
    if ( !v13 )
      sub_1BCB254(v15, v16);
    CommonUI__OpenApSeedBulkExchangeDialog(v13, v11, listViewItem, v14, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalApSeedExchangeManager__OnCloseResultDialog(
        TerminalApSeedExchangeManager_o *this,
        bool isOk,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1A77A & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isOk);
    byte_4B1A77A = 1;
  }
  TerminalApSeedExchangeManager__CloseDialogs(this, (const MethodInfo *)isOk);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  CommonUI__UpdateApRecoverItemListDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalApSeedExchangeManager__OnSelectExchangeItems(
        TerminalApSeedExchangeManager_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  TerminalApSeedExchangeManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x21
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1
  struct ShopEntity_o *shopEntity; // x8

  v4 = this;
  if ( (byte_4B1A776 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_NetworkManager_getRequest_PurchaseRequest___, *(_QWORD *)&buyCount);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    this = (TerminalApSeedExchangeManager_o *)sub_1BCAFF8(&Method_TerminalApSeedExchangeManager_EndRequestShop__, v7);
    byte_4B1A776 = 1;
  }
  v4->fields.buyCount = buyCount;
  if ( buyCount )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)v4,
      Method_TerminalApSeedExchangeManager_EndRequestShop__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    shopEntity = v4->fields.shopEntity;
    if ( !shopEntity || !Request_object )
      sub_1BCB254(Request_object, v10);
    PurchaseRequest__beginRequest((PurchaseRequest_o *)Request_object, shopEntity->fields.id, buyCount, 0, 0, 0LL);
  }
  else
  {
    TerminalApSeedExchangeManager__CloseDialogs(this, *(const MethodInfo **)&buyCount);
  }
}


void __fastcall TerminalApSeedExchangeManager__ShowExchangeResultDialog(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  Il2CppObject *Entity; // x22
  struct ShopEntity_o *shopEntity; // x8
  System_String_o *v13; // x20
  System_String_o *RequestResultDialogItemMessageNormal; // x21
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  Il2CppObject *v16; // x23
  System_Action_bool__o *v17; // x24

  if ( (byte_4B1A778 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_bool__TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ItemMaster___, v3);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BCAFF8(&Method_TerminalApSeedExchangeManager_OnCloseResultDialog__, v7);
    byte_4B1A778 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.shopEntity )
    goto LABEL_11;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this->fields.shopEntity, 0LL);
  if ( !v10 )
    goto LABEL_11;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v10,
             (int32_t)Instance,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  Instance = (DataManager_o *)ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageNormal(
                                this->fields.listViewItem,
                                this->fields.shopEntity,
                                this->fields.buyCount,
                                0LL);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_11;
  if ( shopEntity->fields.purchaseType == 1 )
  {
    v13 = (System_String_o *)Instance;
    RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                             this->fields.shopEntity,
                                             (ItemEntity_o *)Entity,
                                             this->fields.buyCount,
                                             0LL);
    RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                            this->fields.shopEntity,
                                            (ItemEntity_o *)Entity,
                                            0LL);
    v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = (System_Action_bool__o *)sub_1BCB244(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v17,
      (Il2CppObject *)this,
      Method_TerminalApSeedExchangeManager_OnCloseResultDialog__,
      0LL);
    if ( v16 )
    {
      CommonUI__OpenItemExchangeResultDialog(
        (CommonUI_o *)v16,
        v13,
        RequestResultDialogNumMessageNormal,
        RequestResultDialogItemMessageNormal,
        v17,
        0LL);
      return;
    }
LABEL_11:
    sub_1BCB254(Instance, v9);
  }
}


void __fastcall TerminalApSeedExchangeManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1A77B & 1) == 0 )
  {
    sub_1BCAFF8(&TerminalApSeedExchangeManager___c_TypeInfo, v1);
    byte_4B1A77B = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(TerminalApSeedExchangeManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalApSeedExchangeManager___c_TypeInfo->static_fields->__9 = (struct TerminalApSeedExchangeManager___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)TerminalApSeedExchangeManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall TerminalApSeedExchangeManager___c___ctor(
        TerminalApSeedExchangeManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TerminalApSeedExchangeManager___c___Initialize_b__4_0(
        TerminalApSeedExchangeManager___c_o *this,
        ShopEntity_o *ent,
        const MethodInfo *method)
{
  int32_t TargetId; // w0
  BalanceConfig_c *v5; // x8
  int32_t v6; // w19

  if ( (byte_4B1A77C & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager___c_o *)sub_1BCAFF8(&BalanceConfig_TypeInfo, ent);
    byte_4B1A77C = 1;
  }
  if ( !ent )
    sub_1BCB254(this, ent);
  TargetId = ShopEntity__get_TargetId(ent, 0LL);
  v5 = BalanceConfig_TypeInfo;
  v6 = TargetId;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  return v6 == v5->static_fields->ApSeedExchangeTargetItemId;
}