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
    sub_1C71608(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void WarBoardPlayingUIController__Awake(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  Il2CppObject *object; // x20
  __int64 nextTurnObject; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o *splitAPLabel; // x21
  UIFont_o *v8; // x20
  UnityEngine_Object_o *maxAPLabel; // x21
  UnityEngine_Object_o *currentAPLabel; // x21
  UnityEngine_Object_o *nextTurnButtonBlinkPrefab; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *v18; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  UnityEngine_Transform_o *v27; // x21
  UnityEngine_Object_o *Child; // x20
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  struct UICommonButton_o *nextTurnButton; // x8
  struct UnityEngine_GameObject_array *tweenTargets; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC50EF & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject____78725064);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C713B0(&StringLiteral_6800/*"Fonts/FGO-NumberFont-02"*/);
    byte_4CC50EF = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_6800/*"Fonts/FGO-NumberFont-02"*/,
             (const MethodInfo_31E7F68 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nextTurnObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0, 0);
  if ( (nextTurnObject & 1) != 0 )
  {
    if ( !object )
      goto LABEL_39;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)object,
                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    splitAPLabel = (UnityEngine_Object_o *)this->fields.splitAPLabel;
    v8 = (UIFont_o *)Component_object;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(splitAPLabel, 0, 0) )
    {
      nextTurnObject = (__int64)this->fields.splitAPLabel;
      if ( !nextTurnObject )
        goto LABEL_39;
      UILabel__set_bitmapFont((UILabel_o *)nextTurnObject, v8, 0);
    }
    maxAPLabel = (UnityEngine_Object_o *)this->fields.maxAPLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(maxAPLabel, 0, 0) )
    {
      nextTurnObject = (__int64)this->fields.maxAPLabel;
      if ( !nextTurnObject )
        goto LABEL_39;
      UILabel__set_bitmapFont((UILabel_o *)nextTurnObject, v8, 0);
    }
    currentAPLabel = (UnityEngine_Object_o *)this->fields.currentAPLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(currentAPLabel, 0, 0) )
    {
      nextTurnObject = (__int64)this->fields.currentAPLabel;
      if ( !nextTurnObject )
        goto LABEL_39;
      UILabel__set_bitmapFont((UILabel_o *)nextTurnObject, v8, 0);
    }
  }
  nextTurnButtonBlinkPrefab = (UnityEngine_Object_o *)this->fields.nextTurnButtonBlinkPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nextTurnObject = UnityEngine_Object__op_Inequality(nextTurnButtonBlinkPrefab, 0, 0);
  if ( (nextTurnObject & 1) != 0 )
  {
    nextTurnObject = (__int64)this->fields.nextTurnObject;
    if ( !nextTurnObject )
      goto LABEL_39;
    v18 = (Il2CppObject *)this->fields.nextTurnButtonBlinkPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nextTurnObject, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v20 = UnityEngine_Object__Instantiate_object__52264420(
            v18,
            transform,
            (const MethodInfo_31D7DE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78725064);
    this->fields.nextTurnButtonBlink = (struct UnityEngine_GameObject_o *)v20;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.nextTurnButtonBlink,
      (int32_t)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    nextTurnObject = (__int64)this->fields.nextTurnButtonBlink;
    if ( !nextTurnObject )
      goto LABEL_39;
    nextTurnObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nextTurnObject, 0);
    if ( !this->fields.nextTurnButton )
      goto LABEL_39;
    v27 = (UnityEngine_Transform_o *)nextTurnObject;
    nextTurnObject = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.nextTurnButton,
                                0);
    if ( !nextTurnObject )
      goto LABEL_39;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nextTurnObject, 0);
    if ( !v27 )
      goto LABEL_39;
    UnityEngine_Transform__set_localPosition(v27, localPosition, 0);
    Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(this->fields.nextTurnButtonBlink, 0, 0);
    nextTurnObject = UnityEngine_Object__op_Inequality(Child, 0, 0);
    if ( (nextTurnObject & 1) == 0 )
      goto LABEL_37;
    if ( !byte_4CC0BE9 )
    {
      nextTurnObject = sub_1C713B0(&UnityEngine_Vector2_TypeInfo);
      byte_4CC0BE9 = 1;
    }
    if ( !Child )
LABEL_39:
      sub_1C71608(nextTurnObject, v5);
    v33.fields.z = 0.0;
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    v33.fields.x = static_fields->zeroVector.fields.x;
    v33.fields.y = static_fields->zeroVector.fields.y;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Child, v33, 0);
  }
