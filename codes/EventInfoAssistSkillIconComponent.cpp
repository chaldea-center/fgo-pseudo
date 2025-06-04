void __fastcall EventInfoAssistSkillIconComponent___ctor(
        EventInfoAssistSkillIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall EventInfoAssistSkillIconComponent__Awake(
        EventInfoAssistSkillIconComponent_o *this,
        const MethodInfo *method)
{
  EventInfoAssistSkillIconComponent__Redisplay(this, method);
}


void __fastcall EventInfoAssistSkillIconComponent__Redisplay(
        EventInfoAssistSkillIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  AssistEntity_o *CurrentEntity; // x20
  UnityEngine_Object_o *skillIconSprite; // x21
  UISprite_o *v10; // x21
  int32_t skillId; // w22
  UnityEngine_GameObject_o *locked; // x19
  char v13; // w8

  if ( (byte_4B025B4 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMaster_AssistMaster___, v3);
    sub_1BC3008(&DataManager_TypeInfo, v4);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4B025B4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_AssistMaster___);
  if ( !Master_object )
    goto LABEL_19;
  CurrentEntity = AssistMaster__GetCurrentEntity((AssistMaster_o *)Master_object, this->fields.assistId, 0LL);
  if ( !CurrentEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_AssistMaster___);
    if ( Master_object )
    {
      CurrentEntity = AssistMaster__GetMinPriorityEntity((AssistMaster_o *)Master_object, this->fields.assistId, 0LL);
      if ( !CurrentEntity )
        return;
      goto LABEL_11;
    }
LABEL_19:
    sub_1BC3264(Master_object, v7);
  }
LABEL_11:
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v10 = this->fields.skillIconSprite;
    skillId = CurrentEntity->fields.skillId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetSkillIcon(v10, skillId, 0LL);
  }
  locked = this->fields.locked;
  v13 = ~AssistEntity__IsOpen(CurrentEntity, 0LL);
  GameObjectHelper__SetActiveSafely(locked, v13 & 1, 0LL);
}