void __fastcall WarBoardPlayingUIController___ctor(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardPlayingUIController__Active(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPlayingUIController__Awake(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *object; // x20
  __int64 nextTurnObject; // x0
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o *splitAPLabel; // x21
  UIFont_o *v11; // x20
  UnityEngine_Object_o *maxAPLabel; // x21
  UnityEngine_Object_o *currentAPLabel; // x21
  UnityEngine_Object_o *nextTurnButtonBlinkPrefab; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Transform_o *v22; // x21
  int v23; // s0
  UnityEngine_Object_o *Child; // x20
  __int64 v27; // x1
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  struct UICommonButton_o *nextTurnButton; // x8
  struct UnityEngine_GameObject_array *tweenTargets; // x1
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FA3D4 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIFont___, method);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_GameObject___, v5);
    sub_1B640C8(&StringLiteral_6743/*"Fonts/FGO-NumberFont-02"*/, v6);
    byte_49FA3D4 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_6743/*"Fonts/FGO-NumberFont-02"*/,
             (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nextTurnObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0LL, 0LL);
  if ( (nextTurnObject & 1) != 0 )
  {
    if ( !object )
      goto LABEL_39;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)object,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    splitAPLabel = (UnityEngine_Object_o *)this->fields.splitAPLabel;
    v11 = (UIFont_o *)Component_object;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(splitAPLabel, 0LL, 0LL) )
    {
      nextTurnObject = (__int64)this->fields.splitAPLabel;
      if ( !nextTurnObject )
        goto LABEL_39;
      UILabel__set_bitmapFont((UILabel_o *)nextTurnObject, v11, 0LL);
    }
    maxAPLabel = (UnityEngine_Object_o *)this->fields.maxAPLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(maxAPLabel, 0LL, 0LL) )
    {
      nextTurnObject = (__int64)this->fields.maxAPLabel;
      if ( !nextTurnObject )
        goto LABEL_39;
      UILabel__set_bitmapFont((UILabel_o *)nextTurnObject, v11, 0LL);
    }
    currentAPLabel = (UnityEngine_Object_o *)this->fields.currentAPLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(currentAPLabel, 0LL, 0LL) )
    {
      nextTurnObject = (__int64)this->fields.currentAPLabel;
      if ( !nextTurnObject )
        goto LABEL_39;
      UILabel__set_bitmapFont((UILabel_o *)nextTurnObject, v11, 0LL);
    }
  }
  nextTurnButtonBlinkPrefab = (UnityEngine_Object_o *)this->fields.nextTurnButtonBlinkPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nextTurnObject = UnityEngine_Object__op_Inequality(nextTurnButtonBlinkPrefab, 0LL, 0LL);
  if ( (nextTurnObject & 1) != 0 )
  {
    nextTurnObject = (__int64)this->fields.nextTurnObject;
    if ( !nextTurnObject )
      goto LABEL_39;
    v17 = (Il2CppObject *)this->fields.nextTurnButtonBlinkPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nextTurnObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v19 = UnityEngine_Object__Instantiate_object__49003980(
            v17,
            transform,
            (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
    this->fields.nextTurnButtonBlink = (struct UnityEngine_GameObject_o *)v19;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.nextTurnButtonBlink, (int32_t)v19, v20, v21);
    nextTurnObject = (__int64)this->fields.nextTurnButtonBlink;
    if ( !nextTurnObject )
      goto LABEL_39;
    nextTurnObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nextTurnObject, 0LL);
    if ( !this->fields.nextTurnButton )
      goto LABEL_39;
    v22 = (UnityEngine_Transform_o *)nextTurnObject;
    nextTurnObject = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.nextTurnButton,
                                0LL);
    if ( !nextTurnObject )
      goto LABEL_39;
    *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)nextTurnObject,
                                       0LL);
    if ( !v22 )
      goto LABEL_39;
    UnityEngine_Transform__set_localPosition(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
    Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(this->fields.nextTurnButtonBlink, 0, 0LL);
    nextTurnObject = UnityEngine_Object__op_Inequality(Child, 0LL, 0LL);
    if ( (nextTurnObject & 1) == 0 )
      goto LABEL_37;
    if ( !byte_49F700A )
    {
      nextTurnObject = sub_1B640C8(&UnityEngine_Vector2_TypeInfo, v27);
      byte_49F700A = 1;
    }
    if ( !Child )
LABEL_39:
      sub_1B64324(nextTurnObject);
    v31.fields.z = 0.0;
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    v31.fields.x = static_fields->zeroVector.fields.x;
    v31.fields.y = static_fields->zeroVector.fields.y;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Child, v31, 0LL);
  }
