void SaveDataDeleteMenuDialog___ctor(SaveDataDeleteMenuDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4DFEEE1 & 1) == 0 )
  {
    sub_1CE6700(&BaseDialog_TypeInfo);
    byte_4DFEEE1 = 1;
  }
  this->fields.buttonDisabledColor = (struct UnityEngine_Color_o)xmmword_D24BB0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SaveDataDeleteMenuDialog__OnClickCacheClear(SaveDataDeleteMenuDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o **p_cacheClearAction; // x19
  System_Action_o *cacheClearAction; // t1

  if ( (byte_4DFEEDE & 1) == 0 )
  {
    sub_1CE6700(&Method_SaveDataDeleteMenuDialog_OnClickCacheClear__);
    byte_4DFEEDE = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_SaveDataDeleteMenuDialog_OnClickCacheClear__;
    if ( (*((_BYTE *)Method_SaveDataDeleteMenuDialog_OnClickCacheClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_SaveDataDeleteMenuDialog_OnClickCacheClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    cacheClearAction = this->fields.cacheClearAction;
    p_cacheClearAction = &this->fields.cacheClearAction;
    ActionExtensions__Call(cacheClearAction, 0);
    *p_cacheClearAction = 0;
    sub_1CE66A4(p_cacheClearAction, 0);
  }
}


void SaveDataDeleteMenuDialog__OnClickCancel(SaveDataDeleteMenuDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o **p_cancelAction; // x19
  System_Action_o *cancelAction; // t1

  if ( (byte_4DFEEE0 & 1) == 0 )
  {
    sub_1CE6700(&Method_SaveDataDeleteMenuDialog_OnClickCancel__);
    byte_4DFEEE0 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_SaveDataDeleteMenuDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SaveDataDeleteMenuDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_SaveDataDeleteMenuDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    cancelAction = this->fields.cancelAction;
    p_cancelAction = &this->fields.cancelAction;
    ActionExtensions__Call(cancelAction, 0);
    *p_cancelAction = 0;
    sub_1CE66A4(p_cancelAction, 0);
  }
}


void SaveDataDeleteMenuDialog__OnClickSeveDataDelete(SaveDataDeleteMenuDialog_o *this, const MethodInfo *method)
{
  _BOOL4 isSaveDataDeleted; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct System_Action_o **p_saveDataDeleteAction; // x19
  System_Action_o *saveDataDeleteAction; // t1

  if ( (byte_4DFEEDF & 1) == 0 )
  {
    sub_1CE6700(&Method_SaveDataDeleteMenuDialog_OnClickSeveDataDelete__);
    byte_4DFEEDF = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    isSaveDataDeleted = this->fields.isSaveDataDeleted;
    v4 = Method_SaveDataDeleteMenuDialog_OnClickSeveDataDelete__;
    if ( (*((_BYTE *)Method_SaveDataDeleteMenuDialog_OnClickSeveDataDelete__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1CE6718(Method_SaveDataDeleteMenuDialog_OnClickSeveDataDelete__);
    v5 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v4, v4[4]);
    if ( isSaveDataDeleted )
    {
      OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      saveDataDeleteAction = this->fields.saveDataDeleteAction;
      p_saveDataDeleteAction = &this->fields.saveDataDeleteAction;
      ActionExtensions__Call(saveDataDeleteAction, 0);
      *p_saveDataDeleteAction = 0;
      sub_1CE66A4(p_saveDataDeleteAction, 0);
    }
  }
}


void SaveDataDeleteMenuDialog__OnEnable(SaveDataDeleteMenuDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4DFEEDC & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_15799/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4DFEEDC = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_46098588(transform, (System_String_o *)StringLiteral_15799/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void SaveDataDeleteMenuDialog__Open(
        SaveDataDeleteMenuDialog_o *this,
        System_Action_o *cacheClearAction,
        System_Action_o *saveDataDeleteAction,
        System_Action_o *cancelAction,
        const MethodInfo *method)
{
  bool IsUserSaveDataDeleted; // w0
  const MethodInfo *v10; // x2

  if ( (byte_4DFEEDD & 1) == 0 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEEDD = 1;
  }
  this->fields.cacheClearAction = cacheClearAction;
  sub_1CE66A4(&this->fields.cacheClearAction, cacheClearAction);
  this->fields.saveDataDeleteAction = saveDataDeleteAction;
  sub_1CE66A4(&this->fields.saveDataDeleteAction, saveDataDeleteAction);
  this->fields.cancelAction = cancelAction;
  sub_1CE66A4(&this->fields.cancelAction, cancelAction);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsUserSaveDataDeleted = TerminalPramsManager__IsUserSaveDataDeleted(0);
  this->fields.isSaveDataDeleted = IsUserSaveDataDeleted;
  SaveDataDeleteMenuDialog__UpdateSaveDeleteButton(this, !IsUserSaveDataDeleted, v10);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SaveDataDeleteMenuDialog__UpdateSaveDeleteButton(
        SaveDataDeleteMenuDialog_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UIButtonColor_o *saveDeleteButtonColor; // x0
  _BOOL4 v5; // w21
  __int64 v7; // x1
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0 OVERLAPPED

  saveDeleteButtonColor = this->fields.saveDeleteButtonColor;
  if ( !saveDeleteButtonColor )
    goto LABEL_10;
  v5 = isEnabled;
  v7 = isEnabled ? 0LL : 3LL;
  ((void (__fastcall *)(UIButtonColor_o *, __int64, __int64, const MethodInfo *))saveDeleteButtonColor->klass->vtable._14_SetState.methodPtr)(
    saveDeleteButtonColor,
    v7,
    1,
    saveDeleteButtonColor->klass->vtable._14_SetState.method);
  saveDeleteButtonColor = this->fields.saveDeleteButtonColor;
  a = 1.0;
  b = 1.0;
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
LABEL_10:
    sub_1CE6958(saveDeleteButtonColor, isEnabled);
  }
  ((void (__fastcall *)(UIButtonColor_o *, bool, const MethodInfo *))saveDeleteButtonColor->klass->vtable._5_set_isEnabled.methodPtr)(
    saveDeleteButtonColor,
    isEnabled,
    saveDeleteButtonColor->klass->vtable._5_set_isEnabled.method);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.saveDeleteButtonWarningLabel, !isEnabled, 0);
}