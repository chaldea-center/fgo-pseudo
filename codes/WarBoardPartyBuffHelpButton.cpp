void __fastcall WarBoardPartyBuffHelpButton___ctor(WarBoardPartyBuffHelpButton_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardPartyBuffHelpButton__ApplyFsOffsetAdjustment(
        WarBoardPartyBuffHelpButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsOffset; // x20
  FSOffset_o *v4; // x0

  if ( (byte_4213311 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4213311 = 1;
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
    if ( !v4 || (FSOffset__AddOffsetX(v4, 0LL), (v4 = this->fields.fsOffset) == 0LL) )
      sub_B0D97C(v4);
    FSOffset__AddBottomY(v4, 0LL);
  }
}


void __fastcall WarBoardPartyBuffHelpButton__Awake(WarBoardPartyBuffHelpButton_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.isEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPartyBuffHelpButton__OnClickButton(
        WarBoardPartyBuffHelpButton_o *this,
        const MethodInfo *method)
{
  if ( (byte_4213310 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4213310 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  ActionExtensions__Call(this->fields.onButtonClickCallback, 0LL);
}


void __fastcall WarBoardPartyBuffHelpButton__SetActive(
        WarBoardPartyBuffHelpButton_o *this,
        bool flag,
        const MethodInfo *method)
{
  _BOOL4 isEnable; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  bool v6; // w1

  isEnable = this->fields.isEnable;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  v6 = isEnable && flag;
  UnityEngine_GameObject__SetActive(gameObject, v6, 0LL);
}


void __fastcall WarBoardPartyBuffHelpButton__SetClickButtonCallback(
        WarBoardPartyBuffHelpButton_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onButtonClickCallback = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.onButtonClickCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardPartyBuffHelpButton__SetEnable(
        WarBoardPartyBuffHelpButton_o *this,
        bool flag,
        const MethodInfo *method)
{
  bool v3; // w19
  UnityEngine_GameObject_o *gameObject; // x0

  v3 = flag;
  this->fields.isEnable = flag;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, v3, 0LL);
}


void __fastcall WarBoardPartyBuffHelpButton__SetUpPositionForConfigurationMode(
        WarBoardPartyBuffHelpButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v4; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
  UnityEngine_Transform__set_localPosition(transform, this->fields.positionForConfigurationMode, 0LL);
  WarBoardPartyBuffHelpButton__ApplyFsOffsetAdjustment(this, v4);
}


void __fastcall WarBoardPartyBuffHelpButton__SetUpPositionForPlayMode(
        WarBoardPartyBuffHelpButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v4; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
  UnityEngine_Transform__set_localPosition(transform, this->fields.positionForPlayMode, 0LL);
  WarBoardPartyBuffHelpButton__ApplyFsOffsetAdjustment(this, v4);
}