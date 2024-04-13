void __fastcall TerminalApSeedExchangeManager___ctor(TerminalApSeedExchangeManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__CloseDialogs(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E5B53 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5B53 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseApSeedExchangeDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseApSeedBulkExchangeDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v5);
  }
  CommonUI__CloseItemExchangeResultDialog(Instance, 0LL, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__EndRequestShop(
        TerminalApSeedExchangeManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  int v14; // w2
  __int64 v15; // x3
  TerminalSceneComponent_c *v16; // x0
  UnityEngine_Object_o *mInstance; // x20
  const MethodInfo *v18; // x1
  int v19; // w2
  __int64 v20; // x3
  ScrPlayerStatus_o *v21; // x0
  struct TerminalSceneComponent_o *v22; // x8
  UnityEngine_Object_o *mPlayerStatus; // x20
  int v24; // w2
  __int64 v25; // x3
  struct TerminalSceneComponent_o *v26; // x8
  struct TerminalSceneComponent_o *v27; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  int v29; // w2
  __int64 v30; // x3
  struct TerminalSceneComponent_o *v31; // x8
  struct ScrTerminalListTop_o *v32; // x8
  UnityEngine_Object_o *mQuestBoardListViewManager; // x20

  if ( (byte_42E5B51 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v9, v10, v11);
    byte_42E5B51 = 1;
  }
  v12 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL);
  if ( v12 )
  {
    TerminalApSeedExchangeManager__CloseDialogs((TerminalApSeedExchangeManager_o *)v12, v13);
    return;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v13, v14, v15);
    byte_42E4B1E = 1;
  }
  v16 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v16 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v16->static_fields->mInstance;
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
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v18, v19, v20);
      byte_42E4B1E = 1;
    }
    v21 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v21 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
    }
    v22 = **(struct TerminalSceneComponent_o ***)&v21->fields.mIsEnableRpRecoverBtn;
    if ( v22 )
    {
      mPlayerStatus = (UnityEngine_Object_o *)v22->fields.mPlayerStatus;
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
        if ( !byte_42E4B1E )
        {
          sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v18, v24, v25);
          byte_42E4B1E = 1;
        }
        v21 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v21 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        }
        v26 = **(struct TerminalSceneComponent_o ***)&v21->fields.mIsEnableRpRecoverBtn;
        if ( !v26 )
          goto LABEL_71;
        v21 = v26->fields.mPlayerStatus;
        if ( !v21 )
          goto LABEL_71;
        ScrPlayerStatus__mfInitUserData(v21, 0LL);
      }
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v18, v24, v25);
        byte_42E4B1E = 1;
      }
      v21 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v21 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
      }
      v27 = **(struct TerminalSceneComponent_o ***)&v21->fields.mIsEnableRpRecoverBtn;
      if ( v27 )
      {
        mTerminalList = (UnityEngine_Object_o *)v27->fields.mTerminalList;
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
        if ( !byte_42E4B1E )
        {
          sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v18, v29, v30);
          byte_42E4B1E = 1;
        }
        v21 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v21 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        }
        v31 = **(struct TerminalSceneComponent_o ***)&v21->fields.mIsEnableRpRecoverBtn;
        if ( v31 )
        {
          v32 = v31->fields.mTerminalList;
          if ( v32 )
          {
            mQuestBoardListViewManager = (UnityEngine_Object_o *)v32->fields.mQuestBoardListViewManager;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v21 = (ScrPlayerStatus_o *)UnityEngine_Object__op_Inequality(mQuestBoardListViewManager, 0LL, 0LL);
            if ( ((unsigned __int8)v21 & 1) == 0 )
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
    sub_B5D69C(v21, v18);
  }
LABEL_70:
  TerminalApSeedExchangeManager__ShowExchangeResultDialog(this, v18);
}


