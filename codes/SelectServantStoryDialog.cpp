void SelectServantStoryDialog___ctor(SelectServantStoryDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_596BC8D & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__TypeInfo);
    byte_596BC8D = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__int____ctor(
    v3,
    (const MethodInfo_3FB5558 *)Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int___ctor__);
  this->fields.resultToServantId = (struct System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resultToServantId, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v10, v11);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SelectServantStoryDialog__Close(SelectServantStoryDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SelectServantStoryDialog__Close_40604328(this, 0, v2);
}


void SelectServantStoryDialog__Close_40604328(
        SelectServantStoryDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596BC88 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SelectServantStoryDialog_EndClose__);
    byte_596BC88 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SelectServantStoryDialog_EndClose__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v11, 0);
}


void SelectServantStoryDialog__EndClose(SelectServantStoryDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SelectServantStoryDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_596BC86 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BC86 = 1;
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
    sub_2213CDC(messageLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SelectServantStoryDialog__OnClickClose(SelectServantStoryDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SelectServantStoryDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_596BC8B & 1) == 0 )
  {
    sub_2213A60(&Method_SelectServantStoryDialog_OnClickClose__);
    byte_596BC8B = 1;
  }
  if ( this->fields.isButtonEnable && this->fields.baseState == 2 )
  {
    v3 = Method_SelectServantStoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SelectServantStoryDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SelectServantStoryDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  __int64 Item; // x2

  if ( (byte_596BC89 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__get_Item__);
    sub_2213A60(&Method_SelectServantStoryDialog_OnClickServant1__);
    byte_596BC89 = 1;
  }
  if ( this->fields.isButtonEnable && this->fields.baseState == 2 )
  {
    v3 = Method_SelectServantStoryDialog_OnClickServant1__;
    if ( (*((_BYTE *)Method_SelectServantStoryDialog_OnClickServant1__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SelectServantStoryDialog_OnClickServant1__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
    {
      resultToServantId = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.resultToServantId;
      if ( !resultToServantId )
        sub_2213CDC(0, v5);
      Item = (unsigned int)System_Collections_Generic_Dictionary_Int32Enum__int___get_Item(
                             resultToServantId,
                             1,
                             (const MethodInfo_3FB5E60 *)Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__get_Item__);
      ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))clickFunc->fields.invoke_impl)(
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
  __int64 Item; // x2

  if ( (byte_596BC8A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__get_Item__);
    sub_2213A60(&Method_SelectServantStoryDialog_OnClickServant2__);
    byte_596BC8A = 1;
  }
  if ( this->fields.isButtonEnable && this->fields.baseState == 2 )
  {
    v3 = Method_SelectServantStoryDialog_OnClickServant2__;
    if ( (*((_BYTE *)Method_SelectServantStoryDialog_OnClickServant2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SelectServantStoryDialog_OnClickServant2__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
    {
      resultToServantId = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.resultToServantId;
      if ( !resultToServantId )
        sub_2213CDC(0, v5);
      Item = (unsigned int)System_Collections_Generic_Dictionary_Int32Enum__int___get_Item(
                             resultToServantId,
                             2,
                             (const MethodInfo_3FB5E60 *)Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__get_Item__);
      ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))clickFunc->fields.invoke_impl)(
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

  if ( (byte_596BC8C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16255/*"Window/Base/CloseButton"*/);
    byte_596BC8C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16255/*"Window/Base/CloseButton"*/, 0);
}


void SelectServantStoryDialog__Open(
        SelectServantStoryDialog_o *this,
        ServantEntity_array *entities,
        SelectServantStoryDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x1
  ServantEntity_o *normalBase; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *messageLabel; // x21
  il2cpp_array_size_t max_length; // x8
  UILabel_o *buttonServantNameLabel; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x22
  UILabel_o *buttonServantName2Label; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  UILabel_o *buttonExitLabel; // x21
  __int64 v28; // x2
  il2cpp_array_size_t v29; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *resultToServantId; // x21
  ServantEntity_o *v31; // x8
  __int64 v32; // x22
  __int64 v33; // x23
  int32_t v34; // w2
  __int64 v35; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v36; // x21
  ServantEntity_o *v37; // x8
  __int64 v38; // x20
  __int64 v39; // x22
  int32_t v40; // w2
  System_Action_c *v41; // x0
  System_Action_o *v42; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_596BC87 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__Clear__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_2213A60(&Method_SelectServantStoryDialog_EndOpen__);
    sub_2213A60(&StringLiteral_9205/*"MYROOM_MATERIAL_SELECT_SERVANT_STORY_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_9204/*"MYROOM_MATERIAL_SELECT_SERVANT_STORY_CONFIRM"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BC87 = 1;
  }
  this->fields.clickFunc = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    (System_String_o *)func,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  normalBase = (ServantEntity_o *)this->fields.normalBase;
  if ( !normalBase )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalBase, 1, 0);
  messageLabel = this->fields.messageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
  normalBase = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9204/*"MYROOM_MATERIAL_SELECT_SERVANT_STORY_CONFIRM"*/, 0);
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
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v18, v19);
    normalBase = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(Name, 0);
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
    v24 = ServantEntity__GetName(normalBase, -1, 0, -1, 0, 0);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v22, v23);
    normalBase = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(v24, 0);
    v11 = (System_String_o *)normalBase;
  }
  if ( !buttonServantName2Label )
    goto LABEL_43;
  UILabel__set_text(buttonServantName2Label, v11, 0);
  buttonExitLabel = this->fields.buttonExitLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
  normalBase = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9205/*"MYROOM_MATERIAL_SELECT_SERVANT_STORY_CONFIRM_CLOSE"*/, 0);
  if ( !buttonExitLabel )
    goto LABEL_43;
  UILabel__set_text(buttonExitLabel, (System_String_o *)normalBase, 0);
  normalBase = (ServantEntity_o *)this->fields.resultToServantId;
  if ( !normalBase )
    goto LABEL_43;
  System_Collections_Generic_Dictionary_Int32Enum__int___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)normalBase,
    (const MethodInfo_3FB607C *)Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__Clear__);
  v29 = entities->max_length;
  resultToServantId = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.resultToServantId;
  if ( !v29 )
  {
    v34 = 0;
    if ( !resultToServantId )
      goto LABEL_43;
    goto LABEL_35;
  }
  if ( !(_DWORD)v29 )
LABEL_44:
    sub_2213CE4(normalBase);
  v31 = entities->m_Items[0];
  if ( !v31 )
    goto LABEL_43;
  v32 = *(_QWORD *)&v31->fields.id.fields.currentCryptoKey;
  v33 = *(_QWORD *)&v31->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v28);
  *(_QWORD *)&v43.fields.currentCryptoKey = v32;
  *(_QWORD *)&v43.fields.fakeValue = v33;
  normalBase = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v43, 0);
  v34 = (int)normalBase;
  if ( !resultToServantId )
    goto LABEL_43;
