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
    sub_B2C434(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPlayingUIController__Awake(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *UIAtlas; // x20
  UILabel_o *nextTurnObject; // x0
  __int64 v9; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  UnityEngine_Object_o *splitAPLabel; // x21
  UIFont_o *v12; // x20
  UnityEngine_Object_o *maxAPLabel; // x21
  UnityEngine_Object_o *currentAPLabel; // x21
  UnityEngine_Object_o *nextTurnButtonBlinkPrefab; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UnityEngine_GameObject_o *v22; // x20
  UnityEngine_Transform_o *transform; // x21
  struct UnityEngine_GameObject_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UICommonButton_o **p_nextTurnButton; // x22
  UnityEngine_Transform_o *v32; // x21
  int v33; // s0
  UnityEngine_Object_o *Child; // x20
  UnityEngine_Vector2_o zero; // kr00_8
  int v38; // s2
  struct UnityEngine_GameObject_array *tweenTargets; // x1

  if ( (byte_4189225 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIFont___, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_GameObject___, v5);
    sub_B2C35C(&StringLiteral_6741/*"Fonts/FGO-NumberFont-02"*/, v6);
    byte_4189225 = 1;
  }
  UIAtlas = (UnityEngine_Object_o *)UnityEngine_Resources__Load_UIAtlas_(
                                      (System_String_o *)StringLiteral_6741/*"Fonts/FGO-NumberFont-02"*/,
                                      (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_GameObject___);
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
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    splitAPLabel = (UnityEngine_Object_o *)this->fields.splitAPLabel;
    v12 = (UIFont_o *)Component_srcLineSprite;
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
      UILabel__set_bitmapFont(nextTurnObject, v12, 0LL);
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
      UILabel__set_bitmapFont(nextTurnObject, v12, 0LL);
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
      UILabel__set_bitmapFont(nextTurnObject, v12, 0LL);
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
    v22 = this->fields.nextTurnButtonBlinkPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nextTurnObject, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v24 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                               (UILabel_o *)v22,
                                               transform,
                                               (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
    this->fields.nextTurnButtonBlink = v24;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.nextTurnButtonBlink,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    nextTurnObject = (UILabel_o *)this->fields.nextTurnButtonBlink;
    if ( !nextTurnObject
      || (nextTurnObject = (UILabel_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)nextTurnObject,
                                          0LL),
          p_nextTurnButton = &this->fields.nextTurnButton,
          !this->fields.nextTurnButton)
      || (v32 = (UnityEngine_Transform_o *)nextTurnObject,
          (nextTurnObject = (UILabel_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)this->fields.nextTurnButton,
                                           0LL)) == 0LL)
      || (*(UnityEngine_Vector3_o *)&v33 = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)nextTurnObject,
                                             0LL),
          !v32) )
    {
LABEL_44:
      sub_B2C434(nextTurnObject, v9);
    }
    UnityEngine_Transform__set_localPosition(v32, *(UnityEngine_Vector3_o *)&v33, 0LL);
    Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(this->fields.nextTurnButtonBlink, 0, 0LL);
    nextTurnObject = (UILabel_o *)UnityEngine_Object__op_Inequality(Child, 0LL, 0LL);
    if ( ((unsigned __int8)nextTurnObject & 1) != 0 )
    {
      zero = UnityEngine_Vector2__get_zero(0LL);
      if ( !Child )
        goto LABEL_44;
      v38 = 0;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.nextTurnButtonTweenObjectCache,
    (System_Int32_array **)tweenTargets,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall WarBoardPlayingUIController__CallbackBackButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4189234 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4189234 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__CallbackRetireButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  WarBoardManager_o *v7; // x19
  WarBoardPlayingUIController___c_c *v8; // x8
  struct WarBoardPlayingUIController___c_StaticFields *static_fields; // x9
  System_Action_o *_9__40_0; // x20
  Il2CppObject *v11; // x21
  struct WarBoardPlayingUIController___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4189233 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    sub_B2C35C(&Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__, v3);
    sub_B2C35C(&WarBoardPlayingUIController___c_TypeInfo, v4);
    byte_4189233 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v7 = (WarBoardManager_o *)Instance;
  v8 = WarBoardPlayingUIController___c_TypeInfo;
  if ( (BYTE3(WarBoardPlayingUIController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPlayingUIController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPlayingUIController___c_TypeInfo);
    v8 = WarBoardPlayingUIController___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__40_0 = static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = WarBoardPlayingUIController___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__40_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__40_0, v11, Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__, 0LL);
    v12 = WarBoardPlayingUIController___c_TypeInfo->static_fields;
    v12->__9__40_0 = _9__40_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__40_0,
      (System_Int32_array **)_9__40_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v7 )
    sub_B2C434(Instance, v6);
  WarBoardManager__Retire(v7, _9__40_0, 0LL);
}


