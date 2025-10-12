void EventInfoAssistComponent___ctor(EventInfoAssistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoAssistComponent__Awake(EventInfoAssistComponent_o *this, const MethodInfo *method)
{
  ;
}


float EventInfoAssistComponent__GetHeight(EventInfoAssistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *skillDetailLabel; // x20
  float result; // s0
  struct UILabel_o *v5; // x0
  float v6; // s1

  if ( (byte_4C37D4F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C37D4F = 1;
  }
  skillDetailLabel = (UnityEngine_Object_o *)this->fields.skillDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(skillDetailLabel, 0, 0) )
    return this->fields.minHeight;
  v5 = this->fields.skillDetailLabel;
  if ( !v5 )
    sub_1C32E7C(0);
  ((void (__fastcall *)(struct UILabel_o *, const MethodInfo *))v5->klass->vtable._22_get_localSize.methodPtr)(
    v5,
    v5->klass->vtable._22_get_localSize.method);
  result = v6 + this->fields.offsetHeight;
  if ( this->fields.minHeight > result )
    return this->fields.minHeight;
  return result;
}


void EventInfoAssistComponent__Setup(
        EventInfoAssistComponent_o *this,
        AssistEntity_o *entity,
        const MethodInfo *method)
{
  bool IsOpen; // w0
  UnityEngine_Object_o *skillIconSprite; // x22
  bool v7; // w21
  UISprite_o *v8; // x22
  int32_t skillId; // w23
  AssistMaster_o *Master_object; // x0
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  EventInfoAssistComponent___c_c *v12; // x8
  System_Collections_Generic_List_T__o *v13; // x22
  System_Func_object__bool__o *_9__10_0; // x23
  Il2CppObject *v15; // x24
  struct EventInfoAssistComponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w26
  UILabel_o *nameLabel; // x22
  System_String_o *v21; // x23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_String_o *name; // x25
  AssistMaster_o *v25; // x24
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  AssistMaster_o *v34; // x25
  UILabel_o *skillDetailLabel; // x22
  System_String_o *Detail; // x0
  UnityEngine_GameObject_o *stateUpIcon; // x22
  bool IsStateUpIconDisp; // w0
  UILabel_o *statusLabel; // x22
  System_String_o *RenoDetailDialogText; // x0
  bool v41; // w21
  UILabel_o *releaseConditionMessageLabel; // x22
  System_String_o *ReleaseConditionMessage; // x0
  __int64 v44; // x0
  int32_t v45; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C37D4E & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_BasicHelper_Any_AssistEntity___);
    sub_1C32C20(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_EventInfoAssistComponent___c__Setup_b__10_0__);
    sub_1C32C20(&EventInfoAssistComponent___c_TypeInfo);
    sub_1C32C20(&StringLiteral_5615/*"EVENT_INFO_ASSIST_NAME"*/);
    byte_4C37D4E = 1;
  }
  if ( entity )
  {
    IsOpen = AssistEntity__IsOpen(entity, 0);
    skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
    v7 = IsOpen;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
    {
      v8 = this->fields.skillIconSprite;
      skillId = entity->fields.skillId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetSkillIcon(v8, skillId, 0);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (AssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_AssistMaster___);
    if ( !Master_object )
      goto LABEL_36;
    EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(Master_object, entity->fields.id, 0);
    v12 = EventInfoAssistComponent___c_TypeInfo;
    v13 = (System_Collections_Generic_List_T__o *)EntityListFromAssistId;
    if ( !EventInfoAssistComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoAssistComponent___c_TypeInfo);
      v12 = EventInfoAssistComponent___c_TypeInfo;
    }
    _9__10_0 = (System_Func_object__bool__o *)v12->static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = EventInfoAssistComponent___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__10_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_AssistEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__10_0, v15, Method_EventInfoAssistComponent___c__Setup_b__10_0__, 0);
      static_fields = EventInfoAssistComponent___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_AssistEntity__bool__o *)_9__10_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v17, v18);
    }
    if ( !BasicHelper__Any_object_(
            v13,
            (System_Func_T__bool__o *)_9__10_0,
            (const MethodInfo_30C6790 *)Method_BasicHelper_Any_AssistEntity___) )
    {
      UILabelHelper__SetTextSafely(this->fields.nameLabel, entity->fields.name, 0);
LABEL_34:
      skillDetailLabel = this->fields.skillDetailLabel;
      Detail = AssistEntity__GetDetail(entity, 0, 0);
      UILabelHelper__SetTextSafely(skillDetailLabel, Detail, 0);
      stateUpIcon = this->fields.stateUpIcon;
      IsStateUpIconDisp = AssistEntity__IsStateUpIconDisp(entity, 0);
      GameObjectHelper__SetActiveSafely(stateUpIcon, IsStateUpIconDisp, 0);
      statusLabel = this->fields.statusLabel;
      RenoDetailDialogText = AssistEntity__GetRenoDetailDialogText(entity, 0);
      UILabelHelper__SetTextSafely(statusLabel, RenoDetailDialogText, 0);
      v41 = !v7;
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.releaseConditionMessageLabel, v41, 0);
      releaseConditionMessageLabel = this->fields.releaseConditionMessageLabel;
      ReleaseConditionMessage = AssistEntity__GetReleaseConditionMessage(entity, 0);
      UILabelHelper__SetTextSafely(releaseConditionMessageLabel, ReleaseConditionMessage, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.lockedSprite, v41, 0);
      return;
    }
    v19 = v7 ? entity->fields.lv : 0;
    nameLabel = this->fields.nameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5615/*"EVENT_INFO_ASSIST_NAME"*/, 0);
    Master_object = (AssistMaster_o *)sub_1C32CC8(object___TypeInfo, 2);
    if ( !Master_object )
