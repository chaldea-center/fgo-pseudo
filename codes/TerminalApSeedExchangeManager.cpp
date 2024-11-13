void __fastcall TerminalApSeedExchangeManager___ctor(TerminalApSeedExchangeManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__CloseDialogs(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B144B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B144B0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseApSeedExchangeDialog((CommonUI_o *)Instance, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseApSeedBulkExchangeDialog((CommonUI_o *)Instance, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v4);
  }
  CommonUI__CloseItemExchangeResultDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__EndRequestShop(
        TerminalApSeedExchangeManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  TerminalSceneComponent_c *v12; // x0
  UnityEngine_Object_o *mInstance; // x20
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  ScrPlayerStatus_o *v16; // x0
  struct TerminalSceneComponent_o *v17; // x8
  UnityEngine_Object_o *mPlayerStatus; // x20
  __int64 v19; // x2
  struct TerminalSceneComponent_o *v20; // x8
  struct TerminalSceneComponent_o *v21; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  __int64 v23; // x2
  struct TerminalSceneComponent_o *v24; // x8
  struct ScrTerminalListTop_o *v25; // x8
  UnityEngine_Object_o *mQuestBoardListViewManager; // x20

  if ( (byte_4B144AE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, result, method);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B144AE = 1;
  }
  v9 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL);
  if ( v9 )
  {
    TerminalApSeedExchangeManager__CloseDialogs((TerminalApSeedExchangeManager_o *)v9, v10);
    return;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v10, v11);
    byte_4B10F83 = 1;
  }
  v12 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10);
    v12 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v12->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v14, v15);
      byte_4B10F83 = 1;
    }
    v16 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
      v16 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
    }
    v17 = **(struct TerminalSceneComponent_o ***)&v16->fields.mIsEnableRpRecoverBtn;
    if ( v17 )
    {
      mPlayerStatus = (UnityEngine_Object_o *)v17->fields.mPlayerStatus;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      if ( UnityEngine_Object__op_Inequality(mPlayerStatus, 0LL, 0LL) )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
        if ( !byte_4B10F83 )
        {
          sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v14, v19);
          byte_4B10F83 = 1;
        }
        v16 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
          v16 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        }
        v20 = **(struct TerminalSceneComponent_o ***)&v16->fields.mIsEnableRpRecoverBtn;
        if ( !v20 )
          goto LABEL_57;
        v16 = v20->fields.mPlayerStatus;
        if ( !v16 )
          goto LABEL_57;
        ScrPlayerStatus__mfInitUserData(v16, 0LL);
      }
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v14, v19);
        byte_4B10F83 = 1;
      }
      v16 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
        v16 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
      }
      v21 = **(struct TerminalSceneComponent_o ***)&v16->fields.mIsEnableRpRecoverBtn;
      if ( v21 )
      {
        mTerminalList = (UnityEngine_Object_o *)v21->fields.mTerminalList;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
        if ( !UnityEngine_Object__op_Inequality(mTerminalList, 0LL, 0LL) )
          goto LABEL_56;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
        if ( !byte_4B10F83 )
        {
          sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v14, v23);
          byte_4B10F83 = 1;
        }
        v16 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
          v16 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
        }
        v24 = **(struct TerminalSceneComponent_o ***)&v16->fields.mIsEnableRpRecoverBtn;
        if ( v24 )
        {
          v25 = v24->fields.mTerminalList;
          if ( v25 )
          {
            mQuestBoardListViewManager = (UnityEngine_Object_o *)v25->fields.mQuestBoardListViewManager;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
            v16 = (ScrPlayerStatus_o *)UnityEngine_Object__op_Inequality(mQuestBoardListViewManager, 0LL, 0LL);
            if ( ((unsigned __int8)v16 & 1) == 0 )
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
    sub_1BCAA3C(v16, v14);
  }
LABEL_56:
  TerminalApSeedExchangeManager__ShowExchangeResultDialog(this, v14);
}


