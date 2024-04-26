void __fastcall CoinRoomSelectCoinComponent___ctor(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  if ( (byte_435206A & 1) == 0 )
  {
    sub_B70694(&BaseMenu_TypeInfo);
    byte_435206A = 1;
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
    sub_B7076C(0LL, method);
  CoinRoomCoinListViewManager__SetMode_25597336(coinListViewManager, 2, v2);
}


void __fastcall CoinRoomSelectCoinComponent__EndRequest(
        CoinRoomSelectCoinComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Int32_array **selectedCoinDic; // x1
  CommonUI_o *Instance; // x20
  CoinRoomUtility_c *v23; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v25; // x21

  if ( (byte_4352069 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&CoinRoomUtility_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_CoinRoomSelectCoinComponent___c__DisplayClass14_0__EndRequest_b__0__);
    sub_B70694(&CoinRoomSelectCoinComponent___c__DisplayClass14_0_TypeInfo);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_4352069 = 1;
  }
  v5 = sub_B70764(CoinRoomSelectCoinComponent___c__DisplayClass14_0_TypeInfo);
  CoinRoomSelectCoinComponent___c__DisplayClass14_0___ctor(
    (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  v6 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL);
  if ( v6 )
    return;
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_11;
  selectedCoinDic = (System_Int32_array **)coinListViewManager->fields.selectedCoinDic;
  *(_QWORD *)(v5 + 24) = selectedCoinDic;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), selectedCoinDic, v14, v15, v16, v17, v18, v19);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v23 = CoinRoomUtility_TypeInfo;
  }
  EFFECT_FADE_TIME = v23->static_fields->EFFECT_FADE_TIME;
  v25 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_CoinRoomSelectCoinComponent___c__DisplayClass14_0__EndRequest_b__0__,
    0LL);
  if ( !Instance )
