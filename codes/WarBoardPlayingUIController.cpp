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
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPlayingUIController__Awake(WarBoardPlayingUIController_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *UIAtlas; // x20
  UILabel_o *nextTurnObject; // x0
  __int64 v19; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  UnityEngine_Object_o *splitAPLabel; // x21
  UIFont_o *v22; // x20
  UnityEngine_Object_o *maxAPLabel; // x21
  UnityEngine_Object_o *currentAPLabel; // x21
  UnityEngine_Object_o *nextTurnButtonBlinkPrefab; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct UnityEngine_GameObject_o *v32; // x20
  UnityEngine_Transform_o *transform; // x21
  struct UnityEngine_GameObject_o *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct UICommonButton_o **p_nextTurnButton; // x22
  UnityEngine_Transform_o *v42; // x21
  int v43; // s0
  UnityEngine_Object_o *Child; // x20
  UnityEngine_Vector2_o zero; // kr00_8
  int v48; // s2
  struct UnityEngine_GameObject_array *tweenTargets; // x1

  if ( (byte_42EAB05 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIFont___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_GameObject___, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6823/*"Fonts/FGO-NumberFont-02"*/, v14, v15, v16);
    byte_42EAB05 = 1;
  }
  UIAtlas = (UnityEngine_Object_o *)UnityEngine_Resources__Load_UIAtlas_(
                                      (System_String_o *)StringLiteral_6823/*"Fonts/FGO-NumberFont-02"*/,
                                      (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_GameObject___);
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
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    splitAPLabel = (UnityEngine_Object_o *)this->fields.splitAPLabel;
    v22 = (UIFont_o *)Component_srcLineSprite;
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
      UILabel__set_bitmapFont(nextTurnObject, v22, 0LL);
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
      UILabel__set_bitmapFont(nextTurnObject, v22, 0LL);
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
      UILabel__set_bitmapFont(nextTurnObject, v22, 0LL);
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
    v32 = this->fields.nextTurnButtonBlinkPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nextTurnObject, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v34 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                               (UILabel_o *)v32,
                                               transform,
                                               (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
    this->fields.nextTurnButtonBlink = v34;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.nextTurnButtonBlink,
      (System_Int32_array **)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    nextTurnObject = (UILabel_o *)this->fields.nextTurnButtonBlink;
    if ( !nextTurnObject
      || (nextTurnObject = (UILabel_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)nextTurnObject,
                                          0LL),
          p_nextTurnButton = &this->fields.nextTurnButton,
          !this->fields.nextTurnButton)
      || (v42 = (UnityEngine_Transform_o *)nextTurnObject,
          (nextTurnObject = (UILabel_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)this->fields.nextTurnButton,
                                           0LL)) == 0LL)
      || (*(UnityEngine_Vector3_o *)&v43 = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)nextTurnObject,
                                             0LL),
          !v42) )
    {
LABEL_44:
      sub_B5D69C(nextTurnObject, v19);
    }
    UnityEngine_Transform__set_localPosition(v42, *(UnityEngine_Vector3_o *)&v43, 0LL);
    Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(this->fields.nextTurnButtonBlink, 0, 0LL);
    nextTurnObject = (UILabel_o *)UnityEngine_Object__op_Inequality(Child, 0LL, 0LL);
    if ( ((unsigned __int8)nextTurnObject & 1) != 0 )
    {
      zero = UnityEngine_Vector2__get_zero(0LL);
      if ( !Child )
        goto LABEL_44;
      v48 = 0;
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.nextTurnButtonTweenObjectCache,
    (System_Int32_array **)tweenTargets,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


void __fastcall WarBoardPlayingUIController__CallbackBackButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42EAB14 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EAB14 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__CallbackRetireButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  WebViewManager_o *Instance; // x0
  __int64 v14; // x1
  WarBoardManager_o *v15; // x19
  WarBoardPlayingUIController___c_c *v16; // x8
  struct WarBoardPlayingUIController___c_StaticFields *static_fields; // x9
  System_Action_o *_9__40_0; // x20
  Il2CppObject *v19; // x21
  struct WarBoardPlayingUIController___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42EAB13 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4, v5, v6);
    sub_B5D5C4(&Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__, v7, v8, v9);
    sub_B5D5C4(&WarBoardPlayingUIController___c_TypeInfo, v10, v11, v12);
    byte_42EAB13 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v15 = (WarBoardManager_o *)Instance;
  v16 = WarBoardPlayingUIController___c_TypeInfo;
  if ( (BYTE3(WarBoardPlayingUIController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPlayingUIController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPlayingUIController___c_TypeInfo);
    v16 = WarBoardPlayingUIController___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__40_0 = static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = WarBoardPlayingUIController___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__40_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__40_0, v19, Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__, 0LL);
    v20 = WarBoardPlayingUIController___c_TypeInfo->static_fields;
    v20->__9__40_0 = _9__40_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v20->__9__40_0,
      (System_Int32_array **)_9__40_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !v15 )
    sub_B5D69C(Instance, v14);
  WarBoardManager__Retire(v15, _9__40_0, 0LL);
}


