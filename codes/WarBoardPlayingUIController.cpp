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
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPlayingUIController__Awake(WarBoardPlayingUIController_o *this, const MethodInfo *method)
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
  Il2CppObject *object; // x20
  __int64 nextTurnObject; // x0
  __int64 v15; // x1
  Il2CppObject *Component_object; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *splitAPLabel; // x21
  UIFont_o *v19; // x20
  UnityEngine_Object_o *maxAPLabel; // x21
  UnityEngine_Object_o *currentAPLabel; // x21
  UnityEngine_Object_o *nextTurnButtonBlinkPrefab; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *v29; // x20
  __int64 v30; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  UnityEngine_Transform_o *v39; // x21
  int v40; // s0
  UnityEngine_Object_o *Child; // x20
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  struct UICommonButton_o *nextTurnButton; // x8
  struct UnityEngine_GameObject_array *tweenTargets; // x1
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1411D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIFont___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_GameObject___, v8, v9);
    sub_1BCA7E0(&StringLiteral_6892/*"Fonts/FGO-NumberFont-02"*/, v10, v11);
    byte_4B1411D = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_6892/*"Fonts/FGO-NumberFont-02"*/,
             (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  nextTurnObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0LL, 0LL);
  if ( (nextTurnObject & 1) != 0 )
  {
    if ( !object )
      goto LABEL_39;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)object,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    splitAPLabel = (UnityEngine_Object_o *)this->fields.splitAPLabel;
    v19 = (UIFont_o *)Component_object;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Inequality(splitAPLabel, 0LL, 0LL) )
    {
      nextTurnObject = (__int64)this->fields.splitAPLabel;
      if ( !nextTurnObject )
        goto LABEL_39;
      UILabel__set_bitmapFont((UILabel_o *)nextTurnObject, v19, 0LL);
    }
    maxAPLabel = (UnityEngine_Object_o *)this->fields.maxAPLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( UnityEngine_Object__op_Inequality(maxAPLabel, 0LL, 0LL) )
    {
      nextTurnObject = (__int64)this->fields.maxAPLabel;
      if ( !nextTurnObject )
        goto LABEL_39;
      UILabel__set_bitmapFont((UILabel_o *)nextTurnObject, v19, 0LL);
    }
    currentAPLabel = (UnityEngine_Object_o *)this->fields.currentAPLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( UnityEngine_Object__op_Inequality(currentAPLabel, 0LL, 0LL) )
    {
      nextTurnObject = (__int64)this->fields.currentAPLabel;
      if ( !nextTurnObject )
        goto LABEL_39;
      UILabel__set_bitmapFont((UILabel_o *)nextTurnObject, v19, 0LL);
    }
  }
  nextTurnButtonBlinkPrefab = (UnityEngine_Object_o *)this->fields.nextTurnButtonBlinkPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  nextTurnObject = UnityEngine_Object__op_Inequality(nextTurnButtonBlinkPrefab, 0LL, 0LL);
  if ( (nextTurnObject & 1) != 0 )
  {
    nextTurnObject = (__int64)this->fields.nextTurnObject;
    if ( !nextTurnObject )
      goto LABEL_39;
    v29 = (Il2CppObject *)this->fields.nextTurnButtonBlinkPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nextTurnObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    v32 = UnityEngine_Object__Instantiate_object__49903816(
            v29,
            transform,
            (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    this->fields.nextTurnButtonBlink = (struct UnityEngine_GameObject_o *)v32;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.nextTurnButtonBlink,
      (int64_t)v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    nextTurnObject = (__int64)this->fields.nextTurnButtonBlink;
    if ( !nextTurnObject )
      goto LABEL_39;
    nextTurnObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nextTurnObject, 0LL);
    if ( !this->fields.nextTurnButton )
      goto LABEL_39;
    v39 = (UnityEngine_Transform_o *)nextTurnObject;
    nextTurnObject = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.nextTurnButton,
                                0LL);
    if ( !nextTurnObject )
      goto LABEL_39;
    *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)nextTurnObject,
                                       0LL);
    if ( !v39 )
      goto LABEL_39;
    UnityEngine_Transform__set_localPosition(v39, *(UnityEngine_Vector3_o *)&v40, 0LL);
    Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(this->fields.nextTurnButtonBlink, 0, 0LL);
    nextTurnObject = UnityEngine_Object__op_Inequality(Child, 0LL, 0LL);
    if ( (nextTurnObject & 1) == 0 )
      goto LABEL_37;
    if ( !byte_4B108BA )
    {
      nextTurnObject = sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v15, v23);
      byte_4B108BA = 1;
    }
    if ( !Child )
