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
    sub_1B8880C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPlayingUIController__Awake(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  Il2CppObject *object; // x20
  UILabel_o *nextTurnObject; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o *splitAPLabel; // x21
  UIFont_o *v8; // x20
  UnityEngine_Object_o *maxAPLabel; // x21
  UnityEngine_Object_o *currentAPLabel; // x21
  UnityEngine_Object_o *nextTurnButtonBlinkPrefab; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *v14; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Transform_o *v19; // x21
  int v20; // s0
  UnityEngine_Object_o *Child; // x20
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  struct UICommonButton_o *nextTurnButton; // x8
  struct UnityEngine_GameObject_array *tweenTargets; // x1
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A59192 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1B885B0(&StringLiteral_6771/*"Fonts/FGO-NumberFont-02"*/);
    byte_4A59192 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_6771/*"Fonts/FGO-NumberFont-02"*/,
             (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nextTurnObject = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0LL, 0LL);
  if ( ((unsigned __int8)nextTurnObject & 1) != 0 )
  {
    if ( !object )
      goto LABEL_39;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)object,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    splitAPLabel = (UnityEngine_Object_o *)this->fields.splitAPLabel;
    v8 = (UIFont_o *)Component_object;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(splitAPLabel, 0LL, 0LL) )
    {
      nextTurnObject = this->fields.splitAPLabel;
      if ( !nextTurnObject )
        goto LABEL_39;
      UILabel__set_bitmapFont(nextTurnObject, v8, 0LL);
    }
    maxAPLabel = (UnityEngine_Object_o *)this->fields.maxAPLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(maxAPLabel, 0LL, 0LL) )
    {
      nextTurnObject = this->fields.maxAPLabel;
      if ( !nextTurnObject )
        goto LABEL_39;
      UILabel__set_bitmapFont(nextTurnObject, v8, 0LL);
    }
    currentAPLabel = (UnityEngine_Object_o *)this->fields.currentAPLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(currentAPLabel, 0LL, 0LL) )
    {
      nextTurnObject = this->fields.currentAPLabel;
      if ( !nextTurnObject )
        goto LABEL_39;
      UILabel__set_bitmapFont(nextTurnObject, v8, 0LL);
    }
  }
  nextTurnButtonBlinkPrefab = (UnityEngine_Object_o *)this->fields.nextTurnButtonBlinkPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nextTurnObject = (UILabel_o *)UnityEngine_Object__op_Inequality(nextTurnButtonBlinkPrefab, 0LL, 0LL);
  if ( ((unsigned __int8)nextTurnObject & 1) != 0 )
  {
    nextTurnObject = (UILabel_o *)this->fields.nextTurnObject;
    if ( !nextTurnObject )
      goto LABEL_39;
    v14 = (Il2CppObject *)this->fields.nextTurnButtonBlinkPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nextTurnObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__Instantiate_object__49297800(
            v14,
            transform,
            (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    this->fields.nextTurnButtonBlink = (struct UnityEngine_GameObject_o *)v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.nextTurnButtonBlink, (int32_t)v16, v17, v18);
    nextTurnObject = (UILabel_o *)this->fields.nextTurnButtonBlink;
    if ( !nextTurnObject )
      goto LABEL_39;
    nextTurnObject = (UILabel_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nextTurnObject, 0LL);
    if ( !this->fields.nextTurnButton )
      goto LABEL_39;
    v19 = (UnityEngine_Transform_o *)nextTurnObject;
    nextTurnObject = (UILabel_o *)UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)this->fields.nextTurnButton,
                                    0LL);
    if ( !nextTurnObject )
      goto LABEL_39;
    *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)nextTurnObject,
                                       0LL);
    if ( !v19 )
      goto LABEL_39;
    UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
    Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(this->fields.nextTurnButtonBlink, 0, 0LL);
    nextTurnObject = (UILabel_o *)UnityEngine_Object__op_Inequality(Child, 0LL, 0LL);
    if ( ((unsigned __int8)nextTurnObject & 1) == 0 )
      goto LABEL_37;
    if ( !byte_4A55BDA )
    {
      nextTurnObject = (UILabel_o *)sub_1B885B0(&UnityEngine_Vector2_TypeInfo);
      byte_4A55BDA = 1;
    }
    if ( !Child )