LABEL_37:
  nextTurnButton = this->fields.nextTurnButton;
  if ( !nextTurnButton )
    goto LABEL_39;
  tweenTargets = nextTurnButton->fields.tweenTargets;
  this->fields.nextTurnButtonTweenObjectCache = tweenTargets;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.nextTurnButtonTweenObjectCache,
    (int32_t)tweenTargets,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void WarBoardPlayingUIController__CallbackBackButton(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CC50FE & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CC50FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v3);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0);
}


void WarBoardPlayingUIController__CallbackRetireButton(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  WarBoardPlayingUIController___c_c *v4; // x8
  WarBoardManager_o *v5; // x19
  System_Action_o *_9__40_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardPlayingUIController___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CC50FD & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__);
    sub_1C713B0(&WarBoardPlayingUIController___c_TypeInfo);
    byte_4CC50FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v4 = WarBoardPlayingUIController___c_TypeInfo;
  v5 = (WarBoardManager_o *)Instance;
  if ( !WarBoardPlayingUIController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPlayingUIController___c_TypeInfo);
    v4 = WarBoardPlayingUIController___c_TypeInfo;
  }
  _9__40_0 = v4->static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = WarBoardPlayingUIController___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__40_0 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(_9__40_0, v7, Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__, 0);
    static_fields = WarBoardPlayingUIController___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = _9__40_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__40_0,
      (int32_t)_9__40_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !v5 )
    sub_1C71608(Instance, v3);
  WarBoardManager__Retire(v5, _9__40_0, 0);
}


void WarBoardPlayingUIController__CallbackSuspendButton(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CC50FB & 1) == 0 )
  {
    sub_1C713B0(&Method_NetworkManager_getRequest_WarBoardResumeRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&Method_WarBoardPlayingUIController_SuspendResponse__);
    byte_4CC50FB = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_WarBoardPlayingUIController_SuspendResponse__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_WarBoardResumeRequest___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || !Request_object )
    sub_1C71608(Instance, v6);
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
    sub_1C71608(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardPlayingUIController__NondispTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *playerTurnRoot; // x0

  playerTurnRoot = this->fields.playerTurnRoot;
  if ( !playerTurnRoot
    || (UnityEngine_GameObject__SetActive(playerTurnRoot, 0, 0), (playerTurnRoot = this->fields.enemyTurnRoot) == 0) )
  {
    sub_1C71608(playerTurnRoot, method);
  }
  UnityEngine_GameObject__SetActive(playerTurnRoot, 0, 0);
}


