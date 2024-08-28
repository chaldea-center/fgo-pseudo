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
    sub_1B68930(0LL, v3);
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
  __int64 v9; // x1
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o *splitAPLabel; // x21
  UIFont_o *v12; // x20
  UnityEngine_Object_o *maxAPLabel; // x21
  UnityEngine_Object_o *currentAPLabel; // x21
  UnityEngine_Object_o *nextTurnButtonBlinkPrefab; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *v18; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_Transform_o *v23; // x21
  int v24; // s0
  UnityEngine_Object_o *Child; // x20
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  struct UICommonButton_o *nextTurnButton; // x8
  struct UnityEngine_GameObject_array *tweenTargets; // x1
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A06C11 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_UIFont___, method);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject____75841248, v3);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v4);
    sub_1B686D4(&Method_UnityEngine_Resources_Load_GameObject___, v5);
    sub_1B686D4(&StringLiteral_6743/*"Fonts/FGO-NumberFont-02"*/, v6);
    byte_4A06C11 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_6743/*"Fonts/FGO-NumberFont-02"*/,
             (const MethodInfo_2EDCB20 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nextTurnObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0LL, 0LL);
  if ( (nextTurnObject & 1) != 0 )
  {
    if ( !object )
      goto LABEL_39;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)object,
                         (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    splitAPLabel = (UnityEngine_Object_o *)this->fields.splitAPLabel;
    v12 = (UIFont_o *)Component_object;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(splitAPLabel, 0LL, 0LL) )
    {
      nextTurnObject = (__int64)this->fields.splitAPLabel;
      if ( !nextTurnObject )
        goto LABEL_39;
      UILabel__set_bitmapFont((UILabel_o *)nextTurnObject, v12, 0LL);
    }
    maxAPLabel = (UnityEngine_Object_o *)this->fields.maxAPLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(maxAPLabel, 0LL, 0LL) )
    {
      nextTurnObject = (__int64)this->fields.maxAPLabel;
      if ( !nextTurnObject )
        goto LABEL_39;
      UILabel__set_bitmapFont((UILabel_o *)nextTurnObject, v12, 0LL);
    }
    currentAPLabel = (UnityEngine_Object_o *)this->fields.currentAPLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(currentAPLabel, 0LL, 0LL) )
    {
      nextTurnObject = (__int64)this->fields.currentAPLabel;
      if ( !nextTurnObject )
        goto LABEL_39;
      UILabel__set_bitmapFont((UILabel_o *)nextTurnObject, v12, 0LL);
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
    v18 = (Il2CppObject *)this->fields.nextTurnButtonBlinkPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nextTurnObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v20 = UnityEngine_Object__Instantiate_object__49072196(
            v18,
            transform,
            (const MethodInfo_2ECC844 *)Method_UnityEngine_Object_Instantiate_GameObject____75841248);
    this->fields.nextTurnButtonBlink = (struct UnityEngine_GameObject_o *)v20;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.nextTurnButtonBlink, (int32_t)v20, v21, v22);
    nextTurnObject = (__int64)this->fields.nextTurnButtonBlink;
    if ( !nextTurnObject )
      goto LABEL_39;
    nextTurnObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nextTurnObject, 0LL);
    if ( !this->fields.nextTurnButton )
      goto LABEL_39;
    v23 = (UnityEngine_Transform_o *)nextTurnObject;
    nextTurnObject = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.nextTurnButton,
                                0LL);
    if ( !nextTurnObject )
      goto LABEL_39;
    *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)nextTurnObject,
                                       0LL);
    if ( !v23 )
      goto LABEL_39;
    UnityEngine_Transform__set_localPosition(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
    Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(this->fields.nextTurnButtonBlink, 0, 0LL);
    nextTurnObject = UnityEngine_Object__op_Inequality(Child, 0LL, 0LL);
    if ( (nextTurnObject & 1) == 0 )
      goto LABEL_37;
    if ( !byte_4A037FA )
    {
      nextTurnObject = sub_1B686D4(&UnityEngine_Vector2_TypeInfo, v9);
      byte_4A037FA = 1;
    }
    if ( !Child )
LABEL_39:
      sub_1B68930(nextTurnObject, v9);
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
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.nextTurnButtonTweenObjectCache,
    (int32_t)tweenTargets,
    v16,
    v17);
}


