void TerminalApSeedExchangeManager___ctor(TerminalApSeedExchangeManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TerminalApSeedExchangeManager__CloseDialogs(TerminalApSeedExchangeManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C2534C & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2534C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseApSeedExchangeDialog((CommonUI_o *)Instance, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__CloseApSeedBulkExchangeDialog((CommonUI_o *)Instance, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v3);
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
  TerminalSceneComponent_c *v7; // x0
  UnityEngine_Object_o *mInstance; // x20
  const MethodInfo *v9; // x1
  ScrPlayerStatus_o *v10; // x0
  struct TerminalSceneComponent_o *v11; // x8
  UnityEngine_Object_o *mPlayerStatus; // x20
  struct TerminalSceneComponent_o *v13; // x8
  struct TerminalSceneComponent_o *v14; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  struct TerminalSceneComponent_o *v16; // x8
  struct ScrTerminalListTop_o *v17; // x8
  UnityEngine_Object_o *mQuestBoardListViewManager; // x20

  if ( (byte_4C2534A & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C2534A = 1;
  }
  v5 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22195/*"ng"*/, 0);
  if ( v5 )
  {
    TerminalApSeedExchangeManager__CloseDialogs((TerminalApSeedExchangeManager_o *)v5, v6);
    return;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v7->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C21383 )
    {
      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
      byte_4C21383 = 1;
    }
    v10 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v10 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
    }
    v11 = **(struct TerminalSceneComponent_o ***)&v10->fields.mIsEnableRpRecoverBtn;
    if ( v11 )
    {
      mPlayerStatus = (UnityEngine_Object_o *)v11->fields.mPlayerStatus;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mPlayerStatus, 0, 0) )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C21383 )
        {
          sub_1C2D490(&TerminalSceneComponent_TypeInfo);
          byte_4C21383 = 1;
        }
        v10 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v10 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        }
        v13 = **(struct TerminalSceneComponent_o ***)&v10->fields.mIsEnableRpRecoverBtn;
        if ( !v13 )
          goto LABEL_57;
        v10 = v13->fields.mPlayerStatus;
        if ( !v10 )
          goto LABEL_57;
        ScrPlayerStatus__mfInitUserData(v10, 0);
      }
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C21383 )
      {
        sub_1C2D490(&TerminalSceneComponent_TypeInfo);
        byte_4C21383 = 1;
      }
      v10 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v10 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
      }
      v14 = **(struct TerminalSceneComponent_o ***)&v10->fields.mIsEnableRpRecoverBtn;
      if ( v14 )
      {
        mTerminalList = (UnityEngine_Object_o *)v14->fields.mTerminalList;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(mTerminalList, 0, 0) )
          goto LABEL_56;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C21383 )
        {
          sub_1C2D490(&TerminalSceneComponent_TypeInfo);
          byte_4C21383 = 1;
        }
        v10 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v10 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        }
        v16 = **(struct TerminalSceneComponent_o ***)&v10->fields.mIsEnableRpRecoverBtn;
        if ( v16 )
        {
          v17 = v16->fields.mTerminalList;
          if ( v17 )
          {
            mQuestBoardListViewManager = (UnityEngine_Object_o *)v17->fields.mQuestBoardListViewManager;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v10 = (ScrPlayerStatus_o *)UnityEngine_Object__op_Inequality(mQuestBoardListViewManager, 0, 0);
            if ( ((unsigned __int8)v10 & 1) == 0 )
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
    sub_1C2D6EC(v10, v9);
  }
LABEL_56:
  TerminalApSeedExchangeManager__ShowExchangeResultDialog(this, v9);
}


void TerminalApSeedExchangeManager__Initialize(TerminalApSeedExchangeManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  ShopEntity_array *EnableEntitiyList_42623456; // x0
  TerminalApSeedExchangeManager___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  System_Func_object__bool__o *_9__4_0; // x21
  Il2CppObject *v9; // x22
  struct TerminalApSeedExchangeManager___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  ApSeedExchangeButton_o *apSeedExchangeButton; // x20
  ShopEntity_o *shopEntity; // x21
  System_Action_o *v18; // x22

  if ( (byte_4C25347 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_1C2D490(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1C2D490(&Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__);
    sub_1C2D490(&Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__);
    sub_1C2D490(&TerminalApSeedExchangeManager___c_TypeInfo);
    byte_4C25347 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_15;
  EnableEntitiyList_42623456 = ShopMaster__GetEnableEntitiyList_42623456((ShopMaster_o *)Master_object, 0, 14, 0);
  v6 = TerminalApSeedExchangeManager___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntitiyList_42623456;
  if ( !TerminalApSeedExchangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalApSeedExchangeManager___c_TypeInfo);
    v6 = TerminalApSeedExchangeManager___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__bool__o *)v6->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = TerminalApSeedExchangeManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__4_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__4_0, v9, Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__, 0);
    static_fields = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_ShopEntity__bool__o *)_9__4_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v11, v12);
  }
  v13 = System_Linq_Enumerable__Where_object_(
          v7,
          (System_Func_TSource__bool__o *)_9__4_0,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  Master_object = System_Linq_Enumerable__FirstOrDefault_object_(
                    v13,
                    (const MethodInfo_30F7054 *)Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___);
  if ( !this
    || (this->fields.shopEntity = (struct ShopEntity_o *)Master_object,
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.shopEntity, (int32_t)Master_object, v14, v15),
        apSeedExchangeButton = this->fields.apSeedExchangeButton,
        shopEntity = this->fields.shopEntity,
        v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)this,
          Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__,
          0),
        !apSeedExchangeButton) )
  {
LABEL_15:
    sub_1C2D6EC(Master_object, v4);
  }
  ApSeedExchangeButton__SetupBtn(apSeedExchangeButton, shopEntity, v18, 0);
}


