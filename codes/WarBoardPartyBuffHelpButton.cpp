void WarBoardPartyBuffHelpButton___ctor(WarBoardPartyBuffHelpButton_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardPartyBuffHelpButton__ApplyFsOffsetAdjustment(
        WarBoardPartyBuffHelpButton_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *fsOffset; // x20
  __int64 v5; // x1
  FSOffset_o *v6; // x0

  if ( (byte_59362EE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59362EE = 1;
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


void WarBoardPartyBuffHelpButton__Awake(WarBoardPartyBuffHelpButton_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  this->fields.isEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardPartyBuffHelpButton__OnClickButton(WarBoardPartyBuffHelpButton_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_59362ED & 1) == 0 )
  {
    sub_21FFC50(&Method_WarBoardPartyBuffHelpButton_OnClickButton__);
    byte_59362ED = 1;
  }
  v3 = Method_WarBoardPartyBuffHelpButton_OnClickButton__;
  if ( (*((_BYTE *)Method_WarBoardPartyBuffHelpButton_OnClickButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_WarBoardPartyBuffHelpButton_OnClickButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ActionExtensions__Call(this->fields.onButtonClickCallback, 0);
}


void WarBoardPartyBuffHelpButton__SetActive(WarBoardPartyBuffHelpButton_o *this, bool flag, const MethodInfo *method)
{
  _BOOL4 isEnable; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  isEnable = this->fields.isEnable;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( isEnable )
  {
    if ( !gameObject )
LABEL_7:
      sub_21FFECC(gameObject, v6);
  }
  else
  {
    if ( !gameObject )
      goto LABEL_7;
    flag = 0;
  }
  UnityEngine_GameObject__SetActive(gameObject, flag, 0);
}


void WarBoardPartyBuffHelpButton__SetClickButtonCallback(
        WarBoardPartyBuffHelpButton_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onButtonClickCallback = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onButtonClickCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardPartyBuffHelpButton__SetEnable(WarBoardPartyBuffHelpButton_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  this->fields.isEnable = flag;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, flag, 0);
}


void WarBoardPartyBuffHelpButton__SetUpPositionForConfigurationMode(
        WarBoardPartyBuffHelpButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_21FFECC(0, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.positionForConfigurationMode, 0);
  WarBoardPartyBuffHelpButton__ApplyFsOffsetAdjustment(this, v5);
}


void WarBoardPartyBuffHelpButton__SetUpPositionForPlayMode(
        WarBoardPartyBuffHelpButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_21FFECC(0, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.positionForPlayMode, 0);
  WarBoardPartyBuffHelpButton__ApplyFsOffsetAdjustment(this, v5);
}