void __fastcall WarBoardPlayingUIController__CallbackBackButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A06C20 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4A06C20 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v3);
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
  WarBoardPlayingUIController___c_c *v7; // x8
  WarBoardManager_o *v8; // x19
  System_Action_o *_9__40_0; // x20
  Il2CppObject *v10; // x21
  struct WarBoardPlayingUIController___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A06C1F & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    sub_1B686D4(&Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__, v3);
    sub_1B686D4(&WarBoardPlayingUIController___c_TypeInfo, v4);
    byte_4A06C1F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v7 = WarBoardPlayingUIController___c_TypeInfo;
  v8 = (WarBoardManager_o *)Instance;
  if ( !WarBoardPlayingUIController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPlayingUIController___c_TypeInfo);
    v7 = WarBoardPlayingUIController___c_TypeInfo;
  }
  _9__40_0 = v7->static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WarBoardPlayingUIController___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__40_0 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(_9__40_0, v10, Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__, 0LL);
    static_fields = WarBoardPlayingUIController___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = _9__40_0;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v12, v13);
  }
  if ( !v8 )
    sub_1B68930(Instance, v6);
  WarBoardManager__Retire(v8, _9__40_0, 0LL);
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
  Il2CppObject *Request_object; // x19
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4A06C1D & 1) == 0 )
  {
    sub_1B686D4(&Method_NetworkManager_getRequest_WarBoardResumeRequest___, method);
    sub_1B686D4(&NetworkManager_TypeInfo, v3);
    sub_1B686D4(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    sub_1B686D4(&Method_WarBoardPlayingUIController_SuspendResponse__, v6);
    byte_4A06C1D = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B68920(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_WarBoardPlayingUIController_SuspendResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_2ECB448 *)Method_NetworkManager_getRequest_WarBoardResumeRequest___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || !Request_object )
    sub_1B68930(Instance, v10);
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
    sub_1B68930(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__NondispTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *playerTurnRoot; // x0

  playerTurnRoot = this->fields.playerTurnRoot;
  if ( !playerTurnRoot
    || (UnityEngine_GameObject__SetActive(playerTurnRoot, 0, 0LL), (playerTurnRoot = this->fields.enemyTurnRoot) == 0LL) )
  {
    sub_1B68930(playerTurnRoot, method);
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
  __int64 v6; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject **v11; // x20
  bool exist; // w0
  _QWORD *v13; // x8
  bool v14; // w21
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *v16; // x20
  System_Action_bool__o *v17; // x21

  if ( (byte_4A06C16 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_bool__TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    sub_1B686D4(&Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__, v3);
    sub_1B686D4(&WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo, v4);
    sub_1B686D4(&Method_WarBoardPlayingUIController_OnClickNextTurn__, v5);
    byte_4A06C16 = 1;
  }
  v6 = sub_1B68920(WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v6 )
    goto LABEL_13;
  *(_QWORD *)(v6 + 16) = Instance;
  v11 = (Il2CppObject **)(v6 + 16);
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v6 + 16), (int32_t)Instance, v9, v10);
  Instance = *(Il2CppObject **)(v6 + 16);
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
    v13 = (_QWORD *)sub_1B686EC(Method_WarBoardPlayingUIController_OnClickNextTurn__);
  v15 = (System_Reflection_MethodBase_o *)sub_1B686B8(v13, v13[4]);
  if ( v14 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
    v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v17 = (System_Action_bool__o *)sub_1B68920(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v17,
      (Il2CppObject *)v6,
      Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__,
      0LL);
    if ( v16 )
    {
      WarBoardManager__ShowTurnEndConfirmPopup((WarBoardManager_o *)v16, v17, 0LL);
      return;
    }
LABEL_13:
    sub_1B68930(Instance, v8);
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
  const MethodInfo *v14; // x1
  Il2CppObject *backPrefab; // x20
  Il2CppObject *v16; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  WarBoardBackMenuComponent_o *v18; // x20
  System_Action_o *v19; // x21
  System_Action_o *v20; // x22
  System_Action_o *v21; // x23
  const MethodInfo *v22; // x4

  if ( (byte_4A06C1C & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___, v3);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B686D4(&Method_WarBoardPlayingUIController_CallbackBackButton__, v7);
    sub_1B686D4(&Method_WarBoardPlayingUIController_CallbackRetireButton__, v8);
    sub_1B686D4(&Method_WarBoardPlayingUIController_CallbackSuspendButton__, v9);
    sub_1B686D4(&Method_WarBoardPlayingUIController_OnClickReturnButton__, v10);
    byte_4A06C1C = 1;
  }
  v11 = Method_WarBoardPlayingUIController_OnClickReturnButton__;
  if ( (*((_BYTE *)Method_WarBoardPlayingUIController_OnClickReturnButton__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1B686EC(Method_WarBoardPlayingUIController_OnClickReturnButton__);
  v12 = (System_Reflection_MethodBase_o *)sub_1B686B8(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  backPrefab = (Il2CppObject *)this->fields.backPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__Instantiate_object_(
          backPrefab,
          (const MethodInfo_2ECC718 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_33421184((UnityEngine_GameObject_o *)v16, gameObject, 0LL);
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v16, 0LL);
  if ( !v16
    || (Instance = UnityEngine_GameObject__GetComponent_object_(
                     (UnityEngine_GameObject_o *)v16,
                     (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___)) == 0LL )
  {
LABEL_12:
    sub_1B68930(Instance, v14);
  }
  v18 = (WarBoardBackMenuComponent_o *)Instance;
  WarBoardBackMenuComponent__Init((WarBoardBackMenuComponent_o *)Instance, v14);
  v19 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackSuspendButton__, 0LL);
  v20 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackRetireButton__, 0LL);
  v21 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0LL);
  WarBoardBackMenuComponent__Open(v18, v19, v20, v21, v22);
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
  const MethodInfo *v14; // x1
  Il2CppObject *treasureListPrefab; // x21
  Il2CppObject *v16; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  WarBoardTreasureListComponent_o *v18; // x21
  System_Int32_array *TreasureIdList; // x20
  System_Action_o *v20; // x22
  const MethodInfo *v21; // x4

  if ( (byte_4A06C1B & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___, v3);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B686D4(&Method_WarBoardPlayingUIController_CallbackBackButton__, v7);
    sub_1B686D4(&Method_WarBoardPlayingUIController_OnClickTreasureButton__, v8);
    byte_4A06C1B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v10 = Method_WarBoardPlayingUIController_OnClickTreasureButton__;
  v11 = (WarBoardManager_o *)Instance;
  if ( (*((_BYTE *)Method_WarBoardPlayingUIController_OnClickTreasureButton__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B686EC(Method_WarBoardPlayingUIController_OnClickTreasureButton__);
  v12 = (System_Reflection_MethodBase_o *)sub_1B686B8(v10, v10[4]);
  OverwriteAssetSoundName__PlayCommonSe(v12, 9, 0LL);
  if ( !v11 )
    goto LABEL_12;
  WarBoardManager__SetMapTouchEnable(v11, 0, 0, 0LL);
  WarBoardManager__HideSimplePopup(v11, 0LL, 0LL);
  treasureListPrefab = (Il2CppObject *)this->fields.treasureListPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__Instantiate_object_(
          treasureListPrefab,
          (const MethodInfo_2ECC718 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_33421184((UnityEngine_GameObject_o *)v16, gameObject, 0LL);
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v16, 0LL);
  if ( !v16
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v16,
                             (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___)) == 0LL
    || (v18 = (WarBoardTreasureListComponent_o *)Component_object,
        WarBoardTreasureListComponent__Init((WarBoardTreasureListComponent_o *)Component_object, v14),
        (Component_object = (Il2CppObject *)v11->fields._warBoardData_k__BackingField) == 0LL) )
  {
LABEL_12:
    sub_1B68930(Component_object, v14);
  }
  TreasureIdList = WarBoardData__GetTreasureIdList((WarBoardData_o *)Component_object, 0LL);
  v20 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0LL);
  WarBoardTreasureListComponent__Open(v18, TreasureIdList, 2, v20, v21);
}


void __fastcall WarBoardPlayingUIController__OnDestroy(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_nextTurnButtonBlink; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *nextTurnButtonBlink; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A06C21 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A06C21 = 1;
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
    UnityEngine_Object__Destroy_69171816(klass, 0LL);
    p_nextTurnButtonBlink->klass = 0LL;
    sub_1B68678(p_nextTurnButtonBlink, 0, v7, v8);
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
  if ( (byte_4A06C14 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, *(_QWORD *)&current);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B686D4(&StringLiteral_15357/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, v7);
    sub_1B686D4(&StringLiteral_1/*""*/, v8);
    sub_1B686D4(&StringLiteral_15356/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v9);
    byte_4A06C14 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (WarBoardManager_o *)WarBoardManager__EnableAction(Instance, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v11 = 0LL;
  }
  else
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (WarBoardManager_o *)WarBoardManager__IsPlayerTurn(Instance, 0LL);
    v11 = (unsigned __int8)Instance & 1;
  }
  if ( !this
    || (WarBoardPlayingUIController__SetBlinkNextTurnButton(this, v11, v12),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_43:
    sub_1B68930(Instance, v11);
  }
  if ( Instance->fields._controllType_k__BackingField == 2 )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    if ( WarBoardManager__get_warBoardActionPointEntity(Instance, 0LL) )
    {
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    Instance = (WarBoardManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15357/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
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
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v19 = LocalizationManager__Get((System_String_o *)StringLiteral_15356/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
      }
      v20 = System_Int32__ToString((int32_t)&v22, 0LL);
      Instance = (WarBoardManager_o *)System_String__Concat_61419468(v19, v20, 0LL);
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
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4A06C15 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, value);
    byte_4A06C15 = 1;
  }
  nextTurnButtonBlink = (UnityEngine_Object_o *)this->fields.nextTurnButtonBlink;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nextTurnButtonBlink, 0LL, 0LL) )
  {
    v7 = this->fields.nextTurnButtonBlink;
    if ( !v7 )
      sub_1B68930(0LL, v6);
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

  if ( (byte_4A06C18 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, name);
    byte_4A06C18 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v7 = this->fields.titleLabel;
    if ( !v7 )
      sub_1B68930(0LL, v6);
    UILabel__set_text(v7, name, 0LL);
  }
}


void __fastcall WarBoardPlayingUIController__SetNPCTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nextTurnButton; // x20
  __int64 v4; // x1
  struct UICommonButton_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A06C13 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A06C13 = 1;
  }
  nextTurnButton = (UnityEngine_Object_o *)this->fields.nextTurnButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nextTurnButton, 0LL, 0LL) )
  {
    v5 = this->fields.nextTurnButton;
    if ( !v5 || (UICommonButton__SetButtonEnable(v5, 0, 1, 0LL), (v5 = this->fields.nextTurnButton) == 0LL) )
      sub_1B68930(v5, v4);
    v5->fields.tweenTargets = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v5->fields.tweenTargets, 0, v6, v7);
  }
}


void __fastcall WarBoardPlayingUIController__SetPlayerTurn(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTurnButton; // x20
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct UICommonButton_o *v7; // x0
  struct UnityEngine_GameObject_array *nextTurnButtonTweenObjectCache; // x1

  if ( (byte_4A06C12 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A06C12 = 1;
  }
  nextTurnButton = (UnityEngine_Object_o *)this->fields.nextTurnButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nextTurnButton, 0LL, 0LL) )
  {
    v7 = this->fields.nextTurnButton;
    if ( !v7
      || (nextTurnButtonTweenObjectCache = this->fields.nextTurnButtonTweenObjectCache,
          v7->fields.tweenTargets = nextTurnButtonTweenObjectCache,
          sub_1B68678(
            (ServantStatusBattleListViewItem_o *)&v7->fields.tweenTargets,
            (int32_t)nextTurnButtonTweenObjectCache,
            v5,
            v6),
          (v7 = this->fields.nextTurnButton) == 0LL) )
    {
      sub_1B68930(v7, v4);
    }
    UICommonButton__SetButtonEnable(v7, 1, 1, 0LL);
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

  if ( (byte_4A06C19 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4A06C19 = 1;
  }
  boardSkipPrefab = (UnityEngine_Object_o *)this->fields.boardSkipPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(boardSkipPrefab, 0LL, 0LL) )
  {
    v7 = this->fields.boardSkipPrefab;
    if ( !v7 )
      sub_1B68930(0LL, v6);
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x20
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A06C17 & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, isPlayer);
    sub_1B686D4(&LocalizationManager_TypeInfo, v7);
    sub_1B686D4(&StringLiteral_15381/*"WARBOARD_TURN_BASE"*/, v8);
    byte_4A06C17 = 1;
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
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15381/*"WARBOARD_TURN_BASE"*/, 0LL);
  v16 = turnCount;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v11, v12, v13);
  playerTurnRoot = (UnityEngine_GameObject_o *)System_String__Format(v10, v14, 0LL);
  if ( !this->fields.playerTurnLabel
    || (v15 = (System_String_o *)playerTurnRoot,
        UILabel__set_text(this->fields.playerTurnLabel, (System_String_o *)playerTurnRoot, 0LL),
        (playerTurnRoot = (UnityEngine_GameObject_o *)this->fields.enemyTurnLabel) == 0LL) )
  {
LABEL_10:
    sub_1B68930(playerTurnRoot, isPlayer);
  }
  UILabel__set_text((UILabel_o *)playerTurnRoot, v15, 0LL);
}


void __fastcall WarBoardPlayingUIController__SuspendResponse(
        WarBoardPlayingUIController_o *this,
        System_String_o *response,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A06C1E & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, response);
    sub_1B686D4(&StringLiteral_21981/*"ng"*/, v4);
    byte_4A06C1E = 1;
  }
  if ( !System_String__op_Equality(response, (System_String_o *)StringLiteral_21981/*"ng"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1B68930(0LL, v6);
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 9, 1, 0LL, 0, 0LL);
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  int32_t ExpensiveIcon; // [xsp+8h] [xbp-28h] BYREF
  int v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A06C1A & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_1B686D4(&StringLiteral_20069/*"icon_drop_item_{0:00}"*/, v4);
    byte_4A06C1A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v7 = Instance;
  Instance = (void *)*((_QWORD *)Instance + 55);
  if ( !Instance )
    goto LABEL_11;
  Instance = WarBoardData__GetTreasureIdList((WarBoardData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_11;
  v8 = *((_DWORD *)Instance + 6);
  v16 = v8;
  Instance = this->fields.getTreasureRoot;
  if ( !Instance )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v8 > 0, 0LL);
  getTreasureLabel = this->fields.getTreasureLabel;
  Instance = System_Int32__ToString((int32_t)&v16, 0LL);
  if ( !getTreasureLabel
    || (UILabel__set_text(getTreasureLabel, (System_String_o *)Instance, 0LL), (Instance = (void *)v7[55]) == 0LL)
    || (getTreasureIcon = this->fields.getTreasureIcon,
        ExpensiveIcon = WarBoardData__GetExpensiveIcon((WarBoardData_o *)Instance, 0LL),
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExpensiveIcon, v11, v12, v13),
        Instance = System_String__Format((System_String_o *)StringLiteral_20069/*"icon_drop_item_{0:00}"*/, v14, 0LL),
        !getTreasureIcon) )
  {
LABEL_11:
    sub_1B68930(Instance, v6);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A06C22 & 1) == 0 )
  {
    sub_1B686D4(&WarBoardPlayingUIController___c_TypeInfo, v1);
    byte_4A06C22 = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(WarBoardPlayingUIController___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardPlayingUIController___c_TypeInfo->static_fields->__9 = (struct WarBoardPlayingUIController___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)WarBoardPlayingUIController___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  __int64 v5; // x1

  if ( (byte_4A06C23 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v2);
    byte_4A06C23 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A041D7 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
    byte_4A041D7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v5);
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
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Instance; // x19
  System_Action_o *v14; // x20

  if ( (byte_4A06C24 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, ok);
    sub_1B686D4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    sub_1B686D4(&Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__, v6);
    sub_1B686D4(&WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo, v7);
    byte_4A06C24 = 1;
  }
  v8 = sub_1B68920(WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 16) = ok,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v14 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B68930(v9, v10);
  }
  WarBoardManager__HideTurnEndConfirmPopup((WarBoardManager_o *)Instance, v14, 0LL);
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
      sub_1B68930(this, method);
    }
    WarBoardManager__NextTurn((WarBoardManager_o *)this, 0LL);
  }
}