LABEL_39:
      sub_1BCAA3C(nextTurnObject, v15);
    v47.fields.z = 0.0;
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    v47.fields.x = static_fields->zeroVector.fields.x;
    v47.fields.y = static_fields->zeroVector.fields.y;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Child, v47, 0LL);
  }
LABEL_37:
  nextTurnButton = this->fields.nextTurnButton;
  if ( !nextTurnButton )
    goto LABEL_39;
  tweenTargets = nextTurnButton->fields.tweenTargets;
  this->fields.nextTurnButtonTweenObjectCache = tweenTargets;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.nextTurnButtonTweenObjectCache,
    (int64_t)tweenTargets,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}


void __fastcall WarBoardPlayingUIController__CallbackBackButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1412C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B1412C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__CallbackRetireButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  WarBoardPlayingUIController___c_c *v13; // x8
  WarBoardManager_o *v14; // x19
  System_Action_o *_9__40_0; // x20
  Il2CppObject *v16; // x21
  struct WarBoardPlayingUIController___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B1412B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3, v4);
    sub_1BCA7E0(&Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__, v5, v6);
    sub_1BCA7E0(&WarBoardPlayingUIController___c_TypeInfo, v7, v8);
    byte_4B1412B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v13 = WarBoardPlayingUIController___c_TypeInfo;
  v14 = (WarBoardManager_o *)Instance;
  if ( !WarBoardPlayingUIController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPlayingUIController___c_TypeInfo, v10);
    v13 = WarBoardPlayingUIController___c_TypeInfo;
  }
  _9__40_0 = v13->static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, v10);
      v13 = WarBoardPlayingUIController___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__40_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(_9__40_0, v16, Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__, 0LL);
    static_fields = WarBoardPlayingUIController___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = _9__40_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__40_0,
      (int64_t)_9__40_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v14 )
    sub_1BCAA3C(Instance, v10);
  WarBoardManager__Retire(v14, _9__40_0, 0LL);
}


void __fastcall WarBoardPlayingUIController__CallbackSuspendButton(
        WarBoardPlayingUIController_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  Il2CppObject *Request_object; // x19
  Il2CppObject *Instance; // x0
  __int64 v17; // x1

  if ( (byte_4B14129 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_WarBoardResumeRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_WarBoardPlayingUIController_SuspendResponse__, v11, v12);
    byte_4B14129 = 1;
  }
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_WarBoardPlayingUIController_SuspendResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Request_object = NetworkManager__getRequest_object_(
                     v13,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_WarBoardResumeRequest___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || !Request_object )
    sub_1BCAA3C(Instance, v17);
  WarBoardResumeRequest__beginRequest(
    (WarBoardResumeRequest_o *)Request_object,
    (WarBoardData_o *)Instance[27].monitor,
    0LL);
}


