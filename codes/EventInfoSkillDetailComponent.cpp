void __fastcall EventInfoSkillDetailComponent___ctor(EventInfoSkillDetailComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoSkillDetailComponent__Awake(EventInfoSkillDetailComponent_o *this, const MethodInfo *method)
{
  ;
}


float __fastcall EventInfoSkillDetailComponent__GetHeight(
        EventInfoSkillDetailComponent_o *this,
        const MethodInfo *method)
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

  if ( (byte_4C23648 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C23648 = 1;
  }
  skillDetailLabel = (UnityEngine_Object_o *)this->fields.skillDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(skillDetailLabel, 0LL, 0LL) )
    return this->fields.minHeight;
  v6 = this->fields.skillDetailLabel;
  if ( !v6 )
    sub_1C3B9C0(0LL, v4);
  ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v6->klass->vtable._22_get_localSize.method)(
    v6,
    v6->klass->vtable._23_get_drawingDimensions.methodPtr);
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


void __fastcall EventInfoSkillDetailComponent__Setup(
        EventInfoSkillDetailComponent_o *this,
        ImagePartsGroupEntity_o *imagePartsGroupEntity,
        bool shouldShowPartition,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *skillIconSprite; // x22
  UISprite_o *v9; // x22
  int32_t SkillId; // w23
  UnityEngine_Object_o *skillNameLabel; // x22
  UILabel_o *v12; // x22
  System_String_o *SkillName; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *skillDetailLabel; // x22
  UILabel_o *v16; // x22
  UnityEngine_GameObject_o *partition; // x21
  float v18; // s1
  float v19; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23647 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, imagePartsGroupEntity);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    byte_4C23647 = 1;
  }
  if ( imagePartsGroupEntity )
  {
    skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
    {
      v9 = this->fields.skillIconSprite;
      SkillId = ImagePartsGroupEntity__GetSkillId(imagePartsGroupEntity, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetSkillIcon(v9, SkillId, 0LL);
    }
    skillNameLabel = (UnityEngine_Object_o *)this->fields.skillNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillNameLabel, 0LL, 0LL) )
    {
      v12 = this->fields.skillNameLabel;
      SkillName = ImagePartsGroupEntity__GetSkillName(imagePartsGroupEntity, 0LL);
      if ( !v12 )
        goto LABEL_25;
      UILabel__set_text(v12, SkillName, 0LL);
    }
    skillDetailLabel = (UnityEngine_Object_o *)this->fields.skillDetailLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(skillDetailLabel, 0LL, 0LL) )
      goto LABEL_23;
    v16 = this->fields.skillDetailLabel;
    SkillName = ImagePartsGroupEntity__GetSkillDetail(imagePartsGroupEntity, 0, 0LL);
    if ( v16 )
    {
      UILabel__set_text(v16, SkillName, 0LL);
      SkillName = (System_String_o *)this->fields.skillDetailLabel;
      if ( SkillName )
      {
        partition = this->fields.partition;
        ((void (__fastcall *)(System_String_o *, Il2CppMethodPointer))SkillName->klass->vtable._22_System_IConvertible_ToDecimal.method)(
          SkillName,
          SkillName->klass->vtable._23_System_IConvertible_ToDateTime.methodPtr);
        SkillName = (System_String_o *)this->fields.skillDetailLabel;
        if ( SkillName )
        {
          v19 = v18;
          SkillName = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)SkillName, 0LL);
          if ( SkillName )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)SkillName, 0LL);
            GameObjectExtensions__SetLocalPositionY(
              partition,
              -(float)(this->fields.partitionOffset + (float)(v19 + localPosition.fields.y)),
              0LL);
LABEL_23:
            GameObjectHelper__SetActiveSafely(this->fields.partition, shouldShowPartition, 0LL);
            return;
          }
        }
      }
    }
LABEL_25:
    sub_1C3B9C0(SkillName, v14);
  }
}


bool __fastcall EventInfoSkillDetailComponent__get_IsShowingPartition(
        EventInfoSkillDetailComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *partition; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4C23646 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C23646 = 1;
  }
  partition = (UnityEngine_Object_o *)this->fields.partition;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(partition, 0LL, 0LL) )
    return 0;
  v5 = this->fields.partition;
  if ( !v5 )
    sub_1C3B9C0(0LL, v4);
  return UnityEngine_GameObject__get_activeSelf(v5, 0LL);
}