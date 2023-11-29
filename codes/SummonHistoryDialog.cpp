void __fastcall SummonHistoryDialog___ctor(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  TextLabelScrollDialog___ctor((TextLabelScrollDialog_o *)this, 0LL);
}


void __fastcall SummonHistoryDialog__Init(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  ListViewManager_o *summonHistoryListViewManager; // x0

  TextLabelScrollDialog__Init((TextLabelScrollDialog_o *)this, 0LL);
  summonHistoryListViewManager = (ListViewManager_o *)this->fields.summonHistoryListViewManager;
  if ( !summonHistoryListViewManager )
    sub_B170D4();
  ListViewManager__DestroyList(summonHistoryListViewManager, 0LL);
}


void __fastcall SummonHistoryDialog__OnClickClose(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  System_Action_o *v10; // x20

  if ( (byte_40FC002 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SummonHistoryDialog_OnClickClose__, v6);
    sub_B16FFC(&Method_SummonHistoryDialog__OnClickClose_b__5_0__, v7);
    byte_40FC002 = 1;
  }
  if ( !this->fields.state )
  {
    v8 = Method_SummonHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SummonHistoryDialog_OnClickClose__ + 75) & 2) != 0 )
      v8 = (_QWORD *)sub_B17004(Method_SummonHistoryDialog_OnClickClose__);
    v9 = (System_Reflection_MethodBase_o *)sub_B16FE0(v8, v8[3]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  }
  this->fields.state = 2;
  v10 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonHistoryDialog__OnClickClose_b__5_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
  UILabel_o *summonNameLabel; // x20
  System_String_o *v15; // x0
  UILabel_o *UpperMessageLabel; // x20
  System_String_o *v17; // x0
  SummonHistoryListViewManager_o *summonHistoryListViewManager; // x0
  ListViewManager_o *v19; // x0
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v22; // x20
  System_String_o *v23; // x0
  struct UIScrollView_o *scrollView; // x8
  UIScrollView_o *v25; // x0
  UILabel_o *closeLabel; // x20
  System_String_o *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40FC001 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, gachaInfo);
    sub_B16FFC(&string_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_26, v6);
    sub_B16FFC(&StringLiteral_6809, v7);
    sub_B16FFC(&StringLiteral_6803, v8);
    sub_B16FFC(&StringLiteral_6808, v9);
    sub_B16FFC(&StringLiteral_3252, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    byte_40FC001 = 1;
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
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_6808, 0LL);
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
  v15 = System_String__Replace_43750968(
          name,
          (System_String_o *)StringLiteral_26,
          (System_String_o *)StringLiteral_1,
          0LL);
  if ( !summonNameLabel )
    goto LABEL_27;
  UILabel__set_text(summonNameLabel, v15, 0LL);
  UpperMessageLabel = this->fields.UpperMessageLabel;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6809, 0LL);
  if ( !UpperMessageLabel )
    goto LABEL_27;
  UILabel__set_text(UpperMessageLabel, v17, 0LL);
  summonHistoryListViewManager = this->fields.summonHistoryListViewManager;
  if ( !summonHistoryListViewManager )
    goto LABEL_27;
  SummonHistoryListViewManager__CreateList(summonHistoryListViewManager, 0LL);
  v19 = (ListViewManager_o *)this->fields.summonHistoryListViewManager;
  if ( !v19 )
    goto LABEL_27;
  if ( ListViewManager__get_ItemSum(v19, 0LL) > 0 )
    goto LABEL_20;
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(messageLabel, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v22 = this->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_6803, 0LL);
  if ( !v22 )
LABEL_27:
    sub_B170D4();
  UILabel__set_text(v22, v23, 0LL);
LABEL_20:
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_27;
  HIDWORD(scrollView->fields.onDragStarted) = 1;
  v25 = this->fields.scrollView;
  if ( !v25 )
    goto LABEL_27;
  UIScrollView__ResetPosition(v25, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL);
  if ( !closeLabel )
    goto LABEL_27;
  UILabel__set_text(closeLabel, v27, 0LL);
  this->fields.closeAction = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v28, v29, v30, v31, v32, v33);
  this->fields.decideAction = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.decideAction, 0LL, v34, v35, v36, v37, v38, v39);
}


void __fastcall SummonHistoryDialog___OnClickClose_b__5_0(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.closeAction, 0LL);
  ((void (__fastcall *)(SummonHistoryDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}