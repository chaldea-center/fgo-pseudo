void __fastcall TerminalApSeedExchangeManager___ctor(TerminalApSeedExchangeManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__CloseDialogs(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_434EE3C & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434EE3C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseApSeedExchangeDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseApSeedBulkExchangeDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B7076C(Instance, v3);
  }
  CommonUI__CloseItemExchangeResultDialog(Instance, 0LL, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__EndRequestShop(
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

  if ( (byte_434EE3A & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_434EE3A = 1;
  }
  v5 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL);
  if ( v5 )
  {
    TerminalApSeedExchangeManager__CloseDialogs((TerminalApSeedExchangeManager_o *)v5, v6);
    return;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v7->static_fields->mInstance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      byte_434DEA1 = 1;
    }
    v10 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v10 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
    }
    v11 = **(struct TerminalSceneComponent_o ***)&v10->fields.mIsEnableRpRecoverBtn;
    if ( v11 )
    {
      mPlayerStatus = (UnityEngine_Object_o *)v11->fields.mPlayerStatus;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(mPlayerStatus, 0LL, 0LL) )
      {
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_434DEA1 )
        {
          sub_B70694(&TerminalSceneComponent_TypeInfo);
          byte_434DEA1 = 1;
        }
        v10 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v10 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        }
        v13 = **(struct TerminalSceneComponent_o ***)&v10->fields.mIsEnableRpRecoverBtn;
        if ( !v13 )
          goto LABEL_71;
        v10 = v13->fields.mPlayerStatus;
        if ( !v10 )
          goto LABEL_71;
        ScrPlayerStatus__mfInitUserData(v10, 0LL);
      }
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_434DEA1 )
      {
        sub_B70694(&TerminalSceneComponent_TypeInfo);
        byte_434DEA1 = 1;
      }
      v10 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v10 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
      }
      v14 = **(struct TerminalSceneComponent_o ***)&v10->fields.mIsEnableRpRecoverBtn;
      if ( v14 )
      {
        mTerminalList = (UnityEngine_Object_o *)v14->fields.mTerminalList;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(mTerminalList, 0LL, 0LL) )
          goto LABEL_70;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_434DEA1 )
        {
          sub_B70694(&TerminalSceneComponent_TypeInfo);
          byte_434DEA1 = 1;
        }
        v10 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
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
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v10 = (ScrPlayerStatus_o *)UnityEngine_Object__op_Inequality(mQuestBoardListViewManager, 0LL, 0LL);
            if ( ((unsigned __int8)v10 & 1) == 0 )
              goto LABEL_70;
            if ( mQuestBoardListViewManager )
            {
              QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)mQuestBoardListViewManager, 0LL);
              goto LABEL_70;
            }
          }
        }
      }
    }
LABEL_71:
    sub_B7076C(v10, v9);
  }
LABEL_70:
  TerminalApSeedExchangeManager__ShowExchangeResultDialog(this, v9);
}


