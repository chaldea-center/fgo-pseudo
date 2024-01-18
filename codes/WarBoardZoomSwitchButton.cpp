void __fastcall WarBoardZoomSwitchButton___ctor(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4188916 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardZoomSwitchButton_ZoomSpritePair___TypeInfo, method);
    byte_4188916 = 1;
  }
  v3 = (struct WarBoardZoomSwitchButton_ZoomSpritePair_array *)sub_B2C374(
                                                                 WarBoardZoomSwitchButton_ZoomSpritePair___TypeInfo,
                                                                 0LL);
  this->fields.zoomSpritePairArray = v3;
  sub_B2C2F8(
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

  if ( (byte_4188915 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188915 = 1;
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
      sub_B2C434(v5, v4);
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
  __int64 v3; // x1
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *zoomSpritePairArray; // x8
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *v5; // x8
  __int64 currentZoomIndex; // x9
  WarBoardZoomSwitchButton_ZoomSpritePair_o *v7; // x8
  const MethodInfo *v8; // x1
  __int64 v9; // x0

  v2 = this;
  if ( (byte_4188911 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_float___, method);
    this = (WarBoardZoomSwitchButton_o *)sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4188911 = 1;
  }
  zoomSpritePairArray = v2->fields.zoomSpritePairArray;
  if ( !zoomSpritePairArray )
    goto LABEL_11;
  v2->fields.currentZoomIndex = (v2->fields.currentZoomIndex + 1) % (signed int)zoomSpritePairArray->max_length;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v5 = v2->fields.zoomSpritePairArray;
  if ( !v5 )
    goto LABEL_11;
  currentZoomIndex = v2->fields.currentZoomIndex;
  if ( (unsigned int)currentZoomIndex >= v5->max_length )
  {
    v9 = sub_B2C460(this);
    sub_B2C400(v9, 0LL);
  }
  v7 = v5->m_Items[currentZoomIndex];
  if ( !v7 )
LABEL_11:
    sub_B2C434(this, method);
  ActionExtensions__Call_float_(
    (System_Action_T__o *)v2->fields.OnButtonClicked,
    v7->fields.zoom,
    (const MethodInfo_2D65B28 *)Method_ActionExtensions_Call_float___);
  WarBoardZoomSwitchButton__UpdateUI(v2, v8);
}


void __fastcall WarBoardZoomSwitchButton__CloseRuleDialog(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  WarBoardManager_o *Instance; // x0
  __int64 v4; // x1
  struct WarBoardData_o *warBoardData_k__BackingField; // x8
  int32_t winCondId; // w19
  WarBoardManager_c *v7; // x0

  if ( (byte_4188910 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B2C35C(&WarBoardManager_TypeInfo, v2);
    byte_4188910 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_11;
  winCondId = warBoardData_k__BackingField->fields.winCondId;
  v7 = WarBoardManager_TypeInfo;
  if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    v7 = WarBoardManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v7->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, winCondId, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__UpdateRuleButton(Instance, 0LL),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_B2C434(Instance, v4);
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
  if ( (byte_4188914 & 1) == 0 )
  {
    this = (WarBoardZoomSwitchButton_o *)sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4188914 = 1;
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
    v9 = sub_B2C460(this);
    sub_B2C400(v9, 0LL);
  }
  v6 = zoomSpritePairArray->m_Items[currentZoomIndex];
  if ( !v6 )
LABEL_13:
    sub_B2C434(this, method);
  p_freeZoomSpriteName = &v6->fields.spriteName;
  return *p_freeZoomSpriteName;
}


bool __fastcall WarBoardZoomSwitchButton__IsFreeZoom(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  return this->fields.currentZoomIndex == -1;
}


void __fastcall WarBoardZoomSwitchButton__OnClickRuleButton(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x1

  if ( (byte_418890F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_WarBoardZoomSwitchButton_CloseRuleDialog__, v3);
    byte_418890F = 1;
  }
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_WarBoardZoomSwitchButton_CloseRuleDialog__, 0LL);
  WarBoardUIUtility__ShowRuleDialog(v4, v5);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4188912 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, value);
    byte_4188912 = 1;
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
    sub_B2C434(gameObject, v6);
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
    sub_B2C434(transform, v4);
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
    sub_B2C434(transform, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  UISprite_o *newRuleBg; // x20
  __int64 v6; // x1
  UISprite_o *Instance; // x0
  UnityEngine_GameObject_o *newRuleObject; // x19

  if ( (byte_418890E & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_19349/*"icon_noticebg_01"*/, v4);
    byte_418890E = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(newRuleBg, 0LL);
  Instance = this->fields.newRuleBg;
  if ( !Instance
    || (UISprite__set_spriteName(Instance, (System_String_o *)StringLiteral_19349/*"icon_noticebg_01"*/, 0LL),
        newRuleObject = this->fields.newRuleObject,
        (Instance = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (Instance = *(UISprite_o **)&Instance->fields.mOuterUV.fields.m_Height) == 0LL
    || (Instance = (UISprite_o *)WarBoardData__HasNewWinCond((WarBoardData_o *)Instance, 0LL), !newRuleObject) )
  {
    sub_B2C434(Instance, v6);
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

  if ( (byte_4188913 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188913 = 1;
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
      sub_B2C434(CurrentButtonSpriteName, v7);
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