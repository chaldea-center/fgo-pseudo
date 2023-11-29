void __fastcall WarBoardPlayingUIController___ctor(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardPlayingUIController__Active(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPlayingUIController__Awake(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *UIAtlas; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  UnityEngine_Object_o *splitAPLabel; // x21
  UIFont_o *v10; // x20
  UILabel_o *v11; // x0
  UnityEngine_Object_o *maxAPLabel; // x21
  UILabel_o *v13; // x0
  UnityEngine_Object_o *currentAPLabel; // x21
  UILabel_o *v15; // x0
  UnityEngine_Object_o *nextTurnButtonBlinkPrefab; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_GameObject_o *nextTurnObject; // x0
  struct UnityEngine_GameObject_o *v24; // x20
  UnityEngine_Transform_o *transform; // x21
  struct UnityEngine_GameObject_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Transform_o *v33; // x0
  struct UICommonButton_o **p_nextTurnButton; // x22
  UnityEngine_Transform_o *v35; // x21
  UnityEngine_Transform_o *v36; // x0
  int v37; // s0
  UnityEngine_Transform_o *Child; // x20
  UnityEngine_Vector2_o zero; // kr00_8
  int v42; // s2
  struct UnityEngine_GameObject_array *tweenTargets; // x1

  if ( (byte_40FBA38 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIFont___, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_GameObject___, v5);
    sub_B16FFC(&StringLiteral_6717, v6);
    byte_40FBA38 = 1;
  }
  UIAtlas = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load_UIAtlas_(
                                          (System_String_o *)StringLiteral_6717,
                                          (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)UIAtlas, 0LL, 0LL) )
  {
    if ( !UIAtlas )
      goto LABEL_44;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                UIAtlas,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    splitAPLabel = (UnityEngine_Object_o *)this->fields.splitAPLabel;
    v10 = (UIFont_o *)Component_srcLineSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(splitAPLabel, 0LL, 0LL) )
    {
      v11 = this->fields.splitAPLabel;
      if ( !v11 )
        goto LABEL_44;
      UILabel__set_bitmapFont(v11, v10, 0LL);
    }
    maxAPLabel = (UnityEngine_Object_o *)this->fields.maxAPLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(maxAPLabel, 0LL, 0LL) )
    {
      v13 = this->fields.maxAPLabel;
      if ( !v13 )
        goto LABEL_44;
      UILabel__set_bitmapFont(v13, v10, 0LL);
    }
    currentAPLabel = (UnityEngine_Object_o *)this->fields.currentAPLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(currentAPLabel, 0LL, 0LL) )
    {
      v15 = this->fields.currentAPLabel;
      if ( !v15 )
        goto LABEL_44;
      UILabel__set_bitmapFont(v15, v10, 0LL);
    }
  }
  nextTurnButtonBlinkPrefab = (UnityEngine_Object_o *)this->fields.nextTurnButtonBlinkPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nextTurnButtonBlinkPrefab, 0LL, 0LL) )
  {
    nextTurnObject = this->fields.nextTurnObject;
    if ( !nextTurnObject )
      goto LABEL_44;
    v24 = this->fields.nextTurnButtonBlinkPrefab;
    transform = UnityEngine_GameObject__get_transform(nextTurnObject, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v26 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                               (UILabel_o *)v24,
                                               transform,
                                               (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
    this->fields.nextTurnButtonBlink = v26;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.nextTurnButtonBlink,
      (System_Int32_array **)v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    if ( !this->fields.nextTurnButtonBlink
      || (v33 = UnityEngine_GameObject__get_transform(this->fields.nextTurnButtonBlink, 0LL),
          p_nextTurnButton = &this->fields.nextTurnButton,
          !this->fields.nextTurnButton)
      || (v35 = v33,
          (v36 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.nextTurnButton, 0LL)) == 0LL)
      || (*(UnityEngine_Vector3_o *)&v37 = UnityEngine_Transform__get_localPosition(v36, 0LL), !v35) )
    {
LABEL_44:
      sub_B170D4();
    }
    UnityEngine_Transform__set_localPosition(v35, *(UnityEngine_Vector3_o *)&v37, 0LL);
    Child = GameObjectExtensions__GetChild(this->fields.nextTurnButtonBlink, 0, 0LL);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Child, 0LL, 0LL) )
    {
      zero = UnityEngine_Vector2__get_zero(0LL);
      if ( !Child )
        goto LABEL_44;
      v42 = 0;
      UnityEngine_Transform__set_localPosition(Child, *(UnityEngine_Vector3_o *)&zero.fields.x, 0LL);
    }
  }
  else
  {
    p_nextTurnButton = &this->fields.nextTurnButton;
  }
  if ( !*p_nextTurnButton )
    goto LABEL_44;
  tweenTargets = (*p_nextTurnButton)->fields.tweenTargets;
  this->fields.nextTurnButtonTweenObjectCache = tweenTargets;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.nextTurnButtonTweenObjectCache,
    (System_Int32_array **)tweenTargets,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