void __fastcall TerminalApSeedExchangeManager__Initialize(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EnableEntitiyList_28255544; // x20
  TerminalApSeedExchangeManager___c_c *v6; // x8
  struct TerminalApSeedExchangeManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__4_0; // x21
  Il2CppObject *v9; // x22
  struct TerminalApSeedExchangeManager___c_StaticFields *v10; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  ApSeedExchangeButton_o *apSeedExchangeButton; // x20
  ShopEntity_o *shopEntity; // x21
  System_Action_o *v14; // x22

  if ( (byte_434EE37 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ShopMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_B70694(&Method_System_Func_ShopEntity__bool___ctor__);
    sub_B70694(&System_Func_ShopEntity__bool__TypeInfo);
    sub_B70694(&Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__);
    sub_B70694(&Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__);
    sub_B70694(&TerminalApSeedExchangeManager___c_TypeInfo);
    byte_434EE37 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  EnableEntitiyList_28255544 = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEnableEntitiyList_28255544(
                                                                                      Master_WarQuestSelectionMaster,
                                                                                      0,
                                                                                      14,
                                                                                      0LL);
  v6 = TerminalApSeedExchangeManager___c_TypeInfo;
  if ( (BYTE3(TerminalApSeedExchangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalApSeedExchangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalApSeedExchangeManager___c_TypeInfo);
    v6 = TerminalApSeedExchangeManager___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__4_0,
      v9,
      Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_ShopEntity__bool___ctor__);
    v10 = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
    v10->__9__4_0 = (struct System_Func_ShopEntity__bool__o *)_9__4_0;
    sub_B70630(&v10->__9__4_0);
  }
  v11 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          EnableEntitiyList_28255544,
          (System_Func_TSource__bool__o *)_9__4_0,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  Master_WarQuestSelectionMaster = (ShopMaster_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                     v11,
                                                     (const MethodInfo_1CBC6C4 *)Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___);
  if ( !this
    || (this->fields.shopEntity = (struct ShopEntity_o *)Master_WarQuestSelectionMaster,
        sub_B70630(&this->fields.shopEntity),
        apSeedExchangeButton = this->fields.apSeedExchangeButton,
        shopEntity = this->fields.shopEntity,
        v14 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)this,
          Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__,
          0LL),
        !apSeedExchangeButton) )
  {
LABEL_18:
    sub_B7076C(Master_WarQuestSelectionMaster, v4);
  }
  ApSeedExchangeButton__SetupBtn(apSeedExchangeButton, shopEntity, v14, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__OnClickApSeedExchangeButton(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  ShopEntity_o *shopEntity; // x20
  ShopBuyItemListViewItem_o *v4; // x21
  WebViewManager_o *Instance; // x0
  ShopEntity_o *v6; // x20
  ShopBuyItemListViewItem_o *listViewItem; // x21
  CommonUI_o *v8; // x22
  System_Action_int__o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_434EE38 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&ShopBuyItemListViewItem_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__);
    byte_434EE38 = 1;
  }
  shopEntity = this->fields.shopEntity;
  if ( shopEntity )
  {
    v4 = (ShopBuyItemListViewItem_o *)sub_B70764(ShopBuyItemListViewItem_TypeInfo);
    ShopBuyItemListViewItem___ctor(v4, 0, 17, shopEntity, -1LL, 0LL);
    this->fields.listViewItem = v4;
    sub_B70630(&this->fields.listViewItem);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = this->fields.shopEntity;
    listViewItem = this->fields.listViewItem;
    v8 = (CommonUI_o *)Instance;
    v9 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v9,
      (Il2CppObject *)this,
      Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__,
      (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
    if ( !v8 )
      sub_B7076C(v10, v11);
    CommonUI__OpenApSeedBulkExchangeDialog(v8, v6, listViewItem, v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalApSeedExchangeManager__OnCloseResultDialog(
        TerminalApSeedExchangeManager_o *this,
        bool isOk,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_434EE3D & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager_o *)sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434EE3D = 1;
  }
  TerminalApSeedExchangeManager__CloseDialogs(this, (const MethodInfo *)isOk);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  CommonUI__UpdateApRecoverItemListDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalApSeedExchangeManager__OnSelectExchangeItems(
        TerminalApSeedExchangeManager_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  TerminalApSeedExchangeManager_o *v4; // x20
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  PurchaseRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v7; // x1
  struct ShopEntity_o *shopEntity; // x8

  v4 = this;
  if ( (byte_434EE39 & 1) == 0 )
  {
    sub_B70694(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (TerminalApSeedExchangeManager_o *)sub_B70694(&Method_TerminalApSeedExchangeManager_EndRequestShop__);
    byte_434EE39 = 1;
  }
  v4->fields.buyCount = buyCount;
  if ( buyCount )
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)v4,
      Method_TerminalApSeedExchangeManager_EndRequestShop__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (PurchaseRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v5,
                                                               (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_PurchaseRequest___);
    shopEntity = v4->fields.shopEntity;
    if ( !shopEntity || !Request_WarBoardWallAttackRequest )
      sub_B7076C(Request_WarBoardWallAttackRequest, v7);
    PurchaseRequest__beginRequest(Request_WarBoardWallAttackRequest, shopEntity->fields.id, buyCount, 0, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v5; // x20
  ItemEntity_o *Entity; // x22
  struct ShopEntity_o *shopEntity; // x8
  System_String_o *v8; // x20
  System_String_o *RequestResultDialogItemMessageNormal; // x21
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  CommonUI_o *v11; // x23
  System_Action_bool__o *v12; // x24

  if ( (byte_434EE3B & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_bool___ctor__);
    sub_B70694(&System_Action_bool__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_TerminalApSeedExchangeManager_OnCloseResultDialog__);
    byte_434EE3B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.shopEntity )
    goto LABEL_11;
  v5 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this->fields.shopEntity, 0LL);
  if ( !v5 )
    goto LABEL_11;
  Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v5,
                             (int32_t)Instance,
                             (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
    v8 = (System_String_o *)Instance;
    RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                             this->fields.shopEntity,
                                             Entity,
                                             this->fields.buyCount,
                                             0LL);
    RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                            this->fields.shopEntity,
                                            Entity,
                                            0LL);
    v11 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_bool__o *)sub_B70764(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v12,
      (Il2CppObject *)this,
      Method_TerminalApSeedExchangeManager_OnCloseResultDialog__,
      (const MethodInfo_2648200 *)Method_System_Action_bool___ctor__);
    if ( v11 )
    {
      CommonUI__OpenItemExchangeResultDialog(
        v11,
        v8,
        RequestResultDialogNumMessageNormal,
        RequestResultDialogItemMessageNormal,
        v12,
        0LL);
      return;
    }
LABEL_11:
    sub_B7076C(Instance, v4);
  }
}


void __fastcall TerminalApSeedExchangeManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct TerminalApSeedExchangeManager___c_StaticFields *static_fields; // x0

  if ( (byte_434F117 & 1) == 0 )
  {
    sub_B70694(&TerminalApSeedExchangeManager___c_TypeInfo);
    byte_434F117 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(TerminalApSeedExchangeManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TerminalApSeedExchangeManager___c_o *)v1;
  sub_B70630(static_fields);
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
  int32_t TargetId; // w19
  BalanceConfig_c *v5; // x8

  if ( (byte_434F118 & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager___c_o *)sub_B70694(&BalanceConfig_TypeInfo);
    byte_434F118 = 1;
  }
  if ( !ent )
    sub_B7076C(this, ent);
  TargetId = ShopEntity__get_TargetId(ent, 0LL);
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  return TargetId == v5->static_fields->ApSeedExchangeTargetItemId;
}