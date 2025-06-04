void __fastcall EventEquipSkillPartsAddPartsDialog___ctor(
        EventEquipSkillPartsAddPartsDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B0628D & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4B0628D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventEquipSkillPartsAddPartsDialog__Init(
        EventEquipSkillPartsAddPartsDialog_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B06289 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4B06289 = 1;
  }
  this->fields.closeCallback = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallback, 0, v2, v3);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL )
    sub_1BC3264(transform, v6);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)transform,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.basePanel = (struct UIPanel_o *)Component_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.basePanel, (int32_t)Component_object, v8, v9);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventEquipSkillPartsAddPartsDialog__OnClickCloseButton(
        EventEquipSkillPartsAddPartsDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B0628B & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_EventEquipSkillPartsAddPartsDialog_OnClickCloseButton__, v3);
    sub_1BC3008(&Method_EventEquipSkillPartsAddPartsDialog__OnClickCloseButton_b__9_0__, v4);
    byte_4B0628B = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_EventEquipSkillPartsAddPartsDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventEquipSkillPartsAddPartsDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_EventEquipSkillPartsAddPartsDialog_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventEquipSkillPartsAddPartsDialog__OnClickCloseButton_b__9_0__,
      0LL);
    BaseDialog__SafeClose((BaseDialog_o *)this, v7, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventEquipSkillPartsAddPartsDialog__Open(
        EventEquipSkillPartsAddPartsDialog_o *this,
        int32_t eventId,
        System_Collections_Generic_List_AssistEntity__o *resultList,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *closeLabel; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  int32_t size; // w8
  float twoDisplayScrollBarValue; // s0

  if ( (byte_4B0628A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_AssistEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BC3008(&LocalizationManager_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_1908/*"ADD_PARTS_DIALOG_TITLE"*/, v9);
    sub_1BC3008(&StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, v10);
    byte_4B0628A = 1;
  }
  EventEquipSkillPartsAddPartsDialog__Init(this, *(const MethodInfo **)&eventId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1908/*"ADD_PARTS_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_18;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  closeLabel = this->fields.closeLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_18;
  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
  this->fields.closeCallback = closeCallback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)closeCallback, v15, v16);
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  if ( !gameObject )
    goto LABEL_18;
  EventEquipSkillPartsAddPartsListViewManager__CreateList(
    (EventEquipSkillPartsAddPartsListViewManager_o *)gameObject,
    (int32_t)v12,
    resultList,
    v17);
  if ( !resultList )
    goto LABEL_18;
  size = resultList->fields._size;
  if ( size == 2 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( gameObject )
    {
      twoDisplayScrollBarValue = this->fields.twoDisplayScrollBarValue;
      goto LABEL_16;
    }
LABEL_18:
    sub_1BC3264(gameObject, v12);
  }
  if ( size == 1 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( gameObject )
    {
      twoDisplayScrollBarValue = this->fields.oneDisplayScrollBarValue;
LABEL_16:
      EventEquipSkillPartsAddPartsListViewManager__SetScrollBarValue(
        (EventEquipSkillPartsAddPartsListViewManager_o *)gameObject,
        twoDisplayScrollBarValue,
        v12);
      goto LABEL_17;
    }
    goto LABEL_18;
  }
LABEL_17:
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall EventEquipSkillPartsAddPartsDialog___OnClickCloseButton_b__9_0(
        EventEquipSkillPartsAddPartsDialog_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B0628E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B0628E = 1;
  }
  ActionExtensions__Call(this->fields.closeCallback, 0LL);
  this->fields.closeCallback = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallback, 0, v3, v4);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventEquipSkillPartsAddPartsDialog__get_closeBtnObject(
        EventEquipSkillPartsAddPartsDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B0628C & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B0628C = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1BC3264(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}