void __fastcall WarBoardPlayingUIController__CallbackBackButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0

  if ( (byte_40FBA47 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40FBA47 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__CallbackRetireButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  WebViewManager_o *Instance; // x19
  WarBoardPlayingUIController___c_c *v10; // x8
  struct WarBoardPlayingUIController___c_StaticFields *static_fields; // x9
  System_Action_o *_9__40_0; // x20
  Il2CppObject *v13; // x21
  struct WarBoardPlayingUIController___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40FBA46 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    sub_B16FFC(&Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__, v3);
    sub_B16FFC(&WarBoardPlayingUIController___c_TypeInfo, v4);
    byte_40FBA46 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v10 = WarBoardPlayingUIController___c_TypeInfo;
  if ( (BYTE3(WarBoardPlayingUIController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPlayingUIController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPlayingUIController___c_TypeInfo);
    v10 = WarBoardPlayingUIController___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__40_0 = static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = WarBoardPlayingUIController___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__40_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(_9__40_0, v13, Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__, 0LL);
    v14 = WarBoardPlayingUIController___c_TypeInfo->static_fields;
    v14->__9__40_0 = _9__40_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v14->__9__40_0,
      (System_Int32_array **)_9__40_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !Instance )
    sub_B170D4();
  WarBoardManager__Retire((WarBoardManager_o *)Instance, _9__40_0, 0LL);
}


void __fastcall WarBoardPlayingUIController__CallbackSuspendButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  WarBoardResumeRequest_o *Request_WarBoardWallAttackRequest; // x19
  WebViewManager_o *Instance; // x0
  const MethodInfo *v13; // x2

  if ( (byte_40FBA44 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_WarBoardResumeRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B16FFC(&Method_WarBoardPlayingUIController_SuspendResponse__, v9);
    byte_40FBA44 = 1;
  }
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 method,
                                                 v2,
                                                 v3,
                                                 v4);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_WarBoardPlayingUIController_SuspendResponse__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (WarBoardResumeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v10,
                                                                   (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_WarBoardResumeRequest___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || !Request_WarBoardWallAttackRequest )
    sub_B170D4();
  WarBoardResumeRequest__beginRequest(Request_WarBoardWallAttackRequest, (WarBoardData_o *)Instance[4].monitor, v13);
}


void __fastcall WarBoardPlayingUIController__Deactive(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__NondispTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *playerTurnRoot; // x0
  UnityEngine_GameObject_o *enemyTurnRoot; // x0

  playerTurnRoot = this->fields.playerTurnRoot;
  if ( !playerTurnRoot
    || (UnityEngine_GameObject__SetActive(playerTurnRoot, 0, 0LL), (enemyTurnRoot = this->fields.enemyTurnRoot) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(enemyTurnRoot, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__OnClickNextTurn(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  System_Int32_array **Instance; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  WarBoardManager_o **v18; // x20
  WebViewManager_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Action_bool__o *v24; // x21

  if ( (byte_40FBA3D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&System_Action_bool__TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__, v8);
    sub_B16FFC(&WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo, v9);
    byte_40FBA3D = 1;
  }
  v10 = sub_B170CC(WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo, method, v2, v3, v4);
  WarBoardPlayingUIController___c__DisplayClass26_0___ctor(
    (WarBoardPlayingUIController___c__DisplayClass26_0_o *)v10,
    0LL);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v10 )
    goto LABEL_17;
  *(_QWORD *)(v10 + 16) = Instance;
  v18 = (WarBoardManager_o **)(v10 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), Instance, v12, v13, v14, v15, v16, v17);
  if ( !*(_QWORD *)(v10 + 16) )
    goto LABEL_17;
  WarBoardManager__HideSimplePopup(*(WarBoardManager_o **)(v10 + 16), 0LL, 0LL);
  if ( !*v18 )
    goto LABEL_17;
  if ( WarBoardManager__ExistEnableActionPieceExtend(*v18, 0LL) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v24 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v20, v21, v22, v23);
    System_Action_bool____ctor(
      v24,
      (Il2CppObject *)v10,
      Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__,
      (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
    if ( v19 )
    {
      WarBoardManager__ShowTurnEndConfirmPopup((WarBoardManager_o *)v19, v24, 0LL);
      return;
    }
LABEL_17:
    sub_B170D4();
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(8, 0LL);
  if ( !*v18 )
    goto LABEL_17;
  WarBoardManager__NextTurn(*v18, 0LL);
}


void __fastcall WarBoardPlayingUIController__OnClickReturnButton(
        WarBoardPlayingUIController_o *this,
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
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v12; // x0
  struct UnityEngine_GameObject_o *backPrefab; // x20
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  WarBoardBackMenuComponent_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Action_o *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Action_o *v32; // x23

  if ( (byte_40FBA43 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___, v3);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&Method_WarBoardPlayingUIController_CallbackBackButton__, v8);
    sub_B16FFC(&Method_WarBoardPlayingUIController_CallbackRetireButton__, v9);
    sub_B16FFC(&Method_WarBoardPlayingUIController_CallbackSuspendButton__, v10);
    byte_40FBA43 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v12 )
    goto LABEL_14;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)v12, 0LL, 0LL);
  backPrefab = this->fields.backPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)backPrefab,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_27425996(v14, gameObject, 0LL);
  GameObjectExtensions__ResetLocalScale(v14, 0LL);
  if ( !v14
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v14,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___)) == 0LL )
  {
LABEL_14:
    sub_B170D4();
  }
  v17 = (WarBoardBackMenuComponent_o *)Component_srcLineSprite;
  WarBoardBackMenuComponent__Init((WarBoardBackMenuComponent_o *)Component_srcLineSprite, 0LL);
  v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackSuspendButton__, 0LL);
  v27 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackRetireButton__, 0LL);
  v32 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v28, v29, v30, v31);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0LL);
  WarBoardBackMenuComponent__Open(v17, v22, v27, v32, 0LL);
}


