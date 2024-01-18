void __fastcall CoinRoomSelectCoinComponent___ctor(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4188888 & 1) == 0 )
  {
    sub_B2C35C(&BaseMenu_TypeInfo, method);
    byte_4188888 = 1;
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
    sub_B2C434(0LL, method);
  CoinRoomCoinListViewManager__SetMode_26757792(coinListViewManager, 2, v2);
}


void __fastcall CoinRoomSelectCoinComponent__EndRequest(
        CoinRoomSelectCoinComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  _BOOL8 v11; // x0
  __int64 v12; // x1
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
  CommonUI_o *Instance; // x20
  CoinRoomUtility_c *v28; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v30; // x21

  if ( (byte_4188887 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, result);
    sub_B2C35C(&CoinRoomUtility_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_CoinRoomSelectCoinComponent___c__DisplayClass14_0__EndRequest_b__0__, v7);
    sub_B2C35C(&CoinRoomSelectCoinComponent___c__DisplayClass14_0_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v9);
    byte_4188887 = 1;
  }
  v10 = sub_B2C42C(CoinRoomSelectCoinComponent___c__DisplayClass14_0_TypeInfo);
  CoinRoomSelectCoinComponent___c__DisplayClass14_0___ctor(
    (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_QWORD *)(v10 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  v11 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL);
  if ( v11 )
    return;
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_11;
  selectedCoinDic = (System_Int32_array **)coinListViewManager->fields.selectedCoinDic;
  *(_QWORD *)(v10 + 24) = selectedCoinDic;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 24), selectedCoinDic, v19, v20, v21, v22, v23, v24);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v28 = CoinRoomUtility_TypeInfo;
  }
  EFFECT_FADE_TIME = v28->static_fields->EFFECT_FADE_TIME;
  v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v10,
    Method_CoinRoomSelectCoinComponent___c__DisplayClass14_0__EndRequest_b__0__,
    0LL);
  if ( !Instance )
