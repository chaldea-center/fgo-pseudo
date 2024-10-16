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

  if ( (byte_4AB3CA0 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB3CA0 = 1;
  }
  fsOffset = (UnityEngine_Object_o *)this->fields.fsOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsOffset, 0LL, 0LL) )
  {
    v5 = this->fields.fsOffset;
    if ( !v5 || (FSOffset__AddOffsetX(v5, 0LL), (v5 = this->fields.fsOffset) == 0LL) )
      sub_1BAB678(v5, v4);
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
    sub_1BAB678(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPartyBuffHelpButton__OnClickButton(
        WarBoardPartyBuffHelpButton_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4AB3C9F & 1) == 0 )
  {
    sub_1BAB41C(&Method_WarBoardPartyBuffHelpButton_OnClickButton__, method);
    byte_4AB3C9F = 1;
  }
  v3 = Method_WarBoardPartyBuffHelpButton_OnClickButton__;
  if ( (*((_BYTE *)Method_WarBoardPartyBuffHelpButton_OnClickButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BAB434(Method_WarBoardPartyBuffHelpButton_OnClickButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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

  isEnable = this->fields.isEnable;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BAB678(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, isEnable && flag, 0LL);
}


void __fastcall WarBoardPartyBuffHelpButton__SetClickButtonCallback(
        WarBoardPartyBuffHelpButton_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.onButtonClickCallback = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.onButtonClickCallback,
    (int32_t)callback,
    (int32_t)method,
    v3);
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
    sub_1BAB678(0LL, v5);
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
    sub_1BAB678(0LL, v4);
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
    sub_1BAB678(0LL, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.positionForPlayMode, 0LL);
  WarBoardPartyBuffHelpButton__ApplyFsOffsetAdjustment(this, v5);
}