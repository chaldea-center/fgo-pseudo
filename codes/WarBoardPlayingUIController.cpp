void WarBoardPlayingUIController___ctor(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardPlayingUIController__Active(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void WarBoardPlayingUIController__Awake(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *object; // x20
  __int64 nextTurnObject; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Component_object; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *splitAPLabel; // x21
  UIFont_o *v13; // x20
  __int64 v14; // x2
  UnityEngine_Object_o *maxAPLabel; // x21
  __int64 v16; // x2
  UnityEngine_Object_o *currentAPLabel; // x21
  UnityEngine_Object_o *nextTurnButtonBlinkPrefab; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  UnityEngine_Transform_o *v36; // x21
  UnityEngine_Object_o *Child; // x20
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  struct UICommonButton_o *nextTurnButton; // x8
  struct UnityEngine_GameObject_array *tweenTargets; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59362EF & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_21FFC50(&StringLiteral_7078/*"Fonts/FGO-NumberFont-02"*/);
    byte_59362EF = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_7078/*"Fonts/FGO-NumberFont-02"*/,
             (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  nextTurnObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0, 0);
  if ( (nextTurnObject & 1) != 0 )
  {
    if ( !object )
      goto LABEL_39;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)object,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    splitAPLabel = (UnityEngine_Object_o *)this->fields.splitAPLabel;
    v13 = (UIFont_o *)Component_object;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    if ( UnityEngine_Object__op_Inequality(splitAPLabel, 0, 0) )
    {
      nextTurnObject = (__int64)this->fields.splitAPLabel;
      if ( !nextTurnObject )
        goto LABEL_39;
      UILabel__set_bitmapFont((UILabel_o *)nextTurnObject, v13, 0);
    }
    maxAPLabel = (UnityEngine_Object_o *)this->fields.maxAPLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v14);
    if ( UnityEngine_Object__op_Inequality(maxAPLabel, 0, 0) )
    {
      nextTurnObject = (__int64)this->fields.maxAPLabel;
      if ( !nextTurnObject )
        goto LABEL_39;
      UILabel__set_bitmapFont((UILabel_o *)nextTurnObject, v13, 0);
    }
    currentAPLabel = (UnityEngine_Object_o *)this->fields.currentAPLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v16);
    if ( UnityEngine_Object__op_Inequality(currentAPLabel, 0, 0) )
    {
      nextTurnObject = (__int64)this->fields.currentAPLabel;
      if ( !nextTurnObject )
        goto LABEL_39;
      UILabel__set_bitmapFont((UILabel_o *)nextTurnObject, v13, 0);
    }
  }
  nextTurnButtonBlinkPrefab = (UnityEngine_Object_o *)this->fields.nextTurnButtonBlinkPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  nextTurnObject = UnityEngine_Object__op_Inequality(nextTurnButtonBlinkPrefab, 0, 0);
  if ( (nextTurnObject & 1) != 0 )
  {
    nextTurnObject = (__int64)this->fields.nextTurnObject;
    if ( !nextTurnObject )
      goto LABEL_39;
    v25 = (Il2CppObject *)this->fields.nextTurnButtonBlinkPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nextTurnObject, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
    v29 = UnityEngine_Object__Instantiate_object__59506996(
            v25,
            transform,
            (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    this->fields.nextTurnButtonBlink = (struct UnityEngine_GameObject_o *)v29;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.nextTurnButtonBlink,
      (int32_t)v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    nextTurnObject = (__int64)this->fields.nextTurnButtonBlink;
    if ( !nextTurnObject )
      goto LABEL_39;
    nextTurnObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nextTurnObject, 0);
    if ( !this->fields.nextTurnButton )
      goto LABEL_39;
    v36 = (UnityEngine_Transform_o *)nextTurnObject;
    nextTurnObject = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.nextTurnButton,
                                0);
    if ( !nextTurnObject )
      goto LABEL_39;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextTurnObject, 0);
    if ( !v36 )
      goto LABEL_39;
    UnityEngine_Transform__set_localPosition(v36, localPosition, 0);
    Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(this->fields.nextTurnButtonBlink, 0, 0);
    nextTurnObject = UnityEngine_Object__op_Inequality(Child, 0, 0);
    if ( (nextTurnObject & 1) == 0 )
      goto LABEL_37;
    if ( !byte_5931820 )
    {
      nextTurnObject = sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
      byte_5931820 = 1;
    }
    if ( !Child )
