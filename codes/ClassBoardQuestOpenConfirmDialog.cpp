void ClassBoardQuestOpenConfirmDialog___ctor(ClassBoardQuestOpenConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C5A920 & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    byte_4C5A920 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ClassBoardQuestOpenConfirmDialog__Close(ClassBoardQuestOpenConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ClassBoardQuestOpenConfirmDialog__Close_48156132(this, 0, v2);
}


void ClassBoardQuestOpenConfirmDialog__Close_48156132(
        ClassBoardQuestOpenConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C5A91C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ClassBoardQuestOpenConfirmDialog_EndClose__);
    byte_4C5A91C = 1;
  }
  this->fields.CloseCallbackFunc = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.CloseCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.IsButtonEnable = 0;
  v6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardQuestOpenConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void ClassBoardQuestOpenConfirmDialog__EndClose(ClassBoardQuestOpenConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_CloseCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *CloseCallbackFunc; // t1

  ClassBoardQuestOpenConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  CloseCallbackFunc = this->fields.CloseCallbackFunc;
  p_CloseCallbackFunc = (CGThumbnailListItem_o *)&this->fields.CloseCallbackFunc;
  v8 = CloseCallbackFunc;
  if ( CloseCallbackFunc )
  {
    p_CloseCallbackFunc->klass = 0;
    sub_1C3E508(p_CloseCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
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
    sub_1C3E7C0(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ClassBoardQuestOpenConfirmDialog__OnClickClose(ClassBoardQuestOpenConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *ClickFunc; // x8

  if ( (byte_4C5A91E & 1) == 0 )
  {
    sub_1C3E564(&Method_ClassBoardQuestOpenConfirmDialog_OnClickClose__);
    byte_4C5A91E = 1;
  }
  if ( this->fields.IsButtonEnable )
  {
    v3 = Method_ClassBoardQuestOpenConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardQuestOpenConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_ClassBoardQuestOpenConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
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

  if ( (byte_4C5A91D & 1) == 0 )
  {
    sub_1C3E564(&Method_ClassBoardQuestOpenConfirmDialog_OnClickDecide__);
    byte_4C5A91D = 1;
  }
  if ( this->fields.IsButtonEnable )
  {
    v3 = Method_ClassBoardQuestOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardQuestOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_ClassBoardQuestOpenConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
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

  if ( (byte_4C5A91F & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_4648/*"ConfirmWindow/CancelButton"*/);
    sub_1C3E564(&StringLiteral_15651/*"Window/CancelButton"*/);
    byte_4C5A91F = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45015816(transform, (System_String_o *)StringLiteral_15651/*"Window/CancelButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45015816(v4, (System_String_o *)StringLiteral_4648/*"ConfirmWindow/CancelButton"*/, 0);
}


void ClassBoardQuestOpenConfirmDialog__Open(
        ClassBoardQuestOpenConfirmDialog_o *this,
        int32_t grandBaseId,
        ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  UILabel_o *TitleLabel; // x21
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  UILabel_o *MessageLabel; // x21
  UILabel_o *ButtonDecideLabel; // x20
  UILabel_o *ButtonCancelLabel; // x20
  System_Action_o *v15; // x20
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  v16 = grandBaseId;
  if ( (byte_4C5A91B & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ClassBoardQuestOpenConfirmDialog_EndOpen__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_3414/*"CLASS_BOARD_QUEST_OPEN_DIALOG_MOVE"*/);
    sub_1C3E564(&StringLiteral_3415/*"CLASS_BOARD_QUEST_OPEN_DIALOG_MSG_"*/);
    sub_1C3E564(&StringLiteral_3416/*"CLASS_BOARD_QUEST_OPEN_DIALOG_TITLE"*/);
    sub_1C3E564(&StringLiteral_3413/*"CLASS_BOARD_QUEST_OPEN_DIALOG_DECIDE"*/);
    byte_4C5A91B = 1;
  }
  this->fields.ClickFunc = func;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.ClickFunc, (int32_t)func, (int32_t)func, method);
  v6 = System_Int32__ToString((int32_t)&v16, 0);
  v7 = System_String__Concat_63636468((System_String_o *)StringLiteral_3415/*"CLASS_BOARD_QUEST_OPEN_DIALOG_MSG_"*/, v6, 0);
  TitleLabel = this->fields.TitleLabel;
  v9 = v7;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3416/*"CLASS_BOARD_QUEST_OPEN_DIALOG_TITLE"*/, 0);
  if ( !TitleLabel )
    goto LABEL_10;
  UILabel__set_text(TitleLabel, v10, 0);
  MessageLabel = this->fields.MessageLabel;
  v10 = LocalizationManager__Get(v9, 0);
  if ( !MessageLabel
    || (UILabel__set_text(MessageLabel, v10, 0),
        ButtonDecideLabel = this->fields.ButtonDecideLabel,
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3414/*"CLASS_BOARD_QUEST_OPEN_DIALOG_MOVE"*/, 0),
        !ButtonDecideLabel)
    || (UILabel__set_text(ButtonDecideLabel, v10, 0),
        ButtonCancelLabel = this->fields.ButtonCancelLabel,
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3413/*"CLASS_BOARD_QUEST_OPEN_DIALOG_DECIDE"*/, 0),
        !ButtonCancelLabel) )
  {
LABEL_10:
    sub_1C3E7C0(v10, v11);
  }
  UILabel__set_text(ButtonCancelLabel, v10, 0);
  v15 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ClassBoardQuestOpenConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0, 0);
}


void ClassBoardQuestOpenConfirmDialog_ClickDelegate___ctor(
        ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A86FF4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A86FAC;
}


System_IAsyncResult_o *ClassBoardQuestOpenConfirmDialog_ClickDelegate__BeginInvoke(
        ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isDecide;
  if ( (byte_4C5A921 & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    byte_4C5A921 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v12, callback, object);
}


void ClassBoardQuestOpenConfirmDialog_ClickDelegate__EndInvoke(
        ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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