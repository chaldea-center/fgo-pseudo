void EventInfoEquipSkillPartsComponent___ctor(EventInfoEquipSkillPartsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoEquipSkillPartsComponent__Awake(EventInfoEquipSkillPartsComponent_o *this, const MethodInfo *method)
{
  ;
}


float EventInfoEquipSkillPartsComponent__GetHeight(EventInfoEquipSkillPartsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *skillDetailLabel; // x20
  __int64 v4; // x1
  float result; // s0
  struct UILabel_o *v6; // x0
  float v7; // s1

  if ( (byte_4CB77E8 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB77E8 = 1;
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


void EventInfoEquipSkillPartsComponent__Setup(
        EventInfoEquipSkillPartsComponent_o *this,
        EventEquipSkillPartsEntity_o *entity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *skillIconSprite; // x21
  __int64 SkillName; // x0
  __int64 v7; // x1
  UISprite_o *v8; // x21
  int32_t skillId; // w22
  bool IsOpen; // w0
  UILabel_o *partsNameLabel; // x22
  bool v12; // w21
  System_String_o *RenoPartsName; // x0
  UILabel_o *statusLabel; // x22
  System_String_o *RenoDetailDialogText; // x0
  int32_t skillLv; // w28
  UILabel_o *skillNameLabel; // x22
  System_String_o *v18; // x23
  System_Object_array *v19; // x24
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x25
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x25
  UILabel_o *skillChargeTurnLabel; // x22
  System_String_o *v27; // x23
  System_Object_array *v28; // x24
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x25
  UILabel_o *skillDetailLabel; // x22
  System_String_o *SkillDetail; // x0
  bool v34; // w21
  UILabel_o *releaseConditionMessageLabel; // x20
  System_String_o *ReleaseConditionMessage; // x0
  __int64 v37; // x0
  int32_t SkillChargeTurn; // [xsp+8h] [xbp-58h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CB77E7 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_5609/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_NAME"*/);
    sub_1C6BA08(&StringLiteral_5608/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_CHARGE_TURN"*/);
    byte_4CB77E7 = 1;
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SkillName = UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0);
  if ( (SkillName & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_28;
    v8 = this->fields.skillIconSprite;
    skillId = entity->fields.skillId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetSkillIcon(v8, skillId, 0);
  }
  else if ( !entity )
  {
    goto LABEL_28;
  }
  IsOpen = EventEquipSkillPartsEntity__IsOpen(entity, 0);
  partsNameLabel = this->fields.partsNameLabel;
  v12 = IsOpen;
  RenoPartsName = EventEquipSkillPartsEntity__GetRenoPartsName(entity, 0);
  UILabelHelper__SetTextSafely(partsNameLabel, RenoPartsName, 0);
  statusLabel = this->fields.statusLabel;
  RenoDetailDialogText = EventEquipSkillPartsEntity__GetRenoDetailDialogText(entity, 0);
  UILabelHelper__SetTextSafely(statusLabel, RenoDetailDialogText, 0);
  if ( v12 )
    skillLv = entity->fields.skillLv;
  else
    skillLv = 0;
  skillNameLabel = this->fields.skillNameLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5609/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_NAME"*/, 0);
  v19 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 2);
  SkillName = (__int64)EventEquipSkillPartsEntity__GetSkillName(entity, 0);
  if ( !v19 )
    goto LABEL_28;
  v22 = (Il2CppObject *)SkillName;
  if ( SkillName )
  {
    SkillName = sub_1C6BB44(SkillName, v19->obj.klass->_1.element_class);
    if ( !SkillName )
      goto LABEL_30;
  }
  if ( !LODWORD(v19->max_length) )
    goto LABEL_29;
  v19->m_Items[0] = v22;
  sub_1C6B9AC((CGThumbnailListItem_o *)v19->m_Items, (int32_t)v22, v20, v21);
  v39 = skillLv;
  SkillName = j_il2cpp_value_box_0(int_TypeInfo, &v39);
  v25 = (Il2CppObject *)SkillName;
  if ( SkillName )
  {
    SkillName = sub_1C6BB44(SkillName, v19->obj.klass->_1.element_class);
    if ( !SkillName )
    {
LABEL_30:
      v37 = sub_1C6BC84(SkillName);
      sub_1C6BB30(v37, 0);
    }
  }
  if ( LODWORD(v19->max_length) <= 1 )
    goto LABEL_29;
  v19->m_Items[1] = v25;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v19->m_Items[1], (int32_t)v25, v23, v24);
  UILabelHelper__SetTextSafely_44407596(skillNameLabel, v18, v19, 0);
  skillChargeTurnLabel = this->fields.skillChargeTurnLabel;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5608/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_CHARGE_TURN"*/, 0);
  v28 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 1);
  SkillChargeTurn = EventEquipSkillPartsEntity__GetSkillChargeTurn(entity, 0);
  SkillName = j_il2cpp_value_box_0(int_TypeInfo, &SkillChargeTurn);
  if ( !v28 )
LABEL_28:
    sub_1C6BC60(SkillName, v7);
  v31 = (Il2CppObject *)SkillName;
  if ( SkillName )
  {
    SkillName = sub_1C6BB44(SkillName, v28->obj.klass->_1.element_class);
    if ( !SkillName )
      goto LABEL_30;
  }
  if ( !LODWORD(v28->max_length) )
LABEL_29:
    sub_1C6BC68(SkillName);
  v28->m_Items[0] = v31;
  sub_1C6B9AC((CGThumbnailListItem_o *)v28->m_Items, (int32_t)v31, v29, v30);
  UILabelHelper__SetTextSafely_44407596(skillChargeTurnLabel, v27, v28, 0);
  skillDetailLabel = this->fields.skillDetailLabel;
  SkillDetail = EventEquipSkillPartsEntity__GetSkillDetail(entity, 0, 0);
  UILabelHelper__SetTextSafely(skillDetailLabel, SkillDetail, 0);
  v34 = !v12;
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.lockedSprite, v34, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.releaseConditionMessageLabel, v34, 0);
  releaseConditionMessageLabel = this->fields.releaseConditionMessageLabel;
  ReleaseConditionMessage = EventEquipSkillPartsEntity__GetReleaseConditionMessage(entity, 0);
  UILabelHelper__SetTextSafely(releaseConditionMessageLabel, ReleaseConditionMessage, 0);
}