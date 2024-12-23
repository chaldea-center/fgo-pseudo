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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *titleLabel; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  UILabel_o *infoLabel; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4B61F6E & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    sub_1BE4ACC(&OptionManager_TypeInfo, v3);
    sub_1BE4ACC(&StringLiteral_9808/*"OPTION_AUTO_OPEN_AUTO_ORGANIZATION_DIALOG"*/, v4);
    sub_1BE4ACC(&StringLiteral_9809/*"OPTION_AUTO_OPEN_AUTO_ORGANIZATION_DIALOG_INFO"*/, v5);
    byte_4B61F6E = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9808/*"OPTION_AUTO_OPEN_AUTO_ORGANIZATION_DIALOG"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v7, 0LL),
        infoLabel = this->fields.infoLabel,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9809/*"OPTION_AUTO_OPEN_AUTO_ORGANIZATION_DIALOG_INFO"*/, 0LL),
        !infoLabel) )
  {
    sub_1BE4D28(v7, v8);
  }
  UILabel__set_text(infoLabel, v7, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.flag = OptionManager__GetAutoOpenAutoOrganizationDialog(0LL);
  SetAutoOpenAutoOrganizationDialogOptionControl__RefreshDisplay(this, v10);
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

  if ( (byte_4B61F71 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SetAutoOpenAutoOrganizationDialogOptionControl_OnClickButton__, method);
    byte_4B61F71 = 1;
  }
  klass = this->klass;
  this->fields.flag ^= 1u;
  ((void (__fastcall *)(SetAutoOpenAutoOrganizationDialogOptionControl_o *, Il2CppMethodPointer))klass->vtable._5_Reflection.method)(
    this,
    klass->vtable._6_IsAvailable.methodPtr);
  v4 = Method_SetAutoOpenAutoOrganizationDialogOptionControl_OnClickButton__;
  flag = this->fields.flag;
  if ( (*((_BYTE *)Method_SetAutoOpenAutoOrganizationDialogOptionControl_OnClickButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BE4AE4(Method_SetAutoOpenAutoOrganizationDialogOptionControl_OnClickButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, !flag, 0LL);
  SetAutoOpenAutoOrganizationDialogOptionControl__RefreshDisplay(this, v7);
}


void __fastcall SetAutoOpenAutoOrganizationDialogOptionControl__Reflection(
        SetAutoOpenAutoOrganizationDialogOptionControl_o *this,
        const MethodInfo *method)
{
  _BOOL4 flag; // w19

  if ( (byte_4B61F6F & 1) == 0 )
  {
    sub_1BE4ACC(&OptionManager_TypeInfo, method);
    byte_4B61F6F = 1;
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
  __int64 v3; // x1
  UIButton_o *switchButton; // x0
  __int64 *v5; // x8

  if ( (byte_4B61F70 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17750/*"btn_on"*/, method);
    sub_1BE4ACC(&StringLiteral_17749/*"btn_off"*/, v3);
    byte_4B61F70 = 1;
  }
  switchButton = this->fields.switchButton;
  if ( !switchButton )
    sub_1BE4D28(0LL, method);
  if ( this->fields.flag )
    v5 = &StringLiteral_17750/*"btn_on"*/;
  else
    v5 = &StringLiteral_17749/*"btn_off"*/;
  UIButton__set_normalSprite(switchButton, (System_String_o *)*v5, 0LL);
}