void __fastcall WarBoardPlayingUIController__CallbackSuspendButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  WarBoardResumeRequest_o *Request_WarBoardWallAttackRequest; // x19
  WebViewManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4189231 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_WarBoardResumeRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    sub_B2C35C(&Method_WarBoardPlayingUIController_SuspendResponse__, v6);
    byte_4189231 = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_WarBoardPlayingUIController_SuspendResponse__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (WarBoardResumeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v7,
                                                                   (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_WarBoardResumeRequest___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || !Request_WarBoardWallAttackRequest )
    sub_B2C434(Instance, v10);
  WarBoardResumeRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    *(WarBoardData_o **)&Instance[4].fields.m_CachedPtr,
    v11);
}


void __fastcall WarBoardPlayingUIController__Deactive(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__NondispTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *playerTurnRoot; // x0

  playerTurnRoot = this->fields.playerTurnRoot;
  if ( !playerTurnRoot
    || (UnityEngine_GameObject__SetActive(playerTurnRoot, 0, 0LL), (playerTurnRoot = this->fields.enemyTurnRoot) == 0LL) )
  {
    sub_B2C434(playerTurnRoot, method);
  }
  UnityEngine_GameObject__SetActive(playerTurnRoot, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__OnClickNextTurn(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x19
  System_Int32_array **Instance; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array ***v16; // x20
  WebViewManager_o *v17; // x20
  System_Action_bool__o *v18; // x21

  if ( (byte_418922A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, method);
    sub_B2C35C(&System_Action_bool__TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__, v5);
    sub_B2C35C(&WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo, v6);
    byte_418922A = 1;
  }
  v7 = sub_B2C42C(WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo);
  WarBoardPlayingUIController___c__DisplayClass26_0___ctor(
    (WarBoardPlayingUIController___c__DisplayClass26_0_o *)v7,
    0LL);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v7 )
    goto LABEL_17;
  *(_QWORD *)(v7 + 16) = Instance;
  v16 = (System_Int32_array ***)(v7 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 16), Instance, v10, v11, v12, v13, v14, v15);
  Instance = *(System_Int32_array ***)(v7 + 16);
  if ( !Instance )
    goto LABEL_17;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  Instance = *v16;
  if ( !*v16 )
    goto LABEL_17;
  if ( WarBoardManager__ExistEnableActionPieceExtend((WarBoardManager_o *)Instance, 0LL) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v18 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v18,
      (Il2CppObject *)v7,
      Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__,
      (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
    if ( v17 )
    {
      WarBoardManager__ShowTurnEndConfirmPopup((WarBoardManager_o *)v17, v18, 0LL);
      return;
    }
LABEL_17:
    sub_B2C434(Instance, v9);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(8, 0LL);
  Instance = *v16;
  if ( !*v16 )
    goto LABEL_17;
  WarBoardManager__NextTurn((WarBoardManager_o *)Instance, 0LL);
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
  WarBoardManager_o *Instance; // x0
  __int64 v12; // x1
  struct UnityEngine_GameObject_o *backPrefab; // x20
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  WarBoardBackMenuComponent_o *v16; // x20
  System_Action_o *v17; // x21
  System_Action_o *v18; // x22
  System_Action_o *v19; // x23

  if ( (byte_4189230 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___, v3);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&Method_WarBoardPlayingUIController_CallbackBackButton__, v8);
    sub_B2C35C(&Method_WarBoardPlayingUIController_CallbackRetireButton__, v9);
    sub_B2C35C(&Method_WarBoardPlayingUIController_CallbackSuspendButton__, v10);
    byte_4189230 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
  backPrefab = this->fields.backPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)backPrefab,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_31331952(v14, gameObject, 0LL);
  GameObjectExtensions__ResetLocalScale(v14, 0LL);
  if ( !v14
    || (Instance = (WarBoardManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v14,
                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___)) == 0LL )
  {
LABEL_14:
    sub_B2C434(Instance, v12);
  }
  v16 = (WarBoardBackMenuComponent_o *)Instance;
  WarBoardBackMenuComponent__Init((WarBoardBackMenuComponent_o *)Instance, 0LL);
  v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackSuspendButton__, 0LL);
  v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackRetireButton__, 0LL);
  v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0LL);
  WarBoardBackMenuComponent__Open(v16, v17, v18, v19, 0LL);
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
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v11; // x1
  struct UnityEngine_GameObject_o *treasureListPrefab; // x21
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  WarBoardTreasureListComponent_o *v15; // x21
  System_Int32_array *TreasureIdList; // x20
  System_Action_o *v17; // x22

  if ( (byte_418922F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___, v3);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&SeManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_B2C35C(&Method_WarBoardPlayingUIController_CallbackBackButton__, v8);
    byte_418922F = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)treasureListPrefab,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_31331952(v13, gameObject, 0LL);
  GameObjectExtensions__ResetLocalScale(v13, 0LL);
  if ( !v13
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v13,
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___)) == 0LL
    || (v15 = (WarBoardTreasureListComponent_o *)Component_srcLineSprite,
        WarBoardTreasureListComponent__Init((WarBoardTreasureListComponent_o *)Component_srcLineSprite, 0LL),
        (Component_srcLineSprite = (srcLineSprite_o *)Instance->fields._warBoardData_k__BackingField) == 0LL) )
  {
LABEL_14:
    sub_B2C434(Component_srcLineSprite, v11);
  }
  TreasureIdList = WarBoardData__GetTreasureIdList((WarBoardData_o *)Component_srcLineSprite, 0LL);
  v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0LL);
  WarBoardTreasureListComponent__Open(v15, TreasureIdList, 2, v17, 0LL);
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

  if ( (byte_4189235 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189235 = 1;
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
    UnityEngine_Object__Destroy_35314896(klass, 0LL);
    p_nextTurnButtonBlink->klass = 0LL;
    sub_B2C2F8(p_nextTurnButtonBlink, 0LL, v7, v8, v9, v10, v11, v12);
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
  WarBoardManager_o *Instance; // x0
  _BOOL8 v11; // x1
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *splitAPLabel; // x20
  UILabel_o *v14; // x20
  UnityEngine_Object_o *maxAPLabel; // x20
  UILabel_o *v16; // x20
  UnityEngine_Object_o *currentAPLabel; // x20
  UILabel_o *v18; // x19
  System_String_o *v19; // x20
  System_String_o *v20; // x0
  int32_t v21; // [xsp+8h] [xbp-28h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  v21 = max;
  v22 = current;
  if ( (byte_4189228 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&current);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_15271/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    sub_B2C35C(&StringLiteral_15270/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v9);
    byte_4189228 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (WarBoardManager_o *)WarBoardManager__EnableAction(Instance, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v11 = 0LL;
    if ( !this )
      goto LABEL_48;
  }
  else
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    Instance = (WarBoardManager_o *)WarBoardManager__IsPlayerTurn(Instance, 0LL);
    v11 = (unsigned __int8)Instance & 1;
    if ( !this )
      goto LABEL_48;
  }
  WarBoardPlayingUIController__SetBlinkNextTurnButton(this, v11, v12);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  if ( Instance->fields._controllType_k__BackingField != 2 )
    goto LABEL_16;
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  if ( !WarBoardManager__get_warBoardActionPointEntity(Instance, 0LL) )
    goto LABEL_16;
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      v14 = this->fields.splitAPLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (WarBoardManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15271/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
      if ( !v14 )
        goto LABEL_48;
      UILabel__set_text(v14, (System_String_o *)Instance, 0LL);
    }
    maxAPLabel = (UnityEngine_Object_o *)this->fields.maxAPLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(maxAPLabel, 0LL, 0LL) )
    {
      v16 = this->fields.maxAPLabel;
      Instance = (WarBoardManager_o *)System_Int32__ToString((int32_t)&v21, 0LL);
      if ( !v16 )
        goto LABEL_48;
      UILabel__set_text(v16, (System_String_o *)Instance, 0LL);
    }
    currentAPLabel = (UnityEngine_Object_o *)this->fields.currentAPLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(currentAPLabel, 0LL, 0LL) )
    {
      v18 = this->fields.currentAPLabel;
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        if ( WarBoardManager__EnableAction(Instance, 0LL) )
        {
          v19 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_15270/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
        }
        v20 = System_Int32__ToString((int32_t)&v22, 0LL);
        Instance = (WarBoardManager_o *)System_String__Concat_44305532(v19, v20, 0LL);
        if ( v18 )
        {
          UILabel__set_text(v18, (System_String_o *)Instance, 0LL);
          return;
        }
      }
