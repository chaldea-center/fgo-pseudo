void SetAutoOpenAutoOrganizationDialogOptionControl___ctor(
        SetAutoOpenAutoOrganizationDialogOptionControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetAutoOpenAutoOrganizationDialogOptionControl__Awake(
        SetAutoOpenAutoOrganizationDialogOptionControl_o *this,
        const MethodInfo *method)
{
  ;
}


void SetAutoOpenAutoOrganizationDialogOptionControl__Init(
        SetAutoOpenAutoOrganizationDialogOptionControl_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o *v4; // x0
  UILabel_o *infoLabel; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4C3DFE6 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&OptionManager_TypeInfo);
    sub_1C37058(&StringLiteral_9658/*"OPTION_AUTO_OPEN_AUTO_ORGANIZATION_DIALOG"*/);
    sub_1C37058(&StringLiteral_9659/*"OPTION_AUTO_OPEN_AUTO_ORGANIZATION_DIALOG_INFO"*/);
    byte_4C3DFE6 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9658/*"OPTION_AUTO_OPEN_AUTO_ORGANIZATION_DIALOG"*/, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v4, 0),
        infoLabel = this->fields.infoLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9659/*"OPTION_AUTO_OPEN_AUTO_ORGANIZATION_DIALOG_INFO"*/, 0),
        !infoLabel) )
  {
    sub_1C372B4(v4);
  }
  UILabel__set_text(infoLabel, v4, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.flag = OptionManager__GetAutoOpenAutoOrganizationDialog(0);
  SetAutoOpenAutoOrganizationDialogOptionControl__RefreshDisplay(this, v6);
}


void SetAutoOpenAutoOrganizationDialogOptionControl__OnClickButton(
        SetAutoOpenAutoOrganizationDialogOptionControl_o *this,
        const MethodInfo *method)
{
  SetAutoOpenAutoOrganizationDialogOptionControl_c *klass; // x9
  _QWORD *v4; // x0
  _BOOL4 flag; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C3DFE9 & 1) == 0 )
  {
    sub_1C37058(&Method_SetAutoOpenAutoOrganizationDialogOptionControl_OnClickButton__);
    byte_4C3DFE9 = 1;
  }
  klass = this->klass;
  this->fields.flag ^= 1u;
  ((void (__fastcall *)(SetAutoOpenAutoOrganizationDialogOptionControl_o *, const MethodInfo *))klass->vtable._5_Reflection.methodPtr)(
    this,
    klass->vtable._5_Reflection.method);
  v4 = Method_SetAutoOpenAutoOrganizationDialogOptionControl_OnClickButton__;
  flag = this->fields.flag;
  if ( (*((_BYTE *)Method_SetAutoOpenAutoOrganizationDialogOptionControl_OnClickButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C37070(Method_SetAutoOpenAutoOrganizationDialogOptionControl_OnClickButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, !flag, 0, 0);
  SetAutoOpenAutoOrganizationDialogOptionControl__RefreshDisplay(this, v7);
}


void SetAutoOpenAutoOrganizationDialogOptionControl__Reflection(
        SetAutoOpenAutoOrganizationDialogOptionControl_o *this,
        const MethodInfo *method)
{
  _BOOL4 flag; // w19

  if ( (byte_4C3DFE7 & 1) == 0 )
  {
    sub_1C37058(&OptionManager_TypeInfo);
    byte_4C3DFE7 = 1;
  }
  flag = this->fields.flag;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetAutoOpenAutoOrganizationDialog(flag, 0);
}


void SetAutoOpenAutoOrganizationDialogOptionControl__RefreshDisplay(
        SetAutoOpenAutoOrganizationDialogOptionControl_o *this,
        const MethodInfo *method)
{
  UIButton_o *switchButton; // x0
  __int64 *v4; // x8

  if ( (byte_4C3DFE8 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17507/*"btn_on"*/);
    sub_1C37058(&StringLiteral_17506/*"btn_off"*/);
    byte_4C3DFE8 = 1;
  }
  switchButton = this->fields.switchButton;
  if ( !switchButton )
    sub_1C372B4(0);
  if ( this->fields.flag )
    v4 = &StringLiteral_17507/*"btn_on"*/;
  else
    v4 = &StringLiteral_17506/*"btn_off"*/;
  UIButton__set_normalSprite(switchButton, (System_String_o *)*v4, 0);
}