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
    sub_1B00F28(0LL, v3);
  ListViewManager__DestroyList(summonHistoryListViewManager, 0LL);
}


void __fastcall SummonHistoryDialog__OnClickClose(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_48DF0AF & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_SummonHistoryDialog_OnClickClose__, v3);
    sub_1B00CCC(&Method_SummonHistoryDialog__OnClickClose_b__5_0__, v4);
    byte_48DF0AF = 1;
  }
  if ( !this->fields.state )
  {
    v5 = Method_SummonHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SummonHistoryDialog_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B00CE4(Method_SummonHistoryDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  }
  this->fields.state = 2;
  v7 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
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
  const MethodInfo *v14; // x1
  UILabel_o *summonNameLabel; // x20
  UILabel_o *UpperMessageLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *closeLabel; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_48DF0AE & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, gachaInfo);
    sub_1B00CCC(&string_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_43/*"\n"*/, v6);
    sub_1B00CCC(&StringLiteral_6808/*"GACHA_HISTORY_UPPER_MESSAGE"*/, v7);
    sub_1B00CCC(&StringLiteral_6802/*"GACHA_HISTORY_EMPTY"*/, v8);
    sub_1B00CCC(&StringLiteral_6807/*"GACHA_HISTORY_TITLE"*/, v9);
    sub_1B00CCC(&StringLiteral_3715/*"COMMON_CONFIRM_CLOSE"*/, v10);
    sub_1B00CCC(&StringLiteral_1/*""*/, v11);
    byte_48DF0AE = 1;
  }
  ((void (__fastcall *)(SummonHistoryDialog_o *, void *, const MethodInfo *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image,
    method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_6807/*"GACHA_HISTORY_TITLE"*/, 0LL);
  TextLabelScrollDialog__Open(
    (TextLabelScrollDialog_o *)this,
    v12,
    string_TypeInfo->static_fields->Empty,
    0LL,
    0LL,
    0LL);
  if ( !gachaInfo )
    goto LABEL_23;
  name = gachaInfo->fields.name;
  if ( !name )
    goto LABEL_23;
  summonNameLabel = this->fields.summonNameLabel;
  name = System_String__Replace_60345368(
           name,
           (System_String_o *)StringLiteral_43/*"\n"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0LL);
  if ( !summonNameLabel )
    goto LABEL_23;
  UILabel__set_text(summonNameLabel, name, 0LL);
  UpperMessageLabel = this->fields.UpperMessageLabel;
  name = LocalizationManager__Get((System_String_o *)StringLiteral_6808/*"GACHA_HISTORY_UPPER_MESSAGE"*/, 0LL);
  if ( !UpperMessageLabel )
    goto LABEL_23;
  UILabel__set_text(UpperMessageLabel, name, 0LL);
  name = (System_String_o *)this->fields.summonHistoryListViewManager;
  if ( !name )
    goto LABEL_23;
  SummonHistoryListViewManager__CreateList((SummonHistoryListViewManager_o *)name, v14);
  name = (System_String_o *)this->fields.summonHistoryListViewManager;
  if ( !name )
    goto LABEL_23;
  if ( ListViewManager__get_ItemSum((ListViewManager_o *)name, 0LL) <= 0 )
  {
    name = (System_String_o *)this->fields.messageLabel;
    if ( name )
    {
      name = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)name, 0LL);
      if ( name )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)name, 1, 0LL);
        messageLabel = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        name = LocalizationManager__Get((System_String_o *)StringLiteral_6802/*"GACHA_HISTORY_EMPTY"*/, 0LL);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, name, 0LL);
          goto LABEL_18;
        }
      }
    }
LABEL_23:
    sub_1B00F28(name, v14);
  }
LABEL_18:
  name = (System_String_o *)this->fields.scrollView;
  if ( !name )
    goto LABEL_23;
  HIDWORD(name[3].monitor) = 1;
  UIScrollView__ResetPosition((UIScrollView_o *)name, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  name = LocalizationManager__Get((System_String_o *)StringLiteral_3715/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_23;
  UILabel__set_text(closeLabel, name, 0LL);
  this->fields.closeAction = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, 0, v19, v20);
  this->fields.decideAction = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.decideAction, 0, v21, v22);
}


void __fastcall SummonHistoryDialog___OnClickClose_b__5_0(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.closeAction, 0LL);
  ((void (__fastcall *)(SummonHistoryDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}