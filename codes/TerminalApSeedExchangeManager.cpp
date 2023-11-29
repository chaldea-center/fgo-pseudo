void __fastcall TerminalApSeedExchangeManager___ctor(TerminalApSeedExchangeManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__CloseDialogs(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  CommonUI_o *v3; // x0
  CommonUI_o *v4; // x0

  if ( (byte_40F6C6C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F6C6C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseApSeedExchangeDialog(Instance, 0LL, 0LL),
        (v3 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseApSeedBulkExchangeDialog(v3, 0LL, 0LL),
        (v4 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  CommonUI__CloseItemExchangeResultDialog(v4, 0LL, 0LL);
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
  TerminalSceneComponent_c *v12; // x0
  struct TerminalSceneComponent_o *v13; // x8
  UnityEngine_Object_o *mPlayerStatus; // x20
  __int64 v15; // x1
  TerminalSceneComponent_c *v16; // x0
  struct TerminalSceneComponent_o *v17; // x8
  ScrPlayerStatus_o *v18; // x0
  TerminalSceneComponent_c *v19; // x0
  struct TerminalSceneComponent_o *v20; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  TerminalSceneComponent_c *v22; // x0
  struct TerminalSceneComponent_o *v23; // x8
  struct ScrTerminalListTop_o *v24; // x8
  UnityEngine_Object_o *mQuestBoardListViewManager; // x20

  if ( (byte_40F6C6A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, result);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_20980, v6);
    byte_40F6C6A = 1;
  }
  v7 = System_String__op_Equality(result, (System_String_o *)StringLiteral_20980, 0LL);
  if ( v7 )
  {
    TerminalApSeedExchangeManager__CloseDialogs((TerminalApSeedExchangeManager_o *)v7, v8);
    return;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v8);
    byte_40F6042 = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v9->static_fields->mInstance;
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
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v11);
      byte_40F6042 = 1;
    }
    v12 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v12 = TerminalSceneComponent_TypeInfo;
    }
    v13 = v12->static_fields->mInstance;
    if ( v13 )
    {
      mPlayerStatus = (UnityEngine_Object_o *)v13->fields.mPlayerStatus;
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
        if ( !byte_40F6042 )
        {
          sub_B16FFC(&TerminalSceneComponent_TypeInfo, v15);
          byte_40F6042 = 1;
        }
        v16 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v16 = TerminalSceneComponent_TypeInfo;
        }
        v17 = v16->static_fields->mInstance;
        if ( !v17 )
          goto LABEL_71;
        v18 = v17->fields.mPlayerStatus;
        if ( !v18 )
          goto LABEL_71;
        ScrPlayerStatus__mfInitUserData(v18, 0LL);
      }
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v15);
        byte_40F6042 = 1;
      }
      v19 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v19 = TerminalSceneComponent_TypeInfo;
      }
      v20 = v19->static_fields->mInstance;
      if ( v20 )
      {
        mTerminalList = (UnityEngine_Object_o *)v20->fields.mTerminalList;
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
        if ( !byte_40F6042 )
        {
          sub_B16FFC(&TerminalSceneComponent_TypeInfo, v11);
          byte_40F6042 = 1;
        }
        v22 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v22 = TerminalSceneComponent_TypeInfo;
        }
        v23 = v22->static_fields->mInstance;
        if ( v23 )
        {
          v24 = v23->fields.mTerminalList;
          if ( v24 )
          {
            mQuestBoardListViewManager = (UnityEngine_Object_o *)v24->fields.mQuestBoardListViewManager;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(mQuestBoardListViewManager, 0LL, 0LL) )
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
    sub_B170D4();
  }