LABEL_37:
  nextTurnButton = this->fields.nextTurnButton;
  if ( !nextTurnButton )
    goto LABEL_39;
  tweenTargets = nextTurnButton->fields.tweenTargets;
  this->fields.nextTurnButtonTweenObjectCache = tweenTargets;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.nextTurnButtonTweenObjectCache,
    (int32_t)tweenTargets,
    v15,
    v16);
}


void __fastcall WarBoardPlayingUIController__CallbackBackButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FA3E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FA3E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__CallbackRetireButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  WarBoardPlayingUIController___c_c *v8; // x8
  WarBoardManager_o *v9; // x19
  System_Action_o *_9__40_0; // x20
  Il2CppObject *v11; // x21
  struct WarBoardPlayingUIController___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FA3E2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    sub_1B640C8(&Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__, v3);
    sub_1B640C8(&WarBoardPlayingUIController___c_TypeInfo, v4);
    byte_49FA3E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v8 = WarBoardPlayingUIController___c_TypeInfo;
  v9 = (WarBoardManager_o *)Instance;
  if ( !WarBoardPlayingUIController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPlayingUIController___c_TypeInfo);
    v8 = WarBoardPlayingUIController___c_TypeInfo;
  }
  _9__40_0 = v8->static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = WarBoardPlayingUIController___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__40_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(_9__40_0, v11, Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__, 0LL);
    static_fields = WarBoardPlayingUIController___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = _9__40_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v13, v14);
  }
  if ( !v9 )
    sub_1B64324(Instance);
  WarBoardManager__Retire(v9, _9__40_0, 0LL);
}


void __fastcall WarBoardPlayingUIController__CallbackSuspendButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  Il2CppObject *Request_object; // x19
  Il2CppObject *Instance; // x0

  if ( (byte_49FA3E0 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_WarBoardResumeRequest___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B640C8(&Method_WarBoardPlayingUIController_SuspendResponse__, v7);
    byte_49FA3E0 = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_WarBoardPlayingUIController_SuspendResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v8,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_WarBoardResumeRequest___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || !Request_object )
    sub_1B64324(Instance);
  WarBoardResumeRequest__beginRequest(
    (WarBoardResumeRequest_o *)Request_object,
    (WarBoardData_o *)Instance[27].monitor,
    0LL);
}


