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

  if ( (byte_418455A & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_418455A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseApSeedExchangeDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseApSeedBulkExchangeDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v3);
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
  struct TerminalSceneComponent_o *v15; // x8
  struct TerminalSceneComponent_o *v16; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  struct TerminalSceneComponent_o *v18; // x8
  struct ScrTerminalListTop_o *v19; // x8
  UnityEngine_Object_o *mQuestBoardListViewManager; // x20

  if ( (byte_4184558 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, result);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_4184558 = 1;
  }
  v7 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL);
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
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v8);
    byte_4183C65 = 1;
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
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, v11);
      byte_4183C65 = 1;
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
        if ( !byte_4183C65 )
        {
          sub_B2C35C(&TerminalSceneComponent_TypeInfo, v11);
          byte_4183C65 = 1;
        }
        v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        }
        v15 = **(struct TerminalSceneComponent_o ***)&v12->fields.mIsEnableRpRecoverBtn;
        if ( !v15 )
          goto LABEL_71;
        v12 = v15->fields.mPlayerStatus;
        if ( !v12 )
          goto LABEL_71;
        ScrPlayerStatus__mfInitUserData(v12, 0LL);
      }
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_4183C65 )
      {
        sub_B2C35C(&TerminalSceneComponent_TypeInfo, v11);
        byte_4183C65 = 1;
      }
      v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
      }
      v16 = **(struct TerminalSceneComponent_o ***)&v12->fields.mIsEnableRpRecoverBtn;
      if ( v16 )
      {
        mTerminalList = (UnityEngine_Object_o *)v16->fields.mTerminalList;
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
        if ( !byte_4183C65 )
        {
          sub_B2C35C(&TerminalSceneComponent_TypeInfo, v11);
          byte_4183C65 = 1;
        }
        v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
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
    sub_B2C434(v12, v11);
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
  System_Collections_Generic_IEnumerable_TSource__o *EnableEntitiyList_27660960; // x20
  TerminalApSeedExchangeManager___c_c *v15; // x8
  struct TerminalApSeedExchangeManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__4_0; // x21
  Il2CppObject *v18; // x22
  struct TerminalApSeedExchangeManager___c_StaticFields *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  ApSeedExchangeButton_o *apSeedExchangeButton; // x20
  ShopEntity_o *shopEntity; // x21
  System_Action_o *v23; // x22

  if ( (byte_4184555 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_ShopMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_ShopEntity___, v6);
    sub_B2C35C(&Method_System_Func_ShopEntity__bool___ctor__, v7);
    sub_B2C35C(&System_Func_ShopEntity__bool__TypeInfo, v8);
    sub_B2C35C(&Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__, v9);
    sub_B2C35C(&Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__, v10);
    sub_B2C35C(&TerminalApSeedExchangeManager___c_TypeInfo, v11);
    byte_4184555 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  EnableEntitiyList_27660960 = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEnableEntitiyList_27660960(
                                                                                      Master_WarQuestSelectionMaster,
                                                                                      0,
                                                                                      14,
                                                                                      0LL);
  v15 = TerminalApSeedExchangeManager___c_TypeInfo;
  if ( (BYTE3(TerminalApSeedExchangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalApSeedExchangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalApSeedExchangeManager___c_TypeInfo);
    v15 = TerminalApSeedExchangeManager___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__4_0,
      v18,
      Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_ShopEntity__bool___ctor__);
    v19 = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
    v19->__9__4_0 = (struct System_Func_ShopEntity__bool__o *)_9__4_0;
    sub_B2C2F8(&v19->__9__4_0, _9__4_0);
  }
  v20 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          EnableEntitiyList_27660960,
          (System_Func_TSource__bool__o *)_9__4_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  Master_WarQuestSelectionMaster = (ShopMaster_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                     v20,
                                                     (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___);
  if ( !this
    || (this->fields.shopEntity = (struct ShopEntity_o *)Master_WarQuestSelectionMaster,
        sub_B2C2F8(&this->fields.shopEntity, Master_WarQuestSelectionMaster),
        apSeedExchangeButton = this->fields.apSeedExchangeButton,
        shopEntity = this->fields.shopEntity,
        v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v23,
          (Il2CppObject *)this,
          Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__,
          0LL),
        !apSeedExchangeButton) )
  {
LABEL_18:
    sub_B2C434(Master_WarQuestSelectionMaster, v13);
  }
  ApSeedExchangeButton__SetupBtn(apSeedExchangeButton, shopEntity, v23, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__OnClickApSeedExchangeButton(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ShopEntity_o *shopEntity; // x20
  ShopBuyItemListViewItem_o *v8; // x21
  WebViewManager_o *Instance; // x0
  ShopEntity_o *v10; // x20
  ShopBuyItemListViewItem_o *listViewItem; // x21
  CommonUI_o *v12; // x22
  System_Action_int__o *v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4184556 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, method);
    sub_B2C35C(&System_Action_int__TypeInfo, v3);
    sub_B2C35C(&ShopBuyItemListViewItem_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__, v6);
    byte_4184556 = 1;
  }
  shopEntity = this->fields.shopEntity;
  if ( shopEntity )
  {
    v8 = (ShopBuyItemListViewItem_o *)sub_B2C42C(ShopBuyItemListViewItem_TypeInfo);
    ShopBuyItemListViewItem___ctor(v8, 0, 17, shopEntity, -1LL, 0LL);
    this->fields.listViewItem = v8;
    sub_B2C2F8(&this->fields.listViewItem, v8);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = this->fields.shopEntity;
    listViewItem = this->fields.listViewItem;
    v12 = (CommonUI_o *)Instance;
    v13 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v13,
      (Il2CppObject *)this,
      Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__,
      (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
    if ( !v12 )
      sub_B2C434(v14, v15);
    CommonUI__OpenApSeedBulkExchangeDialog(v12, v10, listViewItem, v13, 0LL);
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

  if ( (byte_418455B & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isOk);
    byte_418455B = 1;
  }
  TerminalApSeedExchangeManager__CloseDialogs(this, (const MethodInfo *)isOk);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
  __int64 v10; // x1
  struct ShopEntity_o *shopEntity; // x8

  v4 = this;
  if ( (byte_4184557 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_PurchaseRequest___, *(_QWORD *)&buyCount);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    this = (TerminalApSeedExchangeManager_o *)sub_B2C35C(&Method_TerminalApSeedExchangeManager_EndRequestShop__, v7);
    byte_4184557 = 1;
  }
  v4->fields.buyCount = buyCount;
  if ( buyCount )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
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
                                                               (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    shopEntity = v4->fields.shopEntity;
    if ( !shopEntity || !Request_WarBoardWallAttackRequest )
      sub_B2C434(Request_WarBoardWallAttackRequest, v10);
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
  __int64 v10; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  ItemEntity_o *Entity; // x22
  struct ShopEntity_o *shopEntity; // x8
  System_String_o *v14; // x20
  System_String_o *RequestResultDialogItemMessageNormal; // x21
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  CommonUI_o *v17; // x23
  System_Action_bool__o *v18; // x24

  if ( (byte_4184559 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, method);
    sub_B2C35C(&System_Action_bool__TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&Method_TerminalApSeedExchangeManager_OnCloseResultDialog__, v8);
    byte_4184559 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.shopEntity )
    goto LABEL_11;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this->fields.shopEntity, 0LL);
  if ( !v11 )
    goto LABEL_11;
  Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v11,
                             (int32_t)Instance,
                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
    v14 = (System_String_o *)Instance;
    RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                             this->fields.shopEntity,
                                             Entity,
                                             this->fields.buyCount,
                                             0LL);
    RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                            this->fields.shopEntity,
                                            Entity,
                                            0LL);
    v17 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v18,
      (Il2CppObject *)this,
      Method_TerminalApSeedExchangeManager_OnCloseResultDialog__,
      (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
    if ( v17 )
    {
      CommonUI__OpenItemExchangeResultDialog(
        v17,
        v14,
        RequestResultDialogNumMessageNormal,
        RequestResultDialogItemMessageNormal,
        v18,
        0LL);
      return;
    }
LABEL_11:
    sub_B2C434(Instance, v10);
  }
}


void __fastcall TerminalApSeedExchangeManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct TerminalApSeedExchangeManager___c_StaticFields *static_fields; // x0

  if ( (byte_41847F1 & 1) == 0 )
  {
    sub_B2C35C(&TerminalApSeedExchangeManager___c_TypeInfo, v1);
    byte_41847F1 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(TerminalApSeedExchangeManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TerminalApSeedExchangeManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_41847F2 & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager___c_o *)sub_B2C35C(&BalanceConfig_TypeInfo, ent);
    byte_41847F2 = 1;
  }
  if ( !ent )
    sub_B2C434(this, ent);
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