LABEL_70:
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
  __int64 v11; // x1
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_IEnumerable_TSource__o *EnableEntitiyList_27857608; // x20
  TerminalApSeedExchangeManager___c_c *v18; // x8
  struct TerminalApSeedExchangeManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__4_0; // x21
  Il2CppObject *v21; // x22
  struct TerminalApSeedExchangeManager___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  struct ShopEntity_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  ApSeedExchangeButton_o *apSeedExchangeButton; // x20
  ShopEntity_o *shopEntity; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Action_o *v43; // x22

  if ( (byte_40F6C67 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_ShopMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_ShopEntity___, v6);
    sub_B16FFC(&Method_System_Func_ShopEntity__bool___ctor__, v7);
    sub_B16FFC(&System_Func_ShopEntity__bool__TypeInfo, v8);
    sub_B16FFC(&Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__, v9);
    sub_B16FFC(&Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__, v10);
    sub_B16FFC(&TerminalApSeedExchangeManager___c_TypeInfo, v11);
    byte_40F6C67 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  EnableEntitiyList_27857608 = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEnableEntitiyList_27857608(
                                                                                      Master_WarQuestSelectionMaster,
                                                                                      0,
                                                                                      14,
                                                                                      0LL);
  v18 = TerminalApSeedExchangeManager___c_TypeInfo;
  if ( (BYTE3(TerminalApSeedExchangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalApSeedExchangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalApSeedExchangeManager___c_TypeInfo);
    v18 = TerminalApSeedExchangeManager___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_ShopEntity__bool__TypeInfo,
                                                                                   v13,
                                                                                   v14,
                                                                                   v15,
                                                                                   v16);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__4_0,
      v21,
      Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_ShopEntity__bool___ctor__);
    v22 = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
    v22->__9__4_0 = (struct System_Func_ShopEntity__bool__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v22->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          EnableEntitiyList_27857608,
          (System_Func_TSource__bool__o *)_9__4_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v30 = (struct ShopEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                 v29,
                                 (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___);
  if ( !this
    || (this->fields.shopEntity = v30,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.shopEntity,
          (System_Int32_array **)v30,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36),
        apSeedExchangeButton = this->fields.apSeedExchangeButton,
        shopEntity = this->fields.shopEntity,
        v43 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v39, v40, v41, v42),
        System_Action___ctor(
          v43,
          (Il2CppObject *)this,
          Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__,
          0LL),
        !apSeedExchangeButton) )
  {
LABEL_18:
    sub_B170D4();
  }
  ApSeedExchangeButton__SetupBtn(apSeedExchangeButton, shopEntity, v43, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__OnClickApSeedExchangeButton(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ShopEntity_o *shopEntity; // x20
  ShopBuyItemListViewItem_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  WebViewManager_o *Instance; // x0
  ShopEntity_o *v19; // x20
  ShopBuyItemListViewItem_o *listViewItem; // x21
  CommonUI_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_int__o *v26; // x23

  if ( (byte_40F6C68 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v6);
    sub_B16FFC(&ShopBuyItemListViewItem_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__, v9);
    byte_40F6C68 = 1;
  }
  shopEntity = this->fields.shopEntity;
  if ( shopEntity )
  {
    v11 = (ShopBuyItemListViewItem_o *)sub_B170CC(ShopBuyItemListViewItem_TypeInfo, method, v2, v3, v4);
    ShopBuyItemListViewItem___ctor(v11, 0, 17, shopEntity, -1LL, 0LL);
    this->fields.listViewItem = v11;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.listViewItem,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = this->fields.shopEntity;
    listViewItem = this->fields.listViewItem;
    v21 = (CommonUI_o *)Instance;
    v26 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v22, v23, v24, v25);
    System_Action_int____ctor(
      v26,
      (Il2CppObject *)this,
      Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__,
      (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
    if ( !v21 )
      sub_B170D4();
    CommonUI__OpenApSeedBulkExchangeDialog(v21, v19, listViewItem, v26, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalApSeedExchangeManager__OnCloseResultDialog(
        TerminalApSeedExchangeManager_o *this,
        bool isOk,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F6C6D & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isOk);
    byte_40F6C6D = 1;
  }
  TerminalApSeedExchangeManager__CloseDialogs(this, (const MethodInfo *)isOk);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__UpdateApRecoverItemListDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalApSeedExchangeManager__OnSelectExchangeItems(
        TerminalApSeedExchangeManager_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  TerminalApSeedExchangeManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  NetworkManager_ResultCallbackFunc_o *v10; // x21
  PurchaseRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct ShopEntity_o *shopEntity; // x8

  v6 = this;
  if ( (byte_40F6C69 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_PurchaseRequest___, *(_QWORD *)&buyCount);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    this = (TerminalApSeedExchangeManager_o *)sub_B16FFC(&Method_TerminalApSeedExchangeManager_EndRequestShop__, v9);
    byte_40F6C69 = 1;
  }
  v6->fields.buyCount = buyCount;
  if ( buyCount )
  {
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   *(_QWORD *)&buyCount,
                                                   method,
                                                   v3,
                                                   v4);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)v6,
      Method_TerminalApSeedExchangeManager_EndRequestShop__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (PurchaseRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v10,
                                                               (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    shopEntity = v6->fields.shopEntity;
    if ( !shopEntity || !Request_WarBoardWallAttackRequest )
      sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  int32_t TargetId; // w0
  ItemEntity_o *Entity; // x22
  System_String_o *RequestResultDialogMessageNormal; // x0
  struct ShopEntity_o *shopEntity; // x8
  System_String_o *v16; // x20
  System_String_o *RequestResultDialogItemMessageNormal; // x21
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  CommonUI_o *v19; // x23
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Action_bool__o *v24; // x24

  if ( (byte_40F6C6B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&System_Action_bool__TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_TerminalApSeedExchangeManager_OnCloseResultDialog__, v8);
    byte_40F6C6B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.shopEntity )
    goto LABEL_11;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  TargetId = ShopEntity__get_TargetId(this->fields.shopEntity, 0LL);
  if ( !v11 )
    goto LABEL_11;
  Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v11,
                             TargetId,
                             (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  RequestResultDialogMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageNormal(
                                       this->fields.listViewItem,
                                       this->fields.shopEntity,
                                       this->fields.buyCount,
                                       0LL);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_11;
  if ( shopEntity->fields.purchaseType == 1 )
  {
    v16 = RequestResultDialogMessageNormal;
    RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                             this->fields.shopEntity,
                                             Entity,
                                             this->fields.buyCount,
                                             0LL);
    RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                            this->fields.shopEntity,
                                            Entity,
                                            0LL);
    v19 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v20, v21, v22, v23);
    System_Action_bool____ctor(
      v24,
      (Il2CppObject *)this,
      Method_TerminalApSeedExchangeManager_OnCloseResultDialog__,
      (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
    if ( v19 )
    {
      CommonUI__OpenItemExchangeResultDialog(
        v19,
        v16,
        RequestResultDialogNumMessageNormal,
        RequestResultDialogItemMessageNormal,
        v24,
        0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
}


void __fastcall TerminalApSeedExchangeManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F77A6 & 1) == 0 )
  {
    sub_B16FFC(&TerminalApSeedExchangeManager___c_TypeInfo, v1);
    byte_40F77A6 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(TerminalApSeedExchangeManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F77A7 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, ent);
    byte_40F77A7 = 1;
  }
  if ( !ent )
    sub_B170D4();
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