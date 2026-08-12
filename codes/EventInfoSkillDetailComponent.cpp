void EventInfoSkillDetailComponent___ctor(EventInfoSkillDetailComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoSkillDetailComponent__Awake(EventInfoSkillDetailComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *imagePartsIconSprite; // x20

  if ( (byte_597263C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597263C = 1;
  }
  imagePartsIconSprite = (UnityEngine_Object_o *)this->fields.imagePartsIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__op_Inequality(imagePartsIconSprite, 0, 0);
  System_String__IsNullOrEmpty(this->fields.imagePartsIconSpriteNameFormat, 0);
}


float EventInfoSkillDetailComponent__GetHeight(EventInfoSkillDetailComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *skillDetailLabel; // x20
  __int64 v4; // x1
  float result; // s0
  struct UILabel_o *v6; // x0
  const MethodInfo *v7; // x1
  float v8; // s1
  float offsetHeight; // s9
  float skillDetailMinHeight; // s8
  bool IsShowingPartition; // w0
  float partitionHeightOffset; // s0

  if ( (byte_597263E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597263E = 1;
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
  offsetHeight = this->fields.offsetHeight;
  if ( v8 <= this->fields.skillDetailMinHeight )
    skillDetailMinHeight = this->fields.skillDetailMinHeight;
  else
    skillDetailMinHeight = v8;
  IsShowingPartition = EventInfoSkillDetailComponent__get_IsShowingPartition(this, v7);
  partitionHeightOffset = 0.0;
  if ( IsShowingPartition )
    partitionHeightOffset = this->fields.partitionHeightOffset;
  result = (float)(offsetHeight + skillDetailMinHeight) + partitionHeightOffset;
  if ( this->fields.minHeight > result )
    return this->fields.minHeight;
  return result;
}


void EventInfoSkillDetailComponent__Setup(
        EventInfoSkillDetailComponent_o *this,
        ImagePartsGroupEntity_o *imagePartsGroupEntity,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        bool shouldShowPartition,
        const MethodInfo *method)
{
  UnityEngine_Object_o *imagePartsIconSprite; // x23
  __int64 v10; // x1
  System_String_o *imagePartsIconSpriteNameFormat; // x23
  Il2CppObject *v12; // x24
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  UnityEngine_Object_o *skillIconSprite; // x22
  UISprite_o *v16; // x22
  __int64 v17; // x1
  int32_t SkillId; // w23
  UILabel_o *skillNameLabel; // x22
  System_String_o *SkillName; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *skillDetailLabel; // x22
  UILabel_o *v23; // x22
  System_String_o *SkillDetail; // x0
  __int64 v25; // x1
  float v26; // s1
  float skillDetailMinHeight; // s8
  UnityEngine_GameObject_o *partition; // x21
  float v29; // s1
  int32_t imageValue; // [xsp+8h] [xbp-58h] BYREF
  int32_t typeValue; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_597263D & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597263D = 1;
  }
  if ( imagePartsGroupEntity )
  {
    imagePartsIconSprite = (UnityEngine_Object_o *)this->fields.imagePartsIconSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, imagePartsGroupEntity);
    if ( UnityEngine_Object__op_Inequality(imagePartsIconSprite, 0, 0) )
    {
      imagePartsIconSpriteNameFormat = this->fields.imagePartsIconSpriteNameFormat;
      typeValue = imagePartsGroupEntity->fields.typeValue;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &typeValue);
      imageValue = imagePartsGroupEntity->fields.imageValue;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &imageValue);
      v14 = System_String__Format_75697880(imagePartsIconSpriteNameFormat, v12, v13, 0);
      UISpriteHelper__SetSprite_51178964(
        this->fields.imagePartsIconSprite,
        v14,
        (System_Collections_Generic_IEnumerable_UIAtlas__o *)atlasList,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        0);
    }
    skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
    {
      v16 = this->fields.skillIconSprite;
      SkillId = ImagePartsGroupEntity__GetSkillId(imagePartsGroupEntity, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17);
      AtlasManager__SetSkillIcon(v16, SkillId, 0);
    }
    skillNameLabel = this->fields.skillNameLabel;
    SkillName = ImagePartsGroupEntity__GetSkillName(imagePartsGroupEntity, 0);
    UILabelHelper__SetTextSafely(skillNameLabel, SkillName, 0);
    skillDetailLabel = (UnityEngine_Object_o *)this->fields.skillDetailLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( UnityEngine_Object__op_Inequality(skillDetailLabel, 0, 0) )
    {
      v23 = this->fields.skillDetailLabel;
      SkillDetail = ImagePartsGroupEntity__GetSkillDetail(imagePartsGroupEntity, 0, 0);
      if ( !v23
        || (UILabel__set_text(v23, SkillDetail, 0), (SkillDetail = (System_String_o *)this->fields.skillDetailLabel) == 0)
        || ((((void (__fastcall *)(System_String_o *, const MethodInfo *))SkillDetail->klass->vtable._22_System_IConvertible_ToDecimal.methodPtr)(
               SkillDetail,
               SkillDetail->klass->vtable._22_System_IConvertible_ToDecimal.method),
             SkillDetail = (System_String_o *)this->fields.skillDetailLabel,
             v26 <= this->fields.skillDetailMinHeight)
          ? (skillDetailMinHeight = this->fields.skillDetailMinHeight)
          : (skillDetailMinHeight = v26),
            !SkillDetail
         || (partition = this->fields.partition,
             (SkillDetail = (System_String_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)SkillDetail,
                                                 0)) == 0)) )
      {
        sub_2213CDC(SkillDetail, v25);
      }
      v29 = COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)SkillDetail, 0).fields.y));
      GameObjectExtensions__SetLocalPositionY(
        partition,
        -(float)(this->fields.partitionOffset + (float)(skillDetailMinHeight + v29)),
        0);
    }
    GameObjectHelper__SetActiveSafely(this->fields.partition, shouldShowPartition, 0);
  }
}


bool EventInfoSkillDetailComponent__get_IsShowingPartition(
        EventInfoSkillDetailComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *partition; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_597263B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597263B = 1;
  }
  partition = (UnityEngine_Object_o *)this->fields.partition;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(partition, 0, 0) )
    return 0;
  v5 = this->fields.partition;
  if ( !v5 )
    sub_2213CDC(0, v4);
  return UnityEngine_GameObject__get_activeSelf(v5, 0);
}