LABEL_39:
      sub_21FFECC(nextTurnObject, v7);
    v42.fields.z = 0.0;
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    v42.fields.x = static_fields->zeroVector.fields.x;
    v42.fields.y = static_fields->zeroVector.fields.y;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Child, v42, 0);
  }
LABEL_37:
  nextTurnButton = this->fields.nextTurnButton;
  if ( !nextTurnButton )
    goto LABEL_39;
  tweenTargets = nextTurnButton->fields.tweenTargets;
  this->fields.nextTurnButtonTweenObjectCache = tweenTargets;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nextTurnButtonTweenObjectCache,
    (int32_t)tweenTargets,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void WarBoardPlayingUIController__CallbackBackButton(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_59362FE & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_59362FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0);
}


void WarBoardPlayingUIController__CallbackRetireButton(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  WarBoardPlayingUIController___c_c *v5; // x8
  WarBoardManager_o *v6; // x19
  struct WarBoardPlayingUIController___c_StaticFields *static_fields; // x9
  System_Action_o *_9__40_0; // x20
  Il2CppObject *v9; // x21
  struct WarBoardPlayingUIController___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59362FD & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__);
    sub_21FFC50(&WarBoardPlayingUIController___c_TypeInfo);
    byte_59362FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v5 = WarBoardPlayingUIController___c_TypeInfo;
  v6 = (WarBoardManager_o *)Instance;
  if ( !*(&WarBoardPlayingUIController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPlayingUIController___c_TypeInfo, v3, v4);
    v5 = WarBoardPlayingUIController___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__40_0 = static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v3, v4);
      static_fields = WarBoardPlayingUIController___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__40_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__40_0, v9, Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__, 0);
    v10 = WarBoardPlayingUIController___c_TypeInfo->static_fields;
    v10->__9__40_0 = _9__40_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->__9__40_0, (int32_t)_9__40_0, v11, v12, v13, v14, v15, v16);
  }
  if ( !v6 )
    sub_21FFECC(Instance, v3);
  WarBoardManager__Retire(v6, _9__40_0, 0);
}


void WarBoardPlayingUIController__CallbackSuspendButton(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Request_object; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_59362FB & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_WarBoardResumeRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardPlayingUIController_SuspendResponse__);
    byte_59362FB = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_WarBoardPlayingUIController_SuspendResponse__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_WarBoardResumeRequest___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || !Request_object )
    sub_21FFECC(Instance, v8);
  WarBoardResumeRequest__beginRequest(
    (WarBoardResumeRequest_o *)Request_object,
    (WarBoardData_o *)Instance[27].monitor,
    0);
}


void WarBoardPlayingUIController__Deactive(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardPlayingUIController__NondispTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *playerTurnRoot; // x0

  playerTurnRoot = this->fields.playerTurnRoot;
  if ( !playerTurnRoot
    || (UnityEngine_GameObject__SetActive(playerTurnRoot, 0, 0), (playerTurnRoot = this->fields.enemyTurnRoot) == 0) )
  {
    sub_21FFECC(playerTurnRoot, method);
  }
  UnityEngine_GameObject__SetActive(playerTurnRoot, 0, 0);
}


