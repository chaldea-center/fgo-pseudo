void __fastcall EventInfoEquipSkillPartsComponent___ctor(
        EventInfoEquipSkillPartsComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoEquipSkillPartsComponent__Awake(
        EventInfoEquipSkillPartsComponent_o *this,
        const MethodInfo *method)
{
  ;
}


float __fastcall EventInfoEquipSkillPartsComponent__GetHeight(
        EventInfoEquipSkillPartsComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *skillDetailLabel; // x20
  __int64 v4; // x1
  float result; // s0
  struct UILabel_o *v6; // x0
  float v7; // s1

  if ( (byte_4B035A4 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B035A4 = 1;
  }
  skillDetailLabel = (UnityEngine_Object_o *)this->fields.skillDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(skillDetailLabel, 0LL, 0LL) )
    return this->fields.minHeight;
  v6 = this->fields.skillDetailLabel;
  if ( !v6 )
    sub_1BC3264(0LL, v4);
  ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v6->klass->vtable._22_get_localSize.method)(
    v6,
    v6->klass->vtable._23_get_drawingDimensions.methodPtr);
  result = v7 + this->fields.offsetHeight;
  if ( this->fields.minHeight > result )
    return this->fields.minHeight;
  return result;
}


void __fastcall EventInfoEquipSkillPartsComponent__Setup(
        EventInfoEquipSkillPartsComponent_o *this,
        EventEquipSkillPartsEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *skillIconSprite; // x21
  __int64 SkillName; // x0
  __int64 v13; // x1
  UISprite_o *v14; // x21
  int32_t skillId; // w22
  bool IsOpen; // w0
  UILabel_o *partsNameLabel; // x22
  bool v18; // w21
  System_String_o *RenoPartsName; // x0
  UILabel_o *statusLabel; // x22
  System_String_o *RenoDetailDialogText; // x0
  int32_t skillLv; // w28
  UILabel_o *skillNameLabel; // x22
  System_String_o *v24; // x23
  System_Object_array *v25; // x24
  __int64 v26; // x2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x25
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x25
  UILabel_o *skillChargeTurnLabel; // x22
  System_String_o *v35; // x23
  System_Object_array *v36; // x24
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  const MethodInfo *v40; // x3
  Il2CppObject *v41; // x25
  UILabel_o *skillDetailLabel; // x22
  System_String_o *SkillDetail; // x0
  bool v44; // w21
  UILabel_o *releaseConditionMessageLabel; // x20
  System_String_o *ReleaseConditionMessage; // x0
  __int64 v47; // x0
  int32_t SkillChargeTurn; // [xsp+8h] [xbp-58h] BYREF
  int32_t v49; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B035A3 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, entity);
    sub_1BC3008(&int_TypeInfo, v5);
    sub_1BC3008(&LocalizationManager_TypeInfo, v6);
    sub_1BC3008(&object___TypeInfo, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_5569/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_NAME"*/, v9);
    sub_1BC3008(&StringLiteral_5568/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_CHARGE_TURN"*/, v10);
    byte_4B035A3 = 1;
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SkillName = UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL);
  if ( (SkillName & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_28;
    v14 = this->fields.skillIconSprite;
    skillId = entity->fields.skillId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetSkillIcon(v14, skillId, 0LL);
  }
  else if ( !entity )
  {
    goto LABEL_28;
  }
  IsOpen = EventEquipSkillPartsEntity__IsOpen(entity, 0LL);
  partsNameLabel = this->fields.partsNameLabel;
  v18 = IsOpen;
  RenoPartsName = EventEquipSkillPartsEntity__GetRenoPartsName(entity, 0LL);
  UILabelHelper__SetTextSafely(partsNameLabel, RenoPartsName, 0LL);
  statusLabel = this->fields.statusLabel;
  RenoDetailDialogText = EventEquipSkillPartsEntity__GetRenoDetailDialogText(entity, 0LL);
  UILabelHelper__SetTextSafely(statusLabel, RenoDetailDialogText, 0LL);
  if ( v18 )
    skillLv = entity->fields.skillLv;
  else
    skillLv = 0;
  skillNameLabel = this->fields.skillNameLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5569/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_NAME"*/, 0LL);
  v25 = (System_Object_array *)sub_1BC30B0(object___TypeInfo, 2LL);
  SkillName = (__int64)EventEquipSkillPartsEntity__GetSkillName(entity, 0LL);
  if ( !v25 )
    goto LABEL_28;
  v28 = (Il2CppObject *)SkillName;
  if ( SkillName )
  {
    SkillName = sub_1BC3144(SkillName, v25->obj.klass->_1.element_class);
    if ( !SkillName )
      goto LABEL_30;
  }
  if ( !v25->max_length )
    goto LABEL_29;
  v25->m_Items[0] = v28;
  sub_1BC2FAC((CGThumbnailListItem_o *)v25->m_Items, (int32_t)v28, v26, v27);
  v49 = skillLv;
  SkillName = j_il2cpp_value_box_0(int_TypeInfo, &v49, v29, v30, v31);
  v33 = (Il2CppObject *)SkillName;
  if ( SkillName )
  {
    SkillName = sub_1BC3144(SkillName, v25->obj.klass->_1.element_class);
    if ( !SkillName )
    {
LABEL_30:
      v47 = sub_1BC3288(SkillName);
      sub_1BC3130(v47, 0LL);
    }
  }
  if ( v25->max_length <= 1 )
    goto LABEL_29;
  v25->m_Items[1] = v33;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v25->m_Items[1], (int32_t)v33, v26, v32);
  UILabelHelper__SetTextSafely_43121888(skillNameLabel, v24, v25, 0LL);
  skillChargeTurnLabel = this->fields.skillChargeTurnLabel;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_5568/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_CHARGE_TURN"*/, 0LL);
  v36 = (System_Object_array *)sub_1BC30B0(object___TypeInfo, 1LL);
  SkillChargeTurn = EventEquipSkillPartsEntity__GetSkillChargeTurn(entity, 0LL);
  SkillName = j_il2cpp_value_box_0(int_TypeInfo, &SkillChargeTurn, v37, v38, v39);
  if ( !v36 )
LABEL_28:
    sub_1BC3264(SkillName, v13);
  v41 = (Il2CppObject *)SkillName;
  if ( SkillName )
  {
    SkillName = sub_1BC3144(SkillName, v36->obj.klass->_1.element_class);
    if ( !SkillName )
      goto LABEL_30;
  }
  if ( !v36->max_length )
LABEL_29:
    sub_1BC326C(SkillName, v13, v26);
  v36->m_Items[0] = v41;
  sub_1BC2FAC((CGThumbnailListItem_o *)v36->m_Items, (int32_t)v41, v26, v40);
  UILabelHelper__SetTextSafely_43121888(skillChargeTurnLabel, v35, v36, 0LL);
  skillDetailLabel = this->fields.skillDetailLabel;
  SkillDetail = EventEquipSkillPartsEntity__GetSkillDetail(entity, 0, 0LL);
  UILabelHelper__SetTextSafely(skillDetailLabel, SkillDetail, 0LL);
  v44 = !v18;
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.lockedSprite, v44, 0LL);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.releaseConditionMessageLabel, v44, 0LL);
  releaseConditionMessageLabel = this->fields.releaseConditionMessageLabel;
  ReleaseConditionMessage = EventEquipSkillPartsEntity__GetReleaseConditionMessage(entity, 0LL);
  UILabelHelper__SetTextSafely(releaseConditionMessageLabel, ReleaseConditionMessage, 0LL);
}