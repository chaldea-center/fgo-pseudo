void __fastcall TerminalApSeedExchangeManager___ctor(TerminalApSeedExchangeManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__CloseDialogs(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_421195D & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_421195D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseApSeedExchangeDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseApSeedBulkExchangeDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  CommonUI__CloseItemExchangeResultDialog(Instance, 0LL, 0LL);
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
  __int64 v15; // x1
  struct TerminalSceneComponent_o *v16; // x8
  struct TerminalSceneComponent_o *v17; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  struct TerminalSceneComponent_o *v19; // x8
  struct ScrTerminalListTop_o *v20; // x8
  UnityEngine_Object_o *mQuestBoardListViewManager; // x20

  if ( (byte_421195B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, result);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v6);
    byte_421195B = 1;
  }
  v7 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL);
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
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v8);
    byte_421083D = 1;
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
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v11);
      byte_421083D = 1;
    }
    v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
    }
    v13 = **(struct TerminalSceneComponent_o ***)&v12->fields.mIsEnableRpRecoverBtn;
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
        if ( !byte_421083D )
        {
          sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v15);
          byte_421083D = 1;
        }
        v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        }
        v16 = **(struct TerminalSceneComponent_o ***)&v12->fields.mIsEnableRpRecoverBtn;
        if ( !v16 )
          goto LABEL_71;
        v12 = v16->fields.mPlayerStatus;
        if ( !v12 )
          goto LABEL_71;
        ScrPlayerStatus__mfInitUserData(v12, 0LL);
      }
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_421083D )
      {
        sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v15);
        byte_421083D = 1;
      }
      v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
      }
      v17 = **(struct TerminalSceneComponent_o ***)&v12->fields.mIsEnableRpRecoverBtn;
      if ( v17 )
      {
        mTerminalList = (UnityEngine_Object_o *)v17->fields.mTerminalList;
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
        if ( !byte_421083D )
        {
          sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v11);
          byte_421083D = 1;
        }
        v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        }
        v19 = **(struct TerminalSceneComponent_o ***)&v12->fields.mIsEnableRpRecoverBtn;
        if ( v19 )
        {
          v20 = v19->fields.mTerminalList;
          if ( v20 )
          {
            mQuestBoardListViewManager = (UnityEngine_Object_o *)v20->fields.mQuestBoardListViewManager;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v12 = (ScrPlayerStatus_o *)UnityEngine_Object__op_Inequality(mQuestBoardListViewManager, 0LL, 0LL);
            if ( ((unsigned __int8)v12 & 1) == 0 )
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
    sub_B0D97C(v12);
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
  System_Collections_Generic_IEnumerable_TSource__o *EnableEntitiyList_27326352; // x20
  TerminalApSeedExchangeManager___c_c *v16; // x8
  struct TerminalApSeedExchangeManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__4_0; // x21
  Il2CppObject *v19; // x22
  struct TerminalApSeedExchangeManager___c_StaticFields *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  ApSeedExchangeButton_o *apSeedExchangeButton; // x20
  ShopEntity_o *shopEntity; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_o *v26; // x22

  if ( (byte_4211958 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_ShopMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_ShopEntity___, v6);
    sub_B0D8A4(&Method_System_Func_ShopEntity__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_ShopEntity__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__, v9);
    sub_B0D8A4(&Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__, v10);
    sub_B0D8A4(&TerminalApSeedExchangeManager___c_TypeInfo, v11);
    byte_4211958 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  EnableEntitiyList_27326352 = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEnableEntitiyList_27326352(
                                                                                      Master_WarQuestSelectionMaster,
                                                                                      0,
                                                                                      14,
                                                                                      0LL);
  v16 = TerminalApSeedExchangeManager___c_TypeInfo;
  if ( (BYTE3(TerminalApSeedExchangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalApSeedExchangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalApSeedExchangeManager___c_TypeInfo);
    v16 = TerminalApSeedExchangeManager___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_ShopEntity__bool__TypeInfo,
                                                                                   v13,
                                                                                   v14);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__4_0,
      v19,
      Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_ShopEntity__bool___ctor__);
    v20 = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
    v20->__9__4_0 = (struct System_Func_ShopEntity__bool__o *)_9__4_0;
    sub_B0D840(&v20->__9__4_0, _9__4_0);
  }
  v21 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          EnableEntitiyList_27326352,
          (System_Func_TSource__bool__o *)_9__4_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  Master_WarQuestSelectionMaster = (ShopMaster_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                     v21,
                                                     (const MethodInfo_1B4B938 *)Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___);
  if ( !this
    || (this->fields.shopEntity = (struct ShopEntity_o *)Master_WarQuestSelectionMaster,
        sub_B0D840(&this->fields.shopEntity, Master_WarQuestSelectionMaster),
        apSeedExchangeButton = this->fields.apSeedExchangeButton,
        shopEntity = this->fields.shopEntity,
        v26 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25),
        System_Action___ctor(
          v26,
          (Il2CppObject *)this,
          Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__,
          0LL),
        !apSeedExchangeButton) )
  {
LABEL_18:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  ApSeedExchangeButton__SetupBtn(apSeedExchangeButton, shopEntity, v26, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__OnClickApSeedExchangeButton(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ShopEntity_o *shopEntity; // x20
  ShopBuyItemListViewItem_o *v9; // x21
  WebViewManager_o *Instance; // x0
  ShopEntity_o *v11; // x20
  ShopBuyItemListViewItem_o *listViewItem; // x21
  CommonUI_o *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_int__o *v16; // x23
  __int64 v17; // x0

  if ( (byte_4211959 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, method);
    sub_B0D8A4(&System_Action_int__TypeInfo, v4);
    sub_B0D8A4(&ShopBuyItemListViewItem_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__, v7);
    byte_4211959 = 1;
  }
  shopEntity = this->fields.shopEntity;
  if ( shopEntity )
  {
    v9 = (ShopBuyItemListViewItem_o *)sub_B0D974(ShopBuyItemListViewItem_TypeInfo, method, v2);
    ShopBuyItemListViewItem___ctor(v9, 0, 17, shopEntity, -1LL, 0LL);
    this->fields.listViewItem = v9;
    sub_B0D840(&this->fields.listViewItem, v9);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = this->fields.shopEntity;
    listViewItem = this->fields.listViewItem;
    v13 = (CommonUI_o *)Instance;
    v16 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v14, v15);
    System_Action_int____ctor(
      v16,
      (Il2CppObject *)this,
      Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__,
      (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
    if ( !v13 )
      sub_B0D97C(v17);
    CommonUI__OpenApSeedBulkExchangeDialog(v13, v11, listViewItem, v16, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalApSeedExchangeManager__OnCloseResultDialog(
        TerminalApSeedExchangeManager_o *this,
        bool isOk,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_421195E & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isOk);
    byte_421195E = 1;
  }
  TerminalApSeedExchangeManager__CloseDialogs(this, (const MethodInfo *)isOk);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__UpdateApRecoverItemListDialog(Instance, 0LL);
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
  PurchaseRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct ShopEntity_o *shopEntity; // x8

  v4 = this;
  if ( (byte_421195A & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_PurchaseRequest___, *(_QWORD *)&buyCount);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    this = (TerminalApSeedExchangeManager_o *)sub_B0D8A4(&Method_TerminalApSeedExchangeManager_EndRequestShop__, v7);
    byte_421195A = 1;
  }
  v4->fields.buyCount = buyCount;
  if ( buyCount )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(
                                                  NetworkManager_ResultCallbackFunc_TypeInfo,
                                                  *(_QWORD *)&buyCount,
                                                  method);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)v4,
      Method_TerminalApSeedExchangeManager_EndRequestShop__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (PurchaseRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v8,
                                                               (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    shopEntity = v4->fields.shopEntity;
    if ( !shopEntity || !Request_WarBoardWallAttackRequest )
      sub_B0D97C(Request_WarBoardWallAttackRequest);
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
  DataManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x20
  ItemEntity_o *Entity; // x22
  struct ShopEntity_o *shopEntity; // x8
  System_String_o *v13; // x20
  System_String_o *RequestResultDialogItemMessageNormal; // x21
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  CommonUI_o *v16; // x23
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_bool__o *v19; // x24

  if ( (byte_421195C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&Method_TerminalApSeedExchangeManager_OnCloseResultDialog__, v8);
    byte_421195C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.shopEntity )
    goto LABEL_11;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this->fields.shopEntity, 0LL);
  if ( !v10 )
    goto LABEL_11;
  Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v10,
                             (int32_t)Instance,
                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
                                             Entity,
                                             this->fields.buyCount,
                                             0LL);
    RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                            this->fields.shopEntity,
                                            Entity,
                                            0LL);
    v16 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v17, v18);
    System_Action_bool____ctor(
      v19,
      (Il2CppObject *)this,
      Method_TerminalApSeedExchangeManager_OnCloseResultDialog__,
      (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
    if ( v16 )
    {
      CommonUI__OpenItemExchangeResultDialog(
        v16,
        v13,
        RequestResultDialogNumMessageNormal,
        RequestResultDialogItemMessageNormal,
        v19,
        0LL);
      return;
    }
LABEL_11:
    sub_B0D97C(Instance);
  }
}


void __fastcall TerminalApSeedExchangeManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct TerminalApSeedExchangeManager___c_StaticFields *static_fields; // x0

  if ( (byte_4211786 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalApSeedExchangeManager___c_TypeInfo, v1);
    byte_4211786 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(TerminalApSeedExchangeManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TerminalApSeedExchangeManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_4211787 & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager___c_o *)sub_B0D8A4(&BalanceConfig_TypeInfo, ent);
    byte_4211787 = 1;
  }
  if ( !ent )
    sub_B0D97C(this);
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