void __fastcall TerminalApSeedExchangeManager__Initialize(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Master_object; // x0
  __int64 v21; // x1
  ShopEntity_array *EnableEntitiyList_40642588; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  TerminalApSeedExchangeManager___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  System_Func_object__bool__o *_9__4_0; // x21
  Il2CppObject *v29; // x22
  struct TerminalApSeedExchangeManager___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  ApSeedExchangeButton_o *apSeedExchangeButton; // x20
  ShopEntity_o *shopEntity; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Action_o *v49; // x22

  if ( (byte_4B144AB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_ShopEntity___, v10, v11);
    sub_1BCA7E0(&System_Func_ShopEntity__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__, v14, v15);
    sub_1BCA7E0(&Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__, v16, v17);
    sub_1BCA7E0(&TerminalApSeedExchangeManager___c_TypeInfo, v18, v19);
    byte_4B144AB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_15;
  EnableEntitiyList_40642588 = ShopMaster__GetEnableEntitiyList_40642588((ShopMaster_o *)Master_object, 0, 14, 0LL);
  v26 = TerminalApSeedExchangeManager___c_TypeInfo;
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntitiyList_40642588;
  if ( !TerminalApSeedExchangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalApSeedExchangeManager___c_TypeInfo, v23);
    v26 = TerminalApSeedExchangeManager___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__bool__o *)v26->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26, v23);
      v26 = TerminalApSeedExchangeManager___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__4_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ShopEntity__bool__TypeInfo, v23, v24, v25);
    System_Func_object__bool____ctor(_9__4_0, v29, Method_TerminalApSeedExchangeManager___c__Initialize_b__4_0__, 0LL);
    static_fields = TerminalApSeedExchangeManager___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_ShopEntity__bool__o *)_9__4_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v31, v32, v33, v34, v35, v36);
  }
  v37 = System_Linq_Enumerable__Where_object_(
          v27,
          (System_Func_TSource__bool__o *)_9__4_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  Master_object = System_Linq_Enumerable__FirstOrDefault_object_(
                    v37,
                    (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity___);
  if ( !this
    || (this->fields.shopEntity = (struct ShopEntity_o *)Master_object,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.shopEntity,
          (int64_t)Master_object,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43),
        apSeedExchangeButton = this->fields.apSeedExchangeButton,
        shopEntity = this->fields.shopEntity,
        v49 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v46, v47, v48),
        System_Action___ctor(
          v49,
          (Il2CppObject *)this,
          Method_TerminalApSeedExchangeManager_OnClickApSeedExchangeButton__,
          0LL),
        !apSeedExchangeButton) )
  {
LABEL_15:
    sub_1BCAA3C(Master_object, v21);
  }
  ApSeedExchangeButton__SetupBtn(apSeedExchangeButton, shopEntity, v49, 0LL);
}