LABEL_48:
      sub_B2C434(Instance, v11);
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
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4189229 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, value);
    byte_4189229 = 1;
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
      sub_B2C434(0LL, v6);
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

  if ( (byte_418922C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, name);
    byte_418922C = 1;
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
      sub_B2C434(0LL, v6);
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

  if ( (byte_4189227 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189227 = 1;
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
      sub_B2C434(v5, v4);
    v5->fields.tweenTargets = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&v5->fields.tweenTargets, 0LL, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4189226 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189226 = 1;
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
          sub_B2C2F8(
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
      sub_B2C434(v11, v4);
    }
    UICommonButton__SetButtonEnable(v11, 1, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPlayingUIController__SetTimeAccelerateAnimation(
        WarBoardPlayingUIController_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardSkipPrefab; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_418922D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isDisp);
    byte_418922D = 1;
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
      sub_B2C434(0LL, v6);
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
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *playerTurnRoot; // x0
  System_String_o *v10; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418922B & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, isPlayer);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_15295/*"WARBOARD_TURN_BASE"*/, v8);
    byte_418922B = 1;
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
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15295/*"WARBOARD_TURN_BASE"*/, 0LL);
  v13 = turnCount;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  playerTurnRoot = (UnityEngine_GameObject_o *)System_String__Format(v10, v11, 0LL);
  if ( !this->fields.playerTurnLabel
    || (v12 = (System_String_o *)playerTurnRoot,
        UILabel__set_text(this->fields.playerTurnLabel, (System_String_o *)playerTurnRoot, 0LL),
        (playerTurnRoot = (UnityEngine_GameObject_o *)this->fields.enemyTurnLabel) == 0LL) )
  {
LABEL_11:
    sub_B2C434(playerTurnRoot, isPlayer);
  }
  UILabel__set_text((UILabel_o *)playerTurnRoot, v12, 0LL);
}