void WarBoardPlayingUIController__OnClickNextTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  __int64 v2; // x19
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  Il2CppObject **v11; // x20
  bool exist; // w8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  Il2CppObject *v15; // x20
  System_Action_bool__o *v16; // x21
  System_Reflection_MethodBase_o *v17; // x0

  if ( (byte_59362F4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__);
    sub_21FFC50(&WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo);
    sub_21FFC50(&Method_WarBoardPlayingUIController_OnClickNextTurn__);
    byte_59362F4 = 1;
  }
  v2 = sub_21FFEBC(WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v2 )
    goto LABEL_15;
  *(_QWORD *)(v2 + 16) = Instance;
  v11 = (Il2CppObject **)(v2 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v2 + 16), (int32_t)Instance, v5, v6, v7, v8, v9, v10);
  Instance = *(Il2CppObject **)(v2 + 16);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0, 0);
  Instance = *v11;
  if ( !*v11 )
    goto LABEL_15;
  exist = WarBoardManager__ExistEnableActionPieceExtend((WarBoardManager_o *)Instance, 0);
  v13 = Method_WarBoardPlayingUIController_OnClickNextTurn__;
  if ( exist )
  {
    if ( (*((_BYTE *)Method_WarBoardPlayingUIController_OnClickNextTurn__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_21FFC68(Method_WarBoardPlayingUIController_OnClickNextTurn__);
    v14 = (System_Reflection_MethodBase_o *)sub_21FFC34(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
    v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v16 = (System_Action_bool__o *)sub_21FFEBC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v16,
      (Il2CppObject *)v2,
      Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__,
      0);
    if ( v15 )
    {
      WarBoardManager__ShowTurnEndConfirmPopup((WarBoardManager_o *)v15, v16, 0);
      return;
    }
LABEL_15:
    sub_21FFECC(Instance, v4);
  }
  if ( (*((_BYTE *)Method_WarBoardPlayingUIController_OnClickNextTurn__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_21FFC68(Method_WarBoardPlayingUIController_OnClickNextTurn__);
  v17 = (System_Reflection_MethodBase_o *)sub_21FFC34(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 8, 0, 0);
  Instance = *v11;
  if ( !*v11 )
    goto LABEL_15;
  WarBoardManager__NextTurn((WarBoardManager_o *)Instance, 0);
}


void WarBoardPlayingUIController__OnClickReturnButton(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *backPrefab; // x20
  Il2CppObject *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  WarBoardBackMenuComponent_o *v12; // x20
  System_Action_o *v13; // x21
  System_Action_o *v14; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x4

  if ( (byte_59362FA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardPlayingUIController_CallbackBackButton__);
    sub_21FFC50(&Method_WarBoardPlayingUIController_CallbackRetireButton__);
    sub_21FFC50(&Method_WarBoardPlayingUIController_CallbackSuspendButton__);
    sub_21FFC50(&Method_WarBoardPlayingUIController_OnClickReturnButton__);
    byte_59362FA = 1;
  }
  v3 = Method_WarBoardPlayingUIController_OnClickReturnButton__;
  if ( (*((_BYTE *)Method_WarBoardPlayingUIController_OnClickReturnButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_WarBoardPlayingUIController_OnClickReturnButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0, 0);
  backPrefab = (Il2CppObject *)this->fields.backPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v10 = UnityEngine_Object__Instantiate_object_(
          backPrefab,
          (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_42881912((UnityEngine_GameObject_o *)v10, gameObject, 0);
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v10, 0);
  if ( !v10
    || (Instance = UnityEngine_GameObject__GetComponent_object_(
                     (UnityEngine_GameObject_o *)v10,
                     (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___)) == 0 )
  {
LABEL_12:
    sub_21FFECC(Instance, v6);
  }
  v12 = (WarBoardBackMenuComponent_o *)Instance;
  WarBoardBackMenuComponent__Init((WarBoardBackMenuComponent_o *)Instance, v6);
  v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackSuspendButton__, 0);
  v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackRetireButton__, 0);
  v15 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0);
  WarBoardBackMenuComponent__Open(v12, v13, v14, v15, v16);
}


void WarBoardPlayingUIController__OnClickTreasureButton(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  _QWORD *v4; // x8
  WarBoardManager_o *v5; // x20
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *treasureListPrefab; // x21
  Il2CppObject *v12; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  WarBoardTreasureListComponent_o *v14; // x21
  System_Int32_array *TreasureIdList; // x20
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x4

  if ( (byte_59362F9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardPlayingUIController_CallbackBackButton__);
    sub_21FFC50(&Method_WarBoardPlayingUIController_OnClickTreasureButton__);
    byte_59362F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v4 = Method_WarBoardPlayingUIController_OnClickTreasureButton__;
  v5 = (WarBoardManager_o *)Instance;
  if ( (*((_BYTE *)Method_WarBoardPlayingUIController_OnClickTreasureButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_21FFC68(Method_WarBoardPlayingUIController_OnClickTreasureButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v6, 9, 0, 0);
  if ( !v5 )
    goto LABEL_12;
  WarBoardManager__SetMapTouchEnable(v5, 0, 0, 0);
  WarBoardManager__HideSimplePopup(v5, 0, 0);
  treasureListPrefab = (Il2CppObject *)this->fields.treasureListPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  v12 = UnityEngine_Object__Instantiate_object_(
          treasureListPrefab,
          (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_42881912((UnityEngine_GameObject_o *)v12, gameObject, 0);
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v12, 0);
  if ( !v12
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v12,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___)) == 0
    || (v14 = (WarBoardTreasureListComponent_o *)Component_object,
        WarBoardTreasureListComponent__Init((WarBoardTreasureListComponent_o *)Component_object, v8),
        (Component_object = (Il2CppObject *)v5->fields._warBoardData_k__BackingField) == 0) )
  {
LABEL_12:
    sub_21FFECC(Component_object, v8);
  }
  TreasureIdList = WarBoardData__GetTreasureIdList((WarBoardData_o *)Component_object, 0);
  v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0);
  WarBoardTreasureListComponent__Open(v14, TreasureIdList, 2, v16, v17);
}


void WarBoardPlayingUIController__OnDestroy(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_nextTurnButtonBlink; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *nextTurnButtonBlink; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_59362FF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59362FF = 1;
  }
  nextTurnButtonBlink = this->fields.nextTurnButtonBlink;
  p_nextTurnButtonBlink = (MissionNaviTransitionBoardItem_o *)&this->fields.nextTurnButtonBlink;
  v5 = (UnityEngine_Object_o *)nextTurnButtonBlink;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_nextTurnButtonBlink->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    UnityEngine_Object__Destroy_83246496(klass, 0);
    p_nextTurnButtonBlink->klass = 0;
    sub_21FFBF4(p_nextTurnButtonBlink, 0, v10, v11, v12, v13, v14, v15);
  }
}


void WarBoardPlayingUIController__SetActionPoint(
        WarBoardPlayingUIController_o *this,
        int32_t current,
        int32_t max,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *splitAPLabel; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *v13; // x20
  UnityEngine_Object_o *maxAPLabel; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *v17; // x20
  UnityEngine_Object_o *currentAPLabel; // x20
  UILabel_o *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  System_String_o *v22; // x20
  System_String_o *v23; // x0
  int32_t v24; // [xsp+8h] [xbp-28h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-24h] BYREF

  v25 = current;
  v24 = max;
  if ( (byte_59362F2 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&StringLiteral_15991/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_15990/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    byte_59362F2 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  if ( WarBoardManager__EnableAction(Instance, 0) )
  {
    Instance = 0;
  }
  else
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (WarBoardManager_o *)WarBoardManager__IsPlayerTurn(Instance, 0);
  }
  if ( !this
    || (WarBoardPlayingUIController__SetBlinkNextTurnButton(this, (unsigned __int8)Instance & 1, v7),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
LABEL_43:
    sub_21FFECC(Instance, v6);
  }
  if ( Instance->fields._controllType_k__BackingField == 2 )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    if ( WarBoardManager__get_warBoardActionPointEntity(Instance, 0) )
    {
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (WarBoardManager_o *)WarBoardManager__get_warBoardActionPointEntity(Instance, 0);
      if ( !Instance )
        goto LABEL_43;
      if ( !WarBoardActionPointEntity__get_HasCost((WarBoardActionPointEntity_o *)Instance, 0) )
      {
        Instance = (WarBoardManager_o *)this->fields.apLabelRoot;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          return;
        }
        goto LABEL_43;
      }
    }
  }
  Instance = (WarBoardManager_o *)this->fields.apLabelRoot;
  if ( !Instance )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  splitAPLabel = (UnityEngine_Object_o *)this->fields.splitAPLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( UnityEngine_Object__op_Inequality(splitAPLabel, 0, 0) )
  {
    v13 = this->fields.splitAPLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
    Instance = (WarBoardManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15991/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0);
    if ( !v13 )
      goto LABEL_43;
    UILabel__set_text(v13, (System_String_o *)Instance, 0);
  }
  maxAPLabel = (UnityEngine_Object_o *)this->fields.maxAPLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  if ( UnityEngine_Object__op_Inequality(maxAPLabel, 0, 0) )
  {
    v17 = this->fields.maxAPLabel;
    Instance = (WarBoardManager_o *)System_Int32__ToString((int32_t)&v24, 0);
    if ( !v17 )
      goto LABEL_43;
    UILabel__set_text(v17, (System_String_o *)Instance, 0);
  }
  currentAPLabel = (UnityEngine_Object_o *)this->fields.currentAPLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  if ( UnityEngine_Object__op_Inequality(currentAPLabel, 0, 0) )
  {
    v19 = this->fields.currentAPLabel;
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      if ( WarBoardManager__EnableAction(Instance, 0) )
      {
        v22 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_15990/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0);
      }
      v23 = System_Int32__ToString((int32_t)&v25, 0);
      Instance = (WarBoardManager_o *)System_String__Concat_75438412(v22, v23, 0);
      if ( v19 )
      {
        UILabel__set_text(v19, (System_String_o *)Instance, 0);
        return;
      }
    }
    goto LABEL_43;
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPlayingUIController__SetBlinkNextTurnButton(
        WarBoardPlayingUIController_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTurnButtonBlink; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_59362F3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59362F3 = 1;
  }
  nextTurnButtonBlink = (UnityEngine_Object_o *)this->fields.nextTurnButtonBlink;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value, method);
  if ( UnityEngine_Object__op_Inequality(nextTurnButtonBlink, 0, 0) )
  {
    v7 = this->fields.nextTurnButtonBlink;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UnityEngine_GameObject__SetActive(v7, value, 0);
  }
}


void WarBoardPlayingUIController__SetHeaderTitle(
        WarBoardPlayingUIController_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_59362F6 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59362F6 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name, method);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v7 = this->fields.titleLabel;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UILabel__set_text(v7, name, 0);
  }
}


void WarBoardPlayingUIController__SetNPCTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *nextTurnButton; // x20
  __int64 v5; // x1
  struct UICommonButton_o *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_59362F1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59362F1 = 1;
  }
  nextTurnButton = (UnityEngine_Object_o *)this->fields.nextTurnButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(nextTurnButton, 0, 0) )
  {
    v6 = this->fields.nextTurnButton;
    if ( !v6 || (UICommonButton__SetButtonEnable(v6, 0, 1, 0), (v6 = this->fields.nextTurnButton) == 0) )
      sub_21FFECC(v6, v5);
    v6->fields.tweenTargets = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v6->fields.tweenTargets, 0, v7, v8, v9, v10, v11, v12);
  }
}


