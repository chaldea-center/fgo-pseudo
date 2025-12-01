void GrandQuestPartyOrganizationEquipmentDuplicatedDialog___ctor(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC2C39 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC2C39 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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

  if ( (byte_4CC2C37 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Close_b__13_0__);
    byte_4CC2C37 = 1;
  }
  v3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
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

  if ( (byte_4CC2C35 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC2C35 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.descriptionLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C71608(titleLabel, method);
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

  if ( (byte_4CC2C38 & 1) == 0 )
  {
    sub_1C713B0(&Method_GrandQuestPartyOrganizationEquipmentDuplicatedDialog_OnClickClose__);
    byte_4CC2C38 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_GrandQuestPartyOrganizationEquipmentDuplicatedDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_GrandQuestPartyOrganizationEquipmentDuplicatedDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_GrandQuestPartyOrganizationEquipmentDuplicatedDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  UILabel_o *titleLabel; // x22
  System_String_o **v20; // x8
  UILabel_o *descriptionLabel; // x22
  System_String_o *v22; // x21
  struct UILabel_o *v23; // x21
  System_String_o *v24; // x0
  UILabel_o *closeLabel; // x20

  if ( (byte_4CC2C36 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_7002/*"GRAND_QUEST_SERVANT_EQUIPMENT_DUPLICATION_DIALOG_TITLE"*/);
    sub_1C713B0(&StringLiteral_3680/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C713B0(&StringLiteral_7001/*"GRAND_QUEST_SERVANT_EQUIPMENT_DUPLICATION_DIALOG_SINGLE_SERVANT_DESCRIPTION"*/);
    sub_1C713B0(&StringLiteral_44/*"\n\n"*/);
    sub_1C713B0(&StringLiteral_7000/*"GRAND_QUEST_SERVANT_EQUIPMENT_DUPLICATION_DIALOG_DESCRIPTION"*/);
    byte_4CC2C36 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.closeFunc = func;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.closeFunc, (int32_t)func, v13, v14, v15, v16, v17, v18);
  this->fields.isFromOnSelectPartyList = isFromOnSelectPartyList;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7002/*"GRAND_QUEST_SERVANT_EQUIPMENT_DUPLICATION_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  v20 = (System_String_o **)(isSingleServantString ? &StringLiteral_7001/*"GRAND_QUEST_SERVANT_EQUIPMENT_DUPLICATION_DIALOG_SINGLE_SERVANT_DESCRIPTION"*/ : &StringLiteral_7000/*"GRAND_QUEST_SERVANT_EQUIPMENT_DUPLICATION_DIALOG_DESCRIPTION"*/);
  descriptionLabel = this->fields.descriptionLabel;
  v22 = *v20;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v22, 0);
  if ( !descriptionLabel
    || (UILabel__set_text(descriptionLabel, (System_String_o *)gameObject, 0), (v23 = this->fields.descriptionLabel) == 0)
    || (v24 = System_String__Concat_64069988(
                v23->fields.mText,
                (System_String_o *)StringLiteral_44/*"\n\n"*/,
                duplicationEquipmentList,
                0),
        UILabel__set_text(v23, v24, 0),
        closeLabel = this->fields.closeLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMMON_CONFIRM_CLOSE"*/, 0),
        !closeLabel) )
  {
LABEL_16:
    sub_1C71608(gameObject, v12);
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
  __int64 v9; // x0
  bool v10; // zf
  GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *v11; // x0
  GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CC2C33 & 1) == 0 )
  {
    sub_1C713B0(&GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_TypeInfo);
    byte_4CC2C33 = 1;
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
    v9 = sub_1CCD184(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *)sub_1C719A4(v8);
  GrandQuestPartyOrganizationEquipmentDuplicatedDialog__remove_closeFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CC2C34 & 1) == 0 )
  {
    sub_1C713B0(&GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_TypeInfo);
    byte_4CC2C34 = 1;
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
    v9 = sub_1CCD184(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *)sub_1C719A4(v8);
  GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Awake(v11, v12);
}


void GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate___ctor(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *this,
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
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA0DA8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA0D60;
}


System_IAsyncResult_o *GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate__BeginInvoke(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *this,
        bool isFromOnSelectPartyList,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isFromOnSelectPartyList;
  if ( (byte_4CC2C3A & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    byte_4CC2C3A = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate__EndInvoke(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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