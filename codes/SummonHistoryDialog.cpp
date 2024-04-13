void __fastcall SummonHistoryDialog___ctor(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  TextLabelScrollDialog___ctor((TextLabelScrollDialog_o *)this, 0LL);
}


void __fastcall SummonHistoryDialog__Init(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *summonHistoryListViewManager; // x0

  TextLabelScrollDialog__Init((TextLabelScrollDialog_o *)this, 0LL);
  summonHistoryListViewManager = (ListViewManager_o *)this->fields.summonHistoryListViewManager;
  if ( !summonHistoryListViewManager )
    sub_B5D69C(0LL, v3);
  ListViewManager__DestroyList(summonHistoryListViewManager, 0LL);
}


void __fastcall SummonHistoryDialog__OnClickClose(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_Action_o *v13; // x20

  if ( (byte_42EC8F5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SummonHistoryDialog_OnClickClose__, v5, v6, v7);
    sub_B5D5C4(&Method_SummonHistoryDialog__OnClickClose_b__5_0__, v8, v9, v10);
    byte_42EC8F5 = 1;
  }
  if ( !this->fields.state )
  {
    v11 = Method_SummonHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SummonHistoryDialog_OnClickClose__ + 75) & 2) != 0 )
      v11 = (_QWORD *)sub_B5D5CC(Method_SummonHistoryDialog_OnClickClose__);
    v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  }
  this->fields.state = 2;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonHistoryDialog__OnClickClose_b__5_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall SummonHistoryDialog__Open(
        SummonHistoryDialog_o *this,
        VaildGachaInfo_o *gachaInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_String_o *v27; // x0
  System_String_o *name; // x0
  const MethodInfo *v29; // x1
  UILabel_o *summonNameLabel; // x20
  UILabel_o *UpperMessageLabel; // x20
  UILabel_o *messageLabel; // x20
  struct UIScrollView_o *scrollView; // x8
  UILabel_o *closeLabel; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_42EC8F4 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)gachaInfo, (_DWORD)method, v3);
    sub_B5D5C4(&string_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_6920/*"GACHA_HISTORY_UPPER_MESSAGE"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_6914/*"GACHA_HISTORY_EMPTY"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_6919/*"GACHA_HISTORY_TITLE"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_1/*""*/, v24, v25, v26);
    byte_42EC8F4 = 1;
  }
  ((void (__fastcall *)(SummonHistoryDialog_o *, void *, const MethodInfo *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image,
    method);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_6919/*"GACHA_HISTORY_TITLE"*/, 0LL);
  TextLabelScrollDialog__Open(
    (TextLabelScrollDialog_o *)this,
    v27,
    string_TypeInfo->static_fields->Empty,
    0LL,
    0LL,
    0LL);
  if ( !gachaInfo )
    goto LABEL_27;
  name = gachaInfo->fields.name;
  if ( !name )
    goto LABEL_27;
  summonNameLabel = this->fields.summonNameLabel;
  name = System_String__Replace_44585024(
           name,
           (System_String_o *)StringLiteral_26/*"\n"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0LL);
  if ( !summonNameLabel )
    goto LABEL_27;
  UILabel__set_text(summonNameLabel, name, 0LL);
  UpperMessageLabel = this->fields.UpperMessageLabel;
  name = LocalizationManager__Get((System_String_o *)StringLiteral_6920/*"GACHA_HISTORY_UPPER_MESSAGE"*/, 0LL);
  if ( !UpperMessageLabel )
    goto LABEL_27;
  UILabel__set_text(UpperMessageLabel, name, 0LL);
  name = (System_String_o *)this->fields.summonHistoryListViewManager;
  if ( !name )
    goto LABEL_27;
  SummonHistoryListViewManager__CreateList((SummonHistoryListViewManager_o *)name, v29);
  name = (System_String_o *)this->fields.summonHistoryListViewManager;
  if ( !name )
    goto LABEL_27;
  name = (System_String_o *)ListViewManager__get_ItemSum((ListViewManager_o *)name, 0LL);
  if ( (int)name > 0 )
    goto LABEL_20;
  name = (System_String_o *)this->fields.messageLabel;
  if ( !name )
    goto LABEL_27;
  name = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)name, 0LL);
  if ( !name )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)name, 1, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  name = LocalizationManager__Get((System_String_o *)StringLiteral_6914/*"GACHA_HISTORY_EMPTY"*/, 0LL);
  if ( !messageLabel )
LABEL_27:
    sub_B5D69C(name, v29);
  UILabel__set_text(messageLabel, name, 0LL);
LABEL_20:
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_27;
  HIDWORD(scrollView->fields.onDragStarted) = 1;
  name = (System_String_o *)this->fields.scrollView;
  if ( !name )
    goto LABEL_27;
  UIScrollView__ResetPosition((UIScrollView_o *)name, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  name = LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_27;
  UILabel__set_text(closeLabel, name, 0LL);
  this->fields.closeAction = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v35, v36, v37, v38, v39, v40);
  this->fields.decideAction = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.decideAction, 0LL, v41, v42, v43, v44, v45, v46);
}


void __fastcall SummonHistoryDialog___OnClickClose_b__5_0(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.closeAction, 0LL);
  ((void (__fastcall *)(SummonHistoryDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}