void WarBoardPlayingUIController__OnClickNextTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  __int64 v2; // x19
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  Il2CppObject **v11; // x20
  bool exist; // w0
  _QWORD *v13; // x8
  bool v14; // w21
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *v16; // x20
  System_Action_bool__o *v17; // x21

  if ( (byte_4CC50F4 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_bool__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__);
    sub_1C713B0(&WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo);
    sub_1C713B0(&Method_WarBoardPlayingUIController_OnClickNextTurn__);
    byte_4CC50F4 = 1;
  }
  v2 = sub_1C715FC(WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v2 )
    goto LABEL_13;
  *(_QWORD *)(v2 + 16) = Instance;
  v11 = (Il2CppObject **)(v2 + 16);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v2 + 16), (int32_t)Instance, v5, v6, v7, v8, v9, v10);
  Instance = *(Il2CppObject **)(v2 + 16);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0, 0);
  Instance = *v11;
  if ( !*v11 )
    goto LABEL_13;
  exist = WarBoardManager__ExistEnableActionPieceExtend((WarBoardManager_o *)Instance, 0);
  v13 = Method_WarBoardPlayingUIController_OnClickNextTurn__;
  v14 = exist;
  if ( (*((_BYTE *)Method_WarBoardPlayingUIController_OnClickNextTurn__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C713C8(Method_WarBoardPlayingUIController_OnClickNextTurn__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C71394(v13, v13[4]);
  if ( v14 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
    v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v17 = (System_Action_bool__o *)sub_1C715FC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v17,
      (Il2CppObject *)v2,
      Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__,
      0);
    if ( v16 )
    {
      WarBoardManager__ShowTurnEndConfirmPopup((WarBoardManager_o *)v16, v17, 0);
      return;
    }
LABEL_13:
    sub_1C71608(Instance, v4);
  }
  OverwriteAssetSoundName__PlaySystemSe(v15, 8, 0, 0);
  Instance = *v11;
  if ( !*v11 )
    goto LABEL_13;
  WarBoardManager__NextTurn((WarBoardManager_o *)Instance, 0);
}


void WarBoardPlayingUIController__OnClickReturnButton(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *backPrefab; // x20
  Il2CppObject *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  WarBoardBackMenuComponent_o *v10; // x20
  System_Action_o *v11; // x21
  System_Action_o *v12; // x22
  System_Action_o *v13; // x23
  const MethodInfo *v14; // x4

  if ( (byte_4CC50FA & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&Method_WarBoardPlayingUIController_CallbackBackButton__);
    sub_1C713B0(&Method_WarBoardPlayingUIController_CallbackRetireButton__);
    sub_1C713B0(&Method_WarBoardPlayingUIController_CallbackSuspendButton__);
    sub_1C713B0(&Method_WarBoardPlayingUIController_OnClickReturnButton__);
    byte_4CC50FA = 1;
  }
  v3 = Method_WarBoardPlayingUIController_OnClickReturnButton__;
  if ( (*((_BYTE *)Method_WarBoardPlayingUIController_OnClickReturnButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_WarBoardPlayingUIController_OnClickReturnButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0, 0);
  backPrefab = (Il2CppObject *)this->fields.backPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__Instantiate_object_(
         backPrefab,
         (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_36395768((UnityEngine_GameObject_o *)v8, gameObject, 0);
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v8, 0);
  if ( !v8
    || (Instance = UnityEngine_GameObject__GetComponent_object_(
                     (UnityEngine_GameObject_o *)v8,
                     (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___)) == 0 )
  {
LABEL_12:
    sub_1C71608(Instance, v6);
  }
  v10 = (WarBoardBackMenuComponent_o *)Instance;
  WarBoardBackMenuComponent__Init((WarBoardBackMenuComponent_o *)Instance, v6);
  v11 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackSuspendButton__, 0);
  v12 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackRetireButton__, 0);
  v13 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0);
  WarBoardBackMenuComponent__Open(v10, v11, v12, v13, v14);
}


void WarBoardPlayingUIController__OnClickTreasureButton(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  _QWORD *v4; // x8
  WarBoardManager_o *v5; // x20
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *treasureListPrefab; // x21
  Il2CppObject *v10; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  WarBoardTreasureListComponent_o *v12; // x21
  System_Int32_array *TreasureIdList; // x20
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x4

  if ( (byte_4CC50F9 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&Method_WarBoardPlayingUIController_CallbackBackButton__);
    sub_1C713B0(&Method_WarBoardPlayingUIController_OnClickTreasureButton__);
    byte_4CC50F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v4 = Method_WarBoardPlayingUIController_OnClickTreasureButton__;
  v5 = (WarBoardManager_o *)Instance;
  if ( (*((_BYTE *)Method_WarBoardPlayingUIController_OnClickTreasureButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C713C8(Method_WarBoardPlayingUIController_OnClickTreasureButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v6, 9, 0, 0);
  if ( !v5 )
    goto LABEL_12;
  WarBoardManager__SetMapTouchEnable(v5, 0, 0, 0);
  WarBoardManager__HideSimplePopup(v5, 0, 0);
  treasureListPrefab = (Il2CppObject *)this->fields.treasureListPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__Instantiate_object_(
          treasureListPrefab,
          (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_36395768((UnityEngine_GameObject_o *)v10, gameObject, 0);
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v10, 0);
  if ( !v10
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v10,
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___)) == 0
    || (v12 = (WarBoardTreasureListComponent_o *)Component_object,
        WarBoardTreasureListComponent__Init((WarBoardTreasureListComponent_o *)Component_object, v8),
        (Component_object = (Il2CppObject *)v5->fields._warBoardData_k__BackingField) == 0) )
  {
LABEL_12:
    sub_1C71608(Component_object, v8);
  }
  TreasureIdList = WarBoardData__GetTreasureIdList((WarBoardData_o *)Component_object, 0);
  v14 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0);
  WarBoardTreasureListComponent__Open(v12, TreasureIdList, 2, v14, v15);
}


void WarBoardPlayingUIController__OnDestroy(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_nextTurnButtonBlink; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *nextTurnButtonBlink; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CC50FF & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC50FF = 1;
  }
  nextTurnButtonBlink = this->fields.nextTurnButtonBlink;
  p_nextTurnButtonBlink = (GrandQuestFolderBoardItem_o *)&this->fields.nextTurnButtonBlink;
  v4 = (UnityEngine_Object_o *)nextTurnButtonBlink;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_nextTurnButtonBlink->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(klass, 0);
    p_nextTurnButtonBlink->klass = 0;
    sub_1C71354(p_nextTurnButtonBlink, 0, v7, v8, v9, v10, v11, v12);
  }
}


void WarBoardPlayingUIController__SetActionPoint(
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
  if ( (byte_4CC50F2 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&StringLiteral_15414/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_15413/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    byte_4CC50F2 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (WarBoardManager_o *)WarBoardManager__EnableAction(Instance, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v6 = 0;
  }
  else
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (WarBoardManager_o *)WarBoardManager__IsPlayerTurn(Instance, 0);
    v6 = (unsigned __int8)Instance & 1;
  }
  if ( !this
    || (WarBoardPlayingUIController__SetBlinkNextTurnButton(this, v6, v7),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
LABEL_43:
    sub_1C71608(Instance, v6);
  }
  if ( Instance->fields._controllType_k__BackingField == 2 )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    if ( WarBoardManager__get_warBoardActionPointEntity(Instance, 0) )
    {
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(splitAPLabel, 0, 0) )
  {
    v9 = this->fields.splitAPLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (WarBoardManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15414/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0);
    if ( !v9 )
      goto LABEL_43;
    UILabel__set_text(v9, (System_String_o *)Instance, 0);
  }
  maxAPLabel = (UnityEngine_Object_o *)this->fields.maxAPLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maxAPLabel, 0, 0) )
  {
    v11 = this->fields.maxAPLabel;
    Instance = (WarBoardManager_o *)System_Int32__ToString((int32_t)&v16, 0);
    if ( !v11 )
      goto LABEL_43;
    UILabel__set_text(v11, (System_String_o *)Instance, 0);
  }
  currentAPLabel = (UnityEngine_Object_o *)this->fields.currentAPLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentAPLabel, 0, 0) )
  {
    v13 = this->fields.currentAPLabel;
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      if ( WarBoardManager__EnableAction(Instance, 0) )
      {
        v14 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15413/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0);
      }
      v15 = System_Int32__ToString((int32_t)&v17, 0);
      Instance = (WarBoardManager_o *)System_String__Concat_64031724(v14, v15, 0);
      if ( v13 )
      {
        UILabel__set_text(v13, (System_String_o *)Instance, 0);
        return;
      }
    }
    goto LABEL_43;
  }
}


