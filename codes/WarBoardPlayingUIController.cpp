void __fastcall WarBoardPlayingUIController___ctor(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardPlayingUIController__Active(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPlayingUIController__Awake(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *UIAtlas; // x20
  UILabel_o *nextTurnObject; // x0
  __int64 v5; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  UnityEngine_Object_o *splitAPLabel; // x21
  UIFont_o *v8; // x20
  UnityEngine_Object_o *maxAPLabel; // x21
  UnityEngine_Object_o *currentAPLabel; // x21
  UnityEngine_Object_o *nextTurnButtonBlinkPrefab; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UnityEngine_GameObject_o *v18; // x20
  UnityEngine_Transform_o *transform; // x21
  struct UnityEngine_GameObject_o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct UICommonButton_o **p_nextTurnButton; // x22
  UnityEngine_Transform_o *v28; // x21
  int v29; // s0
  UnityEngine_Object_o *Child; // x20
  UnityEngine_Vector2_o zero; // kr00_8
  int v34; // s2
  struct UnityEngine_GameObject_array *tweenTargets; // x1

  if ( (byte_43539B1 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_B70694(&StringLiteral_6836/*"Fonts/FGO-NumberFont-02"*/);
    byte_43539B1 = 1;
  }
  UIAtlas = (UnityEngine_Object_o *)UnityEngine_Resources__Load_UIAtlas_(
                                      (System_String_o *)StringLiteral_6836/*"Fonts/FGO-NumberFont-02"*/,
                                      (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  nextTurnObject = (UILabel_o *)UnityEngine_Object__op_Inequality(UIAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)nextTurnObject & 1) != 0 )
  {
    if ( !UIAtlas )
      goto LABEL_44;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)UIAtlas,
                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    splitAPLabel = (UnityEngine_Object_o *)this->fields.splitAPLabel;
    v8 = (UIFont_o *)Component_srcLineSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(splitAPLabel, 0LL, 0LL) )
    {
      nextTurnObject = this->fields.splitAPLabel;
      if ( !nextTurnObject )
        goto LABEL_44;
      UILabel__set_bitmapFont(nextTurnObject, v8, 0LL);
    }
    maxAPLabel = (UnityEngine_Object_o *)this->fields.maxAPLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(maxAPLabel, 0LL, 0LL) )
    {
      nextTurnObject = this->fields.maxAPLabel;
      if ( !nextTurnObject )
        goto LABEL_44;
      UILabel__set_bitmapFont(nextTurnObject, v8, 0LL);
    }
    currentAPLabel = (UnityEngine_Object_o *)this->fields.currentAPLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(currentAPLabel, 0LL, 0LL) )
    {
      nextTurnObject = this->fields.currentAPLabel;
      if ( !nextTurnObject )
        goto LABEL_44;
      UILabel__set_bitmapFont(nextTurnObject, v8, 0LL);
    }
  }
  nextTurnButtonBlinkPrefab = (UnityEngine_Object_o *)this->fields.nextTurnButtonBlinkPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  nextTurnObject = (UILabel_o *)UnityEngine_Object__op_Inequality(nextTurnButtonBlinkPrefab, 0LL, 0LL);
  if ( ((unsigned __int8)nextTurnObject & 1) != 0 )
  {
    nextTurnObject = (UILabel_o *)this->fields.nextTurnObject;
    if ( !nextTurnObject )
      goto LABEL_44;
    v18 = this->fields.nextTurnButtonBlinkPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nextTurnObject, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v20 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                               (UILabel_o *)v18,
                                               transform,
                                               (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    this->fields.nextTurnButtonBlink = v20;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.nextTurnButtonBlink,
      (System_Int32_array **)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    nextTurnObject = (UILabel_o *)this->fields.nextTurnButtonBlink;
    if ( !nextTurnObject
      || (nextTurnObject = (UILabel_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)nextTurnObject,
                                          0LL),
          p_nextTurnButton = &this->fields.nextTurnButton,
          !this->fields.nextTurnButton)
      || (v28 = (UnityEngine_Transform_o *)nextTurnObject,
          (nextTurnObject = (UILabel_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)this->fields.nextTurnButton,
                                           0LL)) == 0LL)
      || (*(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)nextTurnObject,
                                             0LL),
          !v28) )
    {
LABEL_44:
      sub_B7076C(nextTurnObject, v5);
    }
    UnityEngine_Transform__set_localPosition(v28, *(UnityEngine_Vector3_o *)&v29, 0LL);
    Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(this->fields.nextTurnButtonBlink, 0, 0LL);
    nextTurnObject = (UILabel_o *)UnityEngine_Object__op_Inequality(Child, 0LL, 0LL);
    if ( ((unsigned __int8)nextTurnObject & 1) != 0 )
    {
      zero = UnityEngine_Vector2__get_zero(0LL);
      if ( !Child )
        goto LABEL_44;
      v34 = 0;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)Child,
        *(UnityEngine_Vector3_o *)&zero.fields.x,
        0LL);
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.nextTurnButtonTweenObjectCache,
    (System_Int32_array **)tweenTargets,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall WarBoardPlayingUIController__CallbackBackButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_43539C0 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_43539C0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v3);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__CallbackRetireButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1
  WarBoardManager_o *v4; // x19
  WarBoardPlayingUIController___c_c *v5; // x8
  struct WarBoardPlayingUIController___c_StaticFields *static_fields; // x9
  System_Action_o *_9__40_0; // x20
  Il2CppObject *v8; // x21
  struct WarBoardPlayingUIController___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_43539BF & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__);
    sub_B70694(&WarBoardPlayingUIController___c_TypeInfo);
    byte_43539BF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v4 = (WarBoardManager_o *)Instance;
  v5 = WarBoardPlayingUIController___c_TypeInfo;
  if ( (BYTE3(WarBoardPlayingUIController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPlayingUIController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPlayingUIController___c_TypeInfo);
    v5 = WarBoardPlayingUIController___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__40_0 = static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = WarBoardPlayingUIController___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__40_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(_9__40_0, v8, Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__, 0LL);
    v9 = WarBoardPlayingUIController___c_TypeInfo->static_fields;
    v9->__9__40_0 = _9__40_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v9->__9__40_0,
      (System_Int32_array **)_9__40_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !v4 )
    sub_B7076C(Instance, v3);
  WarBoardManager__Retire(v4, _9__40_0, 0LL);
}


