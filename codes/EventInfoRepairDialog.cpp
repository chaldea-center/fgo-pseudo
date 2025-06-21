void __fastcall EventInfoRepairDialog___ctor(EventInfoRepairDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B1DA63 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B1DA63 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoRepairDialog__OnClose(EventInfoRepairDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  System_Action_o *v9; // x20

  if ( (byte_4B1DA62 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_EventInfoRepairDialog_OnClose__, v3);
    sub_1BCAFF8(&Method_EventInfoRepairDialog__OnClose_b__7_0__, v4);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    byte_4B1DA62 = 1;
  }
  if ( this->fields.canTap )
  {
    closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
      AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0LL);
    this->fields.canTap = 0;
    v7 = Method_EventInfoRepairDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventInfoRepairDialog_OnClose__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCB010(Method_EventInfoRepairDialog_OnClose__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    v9 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_EventInfoRepairDialog__OnClose_b__7_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoRepairDialog__Open(
        EventInfoRepairDialog_o *this,
        int32_t eventId,
        System_Action_o *inOnClosed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *closeBtn; // x21
  System_Action_o *v10; // x21
  UnityEngine_Object_o *eventInfoEquipSkillPartsListComponent; // x21
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  float v14; // s8
  EventInfoEquipSkillPartsListComponent_o *v15; // x0
  struct EventInfoEquipSkillPartsListComponent_o *v16; // x8
  UnityEngine_Object_o *eventInfoAssistListComponent; // x20
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v19; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v21; // x8

  if ( (byte_4B1DA61 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_EventInfoRepairDialog__Open_b__6_0__, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    byte_4B1DA61 = 1;
  }
  this->fields.onClosed = inOnClosed;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.onClosed, (int32_t)inOnClosed, (int32_t)inOnClosed, method);
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  this->fields.canTap = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  v10 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EventInfoRepairDialog__Open_b__6_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v10, 0, 0LL);
  eventInfoEquipSkillPartsListComponent = (UnityEngine_Object_o *)this->fields.eventInfoEquipSkillPartsListComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = 0.0;
  if ( UnityEngine_Object__op_Inequality(eventInfoEquipSkillPartsListComponent, 0LL, 0LL) )
  {
    v15 = this->fields.eventInfoEquipSkillPartsListComponent;
    if ( !v15 )
      goto LABEL_29;
    EventInfoEquipSkillPartsListComponent__Setup(v15, eventId, v13);
    v16 = this->fields.eventInfoEquipSkillPartsListComponent;
    if ( !v16 )
      goto LABEL_29;
    v14 = v16->fields._Height_k__BackingField + 0.0;
  }
  eventInfoAssistListComponent = (UnityEngine_Object_o *)this->fields.eventInfoAssistListComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventInfoAssistListComponent, 0LL, 0LL) )
  {
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)this->fields.eventInfoAssistListComponent, -v14, 0LL);
    v15 = (EventInfoEquipSkillPartsListComponent_o *)this->fields.eventInfoAssistListComponent;
    if ( !v15 )
      goto LABEL_29;
    EventInfoAssistListComponent__Setup((EventInfoAssistListComponent_o *)v15, 0LL);
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = (EventInfoEquipSkillPartsListComponent_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
  if ( ((unsigned __int8)v15 & 1) != 0 )
  {
    v19 = this->fields.scrollView;
    if ( !v19 )
      goto LABEL_29;
    verticalScrollBar = (UnityEngine_Object_o *)v19->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = (EventInfoEquipSkillPartsListComponent_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0LL, 0LL);
    if ( ((unsigned __int8)v15 & 1) != 0 )
    {
      v21 = this->fields.scrollView;
      if ( v21 )
      {
        v15 = (EventInfoEquipSkillPartsListComponent_o *)v21->fields.verticalScrollBar;
        if ( v15 )
        {
          UIProgressBar__set_value((UIProgressBar_o *)v15, 0.0, 0LL);
          return;
        }
      }
LABEL_29:
      sub_1BCB254(v15, v12);
    }
  }
}


void __fastcall EventInfoRepairDialog___OnClose_b__7_0(EventInfoRepairDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  CGThumbnailListItem_o *p_onClosed; // x19
  System_Action_o *onClosed; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B1DA64 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1DA64 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
  onClosed = this->fields.onClosed;
  p_onClosed = (CGThumbnailListItem_o *)&this->fields.onClosed;
  ActionExtensions__Call(onClosed, 0LL);
  p_onClosed->klass = 0LL;
  sub_1BCAF9C(p_onClosed, 0, v6, v7);
}


void __fastcall EventInfoRepairDialog___Open_b__6_0(EventInfoRepairDialog_o *this, const MethodInfo *method)
{
  this->fields.canTap = 1;
}