void __fastcall WarBoardPlayingUIController__CallbackSuspendButton(
        WarBoardPlayingUIController_o *this,
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
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  WarBoardResumeRequest_o *Request_WarBoardWallAttackRequest; // x19
  WebViewManager_o *Instance; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2

  if ( (byte_42EAB11 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_WarBoardResumeRequest___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_WarBoardPlayingUIController_SuspendResponse__, v14, v15, v16);
    byte_42EAB11 = 1;
  }
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_WarBoardPlayingUIController_SuspendResponse__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (WarBoardResumeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v17,
                                                                   (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_WarBoardResumeRequest___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || !Request_WarBoardWallAttackRequest )
    sub_B5D69C(Instance, v20);
  WarBoardResumeRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    *(WarBoardData_o **)&Instance[4].fields.m_CachedPtr,
    v21);
}


void __fastcall WarBoardPlayingUIController__Deactive(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__NondispTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *playerTurnRoot; // x0

  playerTurnRoot = this->fields.playerTurnRoot;
  if ( !playerTurnRoot
    || (UnityEngine_GameObject__SetActive(playerTurnRoot, 0, 0LL), (playerTurnRoot = this->fields.enemyTurnRoot) == 0LL) )
  {
    sub_B5D69C(playerTurnRoot, method);
  }
  UnityEngine_GameObject__SetActive(playerTurnRoot, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__OnClickNextTurn(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 v19; // x19
  System_Int32_array **Instance; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array ***v28; // x20
  WebViewManager_o *v29; // x20
  System_Action_bool__o *v30; // x21

  if ( (byte_42EAB0A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&SoundManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__, v13, v14, v15);
    sub_B5D5C4(&WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo, v16, v17, v18);
    byte_42EAB0A = 1;
  }
  v19 = sub_B5D694(WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo);
  WarBoardPlayingUIController___c__DisplayClass26_0___ctor(
    (WarBoardPlayingUIController___c__DisplayClass26_0_o *)v19,
    0LL);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v19 )
    goto LABEL_17;
  *(_QWORD *)(v19 + 16) = Instance;
  v28 = (System_Int32_array ***)(v19 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v19 + 16), Instance, v22, v23, v24, v25, v26, v27);
  Instance = *(System_Int32_array ***)(v19 + 16);
  if ( !Instance )
    goto LABEL_17;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  Instance = *v28;
  if ( !*v28 )
    goto LABEL_17;
  if ( WarBoardManager__ExistEnableActionPieceExtend((WarBoardManager_o *)Instance, 0LL) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v30 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v30,
      (Il2CppObject *)v19,
      Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__,
      (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
    if ( v29 )
    {
      WarBoardManager__ShowTurnEndConfirmPopup((WarBoardManager_o *)v29, v30, 0LL);
      return;
    }
LABEL_17:
    sub_B5D69C(Instance, v21);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(8, 0LL);
  Instance = *v28;
  if ( !*v28 )
    goto LABEL_17;
  WarBoardManager__NextTurn((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardPlayingUIController__OnClickReturnButton(
        WarBoardPlayingUIController_o *this,
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
  WarBoardManager_o *Instance; // x0
  __int64 v30; // x1
  struct UnityEngine_GameObject_o *backPrefab; // x20
  UnityEngine_GameObject_o *v32; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  WarBoardBackMenuComponent_o *v34; // x20
  System_Action_o *v35; // x21
  System_Action_o *v36; // x22
  System_Action_o *v37; // x23

  if ( (byte_42EAB10 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&SoundManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_WarBoardPlayingUIController_CallbackBackButton__, v20, v21, v22);
    sub_B5D5C4(&Method_WarBoardPlayingUIController_CallbackRetireButton__, v23, v24, v25);
    sub_B5D5C4(&Method_WarBoardPlayingUIController_CallbackSuspendButton__, v26, v27, v28);
    byte_42EAB10 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
  backPrefab = this->fields.backPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v32 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)backPrefab,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_32436524(v32, gameObject, 0LL);
  GameObjectExtensions__ResetLocalScale(v32, 0LL);
  if ( !v32
    || (Instance = (WarBoardManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v32,
                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___)) == 0LL )
  {
LABEL_14:
    sub_B5D69C(Instance, v30);
  }
  v34 = (WarBoardBackMenuComponent_o *)Instance;
  WarBoardBackMenuComponent__Init((WarBoardBackMenuComponent_o *)Instance, 0LL);
  v35 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackSuspendButton__, 0LL);
  v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackRetireButton__, 0LL);
  v37 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0LL);
  WarBoardBackMenuComponent__Open(v34, v35, v36, v37, 0LL);
}


void __fastcall WarBoardPlayingUIController__OnClickTreasureButton(
        WarBoardPlayingUIController_o *this,
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
  WarBoardManager_o *Instance; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v25; // x1
  struct UnityEngine_GameObject_o *treasureListPrefab; // x21
  UnityEngine_GameObject_o *v27; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  WarBoardTreasureListComponent_o *v29; // x21
  System_Int32_array *TreasureIdList; // x20
  System_Action_o *v31; // x22

  if ( (byte_42EAB0F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SeManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_WarBoardPlayingUIController_CallbackBackButton__, v20, v21, v22);
    byte_42EAB0F = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v27 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)treasureListPrefab,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_32436524(v27, gameObject, 0LL);
  GameObjectExtensions__ResetLocalScale(v27, 0LL);
  if ( !v27
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v27,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___)) == 0LL
    || (v29 = (WarBoardTreasureListComponent_o *)Component_srcLineSprite,
        WarBoardTreasureListComponent__Init((WarBoardTreasureListComponent_o *)Component_srcLineSprite, 0LL),
        (Component_srcLineSprite = (srcLineSprite_o *)Instance->fields._warBoardData_k__BackingField) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(Component_srcLineSprite, v25);
  }
  TreasureIdList = WarBoardData__GetTreasureIdList((WarBoardData_o *)Component_srcLineSprite, 0LL);
  v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0LL);
  WarBoardTreasureListComponent__Open(v29, TreasureIdList, 2, v31, 0LL);
}