void __fastcall WarBoardPlayingUIController__CallbackSuspendButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  WarBoardResumeRequest_o *Request_WarBoardWallAttackRequest; // x19
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_43539BD & 1) == 0 )
  {
    sub_B70694(&Method_NetworkManager_getRequest_WarBoardResumeRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&Method_WarBoardPlayingUIController_SuspendResponse__);
    byte_43539BD = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_WarBoardPlayingUIController_SuspendResponse__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (WarBoardResumeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v3,
                                                                   (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_WarBoardResumeRequest___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || !Request_WarBoardWallAttackRequest )
    sub_B7076C(Instance, v6);
  WarBoardResumeRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    *(WarBoardData_o **)&Instance[4].fields.m_CachedPtr,
    v7);
}


void __fastcall WarBoardPlayingUIController__Deactive(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__NondispTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *playerTurnRoot; // x0

  playerTurnRoot = this->fields.playerTurnRoot;
  if ( !playerTurnRoot
    || (UnityEngine_GameObject__SetActive(playerTurnRoot, 0, 0LL), (playerTurnRoot = this->fields.enemyTurnRoot) == 0LL) )
  {
    sub_B7076C(playerTurnRoot, method);
  }
  UnityEngine_GameObject__SetActive(playerTurnRoot, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__OnClickNextTurn(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  System_Int32_array **Instance; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Int32_array ***v11; // x20
  WebViewManager_o *v12; // x20
  System_Action_bool__o *v13; // x21

  if ( (byte_43539B6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_bool___ctor__);
    sub_B70694(&System_Action_bool__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__);
    sub_B70694(&WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo);
    byte_43539B6 = 1;
  }
  v2 = sub_B70764(WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo);
  WarBoardPlayingUIController___c__DisplayClass26_0___ctor(
    (WarBoardPlayingUIController___c__DisplayClass26_0_o *)v2,
    0LL);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v2 )
    goto LABEL_17;
  *(_QWORD *)(v2 + 16) = Instance;
  v11 = (System_Int32_array ***)(v2 + 16);
  sub_B70630((BattleServantConfConponent_o *)(v2 + 16), Instance, v5, v6, v7, v8, v9, v10);
  Instance = *(System_Int32_array ***)(v2 + 16);
  if ( !Instance )
    goto LABEL_17;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  Instance = *v11;
  if ( !*v11 )
    goto LABEL_17;
  if ( WarBoardManager__ExistEnableActionPieceExtend((WarBoardManager_o *)Instance, 0LL) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v13 = (System_Action_bool__o *)sub_B70764(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v13,
      (Il2CppObject *)v2,
      Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__,
      (const MethodInfo_2648200 *)Method_System_Action_bool___ctor__);
    if ( v12 )
    {
      WarBoardManager__ShowTurnEndConfirmPopup((WarBoardManager_o *)v12, v13, 0LL);
      return;
    }
LABEL_17:
    sub_B7076C(Instance, v4);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(8, 0LL);
  Instance = *v11;
  if ( !*v11 )
    goto LABEL_17;
  WarBoardManager__NextTurn((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardPlayingUIController__OnClickReturnButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v4; // x1
  struct UnityEngine_GameObject_o *backPrefab; // x20
  UnityEngine_GameObject_o *v6; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  WarBoardBackMenuComponent_o *v8; // x20
  System_Action_o *v9; // x21
  System_Action_o *v10; // x22
  System_Action_o *v11; // x23

  if ( (byte_43539BC & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_WarBoardPlayingUIController_CallbackBackButton__);
    sub_B70694(&Method_WarBoardPlayingUIController_CallbackRetireButton__);
    sub_B70694(&Method_WarBoardPlayingUIController_CallbackSuspendButton__);
    byte_43539BC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
  backPrefab = this->fields.backPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)backPrefab,
                                     (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_32503456(v6, gameObject, 0LL);
  GameObjectExtensions__ResetLocalScale(v6, 0LL);
  if ( !v6
    || (Instance = (WarBoardManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v6,
                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___)) == 0LL )
  {
LABEL_14:
    sub_B7076C(Instance, v4);
  }
  v8 = (WarBoardBackMenuComponent_o *)Instance;
  WarBoardBackMenuComponent__Init((WarBoardBackMenuComponent_o *)Instance, 0LL);
  v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackSuspendButton__, 0LL);
  v10 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackRetireButton__, 0LL);
  v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0LL);
  WarBoardBackMenuComponent__Open(v8, v9, v10, v11, 0LL);
}


void __fastcall WarBoardPlayingUIController__OnClickTreasureButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *treasureListPrefab; // x21
  UnityEngine_GameObject_o *v7; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  WarBoardTreasureListComponent_o *v9; // x21
  System_Int32_array *TreasureIdList; // x20
  System_Action_o *v11; // x22

  if ( (byte_43539BB & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SeManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&Method_WarBoardPlayingUIController_CallbackBackButton__);
    byte_43539BB = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)treasureListPrefab,
                                     (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_32503456(v7, gameObject, 0LL);
  GameObjectExtensions__ResetLocalScale(v7, 0LL);
  if ( !v7
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v7,
                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___)) == 0LL
    || (v9 = (WarBoardTreasureListComponent_o *)Component_srcLineSprite,
        WarBoardTreasureListComponent__Init((WarBoardTreasureListComponent_o *)Component_srcLineSprite, 0LL),
        (Component_srcLineSprite = (srcLineSprite_o *)Instance->fields._warBoardData_k__BackingField) == 0LL) )
  {
LABEL_14:
    sub_B7076C(Component_srcLineSprite, v5);
  }
  TreasureIdList = WarBoardData__GetTreasureIdList((WarBoardData_o *)Component_srcLineSprite, 0LL);
  v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0LL);
  WarBoardTreasureListComponent__Open(v9, TreasureIdList, 2, v11, 0LL);
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

  if ( (byte_43539C1 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43539C1 = 1;
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
    UnityEngine_Object__Destroy_36067208(klass, 0LL);
    p_nextTurnButtonBlink->klass = 0LL;
    sub_B70630(p_nextTurnButtonBlink, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall WarBoardPlayingUIController__SetActionPoint(
        WarBoardPlayingUIController_o *this,
        int32_t current,
        int32_t max,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  _BOOL8 v6; // x1
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *splitAPLabel; // x20
  UILabel_o *v9; // x20
  UnityEngine_Object_o *maxAPLabel; // x20
  UILabel_o *v11; // x20
  UnityEngine_Object_o *currentAPLabel; // x20
  UILabel_o *v13; // x19
  System_String_o *v14; // x20
  System_String_o *v15; // x0
  int32_t v16; // [xsp+8h] [xbp-28h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v16 = max;
  v17 = current;
  if ( (byte_43539B4 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&StringLiteral_15461/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_15460/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    byte_43539B4 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (WarBoardManager_o *)WarBoardManager__EnableAction(Instance, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v6 = 0LL;
    if ( !this )
      goto LABEL_48;
  }
  else
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    Instance = (WarBoardManager_o *)WarBoardManager__IsPlayerTurn(Instance, 0LL);
    v6 = (unsigned __int8)Instance & 1;
    if ( !this )
      goto LABEL_48;
  }
  WarBoardPlayingUIController__SetBlinkNextTurnButton(this, v6, v7);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  if ( Instance->fields._controllType_k__BackingField != 2 )
    goto LABEL_16;
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  if ( !WarBoardManager__get_warBoardActionPointEntity(Instance, 0LL) )
    goto LABEL_16;
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (WarBoardManager_o *)WarBoardManager__get_warBoardActionPointEntity(Instance, 0LL);
  if ( !Instance )
    goto LABEL_48;
  if ( !WarBoardActionPointEntity__get_HasCost((WarBoardActionPointEntity_o *)Instance, 0LL) )
  {
    Instance = (WarBoardManager_o *)this->fields.apLabelRoot;
    if ( !Instance )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  }
  else
  {
LABEL_16:
    Instance = (WarBoardManager_o *)this->fields.apLabelRoot;
    if ( !Instance )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    splitAPLabel = (UnityEngine_Object_o *)this->fields.splitAPLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(splitAPLabel, 0LL, 0LL) )
    {
      v9 = this->fields.splitAPLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (WarBoardManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15461/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
      if ( !v9 )
        goto LABEL_48;
      UILabel__set_text(v9, (System_String_o *)Instance, 0LL);
    }
    maxAPLabel = (UnityEngine_Object_o *)this->fields.maxAPLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(maxAPLabel, 0LL, 0LL) )
    {
      v11 = this->fields.maxAPLabel;
      Instance = (WarBoardManager_o *)System_Int32__ToString((int32_t)&v16, 0LL);
      if ( !v11 )
        goto LABEL_48;
      UILabel__set_text(v11, (System_String_o *)Instance, 0LL);
    }
    currentAPLabel = (UnityEngine_Object_o *)this->fields.currentAPLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(currentAPLabel, 0LL, 0LL) )
    {
      v13 = this->fields.currentAPLabel;
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        if ( WarBoardManager__EnableAction(Instance, 0LL) )
        {
          v14 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15460/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
        }
        v15 = System_Int32__ToString((int32_t)&v17, 0LL);
        Instance = (WarBoardManager_o *)System_String__Concat_44758168(v14, v15, 0LL);
        if ( v13 )
        {
          UILabel__set_text(v13, (System_String_o *)Instance, 0LL);
          return;
        }
      }
LABEL_48:
      sub_B7076C(Instance, v6);
    }
  }
}


void __fastcall WarBoardPlayingUIController__SetBlinkNextTurnButton(
        WarBoardPlayingUIController_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTurnButtonBlink; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_43539B5 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43539B5 = 1;
  }
  nextTurnButtonBlink = (UnityEngine_Object_o *)this->fields.nextTurnButtonBlink;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nextTurnButtonBlink, 0LL, 0LL) )
  {
    v7 = this->fields.nextTurnButtonBlink;
    if ( !v7 )
      sub_B7076C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, value, 0LL);
  }
}