void __fastcall WarBoardPlayingUIController__OnClickTreasureButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardManager_o *Instance; // x20
  struct UnityEngine_GameObject_o *treasureListPrefab; // x21
  UnityEngine_GameObject_o *v11; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  WarBoardTreasureListComponent_o *v14; // x21
  WarBoardData_o *warBoardData_k__BackingField; // x0
  System_Int32_array *TreasureIdList; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x22

  if ( (byte_40FBA42 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___, v3);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&SeManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_B16FFC(&Method_WarBoardPlayingUIController_CallbackBackButton__, v8);
    byte_40FBA42 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
  WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
  treasureListPrefab = this->fields.treasureListPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)treasureListPrefab,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_27425996(v11, gameObject, 0LL);
  GameObjectExtensions__ResetLocalScale(v11, 0LL);
  if ( !v11
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v11,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___)) == 0LL
    || (v14 = (WarBoardTreasureListComponent_o *)Component_srcLineSprite,
        WarBoardTreasureListComponent__Init((WarBoardTreasureListComponent_o *)Component_srcLineSprite, 0LL),
        (warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  TreasureIdList = WarBoardData__GetTreasureIdList(warBoardData_k__BackingField, 0LL);
  v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0LL);
  WarBoardTreasureListComponent__Open(v14, TreasureIdList, 2, v21, 0LL);
}


