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

  if ( (byte_4CEFA40 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFA40 = 1;
  }
  skillDetailLabel = (UnityEngine_Object_o *)this->fields.skillDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(skillDetailLabel, 0, 0) )
    return this->fields.minHeight;
  v6 = this->fields.skillDetailLabel;
  if ( !v6 )
    sub_1C7BD40(0, v4);
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
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  Il2CppObject *v26; // x25
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  Il2CppObject *v33; // x25
  UILabel_o *skillChargeTurnLabel; // x22
  System_String_o *v35; // x23
  System_Object_array *v36; // x24
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  Il2CppObject *v43; // x25
  UILabel_o *skillDetailLabel; // x22
  System_String_o *SkillDetail; // x0
  bool v46; // w21
  UILabel_o *releaseConditionMessageLabel; // x20
  System_String_o *ReleaseConditionMessage; // x0
  __int64 v49; // x0
  int32_t SkillChargeTurn; // [xsp+8h] [xbp-58h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CEFA3F & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&object___TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5626/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_NAME"*/);
    sub_1C7BAE8(&StringLiteral_5625/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_CHARGE_TURN"*/);
    byte_4CEFA3F = 1;
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
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5626/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_NAME"*/, 0);
  v19 = (System_Object_array *)sub_1C7BB90(object___TypeInfo, 2);
  SkillName = (__int64)EventEquipSkillPartsEntity__GetSkillName(entity, 0);
  if ( !v19 )
    goto LABEL_28;
  v26 = (Il2CppObject *)SkillName;
  if ( SkillName )
  {
    SkillName = sub_1C7BC24(SkillName, v19->obj.klass->_1.element_class);
    if ( !SkillName )
      goto LABEL_30;
  }
  if ( !LODWORD(v19->max_length) )
    goto LABEL_29;
  v19->m_Items[0] = v26;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v19->m_Items, (int32_t)v26, v20, v21, v22, v23, v24, v25);
  v51 = skillLv;
  SkillName = j_il2cpp_value_box_0(int_TypeInfo, &v51);
  v33 = (Il2CppObject *)SkillName;
  if ( SkillName )
  {
    SkillName = sub_1C7BC24(SkillName, v19->obj.klass->_1.element_class);
    if ( !SkillName )
    {
LABEL_30:
      v49 = sub_1C7BD64(SkillName);
      sub_1C7BC10(v49, 0);
    }
  }
  if ( LODWORD(v19->max_length) <= 1 )
    goto LABEL_29;
  v19->m_Items[1] = v33;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v19->m_Items[1], (int32_t)v33, v27, v28, v29, v30, v31, v32);
  UILabelHelper__SetTextSafely_44682560(skillNameLabel, v18, v19, 0);
  skillChargeTurnLabel = this->fields.skillChargeTurnLabel;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_5625/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_CHARGE_TURN"*/, 0);
  v36 = (System_Object_array *)sub_1C7BB90(object___TypeInfo, 1);
  SkillChargeTurn = EventEquipSkillPartsEntity__GetSkillChargeTurn(entity, 0);
  SkillName = j_il2cpp_value_box_0(int_TypeInfo, &SkillChargeTurn);
  if ( !v36 )
LABEL_28:
    sub_1C7BD40(SkillName, v7);
  v43 = (Il2CppObject *)SkillName;
  if ( SkillName )
  {
    SkillName = sub_1C7BC24(SkillName, v36->obj.klass->_1.element_class);
    if ( !SkillName )
      goto LABEL_30;
  }
  if ( !LODWORD(v36->max_length) )
LABEL_29:
    sub_1C7BD48(SkillName);
  v36->m_Items[0] = v43;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v36->m_Items, (int32_t)v43, v37, v38, v39, v40, v41, v42);
  UILabelHelper__SetTextSafely_44682560(skillChargeTurnLabel, v35, v36, 0);
  skillDetailLabel = this->fields.skillDetailLabel;
  SkillDetail = EventEquipSkillPartsEntity__GetSkillDetail(entity, 0, 0);
  UILabelHelper__SetTextSafely(skillDetailLabel, SkillDetail, 0);
  v46 = !v12;
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.lockedSprite, v46, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.releaseConditionMessageLabel, v46, 0);
  releaseConditionMessageLabel = this->fields.releaseConditionMessageLabel;
  ReleaseConditionMessage = EventEquipSkillPartsEntity__GetReleaseConditionMessage(entity, 0);
  UILabelHelper__SetTextSafely(releaseConditionMessageLabel, ReleaseConditionMessage, 0);
}