void __fastcall WarBoardPlayingUIController__SetHeaderTitle(
        WarBoardPlayingUIController_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_43539B8 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43539B8 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v7 = this->fields.titleLabel;
    if ( !v7 )
      sub_B7076C(0LL, v6);
    UILabel__set_text(v7, name, 0LL);
  }
}


void __fastcall WarBoardPlayingUIController__SetNPCTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nextTurnButton; // x20
  __int64 v4; // x1
  struct UICommonButton_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_43539B3 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43539B3 = 1;
  }
  nextTurnButton = (UnityEngine_Object_o *)this->fields.nextTurnButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nextTurnButton, 0LL, 0LL) )
  {
    v5 = this->fields.nextTurnButton;
    if ( !v5 || (UICommonButton__SetButtonEnable(v5, 0, 1, 0LL), (v5 = this->fields.nextTurnButton) == 0LL) )
      sub_B7076C(v5, v4);
    v5->fields.tweenTargets = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&v5->fields.tweenTargets, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall WarBoardPlayingUIController__SetPlayerTurn(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTurnButton; // x20
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UICommonButton_o *v11; // x0
  System_Int32_array **nextTurnButtonTweenObjectCache; // x1

  if ( (byte_43539B2 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43539B2 = 1;
  }
  nextTurnButton = (UnityEngine_Object_o *)this->fields.nextTurnButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nextTurnButton, 0LL, 0LL) )
  {
    v11 = this->fields.nextTurnButton;
    if ( !v11
      || (nextTurnButtonTweenObjectCache = (System_Int32_array **)this->fields.nextTurnButtonTweenObjectCache,
          v11->fields.tweenTargets = (struct UnityEngine_GameObject_array *)nextTurnButtonTweenObjectCache,
          sub_B70630(
            (BattleServantConfConponent_o *)&v11->fields.tweenTargets,
            nextTurnButtonTweenObjectCache,
            v5,
            v6,
            v7,
            v8,
            v9,
            v10),
          (v11 = this->fields.nextTurnButton) == 0LL) )
    {
      sub_B7076C(v11, v4);
    }
    UICommonButton__SetButtonEnable(v11, 1, 1, 0LL);
  }
}