void __fastcall WarBoardPlayingUIController__SuspendResponse(
        WarBoardPlayingUIController_o *this,
        System_String_o *response,
        const MethodInfo *method)
{
  __int64 v4; // x1
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4189232 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, response);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v4);
    byte_4189232 = 1;
  }
  if ( !System_String__op_Equality(response, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v6);
    AvalonSceneManager__transitionSceneRefresh(Instance, 9, 1, 0LL, 0, 0LL);
  }
}


void __fastcall WarBoardPlayingUIController__Update(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *Instance; // x0
  __int64 v6; // x1
  _QWORD *v7; // x20
  int v8; // w8
  UILabel_o *getTreasureLabel; // x21
  UISprite_o *getTreasureIcon; // x19
  Il2CppObject *v11; // x0
  int32_t ExpensiveIcon; // [xsp+8h] [xbp-18h] BYREF
  int v13; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418922E & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_19329/*"icon_drop_item_{0:00}"*/, v4);
    byte_418922E = 1;
  }
  v13 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v7 = Instance;
  Instance = (void *)*((_QWORD *)Instance + 54);
  if ( !Instance )
    goto LABEL_11;
  Instance = WarBoardData__GetTreasureIdList((WarBoardData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_11;
  v8 = *((_DWORD *)Instance + 6);
  v13 = v8;
  Instance = this->fields.getTreasureRoot;
  if ( !Instance )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v8 > 0, 0LL);
  getTreasureLabel = this->fields.getTreasureLabel;
  Instance = System_Int32__ToString((int32_t)&v13, 0LL);
  if ( !getTreasureLabel
    || (UILabel__set_text(getTreasureLabel, (System_String_o *)Instance, 0LL), (Instance = (void *)v7[54]) == 0LL)
    || (getTreasureIcon = this->fields.getTreasureIcon,
        ExpensiveIcon = WarBoardData__GetExpensiveIcon((WarBoardData_o *)Instance, 0LL),
        v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExpensiveIcon),
        Instance = System_String__Format((System_String_o *)StringLiteral_19329/*"icon_drop_item_{0:00}"*/, v11, 0LL),
        !getTreasureIcon) )
  {
LABEL_11:
    sub_B2C434(Instance, v6);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186713 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardPlayingUIController___c_TypeInfo, v1);
    byte_4186713 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardPlayingUIController___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardPlayingUIController___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
  __int64 v5; // x1

  if ( (byte_4186714 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v2);
    byte_4186714 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C70 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4183C70 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  WebViewManager_o *Instance; // x19
  System_Action_o *v18; // x20

  if ( (byte_4186715 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, ok);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    sub_B2C35C(&Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__, v6);
    sub_B2C35C(&WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo, v7);
    byte_4186715 = 1;
  }
  v8 = sub_B2C42C(WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v8 + 16) = ok,
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v8,
          Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__,
          0LL),
        !Instance) )
  {
    sub_B2C434(v9, v10);
  }
  WarBoardManager__HideTurnEndConfirmPopup((WarBoardManager_o *)Instance, v18, 0LL);
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
      sub_B2C434(this, method);
    }
    WarBoardManager__NextTurn((WarBoardManager_o *)this, 0LL);
  }
}