void __fastcall WarBoardPlayingUIController__OnDestroy(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_nextTurnButtonBlink; // x19
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_o *nextTurnButtonBlink; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EAB15 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAB15 = 1;
  }
  nextTurnButtonBlink = this->fields.nextTurnButtonBlink;
  p_nextTurnButtonBlink = (BattleServantConfConponent_o *)&this->fields.nextTurnButtonBlink;
  v6 = (UnityEngine_Object_o *)nextTurnButtonBlink;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_nextTurnButtonBlink->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(klass, 0LL);
    p_nextTurnButtonBlink->klass = 0LL;
    sub_B5D560(p_nextTurnButtonBlink, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall WarBoardPlayingUIController__SetActionPoint(
        WarBoardPlayingUIController_o *this,
        int32_t current,
        int32_t max,
        const MethodInfo *method)
{
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
  WarBoardManager_o *Instance; // x0
  _BOOL8 v21; // x1
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *splitAPLabel; // x20
  UILabel_o *v24; // x20
  UnityEngine_Object_o *maxAPLabel; // x20
  UILabel_o *v26; // x20
  UnityEngine_Object_o *currentAPLabel; // x20
  UILabel_o *v28; // x19
  System_String_o *v29; // x20
  System_String_o *v30; // x0
  int32_t v31; // [xsp+8h] [xbp-28h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-24h] BYREF

  v31 = max;
  v32 = current;
  if ( (byte_42EAB08 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, current, max, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_15430/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_15429/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v17, v18, v19);
    byte_42EAB08 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (WarBoardManager_o *)WarBoardManager__EnableAction(Instance, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v21 = 0LL;
    if ( !this )
      goto LABEL_48;
  }
  else
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    Instance = (WarBoardManager_o *)WarBoardManager__IsPlayerTurn(Instance, 0LL);
    v21 = (unsigned __int8)Instance & 1;
    if ( !this )
      goto LABEL_48;
  }
  WarBoardPlayingUIController__SetBlinkNextTurnButton(this, v21, v22);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  if ( Instance->fields._controllType_k__BackingField != 2 )
    goto LABEL_16;
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  if ( !WarBoardManager__get_warBoardActionPointEntity(Instance, 0LL) )
    goto LABEL_16;
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      v24 = this->fields.splitAPLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (WarBoardManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15430/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
      if ( !v24 )
        goto LABEL_48;
      UILabel__set_text(v24, (System_String_o *)Instance, 0LL);
    }
    maxAPLabel = (UnityEngine_Object_o *)this->fields.maxAPLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(maxAPLabel, 0LL, 0LL) )
    {
      v26 = this->fields.maxAPLabel;
      Instance = (WarBoardManager_o *)System_Int32__ToString((int32_t)&v31, 0LL);
      if ( !v26 )
        goto LABEL_48;
      UILabel__set_text(v26, (System_String_o *)Instance, 0LL);
    }
    currentAPLabel = (UnityEngine_Object_o *)this->fields.currentAPLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(currentAPLabel, 0LL, 0LL) )
    {
      v28 = this->fields.currentAPLabel;
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        if ( WarBoardManager__EnableAction(Instance, 0LL) )
        {
          v29 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v29 = LocalizationManager__Get((System_String_o *)StringLiteral_15429/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
        }
        v30 = System_Int32__ToString((int32_t)&v32, 0LL);
        Instance = (WarBoardManager_o *)System_String__Concat_44577788(v29, v30, 0LL);
        if ( v28 )
        {
          UILabel__set_text(v28, (System_String_o *)Instance, 0LL);
          return;
        }
      }
LABEL_48:
      sub_B5D69C(Instance, v21);
    }
  }
}


