void __fastcall CoinRoomSelectCoinComponent___ctor(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40F9A6B & 1) == 0 )
  {
    sub_B16FFC(&BaseMenu_TypeInfo, method);
    byte_40F9A6B = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall CoinRoomSelectCoinComponent__Close(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CoinRoomSelectCoinComponent__EndOpen(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CoinRoomCoinListViewManager_o *coinListViewManager; // x0

  coinListViewManager = this->fields.coinListViewManager;
  this->fields.state = 2;
  if ( !coinListViewManager )
    sub_B170D4();
  CoinRoomCoinListViewManager__SetMode_24378792(coinListViewManager, 2, v2);
}


void __fastcall CoinRoomSelectCoinComponent__EndRequest(
        CoinRoomSelectCoinComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Int32_array **selectedCoinDic; // x1
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  CommonUI_o *Instance; // x20
  CoinRoomUtility_c *v32; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v34; // x21

  if ( (byte_40F9A6A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, result);
    sub_B16FFC(&CoinRoomUtility_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_CoinRoomSelectCoinComponent___c__DisplayClass14_0__EndRequest_b__0__, v9);
    sub_B16FFC(&CoinRoomSelectCoinComponent___c__DisplayClass14_0_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v11);
    byte_40F9A6A = 1;
  }
  v12 = sub_B170CC(CoinRoomSelectCoinComponent___c__DisplayClass14_0_TypeInfo, result, method, v3, v4);
  CoinRoomSelectCoinComponent___c__DisplayClass14_0___ctor(
    (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_11;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL) )
    return;
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_11;
  selectedCoinDic = (System_Int32_array **)coinListViewManager->fields.selectedCoinDic;
  *(_QWORD *)(v12 + 24) = selectedCoinDic;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), selectedCoinDic, v19, v20, v21, v22, v23, v24);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v32 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v32 = CoinRoomUtility_TypeInfo;
  }
  EFFECT_FADE_TIME = v32->static_fields->EFFECT_FADE_TIME;
  v34 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v27, v28, v29, v30);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v12,
    Method_CoinRoomSelectCoinComponent___c__DisplayClass14_0__EndRequest_b__0__,
    0LL);
  if ( !Instance )
LABEL_11:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, EFFECT_FADE_TIME, v34, 0LL);
}