LABEL_35:
  System_Collections_Generic_Dictionary_Int32Enum__int___Add(
    resultToServantId,
    1,
    v34,
    (const MethodInfo_3FB5EFC *)Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__Add__);
  v36 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.resultToServantId;
  if ( SLODWORD(entities->max_length) < 2 )
  {
    v40 = 0;
  }
  else
  {
    v37 = entities->m_Items[1];
    if ( !v37 )
      goto LABEL_43;
    v38 = *(_QWORD *)&v37->fields.id.fields.currentCryptoKey;
    v39 = *(_QWORD *)&v37->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v35);
    *(_QWORD *)&v44.fields.currentCryptoKey = v38;
    *(_QWORD *)&v44.fields.fakeValue = v39;
    normalBase = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v44, 0);
    v40 = (int)normalBase;
  }
  if ( !v36 )
LABEL_43:
    sub_2213CDC(normalBase, v11);
  System_Collections_Generic_Dictionary_Int32Enum__int___Add(
    v36,
    2,
    v40,
    (const MethodInfo_3FB5EFC *)Method_System_Collections_Generic_Dictionary_SelectServantStoryDialog_ResultKind__int__Add__);
  v41 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v42 = (System_Action_o *)sub_2213CCC(v41);
  System_Action___ctor(v42, (Il2CppObject *)this, Method_SelectServantStoryDialog_EndOpen__, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v42, 0, 0);
}


void SelectServantStoryDialog_ClickDelegate___ctor(
        SelectServantStoryDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2003608;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_20035B0;
}


System_IAsyncResult_o *SelectServantStoryDialog_ClickDelegate__BeginInvoke(
        SelectServantStoryDialog_ClickDelegate_o *this,
        int32_t result,
        int32_t servantId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = result;
  v11 = servantId;
  if ( (byte_596BC8E & 1) == 0 )
  {
    sub_2213A60(&SelectServantStoryDialog_ResultKind_TypeInfo);
    byte_596BC8E = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(SelectServantStoryDialog_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void SelectServantStoryDialog_ClickDelegate__EndInvoke(
        SelectServantStoryDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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