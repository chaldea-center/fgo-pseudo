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
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  EventInfoUIBase__Initialization((EventInfoUIBase_o *)this, entity, 0);
  this->fields.eventUiEntity = entity;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, v5, v6);
}


bool EventInfoRepairComponent__IsBusy(EventInfoRepairComponent_o *this, const MethodInfo *method)
{
  return this->fields.isBusy;
}


void EventInfoRepairComponent__OnClick(EventInfoRepairComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UnityEngine_Object_o *eventInfoRepairDialog; // x20
  _BOOL8 v6; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w21
  EventInfoOpenRepairDialogComponent_o *v9; // x20
  System_Action_o *v10; // x22
  const MethodInfo *v11; // x3

  if ( (byte_4C44547 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EventInfoRepairComponent_OnClick__);
    sub_1C37058(&Method_EventInfoRepairComponent__OnClick_b__7_0__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44547 = 1;
  }
  if ( (((__int64 (__fastcall *)(EventInfoRepairComponent_o *, const MethodInfo *))this->klass->vtable._17_IsBusy.methodPtr)(
          this,
          this->klass->vtable._17_IsBusy.method)
      & 1) == 0 )
  {
    this->fields.isBusy = 1;
    v3 = Method_EventInfoRepairComponent_OnClick__;
    if ( (*((_BYTE *)Method_EventInfoRepairComponent_OnClick__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_EventInfoRepairComponent_OnClick__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    eventInfoRepairDialog = (UnityEngine_Object_o *)this->fields.eventInfoRepairDialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality(eventInfoRepairDialog, 0, 0);
    if ( !v6 )
    {
      eventUiEntity = this->fields.eventUiEntity;
      if ( !eventUiEntity
        || (eventId = eventUiEntity->fields.eventId,
            v9 = this->fields.eventInfoRepairDialog,
            v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
            System_Action___ctor(v10, (Il2CppObject *)this, Method_EventInfoRepairComponent__OnClick_b__7_0__, 0),
            !v9) )
      {
        sub_1C372B4(v6);
      }
      EventInfoOpenRepairDialogComponent__OpenEventInfoRepairDialog(v9, eventId, v10, v11);
    }
  }
}


void EventInfoRepairComponent__Redisplay(EventInfoRepairComponent_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object__51245264; // x0
  int max_length; // w8
  System_Object_array *v5; // x19
  unsigned int v6; // w20

  if ( (byte_4C44546 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_EventInfoAssistSkillIconComponent___);
    byte_4C44546 = 1;
  }
  ComponentsInChildren_object__51245264 = UnityEngine_Component__GetComponentsInChildren_object__51245264(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_30DF0D0 *)Method_UnityEngine_Component_GetComponentsInChildren_EventInfoAssistSkillIconComponent___);
  if ( !ComponentsInChildren_object__51245264 )
    goto LABEL_11;
  max_length = ComponentsInChildren_object__51245264->max_length;
  v5 = ComponentsInChildren_object__51245264;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C372BC(ComponentsInChildren_object__51245264);
      ComponentsInChildren_object__51245264 = (System_Object_array *)v5->m_Items[v6];
      if ( !ComponentsInChildren_object__51245264 )
        break;
      EventInfoAssistSkillIconComponent__Redisplay(
        (EventInfoAssistSkillIconComponent_o *)ComponentsInChildren_object__51245264,
        0);
      max_length = v5->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_11:
    sub_1C372B4(ComponentsInChildren_object__51245264);
  }
}


void EventInfoRepairComponent___OnClick_b__7_0(EventInfoRepairComponent_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 0;
}