void __fastcall WarBoardPlayingUIController__OnDestroy(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_nextTurnButtonBlink; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *nextTurnButtonBlink; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FBA48 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBA48 = 1;
  }
  nextTurnButtonBlink = this->fields.nextTurnButtonBlink;
  p_nextTurnButtonBlink = (BattleServantConfConponent_o *)&this->fields.nextTurnButtonBlink;
  v4 = (UnityEngine_Object_o *)nextTurnButtonBlink;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_nextTurnButtonBlink->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(klass, 0LL);
    p_nextTurnButtonBlink->klass = 0LL;
    sub_B16F98(p_nextTurnButtonBlink, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPlayingUIController__SetActionPoint(
        WarBoardPlayingUIController_o *this,
        int32_t current,
        int32_t max,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  const MethodInfo *v11; // x2
  bool IsPlayerTurn; // w1
  WebViewManager_o *v13; // x0
  WebViewManager_o *v14; // x0
  WebViewManager_o *v15; // x0
  WebViewManager_o *v16; // x0
  WarBoardActionPointEntity_o *warBoardActionPointEntity; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Object_o *splitAPLabel; // x20
  UILabel_o *v20; // x20
  System_String_o *v21; // x0
  UnityEngine_Object_o *maxAPLabel; // x20
  UILabel_o *v23; // x20
  System_String_o *v24; // x0
  UnityEngine_Object_o *currentAPLabel; // x20
  UILabel_o *v26; // x19
  WebViewManager_o *v27; // x0
  System_String_o *v28; // x20
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  UnityEngine_GameObject_o *apLabelRoot; // x0
  int32_t v32; // [xsp+8h] [xbp-28h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-24h] BYREF

  v32 = max;
  v33 = current;
  if ( (byte_40FBA3B & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&current);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_15211, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    sub_B16FFC(&StringLiteral_15210, v9);
    byte_40FBA3B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  if ( WarBoardManager__EnableAction((WarBoardManager_o *)Instance, 0LL) )
  {
    IsPlayerTurn = 0;
    if ( !this )
      goto LABEL_48;
  }
  else
  {
    v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v13 )
      goto LABEL_48;
    IsPlayerTurn = WarBoardManager__IsPlayerTurn((WarBoardManager_o *)v13, 0LL);
    if ( !this )
      goto LABEL_48;
  }
  WarBoardPlayingUIController__SetBlinkNextTurnButton(this, IsPlayerTurn, v11);
  v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v14 )
    goto LABEL_48;
  if ( *(_DWORD *)&v14[4].fields.isButtonEnable != 2 )
    goto LABEL_16;
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v15 )
    goto LABEL_48;
  if ( !WarBoardManager__get_warBoardActionPointEntity((WarBoardManager_o *)v15, 0LL) )
    goto LABEL_16;
  v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v16 )
    goto LABEL_48;
  warBoardActionPointEntity = WarBoardManager__get_warBoardActionPointEntity((WarBoardManager_o *)v16, 0LL);
  if ( !warBoardActionPointEntity )
    goto LABEL_48;
  if ( !WarBoardActionPointEntity__get_HasCost(warBoardActionPointEntity, 0LL) )
  {
    apLabelRoot = this->fields.apLabelRoot;
    if ( !apLabelRoot )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive(apLabelRoot, 0, 0LL);
  }
  else
  {
LABEL_16:
    v18 = this->fields.apLabelRoot;
    if ( !v18 )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive(v18, 1, 0LL);
    splitAPLabel = (UnityEngine_Object_o *)this->fields.splitAPLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(splitAPLabel, 0LL, 0LL) )
    {
      v20 = this->fields.splitAPLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_15211, 0LL);
      if ( !v20 )
        goto LABEL_48;
      UILabel__set_text(v20, v21, 0LL);
    }
    maxAPLabel = (UnityEngine_Object_o *)this->fields.maxAPLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(maxAPLabel, 0LL, 0LL) )
    {
      v23 = this->fields.maxAPLabel;
      v24 = System_Int32__ToString((int32_t)&v32, 0LL);
      if ( !v23 )
        goto LABEL_48;
      UILabel__set_text(v23, v24, 0LL);
    }
    currentAPLabel = (UnityEngine_Object_o *)this->fields.currentAPLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(currentAPLabel, 0LL, 0LL) )
    {
      v26 = this->fields.currentAPLabel;
      v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( v27 )
      {
        if ( WarBoardManager__EnableAction((WarBoardManager_o *)v27, 0LL) )
        {
          v28 = (System_String_o *)StringLiteral_1;
        }
        else
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v28 = LocalizationManager__Get((System_String_o *)StringLiteral_15210, 0LL);
        }
        v29 = System_Int32__ToString((int32_t)&v33, 0LL);
        v30 = System_String__Concat_43743732(v28, v29, 0LL);
        if ( v26 )
        {
          UILabel__set_text(v26, v30, 0LL);
          return;
        }
      }
LABEL_48:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPlayingUIController__SetBlinkNextTurnButton(
        WarBoardPlayingUIController_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTurnButtonBlink; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_40FBA3C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, value);
    byte_40FBA3C = 1;
  }
  nextTurnButtonBlink = (UnityEngine_Object_o *)this->fields.nextTurnButtonBlink;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nextTurnButtonBlink, 0LL, 0LL) )
  {
    v6 = this->fields.nextTurnButtonBlink;
    if ( !v6 )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v6, value, 0LL);
  }
}