LABEL_11:
    sub_B2C434(v11, v12);
  CommonUI__maskFadeout(Instance, 1, EFFECT_FADE_TIME, v30, 0LL);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.beforeUserCoinRoomEntity, 0LL, v2, v3, v4, v5, v6, v7);
  coinListViewManager = (CoinRoomCoinListViewManager_o *)*(p_beforeUserCoinRoomEntity - 6);
  if ( !coinListViewManager
    || (CoinRoomCoinListViewManager__DestroyList(coinListViewManager, v10),
        (coinListViewManager = this->fields.coinListViewManager) == 0LL)
    || (coinListViewManager = (CoinRoomCoinListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)coinListViewManager,
                                                                 0LL)) == 0LL )
  {
    sub_B2C434(coinListViewManager, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)coinListViewManager, 0, 0LL);
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
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *selectedCoinDic; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v20; // x20
  const MethodInfo *v21; // x2
  int32_t key; // w21
  Il2CppObject *value; // x22
  _BOOL8 CanStrength_26745008; // x0
  __int64 v25; // x1
  CoinConfirmSliderDialog_o *confirmSliderDialog; // x21
  System_Action_o *v27; // x22
  const MethodInfo *v28; // x3
  struct CoinRoomCoinListViewManager_o *v29; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v30; // x21
  CoinConfirmDialog_o *confirmDialog; // x20
  System_Action_o *v32; // x22
  const MethodInfo *v33; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4188885 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, v3);
    sub_B2C35C(&Method_CoinRoomSelectCoinComponent__OnClickDecide_b__12_0__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__get_Current__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Key__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__, v14);
    sub_B2C35C(&SoundManager_TypeInfo, v15);
    byte_4188885 = 1;
  }
  memset(&v35, 0, sizeof(v35));
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
    v20 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v20,
      (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    if ( !selectedCoinDic )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      &v34,
      selectedCoinDic,
      (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
    v35 = v34;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v35,
              (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
    {
      key = (int32_t)v35.fields.current.fields.key;
      value = v35.fields.current.fields.value;
      CanStrength_26745008 = CoinRoomCoinIconItem__IsCanStrength_26745008(
                               (int32_t)v35.fields.current.fields.key,
                               1,
                               v21);
      if ( CanStrength_26745008 )
      {
        if ( !v20 )
          sub_B2C434(CanStrength_26745008, v25);
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          v20,
          key,
          (WarBoardEvalValueSquare_EvalValueSquare_o *)value,
          (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v35,
      (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    v16 = System_Linq_Enumerable__Any_KeyValuePair_int__QuestAfterAction_VoiceInfo__(
            (System_Collections_Generic_IEnumerable_TSource__o *)v20,
            (const MethodInfo_1737B70 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____);
    if ( v16 )
    {
      confirmSliderDialog = this->fields.confirmSliderDialog;
      v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v27, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent__OnClickDecide_b__12_0__, 0LL);
      if ( confirmSliderDialog )
      {
        CoinConfirmSliderDialog__Open(
          confirmSliderDialog,
          (System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v20,
          v27,
          v28);
        return;
      }
LABEL_22:
      sub_B2C434(v16, v17);
    }
    v29 = this->fields.coinListViewManager;
    if ( !v29 )
      goto LABEL_22;
    v30 = v29->fields.selectedCoinDic;
    confirmDialog = this->fields.confirmDialog;
    v32 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, 0LL);
    if ( !confirmDialog )
      goto LABEL_22;
    CoinConfirmDialog__Open(confirmDialog, v30, v32, v33);
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
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  UILabel_o *subTitle; // x20
  System_Action_o *v10; // x20

  if ( (byte_4188884 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CoinRoomSelectCoinComponent_EndOpen__, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_3144/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, v5);
    byte_4188884 = 1;
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
  CoinRoomSelectCoinComponent__Init(this, v7);
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
  CoinRoomCoinListViewManager__SetMode_26757792((CoinRoomCoinListViewManager_o *)coinListPanel, 1, v8);
  subTitle = this->fields.subTitle;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  coinListPanel = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3144/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, 0LL);
  if ( !subTitle )
LABEL_14:
    sub_B2C434(coinListPanel, method);
  UILabel__set_text(subTitle, (System_String_o *)coinListPanel, 0LL);
  v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v10, 0LL);
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
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  CoinConfirmDialog_o *confirmDialog; // x0
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x20
  NetworkManager_ResultCallbackFunc_o *v20; // x21
  const MethodInfo *v21; // x2

  if ( (byte_4188886 & 1) == 0 )
  {
    sub_B2C35C(&Method_CoinRoomSelectCoinComponent_EndRequest__, method);
    sub_B2C35C(&CoinRoomUtility_TypeInfo, v3);
    sub_B2C35C(&Method_NetworkManager_getRequest_CoinRoomRequest___, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4188886 = 1;
  }
  v7 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v7);
  this->fields.beforeUserCoinRoomEntity = UserCoinRoomEntity;
  sub_B2C2F8(
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
  CoinConfirmDialog__Close_26739052(confirmDialog, 0LL, v16);
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_13;
  selectedCoinDic = coinListViewManager->fields.selectedCoinDic;
  v20 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v20,
    (Il2CppObject *)this,
    Method_CoinRoomSelectCoinComponent_EndRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  confirmDialog = (CoinConfirmDialog_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                           v20,
                                           (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CoinRoomRequest___);
  if ( !confirmDialog )
LABEL_13:
    sub_B2C434(confirmDialog, v15);
  CoinRoomRequest__BeginRequest((CoinRoomRequest_o *)confirmDialog, selectedCoinDic, v21);
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
  __int64 v3; // x1
  void *monitor; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v5; // x21
  CoinConfirmDialog_o *v6; // x20
  System_Action_o *v7; // x22
  const MethodInfo *v8; // x3

  v2 = (Il2CppObject *)this;
  if ( (byte_4188889 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (CoinRoomSelectCoinComponent_o *)sub_B2C35C(&Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, v3);
    byte_4188889 = 1;
  }
  monitor = v2[5].monitor;
  if ( !monitor
    || (v5 = (System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)*((_QWORD *)monitor + 59),
        v6 = (CoinConfirmDialog_o *)v2[6].monitor,
        v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v7, v2, Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, 0LL),
        !v6) )
  {
    sub_B2C434(this, method);
  }
  CoinConfirmDialog__Open(v6, v5, v7, v8);
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
  __int64 v3; // x1
  struct CoinRoomSelectCoinComponent_o *_4__this; // x8
  CommonUI_o *v5; // x19

  v2 = this;
  if ( (byte_4184F14 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomUtility_TypeInfo, method);
    this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)sub_B2C35C(
                                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                    v3);
    byte_4184F14 = 1;
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
  this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)this;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  if ( !v5 )
LABEL_10:
    sub_B2C434(this, method);
  CommonUI__maskFadein(v5, CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME, 0LL, 0LL);
}