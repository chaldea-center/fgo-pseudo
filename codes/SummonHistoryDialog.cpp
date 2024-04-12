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
    sub_B52A5C(0LL, v3);
  ListViewManager__DestroyList(summonHistoryListViewManager, 0LL);
}


void __fastcall SummonHistoryDialog__OnClickClose(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_42B3E96 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SummonHistoryDialog_OnClickClose__);
    sub_B52984(&Method_SummonHistoryDialog__OnClickClose_b__5_0__);
    byte_42B3E96 = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_SummonHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SummonHistoryDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_SummonHistoryDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  }
  this->fields.state = 2;
  v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SummonHistoryDialog__OnClickClose_b__5_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall SummonHistoryDialog__Open(
        SummonHistoryDialog_o *this,
        VaildGachaInfo_o *gachaInfo,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  System_String_o *name; // x0
  const MethodInfo *v7; // x1
  UILabel_o *summonNameLabel; // x20
  UILabel_o *UpperMessageLabel; // x20
  UILabel_o *messageLabel; // x20
  struct UIScrollView_o *scrollView; // x8
  UILabel_o *closeLabel; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42B3E95 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_26/*"\n"*/);
    sub_B52984(&StringLiteral_6884/*"GACHA_HISTORY_UPPER_MESSAGE"*/);
    sub_B52984(&StringLiteral_6878/*"GACHA_HISTORY_EMPTY"*/);
    sub_B52984(&StringLiteral_6883/*"GACHA_HISTORY_TITLE"*/);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B3E95 = 1;
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
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_6883/*"GACHA_HISTORY_TITLE"*/, 0LL);
  TextLabelScrollDialog__Open((TextLabelScrollDialog_o *)this, v5, string_TypeInfo->static_fields->Empty, 0LL, 0LL, 0LL);
  if ( !gachaInfo )
    goto LABEL_27;
  name = gachaInfo->fields.name;
  if ( !name )
    goto LABEL_27;
  summonNameLabel = this->fields.summonNameLabel;
  name = System_String__Replace_44575552(
           name,
           (System_String_o *)StringLiteral_26/*"\n"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0LL);
  if ( !summonNameLabel )
    goto LABEL_27;
  UILabel__set_text(summonNameLabel, name, 0LL);
  UpperMessageLabel = this->fields.UpperMessageLabel;
  name = LocalizationManager__Get((System_String_o *)StringLiteral_6884/*"GACHA_HISTORY_UPPER_MESSAGE"*/, 0LL);
  if ( !UpperMessageLabel )
    goto LABEL_27;
  UILabel__set_text(UpperMessageLabel, name, 0LL);
  name = (System_String_o *)this->fields.summonHistoryListViewManager;
  if ( !name )
    goto LABEL_27;
  SummonHistoryListViewManager__CreateList((SummonHistoryListViewManager_o *)name, v7);
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
  name = LocalizationManager__Get((System_String_o *)StringLiteral_6878/*"GACHA_HISTORY_EMPTY"*/, 0LL);
  if ( !messageLabel )
LABEL_27:
    sub_B52A5C(name, v7);
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
  name = LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_27;
  UILabel__set_text(closeLabel, name, 0LL);
  this->fields.closeAction = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.decideAction = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.decideAction, 0LL, v19, v20, v21, v22, v23, v24);
}


void __fastcall SummonHistoryDialog___OnClickClose_b__5_0(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.closeAction, 0LL);
  ((void (__fastcall *)(SummonHistoryDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}