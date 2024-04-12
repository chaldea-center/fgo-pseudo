void __fastcall WarBoardZoomSwitchButton___ctor(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B0C06 & 1) == 0 )
  {
    sub_B52984(&WarBoardZoomSwitchButton_ZoomSpritePair___TypeInfo);
    byte_42B0C06 = 1;
  }
  v3 = (struct WarBoardZoomSwitchButton_ZoomSpritePair_array *)sub_B5299C(
                                                                 WarBoardZoomSwitchButton_ZoomSpritePair___TypeInfo,
                                                                 0LL);
  this->fields.zoomSpritePairArray = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.zoomSpritePairArray,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardZoomSwitchButton__ApplyFsOffsetAdjustment(
        WarBoardZoomSwitchButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsOffset; // x20
  __int64 v4; // x1
  FSOffset_o *v5; // x0

  if ( (byte_42B0C05 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0C05 = 1;
  }
  fsOffset = (UnityEngine_Object_o *)this->fields.fsOffset;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fsOffset, 0LL, 0LL) )
  {
    v5 = this->fields.fsOffset;
    if ( !v5 || (FSOffset__AddOffsetX(v5, 0LL), (v5 = this->fields.fsOffset) == 0LL) )
      sub_B52A5C(v5, v4);
    FSOffset__AddBottomY(v5, 0LL);
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
  WarBoardZoomSwitchButton_o *v2; // x19
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *zoomSpritePairArray; // x8
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *v4; // x8
  __int64 currentZoomIndex; // x9
  WarBoardZoomSwitchButton_ZoomSpritePair_o *v6; // x8
  const MethodInfo *v7; // x1
  __int64 v8; // x0

  v2 = this;
  if ( (byte_42B0C01 & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_float___);
    this = (WarBoardZoomSwitchButton_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42B0C01 = 1;
  }
  zoomSpritePairArray = v2->fields.zoomSpritePairArray;
  if ( !zoomSpritePairArray )
    goto LABEL_11;
  v2->fields.currentZoomIndex = (v2->fields.currentZoomIndex + 1) % (signed int)zoomSpritePairArray->max_length;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v4 = v2->fields.zoomSpritePairArray;
  if ( !v4 )
    goto LABEL_11;
  currentZoomIndex = v2->fields.currentZoomIndex;
  if ( (unsigned int)currentZoomIndex >= v4->max_length )
  {
    v8 = sub_B52A88(this);
    sub_B52A28(v8, 0LL);
  }
  v6 = v4->m_Items[currentZoomIndex];
  if ( !v6 )
LABEL_11:
    sub_B52A5C(this, method);
  ActionExtensions__Call_float_(
    (System_Action_T__o *)v2->fields.OnButtonClicked,
    v6->fields.zoom,
    (const MethodInfo_2D6168C *)Method_ActionExtensions_Call_float___);
  WarBoardZoomSwitchButton__UpdateUI(v2, v7);
}


void __fastcall WarBoardZoomSwitchButton__CloseRuleDialog(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v3; // x1
  struct WarBoardData_o *warBoardData_k__BackingField; // x8
  int32_t winCondId; // w19
  WarBoardManager_c *v6; // x0

  if ( (byte_42B0C00 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardManager_TypeInfo);
    byte_42B0C00 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_11;
  winCondId = warBoardData_k__BackingField->fields.winCondId;
  v6 = WarBoardManager_TypeInfo;
  if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    v6 = WarBoardManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, winCondId, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__UpdateRuleButton(Instance, 0LL),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_B52A5C(Instance, v3);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0LL);
}


System_String_o *__fastcall WarBoardZoomSwitchButton__GetCurrentButtonSpriteName(
        WarBoardZoomSwitchButton_o *this,
        const MethodInfo *method)
{
  WarBoardZoomSwitchButton_o *v2; // x19
  __int64 currentZoomIndex; // x8
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *zoomSpritePairArray; // x9
  int max_length; // w10
  WarBoardZoomSwitchButton_ZoomSpritePair_o *v6; // x8
  System_String_o **p_freeZoomSpriteName; // x8
  __int64 v9; // x0

  v2 = this;
  if ( (byte_42B0C04 & 1) == 0 )
  {
    this = (WarBoardZoomSwitchButton_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B0C04 = 1;
  }
  currentZoomIndex = v2->fields.currentZoomIndex;
  if ( (_DWORD)currentZoomIndex == -1 )
  {
    p_freeZoomSpriteName = &v2->fields.freeZoomSpriteName;
    return *p_freeZoomSpriteName;
  }
  if ( (currentZoomIndex & 0x80000000) != 0 )
    goto LABEL_10;
  zoomSpritePairArray = v2->fields.zoomSpritePairArray;
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
    v9 = sub_B52A88(this);
    sub_B52A28(v9, 0LL);
  }
  v6 = zoomSpritePairArray->m_Items[currentZoomIndex];
  if ( !v6 )
LABEL_13:
    sub_B52A5C(this, method);
  p_freeZoomSpriteName = &v6->fields.spriteName;
  return *p_freeZoomSpriteName;
}


bool __fastcall WarBoardZoomSwitchButton__IsFreeZoom(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  return this->fields.currentZoomIndex == -1;
}


void __fastcall WarBoardZoomSwitchButton__OnClickRuleButton(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x1

  if ( (byte_42B0BFF & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_WarBoardZoomSwitchButton_CloseRuleDialog__);
    byte_42B0BFF = 1;
  }
  v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_WarBoardZoomSwitchButton_CloseRuleDialog__, 0LL);
  WarBoardUIUtility__ShowRuleDialog(v3, v4);
}