void WarBoardPlayingUIController__SetBlinkNextTurnButton(
        WarBoardPlayingUIController_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTurnButtonBlink; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4CC50F3 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC50F3 = 1;
  }
  nextTurnButtonBlink = (UnityEngine_Object_o *)this->fields.nextTurnButtonBlink;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nextTurnButtonBlink, 0, 0) )
  {
    v7 = this->fields.nextTurnButtonBlink;
    if ( !v7 )
      sub_1C71608(0, v6);
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

  if ( (byte_4CC50F6 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC50F6 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v7 = this->fields.titleLabel;
    if ( !v7 )
      sub_1C71608(0, v6);
    UILabel__set_text(v7, name, 0);
  }
}


void WarBoardPlayingUIController__SetNPCTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nextTurnButton; // x20
  __int64 v4; // x1
  struct UICommonButton_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CC50F1 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC50F1 = 1;
  }
  nextTurnButton = (UnityEngine_Object_o *)this->fields.nextTurnButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nextTurnButton, 0, 0) )
  {
    v5 = this->fields.nextTurnButton;
    if ( !v5 || (UICommonButton__SetButtonEnable(v5, 0, 1, 0), (v5 = this->fields.nextTurnButton) == 0) )
      sub_1C71608(v5, v4);
    v5->fields.tweenTargets = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v5->fields.tweenTargets, 0, v6, v7, v8, v9, v10, v11);
  }
}