void __fastcall WarBoardPlayingUIController__SetBlinkNextTurnButton(
        WarBoardPlayingUIController_o *this,
        bool value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *nextTurnButtonBlink; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_42EAB09 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, value, (_DWORD)method, v3);
    byte_42EAB09 = 1;
  }
  nextTurnButtonBlink = (UnityEngine_Object_o *)this->fields.nextTurnButtonBlink;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nextTurnButtonBlink, 0LL, 0LL) )
  {
    v8 = this->fields.nextTurnButtonBlink;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_GameObject__SetActive(v8, value, 0LL);
  }
}


void __fastcall WarBoardPlayingUIController__SetHeaderTitle(
        WarBoardPlayingUIController_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *titleLabel; // x21
  __int64 v7; // x1
  UILabel_o *v8; // x0

  if ( (byte_42EAB0C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    byte_42EAB0C = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v8 = this->fields.titleLabel;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UILabel__set_text(v8, name, 0LL);
  }
}


void __fastcall WarBoardPlayingUIController__SetNPCTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *nextTurnButton; // x20
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EAB07 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAB07 = 1;
  }
  nextTurnButton = (UnityEngine_Object_o *)this->fields.nextTurnButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nextTurnButton, 0LL, 0LL) )
  {
    v7 = this->fields.nextTurnButton;
    if ( !v7 || (UICommonButton__SetButtonEnable(v7, 0, 1, 0LL), (v7 = this->fields.nextTurnButton) == 0LL) )
      sub_B5D69C(v7, v6);
    v7->fields.tweenTargets = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&v7->fields.tweenTargets, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall WarBoardPlayingUIController__SetPlayerTurn(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *nextTurnButton; // x20
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UICommonButton_o *v13; // x0
  System_Int32_array **nextTurnButtonTweenObjectCache; // x1

  if ( (byte_42EAB06 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAB06 = 1;
  }
  nextTurnButton = (UnityEngine_Object_o *)this->fields.nextTurnButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nextTurnButton, 0LL, 0LL) )
  {
    v13 = this->fields.nextTurnButton;
    if ( !v13
      || (nextTurnButtonTweenObjectCache = (System_Int32_array **)this->fields.nextTurnButtonTweenObjectCache,
          v13->fields.tweenTargets = (struct UnityEngine_GameObject_array *)nextTurnButtonTweenObjectCache,
          sub_B5D560(
            (BattleServantConfConponent_o *)&v13->fields.tweenTargets,
            nextTurnButtonTweenObjectCache,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12),
          (v13 = this->fields.nextTurnButton) == 0LL) )
    {
      sub_B5D69C(v13, v6);
    }
    UICommonButton__SetButtonEnable(v13, 1, 1, 0LL);
  }
}


