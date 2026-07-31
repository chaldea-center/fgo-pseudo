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

  if ( (byte_593993B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593993B = 1;
  }
  skillDetailLabel = (UnityEngine_Object_o *)this->fields.skillDetailLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(skillDetailLabel, 0, 0) )
    return this->fields.minHeight;
  v6 = this->fields.skillDetailLabel;
  if ( !v6 )
    sub_21FFECC(0, v4);
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
  __int64 v16; // x1
  int32_t skillLv; // w27
  UILabel_o *skillNameLabel; // x22
  System_String_o *v19; // x23
  System_Object_array *v20; // x24
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  Il2CppObject *v27; // x25
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  Il2CppObject *v35; // x25
  UILabel_o *skillChargeTurnLabel; // x22
  System_String_o *v37; // x23
  System_Object_array *v38; // x24
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  Il2CppObject *v45; // x25
  UILabel_o *skillDetailLabel; // x22
  System_String_o *SkillDetail; // x0
  UILabel_o *releaseConditionMessageLabel; // x20
  System_String_o *ReleaseConditionMessage; // x0
  __int64 v50; // x0
  int32_t SkillChargeTurn; // [xsp+8h] [xbp-58h] BYREF
  int32_t v52; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_593993A & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_5807/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_NAME"*/);
    sub_21FFC50(&StringLiteral_5806/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_CHARGE_TURN"*/);
    byte_593993A = 1;
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, entity);
  SkillName = UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0);
  if ( (SkillName & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_28;
    v8 = this->fields.skillIconSprite;
    skillId = entity->fields.skillId;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7);
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5807/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_NAME"*/, 0);
  v20 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 2);
  SkillName = (__int64)EventEquipSkillPartsEntity__GetSkillName(entity, 0);
  if ( !v20 )
    goto LABEL_28;
  v27 = (Il2CppObject *)SkillName;
  if ( SkillName )
  {
    SkillName = sub_21FFDA4(SkillName, v20->obj.klass->_1.element_class);
    if ( !SkillName )
      goto LABEL_30;
  }
  if ( !LODWORD(v20->max_length) )
    goto LABEL_29;
  v20->m_Items[0] = v27;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v20->m_Items, (int32_t)v27, v21, v22, v23, v24, v25, v26);
  v52 = skillLv;
  SkillName = j_il2cpp_value_box_0(qword_594C070, &v52);
  v35 = (Il2CppObject *)SkillName;
  if ( SkillName )
  {
    SkillName = sub_21FFDA4(SkillName, v20->obj.klass->_1.element_class);
    if ( !SkillName )
    {
LABEL_30:
      v50 = sub_21FFEF0(SkillName, v28);
      sub_21FFD90(v50, 0);
    }
  }
  if ( (v20->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_29;
  v20->m_Items[1] = v35;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v20->m_Items[1], (int32_t)v35, v29, v30, v31, v32, v33, v34);
  UILabelHelper__SetTextSafely_51104760(skillNameLabel, v19, v20, 0);
  skillChargeTurnLabel = this->fields.skillChargeTurnLabel;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_5806/*"EVENT_INFO_EQUIP_SKILL_PARTS_SKILL_CHARGE_TURN"*/, 0);
  v38 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 1);
  SkillChargeTurn = EventEquipSkillPartsEntity__GetSkillChargeTurn(entity, 0);
  SkillName = j_il2cpp_value_box_0(qword_594C070, &SkillChargeTurn);
  if ( !v38 )
LABEL_28:
    sub_21FFECC(SkillName, v7);
  v45 = (Il2CppObject *)SkillName;
  if ( SkillName )
  {
    SkillName = sub_21FFDA4(SkillName, v38->obj.klass->_1.element_class);
    if ( !SkillName )
      goto LABEL_30;
  }
  if ( !LODWORD(v38->max_length) )
LABEL_29:
    sub_21FFED4(SkillName);
  v38->m_Items[0] = v45;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v38->m_Items, (int32_t)v45, v39, v40, v41, v42, v43, v44);
  UILabelHelper__SetTextSafely_51104760(skillChargeTurnLabel, v37, v38, 0);
  skillDetailLabel = this->fields.skillDetailLabel;
  SkillDetail = EventEquipSkillPartsEntity__GetSkillDetail(entity, 0, 0);
  UILabelHelper__SetTextSafely(skillDetailLabel, SkillDetail, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.lockedSprite, !v12, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.releaseConditionMessageLabel, !v12, 0);
  releaseConditionMessageLabel = this->fields.releaseConditionMessageLabel;
  ReleaseConditionMessage = EventEquipSkillPartsEntity__GetReleaseConditionMessage(entity, 0);
  UILabelHelper__SetTextSafely(releaseConditionMessageLabel, ReleaseConditionMessage, 0);
}