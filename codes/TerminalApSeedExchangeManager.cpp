void __fastcall TerminalApSeedExchangeManager___ctor(TerminalApSeedExchangeManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__CloseDialogs(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FA49F & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FA49F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseApSeedExchangeDialog((CommonUI_o *)Instance, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseApSeedBulkExchangeDialog((CommonUI_o *)Instance, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B64324(Instance);
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
  __int64 v15; // x1
  struct TerminalSceneComponent_o *v16; // x8
  struct TerminalSceneComponent_o *v17; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  struct TerminalSceneComponent_o *v19; // x8
  struct ScrTerminalListTop_o *v20; // x8
  UnityEngine_Object_o *mQuestBoardListViewManager; // x20

  if ( (byte_49FA49D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, result);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v6);
    byte_49FA49D = 1;
  }
  v7 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL);
  if ( v7 )
  {
    TerminalApSeedExchangeManager__CloseDialogs((TerminalApSeedExchangeManager_o *)v7, v8);
    return;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v8);
    byte_49F76BD = 1;
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
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v11);
      byte_49F76BD = 1;
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
        if ( !byte_49F76BD )
        {
          sub_1B640C8(&TerminalSceneComponent_TypeInfo, v15);
          byte_49F76BD = 1;
        }
        v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        }
        v16 = **(struct TerminalSceneComponent_o ***)&v12->fields.mIsEnableRpRecoverBtn;
        if ( !v16 )
          goto LABEL_57;
        v12 = v16->fields.mPlayerStatus;
        if ( !v12 )
          goto LABEL_57;
        ScrPlayerStatus__mfInitUserData(v12, 0LL);
      }
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49F76BD )
      {
        sub_1B640C8(&TerminalSceneComponent_TypeInfo, v15);
        byte_49F76BD = 1;
      }
      v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
      }
      v17 = **(struct TerminalSceneComponent_o ***)&v12->fields.mIsEnableRpRecoverBtn;
      if ( v17 )
      {
        mTerminalList = (UnityEngine_Object_o *)v17->fields.mTerminalList;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(mTerminalList, 0LL, 0LL) )
          goto LABEL_56;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49F76BD )
        {
          sub_1B640C8(&TerminalSceneComponent_TypeInfo, v11);
          byte_49F76BD = 1;
        }
        v12 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
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
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v12 = (ScrPlayerStatus_o *)UnityEngine_Object__op_Inequality(mQuestBoardListViewManager, 0LL, 0LL);
            if ( ((unsigned __int8)v12 & 1) == 0 )
              goto LABEL_56;
            if ( mQuestBoardListViewManager )
            {
              QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)mQuestBoardListViewManager, 0LL);
              goto LABEL_56;
            }
          }
        }
      }
    }
