void __fastcall EventInfoRepairComponent___ctor(EventInfoRepairComponent_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoRepairComponent__Awake(EventInfoRepairComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoRepairComponent__Initialization(
        EventInfoRepairComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  EventInfoUIBase__Initialization((EventInfoUIBase_o *)this, entity, 0LL);
  this->fields.eventUiEntity = entity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, v5, v6);
}


bool __fastcall EventInfoRepairComponent__IsBusy(EventInfoRepairComponent_o *this, const MethodInfo *method)
{
  return this->fields.isBusy;
}


void __fastcall EventInfoRepairComponent__OnClick(EventInfoRepairComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  UnityEngine_Object_o *eventInfoRepairDialog; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w21
  EventInfoOpenRepairDialogComponent_o *v13; // x20
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x3

  if ( (byte_4B1DA60 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_EventInfoRepairComponent_OnClick__, v3);
    sub_1BCAFF8(&Method_EventInfoRepairComponent__OnClick_b__7_0__, v4);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    byte_4B1DA60 = 1;
  }
  if ( (((__int64 (__fastcall *)(EventInfoRepairComponent_o *, Il2CppMethodPointer))this->klass->vtable._17_IsBusy.method)(
          this,
          this->klass->vtable._18_IsDisplaying.methodPtr) & 1) == 0 )
  {
    this->fields.isBusy = 1;
    v6 = Method_EventInfoRepairComponent_OnClick__;
    if ( (*((_BYTE *)Method_EventInfoRepairComponent_OnClick__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCB010(Method_EventInfoRepairComponent_OnClick__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    eventInfoRepairDialog = (UnityEngine_Object_o *)this->fields.eventInfoRepairDialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Equality(eventInfoRepairDialog, 0LL, 0LL);
    if ( !v9 )
    {
      eventUiEntity = this->fields.eventUiEntity;
      if ( !eventUiEntity
        || (eventId = eventUiEntity->fields.eventId,
            v13 = this->fields.eventInfoRepairDialog,
            v14 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
            System_Action___ctor(v14, (Il2CppObject *)this, Method_EventInfoRepairComponent__OnClick_b__7_0__, 0LL),
            !v13) )
      {
        sub_1BCB254(v9, v10);
      }
      EventInfoOpenRepairDialogComponent__OpenEventInfoRepairDialog(v13, eventId, v14, v15);
    }
  }
}


void __fastcall EventInfoRepairComponent__Redisplay(EventInfoRepairComponent_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object__50405148; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int max_length; // w8
  System_Object_array *v7; // x19
  unsigned int v8; // w20

  if ( (byte_4B1DA5F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponentsInChildren_EventInfoAssistSkillIconComponent___, method);
    byte_4B1DA5F = 1;
  }
  ComponentsInChildren_object__50405148 = UnityEngine_Component__GetComponentsInChildren_object__50405148(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_3011F1C *)Method_UnityEngine_Component_GetComponentsInChildren_EventInfoAssistSkillIconComponent___);
  if ( !ComponentsInChildren_object__50405148 )
    goto LABEL_11;
  max_length = ComponentsInChildren_object__50405148->max_length;
  v7 = ComponentsInChildren_object__50405148;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1BCB25C(ComponentsInChildren_object__50405148, v4, v5);
      ComponentsInChildren_object__50405148 = (System_Object_array *)v7->m_Items[v8];
      if ( !ComponentsInChildren_object__50405148 )
        break;
      EventInfoAssistSkillIconComponent__Redisplay(
        (EventInfoAssistSkillIconComponent_o *)ComponentsInChildren_object__50405148,
        0LL);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_11:
    sub_1BCB254(ComponentsInChildren_object__50405148, v4);
  }
}


void __fastcall EventInfoRepairComponent___OnClick_b__7_0(EventInfoRepairComponent_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 0;
}