LABEL_36:
      sub_1C32E7C(Master_object);
    name = entity->fields.name;
    v25 = Master_object;
    if ( !name
      || (Master_object = (AssistMaster_o *)sub_1C32D5C(entity->fields.name, Master_object->klass->_1.element_class)) != 0 )
    {
      if ( !LODWORD(v25->fields._MasterName_k__BackingField) )
        goto LABEL_37;
      *(_QWORD *)&v25->fields.revision = name;
      sub_1C32BC4((CGThumbnailListItem_o *)&v25->fields.revision, (int32_t)name, v22, v23);
      v45 = v19;
      Master_object = (AssistMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v26, v27, v28, v29, v30, v31);
      v34 = Master_object;
      if ( !Master_object
        || (Master_object = (AssistMaster_o *)sub_1C32D5C(Master_object, v25->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v25->fields._MasterName_k__BackingField) > 1 )
        {
          v25->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)v34;
          sub_1C32BC4((CGThumbnailListItem_o *)&v25->fields.list, (int32_t)v34, v32, v33);
          UILabelHelper__SetTextSafely_44056924(nameLabel, v21, (System_Object_array *)v25, 0);
          goto LABEL_34;
        }
LABEL_37:
        sub_1C32E84(Master_object);
      }
    }
    v44 = sub_1C32EA0(Master_object);
    sub_1C32D48(v44, 0);
  }
}


void EventInfoAssistComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37D50 & 1) == 0 )
  {
    sub_1C32C20(&EventInfoAssistComponent___c_TypeInfo);
    byte_4C37D50 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventInfoAssistComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoAssistComponent___c_TypeInfo->static_fields->__9 = (struct EventInfoAssistComponent___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)EventInfoAssistComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventInfoAssistComponent___c___ctor(EventInfoAssistComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoAssistComponent___c___Setup_b__10_0(
        EventInfoAssistComponent___c_o *this,
        AssistEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C32E7C(this);
  return AssistEntity__IsStateUpIconDisp(v, 0);
}