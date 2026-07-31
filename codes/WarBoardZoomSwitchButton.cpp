void WarBoardZoomSwitchButton___ctor(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5936319 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardZoomSwitchButton_ZoomSpritePair___TypeInfo);
    byte_5936319 = 1;
  }
  v3 = (struct WarBoardZoomSwitchButton_ZoomSpritePair_array *)sub_21FFD10(
                                                                 WarBoardZoomSwitchButton_ZoomSpritePair___TypeInfo,
                                                                 0);
  this->fields.zoomSpritePairArray = v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.zoomSpritePairArray,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardZoomSwitchButton__ApplyFsOffsetAdjustment(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *fsOffset; // x20
  __int64 v5; // x1
  FSOffset_o *v6; // x0

  if ( (byte_5936318 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5936318 = 1;
  }
  fsOffset = (UnityEngine_Object_o *)this->fields.fsOffset;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(fsOffset, 0, 0) )
  {
    v6 = this->fields.fsOffset;
    if ( !v6 || (FSOffset__AddOffsetX(v6, 0), (v6 = this->fields.fsOffset) == 0) )
      sub_21FFECC(v6, v5);
    FSOffset__AddBottomY(v6, 0);
  }
}


void WarBoardZoomSwitchButton__Awake(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  this->fields.currentZoomIndex = -1;
  WarBoardZoomSwitchButton__UpdateUI(this, method);
  this->fields._HideOnDisable_k__BackingField = 1;
}


void WarBoardZoomSwitchButton__ClickButton(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  WarBoardZoomSwitchButton_o *v2; // x19
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *zoomSpritePairArray; // x8
  _BYTE *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *v6; // x8
  __int64 currentZoomIndex; // x9
  WarBoardZoomSwitchButton_ZoomSpritePair_o *v8; // x8
  const MethodInfo *v9; // x1

  v2 = this;
  if ( (byte_5936314 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_float___);
    this = (WarBoardZoomSwitchButton_o *)sub_21FFC50(&Method_WarBoardZoomSwitchButton_ClickButton__);
    byte_5936314 = 1;
  }
  zoomSpritePairArray = v2->fields.zoomSpritePairArray;
  if ( !zoomSpritePairArray )
    goto LABEL_10;
  v4 = Method_WarBoardZoomSwitchButton_ClickButton__;
  v2->fields.currentZoomIndex = (v2->fields.currentZoomIndex + 1) % SLODWORD(zoomSpritePairArray->max_length);
  if ( (v4[83] & 2) != 0 )
    v4 = (_BYTE *)sub_21FFC68(v4);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, *((_QWORD *)v4 + 4));
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  v6 = v2->fields.zoomSpritePairArray;
  if ( !v6 )
    goto LABEL_10;
  currentZoomIndex = v2->fields.currentZoomIndex;
  if ( (unsigned int)currentZoomIndex >= LODWORD(v6->max_length) )
    sub_21FFED4(this);
  v8 = v6->m_Items[currentZoomIndex];
  if ( !v8 )
LABEL_10:
    sub_21FFECC(this, method);
  ActionExtensions__Call_float_(
    (System_Action_T__o *)v2->fields.OnButtonClicked,
    v8->fields.zoom,
    (const MethodInfo_36CDFAC *)Method_ActionExtensions_Call_float___);
  WarBoardZoomSwitchButton__UpdateUI(v2, v9);
}


void WarBoardZoomSwitchButton__CloseRuleDialog(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  struct WarBoardData_o *warBoardData_k__BackingField; // x8
  int32_t winCondId; // w19
  WarBoardManager_c *v7; // x0

  if ( (byte_5936313 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardManager_TypeInfo);
    byte_5936313 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_10;
  winCondId = warBoardData_k__BackingField->fields.winCondId;
  v7 = WarBoardManager_TypeInfo;
  if ( !*(&WarBoardManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo, v3, v4);
    v7 = WarBoardManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v7->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, winCondId, 0);
  UnityEngine_PlayerPrefs__Save(0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__UpdateRuleButton(Instance, 0),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
LABEL_10:
    sub_21FFECC(Instance, v3);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0);
}


System_String_o *WarBoardZoomSwitchButton__GetCurrentButtonSpriteName(
        WarBoardZoomSwitchButton_o *this,
        const MethodInfo *method)
{
  WarBoardZoomSwitchButton_o *v2; // x19
  __int64 currentZoomIndex; // x8
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *zoomSpritePairArray; // x9
  WarBoardZoomSwitchButton_ZoomSpritePair_o *v5; // x8
  System_String_o **p_freeZoomSpriteName; // x8

  v2 = this;
  if ( (byte_5936317 & 1) == 0 )
  {
    this = (WarBoardZoomSwitchButton_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5936317 = 1;
  }
  currentZoomIndex = (unsigned int)v2->fields.currentZoomIndex;
  if ( (_DWORD)currentZoomIndex == -1 )
  {
    p_freeZoomSpriteName = &v2->fields.freeZoomSpriteName;
    return *p_freeZoomSpriteName;
  }
  if ( (currentZoomIndex & 0x80000000) != 0 )
    goto LABEL_9;
  zoomSpritePairArray = v2->fields.zoomSpritePairArray;
  if ( !zoomSpritePairArray )
    goto LABEL_12;
  if ( (int)currentZoomIndex >= SLODWORD(zoomSpritePairArray->max_length) )
  {
LABEL_9:
    p_freeZoomSpriteName = (System_String_o **)&StringLiteral_1/*""*/;
    return *p_freeZoomSpriteName;
  }
  v5 = zoomSpritePairArray->m_Items[currentZoomIndex];
  if ( !v5 )
LABEL_12:
    sub_21FFECC(this, method);
  p_freeZoomSpriteName = &v5->fields.spriteName;
  return *p_freeZoomSpriteName;
}


bool WarBoardZoomSwitchButton__IsFreeZoom(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  return this->fields.currentZoomIndex == -1;
}


void WarBoardZoomSwitchButton__OnClickRuleButton(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x1

  if ( (byte_5936312 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_WarBoardZoomSwitchButton_CloseRuleDialog__);
    byte_5936312 = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_WarBoardZoomSwitchButton_CloseRuleDialog__, 0);
  WarBoardUIUtility__ShowRuleDialog(v3, v4);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardZoomSwitchButton__SetEnable(WarBoardZoomSwitchButton_o *this, bool value, const MethodInfo *method)
{
  bool v3; // w19
  _BOOL4 v5; // w22
  UnityEngine_Object_o *button; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 HideOnDisable_k__BackingField; // w21

  v3 = value;
  v5 = value;
  if ( (byte_5936315 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5936315 = 1;
  }
  if ( this->fields.isEnabled != v5 )
  {
    button = (UnityEngine_Object_o *)this->fields.button;
    this->fields.isEnabled = v5;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value, method);
    if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.button;
      if ( !gameObject )
        goto LABEL_15;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, bool, const char *))gameObject->klass[1]._1.name)(
        gameObject,
        v3,
        gameObject->klass[1]._1.namespaze);
    }
    HideOnDisable_k__BackingField = this->fields._HideOnDisable_k__BackingField;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( HideOnDisable_k__BackingField )
    {
      if ( !gameObject )
LABEL_15:
        sub_21FFECC(gameObject, v7);
    }
    else
    {
      if ( !gameObject )
        goto LABEL_15;
      v3 = 1;
    }
    UnityEngine_GameObject__SetActive(gameObject, v3, 0);
  }
}