void __fastcall WarBoardPlayingUIController__Deactive(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__NondispTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *playerTurnRoot; // x0

  playerTurnRoot = this->fields.playerTurnRoot;
  if ( !playerTurnRoot
    || (UnityEngine_GameObject__SetActive(playerTurnRoot, 0, 0LL), (playerTurnRoot = this->fields.enemyTurnRoot) == 0LL) )
  {
    sub_1BCAA3C(playerTurnRoot, method);
  }
  UnityEngine_GameObject__SetActive(playerTurnRoot, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__OnClickNextTurn(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x19
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject **v21; // x20
  bool exist; // w0
  _QWORD *v23; // x8
  bool v24; // w21
  System_Reflection_MethodBase_o *v25; // x0
  Il2CppObject *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_bool__o *v30; // x21

  if ( (byte_4B14122 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__, v6, v7);
    sub_1BCA7E0(&WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_WarBoardPlayingUIController_OnClickNextTurn__, v10, v11);
    byte_4B14122 = 1;
  }
  v12 = sub_1BCAA2C(WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v12 )
    goto LABEL_13;
  *(_QWORD *)(v12 + 16) = Instance;
  v21 = (Il2CppObject **)(v12 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)Instance, v15, v16, v17, v18, v19, v20);
  Instance = *(Il2CppObject **)(v12 + 16);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  Instance = *v21;
  if ( !*v21 )
    goto LABEL_13;
  exist = WarBoardManager__ExistEnableActionPieceExtend((WarBoardManager_o *)Instance, 0LL);
  v23 = Method_WarBoardPlayingUIController_OnClickNextTurn__;
  v24 = exist;
  if ( (*((_BYTE *)Method_WarBoardPlayingUIController_OnClickNextTurn__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1BCA7F8(Method_WarBoardPlayingUIController_OnClickNextTurn__);
  v25 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v23, v23[4]);
  if ( v24 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0LL);
    v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v30 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v27, v28, v29);
    System_Action_bool____ctor(
      v30,
      (Il2CppObject *)v12,
      Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__,
      0LL);
    if ( v26 )
    {
      WarBoardManager__ShowTurnEndConfirmPopup((WarBoardManager_o *)v26, v30, 0LL);
      return;
    }
LABEL_13:
    sub_1BCAA3C(Instance, v14);
  }
  OverwriteAssetSoundName__PlaySystemSe(v25, 8, 0LL);
  Instance = *v21;
  if ( !*v21 )
    goto LABEL_13;
  WarBoardManager__NextTurn((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardPlayingUIController__OnClickReturnButton(
        WarBoardPlayingUIController_o *this,
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
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v23; // x1
  __int64 v24; // x1
  Il2CppObject *backPrefab; // x20
  Il2CppObject *v26; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  WarBoardBackMenuComponent_o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Action_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_o *v36; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Action_o *v40; // x23
  const MethodInfo *v41; // x4

  if ( (byte_4B14128 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_WarBoardPlayingUIController_CallbackBackButton__, v12, v13);
    sub_1BCA7E0(&Method_WarBoardPlayingUIController_CallbackRetireButton__, v14, v15);
    sub_1BCA7E0(&Method_WarBoardPlayingUIController_CallbackSuspendButton__, v16, v17);
    sub_1BCA7E0(&Method_WarBoardPlayingUIController_OnClickReturnButton__, v18, v19);
    byte_4B14128 = 1;
  }
  v20 = Method_WarBoardPlayingUIController_OnClickReturnButton__;
  if ( (*((_BYTE *)Method_WarBoardPlayingUIController_OnClickReturnButton__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1BCA7F8(Method_WarBoardPlayingUIController_OnClickReturnButton__);
  v21 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  backPrefab = (Il2CppObject *)this->fields.backPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  v26 = UnityEngine_Object__Instantiate_object_(
          backPrefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_34336992((UnityEngine_GameObject_o *)v26, gameObject, 0LL);
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v26, 0LL);
  if ( !v26
    || (Instance = UnityEngine_GameObject__GetComponent_object_(
                     (UnityEngine_GameObject_o *)v26,
                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___)) == 0LL )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v23);
  }
  v28 = (WarBoardBackMenuComponent_o *)Instance;
  WarBoardBackMenuComponent__Init((WarBoardBackMenuComponent_o *)Instance, v23);
  v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v30, v31);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackSuspendButton__, 0LL);
  v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackRetireButton__, 0LL);
  v40 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v37, v38, v39);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0LL);
  WarBoardBackMenuComponent__Open(v28, v32, v36, v40, v41);
}


