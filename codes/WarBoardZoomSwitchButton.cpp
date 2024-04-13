void __fastcall WarBoardZoomSwitchButton___ctor(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E9372 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardZoomSwitchButton_ZoomSpritePair___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9372 = 1;
  }
  v5 = (struct WarBoardZoomSwitchButton_ZoomSpritePair_array *)sub_B5D5DC(
                                                                 WarBoardZoomSwitchButton_ZoomSpritePair___TypeInfo,
                                                                 0LL);
  this->fields.zoomSpritePairArray = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.zoomSpritePairArray,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardZoomSwitchButton__ApplyFsOffsetAdjustment(
        WarBoardZoomSwitchButton_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *fsOffset; // x20
  __int64 v6; // x1
  FSOffset_o *v7; // x0

  if ( (byte_42E9371 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9371 = 1;
  }
  fsOffset = (UnityEngine_Object_o *)this->fields.fsOffset;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fsOffset, 0LL, 0LL) )
  {
    v7 = this->fields.fsOffset;
    if ( !v7 || (FSOffset__AddOffsetX(v7, 0LL), (v7 = this->fields.fsOffset) == 0LL) )
      sub_B5D69C(v7, v6);
    FSOffset__AddBottomY(v7, 0LL);
  }
}


void __fastcall WarBoardZoomSwitchButton__Awake(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  this->fields.currentZoomIndex = -1;
  WarBoardZoomSwitchButton__UpdateUI(this, method);
  this->fields._HideOnDisable_k__BackingField = 1;
}


void __fastcall WarBoardZoomSwitchButton__ClickButton(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardZoomSwitchButton_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *zoomSpritePairArray; // x8
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *v9; // x8
  __int64 currentZoomIndex; // x9
  WarBoardZoomSwitchButton_ZoomSpritePair_o *v11; // x8
  const MethodInfo *v12; // x1
  __int64 v13; // x0

  v4 = this;
  if ( (byte_42E936D & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_float___, (_DWORD)method, v2, v3);
    this = (WarBoardZoomSwitchButton_o *)sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E936D = 1;
  }
  zoomSpritePairArray = v4->fields.zoomSpritePairArray;
  if ( !zoomSpritePairArray )
    goto LABEL_11;
  v4->fields.currentZoomIndex = (v4->fields.currentZoomIndex + 1) % (signed int)zoomSpritePairArray->max_length;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v9 = v4->fields.zoomSpritePairArray;
  if ( !v9 )
    goto LABEL_11;
  currentZoomIndex = v4->fields.currentZoomIndex;
  if ( (unsigned int)currentZoomIndex >= v9->max_length )
  {
    v13 = sub_B5D6C8(this);
    sub_B5D668(v13, 0LL);
  }
  v11 = v9->m_Items[currentZoomIndex];
  if ( !v11 )
LABEL_11:
    sub_B5D69C(this, method);
  ActionExtensions__Call_float_(
    (System_Action_T__o *)v4->fields.OnButtonClicked,
    v11->fields.zoom,
    (const MethodInfo_2CECD70 *)Method_ActionExtensions_Call_float___);
  WarBoardZoomSwitchButton__UpdateUI(v4, v12);
}


void __fastcall WarBoardZoomSwitchButton__CloseRuleDialog(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WarBoardManager_o *Instance; // x0
  __int64 v8; // x1
  struct WarBoardData_o *warBoardData_k__BackingField; // x8
  int32_t winCondId; // w19
  WarBoardManager_c *v11; // x0

  if ( (byte_42E936C & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&WarBoardManager_TypeInfo, v4, v5, v6);
    byte_42E936C = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_11;
  winCondId = warBoardData_k__BackingField->fields.winCondId;
  v11 = WarBoardManager_TypeInfo;
  if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    v11 = WarBoardManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v11->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, winCondId, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__UpdateRuleButton(Instance, 0LL),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(Instance, v8);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0LL);
}


System_String_o *__fastcall WarBoardZoomSwitchButton__GetCurrentButtonSpriteName(
        WarBoardZoomSwitchButton_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardZoomSwitchButton_o *v4; // x19
  __int64 currentZoomIndex; // x8
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *zoomSpritePairArray; // x9
  int max_length; // w10
  WarBoardZoomSwitchButton_ZoomSpritePair_o *v8; // x8
  System_String_o **p_freeZoomSpriteName; // x8
  __int64 v11; // x0

  v4 = this;
  if ( (byte_42E9370 & 1) == 0 )
  {
    this = (WarBoardZoomSwitchButton_o *)sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E9370 = 1;
  }
  currentZoomIndex = v4->fields.currentZoomIndex;
  if ( (_DWORD)currentZoomIndex == -1 )
  {
    p_freeZoomSpriteName = &v4->fields.freeZoomSpriteName;
    return *p_freeZoomSpriteName;
  }
  if ( (currentZoomIndex & 0x80000000) != 0 )
    goto LABEL_10;
  zoomSpritePairArray = v4->fields.zoomSpritePairArray;
  if ( !zoomSpritePairArray )
    goto LABEL_13;
  max_length = zoomSpritePairArray->max_length;
  if ( (int)currentZoomIndex >= max_length )
  {
LABEL_10:
    p_freeZoomSpriteName = (System_String_o **)&StringLiteral_1/*""*/;
    return *p_freeZoomSpriteName;
  }
  if ( (unsigned int)currentZoomIndex >= max_length )
  {
    v11 = sub_B5D6C8(this);
    sub_B5D668(v11, 0LL);
  }
  v8 = zoomSpritePairArray->m_Items[currentZoomIndex];
  if ( !v8 )
LABEL_13:
    sub_B5D69C(this, method);
  p_freeZoomSpriteName = &v8->fields.spriteName;
  return *p_freeZoomSpriteName;
}