LABEL_11:
    sub_B7076C(v6, v7);
  CommonUI__maskFadeout(Instance, 1, EFFECT_FADE_TIME, v25, 0LL);
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
  CoinRoomCoinListViewManager_o *coinListViewManager; // x0

  this->fields.beforeUserCoinRoomEntity = 0LL;
  p_beforeUserCoinRoomEntity = &this->fields.beforeUserCoinRoomEntity;
  this->fields.state = 0;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.beforeUserCoinRoomEntity, 0LL, v2, v3, v4, v5, v6, v7);
  coinListViewManager = (CoinRoomCoinListViewManager_o *)*(p_beforeUserCoinRoomEntity - 6);
  if ( !coinListViewManager
    || (CoinRoomCoinListViewManager__DestroyList(coinListViewManager, v10),
        (coinListViewManager = this->fields.coinListViewManager) == 0LL)
    || (coinListViewManager = (CoinRoomCoinListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)coinListViewManager,
                                                                 0LL)) == 0LL )
  {
    sub_B7076C(coinListViewManager, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)coinListViewManager, 0, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall CoinRoomSelectCoinComponent__OnClickDecide(
        CoinRoomSelectCoinComponent_o *this,
        const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *selectedCoinDic; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v7; // x20
  const MethodInfo *v8; // x2
  int32_t key; // w21
  Il2CppObject *value; // x22
  _BOOL8 CanStrength_25584552; // x0
  __int64 v12; // x1
  CoinConfirmSliderDialog_o *confirmSliderDialog; // x21
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x3
  struct CoinRoomCoinListViewManager_o *v16; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v17; // x21
  CoinConfirmDialog_o *confirmDialog; // x20
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4352067 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__);
    sub_B70694(&Method_CoinRoomSelectCoinComponent__OnClickDecide_b__12_0__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352067 = 1;
  }
  memset(&v22, 0, sizeof(v22));
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
    v7 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v7,
      (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    if ( !selectedCoinDic )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      &v21,
      selectedCoinDic,
      (const MethodInfo_2FC6B4C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
    v22 = v21;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v22,
              (const MethodInfo_2832CC4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
    {
      key = (int32_t)v22.fields.current.fields.key;
      value = v22.fields.current.fields.value;
      CanStrength_25584552 = CoinRoomCoinIconItem__IsCanStrength_25584552((int32_t)v22.fields.current.fields.key, 1, v8);
      if ( CanStrength_25584552 )
      {
        if ( !v7 )
          sub_B7076C(CanStrength_25584552, v12);
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          v7,
          key,
          (WarBoardEvalValueSquare_EvalValueSquare_o *)value,
          (const MethodInfo_2FC6568 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v22,
      (const MethodInfo_2832E30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    v3 = System_Linq_Enumerable__Any_KeyValuePair_int__QuestAfterAction_VoiceInfo__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7,
           (const MethodInfo_1CA80C0 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____);
    if ( v3 )
    {
      confirmSliderDialog = this->fields.confirmSliderDialog;
      v14 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent__OnClickDecide_b__12_0__, 0LL);
      if ( confirmSliderDialog )
      {
        CoinConfirmSliderDialog__Open(
          confirmSliderDialog,
          (System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v7,
          v14,
          v15);
        return;
      }
LABEL_22:
      sub_B7076C(v3, v4);
    }
    v16 = this->fields.coinListViewManager;
    if ( !v16 )
      goto LABEL_22;
    v17 = v16->fields.selectedCoinDic;
    confirmDialog = this->fields.confirmDialog;
    v19 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, 0LL);
    if ( !confirmDialog )
      goto LABEL_22;
    CoinConfirmDialog__Open(confirmDialog, v17, v19, v20);
  }
}


void __fastcall CoinRoomSelectCoinComponent__OpenSelectCoinList(
        CoinRoomSelectCoinComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *coinListPanel; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  UILabel_o *subTitle; // x20
  System_Action_o *v7; // x20

  if ( (byte_4352066 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_CoinRoomSelectCoinComponent_EndOpen__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3218/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/);
    byte_4352066 = 1;
  }
  coinListPanel = this->fields.coinListPanel;
  if ( !coinListPanel )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(coinListPanel, 1, 0LL);
  coinListPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !coinListPanel )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(coinListPanel, 1, 0LL);
  if ( this->fields.state )
    return;
  CoinRoomSelectCoinComponent__Init(this, v4);
  this->fields.state = 1;
  coinListPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !coinListPanel )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(coinListPanel, 1, 0LL);
  coinListPanel = (UnityEngine_GameObject_o *)this->fields.coinListViewManager;
  if ( !coinListPanel )
    goto LABEL_14;
  CoinRoomCoinListViewManager__CreateInitList((CoinRoomCoinListViewManager_o *)coinListPanel, method);
  coinListPanel = (UnityEngine_GameObject_o *)this->fields.coinListViewManager;
  if ( !coinListPanel )
    goto LABEL_14;
  CoinRoomCoinListViewManager__SetMode_25597336((CoinRoomCoinListViewManager_o *)coinListPanel, 1, v5);
  subTitle = this->fields.subTitle;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  coinListPanel = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3218/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, 0LL);
  if ( !subTitle )
LABEL_14:
    sub_B7076C(coinListPanel, method);
  UILabel__set_text(subTitle, (System_String_o *)coinListPanel, 0LL);
  v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v7, 0LL);
}


void __fastcall CoinRoomSelectCoinComponent__RequestCoinRoomPut(
        CoinRoomSelectCoinComponent_o *this,
        const MethodInfo *method)
{
  CoinRoomUtility_c *v3; // x0
  struct UserCoinRoomEntity_o *UserCoinRoomEntity; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  CoinConfirmDialog_o *confirmDialog; // x0
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x20
  NetworkManager_ResultCallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x2

  if ( (byte_4352068 & 1) == 0 )
  {
    sub_B70694(&Method_CoinRoomSelectCoinComponent_EndRequest__);
    sub_B70694(&CoinRoomUtility_TypeInfo);
    sub_B70694(&Method_NetworkManager_getRequest_CoinRoomRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4352068 = 1;
  }
  v3 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v3);
  this->fields.beforeUserCoinRoomEntity = UserCoinRoomEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.beforeUserCoinRoomEntity,
    (System_Int32_array **)UserCoinRoomEntity,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  confirmDialog = this->fields.confirmDialog;
  if ( !confirmDialog )
    goto LABEL_13;
  CoinConfirmDialog__Close_25578596(confirmDialog, 0LL, v12);
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_13;
  selectedCoinDic = coinListViewManager->fields.selectedCoinDic;
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_CoinRoomSelectCoinComponent_EndRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  confirmDialog = (CoinConfirmDialog_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                           v16,
                                           (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_CoinRoomRequest___);
  if ( !confirmDialog )
LABEL_13:
    sub_B7076C(confirmDialog, v11);
  CoinRoomRequest__BeginRequest((CoinRoomRequest_o *)confirmDialog, selectedCoinDic, v17);
}


void __fastcall CoinRoomSelectCoinComponent__RequestNG(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CoinRoomSelectCoinComponent___OnClickDecide_b__12_0(
        CoinRoomSelectCoinComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  void *monitor; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v4; // x21
  CoinConfirmDialog_o *v5; // x20
  System_Action_o *v6; // x22
  const MethodInfo *v7; // x3

  v2 = (Il2CppObject *)this;
  if ( (byte_435206B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (CoinRoomSelectCoinComponent_o *)sub_B70694(&Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__);
    byte_435206B = 1;
  }
  monitor = v2[5].monitor;
  if ( !monitor
    || (v4 = (System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)*((_QWORD *)monitor + 59),
        v5 = (CoinConfirmDialog_o *)v2[6].monitor,
        v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(v6, v2, Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, 0LL),
        !v5) )
  {
    sub_B7076C(this, method);
  }
  CoinConfirmDialog__Open(v5, v4, v6, v7);
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
  CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *v2; // x19
  struct CoinRoomSelectCoinComponent_o *_4__this; // x8
  CommonUI_o *v4; // x19

  v2 = this;
  if ( (byte_434EDC5 & 1) == 0 )
  {
    sub_B70694(&CoinRoomUtility_TypeInfo);
    this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434EDC5 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)_4__this->fields.coinRoomEffectComponent;
  if ( !this )
    goto LABEL_10;
  CoinRoomEffectComponent__OpenEffect(
    (CoinRoomEffectComponent_o *)this,
    _4__this->fields.beforeUserCoinRoomEntity,
    v2->fields.selectedValue,
    0LL);
  this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)this;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  if ( !v4 )
LABEL_10:
    sub_B7076C(this, method);
  CommonUI__maskFadein(v4, CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME, 0LL, 0LL);
}