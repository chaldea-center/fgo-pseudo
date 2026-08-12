void EventInfoAssistSkillIconComponent___ctor(EventInfoAssistSkillIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// attributes: thunk
void EventInfoAssistSkillIconComponent__Awake(EventInfoAssistSkillIconComponent_o *this, const MethodInfo *method)
{
  EventInfoAssistSkillIconComponent__Redisplay(this, method);
}


void EventInfoAssistSkillIconComponent__Redisplay(EventInfoAssistSkillIconComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  AssistEntity_o *CurrentEntity; // x20
  UnityEngine_Object_o *skillIconSprite; // x21
  __int64 v8; // x1
  UISprite_o *v9; // x21
  int32_t skillId; // w22
  UnityEngine_GameObject_o *locked; // x19
  bool v12; // w1

  if ( (byte_5970A65 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_AssistMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5970A65 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_AssistMaster___);
  if ( !Master_object )
    goto LABEL_19;
  CurrentEntity = AssistMaster__GetCurrentEntity((AssistMaster_o *)Master_object, this->fields.assistId, 0);
  if ( !CurrentEntity )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_AssistMaster___);
    if ( Master_object )
    {
      CurrentEntity = AssistMaster__GetMinPriorityEntity((AssistMaster_o *)Master_object, this->fields.assistId, 0);
      if ( !CurrentEntity )
        return;
      goto LABEL_11;
    }
LABEL_19:
    sub_2213CDC(Master_object, v4);
  }
LABEL_11:
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
  {
    v9 = this->fields.skillIconSprite;
    skillId = CurrentEntity->fields.skillId;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
    AtlasManager__SetSkillIcon(v9, skillId, 0);
  }
  locked = this->fields.locked;
  v12 = !AssistEntity__IsOpen(CurrentEntity, 0);
  GameObjectHelper__SetActiveSafely(locked, v12, 0);
}