void __fastcall WarBoardPlayingUIController__SetTimeAccelerateAnimation(
        WarBoardPlayingUIController_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardSkipPrefab; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_43539B9 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43539B9 = 1;
  }
  boardSkipPrefab = (UnityEngine_Object_o *)this->fields.boardSkipPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(boardSkipPrefab, 0LL, 0LL) )
  {
    v7 = this->fields.boardSkipPrefab;
    if ( !v7 )
      sub_B7076C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isDisp, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPlayingUIController__SetTurn(
        WarBoardPlayingUIController_o *this,
        bool isPlayer,
        int32_t turnCount,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *playerTurnRoot; // x0
  System_String_o *v8; // x21
  __int64 v9; // x2
  Il2CppObject *v10; // x0
  System_String_o *v11; // x20
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43539B7 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_15485/*"WARBOARD_TURN_BASE"*/);
    byte_43539B7 = 1;
  }
  playerTurnRoot = this->fields.playerTurnRoot;
  if ( !playerTurnRoot )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(playerTurnRoot, isPlayer, 0LL);
  playerTurnRoot = this->fields.enemyTurnRoot;
  if ( !playerTurnRoot )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(playerTurnRoot, !isPlayer, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15485/*"WARBOARD_TURN_BASE"*/, 0LL);
  v12 = turnCount;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  playerTurnRoot = (UnityEngine_GameObject_o *)System_String__Format(v8, v10, 0LL);
  if ( !this->fields.playerTurnLabel
    || (v11 = (System_String_o *)playerTurnRoot,
        UILabel__set_text(this->fields.playerTurnLabel, (System_String_o *)playerTurnRoot, 0LL),
        (playerTurnRoot = (UnityEngine_GameObject_o *)this->fields.enemyTurnLabel) == 0LL) )
  {
LABEL_11:
    sub_B7076C(playerTurnRoot, isPlayer);
  }
  UILabel__set_text((UILabel_o *)playerTurnRoot, v11, 0LL);
}