void __fastcall WarBoardPlayingUIController__OnClickTreasureButton(
        WarBoardPlayingUIController_o *this,
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
  Il2CppObject *Instance; // x0
  _QWORD *v17; // x8
  WarBoardManager_o *v18; // x20
  System_Reflection_MethodBase_o *v19; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v21; // x1
  __int64 v22; // x1
  Il2CppObject *treasureListPrefab; // x21
  Il2CppObject *v24; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  WarBoardTreasureListComponent_o *v26; // x21
  System_Int32_array *TreasureIdList; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x4

  if ( (byte_4B14127 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_WarBoardPlayingUIController_CallbackBackButton__, v12, v13);
    sub_1BCA7E0(&Method_WarBoardPlayingUIController_OnClickTreasureButton__, v14, v15);
    byte_4B14127 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v17 = Method_WarBoardPlayingUIController_OnClickTreasureButton__;
  v18 = (WarBoardManager_o *)Instance;
  if ( (*((_BYTE *)Method_WarBoardPlayingUIController_OnClickTreasureButton__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1BCA7F8(Method_WarBoardPlayingUIController_OnClickTreasureButton__);
  v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v17, v17[4]);
  OverwriteAssetSoundName__PlayCommonSe(v19, 9, 0LL);
  if ( !v18 )
    goto LABEL_12;
  WarBoardManager__SetMapTouchEnable(v18, 0, 0, 0LL);
  WarBoardManager__HideSimplePopup(v18, 0LL, 0LL);
  treasureListPrefab = (Il2CppObject *)this->fields.treasureListPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  v24 = UnityEngine_Object__Instantiate_object_(
          treasureListPrefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_34336992((UnityEngine_GameObject_o *)v24, gameObject, 0LL);
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v24, 0LL);
  if ( !v24
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v24,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___)) == 0LL
    || (v26 = (WarBoardTreasureListComponent_o *)Component_object,
        WarBoardTreasureListComponent__Init((WarBoardTreasureListComponent_o *)Component_object, v21),
        (Component_object = (Il2CppObject *)v18->fields._warBoardData_k__BackingField) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(Component_object, v21);
  }
  TreasureIdList = WarBoardData__GetTreasureIdList((WarBoardData_o *)Component_object, 0LL);
  v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v29, v30);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0LL);
  WarBoardTreasureListComponent__Open(v26, TreasureIdList, 2, v31, v32);
}


void __fastcall WarBoardPlayingUIController__OnDestroy(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_nextTurnButtonBlink; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *nextTurnButtonBlink; // t1
  __int64 v7; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B1412D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1412D = 1;
  }
  nextTurnButtonBlink = this->fields.nextTurnButtonBlink;
  p_nextTurnButtonBlink = (PartyOrganizationUtility_o *)&this->fields.nextTurnButtonBlink;
  v5 = (UnityEngine_Object_o *)nextTurnButtonBlink;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_nextTurnButtonBlink->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(klass, 0LL);
    p_nextTurnButtonBlink->klass = 0LL;
    sub_1BCA784(p_nextTurnButtonBlink, 0LL, v9, v10, v11, v12, v13, v14);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  WarBoardManager_o *Instance; // x0
  _BOOL8 v16; // x1
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  UnityEngine_Object_o *splitAPLabel; // x20
  __int64 v20; // x1
  UILabel_o *v21; // x20
  UnityEngine_Object_o *maxAPLabel; // x20
  __int64 v23; // x1
  UILabel_o *v24; // x20
  UnityEngine_Object_o *currentAPLabel; // x20
  UILabel_o *v26; // x19
  __int64 v27; // x1
  System_String_o *v28; // x20
  System_String_o *v29; // x0
  int32_t v30; // [xsp+8h] [xbp-28h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-24h] BYREF

  v30 = max;
  v31 = current;
  if ( (byte_4B14120 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&current, *(_QWORD *)&max);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&StringLiteral_15590/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_15589/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v13, v14);
    byte_4B14120 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (WarBoardManager_o *)WarBoardManager__EnableAction(Instance, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v16 = 0LL;
  }
  else
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (WarBoardManager_o *)WarBoardManager__IsPlayerTurn(Instance, 0LL);
    v16 = (unsigned __int8)Instance & 1;
  }
  if ( !this
    || (WarBoardPlayingUIController__SetBlinkNextTurnButton(this, v16, v17),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_43:
    sub_1BCAA3C(Instance, v16);
  }
  if ( Instance->fields._controllType_k__BackingField == 2 )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    if ( WarBoardManager__get_warBoardActionPointEntity(Instance, 0LL) )
    {
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality(splitAPLabel, 0LL, 0LL) )
  {
    v21 = this->fields.splitAPLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
    Instance = (WarBoardManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15590/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
    if ( !v21 )
      goto LABEL_43;
    UILabel__set_text(v21, (System_String_o *)Instance, 0LL);
  }
  maxAPLabel = (UnityEngine_Object_o *)this->fields.maxAPLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Inequality(maxAPLabel, 0LL, 0LL) )
  {
    v24 = this->fields.maxAPLabel;
    Instance = (WarBoardManager_o *)System_Int32__ToString((int32_t)&v30, 0LL);
    if ( !v24 )
      goto LABEL_43;
    UILabel__set_text(v24, (System_String_o *)Instance, 0LL);
  }
  currentAPLabel = (UnityEngine_Object_o *)this->fields.currentAPLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  if ( UnityEngine_Object__op_Inequality(currentAPLabel, 0LL, 0LL) )
  {
    v26 = this->fields.currentAPLabel;
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      if ( WarBoardManager__EnableAction(Instance, 0LL) )
      {
        v28 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_15589/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
      }
      v29 = System_Int32__ToString((int32_t)&v31, 0LL);
      Instance = (WarBoardManager_o *)System_String__Concat_62401220(v28, v29, 0LL);
      if ( v26 )
      {
        UILabel__set_text(v26, (System_String_o *)Instance, 0LL);
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
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4B14121 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, value, method);
    byte_4B14121 = 1;
  }
  nextTurnButtonBlink = (UnityEngine_Object_o *)this->fields.nextTurnButtonBlink;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(nextTurnButtonBlink, 0LL, 0LL) )
  {
    v7 = this->fields.nextTurnButtonBlink;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
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

  if ( (byte_4B14124 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, name, method);
    byte_4B14124 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v7 = this->fields.titleLabel;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UILabel__set_text(v7, name, 0LL);
  }
}