void __fastcall WarBoardPlayingUIController__Deactive(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__NondispTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *playerTurnRoot; // x0

  playerTurnRoot = this->fields.playerTurnRoot;
  if ( !playerTurnRoot
    || (UnityEngine_GameObject__SetActive(playerTurnRoot, 0, 0LL), (playerTurnRoot = this->fields.enemyTurnRoot) == 0LL) )
  {
    sub_1B64324(playerTurnRoot);
  }
  UnityEngine_GameObject__SetActive(playerTurnRoot, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__OnClickNextTurn(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x19
  Il2CppObject *Instance; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject **v11; // x20
  bool exist; // w0
  _QWORD *v13; // x8
  bool v14; // w21
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_bool__o *v19; // x21

  if ( (byte_49FA3D9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_1B640C8(&Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__, v4);
    sub_1B640C8(&WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardPlayingUIController_OnClickNextTurn__, v6);
    byte_49FA3D9 = 1;
  }
  v7 = sub_1B64314(WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 16) = Instance;
  v11 = (Il2CppObject **)(v7 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)Instance, v9, v10);
  Instance = *(Il2CppObject **)(v7 + 16);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  Instance = *v11;
  if ( !*v11 )
    goto LABEL_13;
  exist = WarBoardManager__ExistEnableActionPieceExtend((WarBoardManager_o *)Instance, 0LL);
  v13 = Method_WarBoardPlayingUIController_OnClickNextTurn__;
  v14 = exist;
  if ( (*((_BYTE *)Method_WarBoardPlayingUIController_OnClickNextTurn__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B640E0(Method_WarBoardPlayingUIController_OnClickNextTurn__);
  v15 = (System_Reflection_MethodBase_o *)sub_1B640AC(v13, v13[4]);
  if ( v14 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
    v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v19 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v17, v18);
    System_Action_bool____ctor(
      v19,
      (Il2CppObject *)v7,
      Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__,
      0LL);
    if ( v16 )
    {
      WarBoardManager__ShowTurnEndConfirmPopup((WarBoardManager_o *)v16, v19, 0LL);
      return;
    }
LABEL_13:
    sub_1B64324(Instance);
  }
  OverwriteAssetSoundName__PlaySystemSe(v15, 8, 0LL);
  Instance = *v11;
  if ( !*v11 )
    goto LABEL_13;
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
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *Instance; // x0
  Il2CppObject *backPrefab; // x20
  Il2CppObject *v15; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v17; // x1
  WarBoardBackMenuComponent_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_o *v27; // x23
  const MethodInfo *v28; // x4

  if ( (byte_49FA3DF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___, v3);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B640C8(&Method_WarBoardPlayingUIController_CallbackBackButton__, v7);
    sub_1B640C8(&Method_WarBoardPlayingUIController_CallbackRetireButton__, v8);
    sub_1B640C8(&Method_WarBoardPlayingUIController_CallbackSuspendButton__, v9);
    sub_1B640C8(&Method_WarBoardPlayingUIController_OnClickReturnButton__, v10);
    byte_49FA3DF = 1;
  }
  v11 = Method_WarBoardPlayingUIController_OnClickReturnButton__;
  if ( (*((_BYTE *)Method_WarBoardPlayingUIController_OnClickReturnButton__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1B640E0(Method_WarBoardPlayingUIController_OnClickReturnButton__);
  v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  backPrefab = (Il2CppObject *)this->fields.backPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__Instantiate_object_(
          backPrefab,
          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_33381252((UnityEngine_GameObject_o *)v15, gameObject, 0LL);
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v15, 0LL);
  if ( !v15
    || (Instance = UnityEngine_GameObject__GetComponent_object_(
                     (UnityEngine_GameObject_o *)v15,
                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___)) == 0LL )
  {
LABEL_12:
    sub_1B64324(Instance);
  }
  v18 = (WarBoardBackMenuComponent_o *)Instance;
  WarBoardBackMenuComponent__Init((WarBoardBackMenuComponent_o *)Instance, v17);
  v21 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackSuspendButton__, 0LL);
  v24 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackRetireButton__, 0LL);
  v27 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0LL);
  WarBoardBackMenuComponent__Open(v18, v21, v24, v27, v28);
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
  Il2CppObject *Instance; // x0
  _QWORD *v10; // x8
  WarBoardManager_o *v11; // x20
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *treasureListPrefab; // x21
  Il2CppObject *v15; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v17; // x1
  WarBoardTreasureListComponent_o *v18; // x21
  System_Int32_array *TreasureIdList; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x4

  if ( (byte_49FA3DE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___, v3);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B640C8(&Method_WarBoardPlayingUIController_CallbackBackButton__, v7);
    sub_1B640C8(&Method_WarBoardPlayingUIController_OnClickTreasureButton__, v8);
    byte_49FA3DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v10 = Method_WarBoardPlayingUIController_OnClickTreasureButton__;
  v11 = (WarBoardManager_o *)Instance;
  if ( (*((_BYTE *)Method_WarBoardPlayingUIController_OnClickTreasureButton__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B640E0(Method_WarBoardPlayingUIController_OnClickTreasureButton__);
  v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
  OverwriteAssetSoundName__PlayCommonSe(v12, 9, 0LL);
  if ( !v11 )
    goto LABEL_12;
  WarBoardManager__SetMapTouchEnable(v11, 0, 0, 0LL);
  WarBoardManager__HideSimplePopup(v11, 0LL, 0LL);
  treasureListPrefab = (Il2CppObject *)this->fields.treasureListPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__Instantiate_object_(
          treasureListPrefab,
          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_33381252((UnityEngine_GameObject_o *)v15, gameObject, 0LL);
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v15, 0LL);
  if ( !v15
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v15,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___)) == 0LL
    || (v18 = (WarBoardTreasureListComponent_o *)Component_object,
        WarBoardTreasureListComponent__Init((WarBoardTreasureListComponent_o *)Component_object, v17),
        (Component_object = (Il2CppObject *)v11->fields._warBoardData_k__BackingField) == 0LL) )
  {
LABEL_12:
    sub_1B64324(Component_object);
  }
  TreasureIdList = WarBoardData__GetTreasureIdList((WarBoardData_o *)Component_object, 0LL);
  v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0LL);
  WarBoardTreasureListComponent__Open(v18, TreasureIdList, 2, v22, v23);
}


void __fastcall WarBoardPlayingUIController__OnDestroy(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_nextTurnButtonBlink; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *nextTurnButtonBlink; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FA3E4 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FA3E4 = 1;
  }
  nextTurnButtonBlink = this->fields.nextTurnButtonBlink;
  p_nextTurnButtonBlink = (ServantStatusBattleListViewItem_o *)&this->fields.nextTurnButtonBlink;
  v4 = (UnityEngine_Object_o *)nextTurnButtonBlink;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_nextTurnButtonBlink->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(klass, 0LL);
    p_nextTurnButtonBlink->klass = 0LL;
    sub_1B6406C(p_nextTurnButtonBlink, 0, v7, v8);
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
  const MethodInfo *v11; // x2
  bool v12; // w1
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
  if ( (byte_49FA3D7 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&current);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_15355/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    sub_1B640C8(&StringLiteral_15354/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v9);
    byte_49FA3D7 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (WarBoardManager_o *)WarBoardManager__EnableAction(Instance, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v12 = 0;
  }
  else
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (WarBoardManager_o *)WarBoardManager__IsPlayerTurn(Instance, 0LL);
    v12 = (unsigned __int8)Instance & 1;
  }
  if ( !this
    || (WarBoardPlayingUIController__SetBlinkNextTurnButton(this, v12, v11),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_43:
    sub_1B64324(Instance);
  }
  if ( Instance->fields._controllType_k__BackingField == 2 )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    if ( WarBoardManager__get_warBoardActionPointEntity(Instance, 0LL) )
    {
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (WarBoardManager_o *)WarBoardManager__get_warBoardActionPointEntity(Instance, 0LL);
      if ( !Instance )
        goto LABEL_43;
      if ( !WarBoardActionPointEntity__get_HasCost((WarBoardActionPointEntity_o *)Instance, 0LL) )
      {
        Instance = (WarBoardManager_o *)this->fields.apLabelRoot;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          return;
        }
        goto LABEL_43;
      }
    }
  }
  Instance = (WarBoardManager_o *)this->fields.apLabelRoot;
  if ( !Instance )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  splitAPLabel = (UnityEngine_Object_o *)this->fields.splitAPLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(splitAPLabel, 0LL, 0LL) )
  {
    v14 = this->fields.splitAPLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (WarBoardManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15355/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
    if ( !v14 )
      goto LABEL_43;
    UILabel__set_text(v14, (System_String_o *)Instance, 0LL);
  }
  maxAPLabel = (UnityEngine_Object_o *)this->fields.maxAPLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maxAPLabel, 0LL, 0LL) )
  {
    v16 = this->fields.maxAPLabel;
    Instance = (WarBoardManager_o *)System_Int32__ToString((int32_t)&v21, 0LL);
    if ( !v16 )
      goto LABEL_43;
    UILabel__set_text(v16, (System_String_o *)Instance, 0LL);
  }
  currentAPLabel = (UnityEngine_Object_o *)this->fields.currentAPLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentAPLabel, 0LL, 0LL) )
  {
    v18 = this->fields.currentAPLabel;
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      if ( WarBoardManager__EnableAction(Instance, 0LL) )
      {
        v19 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = LocalizationManager__Get((System_String_o *)StringLiteral_15354/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
      }
      v20 = System_Int32__ToString((int32_t)&v22, 0LL);
      Instance = (WarBoardManager_o *)System_String__Concat_61375396(v19, v20, 0LL);
      if ( v18 )
      {
        UILabel__set_text(v18, (System_String_o *)Instance, 0LL);
        return;
      }
    }
    goto LABEL_43;
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

  if ( (byte_49FA3D8 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, value);
    byte_49FA3D8 = 1;
  }
  nextTurnButtonBlink = (UnityEngine_Object_o *)this->fields.nextTurnButtonBlink;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nextTurnButtonBlink, 0LL, 0LL) )
  {
    v6 = this->fields.nextTurnButtonBlink;
    if ( !v6 )
      sub_1B64324(0LL);
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

  if ( (byte_49FA3DB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, name);
    byte_49FA3DB = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v6 = this->fields.titleLabel;
    if ( !v6 )
      sub_1B64324(0LL);
    UILabel__set_text(v6, name, 0LL);
  }
}