void WarBoardPlayingUIController__SetPlayerTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *nextTurnButton; // x20
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct UICommonButton_o *v12; // x0
  struct UnityEngine_GameObject_array *nextTurnButtonTweenObjectCache; // x1

  if ( (byte_59362F0 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59362F0 = 1;
  }
  nextTurnButton = (UnityEngine_Object_o *)this->fields.nextTurnButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(nextTurnButton, 0, 0) )
  {
    v12 = this->fields.nextTurnButton;
    if ( !v12
      || (nextTurnButtonTweenObjectCache = this->fields.nextTurnButtonTweenObjectCache,
          v12->fields.tweenTargets = nextTurnButtonTweenObjectCache,
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v12->fields.tweenTargets,
            (int32_t)nextTurnButtonTweenObjectCache,
            v6,
            v7,
            v8,
            v9,
            v10,
            v11),
          (v12 = this->fields.nextTurnButton) == 0) )
    {
      sub_21FFECC(v12, v5);
    }
    UICommonButton__SetButtonEnable(v12, 1, 1, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPlayingUIController__SetTimeAccelerateAnimation(
        WarBoardPlayingUIController_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardSkipPrefab; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_59362F7 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59362F7 = 1;
  }
  boardSkipPrefab = (UnityEngine_Object_o *)this->fields.boardSkipPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, method);
  if ( !UnityEngine_Object__op_Equality(boardSkipPrefab, 0, 0) )
  {
    v7 = this->fields.boardSkipPrefab;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UnityEngine_GameObject__SetActive(v7, isDisp, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPlayingUIController__SetTurn(
        WarBoardPlayingUIController_o *this,
        bool isPlayer,
        int32_t turnCount,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *playerTurnRoot; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_59362F5 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_16015/*"WARBOARD_TURN_BASE"*/);
    byte_59362F5 = 1;
  }
  playerTurnRoot = this->fields.playerTurnRoot;
  if ( !playerTurnRoot )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(playerTurnRoot, isPlayer, 0);
  playerTurnRoot = this->fields.enemyTurnRoot;
  if ( !playerTurnRoot )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(playerTurnRoot, !isPlayer, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_16015/*"WARBOARD_TURN_BASE"*/, 0);
  v13 = turnCount;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v13);
  playerTurnRoot = (UnityEngine_GameObject_o *)System_String__Format(v10, v11, 0);
  if ( !this->fields.playerTurnLabel
    || (v12 = (System_String_o *)playerTurnRoot,
        UILabel__set_text(this->fields.playerTurnLabel, (System_String_o *)playerTurnRoot, 0),
        (playerTurnRoot = (UnityEngine_GameObject_o *)this->fields.enemyTurnLabel) == 0) )
  {
LABEL_10:
    sub_21FFECC(playerTurnRoot, isPlayer);
  }
  UILabel__set_text((UILabel_o *)playerTurnRoot, v12, 0);
}


