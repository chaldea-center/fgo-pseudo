void EventInfoRepairDialog___ctor(EventInfoRepairDialog_o *this, const MethodInfo *method)
{
  if ( (byte_593A443 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593A443 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoRepairDialog__OnClose(EventInfoRepairDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  _BYTE *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_593A442 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoRepairDialog_OnClose__);
    sub_21FFC50(&Method_EventInfoRepairDialog__OnClose_b__7_0__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A442 = 1;
  }
  if ( this->fields.canTap )
  {
    closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
      AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0);
    v4 = Method_EventInfoRepairDialog_OnClose__;
    this->fields.canTap = 0;
    if ( (v4[83] & 2) != 0 )
      v4 = (_BYTE *)sub_21FFC68(v4);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, *((_QWORD *)v4 + 4));
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  UnityEngine_Object_o *closeBtn; // x21
  System_Action_o *v13; // x21
  __int64 v14; // x1
  UnityEngine_Object_o *eventInfoEquipSkillPartsListComponent; // x21
  __int64 v16; // x1
  float v17; // s8
  EventInfoEquipSkillPartsListComponent_o *v18; // x0
  struct EventInfoEquipSkillPartsListComponent_o *v19; // x8
  UnityEngine_Object_o *eventInfoAssistListComponent; // x20
  __int64 v21; // x1
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v23; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v25; // x8

  if ( (byte_593A441 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoRepairDialog__Open_b__6_0__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A441 = 1;
  }
  this->fields.onClosed = inOnClosed;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClosed,
    (int32_t)inOnClosed,
    (System_String_o *)inOnClosed,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0);
  this->fields.canTap = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_EventInfoRepairDialog__Open_b__6_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v13, 0, 0, 0);
  eventInfoEquipSkillPartsListComponent = (UnityEngine_Object_o *)this->fields.eventInfoEquipSkillPartsListComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  v17 = 0.0;
  if ( UnityEngine_Object__op_Inequality(eventInfoEquipSkillPartsListComponent, 0, 0) )
  {
    v18 = this->fields.eventInfoEquipSkillPartsListComponent;
    if ( !v18 )
      goto LABEL_29;
    EventInfoEquipSkillPartsListComponent__Setup(v18, eventId, 0);
    v19 = this->fields.eventInfoEquipSkillPartsListComponent;
    if ( !v19 )
      goto LABEL_29;
    v17 = v19->fields._Height_k__BackingField + 0.0;
  }
  eventInfoAssistListComponent = (UnityEngine_Object_o *)this->fields.eventInfoAssistListComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(eventInfoAssistListComponent, 0, 0) )
  {
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)this->fields.eventInfoAssistListComponent, -v17, 0);
    v18 = (EventInfoEquipSkillPartsListComponent_o *)this->fields.eventInfoAssistListComponent;
    if ( !v18 )
      goto LABEL_29;
    EventInfoAssistListComponent__Setup((EventInfoAssistListComponent_o *)v18, 0);
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  v18 = (EventInfoEquipSkillPartsListComponent_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)v18 & 1) != 0 )
  {
    v23 = this->fields.scrollView;
    if ( !v23 )
      goto LABEL_29;
    verticalScrollBar = (UnityEngine_Object_o *)v23->fields.verticalScrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    v18 = (EventInfoEquipSkillPartsListComponent_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
    if ( ((unsigned __int8)v18 & 1) != 0 )
    {
      v25 = this->fields.scrollView;
      if ( v25 )
      {
        v18 = (EventInfoEquipSkillPartsListComponent_o *)v25->fields.verticalScrollBar;
        if ( v18 )
        {
          UIProgressBar__set_value((UIProgressBar_o *)v18, 0.0, 0);
          return;
        }
      }
LABEL_29:
      sub_21FFECC(v18, v16);
    }
  }
}


void EventInfoRepairDialog___OnClose_b__7_0(EventInfoRepairDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_593A444 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A444 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
  ActionExtensions__Call(this->fields.onClosed, 0);
  this->fields.onClosed = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onClosed, 0, v5, v6, v7, v8, v9, v10);
}


void EventInfoRepairDialog___Open_b__6_0(EventInfoRepairDialog_o *this, const MethodInfo *method)
{
  this->fields.canTap = 1;
}