LABEL_39:
      sub_1B8880C(nextTurnObject, v5);
    v27.fields.z = 0.0;
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    v27.fields.x = static_fields->zeroVector.fields.x;
    v27.fields.y = static_fields->zeroVector.fields.y;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Child, v27, 0LL);
  }
LABEL_37:
  nextTurnButton = this->fields.nextTurnButton;
  if ( !nextTurnButton )
    goto LABEL_39;
  tweenTargets = nextTurnButton->fields.tweenTargets;
  this->fields.nextTurnButtonTweenObjectCache = tweenTargets;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.nextTurnButtonTweenObjectCache,
    (int32_t)tweenTargets,
    v12,
    v13);
}


void __fastcall WarBoardPlayingUIController__CallbackBackButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A591A1 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A591A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__CallbackRetireButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A591A0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__);
    sub_1B885B0(&WarBoardPlayingUIController___c_TypeInfo);
    byte_4A591A0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    _9__40_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__40_0, v7, Method_WarBoardPlayingUIController___c__CallbackRetireButton_b__40_0__, 0LL);
    static_fields = WarBoardPlayingUIController___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = _9__40_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v9, v10);
  }
  if ( !v5 )
    sub_1B8880C(Instance, v3);
  WarBoardManager__Retire(v5, _9__40_0, 0LL);
}


void __fastcall WarBoardPlayingUIController__CallbackSuspendButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5919E & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_WarBoardResumeRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardPlayingUIController_SuspendResponse__);
    byte_4A5919E = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_WarBoardPlayingUIController_SuspendResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_WarBoardResumeRequest___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || !Request_object )
    sub_1B8880C(Instance, v6);
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
    sub_1B8880C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__NondispTurn(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *playerTurnRoot; // x0

  playerTurnRoot = this->fields.playerTurnRoot;
  if ( !playerTurnRoot
    || (UnityEngine_GameObject__SetActive(playerTurnRoot, 0, 0LL), (playerTurnRoot = this->fields.enemyTurnRoot) == 0LL) )
  {
    sub_1B8880C(playerTurnRoot, method);
  }
  UnityEngine_GameObject__SetActive(playerTurnRoot, 0, 0LL);
}


