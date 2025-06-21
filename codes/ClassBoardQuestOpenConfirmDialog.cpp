void __fastcall ClassBoardQuestOpenConfirmDialog___ctor(
        ClassBoardQuestOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1FE3B & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B1FE3B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardQuestOpenConfirmDialog__Close(
        ClassBoardQuestOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ClassBoardQuestOpenConfirmDialog__Close_46978548(this, 0LL, v2);
}


void __fastcall ClassBoardQuestOpenConfirmDialog__Close_46978548(
        ClassBoardQuestOpenConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4B1FE37 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, callback);
    sub_1BCAFF8(&Method_ClassBoardQuestOpenConfirmDialog_EndClose__, v6);
    byte_4B1FE37 = 1;
  }
  this->fields.CloseCallbackFunc = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.CloseCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.IsButtonEnable = 0;
  v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ClassBoardQuestOpenConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall ClassBoardQuestOpenConfirmDialog__EndClose(
        ClassBoardQuestOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_CloseCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *CloseCallbackFunc; // t1

  ClassBoardQuestOpenConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  CloseCallbackFunc = this->fields.CloseCallbackFunc;
  p_CloseCallbackFunc = (CGThumbnailListItem_o *)&this->fields.CloseCallbackFunc;
  v8 = CloseCallbackFunc;
  if ( CloseCallbackFunc )
  {
    p_CloseCallbackFunc->klass = 0LL;
    sub_1BCAF9C(p_CloseCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
  }
}


void __fastcall ClassBoardQuestOpenConfirmDialog__EndOpen(
        ClassBoardQuestOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.IsButtonEnable = 1;
}


void __fastcall ClassBoardQuestOpenConfirmDialog__Init(
        ClassBoardQuestOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.IsButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardQuestOpenConfirmDialog__OnClickClose(
        ClassBoardQuestOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *ClickFunc; // x8

  if ( (byte_4B1FE39 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ClassBoardQuestOpenConfirmDialog_OnClickClose__, method);
    byte_4B1FE39 = 1;
  }
  if ( this->fields.IsButtonEnable )
  {
    v3 = Method_ClassBoardQuestOpenConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardQuestOpenConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_ClassBoardQuestOpenConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    ClickFunc = this->fields.ClickFunc;
    this->fields.IsButtonEnable = 0;
    if ( ClickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))ClickFunc->fields.m_target)(
        ClickFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&ClickFunc->fields.extra_arg);
  }
}


void __fastcall ClassBoardQuestOpenConfirmDialog__OnClickDecide(
        ClassBoardQuestOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *ClickFunc; // x8

  if ( (byte_4B1FE38 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ClassBoardQuestOpenConfirmDialog_OnClickDecide__, method);
    byte_4B1FE38 = 1;
  }
  if ( this->fields.IsButtonEnable )
  {
    v3 = Method_ClassBoardQuestOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardQuestOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_ClassBoardQuestOpenConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    ClickFunc = this->fields.ClickFunc;
    this->fields.IsButtonEnable = 0;
    if ( ClickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))ClickFunc->fields.m_target)(
        ClickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&ClickFunc->fields.extra_arg);
  }
}


void __fastcall ClassBoardQuestOpenConfirmDialog__OnEnable(
        ClassBoardQuestOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v5; // x0

  if ( (byte_4B1FE3A & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_4610/*"ConfirmWindow/CancelButton"*/, method);
    sub_1BCAFF8(&StringLiteral_15507/*"Window/CancelButton"*/, v3);
    byte_4B1FE3A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_44083552(transform, (System_String_o *)StringLiteral_15507/*"Window/CancelButton"*/, 0LL);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_44083552(v5, (System_String_o *)StringLiteral_4610/*"ConfirmWindow/CancelButton"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardQuestOpenConfirmDialog__Open(
        ClassBoardQuestOpenConfirmDialog_o *this,
        int32_t grandBaseId,
        ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  UILabel_o *TitleLabel; // x21
  System_String_o *v15; // x20
  System_String_o *v16; // x0
  __int64 v17; // x1
  UILabel_o *MessageLabel; // x21
  UILabel_o *ButtonDecideLabel; // x20
  UILabel_o *ButtonCancelLabel; // x20
  System_Action_o *v21; // x20
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  v22 = grandBaseId;
  if ( (byte_4B1FE36 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&grandBaseId);
    sub_1BCAFF8(&Method_ClassBoardQuestOpenConfirmDialog_EndOpen__, v6);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_3385/*"CLASS_BOARD_QUEST_OPEN_DIALOG_MOVE"*/, v8);
    sub_1BCAFF8(&StringLiteral_3386/*"CLASS_BOARD_QUEST_OPEN_DIALOG_MSG_"*/, v9);
    sub_1BCAFF8(&StringLiteral_3387/*"CLASS_BOARD_QUEST_OPEN_DIALOG_TITLE"*/, v10);
    sub_1BCAFF8(&StringLiteral_3384/*"CLASS_BOARD_QUEST_OPEN_DIALOG_DECIDE"*/, v11);
    byte_4B1FE36 = 1;
  }
  this->fields.ClickFunc = func;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.ClickFunc, (int32_t)func, (int32_t)func, method);
  v12 = System_Int32__ToString((int32_t)&v22, 0LL);
  v13 = System_String__Concat_62450424((System_String_o *)StringLiteral_3386/*"CLASS_BOARD_QUEST_OPEN_DIALOG_MSG_"*/, v12, 0LL);
  TitleLabel = this->fields.TitleLabel;
  v15 = v13;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3387/*"CLASS_BOARD_QUEST_OPEN_DIALOG_TITLE"*/, 0LL);
  if ( !TitleLabel )
    goto LABEL_10;
  UILabel__set_text(TitleLabel, v16, 0LL);
  MessageLabel = this->fields.MessageLabel;
  v16 = LocalizationManager__Get(v15, 0LL);
  if ( !MessageLabel
    || (UILabel__set_text(MessageLabel, v16, 0LL),
        ButtonDecideLabel = this->fields.ButtonDecideLabel,
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3385/*"CLASS_BOARD_QUEST_OPEN_DIALOG_MOVE"*/, 0LL),
        !ButtonDecideLabel)
    || (UILabel__set_text(ButtonDecideLabel, v16, 0LL),
        ButtonCancelLabel = this->fields.ButtonCancelLabel,
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3384/*"CLASS_BOARD_QUEST_OPEN_DIALOG_DECIDE"*/, 0LL),
        !ButtonCancelLabel) )
  {
LABEL_10:
    sub_1BCB254(v16, v17);
  }
  UILabel__set_text(ButtonCancelLabel, v16, 0LL);
  v21 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_ClassBoardQuestOpenConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v21, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardQuestOpenConfirmDialog_ClickDelegate___ctor(
        ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A19784;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1973C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ClassBoardQuestOpenConfirmDialog_ClickDelegate__BeginInvoke(
        ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4B1FE3C & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, isDecide);
    byte_4B1FE3C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v9, callback, object);
}


void __fastcall ClassBoardQuestOpenConfirmDialog_ClickDelegate__EndInvoke(
        ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall ClassBoardQuestOpenConfirmDialog_ClickDelegate__Invoke(
        ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}