LABEL_57:
    sub_1B64324(v12);
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
  ShopEntity_array *EnableEntitiyList_39498592; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  TerminalApSeedExchangeManager___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  System_Func_object__bool__o *_9__4_0; // x21
  Il2CppObject *v18; // x22
  struct TerminalApSeedExchangeManager___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  ApSeedExchangeButton_o *apSeedExchangeButton; // x20
  ShopEntity_o *shopEntity; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_o *v29; // x22

  if ( (byte_49FA49A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_ShopMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_ShopEntity___, v6);
    sub_1B640C8(&System_Func_ShopEntity__bool__TypeInfo, v7);
    sub_1B640C8(&Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__, v8);
    sub_1B640C8(&Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__, v9);
    sub_1B640C8(&TerminalApSeedExchangeManager___c_TypeInfo, v10);
    byte_49FA49A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_15;
  EnableEntitiyList_39498592 = ShopMaster__GetEnableEntitiyList_39498592((ShopMaster_o *)Master_object, 0, 14, 0LL);
  v15 = TerminalApSeedExchangeManager___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntitiyList_39498592;
  if ( !TerminalApSeedExchangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalApSeedExchangeManager___c_TypeInfo);
    v15 = TerminalApSeedExchangeManager___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__bool__o *)v15->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = TerminalApSeedExchangeManager___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__4_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ShopEntity__bool__TypeInfo, v13, v14);
    System_Func_object__bool____ctor(_9__4_0, v18, Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__, 0LL);
    static_fields = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_ShopEntity__bool__o *)_9__4_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v20, v21);
  }
  v22 = System_Linq_Enumerable__Where_object_(
          v16,
          (System_Func_TSource__bool__o *)_9__4_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  Master_object = System_Linq_Enumerable__FirstOrDefault_object_(
                    v22,
                    (const MethodInfo_2E5C894 *)Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___);
  if ( !this
    || (this->fields.shopEntity = (struct ShopEntity_o *)Master_object,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.shopEntity, (int32_t)Master_object, v23, v24),
        apSeedExchangeButton = this->fields.apSeedExchangeButton,
        shopEntity = this->fields.shopEntity,
        v29 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v27, v28),
        System_Action___ctor(
          v29,
          (Il2CppObject *)this,
          Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__,
          0LL),
        !apSeedExchangeButton) )
  {
LABEL_15:
    sub_1B64324(Master_object);
  }
  ApSeedExchangeButton__SetupBtn(apSeedExchangeButton, shopEntity, v29, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__OnClickApSeedExchangeButton(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ShopEntity_o *shopEntity; // x20
  ShopBuyItemListViewItem_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *Instance; // x0
  ShopEntity_o *v12; // x20
  ShopBuyItemListViewItem_o *listViewItem; // x21
  CommonUI_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_int__o *v17; // x23
  __int64 v18; // x0

  if ( (byte_49FA49B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, method);
    sub_1B640C8(&ShopBuyItemListViewItem_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__, v6);
    byte_49FA49B = 1;
  }
  shopEntity = this->fields.shopEntity;
  if ( shopEntity )
  {
    v8 = (ShopBuyItemListViewItem_o *)sub_1B64314(ShopBuyItemListViewItem_TypeInfo, method, v2);
    ShopBuyItemListViewItem___ctor(v8, 0, 17, shopEntity, -1LL, 0LL);
    this->fields.listViewItem = v8;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.listViewItem, (int32_t)v8, v9, v10);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = this->fields.shopEntity;
    listViewItem = this->fields.listViewItem;
    v14 = (CommonUI_o *)Instance;
    v17 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v15, v16);
    System_Action_int____ctor(
      v17,
      (Il2CppObject *)this,
      Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__,
      0LL);
    if ( !v14 )
      sub_1B64324(v18);
    CommonUI__OpenApSeedBulkExchangeDialog(v14, v12, listViewItem, v17, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalApSeedExchangeManager__OnCloseResultDialog(
        TerminalApSeedExchangeManager_o *this,
        bool isOk,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FA4A0 & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isOk);
    byte_49FA4A0 = 1;
  }
  TerminalApSeedExchangeManager__CloseDialogs(this, (const MethodInfo *)isOk);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  struct ShopEntity_o *shopEntity; // x8

  v4 = this;
  if ( (byte_49FA49C & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_PurchaseRequest___, *(_QWORD *)&buyCount);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    this = (TerminalApSeedExchangeManager_o *)sub_1B640C8(&Method_TerminalApSeedExchangeManager_EndRequestShop__, v7);
    byte_49FA49C = 1;
  }
  v4->fields.buyCount = buyCount;
  if ( buyCount )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(
                                                  NetworkManager_ResultCallbackFunc_TypeInfo,
                                                  *(_QWORD *)&buyCount,
                                                  method);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)v4,
      Method_TerminalApSeedExchangeManager_EndRequestShop__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    shopEntity = v4->fields.shopEntity;
    if ( !shopEntity || !Request_object )
      sub_1B64324(Request_object);
    PurchaseRequest__beginRequest((PurchaseRequest_o *)Request_object, shopEntity->fields.id, buyCount, 0, 0LL);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  Il2CppObject *Entity; // x22
  struct ShopEntity_o *shopEntity; // x8
  System_String_o *v12; // x20
  System_String_o *RequestResultDialogItemMessageNormal; // x21
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  Il2CppObject *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_bool__o *v18; // x24

  if ( (byte_49FA49E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&Method_TerminalApSeedExchangeManager_OnCloseResultDialog__, v7);
    byte_49FA49E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.shopEntity )
    goto LABEL_11;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this->fields.shopEntity, 0LL);
  if ( !v9 )
    goto LABEL_11;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v9,
             (int32_t)Instance,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
    v12 = (System_String_o *)Instance;
    RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                             this->fields.shopEntity,
                                             (ItemEntity_o *)Entity,
                                             this->fields.buyCount,
                                             0LL);
    RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                            this->fields.shopEntity,
                                            (ItemEntity_o *)Entity,
                                            0LL);
    v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v16, v17);
    System_Action_bool____ctor(
      v18,
      (Il2CppObject *)this,
      Method_TerminalApSeedExchangeManager_OnCloseResultDialog__,
      0LL);
    if ( v15 )
    {
      CommonUI__OpenItemExchangeResultDialog(
        (CommonUI_o *)v15,
        v12,
        RequestResultDialogNumMessageNormal,
        RequestResultDialogItemMessageNormal,
        v18,
        0LL);
      return;
    }
LABEL_11:
    sub_1B64324(Instance);
  }
}


void __fastcall TerminalApSeedExchangeManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA4A1 & 1) == 0 )
  {
    sub_1B640C8(&TerminalApSeedExchangeManager___c_TypeInfo, v1);
    byte_49FA4A1 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(TerminalApSeedExchangeManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  TerminalApSeedExchangeManager___c_TypeInfo->static_fields->__9 = (struct TerminalApSeedExchangeManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)TerminalApSeedExchangeManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49FA4A2 & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager___c_o *)sub_1B640C8(&BalanceConfig_TypeInfo, ent);
    byte_49FA4A2 = 1;
  }
  if ( !ent )
    sub_1B64324(this);
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