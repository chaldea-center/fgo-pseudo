void EventEquipSkillPartsAddPartsDialog___ctor(EventEquipSkillPartsAddPartsDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C31C67 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C31C67 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventEquipSkillPartsAddPartsDialog__Init(EventEquipSkillPartsAddPartsDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4C31C63 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C31C63 = 1;
  }
  this->fields.closeCallback = 0;
  sub_1C32BC4(&this->fields.closeCallback, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0 )
    sub_1C32E7C(transform);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)transform,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.basePanel = (struct UIPanel_o *)Component_object;
  sub_1C32BC4(&this->fields.basePanel, Component_object);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventEquipSkillPartsAddPartsDialog__OnClickCloseButton(
        EventEquipSkillPartsAddPartsDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C31C65 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventEquipSkillPartsAddPartsDialog_OnClickCloseButton__);
    sub_1C32C20(&Method_EventEquipSkillPartsAddPartsDialog__OnClickCloseButton_b__9_0__);
    byte_4C31C65 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_EventEquipSkillPartsAddPartsDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventEquipSkillPartsAddPartsDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_EventEquipSkillPartsAddPartsDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventEquipSkillPartsAddPartsDialog__OnClickCloseButton_b__9_0__,
      0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventEquipSkillPartsAddPartsDialog__Open(
        EventEquipSkillPartsAddPartsDialog_o *this,
        int32_t eventId,
        System_Collections_Generic_List_AssistEntity__o *resultList,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLabel; // x22
  UILabel_o *closeLabel; // x22
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  int32_t size; // w8
  float twoDisplayScrollBarValue; // s0

  if ( (byte_4C31C64 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_AssistEntity__get_Count__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1919/*"ADD_PARTS_DIALOG_TITLE"*/);
    sub_1C32C20(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4C31C64 = 1;
  }
  EventEquipSkillPartsAddPartsDialog__Init(this, *(const MethodInfo **)&eventId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1919/*"ADD_PARTS_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_18;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  closeLabel = this->fields.closeLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_18;
  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
  this->fields.closeCallback = closeCallback;
  sub_1C32BC4(&this->fields.closeCallback, closeCallback);
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  if ( !gameObject )
    goto LABEL_18;
  EventEquipSkillPartsAddPartsListViewManager__CreateList(
    (EventEquipSkillPartsAddPartsListViewManager_o *)gameObject,
    v11,
    resultList,
    v12);
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
    sub_1C32E7C(gameObject);
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
        v13);
      goto LABEL_17;
    }
    goto LABEL_18;
  }
LABEL_17:
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void EventEquipSkillPartsAddPartsDialog___OnClickCloseButton_b__9_0(
        EventEquipSkillPartsAddPartsDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C31C68 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31C68 = 1;
  }
  ActionExtensions__Call(this->fields.closeCallback, 0);
  this->fields.closeCallback = 0;
  sub_1C32BC4(&this->fields.closeCallback, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(gameObject, 0);
}


UnityEngine_GameObject_o *EventEquipSkillPartsAddPartsDialog__get_closeBtnObject(
        EventEquipSkillPartsAddPartsDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C31C66 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31C66 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_1C32E7C(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
}