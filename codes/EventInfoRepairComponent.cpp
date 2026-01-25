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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  EventInfoUIBase__Initialization((EventInfoUIBase_o *)this, entity, 0);
  this->fields.eventUiEntity = entity;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.eventUiEntity, (int32_t)entity, v5, v6, v7, v8, v9, v10);
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
  __int64 v7; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w21
  EventInfoOpenRepairDialogComponent_o *v10; // x20
  System_Action_o *v11; // x22
  const MethodInfo *v12; // x3

  if ( (byte_4CEFAE3 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_EventInfoRepairComponent_OnClick__);
    sub_1C7BAE8(&Method_EventInfoRepairComponent__OnClick_b__7_0__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFAE3 = 1;
  }
  if ( (((__int64 (__fastcall *)(EventInfoRepairComponent_o *, const MethodInfo *))this->klass->vtable._17_IsBusy.methodPtr)(
          this,
          this->klass->vtable._17_IsBusy.method)
      & 1) == 0 )
  {
    this->fields.isBusy = 1;
    v3 = Method_EventInfoRepairComponent_OnClick__;
    if ( (*((_BYTE *)Method_EventInfoRepairComponent_OnClick__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_EventInfoRepairComponent_OnClick__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
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
            v10 = this->fields.eventInfoRepairDialog,
            v11 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
            System_Action___ctor(v11, (Il2CppObject *)this, Method_EventInfoRepairComponent__OnClick_b__7_0__, 0),
            !v10) )
      {
        sub_1C7BD40(v6, v7);
      }
      EventInfoOpenRepairDialogComponent__OpenEventInfoRepairDialog(v10, eventId, v11, v12);
    }
  }
}


void EventInfoRepairComponent__Redisplay(EventInfoRepairComponent_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object__51804268; // x0
  __int64 v4; // x1
  int max_length; // w8
  System_Object_array *v6; // x19
  unsigned int v7; // w20

  if ( (byte_4CEFAE2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentsInChildren_EventInfoAssistSkillIconComponent___);
    byte_4CEFAE2 = 1;
  }
  ComponentsInChildren_object__51804268 = UnityEngine_Component__GetComponentsInChildren_object__51804268(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_316786C *)Method_UnityEngine_Component_GetComponentsInChildren_EventInfoAssistSkillIconComponent___);
  if ( !ComponentsInChildren_object__51804268 )
    goto LABEL_11;
  max_length = ComponentsInChildren_object__51804268->max_length;
  v6 = ComponentsInChildren_object__51804268;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C7BD48(ComponentsInChildren_object__51804268);
      ComponentsInChildren_object__51804268 = (System_Object_array *)v6->m_Items[v7];
      if ( !ComponentsInChildren_object__51804268 )
        break;
      EventInfoAssistSkillIconComponent__Redisplay(
        (EventInfoAssistSkillIconComponent_o *)ComponentsInChildren_object__51804268,
        0);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_11:
    sub_1C7BD40(ComponentsInChildren_object__51804268, v4);
  }
}


void EventInfoRepairComponent___OnClick_b__7_0(EventInfoRepairComponent_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 0;
}