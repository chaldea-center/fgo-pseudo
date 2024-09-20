void __fastcall SetAutoOpenAutoOrganizationDialogOptionControl___ctor(
        SetAutoOpenAutoOrganizationDialogOptionControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetAutoOpenAutoOrganizationDialogOptionControl__Awake(
        SetAutoOpenAutoOrganizationDialogOptionControl_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SetAutoOpenAutoOrganizationDialogOptionControl__Init(
        SetAutoOpenAutoOrganizationDialogOptionControl_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *infoLabel; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4A566F0 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9652/*"OPTION_AUTO_OPEN_AUTO_ORGANIZATION_DIALOG"*/);
    sub_1B885B0(&StringLiteral_9653/*"OPTION_AUTO_OPEN_AUTO_ORGANIZATION_DIALOG_INFO"*/);
    byte_4A566F0 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9652/*"OPTION_AUTO_OPEN_AUTO_ORGANIZATION_DIALOG"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v4, 0LL),
        infoLabel = this->fields.infoLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9653/*"OPTION_AUTO_OPEN_AUTO_ORGANIZATION_DIALOG_INFO"*/, 0LL),
        !infoLabel) )
  {
    sub_1B8880C(v4, v5);
  }
  UILabel__set_text(infoLabel, v4, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.flag = OptionManager__GetAutoOpenAutoOrganizationDialog(0LL);
  SetAutoOpenAutoOrganizationDialogOptionControl__RefreshDisplay(this, v7);
}


void __fastcall SetAutoOpenAutoOrganizationDialogOptionControl__OnClickButton(
        SetAutoOpenAutoOrganizationDialogOptionControl_o *this,
        const MethodInfo *method)
{
  SetAutoOpenAutoOrganizationDialogOptionControl_c *klass; // x9
  _QWORD *v4; // x0
  _BOOL4 flag; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4A566F3 & 1) == 0 )
  {
    sub_1B885B0(&Method_SetAutoOpenAutoOrganizationDialogOptionControl_OnClickButton__);
    byte_4A566F3 = 1;
  }
  klass = this->klass;
  this->fields.flag ^= 1u;
  ((void (__fastcall *)(SetAutoOpenAutoOrganizationDialogOptionControl_o *, Il2CppMethodPointer))klass->vtable._5_Reflection.method)(
    this,
    klass->vtable._6_IsAvailable.methodPtr);
  v4 = Method_SetAutoOpenAutoOrganizationDialogOptionControl_OnClickButton__;
  flag = this->fields.flag;
  if ( (*((_BYTE *)Method_SetAutoOpenAutoOrganizationDialogOptionControl_OnClickButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_SetAutoOpenAutoOrganizationDialogOptionControl_OnClickButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, !flag, 0LL);
  SetAutoOpenAutoOrganizationDialogOptionControl__RefreshDisplay(this, v7);
}


void __fastcall SetAutoOpenAutoOrganizationDialogOptionControl__Reflection(
        SetAutoOpenAutoOrganizationDialogOptionControl_o *this,
        const MethodInfo *method)
{
  _BOOL4 flag; // w19

  if ( (byte_4A566F1 & 1) == 0 )
  {
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A566F1 = 1;
  }
  flag = this->fields.flag;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetAutoOpenAutoOrganizationDialog(flag, 0LL);
}


void __fastcall SetAutoOpenAutoOrganizationDialogOptionControl__RefreshDisplay(
        SetAutoOpenAutoOrganizationDialogOptionControl_o *this,
        const MethodInfo *method)
{
  UIButton_o *switchButton; // x0
  __int64 *v4; // x8

  if ( (byte_4A566F2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17526/*"btn_on"*/);
    sub_1B885B0(&StringLiteral_17525/*"btn_off"*/);
    byte_4A566F2 = 1;
  }
  switchButton = this->fields.switchButton;
  if ( !switchButton )
    sub_1B8880C(0LL, method);
  if ( this->fields.flag )
    v4 = &StringLiteral_17526/*"btn_on"*/;
  else
    v4 = &StringLiteral_17525/*"btn_off"*/;
  UIButton__set_normalSprite(switchButton, (System_String_o *)*v4, 0LL);
}