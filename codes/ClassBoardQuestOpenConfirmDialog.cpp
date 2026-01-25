void ClassBoardQuestOpenConfirmDialog___ctor(ClassBoardQuestOpenConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CF22AA & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CF22AA = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ClassBoardQuestOpenConfirmDialog__Close(ClassBoardQuestOpenConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ClassBoardQuestOpenConfirmDialog__Close_48720880(this, 0, v2);
}


void ClassBoardQuestOpenConfirmDialog__Close_48720880(
        ClassBoardQuestOpenConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CF22A6 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_ClassBoardQuestOpenConfirmDialog_EndClose__);
    byte_4CF22A6 = 1;
  }
  this->fields.CloseCallbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.CloseCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.IsButtonEnable = 0;
  v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ClassBoardQuestOpenConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void ClassBoardQuestOpenConfirmDialog__EndClose(ClassBoardQuestOpenConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *p_CloseCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *CloseCallbackFunc; // t1

  ClassBoardQuestOpenConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  CloseCallbackFunc = this->fields.CloseCallbackFunc;
  p_CloseCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.CloseCallbackFunc;
  v12 = CloseCallbackFunc;
  if ( CloseCallbackFunc )
  {
    p_CloseCallbackFunc->klass = 0;
    sub_1C7BA8C(p_CloseCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void ClassBoardQuestOpenConfirmDialog__EndOpen(ClassBoardQuestOpenConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.IsButtonEnable = 1;
}


void ClassBoardQuestOpenConfirmDialog__Init(ClassBoardQuestOpenConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.IsButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ClassBoardQuestOpenConfirmDialog__OnClickClose(ClassBoardQuestOpenConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *ClickFunc; // x8

  if ( (byte_4CF22A8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ClassBoardQuestOpenConfirmDialog_OnClickClose__);
    byte_4CF22A8 = 1;
  }
  if ( this->fields.IsButtonEnable )
  {
    v3 = Method_ClassBoardQuestOpenConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardQuestOpenConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_ClassBoardQuestOpenConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ClickFunc = this->fields.ClickFunc;
    this->fields.IsButtonEnable = 0;
    if ( ClickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))ClickFunc->fields.invoke_impl)(
        ClickFunc->fields.method_code,
        0,
        ClickFunc->fields.method);
  }
}


void ClassBoardQuestOpenConfirmDialog__OnClickDecide(
        ClassBoardQuestOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *ClickFunc; // x8

  if ( (byte_4CF22A7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ClassBoardQuestOpenConfirmDialog_OnClickDecide__);
    byte_4CF22A7 = 1;
  }
  if ( this->fields.IsButtonEnable )
  {
    v3 = Method_ClassBoardQuestOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardQuestOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_ClassBoardQuestOpenConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ClickFunc = this->fields.ClickFunc;
    this->fields.IsButtonEnable = 0;
    if ( ClickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))ClickFunc->fields.invoke_impl)(
        ClickFunc->fields.method_code,
        1,
        ClickFunc->fields.method);
  }
}


void ClassBoardQuestOpenConfirmDialog__OnEnable(ClassBoardQuestOpenConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0

  if ( (byte_4CF22A9 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_4652/*"ConfirmWindow/CancelButton"*/);
    sub_1C7BAE8(&StringLiteral_15699/*"Window/CancelButton"*/);
    byte_4CF22A9 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45495228(transform, (System_String_o *)StringLiteral_15699/*"Window/CancelButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45495228(v4, (System_String_o *)StringLiteral_4652/*"ConfirmWindow/CancelButton"*/, 0);
}


void ClassBoardQuestOpenConfirmDialog__Open(
        ClassBoardQuestOpenConfirmDialog_o *this,
        int32_t grandBaseId,
        ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  UILabel_o *TitleLabel; // x21
  System_String_o *v13; // x20
  System_String_o *v14; // x0
  __int64 v15; // x1
  UILabel_o *MessageLabel; // x21
  UILabel_o *ButtonDecideLabel; // x20
  UILabel_o *ButtonCancelLabel; // x20
  System_Action_o *v19; // x20
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  v20 = grandBaseId;
  if ( (byte_4CF22A5 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_ClassBoardQuestOpenConfirmDialog_EndOpen__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3418/*"CLASS_BOARD_QUEST_OPEN_DIALOG_MOVE"*/);
    sub_1C7BAE8(&StringLiteral_3419/*"CLASS_BOARD_QUEST_OPEN_DIALOG_MSG_"*/);
    sub_1C7BAE8(&StringLiteral_3420/*"CLASS_BOARD_QUEST_OPEN_DIALOG_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_3417/*"CLASS_BOARD_QUEST_OPEN_DIALOG_DECIDE"*/);
    byte_4CF22A5 = 1;
  }
  this->fields.ClickFunc = func;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.ClickFunc,
    (int32_t)func,
    (int32_t)func,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Int32__ToString((int32_t)&v20, 0);
  v11 = System_String__Concat_64176912((System_String_o *)StringLiteral_3419/*"CLASS_BOARD_QUEST_OPEN_DIALOG_MSG_"*/, v10, 0);
  TitleLabel = this->fields.TitleLabel;
  v13 = v11;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3420/*"CLASS_BOARD_QUEST_OPEN_DIALOG_TITLE"*/, 0);
  if ( !TitleLabel )
    goto LABEL_10;
  UILabel__set_text(TitleLabel, v14, 0);
  MessageLabel = this->fields.MessageLabel;
  v14 = LocalizationManager__Get(v13, 0);
  if ( !MessageLabel
    || (UILabel__set_text(MessageLabel, v14, 0),
        ButtonDecideLabel = this->fields.ButtonDecideLabel,
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3418/*"CLASS_BOARD_QUEST_OPEN_DIALOG_MOVE"*/, 0),
        !ButtonDecideLabel)
    || (UILabel__set_text(ButtonDecideLabel, v14, 0),
        ButtonCancelLabel = this->fields.ButtonCancelLabel,
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3417/*"CLASS_BOARD_QUEST_OPEN_DIALOG_DECIDE"*/, 0),
        !ButtonCancelLabel) )
  {
LABEL_10:
    sub_1C7BD40(v14, v15);
  }
  UILabel__set_text(ButtonCancelLabel, v14, 0);
  v19 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_ClassBoardQuestOpenConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0, 0);
}


void ClassBoardQuestOpenConfirmDialog_ClickDelegate___ctor(
        ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AB60D0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AB6088;
}


System_IAsyncResult_o *ClassBoardQuestOpenConfirmDialog_ClickDelegate__BeginInvoke(
        ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4CF22AB & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CF22AB = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void ClassBoardQuestOpenConfirmDialog_ClickDelegate__EndInvoke(
        ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void ClassBoardQuestOpenConfirmDialog_ClickDelegate__Invoke(
        ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}