void TerminalApSeedExchangeManager__OnClickApSeedExchangeButton(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  ShopEntity_o *shopEntity; // x20
  ShopBuyItemListViewItem_o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *Instance; // x0
  ShopEntity_o *v8; // x20
  ShopBuyItemListViewItem_o *listViewItem; // x21
  CommonUI_o *v10; // x22
  System_Action_int__o *v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4C25348 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_int__TypeInfo);
    sub_1C2D490(&ShopBuyItemListViewItem_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__);
    byte_4C25348 = 1;
  }
  shopEntity = this->fields.shopEntity;
  if ( shopEntity )
  {
    v4 = (ShopBuyItemListViewItem_o *)sub_1C2D6DC(ShopBuyItemListViewItem_TypeInfo);
    ShopBuyItemListViewItem___ctor(v4, 0, 18, shopEntity, -1, 0);
    this->fields.listViewItem = v4;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.listViewItem, (int32_t)v4, v5, v6);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = this->fields.shopEntity;
    listViewItem = this->fields.listViewItem;
    v10 = (CommonUI_o *)Instance;
    v11 = (System_Action_int__o *)sub_1C2D6DC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v11,
      (Il2CppObject *)this,
      Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__,
      0);
    if ( !v10 )
      sub_1C2D6EC(v12, v13);
    CommonUI__OpenApSeedBulkExchangeDialog(v10, v8, listViewItem, v11, 0);
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

  if ( (byte_4C2534D & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2534D = 1;
  }
  TerminalApSeedExchangeManager__CloseDialogs(this, (const MethodInfo *)isOk);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
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
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  struct ShopEntity_o *shopEntity; // x8

  v4 = this;
  if ( (byte_4C25349 & 1) == 0 )
  {
    sub_1C2D490(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (TerminalApSeedExchangeManager_o *)sub_1C2D490(&Method_TerminalApSeedExchangeManager_EndRequestShop__);
    byte_4C25349 = 1;
  }
  v4->fields.buyCount = buyCount;
  if ( buyCount )
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)v4,
      Method_TerminalApSeedExchangeManager_EndRequestShop__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v5,
                       (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    shopEntity = v4->fields.shopEntity;
    if ( !shopEntity || !Request_object )
      sub_1C2D6EC(Request_object, v7);
    PurchaseRequest__beginRequest((PurchaseRequest_o *)Request_object, shopEntity->fields.id, buyCount, 0, 0, 0);
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

  if ( (byte_4C2534B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_bool__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_TerminalApSeedExchangeManager_OnCloseResultDialog__);
    byte_4C2534B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.shopEntity )
    goto LABEL_11;
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this->fields.shopEntity, 0);
  if ( !v5 )
    goto LABEL_11;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v5,
             (int32_t)Instance,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_bool__o *)sub_1C2D6DC(System_Action_bool__TypeInfo);
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
    sub_1C2D6EC(Instance, v4);
  }
}


void TerminalApSeedExchangeManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2534E & 1) == 0 )
  {
    sub_1C2D490(&TerminalApSeedExchangeManager___c_TypeInfo);
    byte_4C2534E = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(TerminalApSeedExchangeManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalApSeedExchangeManager___c_TypeInfo->static_fields->__9 = (struct TerminalApSeedExchangeManager___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)TerminalApSeedExchangeManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  BalanceConfig_c *v5; // x8
  int32_t v6; // w19

  if ( (byte_4C2534F & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager___c_o *)sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C2534F = 1;
  }
  if ( !ent )
    sub_1C2D6EC(this, ent);
  TargetId = ShopEntity__get_TargetId(ent, 0);
  v5 = BalanceConfig_TypeInfo;
  v6 = TargetId;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  return v6 == v5->static_fields->ApSeedExchangeTargetItemId;
}