void __fastcall WarBoardPlayingUIController__SetNPCTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *nextTurnButton; // x20
  __int64 v5; // x1
  struct UICommonButton_o *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B1411F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1411F = 1;
  }
  nextTurnButton = (UnityEngine_Object_o *)this->fields.nextTurnButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(nextTurnButton, 0LL, 0LL) )
  {
    v6 = this->fields.nextTurnButton;
    if ( !v6 || (UICommonButton__SetButtonEnable(v6, 0, 1, 0LL), (v6 = this->fields.nextTurnButton) == 0LL) )
      sub_1BCAA3C(v6, v5);
    v6->fields.tweenTargets = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields.tweenTargets, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall WarBoardPlayingUIController__SetPlayerTurn(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *nextTurnButton; // x20
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct UICommonButton_o *v12; // x0
  struct UnityEngine_GameObject_array *nextTurnButtonTweenObjectCache; // x1

  if ( (byte_4B1411E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1411E = 1;
  }
  nextTurnButton = (UnityEngine_Object_o *)this->fields.nextTurnButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(nextTurnButton, 0LL, 0LL) )
  {
    v12 = this->fields.nextTurnButton;
    if ( !v12
      || (nextTurnButtonTweenObjectCache = this->fields.nextTurnButtonTweenObjectCache,
          v12->fields.tweenTargets = nextTurnButtonTweenObjectCache,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v12->fields.tweenTargets,
            (int64_t)nextTurnButtonTweenObjectCache,
            v6,
            v7,
            v8,
            v9,
            v10,
            v11),
          (v12 = this->fields.nextTurnButton) == 0LL) )
    {
      sub_1BCAA3C(v12, v5);
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
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4B14125 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isDisp, method);
    byte_4B14125 = 1;
  }
  boardSkipPrefab = (UnityEngine_Object_o *)this->fields.boardSkipPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
  if ( !UnityEngine_Object__op_Equality(boardSkipPrefab, 0LL, 0LL) )
  {
    v7 = this->fields.boardSkipPrefab;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *playerTurnRoot; // x0
  __int64 v12; // x1
  System_String_o *v13; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x20
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B14123 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, isPlayer, *(_QWORD *)&turnCount);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_15614/*"WARBOARD_TURN_BASE"*/, v9, v10);
    byte_4B14123 = 1;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_15614/*"WARBOARD_TURN_BASE"*/, 0LL);
  v16 = turnCount;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  playerTurnRoot = (UnityEngine_GameObject_o *)System_String__Format(v13, v14, 0LL);
  if ( !this->fields.playerTurnLabel
    || (v15 = (System_String_o *)playerTurnRoot,
        UILabel__set_text(this->fields.playerTurnLabel, (System_String_o *)playerTurnRoot, 0LL),
        (playerTurnRoot = (UnityEngine_GameObject_o *)this->fields.enemyTurnLabel) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(playerTurnRoot, isPlayer);
  }
  UILabel__set_text((UILabel_o *)playerTurnRoot, v15, 0LL);
}