void __fastcall TerminalApSeedExchangeManager__OnClickApSeedExchangeButton(
        TerminalApSeedExchangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ShopEntity_o *shopEntity; // x20
  ShopBuyItemListViewItem_o *v12; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *Instance; // x0
  ShopEntity_o *v20; // x20
  ShopBuyItemListViewItem_o *listViewItem; // x21
  CommonUI_o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_int__o *v26; // x23
  __int64 v27; // x0
  __int64 v28; // x1

  if ( (byte_4B144AC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&ShopBuyItemListViewItem_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__, v9, v10);
    byte_4B144AC = 1;
  }
  shopEntity = this->fields.shopEntity;
  if ( shopEntity )
  {
    v12 = (ShopBuyItemListViewItem_o *)sub_1BCAA2C(ShopBuyItemListViewItem_TypeInfo, method, v2, v3);
    ShopBuyItemListViewItem___ctor(v12, 0, 18, shopEntity, -1LL, 0LL);
    this->fields.listViewItem = v12;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.listViewItem, (int64_t)v12, v13, v14, v15, v16, v17, v18);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = this->fields.shopEntity;
    listViewItem = this->fields.listViewItem;
    v22 = (CommonUI_o *)Instance;
    v26 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v23, v24, v25);
    System_Action_int____ctor(
      v26,
      (Il2CppObject *)this,
      Method_TerminalApSeedExchangeManager_OnSelectExchangeItems__,
      0LL);
    if ( !v22 )
      sub_1BCAA3C(v27, v28);
    CommonUI__OpenApSeedBulkExchangeDialog(v22, v20, listViewItem, v26, 0LL);
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

  if ( (byte_4B144B1 & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager_o *)sub_1BCA7E0(
                                                &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                isOk,
                                                method);
    byte_4B144B1 = 1;
  }
  TerminalApSeedExchangeManager__CloseDialogs(this, (const MethodInfo *)isOk);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__UpdateApRecoverItemListDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalApSeedExchangeManager__OnSelectExchangeItems(
        TerminalApSeedExchangeManager_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TerminalApSeedExchangeManager_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  NetworkManager_ResultCallbackFunc_o *v12; // x21
  __int64 v13; // x1
  Il2CppObject *Request_object; // x0
  __int64 v15; // x1
  struct ShopEntity_o *shopEntity; // x8

  v5 = this;
  if ( (byte_4B144AD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_PurchaseRequest___, *(_QWORD *)&buyCount, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    this = (TerminalApSeedExchangeManager_o *)sub_1BCA7E0(
                                                &Method_TerminalApSeedExchangeManager_EndRequestShop__,
                                                v10,
                                                v11);
    byte_4B144AD = 1;
  }
  v5->fields.buyCount = buyCount;
  if ( buyCount )
  {
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   *(_QWORD *)&buyCount,
                                                   method,
                                                   v3);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)v5,
      Method_TerminalApSeedExchangeManager_EndRequestShop__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_PurchaseRequest___);
    shopEntity = v5->fields.shopEntity;
    if ( !shopEntity || !Request_object )
      sub_1BCAA3C(Request_object, v15);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  Il2CppObject *Entity; // x22
  struct ShopEntity_o *shopEntity; // x8
  System_String_o *v19; // x20
  System_String_o *RequestResultDialogItemMessageNormal; // x21
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  Il2CppObject *v22; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_bool__o *v26; // x24

  if ( (byte_4B144AF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_TerminalApSeedExchangeManager_OnCloseResultDialog__, v12, v13);
    byte_4B144AF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.shopEntity )
    goto LABEL_11;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this->fields.shopEntity, 0LL);
  if ( !v16 )
    goto LABEL_11;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v16,
             (int32_t)Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
    v19 = (System_String_o *)Instance;
    RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                             this->fields.shopEntity,
                                             (ItemEntity_o *)Entity,
                                             this->fields.buyCount,
                                             0LL);
    RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                            this->fields.shopEntity,
                                            (ItemEntity_o *)Entity,
                                            0LL);
    v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v26 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v23, v24, v25);
    System_Action_bool____ctor(
      v26,
      (Il2CppObject *)this,
      Method_TerminalApSeedExchangeManager_OnCloseResultDialog__,
      0LL);
    if ( v22 )
    {
      CommonUI__OpenItemExchangeResultDialog(
        (CommonUI_o *)v22,
        v19,
        RequestResultDialogNumMessageNormal,
        RequestResultDialogItemMessageNormal,
        v26,
        0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(Instance, v15);
  }
}


void __fastcall TerminalApSeedExchangeManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B144B2 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalApSeedExchangeManager___c_TypeInfo, v1, v2);
    byte_4B144B2 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(TerminalApSeedExchangeManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  TerminalApSeedExchangeManager___c_TypeInfo->static_fields->__9 = (struct TerminalApSeedExchangeManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TerminalApSeedExchangeManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v5; // x1
  BalanceConfig_c *v6; // x8
  int32_t v7; // w19

  if ( (byte_4B144B3 & 1) == 0 )
  {
    this = (TerminalApSeedExchangeManager___c_o *)sub_1BCA7E0(&BalanceConfig_TypeInfo, ent, method);
    byte_4B144B3 = 1;
  }
  if ( !ent )
    sub_1BCAA3C(this, ent);
  TargetId = ShopEntity__get_TargetId(ent, 0LL);
  v6 = BalanceConfig_TypeInfo;
  v7 = TargetId;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
    v6 = BalanceConfig_TypeInfo;
  }
  return v7 == v6->static_fields->ApSeedExchangeTargetItemId;
}