void __fastcall TerminalApSeedExchangeManager__Initialize(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v33; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EnableEntitiyList_28622592; // x20
  TerminalApSeedExchangeManager___c_c *v35; // x8
  struct TerminalApSeedExchangeManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__4_0; // x21
  Il2CppObject *v38; // x22
  struct TerminalApSeedExchangeManager___c_StaticFields *v39; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  ApSeedExchangeButton_o *apSeedExchangeButton; // x20
  ShopEntity_o *shopEntity; // x21
  System_Action_o *v43; // x22

  if ( (byte_42E5B4E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ShopMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_ShopEntity___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_ShopEntity__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_ShopEntity__bool__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__, v23, v24, v25);
    sub_B5D5C4(&Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__, v26, v27, v28);
    sub_B5D5C4(&TerminalApSeedExchangeManager___c_TypeInfo, v29, v30, v31);
    byte_42E5B4E = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  EnableEntitiyList_28622592 = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEnableEntitiyList_28622592(
                                                                                      Master_WarQuestSelectionMaster,
                                                                                      0,
                                                                                      14,
                                                                                      0LL);
  v35 = TerminalApSeedExchangeManager___c_TypeInfo;
  if ( (BYTE3(TerminalApSeedExchangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalApSeedExchangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalApSeedExchangeManager___c_TypeInfo);
    v35 = TerminalApSeedExchangeManager___c_TypeInfo;
  }
  static_fields = v35->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      static_fields = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__4_0,
      v38,
      Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_ShopEntity__bool___ctor__);
    v39 = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
    v39->__9__4_0 = (struct System_Func_ShopEntity__bool__o *)_9__4_0;
    sub_B5D560(&v39->__9__4_0);
  }
  v40 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          EnableEntitiyList_28622592,
          (System_Func_TSource__bool__o *)_9__4_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  Master_WarQuestSelectionMaster = (ShopMaster_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                     v40,
                                                     (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___);
  if ( !this
    || (this->fields.shopEntity = (struct ShopEntity_o *)Master_WarQuestSelectionMaster,
        sub_B5D560(&this->fields.shopEntity),
        apSeedExchangeButton = this->fields.apSeedExchangeButton,
        shopEntity = this->fields.shopEntity,
        v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v43,
          (Il2CppObject *)this,
          Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__,
          0LL),
        !apSeedExchangeButton) )
  {
LABEL_18:
    sub_B5D69C(Master_WarQuestSelectionMaster, v33);
  }
  ApSeedExchangeButton__SetupBtn(apSeedExchangeButton, shopEntity, v43, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__OnClickApSeedExchangeButton(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  ShopEntity_o *shopEntity; // x20
  ShopBuyItemListViewItem_o *v18; // x21
  WebViewManager_o *Instance; // x0
  ShopEntity_o *v20; // x20
  ShopBuyItemListViewItem_o *listViewItem; // x21
  CommonUI_o *v22; // x22
  System_Action_int__o *v23; // x23
  __int64 v24; // x0
  __int64 v25; // x1

  if ( (byte_42E5B4F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&ShopBuyItemListViewItem_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__, v14, v15, v16);
    byte_42E5B4F = 1;
  }
  shopEntity = this->fields.shopEntity;
  if ( shopEntity )
  {
    v18 = (ShopBuyItemListViewItem_o *)sub_B5D694(ShopBuyItemListViewItem_TypeInfo);
    ShopBuyItemListViewItem___ctor(v18, 0, 17, shopEntity, -1LL, 0LL);
    this->fields.listViewItem = v18;
    sub_B5D560(&this->fields.listViewItem);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = this->fields.shopEntity;
    listViewItem = this->fields.listViewItem;
    v22 = (CommonUI_o *)Instance;
    v23 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v23,
      (Il2CppObject *)this,
      Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__,
      (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
    if ( !v22 )
      sub_B5D69C(v24, v25);
    CommonUI__OpenApSeedBulkExchangeDialog(v22, v20, listViewItem, v23, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalApSeedExchangeManager__OnCloseResultDialog(
        TerminalApSeedExchangeManager_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E5B54 & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager_o *)sub_B5D5C4(
                                                &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                isOk,
                                                (_DWORD)method,
                                                v3);
    byte_42E5B54 = 1;
  }
  TerminalApSeedExchangeManager__CloseDialogs(this, (const MethodInfo *)isOk);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__UpdateApRecoverItemListDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalApSeedExchangeManager__OnSelectExchangeItems(
        TerminalApSeedExchangeManager_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TerminalApSeedExchangeManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  NetworkManager_ResultCallbackFunc_o *v15; // x21
  PurchaseRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v17; // x1
  struct ShopEntity_o *shopEntity; // x8

  v5 = this;
  if ( (byte_42E5B50 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_PurchaseRequest___, buyCount, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10, v11);
    this = (TerminalApSeedExchangeManager_o *)sub_B5D5C4(
                                                &Method_TerminalApSeedExchangeManager_EndRequestShop__,
                                                v12,
                                                v13,
                                                v14);
    byte_42E5B50 = 1;
  }
  v5->fields.buyCount = buyCount;
  if ( buyCount )
  {
    v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v15,
      (Il2CppObject *)v5,
      Method_TerminalApSeedExchangeManager_EndRequestShop__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (PurchaseRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v15,
                                                               (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_PurchaseRequest___);
    shopEntity = v5->fields.shopEntity;
    if ( !shopEntity || !Request_WarBoardWallAttackRequest )
      sub_B5D69C(Request_WarBoardWallAttackRequest, v17);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x20
  ItemEntity_o *Entity; // x22
  struct ShopEntity_o *shopEntity; // x8
  System_String_o *v28; // x20
  System_String_o *RequestResultDialogItemMessageNormal; // x21
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  CommonUI_o *v31; // x23
  System_Action_bool__o *v32; // x24

  if ( (byte_42E5B52 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_TerminalApSeedExchangeManager_OnCloseResultDialog__, v20, v21, v22);
    byte_42E5B52 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.shopEntity )
    goto LABEL_11;
  v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this->fields.shopEntity, 0LL);
  if ( !v25 )
    goto LABEL_11;
  Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v25,
                             (int32_t)Instance,
                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
    v28 = (System_String_o *)Instance;
    RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                             this->fields.shopEntity,
                                             Entity,
                                             this->fields.buyCount,
                                             0LL);
    RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                            this->fields.shopEntity,
                                            Entity,
                                            0LL);
    v31 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v32 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v32,
      (Il2CppObject *)this,
      Method_TerminalApSeedExchangeManager_OnCloseResultDialog__,
      (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
    if ( v31 )
    {
      CommonUI__OpenItemExchangeResultDialog(
        v31,
        v28,
        RequestResultDialogNumMessageNormal,
        RequestResultDialogItemMessageNormal,
        v32,
        0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(Instance, v24);
  }
}


void __fastcall TerminalApSeedExchangeManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct TerminalApSeedExchangeManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E64A7 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalApSeedExchangeManager___c_TypeInfo, v1, v2, v3);
    byte_42E64A7 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(TerminalApSeedExchangeManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TerminalApSeedExchangeManager___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  int32_t TargetId; // w19
  BalanceConfig_c *v6; // x8

  if ( (byte_42E64A8 & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager___c_o *)sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)ent, (_DWORD)method, v3);
    byte_42E64A8 = 1;
  }
  if ( !ent )
    sub_B5D69C(this, ent);
  TargetId = ShopEntity__get_TargetId(ent, 0LL);
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  return TargetId == v6->static_fields->ApSeedExchangeTargetItemId;
}