void WarBoardZoomSwitchButton__SetUpPositionForConfigurationMode(
        WarBoardZoomSwitchButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.positionForConfigurationMode, 0),
        WarBoardZoomSwitchButton__ApplyFsOffsetAdjustment(this, v5),
        (transform = (UnityEngine_Transform_o *)this->fields.ruleButtonObj) == 0) )
  {
    sub_21FFECC(transform, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
}


void WarBoardZoomSwitchButton__SetUpPositionForPlayMode(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.positionForPlayMode, 0),
        WarBoardZoomSwitchButton__ApplyFsOffsetAdjustment(this, v5),
        (transform = (UnityEngine_Transform_o *)this->fields.ruleButtonObj) == 0) )
  {
    sub_21FFECC(transform, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
}


void WarBoardZoomSwitchButton__SwitchToFreeZoom(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  if ( this->fields.currentZoomIndex != -1 )
  {
    this->fields.currentZoomIndex = -1;
    WarBoardZoomSwitchButton__UpdateUI(this, method);
  }
}


void WarBoardZoomSwitchButton__UpdateRuleButton(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UISprite_o *newRuleBg; // x20
  __int64 v5; // x1
  UISprite_o *Instance; // x0
  UnityEngine_GameObject_o *newRuleObject; // x19

  if ( (byte_5936311 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&StringLiteral_21145/*"icon_noticebg_01"*/);
    byte_5936311 = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v2);
  AtlasManager__SetCommon(newRuleBg, 0);
  Instance = this->fields.newRuleBg;
  if ( !Instance
    || (UISprite__set_spriteName(Instance, (System_String_o *)StringLiteral_21145/*"icon_noticebg_01"*/, 0),
        newRuleObject = this->fields.newRuleObject,
        (Instance = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (Instance = *(UISprite_o **)&Instance->fields.mOuterUV.fields.m_Height) == 0
    || (Instance = (UISprite_o *)WarBoardData__HasNewWinCond((WarBoardData_o *)Instance, 0), !newRuleObject) )
  {
    sub_21FFECC(Instance, v5);
  }
  UnityEngine_GameObject__SetActive(newRuleObject, (unsigned __int8)Instance & 1, 0);
}


void WarBoardZoomSwitchButton__UpdateUI(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *buttonSprite; // x20
  const MethodInfo *v5; // x1
  UISprite_o *v6; // x20
  System_String_o *CurrentButtonSpriteName; // x0
  __int64 v8; // x1

  if ( (byte_5936316 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5936316 = 1;
  }
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(buttonSprite, 0, 0) )
  {
    v6 = this->fields.buttonSprite;
    CurrentButtonSpriteName = WarBoardZoomSwitchButton__GetCurrentButtonSpriteName(this, v5);
    if ( !v6 )
      sub_21FFECC(CurrentButtonSpriteName, v8);
    UISprite__set_spriteName(v6, CurrentButtonSpriteName, 0);
  }
}


float WarBoardZoomSwitchButton__get_CameraWorkDuration(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  return this->fields.cameraWorkDuration;
}


bool WarBoardZoomSwitchButton__get_HideOnDisable(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  return this->fields._HideOnDisable_k__BackingField;
}


void WarBoardZoomSwitchButton__set_HideOnDisable(
        WarBoardZoomSwitchButton_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._HideOnDisable_k__BackingField = value;
}


void WarBoardZoomSwitchButton_ZoomSpritePair___ctor(
        WarBoardZoomSwitchButton_ZoomSpritePair_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}