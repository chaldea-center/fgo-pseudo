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

  if ( (byte_5970A59 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5970A59 = 1;
  }
  skillDetailLabel = (UnityEngine_Object_o *)this->fields.skillDetailLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(skillDetailLabel, 0, 0) )
    return this->fields.minHeight;
  v6 = this->fields.skillDetailLabel;
  if ( !v6 )
    sub_2213CDC(0, v4);
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
  __int64 v6; // x1
  UnityEngine_Object_o *skillIconSprite; // x22
  bool v8; // w21
  __int64 v9; // x1
  UISprite_o *v10; // x22
  int32_t skillId; // w23
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  __int64 v15; // x1
  EventInfoAssistComponent___c_c *v16; // x8
  System_Collections_Generic_List_T__o *v17; // x22
  struct EventInfoAssistComponent___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__10_0; // x23
  Il2CppObject *v20; // x24
  struct EventInfoAssistComponent___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  int32_t v29; // w26
  UILabel_o *nameLabel; // x22
  System_String_o *v31; // x23
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_String_o *name; // x25
  Il2CppObject *v39; // x24
  __int64 v40; // x1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  Il2CppObject *v47; // x25
  UILabel_o *skillDetailLabel; // x22
  System_String_o *Detail; // x0
  UnityEngine_GameObject_o *stateUpIcon; // x22
  bool IsStateUpIconDisp; // w0
  UILabel_o *statusLabel; // x22
  System_String_o *RenoDetailDialogText; // x0
  UILabel_o *releaseConditionMessageLabel; // x22
  System_String_o *ReleaseConditionMessage; // x0
  __int64 v56; // x0
  int32_t v57; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5970A58 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_BasicHelper_Any_AssistEntity___);
    sub_2213A60(&Method_DataManager_GetMaster_AssistMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_Func_AssistEntity__bool__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventInfoAssistComponent___c__Setup_b__10_0__);
    sub_2213A60(&EventInfoAssistComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_5816/*"EVENT_INFO_ASSIST_NAME"*/);
    byte_5970A58 = 1;
  }
  if ( entity )
  {
    IsOpen = AssistEntity__IsOpen(entity, 0);
    skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
    v8 = IsOpen;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
    {
      v10 = this->fields.skillIconSprite;
      skillId = entity->fields.skillId;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9);
      AtlasManager__SetSkillIcon(v10, skillId, 0);
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_AssistMaster___);
    if ( !Master_object )
      goto LABEL_36;
    EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(
                               (AssistMaster_o *)Master_object,
                               entity->fields.id,
                               0);
    v16 = EventInfoAssistComponent___c_TypeInfo;
    v17 = (System_Collections_Generic_List_T__o *)EntityListFromAssistId;
    if ( !*(&EventInfoAssistComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoAssistComponent___c_TypeInfo, v15);
      v16 = EventInfoAssistComponent___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__10_0 = (System_Func_object__bool__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !*(&v16->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v16, v15);
        static_fields = EventInfoAssistComponent___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_AssistEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__10_0, v20, Method_EventInfoAssistComponent___c__Setup_b__10_0__, 0);
      v21 = EventInfoAssistComponent___c_TypeInfo->static_fields;
      v21->__9__10_0 = (struct System_Func_AssistEntity__bool__o *)_9__10_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21->__9__10_0, (int32_t)_9__10_0, v22, v23, v24, v25, v26, v27);
    }
    if ( !BasicHelper__Any_object_(
            v17,
            (System_Func_T__bool__o *)_9__10_0,
            (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_AssistEntity___) )
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
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.releaseConditionMessageLabel, !v8, 0);
      releaseConditionMessageLabel = this->fields.releaseConditionMessageLabel;
      ReleaseConditionMessage = AssistEntity__GetReleaseConditionMessage(entity, 0);
      UILabelHelper__SetTextSafely(releaseConditionMessageLabel, ReleaseConditionMessage, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.lockedSprite, !v8, 0);
      return;
    }
    v29 = v8 ? entity->fields.lv : 0;
    nameLabel = this->fields.nameLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_5816/*"EVENT_INFO_ASSIST_NAME"*/, 0);
    Master_object = (Il2CppObject *)sub_2213B20(object___TypeInfo, 2);
    if ( !Master_object )
LABEL_36:
      sub_2213CDC(Master_object, v13);
    name = entity->fields.name;
    v39 = Master_object;
    if ( !name
      || (Master_object = (Il2CppObject *)sub_2213BB4(entity->fields.name, Master_object->klass->_1.element_class)) != 0 )
    {
      if ( !LODWORD(v39[1].monitor) )
        goto LABEL_37;
      v39[2].klass = (Il2CppClass *)name;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v39[2], (int32_t)name, v32, v33, v34, v35, v36, v37);
      v57 = v29;
      Master_object = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v57);
      v47 = Master_object;
      if ( !Master_object
        || (Master_object = (Il2CppObject *)sub_2213BB4(Master_object, v39->klass->_1.element_class)) != 0 )
      {
        if ( ((__int64)v39[1].monitor & 0xFFFFFFFE) != 0 )
        {
          v39[2].monitor = v47;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v39[2].monitor, (int32_t)v47, v41, v42, v43, v44, v45, v46);
          UILabelHelper__SetTextSafely_51178244(nameLabel, v31, (System_Object_array *)v39, 0);
          goto LABEL_34;
        }
LABEL_37:
        sub_2213CE4(Master_object);
      }
    }
    v56 = sub_2213D00(Master_object, v40);
    sub_2213BA0(v56, 0);
  }
}


void EventInfoAssistComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970A5A & 1) == 0 )
  {
    sub_2213A60(&EventInfoAssistComponent___c_TypeInfo);
    byte_5970A5A = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventInfoAssistComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoAssistComponent___c_TypeInfo->static_fields->__9 = (struct EventInfoAssistComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoAssistComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
  return AssistEntity__IsStateUpIconDisp(v, 0);
}