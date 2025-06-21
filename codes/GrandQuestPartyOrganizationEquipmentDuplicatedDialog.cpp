void __fastcall GrandQuestPartyOrganizationEquipmentDuplicatedDialog___ctor(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B17E65 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B17E65 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Awake(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Close(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B17E63 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Close_b__13_0__, v3);
    byte_4B17E63 = 1;
  }
  v4 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Close_b__13_0__,
    0LL);
  BaseDialog__SafeClose((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Init(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4B17E61 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B17E61 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.descriptionLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCB254(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall GrandQuestPartyOrganizationEquipmentDuplicatedDialog__OnClickClose(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B17E64 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_GrandQuestPartyOrganizationEquipmentDuplicatedDialog_OnClickClose__, method);
    byte_4B17E64 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_GrandQuestPartyOrganizationEquipmentDuplicatedDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_GrandQuestPartyOrganizationEquipmentDuplicatedDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_GrandQuestPartyOrganizationEquipmentDuplicatedDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Close(this, v5);
  }
}


void __fastcall GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Open(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *this,
        System_String_o *duplicationEquipmentList,
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *func,
        bool isFromOnSelectPartyList,
        bool isSingleServantString,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UILabel_o *titleLabel; // x22
  System_String_o **v21; // x8
  UILabel_o *descriptionLabel; // x22
  System_String_o *v23; // x21
  struct UILabel_o *v24; // x21
  System_String_o *v25; // x0
  UILabel_o *closeLabel; // x20

  if ( (byte_4B17E62 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, duplicationEquipmentList);
    sub_1BCAFF8(&StringLiteral_6948/*"GRAND_QUEST_SERVANT_EQUIPMENT_DUPLICATION_DIALOG_TITLE"*/, v11);
    sub_1BCAFF8(&StringLiteral_3650/*"COMMON_CONFIRM_CLOSE"*/, v12);
    sub_1BCAFF8(&StringLiteral_6947/*"GRAND_QUEST_SERVANT_EQUIPMENT_DUPLICATION_DIALOG_SINGLE_SERVANT_DESCRIPTION"*/, v13);
    sub_1BCAFF8(&StringLiteral_44/*"\n\n"*/, v14);
    sub_1BCAFF8(&StringLiteral_6946/*"GRAND_QUEST_SERVANT_EQUIPMENT_DUPLICATION_DIALOG_DESCRIPTION"*/, v15);
    byte_4B17E62 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.closeFunc = func;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)func, v18, v19);
  this->fields.isFromOnSelectPartyList = isFromOnSelectPartyList;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6948/*"GRAND_QUEST_SERVANT_EQUIPMENT_DUPLICATION_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  v21 = (System_String_o **)(isSingleServantString ? &StringLiteral_6947/*"GRAND_QUEST_SERVANT_EQUIPMENT_DUPLICATION_DIALOG_SINGLE_SERVANT_DESCRIPTION"*/ : &StringLiteral_6946/*"GRAND_QUEST_SERVANT_EQUIPMENT_DUPLICATION_DIALOG_DESCRIPTION"*/);
  descriptionLabel = this->fields.descriptionLabel;
  v23 = *v21;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v23, 0LL);
  if ( !descriptionLabel
    || (UILabel__set_text(descriptionLabel, (System_String_o *)gameObject, 0LL),
        (v24 = this->fields.descriptionLabel) == 0LL)
    || (v25 = System_String__Concat_62488672(
                v24->fields.mText,
                (System_String_o *)StringLiteral_44/*"\n\n"*/,
                duplicationEquipmentList,
                0LL),
        UILabel__set_text(v24, v25, 0LL),
        closeLabel = this->fields.closeLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3650/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeLabel) )
  {
LABEL_16:
    sub_1BCB254(gameObject, v17);
  }
  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeButton, 0LL);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall GrandQuestPartyOrganizationEquipmentDuplicatedDialog___Close_b__13_0(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *this,
        const MethodInfo *method)
{
  struct GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *closeFunc; // x8

  closeFunc = this->fields.closeFunc;
  if ( closeFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      this->fields.isFromOnSelectPartyList,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Init(this, method);
}


void __fastcall GrandQuestPartyOrganizationEquipmentDuplicatedDialog__add_closeFunc(
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

  if ( (byte_4B17E5F & 1) == 0 )
  {
    sub_1BCAFF8(&GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_TypeInfo, value);
    byte_4B17E5F = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v6 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_c *)v8->klass != GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_1C05088(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *)sub_1BCB514(v8);
  GrandQuestPartyOrganizationEquipmentDuplicatedDialog__remove_closeFunc(v11, v12, v13);
}


void __fastcall GrandQuestPartyOrganizationEquipmentDuplicatedDialog__remove_closeFunc(
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

  if ( (byte_4B17E60 & 1) == 0 )
  {
    sub_1BCAFF8(&GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_TypeInfo, value);
    byte_4B17E60 = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v6 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_c *)v8->klass != GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_1C05088(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (GrandQuestPartyOrganizationEquipmentDuplicatedDialog_o *)sub_1BCB514(v8);
  GrandQuestPartyOrganizationEquipmentDuplicatedDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate___ctor(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_1A0F4D0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0F488;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate__BeginInvoke(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *this,
        bool isFromOnSelectPartyList,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isFromOnSelectPartyList;
  if ( (byte_4B17E66 & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, isFromOnSelectPartyList);
    byte_4B17E66 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v9, callback, object);
}


void __fastcall GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate__EndInvoke(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate__Invoke(
        GrandQuestPartyOrganizationEquipmentDuplicatedDialog_CloseDelegate_o *this,
        bool isFromOnSelectPartyList,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isFromOnSelectPartyList,
    *(_QWORD *)&this->fields.extra_arg);
}