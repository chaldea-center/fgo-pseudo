void SaveDataDeleteMenuDialog___ctor(SaveDataDeleteMenuDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_59326F8 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59326F8 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.buttonDisabledColor = (struct UnityEngine_Color_o)xmmword_E93FA0;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


bool SaveDataDeleteMenuDialog__IsValidSaveDeleteButton(SaveDataDeleteMenuDialog_o *this, const MethodInfo *method)
{
  return !this->fields.isNonReleaseSaveDeleteButton && !this->fields.isSaveDataDeleted;
}


void SaveDataDeleteMenuDialog__OnClickCacheClear(SaveDataDeleteMenuDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_59326F5 & 1) == 0 )
  {
    sub_21FFC50(&Method_SaveDataDeleteMenuDialog_OnClickCacheClear__);
    byte_59326F5 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_SaveDataDeleteMenuDialog_OnClickCacheClear__;
    if ( (*((_BYTE *)Method_SaveDataDeleteMenuDialog_OnClickCacheClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SaveDataDeleteMenuDialog_OnClickCacheClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ActionExtensions__Call(this->fields.cacheClearAction, 0);
    this->fields.cacheClearAction = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.cacheClearAction, 0, v5, v6, v7, v8, v9, v10);
  }
}


void SaveDataDeleteMenuDialog__OnClickCancel(SaveDataDeleteMenuDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_59326F7 & 1) == 0 )
  {
    sub_21FFC50(&Method_SaveDataDeleteMenuDialog_OnClickCancel__);
    byte_59326F7 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_SaveDataDeleteMenuDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SaveDataDeleteMenuDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SaveDataDeleteMenuDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ActionExtensions__Call(this->fields.cancelAction, 0);
    this->fields.cancelAction = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.cancelAction, 0, v5, v6, v7, v8, v9, v10);
  }
}


void SaveDataDeleteMenuDialog__OnClickSeveDataDelete(SaveDataDeleteMenuDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_59326F6 & 1) == 0 )
  {
    sub_21FFC50(&Method_SaveDataDeleteMenuDialog_OnClickSeveDataDelete__);
    byte_59326F6 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    if ( this->fields.isNonReleaseSaveDeleteButton || this->fields.isSaveDataDeleted )
    {
      v3 = Method_SaveDataDeleteMenuDialog_OnClickSeveDataDelete__;
      if ( (*((_BYTE *)Method_SaveDataDeleteMenuDialog_OnClickSeveDataDelete__ + 83) & 2) != 0 )
        v3 = (_QWORD *)sub_21FFC68(Method_SaveDataDeleteMenuDialog_OnClickSeveDataDelete__);
      v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
      OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0, 0);
    }
    else
    {
      v5 = Method_SaveDataDeleteMenuDialog_OnClickSeveDataDelete__;
      if ( (*((_BYTE *)Method_SaveDataDeleteMenuDialog_OnClickSeveDataDelete__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_21FFC68(Method_SaveDataDeleteMenuDialog_OnClickSeveDataDelete__);
      v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      ActionExtensions__Call(this->fields.saveDataDeleteAction, 0);
      this->fields.saveDataDeleteAction = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.saveDataDeleteAction, 0, v7, v8, v9, v10, v11, v12);
    }
  }
}


void SaveDataDeleteMenuDialog__OnEnable(SaveDataDeleteMenuDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_59326F3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16235/*"Window/Objects/Buttons/CancelButton"*/);
    byte_59326F3 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_16235/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void SaveDataDeleteMenuDialog__Open(
        SaveDataDeleteMenuDialog_o *this,
        System_Action_o *cacheClearAction,
        System_Action_o *saveDataDeleteAction,
        System_Action_o *cancelAction,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  __int64 v25; // x2
  const MethodInfo *v26; // x2
  bool v27; // w1

  if ( (byte_59326F4 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59326F4 = 1;
  }
  this->fields.cacheClearAction = cacheClearAction;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cacheClearAction,
    (int32_t)cacheClearAction,
    (System_String_o *)saveDataDeleteAction,
    (System_String_o *)cancelAction,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.saveDataDeleteAction = saveDataDeleteAction;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.saveDataDeleteAction,
    (int32_t)saveDataDeleteAction,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.cancelAction = cancelAction;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cancelAction,
    (int32_t)cancelAction,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24, v25);
  this->fields.isSaveDataDeleted = TerminalPramsManager__IsUserSaveDataDeleted(0);
  this->fields.isNonReleaseSaveDeleteButton = TerminalPramsManager__IsUserSaveDataDeleteButtonNonRelease(0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
  v27 = 0;
  if ( !this->fields.isNonReleaseSaveDeleteButton )
    v27 = !this->fields.isSaveDataDeleted;
  SaveDataDeleteMenuDialog__UpdateSaveDeleteButton(this, v27, v26);
}


// local variable allocation has failed, the output may be wrong!
void SaveDataDeleteMenuDialog__UpdateSaveDeleteButton(
        SaveDataDeleteMenuDialog_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UIButtonColor_o *saveDeleteButtonColor; // x0
  _BOOL4 v5; // w21
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0 OVERLAPPED

  saveDeleteButtonColor = this->fields.saveDeleteButtonColor;
  if ( !saveDeleteButtonColor )
    goto LABEL_7;
  v5 = isEnabled;
  saveDeleteButtonColor->klass->vtable._14_SetState.methodPtr();
  a = 1.0;
  b = 1.0;
  saveDeleteButtonColor = this->fields.saveDeleteButtonColor;
  g = 1.0;
  r = 1.0;
  if ( !v5 )
  {
    r = this->fields.buttonDisabledColor.fields.r;
    g = this->fields.buttonDisabledColor.fields.g;
    b = this->fields.buttonDisabledColor.fields.b;
    a = this->fields.buttonDisabledColor.fields.a;
  }
  if ( !saveDeleteButtonColor
    || (UIButtonColor__set_defaultColor(saveDeleteButtonColor, *(UnityEngine_Color_o *)&r, 0),
        (saveDeleteButtonColor = this->fields.saveDeleteButtonColor) == 0) )
  {
LABEL_7:
    sub_21FFECC(saveDeleteButtonColor, isEnabled);
  }
  ((void (__fastcall *)(UIButtonColor_o *, bool, const MethodInfo *))saveDeleteButtonColor->klass->vtable._5_set_isEnabled.methodPtr)(
    saveDeleteButtonColor,
    isEnabled,
    saveDeleteButtonColor->klass->vtable._5_set_isEnabled.method);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.saveDeleteButtonWarningLabel1, isEnabled, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.saveDeleteButtonWarningLabel2, !isEnabled, 0);
}