void __fastcall WarBoardPlayingUIController__SetHeaderTitle(
        WarBoardPlayingUIController_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x21
  UILabel_o *v6; // x0

  if ( (byte_40FBA3F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, name);
    byte_40FBA3F = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v6 = this->fields.titleLabel;
    if ( !v6 )
      sub_B170D4();
    UILabel__set_text(v6, name, 0LL);
  }
}


void __fastcall WarBoardPlayingUIController__SetNPCTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nextTurnButton; // x20
  UICommonButton_o *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UICommonButton_o *v11; // x0

  if ( (byte_40FBA3A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBA3A = 1;
  }
  nextTurnButton = (UnityEngine_Object_o *)this->fields.nextTurnButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nextTurnButton, 0LL, 0LL) )
  {
    v4 = this->fields.nextTurnButton;
    if ( !v4 || (UICommonButton__SetButtonEnable(v4, 0, 1, 0LL), (v11 = this->fields.nextTurnButton) == 0LL) )
      sub_B170D4();
    v11->fields.tweenTargets = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&v11->fields.tweenTargets, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall WarBoardPlayingUIController__SetPlayerTurn(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTurnButton; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct UICommonButton_o *v10; // x0
  System_Int32_array **nextTurnButtonTweenObjectCache; // x1
  UICommonButton_o *v12; // x0

  if ( (byte_40FBA39 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBA39 = 1;
  }
  nextTurnButton = (UnityEngine_Object_o *)this->fields.nextTurnButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nextTurnButton, 0LL, 0LL) )
  {
    v10 = this->fields.nextTurnButton;
    if ( !v10
      || (nextTurnButtonTweenObjectCache = (System_Int32_array **)this->fields.nextTurnButtonTweenObjectCache,
          v10->fields.tweenTargets = (struct UnityEngine_GameObject_array *)nextTurnButtonTweenObjectCache,
          sub_B16F98(
            (BattleServantConfConponent_o *)&v10->fields.tweenTargets,
            nextTurnButtonTweenObjectCache,
            v4,
            v5,
            v6,
            v7,
            v8,
            v9),
          (v12 = this->fields.nextTurnButton) == 0LL) )
    {
      sub_B170D4();
    }
    UICommonButton__SetButtonEnable(v12, 1, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPlayingUIController__SetTimeAccelerateAnimation(
        WarBoardPlayingUIController_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardSkipPrefab; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_40FBA40 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isDisp);
    byte_40FBA40 = 1;
  }
  boardSkipPrefab = (UnityEngine_Object_o *)this->fields.boardSkipPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(boardSkipPrefab, 0LL, 0LL) )
  {
    v6 = this->fields.boardSkipPrefab;
    if ( !v6 )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v6, isDisp, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPlayingUIController__SetTurn(
        WarBoardPlayingUIController_o *this,
        bool isPlayer,
        int32_t turnCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *playerTurnRoot; // x0
  UnityEngine_GameObject_o *enemyTurnRoot; // x0
  System_String_o *v11; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x20
  UILabel_o *enemyTurnLabel; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FBA3E & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, isPlayer);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_15235, v8);
    byte_40FBA3E = 1;
  }
  playerTurnRoot = this->fields.playerTurnRoot;
  if ( !playerTurnRoot )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(playerTurnRoot, isPlayer, 0LL);
  enemyTurnRoot = this->fields.enemyTurnRoot;
  if ( !enemyTurnRoot )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(enemyTurnRoot, !isPlayer, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15235, 0LL);
  v16 = turnCount;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v13 = System_String__Format(v11, v12, 0LL);
  if ( !this->fields.playerTurnLabel
    || (v14 = v13,
        UILabel__set_text(this->fields.playerTurnLabel, v13, 0LL),
        (enemyTurnLabel = this->fields.enemyTurnLabel) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  UILabel__set_text(enemyTurnLabel, v14, 0LL);
}


void __fastcall WarBoardPlayingUIController__SuspendResponse(
        WarBoardPlayingUIController_o *this,
        System_String_o *response,
        const MethodInfo *method)
{
  __int64 v4; // x1
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FBA45 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, response);
    sub_B16FFC(&StringLiteral_20980, v4);
    byte_40FBA45 = 1;
  }
  if ( !System_String__op_Equality(response, (System_String_o *)StringLiteral_20980, 0LL) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    AvalonSceneManager__transitionSceneRefresh(Instance, 9, 1, 0LL, 0, 0LL);
  }
}