bool __fastcall WarBoardZoomSwitchButton__IsFreeZoom(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  return this->fields.currentZoomIndex == -1;
}


void __fastcall WarBoardZoomSwitchButton__OnClickRuleButton(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x1

  if ( (byte_42E936B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WarBoardZoomSwitchButton_CloseRuleDialog__, v5, v6, v7);
    byte_42E936B = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WarBoardZoomSwitchButton_CloseRuleDialog__, 0LL);
  WarBoardUIUtility__ShowRuleDialog(v8, v9);
}


void __fastcall WarBoardZoomSwitchButton__SetEnable(
        WarBoardZoomSwitchButton_o *this,
        bool value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _BOOL4 v4; // w19
  UnityEngine_Object_o *button; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 HideOnDisable_k__BackingField; // w21
  bool v10; // w1

  v4 = value;
  if ( (byte_42E936E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, value, (_DWORD)method, v3);
    byte_42E936E = 1;
  }
  if ( ((!this->fields.isEnabled ^ v4) & 1) == 0 )
  {
    this->fields.isEnabled = v4;
    button = (UnityEngine_Object_o *)this->fields.button;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.button;
      if ( !gameObject )
        goto LABEL_15;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, _BOOL4, void *))gameObject->klass[1]._1.namespaze)(
        gameObject,
        v4,
        gameObject->klass[1]._1.byval_arg.data);
    }
    HideOnDisable_k__BackingField = this->fields._HideOnDisable_k__BackingField;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      v10 = !HideOnDisable_k__BackingField || v4;
      UnityEngine_GameObject__SetActive(gameObject, v10, 0LL);
      return;
    }
LABEL_15:
    sub_B5D69C(gameObject, v7);
  }
}


void __fastcall WarBoardZoomSwitchButton__SetUpPositionForConfigurationMode(
        WarBoardZoomSwitchButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.positionForConfigurationMode, 0LL),
        WarBoardZoomSwitchButton__ApplyFsOffsetAdjustment(this, v5),
        (transform = (UnityEngine_Transform_o *)this->fields.ruleButtonObj) == 0LL) )
  {
    sub_B5D69C(transform, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
}


void __fastcall WarBoardZoomSwitchButton__SetUpPositionForPlayMode(
        WarBoardZoomSwitchButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.positionForPlayMode, 0LL),
        WarBoardZoomSwitchButton__ApplyFsOffsetAdjustment(this, v5),
        (transform = (UnityEngine_Transform_o *)this->fields.ruleButtonObj) == 0LL) )
  {
    sub_B5D69C(transform, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
}


void __fastcall WarBoardZoomSwitchButton__SwitchToFreeZoom(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  if ( this->fields.currentZoomIndex != -1 )
  {
    this->fields.currentZoomIndex = -1;
    WarBoardZoomSwitchButton__UpdateUI(this, method);
  }
}


void __fastcall WarBoardZoomSwitchButton__UpdateRuleButton(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UISprite_o *newRuleBg; // x20
  __int64 v12; // x1
  UISprite_o *Instance; // x0
  UnityEngine_GameObject_o *newRuleObject; // x19

  if ( (byte_42E936A & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_19593/*"icon_noticebg_01"*/, v8, v9, v10);
    byte_42E936A = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(newRuleBg, 0LL);
  Instance = this->fields.newRuleBg;
  if ( !Instance
    || (UISprite__set_spriteName(Instance, (System_String_o *)StringLiteral_19593/*"icon_noticebg_01"*/, 0LL),
        newRuleObject = this->fields.newRuleObject,
        (Instance = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (Instance = *(UISprite_o **)&Instance->fields.mOuterUV.fields.m_Height) == 0LL
    || (Instance = (UISprite_o *)WarBoardData__HasNewWinCond((WarBoardData_o *)Instance, 0LL), !newRuleObject) )
  {
    sub_B5D69C(Instance, v12);
  }
  UnityEngine_GameObject__SetActive(newRuleObject, (unsigned __int8)Instance & 1, 0LL);
}


void __fastcall WarBoardZoomSwitchButton__UpdateUI(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *buttonSprite; // x20
  const MethodInfo *v6; // x1
  UISprite_o *v7; // x20
  System_String_o *CurrentButtonSpriteName; // x0
  __int64 v9; // x1

  if ( (byte_42E936F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E936F = 1;
  }
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buttonSprite, 0LL, 0LL) )
  {
    v7 = this->fields.buttonSprite;
    CurrentButtonSpriteName = WarBoardZoomSwitchButton__GetCurrentButtonSpriteName(this, v6);
    if ( !v7 )
      sub_B5D69C(CurrentButtonSpriteName, v9);
    UISprite__set_spriteName(v7, CurrentButtonSpriteName, 0LL);
  }
}


float __fastcall WarBoardZoomSwitchButton__get_CameraWorkDuration(
        WarBoardZoomSwitchButton_o *this,
        const MethodInfo *method)
{
  return this->fields.cameraWorkDuration;
}


bool __fastcall WarBoardZoomSwitchButton__get_HideOnDisable(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  return this->fields._HideOnDisable_k__BackingField;
}


void __fastcall WarBoardZoomSwitchButton__set_HideOnDisable(
        WarBoardZoomSwitchButton_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._HideOnDisable_k__BackingField = value;
}


void __fastcall WarBoardZoomSwitchButton_ZoomSpritePair___ctor(
        WarBoardZoomSwitchButton_ZoomSpritePair_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}