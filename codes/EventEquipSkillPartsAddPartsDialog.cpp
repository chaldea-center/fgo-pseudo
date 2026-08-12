void EventEquipSkillPartsAddPartsDialog___ctor(EventEquipSkillPartsAddPartsDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A571 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A571 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventEquipSkillPartsAddPartsDialog__Init(EventEquipSkillPartsAddPartsDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596A56D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_596A56D = 1;
  }
  this->fields.closeCallback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback, 0, v2, v3, v4, v5, v6, v7);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0 )
    sub_2213CDC(transform, v10);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)transform,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.basePanel = (struct UIPanel_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.basePanel,
    (int32_t)Component_object,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventEquipSkillPartsAddPartsDialog__OnClickCloseButton(
        EventEquipSkillPartsAddPartsDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_596A56F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventEquipSkillPartsAddPartsDialog_OnClickCloseButton__);
    sub_2213A60(&Method_EventEquipSkillPartsAddPartsDialog__OnClickCloseButton_b__9_0__);
    byte_596A56F = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_EventEquipSkillPartsAddPartsDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventEquipSkillPartsAddPartsDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventEquipSkillPartsAddPartsDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *titleLabel; // x22
  UILabel_o *closeLabel; // x22
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x3
  int32_t size; // w8
  float twoDisplayScrollBarValue; // s0

  if ( (byte_596A56E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_AssistEntity__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2000/*"ADD_PARTS_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    byte_596A56E = 1;
  }
  EventEquipSkillPartsAddPartsDialog__Init(this, *(const MethodInfo **)&eventId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2000/*"ADD_PARTS_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_18;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  closeLabel = this->fields.closeLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_18;
  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
  this->fields.closeCallback = closeCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback,
    (int32_t)closeCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  if ( !gameObject )
    goto LABEL_18;
  EventEquipSkillPartsAddPartsListViewManager__CreateList(
    (EventEquipSkillPartsAddPartsListViewManager_o *)gameObject,
    (int32_t)v9,
    resultList,
    v20);
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
    sub_2213CDC(gameObject, v9);
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
        v9);
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
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_596A572 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A572 = 1;
  }
  ActionExtensions__Call(this->fields.closeCallback, 0);
  this->fields.closeCallback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback, 0, v3, v4, v5, v6, v7, v8);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


UnityEngine_GameObject_o *EventEquipSkillPartsAddPartsDialog__get_closeBtnObject(
        EventEquipSkillPartsAddPartsDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596A570 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A570 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}