void __fastcall WarBoardPlayingUIController__SuspendResponse(
        WarBoardPlayingUIController_o *this,
        System_String_o *response,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_43539BE & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_43539BE = 1;
  }
  if ( !System_String__op_Equality(response, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v5);
    AvalonSceneManager__transitionSceneRefresh(Instance, 9, 1, 0LL, 0, 0LL);
  }
}


void __fastcall WarBoardPlayingUIController__Update(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  _QWORD *v5; // x20
  int v6; // w8
  UILabel_o *getTreasureLabel; // x21
  UISprite_o *getTreasureIcon; // x19
  __int64 v9; // x2
  Il2CppObject *v10; // x0
  int32_t ExpensiveIcon; // [xsp+8h] [xbp-18h] BYREF
  int v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_43539BA & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&StringLiteral_19631/*"icon_drop_item_{0:00}"*/);
    byte_43539BA = 1;
  }
  v12 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v5 = Instance;
  Instance = (void *)*((_QWORD *)Instance + 54);
  if ( !Instance )
    goto LABEL_11;
  Instance = WarBoardData__GetTreasureIdList((WarBoardData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_11;
  v6 = *((_DWORD *)Instance + 6);
  v12 = v6;
  Instance = this->fields.getTreasureRoot;
  if ( !Instance )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v6 > 0, 0LL);
  getTreasureLabel = this->fields.getTreasureLabel;
  Instance = System_Int32__ToString((int32_t)&v12, 0LL);
  if ( !getTreasureLabel
    || (UILabel__set_text(getTreasureLabel, (System_String_o *)Instance, 0LL), (Instance = (void *)v5[54]) == 0LL)
    || (getTreasureIcon = this->fields.getTreasureIcon,
        ExpensiveIcon = WarBoardData__GetExpensiveIcon((WarBoardData_o *)Instance, 0LL),
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExpensiveIcon, v9),
        Instance = System_String__Format((System_String_o *)StringLiteral_19631/*"icon_drop_item_{0:00}"*/, v10, 0LL),
        !getTreasureIcon) )
  {
LABEL_11:
    sub_B7076C(Instance, v4);
  }
  UISprite__set_spriteName(getTreasureIcon, (System_String_o *)Instance, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardPlayingUIController__get_EventInfoAnimRoot(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  return this->fields.eventInfoAnimRoot;
}


void __fastcall WarBoardPlayingUIController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434FC8D & 1) == 0 )
  {
    sub_B70694(&WarBoardPlayingUIController___c_TypeInfo);
    byte_434FC8D = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(WarBoardPlayingUIController___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardPlayingUIController___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  TerminalPramsManager_c *v2; // x0
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_434FC8E & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434FC8E = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEAC )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEAC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  WarBoardManager__Exit((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardPlayingUIController___c__DisplayClass26_0___ctor(
        WarBoardPlayingUIController___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPlayingUIController___c__DisplayClass26_0___OnClickNextTurn_b__0(
        WarBoardPlayingUIController___c__DisplayClass26_0_o *this,
        bool ok,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  WebViewManager_o *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_434FC8F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__);
    sub_B70694(&WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo);
    byte_434FC8F = 1;
  }
  v5 = sub_B70764(WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 16) = ok,
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v15 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__,
          0LL),
        !Instance) )
  {
    sub_B7076C(v6, v7);
  }
  WarBoardManager__HideTurnEndConfirmPopup((WarBoardManager_o *)Instance, v15, 0LL);
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

  if ( this->fields.ok )
  {
    CS___8__locals1 = this->fields.CS___8__locals1;
    if ( !CS___8__locals1
      || (this = (WarBoardPlayingUIController___c__DisplayClass26_1_o *)CS___8__locals1->fields.warBoardManager) == 0LL )
    {
      sub_B7076C(this, method);
    }
    WarBoardManager__NextTurn((WarBoardManager_o *)this, 0LL);
  }
}