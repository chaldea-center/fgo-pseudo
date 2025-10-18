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
  float result; // s0
  struct UILabel_o *v5; // x0
  float v6; // s1

  if ( (byte_4C444B1 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C444B1 = 1;
  }
  skillDetailLabel = (UnityEngine_Object_o *)this->fields.skillDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(skillDetailLabel, 0, 0) )
    return this->fields.minHeight;
  v5 = this->fields.skillDetailLabel;
  if ( !v5 )
    sub_1C372B4(0);
  ((void (__fastcall *)(struct UILabel_o *, const MethodInfo *))v5->klass->vtable._22_get_localSize.methodPtr)(
    v5,
    v5->klass->vtable._22_get_localSize.method);
  result = v6 + this->fields.offsetHeight;
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
  UISprite_o *v7; // x21
  int32_t skillId; // w22
  bool IsOpen; // w0
  UILabel_o *partsNameLabel; // x22
  bool v11; // w21
  System_String_o *RenoPartsName; // x0
  UILabel_o *statusLabel; // x22
  System_String_o *RenoDetailDialogText; // x0
  int32_t skillLv; // w28
  UILabel_o *skillNameLabel; // x22
  System_String_o *v17; // x23
  System_Object_array *v18; // x24
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x25
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *v30; // x25
  UILabel_o *skillChargeTurnLabel; // x22
  System_String_o *v32; // x23
  System_Object_array *v33; // x24
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x25
  UILabel_o *skillDetailLabel; // x22
  System_String_o *SkillDetail; // x0
  bool v45; // w21
  UILabel_o *releaseConditionMessageLabel; // x20
  System_String_o *ReleaseConditionMessage; // x0
  __int64 v48; // x0
  int32_t SkillChargeTurn; // [xsp+8h] [xbp-58h] BYREF
  int32_t v50; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C444B0 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_5619/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_NAME"*/);
    sub_1C37058(&StringLiteral_5618/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_CHARGE_TURN"*/);
    byte_4C444B0 = 1;
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SkillName = UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0);
  if ( (SkillName & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_28;
    v7 = this->fields.skillIconSprite;
    skillId = entity->fields.skillId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetSkillIcon(v7, skillId, 0);
  }
  else if ( !entity )
  {
    goto LABEL_28;
  }
  IsOpen = EventEquipSkillPartsEntity__IsOpen(entity, 0);
  partsNameLabel = this->fields.partsNameLabel;
  v11 = IsOpen;
  RenoPartsName = EventEquipSkillPartsEntity__GetRenoPartsName(entity, 0);
  UILabelHelper__SetTextSafely(partsNameLabel, RenoPartsName, 0);
  statusLabel = this->fields.statusLabel;
  RenoDetailDialogText = EventEquipSkillPartsEntity__GetRenoDetailDialogText(entity, 0);
  UILabelHelper__SetTextSafely(statusLabel, RenoDetailDialogText, 0);
  if ( v11 )
    skillLv = entity->fields.skillLv;
  else
    skillLv = 0;
  skillNameLabel = this->fields.skillNameLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5619/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_NAME"*/, 0);
  v18 = (System_Object_array *)sub_1C37100(object___TypeInfo, 2);
  SkillName = (__int64)EventEquipSkillPartsEntity__GetSkillName(entity, 0);
  if ( !v18 )
    goto LABEL_28;
  v21 = (Il2CppObject *)SkillName;
  if ( SkillName )
  {
    SkillName = sub_1C37194(SkillName, v18->obj.klass->_1.element_class);
    if ( !SkillName )
      goto LABEL_30;
  }
  if ( !LODWORD(v18->max_length) )
    goto LABEL_29;
  v18->m_Items[0] = v21;
  sub_1C36FFC((CGThumbnailListItem_o *)v18->m_Items, (int32_t)v21, v19, v20);
  v50 = skillLv;
  SkillName = j_il2cpp_value_box_0(int_TypeInfo, &v50, v22, v23, v24, v25, v26, v27);
  v30 = (Il2CppObject *)SkillName;
  if ( SkillName )
  {
    SkillName = sub_1C37194(SkillName, v18->obj.klass->_1.element_class);
    if ( !SkillName )
    {
LABEL_30:
      v48 = sub_1C372D8(SkillName);
      sub_1C37180(v48, 0);
    }
  }
  if ( LODWORD(v18->max_length) <= 1 )
    goto LABEL_29;
  v18->m_Items[1] = v30;
  sub_1C36FFC((CGThumbnailListItem_o *)&v18->m_Items[1], (int32_t)v30, v28, v29);
  UILabelHelper__SetTextSafely_44159028(skillNameLabel, v17, v18, 0);
  skillChargeTurnLabel = this->fields.skillChargeTurnLabel;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_CHARGE_TURN"*/, 0);
  v33 = (System_Object_array *)sub_1C37100(object___TypeInfo, 1);
  SkillChargeTurn = EventEquipSkillPartsEntity__GetSkillChargeTurn(entity, 0);
  SkillName = j_il2cpp_value_box_0(int_TypeInfo, &SkillChargeTurn, v34, v35, v36, v37, v38, v39);
  if ( !v33 )
LABEL_28:
    sub_1C372B4(SkillName);
  v42 = (Il2CppObject *)SkillName;
  if ( SkillName )
  {
    SkillName = sub_1C37194(SkillName, v33->obj.klass->_1.element_class);
    if ( !SkillName )
      goto LABEL_30;
  }
  if ( !LODWORD(v33->max_length) )
LABEL_29:
    sub_1C372BC(SkillName);
  v33->m_Items[0] = v42;
  sub_1C36FFC((CGThumbnailListItem_o *)v33->m_Items, (int32_t)v42, v40, v41);
  UILabelHelper__SetTextSafely_44159028(skillChargeTurnLabel, v32, v33, 0);
  skillDetailLabel = this->fields.skillDetailLabel;
  SkillDetail = EventEquipSkillPartsEntity__GetSkillDetail(entity, 0, 0);
  UILabelHelper__SetTextSafely(skillDetailLabel, SkillDetail, 0);
  v45 = !v11;
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.lockedSprite, v45, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.releaseConditionMessageLabel, v45, 0);
  releaseConditionMessageLabel = this->fields.releaseConditionMessageLabel;
  ReleaseConditionMessage = EventEquipSkillPartsEntity__GetReleaseConditionMessage(entity, 0);
  UILabelHelper__SetTextSafely(releaseConditionMessageLabel, ReleaseConditionMessage, 0);
}