void __fastcall WarBoardZoomSwitchButton__SetEnable(
        WarBoardZoomSwitchButton_o *this,
        bool value,
        const MethodInfo *method)
{
  _BOOL4 v3; // w19
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 HideOnDisable_k__BackingField; // w21
  bool v9; // w1

  v3 = value;
  if ( (byte_42B0C02 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0C02 = 1;
  }
  if ( ((!this->fields.isEnabled ^ v3) & 1) == 0 )
  {
    this->fields.isEnabled = v3;
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
        v3,
        gameObject->klass[1]._1.byval_arg.data);
    }
    HideOnDisable_k__BackingField = this->fields._HideOnDisable_k__BackingField;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      v9 = !HideOnDisable_k__BackingField || v3;
      UnityEngine_GameObject__SetActive(gameObject, v9, 0LL);
      return;
    }
LABEL_15:
    sub_B52A5C(gameObject, v6);
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
    sub_B52A5C(transform, v4);
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
    sub_B52A5C(transform, v4);
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
  UISprite_o *newRuleBg; // x20
  __int64 v4; // x1
  UISprite_o *Instance; // x0
  UnityEngine_GameObject_o *newRuleObject; // x19

  if ( (byte_42B0BFE & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&StringLiteral_19495/*"icon_noticebg_01"*/);
    byte_42B0BFE = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(newRuleBg, 0LL);
  Instance = this->fields.newRuleBg;
  if ( !Instance
    || (UISprite__set_spriteName(Instance, (System_String_o *)StringLiteral_19495/*"icon_noticebg_01"*/, 0LL),
        newRuleObject = this->fields.newRuleObject,
        (Instance = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (Instance = *(UISprite_o **)&Instance->fields.mOuterUV.fields.m_Height) == 0LL
    || (Instance = (UISprite_o *)WarBoardData__HasNewWinCond((WarBoardData_o *)Instance, 0LL), !newRuleObject) )
  {
    sub_B52A5C(Instance, v4);
  }
  UnityEngine_GameObject__SetActive(newRuleObject, (unsigned __int8)Instance & 1, 0LL);
}


void __fastcall WarBoardZoomSwitchButton__UpdateUI(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *buttonSprite; // x20
  const MethodInfo *v4; // x1
  UISprite_o *v5; // x20
  System_String_o *CurrentButtonSpriteName; // x0
  __int64 v7; // x1

  if ( (byte_42B0C03 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0C03 = 1;
  }
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buttonSprite, 0LL, 0LL) )
  {
    v5 = this->fields.buttonSprite;
    CurrentButtonSpriteName = WarBoardZoomSwitchButton__GetCurrentButtonSpriteName(this, v4);
    if ( !v5 )
      sub_B52A5C(CurrentButtonSpriteName, v7);
    UISprite__set_spriteName(v5, CurrentButtonSpriteName, 0LL);
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