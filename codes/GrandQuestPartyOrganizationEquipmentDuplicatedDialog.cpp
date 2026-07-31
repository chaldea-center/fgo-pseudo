void GrandQuestPartyOrganizationEquipmentDuplicatedDialog___ctor(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5933D61 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5933D61 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Awake(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Close(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_5933D5F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Close_b__13_0__);
    byte_5933D5F = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v3,
    (Il2CppObject *)this,
    Method_GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Close_b__13_0__,
    0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v3, 0);
}


void GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Init(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_5933D5D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933D5D = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.descriptionLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_21FFECC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void GrandQuestPartyOrganizationEquipmentDuplicatedDialog__OnClickClose(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_5933D60 & 1) == 0 )
  {
    sub_21FFC50(&Method_GrandQuestPartyOrganizationEquipmentDuplicatedDialog_OnClickClose__);
    byte_5933D60 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_GrandQuestPartyOrganizationEquipmentDuplicatedDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_GrandQuestPartyOrganizationEquipmentDuplicatedDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_GrandQuestPartyOrganizationEquipmentDuplicatedDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Close(this, v5);
  }
}


void GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Open(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *this,
        System_String_o *duplicationEquipmentList,
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *func,
        bool isFromOnSelectPartyList,
        bool isSingleServantString,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  __int64 v20; // x2
  LocalizationManager_c *v21; // x0
  UILabel_o *titleLabel; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  bool v25; // zf
  UILabel_o *descriptionLabel; // x21
  System_String_o **v27; // x8
  System_String_o *v28; // x22
  struct UILabel_o *v29; // x21
  System_String_o *v30; // x0
  UILabel_o *closeLabel; // x20

  if ( (byte_5933D5E & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_7289/*"GRAND_QUEST_SERVANT_EQUIPMENT_DUPLICATION_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_7288/*"GRAND_QUEST_SERVANT_EQUIPMENT_DUPLICATION_DIALOG_SINGLE_SERVANT_DESCRIPTION"*/);
    sub_21FFC50(&StringLiteral_44/*"\n\n"*/);
    sub_21FFC50(&StringLiteral_7287/*"GRAND_QUEST_SERVANT_EQUIPMENT_DUPLICATION_DIALOG_DESCRIPTION"*/);
    byte_5933D5E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.closeFunc = func;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc, (int32_t)func, v13, v14, v15, v16, v17, v18);
  v21 = LocalizationManager_TypeInfo;
  titleLabel = this->fields.titleLabel;
  this->fields.isFromOnSelectPartyList = isFromOnSelectPartyList;
  if ( !*(&v21->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v21, v19, v20);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7289/*"GRAND_QUEST_SERVANT_EQUIPMENT_DUPLICATION_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  v25 = !isSingleServantString;
  descriptionLabel = this->fields.descriptionLabel;
  v27 = (System_String_o **)(v25 ? &StringLiteral_7287/*"GRAND_QUEST_SERVANT_EQUIPMENT_DUPLICATION_DIALOG_DESCRIPTION"*/ : &StringLiteral_7288/*"GRAND_QUEST_SERVANT_EQUIPMENT_DUPLICATION_DIALOG_SINGLE_SERVANT_DESCRIPTION"*/);
  v28 = *v27;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23, v24);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v28, 0);
  if ( !descriptionLabel
    || (UILabel__set_text(descriptionLabel, (System_String_o *)gameObject, 0), (v29 = this->fields.descriptionLabel) == 0)
    || (v30 = System_String__Concat_75481624(
                v29->fields.mText,
                (System_String_o *)StringLiteral_44/*"\n\n"*/,
                duplicationEquipmentList,
                0),
        UILabel__set_text(v29, v30, 0),
        closeLabel = this->fields.closeLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0),
        !closeLabel) )
  {
LABEL_16:
    sub_21FFECC(gameObject, v12);
  }
  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeButton, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void GrandQuestPartyOrganizationEquipmentDuplicatedDialog___Close_b__13_0(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *this,
        const MethodInfo *method)
{
  struct GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *closeFunc; // x8

  closeFunc = this->fields.closeFunc;
  if ( closeFunc )
    ((void (__fastcall *)(intptr_t, bool, intptr_t))closeFunc->fields.invoke_impl)(
      closeFunc->fields.method_code,
      this->fields.isFromOnSelectPartyList,
      closeFunc->fields.method);
  GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Init(this, method);
}


void GrandQuestPartyOrganizationEquipmentDuplicatedDialog__add_closeFunc(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *this,
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o **p_closeFunc; // x20
  System_Delegate_o *v6; // x21
  struct GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *closeFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *v13; // x0
  GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5933D5B & 1) == 0 )
  {
    sub_21FFC50(&GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_TypeInfo);
    byte_5933D5B = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v6 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_c *)v8->klass != GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_closeFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *)sub_220024C(
                                                                    v8,
                                                                    GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_TypeInfo,
                                                                    v9,
                                                                    v10);
  GrandQuestPartyOrganizationEquipmentDuplicatedDialog__remove_closeFunc(v13, v14, v15);
}


void GrandQuestPartyOrganizationEquipmentDuplicatedDialog__remove_closeFunc(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *this,
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o **p_closeFunc; // x20
  System_Delegate_o *v6; // x21
  struct GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *closeFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5933D5C & 1) == 0 )
  {
    sub_21FFC50(&GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_TypeInfo);
    byte_5933D5C = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v6 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_c *)v8->klass != GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_closeFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *)sub_220024C(
                                                                    v8,
                                                                    GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_TypeInfo,
                                                                    v9,
                                                                    v10);
  GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Awake(v13, v14);
}


void GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate___ctor(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF1020;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF0FD8;
}


System_IAsyncResult_o *GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate__BeginInvoke(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *this,
        bool isFromOnSelectPartyList,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isFromOnSelectPartyList;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate__EndInvoke(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate__Invoke(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *this,
        bool isFromOnSelectPartyList,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isFromOnSelectPartyList,
    this->fields.method);
}