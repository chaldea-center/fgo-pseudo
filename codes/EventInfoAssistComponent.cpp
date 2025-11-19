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
  __int64 v4; // x1
  float result; // s0
  struct UILabel_o *v6; // x0
  float v7; // s1

  if ( (byte_4CB6666 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB6666 = 1;
  }
  skillDetailLabel = (UnityEngine_Object_o *)this->fields.skillDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(skillDetailLabel, 0, 0) )
    return this->fields.minHeight;
  v6 = this->fields.skillDetailLabel;
  if ( !v6 )
    sub_1C6BC60(0, v4);
  ((void (__fastcall *)(struct UILabel_o *, const MethodInfo *))v6->klass->vtable._22_get_localSize.methodPtr)(
    v6,
    v6->klass->vtable._22_get_localSize.method);
  result = v7 + this->fields.offsetHeight;
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
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  EventInfoAssistComponent___c_c *v13; // x8
  System_Collections_Generic_List_T__o *v14; // x22
  System_Func_object__bool__o *_9__10_0; // x23
  Il2CppObject *v16; // x24
  struct EventInfoAssistComponent___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w26
  UILabel_o *nameLabel; // x22
  System_String_o *v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_String_o *name; // x25
  Il2CppObject *v26; // x24
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x25
  UILabel_o *skillDetailLabel; // x22
  System_String_o *Detail; // x0
  UnityEngine_GameObject_o *stateUpIcon; // x22
  bool IsStateUpIconDisp; // w0
  UILabel_o *statusLabel; // x22
  System_String_o *RenoDetailDialogText; // x0
  bool v36; // w21
  UILabel_o *releaseConditionMessageLabel; // x22
  System_String_o *ReleaseConditionMessage; // x0
  __int64 v39; // x0
  int32_t v40; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CB6665 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_Any_AssistEntity___);
    sub_1C6BA08(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_EventInfoAssistComponent___c__Setup_b__10_0__);
    sub_1C6BA08(&EventInfoAssistComponent___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_5606/*"EVENT_INFO_ASSIST_NAME"*/);
    byte_4CB6665 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_AssistMaster___);
    if ( !Master_object )
      goto LABEL_36;
    EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(
                               (AssistMaster_o *)Master_object,
                               entity->fields.id,
                               0);
    v13 = EventInfoAssistComponent___c_TypeInfo;
    v14 = (System_Collections_Generic_List_T__o *)EntityListFromAssistId;
    if ( !EventInfoAssistComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoAssistComponent___c_TypeInfo);
      v13 = EventInfoAssistComponent___c_TypeInfo;
    }
    _9__10_0 = (System_Func_object__bool__o *)v13->static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = EventInfoAssistComponent___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v13->static_fields->__9;
      _9__10_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_AssistEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__10_0, v16, Method_EventInfoAssistComponent___c__Setup_b__10_0__, 0);
      static_fields = EventInfoAssistComponent___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_AssistEntity__bool__o *)_9__10_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v18, v19);
    }
    if ( !BasicHelper__Any_object_(
            v14,
            (System_Func_T__bool__o *)_9__10_0,
            (const MethodInfo_3124430 *)Method_BasicHelper_Any_AssistEntity___) )
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
      v36 = !v7;
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.releaseConditionMessageLabel, v36, 0);
      releaseConditionMessageLabel = this->fields.releaseConditionMessageLabel;
      ReleaseConditionMessage = AssistEntity__GetReleaseConditionMessage(entity, 0);
      UILabelHelper__SetTextSafely(releaseConditionMessageLabel, ReleaseConditionMessage, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.lockedSprite, v36, 0);
      return;
    }
    v20 = v7 ? entity->fields.lv : 0;
    nameLabel = this->fields.nameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5606/*"EVENT_INFO_ASSIST_NAME"*/, 0);
    Master_object = (Il2CppObject *)sub_1C6BAB0(object___TypeInfo, 2);
    if ( !Master_object )
LABEL_36:
      sub_1C6BC60(Master_object, v11);
    name = entity->fields.name;
    v26 = Master_object;
    if ( !name
      || (Master_object = (Il2CppObject *)sub_1C6BB44(entity->fields.name, Master_object->klass->_1.element_class)) != 0 )
    {
      if ( !LODWORD(v26[1].monitor) )
        goto LABEL_37;
      v26[2].klass = (Il2CppClass *)name;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v26[2], (int32_t)name, v23, v24);
      v40 = v20;
      Master_object = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
      v29 = Master_object;
      if ( !Master_object
        || (Master_object = (Il2CppObject *)sub_1C6BB44(Master_object, v26->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v26[1].monitor) > 1 )
        {
          v26[2].monitor = v29;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v26[2].monitor, (int32_t)v29, v27, v28);
          UILabelHelper__SetTextSafely_44407596(nameLabel, v22, (System_Object_array *)v26, 0);
          goto LABEL_34;
        }
LABEL_37:
        sub_1C6BC68(Master_object);
      }
    }
    v39 = sub_1C6BC84(Master_object);
    sub_1C6BB30(v39, 0);
  }
}


void EventInfoAssistComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB6667 & 1) == 0 )
  {
    sub_1C6BA08(&EventInfoAssistComponent___c_TypeInfo);
    byte_4CB6667 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(EventInfoAssistComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoAssistComponent___c_TypeInfo->static_fields->__9 = (struct EventInfoAssistComponent___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)EventInfoAssistComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, 0);
  return AssistEntity__IsStateUpIconDisp(v, 0);
}