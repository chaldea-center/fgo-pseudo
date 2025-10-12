void EventInfoRepairDialog___ctor(EventInfoRepairDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C38F51 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C38F51 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoRepairDialog__OnClose(EventInfoRepairDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_4C38F50 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventInfoRepairDialog_OnClose__);
    sub_1C32C20(&Method_EventInfoRepairDialog__OnClose_b__7_0__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C38F50 = 1;
  }
  if ( this->fields.canTap )
  {
    closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
      AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0);
    this->fields.canTap = 0;
    v4 = Method_EventInfoRepairDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventInfoRepairDialog_OnClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C32C38(Method_EventInfoRepairDialog_OnClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_EventInfoRepairDialog__OnClose_b__7_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0);
  }
}


void EventInfoRepairDialog__Open(
        EventInfoRepairDialog_o *this,
        int32_t eventId,
        System_Action_o *inOnClosed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x21
  System_Action_o *v8; // x21
  UnityEngine_Object_o *eventInfoEquipSkillPartsListComponent; // x21
  const MethodInfo *v10; // x2
  float v11; // s8
  EventInfoEquipSkillPartsListComponent_o *v12; // x0
  struct EventInfoEquipSkillPartsListComponent_o *v13; // x8
  UnityEngine_Object_o *eventInfoAssistListComponent; // x20
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v16; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v18; // x8

  if ( (byte_4C38F4F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventInfoRepairDialog__Open_b__6_0__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C38F4F = 1;
  }
  this->fields.onClosed = inOnClosed;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onClosed, (int32_t)inOnClosed, (int32_t)inOnClosed, method);
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0);
  this->fields.canTap = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventInfoRepairDialog__Open_b__6_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v8, 0, 0, 0);
  eventInfoEquipSkillPartsListComponent = (UnityEngine_Object_o *)this->fields.eventInfoEquipSkillPartsListComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = 0.0;
  if ( UnityEngine_Object__op_Inequality(eventInfoEquipSkillPartsListComponent, 0, 0) )
  {
    v12 = this->fields.eventInfoEquipSkillPartsListComponent;
    if ( !v12 )
      goto LABEL_29;
    EventInfoEquipSkillPartsListComponent__Setup(v12, eventId, v10);
    v13 = this->fields.eventInfoEquipSkillPartsListComponent;
    if ( !v13 )
      goto LABEL_29;
    v11 = v13->fields._Height_k__BackingField + 0.0;
  }
  eventInfoAssistListComponent = (UnityEngine_Object_o *)this->fields.eventInfoAssistListComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventInfoAssistListComponent, 0, 0) )
  {
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)this->fields.eventInfoAssistListComponent, -v11, 0);
    v12 = (EventInfoEquipSkillPartsListComponent_o *)this->fields.eventInfoAssistListComponent;
    if ( !v12 )
      goto LABEL_29;
    EventInfoAssistListComponent__Setup((EventInfoAssistListComponent_o *)v12, 0);
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = (EventInfoEquipSkillPartsListComponent_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    v16 = this->fields.scrollView;
    if ( !v16 )
      goto LABEL_29;
    verticalScrollBar = (UnityEngine_Object_o *)v16->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = (EventInfoEquipSkillPartsListComponent_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
    if ( ((unsigned __int8)v12 & 1) != 0 )
    {
      v18 = this->fields.scrollView;
      if ( v18 )
      {
        v12 = (EventInfoEquipSkillPartsListComponent_o *)v18->fields.verticalScrollBar;
        if ( v12 )
        {
          UIProgressBar__set_value((UIProgressBar_o *)v12, 0.0, 0);
          return;
        }
      }
LABEL_29:
      sub_1C32E7C(v12);
    }
  }
}


void EventInfoRepairDialog___OnClose_b__7_0(EventInfoRepairDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  CGThumbnailListItem_o *p_onClosed; // x19
  System_Action_o *onClosed; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C38F52 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C38F52 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(gameObject, 0);
  onClosed = this->fields.onClosed;
  p_onClosed = (CGThumbnailListItem_o *)&this->fields.onClosed;
  ActionExtensions__Call(onClosed, 0);
  p_onClosed->klass = 0;
  sub_1C32BC4(p_onClosed, 0, v6, v7);
}


void EventInfoRepairDialog___Open_b__6_0(EventInfoRepairDialog_o *this, const MethodInfo *method)
{
  this->fields.canTap = 1;
}