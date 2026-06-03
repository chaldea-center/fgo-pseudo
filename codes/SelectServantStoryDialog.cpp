void SelectServantStoryDialog___ctor(SelectServantStoryDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4E72B7B & 1) == 0 )
  {
    sub_1D0F0B4(&BaseDialog_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__TypeInfo);
    byte_4E72B7B = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1D0F300(System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__int____ctor(
    v3,
    (const MethodInfo_35C220C *)Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int___ctor__);
  this->fields.resultToServantId = (struct System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__o *)v3;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.resultToServantId, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SelectServantStoryDialog__Close(SelectServantStoryDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SelectServantStoryDialog__Close_35005648(this, 0, v2);
}


void SelectServantStoryDialog__Close_35005648(
        SelectServantStoryDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4E72B76 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_SelectServantStoryDialog_EndClose__);
    byte_4E72B76 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SelectServantStoryDialog_EndClose__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v10, 0);
}


void SelectServantStoryDialog__EndClose(SelectServantStoryDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SelectServantStoryDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1D0F30C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1D0F058(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void SelectServantStoryDialog__EndOpen(SelectServantStoryDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void SelectServantStoryDialog__Init(SelectServantStoryDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_4E72B74 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E72B74 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_9;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.buttonServantNameLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.buttonServantName2Label) == 0)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.buttonExitLabel) == 0)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        this->fields.isButtonEnable = 0,
        (messageLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_9:
    sub_1D0F30C(messageLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SelectServantStoryDialog__OnClickClose(SelectServantStoryDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SelectServantStoryDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4E72B79 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SelectServantStoryDialog_OnClickClose__);
    byte_4E72B79 = 1;
  }
  if ( this->fields.isButtonEnable && this->fields.baseState == 2 )
  {
    v3 = Method_SelectServantStoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SelectServantStoryDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_SelectServantStoryDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        0,
        clickFunc->fields.method);
  }
}


void SelectServantStoryDialog__OnClickServant1(SelectServantStoryDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct SelectServantStoryDialog_ClickDelegate_o *clickFunc; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *resultToServantId; // x0
  unsigned int Item; // w0

  if ( (byte_4E72B77 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__get_Item__);
    sub_1D0F0B4(&Method_SelectServantStoryDialog_OnClickServant1__);
    byte_4E72B77 = 1;
  }
  if ( this->fields.isButtonEnable && this->fields.baseState == 2 )
  {
    v3 = Method_SelectServantStoryDialog_OnClickServant1__;
    if ( (*((_BYTE *)Method_SelectServantStoryDialog_OnClickServant1__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_SelectServantStoryDialog_OnClickServant1__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
    {
      resultToServantId = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.resultToServantId;
      if ( !resultToServantId )
        sub_1D0F30C(0, v5);
      Item = System_Collections_Generic_Dictionary_Int32Enum__int___get_Item(
               resultToServantId,
               1,
               (const MethodInfo_35C2B34 *)Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__get_Item__);
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        Item,
        clickFunc->fields.method);
    }
  }
}


void SelectServantStoryDialog__OnClickServant2(SelectServantStoryDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct SelectServantStoryDialog_ClickDelegate_o *clickFunc; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *resultToServantId; // x0
  unsigned int Item; // w0

  if ( (byte_4E72B78 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__get_Item__);
    sub_1D0F0B4(&Method_SelectServantStoryDialog_OnClickServant2__);
    byte_4E72B78 = 1;
  }
  if ( this->fields.isButtonEnable && this->fields.baseState == 2 )
  {
    v3 = Method_SelectServantStoryDialog_OnClickServant2__;
    if ( (*((_BYTE *)Method_SelectServantStoryDialog_OnClickServant2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_SelectServantStoryDialog_OnClickServant2__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
    {
      resultToServantId = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.resultToServantId;
      if ( !resultToServantId )
        sub_1D0F30C(0, v5);
      Item = System_Collections_Generic_Dictionary_Int32Enum__int___get_Item(
               resultToServantId,
               2,
               (const MethodInfo_35C2B34 *)Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__get_Item__);
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        2,
        Item,
        clickFunc->fields.method);
    }
  }
}


void SelectServantStoryDialog__OnEnable(SelectServantStoryDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4E72B7A & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_15842/*"Window/Base/CloseButton"*/);
    byte_4E72B7A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_46335372(transform, (System_String_o *)StringLiteral_15842/*"Window/Base/CloseButton"*/, 0);
}


void SelectServantStoryDialog__Open(
        SelectServantStoryDialog_o *this,
        ServantEntity_array *entities,
        SelectServantStoryDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_String_o *v11; // x1
  ServantEntity_o *normalBase; // x0
  UILabel_o *messageLabel; // x21
  il2cpp_array_size_t max_length; // x8
  UILabel_o *buttonServantNameLabel; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x22
  UILabel_o *buttonServantName2Label; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v18; // x22
  UILabel_o *buttonExitLabel; // x21
  il2cpp_array_size_t v20; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *resultToServantId; // x21
  ServantEntity_o *v22; // x8
  __int64 v23; // x22
  __int64 v24; // x23
  int32_t v25; // w2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v26; // x21
  ServantEntity_o *v27; // x8
  __int64 v28; // x20
  __int64 v29; // x22
  int32_t v30; // w2
  System_Action_o *v31; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4E72B75 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__Clear__);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1D0F0B4(&Method_SelectServantStoryDialog_EndOpen__);
    sub_1D0F0B4(&StringLiteral_8942/*"MYROOM_MATERIAL_SELECT_SERVANT_STORY_CONFIRM_CLOSE"*/);
    sub_1D0F0B4(&StringLiteral_8941/*"MYROOM_MATERIAL_SELECT_SERVANT_STORY_CONFIRM"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E72B75 = 1;
  }
  this->fields.clickFunc = func;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    (int32_t)func,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  normalBase = (ServantEntity_o *)this->fields.normalBase;
  if ( !normalBase )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalBase, 1, 0);
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalBase = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8941/*"MYROOM_MATERIAL_SELECT_SERVANT_STORY_CONFIRM"*/, 0);
  if ( !messageLabel )
    goto LABEL_43;
  UILabel__set_text(messageLabel, (System_String_o *)normalBase, 0);
  if ( !entities )
    goto LABEL_43;
  max_length = entities->max_length;
  buttonServantNameLabel = this->fields.buttonServantNameLabel;
  if ( max_length )
  {
    if ( !(_DWORD)max_length )
      goto LABEL_44;
    normalBase = entities->m_Items[0];
    if ( !normalBase )
      goto LABEL_43;
    Name = ServantEntity__GetName(normalBase, -1, 0, -1, 0, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    normalBase = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_50367044(Name, 0);
    v11 = (System_String_o *)normalBase;
    if ( !buttonServantNameLabel )
      goto LABEL_43;
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !buttonServantNameLabel )
      goto LABEL_43;
  }
  UILabel__set_text(buttonServantNameLabel, v11, 0);
  buttonServantName2Label = this->fields.buttonServantName2Label;
  if ( SLODWORD(entities->max_length) <= 1 )
  {
    v11 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    normalBase = entities->m_Items[1];
    if ( !normalBase )
      goto LABEL_43;
    v18 = ServantEntity__GetName(normalBase, -1, 0, -1, 0, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    normalBase = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_50367044(v18, 0);
    v11 = (System_String_o *)normalBase;
  }
  if ( !buttonServantName2Label )
    goto LABEL_43;
  UILabel__set_text(buttonServantName2Label, v11, 0);
  buttonExitLabel = this->fields.buttonExitLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalBase = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8942/*"MYROOM_MATERIAL_SELECT_SERVANT_STORY_CONFIRM_CLOSE"*/, 0);
  if ( !buttonExitLabel )
    goto LABEL_43;
  UILabel__set_text(buttonExitLabel, (System_String_o *)normalBase, 0);
  normalBase = (ServantEntity_o *)this->fields.resultToServantId;
  if ( !normalBase )
    goto LABEL_43;
  System_Collections_Generic_Dictionary_Int32Enum__int___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)normalBase,
    (const MethodInfo_35C2D50 *)Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__Clear__);
  v20 = entities->max_length;
  resultToServantId = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.resultToServantId;
  if ( !v20 )
  {
    v25 = 0;
    if ( !resultToServantId )
      goto LABEL_43;
    goto LABEL_35;
  }
  if ( !(_DWORD)v20 )
LABEL_44:
    sub_1D0F314(normalBase);
  v22 = entities->m_Items[0];
  if ( !v22 )
    goto LABEL_43;
  v24 = *(_QWORD *)&v22->fields.id.fields.currentCryptoKey;
  v23 = *(_QWORD *)&v22->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v32.fields.currentCryptoKey = v24;
  *(_QWORD *)&v32.fields.fakeValue = v23;
  normalBase = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v32, 0);
  v25 = (int)normalBase;
  if ( !resultToServantId )
    goto LABEL_43;