void __fastcall WarBoardPlayingUIController__SetNPCTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nextTurnButton; // x20
  struct UICommonButton_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FA3D6 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FA3D6 = 1;
  }
  nextTurnButton = (UnityEngine_Object_o *)this->fields.nextTurnButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nextTurnButton, 0LL, 0LL) )
  {
    v4 = this->fields.nextTurnButton;
    if ( !v4 || (UICommonButton__SetButtonEnable(v4, 0, 1, 0LL), (v4 = this->fields.nextTurnButton) == 0LL) )
      sub_1B64324(v4);
    v4->fields.tweenTargets = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.tweenTargets, 0, v5, v6);
  }
}


void __fastcall WarBoardPlayingUIController__SetPlayerTurn(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTurnButton; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  struct UICommonButton_o *v6; // x0
  struct UnityEngine_GameObject_array *nextTurnButtonTweenObjectCache; // x1

  if ( (byte_49FA3D5 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FA3D5 = 1;
  }
  nextTurnButton = (UnityEngine_Object_o *)this->fields.nextTurnButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nextTurnButton, 0LL, 0LL) )
  {
    v6 = this->fields.nextTurnButton;
    if ( !v6
      || (nextTurnButtonTweenObjectCache = this->fields.nextTurnButtonTweenObjectCache,
          v6->fields.tweenTargets = nextTurnButtonTweenObjectCache,
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&v6->fields.tweenTargets,
            (int32_t)nextTurnButtonTweenObjectCache,
            v4,
            v5),
          (v6 = this->fields.nextTurnButton) == 0LL) )
    {
      sub_1B64324(v6);
    }
    UICommonButton__SetButtonEnable(v6, 1, 1, 0LL);
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

  if ( (byte_49FA3DC & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isDisp);
    byte_49FA3DC = 1;
  }
  boardSkipPrefab = (UnityEngine_Object_o *)this->fields.boardSkipPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(boardSkipPrefab, 0LL, 0LL) )
  {
    v6 = this->fields.boardSkipPrefab;
    if ( !v6 )
      sub_1B64324(0LL);
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
  System_String_o *v10; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FA3DA & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, isPlayer);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_15379/*"WARBOARD_TURN_BASE"*/, v8);
    byte_49FA3DA = 1;
  }
  playerTurnRoot = this->fields.playerTurnRoot;
  if ( !playerTurnRoot )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(playerTurnRoot, isPlayer, 0LL);
  playerTurnRoot = this->fields.enemyTurnRoot;
  if ( !playerTurnRoot )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(playerTurnRoot, !isPlayer, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15379/*"WARBOARD_TURN_BASE"*/, 0LL);
  v13 = turnCount;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  playerTurnRoot = (UnityEngine_GameObject_o *)System_String__Format(v10, v11, 0LL);
  if ( !this->fields.playerTurnLabel
    || (v12 = (System_String_o *)playerTurnRoot,
        UILabel__set_text(this->fields.playerTurnLabel, (System_String_o *)playerTurnRoot, 0LL),
        (playerTurnRoot = (UnityEngine_GameObject_o *)this->fields.enemyTurnLabel) == 0LL) )
  {
LABEL_10:
    sub_1B64324(playerTurnRoot);
  }
  UILabel__set_text((UILabel_o *)playerTurnRoot, v12, 0LL);
}