void WarBoardPlayingUIController__SuspendResponse(
        WarBoardPlayingUIController_o *this,
        System_String_o *response,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_59362FC & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_59362FC = 1;
  }
  if ( !System_String__op_Equality(response, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v5);
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 9, 1, 0, 0, 0);
  }
}


void WarBoardPlayingUIController__Update(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *v5; // x20
  int stageNpcMaster; // w8
  UILabel_o *getTreasureLabel; // x21
  UISprite_o *getTreasureIcon; // x19
  Il2CppObject *v9; // x0
  int32_t ExpensiveIcon; // [xsp+8h] [xbp-28h] BYREF
  int v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59362F8 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&StringLiteral_21118/*"icon_drop_item_{0:00}"*/);
    byte_59362F8 = 1;
  }
  v11 = 0;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v5 = Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_11;
  Instance = (WarBoardData_o *)WarBoardData__GetTreasureIdList(Instance, 0);
  if ( !Instance )
    goto LABEL_11;
  stageNpcMaster = (int)Instance->fields.stageNpcMaster;
  Instance = (WarBoardData_o *)this->fields.getTreasureRoot;
  v11 = stageNpcMaster;
  if ( !Instance )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, stageNpcMaster > 0, 0);
  getTreasureLabel = this->fields.getTreasureLabel;
  Instance = (WarBoardData_o *)System_Int32__ToString((int32_t)&v11, 0);
  if ( !getTreasureLabel
    || (UILabel__set_text(getTreasureLabel, (System_String_o *)Instance, 0),
        (Instance = (WarBoardData_o *)v5[1].fields.playedStageReinforcementsList) == 0)
    || (getTreasureIcon = this->fields.getTreasureIcon,
        ExpensiveIcon = WarBoardData__GetExpensiveIcon(Instance, 0),
        v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &ExpensiveIcon),
        Instance = (WarBoardData_o *)System_String__Format((System_String_o *)StringLiteral_21118/*"icon_drop_item_{0:00}"*/, v9, 0),
        !getTreasureIcon) )
  {
LABEL_11:
    sub_21FFECC(Instance, v4);
  }
  UISprite__set_spriteName(getTreasureIcon, (System_String_o *)Instance, 0);
}


