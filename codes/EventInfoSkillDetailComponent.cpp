void EventInfoSkillDetailComponent___ctor(EventInfoSkillDetailComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoSkillDetailComponent__Awake(EventInfoSkillDetailComponent_o *this, const MethodInfo *method)
{
  ;
}


float EventInfoSkillDetailComponent__GetHeight(EventInfoSkillDetailComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *skillDetailLabel; // x20
  __int64 v4; // x1
  float result; // s0
  struct UILabel_o *v6; // x0
  float offsetHeight; // s9
  float v8; // s1
  float v9; // s8
  const MethodInfo *v10; // x1
  bool IsShowingPartition; // w0
  float partitionHeightOffset; // s1

  if ( (byte_4CB80F5 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB80F5 = 1;
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
  offsetHeight = this->fields.offsetHeight;
  v9 = v8;
  IsShowingPartition = EventInfoSkillDetailComponent__get_IsShowingPartition(this, v10);
  partitionHeightOffset = 0.0;
  if ( IsShowingPartition )
    partitionHeightOffset = this->fields.partitionHeightOffset;
  result = (float)(v9 + offsetHeight) + partitionHeightOffset;
  if ( this->fields.minHeight > result )
    return this->fields.minHeight;
  return result;
}


void EventInfoSkillDetailComponent__Setup(
        EventInfoSkillDetailComponent_o *this,
        ImagePartsGroupEntity_o *imagePartsGroupEntity,
        bool shouldShowPartition,
        const MethodInfo *method)
{
  UnityEngine_Object_o *skillIconSprite; // x22
  UISprite_o *v8; // x22
  int32_t SkillId; // w23
  UnityEngine_Object_o *skillNameLabel; // x22
  UILabel_o *v11; // x22
  System_String_o *SkillName; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *skillDetailLabel; // x22
  UILabel_o *v15; // x22
  UnityEngine_GameObject_o *partition; // x21
  float v17; // s1
  float v18; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB80F4 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB80F4 = 1;
  }
  if ( imagePartsGroupEntity )
  {
    skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
    {
      v8 = this->fields.skillIconSprite;
      SkillId = ImagePartsGroupEntity__GetSkillId(imagePartsGroupEntity, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetSkillIcon(v8, SkillId, 0);
    }
    skillNameLabel = (UnityEngine_Object_o *)this->fields.skillNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillNameLabel, 0, 0) )
    {
      v11 = this->fields.skillNameLabel;
      SkillName = ImagePartsGroupEntity__GetSkillName(imagePartsGroupEntity, 0);
      if ( !v11 )
        goto LABEL_25;
      UILabel__set_text(v11, SkillName, 0);
    }
    skillDetailLabel = (UnityEngine_Object_o *)this->fields.skillDetailLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(skillDetailLabel, 0, 0) )
      goto LABEL_23;
    v15 = this->fields.skillDetailLabel;
    SkillName = ImagePartsGroupEntity__GetSkillDetail(imagePartsGroupEntity, 0, 0);
    if ( v15 )
    {
      UILabel__set_text(v15, SkillName, 0);
      SkillName = (System_String_o *)this->fields.skillDetailLabel;
      if ( SkillName )
      {
        partition = this->fields.partition;
        ((void (__fastcall *)(System_String_o *, const MethodInfo *))SkillName->klass->vtable._22_System_IConvertible_ToDecimal.methodPtr)(
          SkillName,
          SkillName->klass->vtable._22_System_IConvertible_ToDecimal.method);
        SkillName = (System_String_o *)this->fields.skillDetailLabel;
        if ( SkillName )
        {
          v18 = v17;
          SkillName = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)SkillName, 0);
          if ( SkillName )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)SkillName, 0);
            GameObjectExtensions__SetLocalPositionY(
              partition,
              -(float)(this->fields.partitionOffset + (float)(v18 + localPosition.fields.y)),
              0);
LABEL_23:
            GameObjectHelper__SetActiveSafely(this->fields.partition, shouldShowPartition, 0);
            return;
          }
        }
      }
    }
LABEL_25:
    sub_1C6BC60(SkillName, v13);
  }
}


bool EventInfoSkillDetailComponent__get_IsShowingPartition(
        EventInfoSkillDetailComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *partition; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4CB80F3 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB80F3 = 1;
  }
  partition = (UnityEngine_Object_o *)this->fields.partition;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(partition, 0, 0) )
    return 0;
  v5 = this->fields.partition;
  if ( !v5 )
    sub_1C6BC60(0, v4);
  return UnityEngine_GameObject__get_activeSelf(v5, 0);
}