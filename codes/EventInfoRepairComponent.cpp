void EventInfoRepairComponent___ctor(EventInfoRepairComponent_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoRepairComponent__Awake(EventInfoRepairComponent_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoRepairComponent__Initialization(
        EventInfoRepairComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  EventInfoUIBase__Initialization((EventInfoUIBase_o *)this, entity, 0);
  this->fields.eventUiEntity = entity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventUiEntity, (int32_t)entity, v5, v6, v7, v8, v9, v10);
}


bool EventInfoRepairComponent__IsBusy(EventInfoRepairComponent_o *this, const MethodInfo *method)
{
  return this->fields.isBusy;
}


void EventInfoRepairComponent__OnClick(EventInfoRepairComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *eventInfoRepairDialog; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  EventInfoOpenRepairDialogComponent_o *v10; // x20
  int32_t eventId; // w21
  System_Action_o *v12; // x22

  if ( (byte_5972617 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoRepairComponent_OnClick__);
    sub_2213A60(&Method_EventInfoRepairComponent__OnClick_b__7_0__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972617 = 1;
  }
  if ( (((__int64 (__fastcall *)(EventInfoRepairComponent_o *, const MethodInfo *))this->klass->vtable._17_IsBusy.methodPtr)(
          this,
          this->klass->vtable._17_IsBusy.method)
      & 1) == 0 )
  {
    this->fields.isBusy = 1;
    v3 = Method_EventInfoRepairComponent_OnClick__;
    if ( (*((_BYTE *)Method_EventInfoRepairComponent_OnClick__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventInfoRepairComponent_OnClick__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    eventInfoRepairDialog = (UnityEngine_Object_o *)this->fields.eventInfoRepairDialog;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    v7 = UnityEngine_Object__op_Equality(eventInfoRepairDialog, 0, 0);
    if ( !v7 )
    {
      eventUiEntity = this->fields.eventUiEntity;
      if ( !eventUiEntity
        || (v10 = this->fields.eventInfoRepairDialog,
            eventId = eventUiEntity->fields.eventId,
            v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
            System_Action___ctor(v12, (Il2CppObject *)this, Method_EventInfoRepairComponent__OnClick_b__7_0__, 0),
            !v10) )
      {
        sub_2213CDC(v7, v8);
      }
      EventInfoOpenRepairDialogComponent__OpenEventInfoRepairDialog(v10, eventId, v12, 0);
    }
  }
}


void EventInfoRepairComponent__Redisplay(EventInfoRepairComponent_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object__58857296; // x0
  __int64 v4; // x1
  int max_length; // w8
  System_Object_array *v6; // x19
  __int64 v7; // x20

  if ( (byte_5972616 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_EventInfoAssistSkillIconComponent___);
    byte_5972616 = 1;
  }
  ComponentsInChildren_object__58857296 = UnityEngine_Component__GetComponentsInChildren_object__58857296(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_3821750 *)Method_UnityEngine_Component_GetComponentsInChildren_EventInfoAssistSkillIconComponent___);
  if ( !ComponentsInChildren_object__58857296 )
    goto LABEL_10;
  max_length = ComponentsInChildren_object__58857296->max_length;
  v6 = ComponentsInChildren_object__58857296;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= max_length )
        sub_2213CE4(ComponentsInChildren_object__58857296);
      ComponentsInChildren_object__58857296 = (System_Object_array *)v6->m_Items[v7];
      if ( !ComponentsInChildren_object__58857296 )
        break;
      EventInfoAssistSkillIconComponent__Redisplay(
        (EventInfoAssistSkillIconComponent_o *)ComponentsInChildren_object__58857296,
        0);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_10:
    sub_2213CDC(ComponentsInChildren_object__58857296, v4);
  }
}


void EventInfoRepairComponent___OnClick_b__7_0(EventInfoRepairComponent_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 0;
}