void __fastcall WarBoardPlayingUIController__Update(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v6; // x20
  WarBoardData_o *monitor; // x0
  System_Int32_array *TreasureIdList; // x0
  int max_length; // w8
  UnityEngine_GameObject_o *getTreasureRoot; // x0
  UILabel_o *getTreasureLabel; // x21
  System_String_o *v12; // x0
  WarBoardData_o *v13; // x0
  UISprite_o *getTreasureIcon; // x19
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  int32_t ExpensiveIcon; // [xsp+8h] [xbp-18h] BYREF
  int v18; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FBA41 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_19255, v4);
    byte_40FBA41 = 1;
  }
  v18 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v6 = Instance;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( !monitor )
    goto LABEL_11;
  TreasureIdList = WarBoardData__GetTreasureIdList(monitor, 0LL);
  if ( !TreasureIdList )
    goto LABEL_11;
  max_length = TreasureIdList->max_length;
  v18 = max_length;
  getTreasureRoot = this->fields.getTreasureRoot;
  if ( !getTreasureRoot )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(getTreasureRoot, max_length > 0, 0LL);
  getTreasureLabel = this->fields.getTreasureLabel;
  v12 = System_Int32__ToString((int32_t)&v18, 0LL);
  if ( !getTreasureLabel
    || (UILabel__set_text(getTreasureLabel, v12, 0LL), (v13 = (WarBoardData_o *)v6[4].monitor) == 0LL)
    || (getTreasureIcon = this->fields.getTreasureIcon,
        ExpensiveIcon = WarBoardData__GetExpensiveIcon(v13, 0LL),
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExpensiveIcon),
        v16 = System_String__Format((System_String_o *)StringLiteral_19255, v15, 0LL),
        !getTreasureIcon) )
  {
LABEL_11:
    sub_B170D4();
  }
  UISprite__set_spriteName(getTreasureIcon, v16, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardPlayingUIController__get_EventInfoAnimRoot(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  return this->fields.eventInfoAnimRoot;
}


void __fastcall WarBoardPlayingUIController___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7867 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardPlayingUIController___c_TypeInfo, v1);
    byte_40F7867 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardPlayingUIController___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardPlayingUIController___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall WarBoardPlayingUIController___c___ctor(
        WarBoardPlayingUIController___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPlayingUIController___c___CallbackRetireButton_b__40_0(
        WarBoardPlayingUIController___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  WebViewManager_o *Instance; // x0

  if ( (byte_40F7868 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v2);
    byte_40F7868 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F604D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F604D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  WarBoardManager__Exit((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardPlayingUIController___c__DisplayClass26_0___ctor(
        WarBoardPlayingUIController___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPlayingUIController___c__DisplayClass26_0___OnClickNextTurn_b__0(
        WarBoardPlayingUIController___c__DisplayClass26_0_o *this,
        bool ok,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  WebViewManager_o *Instance; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_o *v22; // x20

  if ( (byte_40F7869 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, ok);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_B16FFC(&Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__, v8);
    sub_B16FFC(&WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo, v9);
    byte_40F7869 = 1;
  }
  v10 = sub_B170CC(WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo, ok, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 24) = this,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v10 + 24),
          (System_Int32_array **)this,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        *(_BYTE *)(v10 + 16) = ok,
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v10,
          Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  WarBoardManager__HideTurnEndConfirmPopup((WarBoardManager_o *)Instance, v22, 0LL);
}


void __fastcall WarBoardPlayingUIController___c__DisplayClass26_1___ctor(
        WarBoardPlayingUIController___c__DisplayClass26_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPlayingUIController___c__DisplayClass26_1___OnClickNextTurn_b__1(
        WarBoardPlayingUIController___c__DisplayClass26_1_o *this,
        const MethodInfo *method)
{
  struct WarBoardPlayingUIController___c__DisplayClass26_0_o *CS___8__locals1; // x8
  WarBoardManager_o *warBoardManager; // x0

  if ( this->fields.ok )
  {
    CS___8__locals1 = this->fields.CS___8__locals1;
    if ( !CS___8__locals1 || (warBoardManager = CS___8__locals1->fields.warBoardManager) == 0LL )
      sub_B170D4();
    WarBoardManager__NextTurn(warBoardManager, 0LL);
  }
}