void __fastcall WarBoardPlayingUIController__OnClickNextTurn(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  Il2CppObject **v7; // x20
  bool exist; // w0
  _QWORD *v9; // x8
  bool v10; // w21
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *v12; // x20
  System_Action_bool__o *v13; // x21

  if ( (byte_4A59197 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__);
    sub_1B885B0(&WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo);
    sub_1B885B0(&Method_WarBoardPlayingUIController_OnClickNextTurn__);
    byte_4A59197 = 1;
  }
  v2 = sub_1B887FC(WarBoardPlayingUIController___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v2 )
    goto LABEL_13;
  *(_QWORD *)(v2 + 16) = Instance;
  v7 = (Il2CppObject **)(v2 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v2 + 16), (int32_t)Instance, v5, v6);
  Instance = *(Il2CppObject **)(v2 + 16);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  Instance = *v7;
  if ( !*v7 )
    goto LABEL_13;
  exist = WarBoardManager__ExistEnableActionPieceExtend((WarBoardManager_o *)Instance, 0LL);
  v9 = Method_WarBoardPlayingUIController_OnClickNextTurn__;
  v10 = exist;
  if ( (*((_BYTE *)Method_WarBoardPlayingUIController_OnClickNextTurn__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B885C8(Method_WarBoardPlayingUIController_OnClickNextTurn__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
  if ( v10 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v13 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v13,
      (Il2CppObject *)v2,
      Method_WarBoardPlayingUIController___c__DisplayClass26_0__OnClickNextTurn_b__0__,
      0LL);
    if ( v12 )
    {
      WarBoardManager__ShowTurnEndConfirmPopup((WarBoardManager_o *)v12, v13, 0LL);
      return;
    }
LABEL_13:
    sub_1B8880C(Instance, v4);
  }
  OverwriteAssetSoundName__PlaySystemSe(v11, 8, 0LL);
  Instance = *v7;
  if ( !*v7 )
    goto LABEL_13;
  WarBoardManager__NextTurn((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardPlayingUIController__OnClickReturnButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A5919D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardPlayingUIController_CallbackBackButton__);
    sub_1B885B0(&Method_WarBoardPlayingUIController_CallbackRetireButton__);
    sub_1B885B0(&Method_WarBoardPlayingUIController_CallbackSuspendButton__);
    sub_1B885B0(&Method_WarBoardPlayingUIController_OnClickReturnButton__);
    byte_4A5919D = 1;
  }
  v3 = Method_WarBoardPlayingUIController_OnClickReturnButton__;
  if ( (*((_BYTE *)Method_WarBoardPlayingUIController_OnClickReturnButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_WarBoardPlayingUIController_OnClickReturnButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  backPrefab = (Il2CppObject *)this->fields.backPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__Instantiate_object_(
         backPrefab,
         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_33730068((UnityEngine_GameObject_o *)v8, gameObject, 0LL);
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v8, 0LL);
  if ( !v8
    || (Instance = UnityEngine_GameObject__GetComponent_object_(
                     (UnityEngine_GameObject_o *)v8,
                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBackMenuComponent___)) == 0LL )
  {
LABEL_12:
    sub_1B8880C(Instance, v6);
  }
  v10 = (WarBoardBackMenuComponent_o *)Instance;
  WarBoardBackMenuComponent__Init((WarBoardBackMenuComponent_o *)Instance, v6);
  v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackSuspendButton__, 0LL);
  v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackRetireButton__, 0LL);
  v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0LL);
  WarBoardBackMenuComponent__Open(v10, v11, v12, v13, v14);
}


void __fastcall WarBoardPlayingUIController__OnClickTreasureButton(
        WarBoardPlayingUIController_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A5919C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardPlayingUIController_CallbackBackButton__);
    sub_1B885B0(&Method_WarBoardPlayingUIController_OnClickTreasureButton__);
    byte_4A5919C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v4 = Method_WarBoardPlayingUIController_OnClickTreasureButton__;
  v5 = (WarBoardManager_o *)Instance;
  if ( (*((_BYTE *)Method_WarBoardPlayingUIController_OnClickTreasureButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_WarBoardPlayingUIController_OnClickTreasureButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v6, 9, 0LL);
  if ( !v5 )
    goto LABEL_12;
  WarBoardManager__SetMapTouchEnable(v5, 0, 0, 0LL);
  WarBoardManager__HideSimplePopup(v5, 0LL, 0LL);
  treasureListPrefab = (Il2CppObject *)this->fields.treasureListPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__Instantiate_object_(
          treasureListPrefab,
          (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_33730068((UnityEngine_GameObject_o *)v10, gameObject, 0LL);
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v10, 0LL);
  if ( !v10
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v10,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardTreasureListComponent___)) == 0LL
    || (v12 = (WarBoardTreasureListComponent_o *)Component_object,
        WarBoardTreasureListComponent__Init((WarBoardTreasureListComponent_o *)Component_object, v8),
        (Component_object = (Il2CppObject *)v5->fields._warBoardData_k__BackingField) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(Component_object, v8);
  }
  TreasureIdList = WarBoardData__GetTreasureIdList((WarBoardData_o *)Component_object, 0LL);
  v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_WarBoardPlayingUIController_CallbackBackButton__, 0LL);
  WarBoardTreasureListComponent__Open(v12, TreasureIdList, 2, v14, v15);
}


void __fastcall WarBoardPlayingUIController__OnDestroy(WarBoardPlayingUIController_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_nextTurnButtonBlink; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *nextTurnButtonBlink; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A591A2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A591A2 = 1;
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
    UnityEngine_Object__Destroy_69459380(klass, 0LL);
    p_nextTurnButtonBlink->klass = 0LL;
    sub_1B88554(p_nextTurnButtonBlink, 0, v7, v8);
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
  if ( (byte_4A59195 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&StringLiteral_15423/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_15422/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    byte_4A59195 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (WarBoardManager_o *)WarBoardManager__EnableAction(Instance, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v6 = 0LL;
  }
  else
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (WarBoardManager_o *)WarBoardManager__IsPlayerTurn(Instance, 0LL);
    v6 = (unsigned __int8)Instance & 1;
  }
  if ( !this
    || (WarBoardPlayingUIController__SetBlinkNextTurnButton(this, v6, v7),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_43:
    sub_1B8880C(Instance, v6);
  }
  if ( Instance->fields._controllType_k__BackingField == 2 )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    if ( WarBoardManager__get_warBoardActionPointEntity(Instance, 0LL) )
    {
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v9 = this->fields.splitAPLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (WarBoardManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15423/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
    if ( !v9 )
      goto LABEL_43;
    UILabel__set_text(v9, (System_String_o *)Instance, 0LL);
  }
  maxAPLabel = (UnityEngine_Object_o *)this->fields.maxAPLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maxAPLabel, 0LL, 0LL) )
  {
    v11 = this->fields.maxAPLabel;
    Instance = (WarBoardManager_o *)System_Int32__ToString((int32_t)&v16, 0LL);
    if ( !v11 )
      goto LABEL_43;
    UILabel__set_text(v11, (System_String_o *)Instance, 0LL);
  }
  currentAPLabel = (UnityEngine_Object_o *)this->fields.currentAPLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentAPLabel, 0LL, 0LL) )
  {
    v13 = this->fields.currentAPLabel;
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      if ( WarBoardManager__EnableAction(Instance, 0LL) )
      {
        v14 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15422/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
      }
      v15 = System_Int32__ToString((int32_t)&v17, 0LL);
      Instance = (WarBoardManager_o *)System_String__Concat_61707032(v14, v15, 0LL);
      if ( v13 )
      {
        UILabel__set_text(v13, (System_String_o *)Instance, 0LL);
        return;
      }
    }
    goto LABEL_43;
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

  if ( (byte_4A59196 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59196 = 1;
  }
  nextTurnButtonBlink = (UnityEngine_Object_o *)this->fields.nextTurnButtonBlink;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nextTurnButtonBlink, 0LL, 0LL) )
  {
    v7 = this->fields.nextTurnButtonBlink;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
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

  if ( (byte_4A59199 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59199 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v7 = this->fields.titleLabel;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
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

  if ( (byte_4A59194 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59194 = 1;
  }
  nextTurnButton = (UnityEngine_Object_o *)this->fields.nextTurnButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nextTurnButton, 0LL, 0LL) )
  {
    v5 = this->fields.nextTurnButton;
    if ( !v5 || (UICommonButton__SetButtonEnable(v5, 0, 1, 0LL), (v5 = this->fields.nextTurnButton) == 0LL) )
      sub_1B8880C(v5, v4);
    v5->fields.tweenTargets = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.tweenTargets, 0, v6, v7);
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

  if ( (byte_4A59193 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59193 = 1;
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
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&v7->fields.tweenTargets,
            (int32_t)nextTurnButtonTweenObjectCache,
            v5,
            v6),
          (v7 = this->fields.nextTurnButton) == 0LL) )
    {
      sub_1B8880C(v7, v4);
    }
    UICommonButton__SetButtonEnable(v7, 1, 1, 0LL);
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

  if ( (byte_4A5919A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5919A = 1;
  }
  boardSkipPrefab = (UnityEngine_Object_o *)this->fields.boardSkipPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(boardSkipPrefab, 0LL, 0LL) )
  {
    v7 = this->fields.boardSkipPrefab;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
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
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  System_String_o *v13; // x20
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A59198 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_15447/*"WARBOARD_TURN_BASE"*/);
    byte_4A59198 = 1;
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
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15447/*"WARBOARD_TURN_BASE"*/, 0LL);
  v14 = turnCount;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  playerTurnRoot = (UnityEngine_GameObject_o *)System_String__Format(v8, v12, 0LL);
  if ( !this->fields.playerTurnLabel
    || (v13 = (System_String_o *)playerTurnRoot,
        UILabel__set_text(this->fields.playerTurnLabel, (System_String_o *)playerTurnRoot, 0LL),
        (playerTurnRoot = (UnityEngine_GameObject_o *)this->fields.enemyTurnLabel) == 0LL) )
  {
LABEL_10:
    sub_1B8880C(playerTurnRoot, isPlayer);
  }
  UILabel__set_text((UILabel_o *)playerTurnRoot, v13, 0LL);
}