void __fastcall WarBoardPlayingUIController__SuspendResponse(
        WarBoardPlayingUIController_o *this,
        System_String_o *response,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FA3E1 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, response);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v4);
    byte_49FA3E1 = 1;
  }
  if ( !System_String__op_Equality(response, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 9, 1, 0LL, 0, 0LL);
  }
}


void __fastcall WarBoardPlayingUIController__Update(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *Instance; // x0
  _QWORD *v6; // x20
  int v7; // w8
  UILabel_o *getTreasureLabel; // x21
  UISprite_o *getTreasureIcon; // x19
  Il2CppObject *v10; // x0
  int32_t ExpensiveIcon; // [xsp+8h] [xbp-28h] BYREF
  int v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FA3DD & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_20059/*"icon_drop_item_{0:00}"*/, v4);
    byte_49FA3DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v6 = Instance;
  Instance = (void *)*((_QWORD *)Instance + 55);
  if ( !Instance )
    goto LABEL_11;
  Instance = WarBoardData__GetTreasureIdList((WarBoardData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_11;
  v7 = *((_DWORD *)Instance + 6);
  v12 = v7;
  Instance = this->fields.getTreasureRoot;
  if ( !Instance )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v7 > 0, 0LL);
  getTreasureLabel = this->fields.getTreasureLabel;
  Instance = System_Int32__ToString((int32_t)&v12, 0LL);
  if ( !getTreasureLabel
    || (UILabel__set_text(getTreasureLabel, (System_String_o *)Instance, 0LL), (Instance = (void *)v6[55]) == 0LL)
    || (getTreasureIcon = this->fields.getTreasureIcon,
        ExpensiveIcon = WarBoardData__GetExpensiveIcon((WarBoardData_o *)Instance, 0LL),
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExpensiveIcon),
        Instance = System_String__Format((System_String_o *)StringLiteral_20059/*"icon_drop_item_{0:00}"*/, v10, 0LL),
        !getTreasureIcon) )
  {
LABEL_11:
    sub_1B64324(Instance);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA3E5 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardPlayingUIController___c_TypeInfo, v1);
    byte_49FA3E5 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardPlayingUIController___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardPlayingUIController___c_TypeInfo->static_fields->__9 = (struct WarBoardPlayingUIController___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardPlayingUIController___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  Il2CppObject *Instance; // x0

  if ( (byte_49FA3E6 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v2);
    byte_49FA3E6 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F7A3E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F7A3E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Instance; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x20

  if ( (byte_49FA3E7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, ok);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    sub_1B640C8(&Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__, v6);
    sub_1B640C8(&WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo, v7);
    byte_49FA3E7 = 1;
  }
  v8 = sub_1B64314(WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo, ok, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v10, v11),
        *(_BYTE *)(v8 + 16) = ok,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v8,
          Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v9);
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
      sub_1B64324(this);
    }
    WarBoardManager__NextTurn((WarBoardManager_o *)this, 0LL);
  }
}