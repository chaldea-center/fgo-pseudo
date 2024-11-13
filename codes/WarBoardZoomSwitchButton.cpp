void __fastcall WarBoardZoomSwitchButton___ctor(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B14147 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardZoomSwitchButton_ZoomSpritePair___TypeInfo, method, v2);
    byte_4B14147 = 1;
  }
  v4 = (struct WarBoardZoomSwitchButton_ZoomSpritePair_array *)sub_1BCA888(
                                                                 WarBoardZoomSwitchButton_ZoomSpritePair___TypeInfo,
                                                                 0LL);
  this->fields.zoomSpritePairArray = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.zoomSpritePairArray, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardZoomSwitchButton__ApplyFsOffsetAdjustment(
        WarBoardZoomSwitchButton_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *fsOffset; // x20
  __int64 v5; // x1
  FSOffset_o *v6; // x0

  if ( (byte_4B14146 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B14146 = 1;
  }
  fsOffset = (UnityEngine_Object_o *)this->fields.fsOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(fsOffset, 0LL, 0LL) )
  {
    v6 = this->fields.fsOffset;
    if ( !v6 || (FSOffset__AddOffsetX(v6, 0LL), (v6 = this->fields.fsOffset) == 0LL) )
      sub_1BCAA3C(v6, v5);
    FSOffset__AddBottomY(v6, 0LL);
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
  __int64 v2; // x2
  WarBoardZoomSwitchButton_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *zoomSpritePairArray; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct WarBoardZoomSwitchButton_ZoomSpritePair_array *v9; // x8
  __int64 currentZoomIndex; // x9
  WarBoardZoomSwitchButton_ZoomSpritePair_o *v11; // x8
  const MethodInfo *v12; // x1

  v3 = this;
  if ( (byte_4B14142 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_float___, method, v2);
    this = (WarBoardZoomSwitchButton_o *)sub_1BCA7E0(&Method_WarBoardZoomSwitchButton_ClickButton__, v4, v5);
    byte_4B14142 = 1;
  }
  zoomSpritePairArray = v3->fields.zoomSpritePairArray;
  if ( !zoomSpritePairArray )
    goto LABEL_10;
  v3->fields.currentZoomIndex = (v3->fields.currentZoomIndex + 1) % (signed int)zoomSpritePairArray->max_length;
  v7 = Method_WarBoardZoomSwitchButton_ClickButton__;
  if ( (*((_BYTE *)Method_WarBoardZoomSwitchButton_ClickButton__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BCA7F8(Method_WarBoardZoomSwitchButton_ClickButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  v9 = v3->fields.zoomSpritePairArray;
  if ( !v9 )
    goto LABEL_10;
  currentZoomIndex = v3->fields.currentZoomIndex;
  if ( (unsigned int)currentZoomIndex >= v9->max_length )
    sub_1BCAA44(this, method);
  v11 = v9->m_Items[currentZoomIndex];
  if ( !v11 )
LABEL_10:
    sub_1BCAA3C(this, method);
  ActionExtensions__Call_float_(
    (System_Action_T__o *)v3->fields.OnButtonClicked,
    v11->fields.zoom,
    (const MethodInfo_2E655D8 *)Method_ActionExtensions_Call_float___);
  WarBoardZoomSwitchButton__UpdateUI(v3, v12);
}


void __fastcall WarBoardZoomSwitchButton__CloseRuleDialog(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  WarBoardManager_o *Instance; // x0
  __int64 v6; // x1
  struct WarBoardData_o *warBoardData_k__BackingField; // x8
  int32_t winCondId; // w19
  WarBoardManager_c *v9; // x0

  if ( (byte_4B14141 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    sub_1BCA7E0(&WarBoardManager_TypeInfo, v3, v4);
    byte_4B14141 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_10;
  winCondId = warBoardData_k__BackingField->fields.winCondId;
  v9 = WarBoardManager_TypeInfo;
  if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo, v6);
    v9 = WarBoardManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v9->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, winCondId, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__UpdateRuleButton(Instance, 0LL),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(Instance, v6);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0LL);
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
  if ( (byte_4B14145 & 1) == 0 )
  {
    this = (WarBoardZoomSwitchButton_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B14145 = 1;
  }
  currentZoomIndex = (unsigned int)v3->fields.currentZoomIndex;
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
    sub_1BCAA44(this, method);
  v7 = zoomSpritePairArray->m_Items[currentZoomIndex];
  if ( !v7 )
LABEL_13:
    sub_1BCAA3C(this, method);
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
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4B14140 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarBoardZoomSwitchButton_CloseRuleDialog__, v5, v6);
    byte_4B14140 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_WarBoardZoomSwitchButton_CloseRuleDialog__, 0LL);
  WarBoardUIUtility__ShowRuleDialog(v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardZoomSwitchButton__SetEnable(
        WarBoardZoomSwitchButton_o *this,
        bool value,
        const MethodInfo *method)
{
  _BOOL4 v5; // w21
  UnityEngine_Object_o *button; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 HideOnDisable_k__BackingField; // w21

  v5 = value;
  if ( (byte_4B14143 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, value, method);
    byte_4B14143 = 1;
  }
  if ( this->fields.isEnabled != v5 )
  {
    this->fields.isEnabled = v5;
    button = (UnityEngine_Object_o *)this->fields.button;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
    if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.button;
      if ( !gameObject )
        goto LABEL_11;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, bool, void *))gameObject->klass[1]._1.namespaze)(
        gameObject,
        value,
        gameObject->klass[1]._1.byval_arg.data);
    }
    HideOnDisable_k__BackingField = this->fields._HideOnDisable_k__BackingField;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, !HideOnDisable_k__BackingField || value, 0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(gameObject, v7);
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
    sub_1BCAA3C(transform, v4);
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
    sub_1BCAA3C(transform, v4);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *newRuleBg; // x20
  __int64 v9; // x1
  UISprite_o *Instance; // x0
  UnityEngine_GameObject_o *newRuleObject; // x19

  if ( (byte_4B1413F & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_20372/*"icon_noticebg_01"*/, v6, v7);
    byte_4B1413F = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  AtlasManager__SetCommon(newRuleBg, 0LL);
  Instance = this->fields.newRuleBg;
  if ( !Instance
    || (UISprite__set_spriteName(Instance, (System_String_o *)StringLiteral_20372/*"icon_noticebg_01"*/, 0LL),
        newRuleObject = this->fields.newRuleObject,
        (Instance = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (Instance = *(UISprite_o **)&Instance->fields.mOuterUV.fields.m_Height) == 0LL
    || (Instance = (UISprite_o *)WarBoardData__HasNewWinCond((WarBoardData_o *)Instance, 0LL), !newRuleObject) )
  {
    sub_1BCAA3C(Instance, v9);
  }
  UnityEngine_GameObject__SetActive(newRuleObject, (unsigned __int8)Instance & 1, 0LL);
}


void __fastcall WarBoardZoomSwitchButton__UpdateUI(WarBoardZoomSwitchButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *buttonSprite; // x20
  const MethodInfo *v5; // x1
  UISprite_o *v6; // x20
  System_String_o *CurrentButtonSpriteName; // x0
  __int64 v8; // x1

  if ( (byte_4B14144 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B14144 = 1;
  }
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(buttonSprite, 0LL, 0LL) )
  {
    v6 = this->fields.buttonSprite;
    CurrentButtonSpriteName = WarBoardZoomSwitchButton__GetCurrentButtonSpriteName(this, v5);
    if ( !v6 )
      sub_1BCAA3C(CurrentButtonSpriteName, v8);
    UISprite__set_spriteName(v6, CurrentButtonSpriteName, 0LL);
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