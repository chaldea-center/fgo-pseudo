void __fastcall WarBoardZoomSwitchButton___ctor(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40FA938 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardZoomSwitchButton_ZoomSpritePair___TypeInfo, method);
    byte_40FA938 = 1;
  }
  v4 = (struct WarBoardZoomSwitchButton_ZoomSpritePair_array *)sub_B17014(
                                                                 WarBoardZoomSwitchButton_ZoomSpritePair___TypeInfo,
                                                                 0LL,
                                                                 v2);
  this->fields.zoomSpritePairArray = v4;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.zoomSpritePairArray,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardZoomSwitchButton__ApplyFsOffsetAdjustment(
        WarBoardZoomSwitchButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsOffset; // x20
  FSOffset_o *v4; // x0
  FSOffset_o *v5; // x0

  if ( (byte_40FA937 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA937 = 1;
  }
  fsOffset = (UnityEngine_Object_o *)this->fields.fsOffset;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fsOffset, 0LL, 0LL) )
  {
    v4 = this->fields.fsOffset;
    if ( !v4 || (FSOffset__AddOffsetX(v4, 0LL), (v5 = this->fields.fsOffset) == 0LL) )
      sub_B170D4();
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
  __int64 v3; // x1
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *zoomSpritePairArray; // x8
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *v8; // x8
  __int64 currentZoomIndex; // x9
  WarBoardZoomSwitchButton_ZoomSpritePair_o *v10; // x8
  const MethodInfo *v11; // x1

  if ( (byte_40FA933 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_float___, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FA933 = 1;
  }
  zoomSpritePairArray = this->fields.zoomSpritePairArray;
  if ( !zoomSpritePairArray )
    goto LABEL_11;
  this->fields.currentZoomIndex = (this->fields.currentZoomIndex + 1) % (signed int)zoomSpritePairArray->max_length;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v8 = this->fields.zoomSpritePairArray;
  if ( !v8 )
    goto LABEL_11;
  currentZoomIndex = this->fields.currentZoomIndex;
  if ( (unsigned int)currentZoomIndex >= v8->max_length )
  {
    sub_B17100(v5, v6, v7);
    sub_B170A0();
  }
  v10 = v8->m_Items[currentZoomIndex];
  if ( !v10 )
LABEL_11:
    sub_B170D4();
  ActionExtensions__Call_float_(
    (System_Action_T__o *)this->fields.OnButtonClicked,
    v10->fields.zoom,
    (const MethodInfo_2D39F44 *)Method_ActionExtensions_Call_float___);
  WarBoardZoomSwitchButton__UpdateUI(this, v11);
}


void __fastcall WarBoardZoomSwitchButton__CloseRuleDialog(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  _DWORD *monitor; // x8
  int32_t v5; // w19
  WarBoardManager_c *v6; // x0
  WebViewManager_o *v7; // x0
  WebViewManager_o *v8; // x0

  if ( (byte_40FA932 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B16FFC(&WarBoardManager_TypeInfo, v2);
    byte_40FA932 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  monitor = Instance[4].monitor;
  if ( !monitor )
    goto LABEL_11;
  v5 = monitor[38];
  v6 = WarBoardManager_TypeInfo;
  if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    v6 = WarBoardManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, v5, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  v7 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v7
    || (WarBoardManager__UpdateRuleButton((WarBoardManager_o *)v7, 0LL),
        (v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)v8, 1, 0, 0LL);
}


System_String_o *__fastcall WarBoardZoomSwitchButton__GetCurrentButtonSpriteName(
        WarBoardZoomSwitchButton_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardZoomSwitchButton_o *v3; // x19
  __int64 currentZoomIndex; // x8
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *zoomSpritePairArray; // x9
  int max_length; // w10
  WarBoardZoomSwitchButton_ZoomSpritePair_o *v7; // x8
  System_String_o **p_freeZoomSpriteName; // x8

  v3 = this;
  if ( (byte_40FA936 & 1) == 0 )
  {
    this = (WarBoardZoomSwitchButton_o *)sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FA936 = 1;
  }
  currentZoomIndex = v3->fields.currentZoomIndex;
  if ( (_DWORD)currentZoomIndex == -1 )
  {
    p_freeZoomSpriteName = &v3->fields.freeZoomSpriteName;
    return *p_freeZoomSpriteName;
  }
  if ( (currentZoomIndex & 0x80000000) != 0 )
    goto LABEL_10;
  zoomSpritePairArray = v3->fields.zoomSpritePairArray;
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
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v7 = zoomSpritePairArray->m_Items[currentZoomIndex];
  if ( !v7 )
LABEL_13:
    sub_B170D4();
  p_freeZoomSpriteName = &v7->fields.spriteName;
  return *p_freeZoomSpriteName;
}


bool __fastcall WarBoardZoomSwitchButton__IsFreeZoom(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  return this->fields.currentZoomIndex == -1;
}


void __fastcall WarBoardZoomSwitchButton__OnClickRuleButton(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_40FA931 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_WarBoardZoomSwitchButton_CloseRuleDialog__, v6);
    byte_40FA931 = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_WarBoardZoomSwitchButton_CloseRuleDialog__, 0LL);
  WarBoardUIUtility__ShowRuleDialog(v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardZoomSwitchButton__SetEnable(
        WarBoardZoomSwitchButton_o *this,
        bool value,
        const MethodInfo *method)
{
  _BOOL4 v3; // w19
  UnityEngine_Object_o *button; // x21
  struct UICommonButton_o *v6; // x0
  _BOOL4 HideOnDisable_k__BackingField; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  bool v9; // w1

  v3 = value;
  if ( (byte_40FA934 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, value);
    byte_40FA934 = 1;
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
      v6 = this->fields.button;
      if ( !v6 )
        goto LABEL_15;
      ((void (__fastcall *)(struct UICommonButton_o *, _BOOL4, Il2CppMethodPointer))v6->klass->vtable._5_set_isEnabled.method)(
        v6,
        v3,
        v6->klass->vtable._6_OnInit.methodPtr);
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
    sub_B170D4();
  }
}


void __fastcall WarBoardZoomSwitchButton__SetUpPositionForConfigurationMode(
        WarBoardZoomSwitchButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *ruleButtonObj; // x0

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.positionForConfigurationMode, 0LL),
        WarBoardZoomSwitchButton__ApplyFsOffsetAdjustment(this, v4),
        (ruleButtonObj = this->fields.ruleButtonObj) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(ruleButtonObj, 0, 0LL);
}


void __fastcall WarBoardZoomSwitchButton__SetUpPositionForPlayMode(
        WarBoardZoomSwitchButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *ruleButtonObj; // x0

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.positionForPlayMode, 0LL),
        WarBoardZoomSwitchButton__ApplyFsOffsetAdjustment(this, v4),
        (ruleButtonObj = this->fields.ruleButtonObj) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(ruleButtonObj, 1, 0LL);
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
  UISprite_o *v6; // x0
  UnityEngine_GameObject_o *newRuleObject; // x19
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x0
  bool HasNewWinCond; // w0

  if ( (byte_40FA930 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_19275/*"icon_noticebg_01"*/, v4);
    byte_40FA930 = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(newRuleBg, 0LL);
  v6 = this->fields.newRuleBg;
  if ( !v6
    || (UISprite__set_spriteName(v6, (System_String_o *)StringLiteral_19275/*"icon_noticebg_01"*/, 0LL),
        newRuleObject = this->fields.newRuleObject,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL
    || (HasNewWinCond = WarBoardData__HasNewWinCond(monitor, 0LL), !newRuleObject) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(newRuleObject, HasNewWinCond, 0LL);
}


void __fastcall WarBoardZoomSwitchButton__UpdateUI(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *buttonSprite; // x20
  const MethodInfo *v4; // x1
  UISprite_o *v5; // x20
  System_String_o *CurrentButtonSpriteName; // x0

  if ( (byte_40FA935 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA935 = 1;
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
      sub_B170D4();
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