void __fastcall WarBoardPlayingUIController__SetTimeAccelerateAnimation(
        WarBoardPlayingUIController_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *boardSkipPrefab; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_42EAB0D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isDisp, (_DWORD)method, v3);
    byte_42EAB0D = 1;
  }
  boardSkipPrefab = (UnityEngine_Object_o *)this->fields.boardSkipPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(boardSkipPrefab, 0LL, 0LL) )
  {
    v8 = this->fields.boardSkipPrefab;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_GameObject__SetActive(v8, isDisp, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPlayingUIController__SetTurn(
        WarBoardPlayingUIController_o *this,
        bool isPlayer,
        int32_t turnCount,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_GameObject_o *playerTurnRoot; // x0
  System_String_o *v14; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EAB0B & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, isPlayer, turnCount, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_15454/*"WARBOARD_TURN_BASE"*/, v10, v11, v12);
    byte_42EAB0B = 1;
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
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15454/*"WARBOARD_TURN_BASE"*/, 0LL);
  v17 = turnCount;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  playerTurnRoot = (UnityEngine_GameObject_o *)System_String__Format(v14, v15, 0LL);
  if ( !this->fields.playerTurnLabel
    || (v16 = (System_String_o *)playerTurnRoot,
        UILabel__set_text(this->fields.playerTurnLabel, (System_String_o *)playerTurnRoot, 0LL),
        (playerTurnRoot = (UnityEngine_GameObject_o *)this->fields.enemyTurnLabel) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(playerTurnRoot, isPlayer);
  }
  UILabel__set_text((UILabel_o *)playerTurnRoot, v16, 0LL);
}


void __fastcall WarBoardPlayingUIController__SuspendResponse(
        WarBoardPlayingUIController_o *this,
        System_String_o *response,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42EAB12 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)response, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v5, v6, v7);
    byte_42EAB12 = 1;
  }
  if ( !System_String__op_Equality(response, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v9);
    AvalonSceneManager__transitionSceneRefresh(Instance, 9, 1, 0LL, 0, 0LL);
  }
}


void __fastcall WarBoardPlayingUIController__Update(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  void *Instance; // x0
  __int64 v12; // x1
  _QWORD *v13; // x20
  int v14; // w8
  UILabel_o *getTreasureLabel; // x21
  UISprite_o *getTreasureIcon; // x19
  Il2CppObject *v17; // x0
  int32_t ExpensiveIcon; // [xsp+8h] [xbp-18h] BYREF
  int v19; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EAB0E & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_19573/*"icon_drop_item_{0:00}"*/, v8, v9, v10);
    byte_42EAB0E = 1;
  }
  v19 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v13 = Instance;
  Instance = (void *)*((_QWORD *)Instance + 54);
  if ( !Instance )
    goto LABEL_11;
  Instance = WarBoardData__GetTreasureIdList((WarBoardData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_11;
  v14 = *((_DWORD *)Instance + 6);
  v19 = v14;
  Instance = this->fields.getTreasureRoot;
  if ( !Instance )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v14 > 0, 0LL);
  getTreasureLabel = this->fields.getTreasureLabel;
  Instance = System_Int32__ToString((int32_t)&v19, 0LL);
  if ( !getTreasureLabel
    || (UILabel__set_text(getTreasureLabel, (System_String_o *)Instance, 0LL), (Instance = (void *)v13[54]) == 0LL)
    || (getTreasureIcon = this->fields.getTreasureIcon,
        ExpensiveIcon = WarBoardData__GetExpensiveIcon((WarBoardData_o *)Instance, 0LL),
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExpensiveIcon),
        Instance = System_String__Format((System_String_o *)StringLiteral_19573/*"icon_drop_item_{0:00}"*/, v17, 0LL),
        !getTreasureIcon) )
  {
LABEL_11:
    sub_B5D69C(Instance, v12);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct WarBoardPlayingUIController___c_StaticFields *static_fields; // x0

  if ( (byte_42E5FC2 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardPlayingUIController___c_TypeInfo, v1, v2, v3);
    byte_42E5FC2 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardPlayingUIController___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = WarBoardPlayingUIController___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardPlayingUIController___c_o *)v4;
  sub_B5D560(static_fields);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E5FC3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v4, v5, v6);
    byte_42E5FC3 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B29 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B29 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v9);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  WebViewManager_o *Instance; // x19
  System_Action_o *v19; // x20

  if ( (byte_42E5FC4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, ok, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__, v9, v10, v11);
    sub_B5D5C4(&WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo, v12, v13, v14);
    byte_42E5FC4 = 1;
  }
  v15 = sub_B5D694(WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 24) = this,
        sub_B5D560(v15 + 24),
        *(_BYTE *)(v15 + 16) = ok,
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v15,
          Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v16, v17);
  }
  WarBoardManager__HideTurnEndConfirmPopup((WarBoardManager_o *)Instance, v19, 0LL);
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
      sub_B5D69C(this, method);
    }
    WarBoardManager__NextTurn((WarBoardManager_o *)this, 0LL);
  }
}