void __fastcall CoinRoomSelectCoinComponent__Init(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UserCoinRoomEntity_o **p_beforeUserCoinRoomEntity; // x20
  const MethodInfo *v10; // x1
  CoinRoomCoinListViewManager_o *v11; // x0
  UnityEngine_Component_o *coinListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.beforeUserCoinRoomEntity = 0LL;
  p_beforeUserCoinRoomEntity = &this->fields.beforeUserCoinRoomEntity;
  this->fields.state = 0;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.beforeUserCoinRoomEntity, 0LL, v2, v3, v4, v5, v6, v7);
  v11 = (CoinRoomCoinListViewManager_o *)*(p_beforeUserCoinRoomEntity - 6);
  if ( !v11
    || (CoinRoomCoinListViewManager__DestroyList(v11, v10),
        (coinListViewManager = (UnityEngine_Component_o *)this->fields.coinListViewManager) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(coinListViewManager, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall CoinRoomSelectCoinComponent__OnClickDecide(
        CoinRoomSelectCoinComponent_o *this,
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *selectedCoinDic; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v22; // x20
  const MethodInfo *v23; // x2
  int32_t key; // w21
  Il2CppObject *value; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  CoinConfirmSliderDialog_o *confirmSliderDialog; // x21
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x3
  struct CoinRoomCoinListViewManager_o *v33; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v34; // x21
  CoinConfirmDialog_o *confirmDialog; // x20
  System_Action_o *v36; // x22
  const MethodInfo *v37; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v38; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v39; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_40F9A68 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, v3);
    sub_B16FFC(&Method_CoinRoomSelectCoinComponent__OnClickDecide_b__12_0__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Key__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__, v14);
    sub_B16FFC(&SoundManager_TypeInfo, v15);
    byte_40F9A68 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    coinListViewManager = this->fields.coinListViewManager;
    if ( !coinListViewManager )
      goto LABEL_22;
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)coinListViewManager->fields.selectedCoinDic;
    v22 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo,
                                                                                                     v16,
                                                                                                     v17,
                                                                                                     v18,
                                                                                                     v19);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v22,
      (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    if ( !selectedCoinDic )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      &v38,
      selectedCoinDic,
      (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
    v39 = v38;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v39,
              (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
    {
      key = (int32_t)v39.fields.current.fields.key;
      value = v39.fields.current.fields.value;
      if ( CoinRoomCoinIconItem__IsCanStrength_24366008((int32_t)v39.fields.current.fields.key, 1, v23) )
      {
        if ( !v22 )
          sub_B170D4();
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          v22,
          key,
          (WarBoardEvalValueSquare_EvalValueSquare_o *)value,
          (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v39,
      (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__QuestAfterAction_VoiceInfo__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v22,
           (const MethodInfo_18C7408 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____) )
    {
      confirmSliderDialog = this->fields.confirmSliderDialog;
      v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v26, v27, v28, v29);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent__OnClickDecide_b__12_0__, 0LL);
      if ( confirmSliderDialog )
      {
        CoinConfirmSliderDialog__Open(
          confirmSliderDialog,
          (System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v22,
          v31,
          v32);
        return;
      }
LABEL_22:
      sub_B170D4();
    }
    v33 = this->fields.coinListViewManager;
    if ( !v33 )
      goto LABEL_22;
    v34 = v33->fields.selectedCoinDic;
    confirmDialog = this->fields.confirmDialog;
    v36 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v26, v27, v28, v29);
    System_Action___ctor(v36, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, 0LL);
    if ( !confirmDialog )
      goto LABEL_22;
    CoinConfirmDialog__Open(confirmDialog, v34, v36, v37);
  }
}


void __fastcall CoinRoomSelectCoinComponent__OpenSelectCoinList(
        CoinRoomSelectCoinComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *coinListPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *v9; // x0
  const MethodInfo *v10; // x1
  CoinRoomCoinListViewManager_o *coinListViewManager; // x0
  const MethodInfo *v12; // x2
  CoinRoomCoinListViewManager_o *v13; // x0
  UILabel_o *subTitle; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_o *v20; // x20

  if ( (byte_40F9A67 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CoinRoomSelectCoinComponent_EndOpen__, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_3135/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, v5);
    byte_40F9A67 = 1;
  }
  coinListPanel = this->fields.coinListPanel;
  if ( !coinListPanel )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(coinListPanel, 1, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( this->fields.state )
    return;
  CoinRoomSelectCoinComponent__Init(this, v8);
  this->fields.state = 1;
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v9 )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(v9, 1, 0LL);
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_14;
  CoinRoomCoinListViewManager__CreateInitList(coinListViewManager, v10);
  v13 = this->fields.coinListViewManager;
  if ( !v13 )
    goto LABEL_14;
  CoinRoomCoinListViewManager__SetMode_24378792(v13, 1, v12);
  subTitle = this->fields.subTitle;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3135/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, 0LL);
  if ( !subTitle )
LABEL_14:
    sub_B170D4();
  UILabel__set_text(subTitle, v15, 0LL);
  v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v20, 0LL);
}


void __fastcall CoinRoomSelectCoinComponent__RequestCoinRoomPut(
        CoinRoomSelectCoinComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CoinRoomUtility_c *v7; // x0
  struct UserCoinRoomEntity_o *UserCoinRoomEntity; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2
  CoinConfirmDialog_o *confirmDialog; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x20
  NetworkManager_ResultCallbackFunc_o *v23; // x21
  CoinRoomRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v25; // x2

  if ( (byte_40F9A69 & 1) == 0 )
  {
    sub_B16FFC(&Method_CoinRoomSelectCoinComponent_EndRequest__, method);
    sub_B16FFC(&CoinRoomUtility_TypeInfo, v3);
    sub_B16FFC(&Method_NetworkManager_getRequest_CoinRoomRequest___, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_40F9A69 = 1;
  }
  v7 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v7);
  this->fields.beforeUserCoinRoomEntity = UserCoinRoomEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.beforeUserCoinRoomEntity,
    (System_Int32_array **)UserCoinRoomEntity,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  confirmDialog = this->fields.confirmDialog;
  if ( !confirmDialog )
    goto LABEL_13;
  CoinConfirmDialog__Close_24360052(confirmDialog, 0LL, v15);
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_13;
  selectedCoinDic = coinListViewManager->fields.selectedCoinDic;
  v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v17,
                                                 v18,
                                                 v19,
                                                 v20);
  NetworkManager_ResultCallbackFunc___ctor(
    v23,
    (Il2CppObject *)this,
    Method_CoinRoomSelectCoinComponent_EndRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (CoinRoomRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                             v23,
                                                             (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CoinRoomRequest___);
  if ( !Request_WarBoardWallAttackRequest )
LABEL_13:
    sub_B170D4();
  CoinRoomRequest__BeginRequest(Request_WarBoardWallAttackRequest, selectedCoinDic, v25);
}


void __fastcall CoinRoomSelectCoinComponent__RequestNG(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CoinRoomSelectCoinComponent___OnClickDecide_b__12_0(
        CoinRoomSelectCoinComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x21
  CoinConfirmDialog_o *confirmDialog; // x20
  System_Action_o *v10; // x22
  const MethodInfo *v11; // x3

  if ( (byte_40F9A6C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, v6);
    byte_40F9A6C = 1;
  }
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager
    || (selectedCoinDic = coinListViewManager->fields.selectedCoinDic,
        confirmDialog = this->fields.confirmDialog,
        v10 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, 0LL),
        !confirmDialog) )
  {
    sub_B170D4();
  }
  CoinConfirmDialog__Open(confirmDialog, selectedCoinDic, v10, v11);
}


void __fastcall CoinRoomSelectCoinComponent___c__DisplayClass14_0___ctor(
        CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CoinRoomSelectCoinComponent___c__DisplayClass14_0___EndRequest_b__0(
        CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct CoinRoomSelectCoinComponent_o *_4__this; // x8
  CoinRoomEffectComponent_o *coinRoomEffectComponent; // x0
  CommonUI_o *Instance; // x19

  if ( (byte_40F710B & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomUtility_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_40F710B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  coinRoomEffectComponent = _4__this->fields.coinRoomEffectComponent;
  if ( !coinRoomEffectComponent )
    goto LABEL_10;
  CoinRoomEffectComponent__OpenEffect(
    coinRoomEffectComponent,
    _4__this->fields.beforeUserCoinRoomEntity,
    this->fields.selectedValue,
    0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  if ( !Instance )
LABEL_10:
    sub_B170D4();
  CommonUI__maskFadein(Instance, CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME, 0LL, 0LL);
}