UnityEngine_GameObject_o *WarBoardPlayingUIController__get_EventInfoAnimRoot(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  return this->fields.eventInfoAnimRoot;
}


void WarBoardPlayingUIController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5936300 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardPlayingUIController___c_TypeInfo);
    byte_5936300 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardPlayingUIController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardPlayingUIController___c_TypeInfo->static_fields->__9 = (struct WarBoardPlayingUIController___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardPlayingUIController___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardPlayingUIController___c___ctor(WarBoardPlayingUIController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPlayingUIController___c___CallbackRetireButton_b__40_0(
        WarBoardPlayingUIController___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_476E8C0 *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_5936301 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5936301 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_5932ADC )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932ADC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  v5 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
  static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance(v5);
  if ( !Instance )
    sub_21FFECC(0, v7);
  WarBoardManager__Exit((WarBoardManager_o *)Instance, 0);
}


void WarBoardPlayingUIController___c__DisplayClass26_0___ctor(
        WarBoardPlayingUIController___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPlayingUIController___c__DisplayClass26_0___OnClickNextTurn_b__0(
        WarBoardPlayingUIController___c__DisplayClass26_0_o *this,
        bool ok,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo_476E8C0 *v14; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v16; // x20

  if ( (byte_5936302 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__);
    sub_21FFC50(&WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo);
    byte_5936302 = 1;
  }
  v5 = sub_21FFEBC(WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        v14 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__,
        *(_BYTE *)(v5 + 16) = ok,
        Instance = SingletonMonoBehaviour_object___get_Instance(v14),
        v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__,
          0),
        !Instance) )
  {
    sub_21FFECC(v6, v7);
  }
  WarBoardManager__HideTurnEndConfirmPopup((WarBoardManager_o *)Instance, v16, 0);
}


void WarBoardPlayingUIController___c__DisplayClass26_1___ctor(
        WarBoardPlayingUIController___c__DisplayClass26_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPlayingUIController___c__DisplayClass26_1___OnClickNextTurn_b__1(
        WarBoardPlayingUIController___c__DisplayClass26_1_o *this,
        const MethodInfo *method)
{
  struct WarBoardPlayingUIController___c__DisplayClass26_0_o *CS___8__locals1; // x8

  if ( this->fields.ok )
  {
    CS___8__locals1 = this->fields.CS___8__locals1;
    if ( !CS___8__locals1
      || (this = (WarBoardPlayingUIController___c__DisplayClass26_1_o *)CS___8__locals1->fields.warBoardManager) == 0 )
    {
      sub_21FFECC(this, method);
    }
    WarBoardManager__NextTurn((WarBoardManager_o *)this, 0);
  }
}