void __fastcall WarBoardPlayingUIController__SuspendResponse(
        WarBoardPlayingUIController_o *this,
        System_String_o *response,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1412A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, response, method);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v4, v5);
    byte_4B1412A = 1;
  }
  if ( !System_String__op_Equality(response, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v7);
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 9, 1, 0LL, 0, 0LL);
  }
}


void __fastcall WarBoardPlayingUIController__Update(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  void *Instance; // x0
  __int64 v9; // x1
  _QWORD *v10; // x20
  int v11; // w8
  UILabel_o *getTreasureLabel; // x21
  UISprite_o *getTreasureIcon; // x19
  Il2CppObject *v14; // x0
  int32_t ExpensiveIcon; // [xsp+8h] [xbp-28h] BYREF
  int v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B14126 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_20352/*"icon_drop_item_{0:00}"*/, v6, v7);
    byte_4B14126 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v10 = Instance;
  Instance = (void *)*((_QWORD *)Instance + 55);
  if ( !Instance )
    goto LABEL_11;
  Instance = WarBoardData__GetTreasureIdList((WarBoardData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_11;
  v11 = *((_DWORD *)Instance + 6);
  v16 = v11;
  Instance = this->fields.getTreasureRoot;
  if ( !Instance )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v11 > 0, 0LL);
  getTreasureLabel = this->fields.getTreasureLabel;
  Instance = System_Int32__ToString((int32_t)&v16, 0LL);
  if ( !getTreasureLabel
    || (UILabel__set_text(getTreasureLabel, (System_String_o *)Instance, 0LL), (Instance = (void *)v10[55]) == 0LL)
    || (getTreasureIcon = this->fields.getTreasureIcon,
        ExpensiveIcon = WarBoardData__GetExpensiveIcon((WarBoardData_o *)Instance, 0LL),
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExpensiveIcon),
        Instance = System_String__Format((System_String_o *)StringLiteral_20352/*"icon_drop_item_{0:00}"*/, v14, 0LL),
        !getTreasureIcon) )
  {
LABEL_11:
    sub_1BCAA3C(Instance, v9);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1412E & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardPlayingUIController___c_TypeInfo, v1, v2);
    byte_4B1412E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardPlayingUIController___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardPlayingUIController___c_TypeInfo->static_fields->__9 = (struct WarBoardPlayingUIController___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardPlayingUIController___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1412F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v3, v4);
    byte_4B1412F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B11139 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Instance; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x20

  if ( (byte_4B14130 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, ok, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__, v8, v9);
    sub_1BCA7E0(&WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo, v10, v11);
    byte_4B14130 = 1;
  }
  v12 = sub_1BCAA2C(WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo, ok, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 24) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v15, v16, v17, v18, v19, v20),
        *(_BYTE *)(v12 + 16) = ok,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24),
        System_Action___ctor(
          v25,
          (Il2CppObject *)v12,
          Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v13, v14);
  }
  WarBoardManager__HideTurnEndConfirmPopup((WarBoardManager_o *)Instance, v25, 0LL);
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
      sub_1BCAA3C(this, method);
    }
    WarBoardManager__NextTurn((WarBoardManager_o *)this, 0LL);
  }
}