LABEL_35:
  System_Collections_Generic_Dictionary_Int32Enum__int___Add(
    resultToServantId,
    1,
    v25,
    (const MethodInfo_35C2BD0 *)Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__Add__);
  v26 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.resultToServantId;
  if ( SLODWORD(entities->max_length) < 2 )
  {
    v30 = 0;
  }
  else
  {
    v27 = entities->m_Items[1];
    if ( !v27 )
      goto LABEL_43;
    v29 = *(_QWORD *)&v27->fields.id.fields.currentCryptoKey;
    v28 = *(_QWORD *)&v27->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v33.fields.currentCryptoKey = v29;
    *(_QWORD *)&v33.fields.fakeValue = v28;
    normalBase = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v33, 0);
    v30 = (int)normalBase;
  }
  if ( !v26 )
LABEL_43:
    sub_1D0F30C(normalBase, v11);
  System_Collections_Generic_Dictionary_Int32Enum__int___Add(
    v26,
    2,
    v30,
    (const MethodInfo_35C2BD0 *)Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__Add__);
  this->fields.isButtonEnable = 0;
  v31 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_SelectServantStoryDialog_EndOpen__, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v31, 0, 0);
}


void SelectServantStoryDialog_ClickDelegate___ctor(
        SelectServantStoryDialog_ClickDelegate_o *this,
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
  sub_1D0F058(
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
  if ( (sub_1D0F174(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1D0F328(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1D0F1DC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1B365B4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B3655C;
}


System_IAsyncResult_o *SelectServantStoryDialog_ClickDelegate__BeginInvoke(
        SelectServantStoryDialog_ClickDelegate_o *this,
        int32_t result,
        int32_t servantId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = servantId;
  v12 = result;
  if ( (byte_4E72B7C & 1) == 0 )
  {
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&SelectServantStoryDialog_ResultKind_TypeInfo);
    byte_4E72B7C = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(SelectServantStoryDialog_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1D0F068(this, v10, callback, object);
}


void SelectServantStoryDialog_ClickDelegate__EndInvoke(
        SelectServantStoryDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1D0F06C(result, 0, method);
}


void SelectServantStoryDialog_ClickDelegate__Invoke(
        SelectServantStoryDialog_ClickDelegate_o *this,
        int32_t result,
        int32_t servantId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    servantId,
    this->fields.method);
}