void WarBoardPlayingUIController__SetPlayerTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nextTurnButton; // x20
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct UICommonButton_o *v11; // x0
  struct UnityEngine_GameObject_array *nextTurnButtonTweenObjectCache; // x1

  if ( (byte_4CC50F0 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC50F0 = 1;
  }
  nextTurnButton = (UnityEngine_Object_o *)this->fields.nextTurnButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nextTurnButton, 0, 0) )
  {
    v11 = this->fields.nextTurnButton;
    if ( !v11
      || (nextTurnButtonTweenObjectCache = this->fields.nextTurnButtonTweenObjectCache,
          v11->fields.tweenTargets = nextTurnButtonTweenObjectCache,
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&v11->fields.tweenTargets,
            (int32_t)nextTurnButtonTweenObjectCache,
            v5,
            v6,
            v7,
            v8,
            v9,
            v10),
          (v11 = this->fields.nextTurnButton) == 0) )
    {
      sub_1C71608(v11, v4);
    }
    UICommonButton__SetButtonEnable(v11, 1, 1, 0);
  }
}


void WarBoardPlayingUIController__SetTimeAccelerateAnimation(
        WarBoardPlayingUIController_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardSkipPrefab; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4CC50F7 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC50F7 = 1;
  }
  boardSkipPrefab = (UnityEngine_Object_o *)this->fields.boardSkipPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(boardSkipPrefab, 0, 0) )
  {
    v7 = this->fields.boardSkipPrefab;
    if ( !v7 )
      sub_1C71608(0, v6);
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
  System_String_o *v8; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x20
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC50F5 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_15438/*"WARBOARD_TURN_BASE"*/);
    byte_4CC50F5 = 1;
  }
  playerTurnRoot = this->fields.playerTurnRoot;
  if ( !playerTurnRoot )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(playerTurnRoot, isPlayer, 0);
  playerTurnRoot = this->fields.enemyTurnRoot;
  if ( !playerTurnRoot )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(playerTurnRoot, !isPlayer, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15438/*"WARBOARD_TURN_BASE"*/, 0);
  v11 = turnCount;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  playerTurnRoot = (UnityEngine_GameObject_o *)System_String__Format(v8, v9, 0);
  if ( !this->fields.playerTurnLabel
    || (v10 = (System_String_o *)playerTurnRoot,
        UILabel__set_text(this->fields.playerTurnLabel, (System_String_o *)playerTurnRoot, 0),
        (playerTurnRoot = (UnityEngine_GameObject_o *)this->fields.enemyTurnLabel) == 0) )
  {
LABEL_10:
    sub_1C71608(playerTurnRoot, isPlayer);
  }
  UILabel__set_text((UILabel_o *)playerTurnRoot, v10, 0);
}


void WarBoardPlayingUIController__SuspendResponse(
        WarBoardPlayingUIController_o *this,
        System_String_o *response,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CC50FC & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC50FC = 1;
  }
  if ( !System_String__op_Equality(response, (System_String_o *)StringLiteral_22316/*"ng"*/, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1C71608(0, v5);
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

  if ( (byte_4CC50F8 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&StringLiteral_20264/*"icon_drop_item_{0:00}"*/);
    byte_4CC50F8 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v11 = stageNpcMaster;
  Instance = (WarBoardData_o *)this->fields.getTreasureRoot;
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
        v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExpensiveIcon),
        Instance = (WarBoardData_o *)System_String__Format((System_String_o *)StringLiteral_20264/*"icon_drop_item_{0:00}"*/, v9, 0),
        !getTreasureIcon) )
  {
LABEL_11:
    sub_1C71608(Instance, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC5100 & 1) == 0 )
  {
    sub_1C713B0(&WarBoardPlayingUIController___c_TypeInfo);
    byte_4CC5100 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(WarBoardPlayingUIController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardPlayingUIController___c_TypeInfo->static_fields->__9 = (struct WarBoardPlayingUIController___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)WarBoardPlayingUIController___c_TypeInfo->static_fields,
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
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CC5101 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC5101 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC1B52 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC1B52 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v4);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_4CC5102 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__);
    sub_1C713B0(&WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo);
    byte_4CC5102 = 1;
  }
  v5 = sub_1C715FC(WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 16) = ok,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v15 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__,
          0),
        !Instance) )
  {
    sub_1C71608(v6, v7);
  }
  WarBoardManager__HideTurnEndConfirmPopup((WarBoardManager_o *)Instance, v15, 0);
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
      sub_1C71608(this, method);
    }
    WarBoardManager__NextTurn((WarBoardManager_o *)this, 0);
  }
}