void __fastcall WarBoardPlayingUIController__SuspendResponse(
        WarBoardPlayingUIController_o *this,
        System_String_o *response,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5919F & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5919F = 1;
  }
  if ( !System_String__op_Equality(response, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v5);
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 9, 1, 0LL, 0, 0LL);
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
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  int32_t ExpensiveIcon; // [xsp+8h] [xbp-28h] BYREF
  int v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5919B & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&StringLiteral_20139/*"icon_drop_item_{0:00}"*/);
    byte_4A5919B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v5 = Instance;
  Instance = (void *)*((_QWORD *)Instance + 55);
  if ( !Instance )
    goto LABEL_11;
  Instance = WarBoardData__GetTreasureIdList((WarBoardData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_11;
  v6 = *((_DWORD *)Instance + 6);
  v14 = v6;
  Instance = this->fields.getTreasureRoot;
  if ( !Instance )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v6 > 0, 0LL);
  getTreasureLabel = this->fields.getTreasureLabel;
  Instance = System_Int32__ToString((int32_t)&v14, 0LL);
  if ( !getTreasureLabel
    || (UILabel__set_text(getTreasureLabel, (System_String_o *)Instance, 0LL), (Instance = (void *)v5[55]) == 0LL)
    || (getTreasureIcon = this->fields.getTreasureIcon,
        ExpensiveIcon = WarBoardData__GetExpensiveIcon((WarBoardData_o *)Instance, 0LL),
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExpensiveIcon, v9, v10, v11),
        Instance = System_String__Format((System_String_o *)StringLiteral_20139/*"icon_drop_item_{0:00}"*/, v12, 0LL),
        !getTreasureIcon) )
  {
LABEL_11:
    sub_1B8880C(Instance, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A591A3 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardPlayingUIController___c_TypeInfo);
    byte_4A591A3 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardPlayingUIController___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardPlayingUIController___c_TypeInfo->static_fields->__9 = (struct WarBoardPlayingUIController___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardPlayingUIController___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A591A4 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A591A4 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5644B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5644B = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
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
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x20

  if ( (byte_4A591A5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__);
    sub_1B885B0(&WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo);
    byte_4A591A5 = 1;
  }
  v5 = sub_1B887FC(WarBoardPlayingUIController___c__DisplayClass26_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9),
        *(_BYTE *)(v5 + 16) = ok,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_WarBoardPlayingUIController___c__DisplayClass26_1__OnClickNextTurn_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v6, v7);
  }
  WarBoardManager__HideTurnEndConfirmPopup((WarBoardManager_o *)Instance, v11, 0LL);
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
      sub_1B8880C(this, method);
    }
    WarBoardManager__NextTurn((WarBoardManager_o *)this, 0LL);
  }
}