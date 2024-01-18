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
    sub_B2C434(0LL, v3);
  ListViewManager__DestroyList(summonHistoryListViewManager, 0LL);
}


void __fastcall SummonHistoryDialog__OnClickClose(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4189B00 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SummonHistoryDialog_OnClickClose__, v3);
    sub_B2C35C(&Method_SummonHistoryDialog__OnClickClose_b__5_0__, v4);
    byte_4189B00 = 1;
  }
  if ( !this->fields.state )
  {
    v5 = Method_SummonHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SummonHistoryDialog_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B2C364(Method_SummonHistoryDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  }
  this->fields.state = 2;
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonHistoryDialog__OnClickClose_b__5_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall SummonHistoryDialog__Open(
        SummonHistoryDialog_o *this,
        VaildGachaInfo_o *gachaInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x0
  System_String_o *name; // x0
  __int64 v14; // x1
  UILabel_o *summonNameLabel; // x20
  UILabel_o *UpperMessageLabel; // x20
  UILabel_o *messageLabel; // x20
  struct UIScrollView_o *scrollView; // x8
  UILabel_o *closeLabel; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4189AFF & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, gachaInfo);
    sub_B2C35C(&string_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v6);
    sub_B2C35C(&StringLiteral_6837/*"GACHA_HISTORY_UPPER_MESSAGE"*/, v7);
    sub_B2C35C(&StringLiteral_6831/*"GACHA_HISTORY_EMPTY"*/, v8);
    sub_B2C35C(&StringLiteral_6836/*"GACHA_HISTORY_TITLE"*/, v9);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_4189AFF = 1;
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
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_6836/*"GACHA_HISTORY_TITLE"*/, 0LL);
  TextLabelScrollDialog__Open(
    (TextLabelScrollDialog_o *)this,
    v12,
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
  name = System_String__Replace_44312768(
           name,
           (System_String_o *)StringLiteral_26/*"\n"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0LL);
  if ( !summonNameLabel )
    goto LABEL_27;
  UILabel__set_text(summonNameLabel, name, 0LL);
  UpperMessageLabel = this->fields.UpperMessageLabel;
  name = LocalizationManager__Get((System_String_o *)StringLiteral_6837/*"GACHA_HISTORY_UPPER_MESSAGE"*/, 0LL);
  if ( !UpperMessageLabel )
    goto LABEL_27;
  UILabel__set_text(UpperMessageLabel, name, 0LL);
  name = (System_String_o *)this->fields.summonHistoryListViewManager;
  if ( !name )
    goto LABEL_27;
  SummonHistoryListViewManager__CreateList((SummonHistoryListViewManager_o *)name, 0LL);
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
  name = LocalizationManager__Get((System_String_o *)StringLiteral_6831/*"GACHA_HISTORY_EMPTY"*/, 0LL);
  if ( !messageLabel )
LABEL_27:
    sub_B2C434(name, v14);
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
  name = LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_27;
  UILabel__set_text(closeLabel, name, 0LL);
  this->fields.closeAction = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v20, v21, v22, v23, v24, v25);
  this->fields.decideAction = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.decideAction, 0LL, v26, v27, v28, v29, v30, v31);
}


void __fastcall SummonHistoryDialog___OnClickClose_b__5_0(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.closeAction, 0LL);
  ((void (__fastcall *)(SummonHistoryDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}