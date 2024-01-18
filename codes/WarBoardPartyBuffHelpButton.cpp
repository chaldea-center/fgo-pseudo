void __fastcall WarBoardPartyBuffHelpButton___ctor(WarBoardPartyBuffHelpButton_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardPartyBuffHelpButton__ApplyFsOffsetAdjustment(
        WarBoardPartyBuffHelpButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsOffset; // x20
  __int64 v4; // x1
  FSOffset_o *v5; // x0

  if ( (byte_418655F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418655F = 1;
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


void __fastcall WarBoardPartyBuffHelpButton__Awake(WarBoardPartyBuffHelpButton_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  this->fields.isEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPartyBuffHelpButton__OnClickButton(
        WarBoardPartyBuffHelpButton_o *this,
        const MethodInfo *method)
{
  if ( (byte_418655E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418655E = 1;
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
  __int64 v6; // x1
  bool v7; // w1

  isEnable = this->fields.isEnable;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v6);
  v7 = isEnable && flag;
  UnityEngine_GameObject__SetActive(gameObject, v7, 0LL);
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
  sub_B2C2F8(
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
  __int64 v5; // x1

  v3 = flag;
  this->fields.isEnable = flag;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, v3, 0LL);
}


void __fastcall WarBoardPartyBuffHelpButton__SetUpPositionForConfigurationMode(
        WarBoardPartyBuffHelpButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B2C434(0LL, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.positionForConfigurationMode, 0LL);
  WarBoardPartyBuffHelpButton__ApplyFsOffsetAdjustment(this, v5);
}


void __fastcall WarBoardPartyBuffHelpButton__SetUpPositionForPlayMode(
        WarBoardPartyBuffHelpButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B2C434(0LL, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.positionForPlayMode, 0LL);
  WarBoardPartyBuffHelpButton__ApplyFsOffsetAdjustment(this, v5);
}