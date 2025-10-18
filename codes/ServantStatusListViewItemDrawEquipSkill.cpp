void ServantStatusListViewItemDrawEquipSkill___cctor(const MethodInfo *method)
{
  if ( (byte_4C3FB78 & 1) == 0 )
  {
    sub_1C37058(&ServantStatusListViewItemDrawEquipSkill_TypeInfo);
    byte_4C3FB78 = 1;
  }
  *ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawEquipSkill_StaticFields)0x2800000012LL;
}


void ServantStatusListViewItemDrawEquipSkill___ctor(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct SkillIconComponent_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIRangeLabel_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UILabel_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C3FB77 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&UnityEngine_GameObject___TypeInfo);
    sub_1C37058(&SkillIconComponent___TypeInfo);
    sub_1C37058(&UILabel___TypeInfo);
    sub_1C37058(&UIRangeLabel___TypeInfo);
    byte_4C3FB77 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C37100(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.skillBaseList, (int32_t)v4, v5, v6);
  v7 = (struct SkillIconComponent_array *)sub_1C37100(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.skillIconList, (int32_t)v7, v8, v9);
  v10 = (struct UIRangeLabel_array *)sub_1C37100(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.skillTitleRangeLabelList, (int32_t)v10, v11, v12);
  v13 = (struct UILabel_array *)sub_1C37100(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.skillExplanationLabelList, (int32_t)v13, v14, v15);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawEquipSkill__Awake(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  ServantStatusListViewItemDrawEquipSkill_o *v3; // x19
  struct UnityEngine_GameObject_array *v4; // x8
  float y; // s8
  unsigned int v6; // w9
  struct UISprite_o *baseSprite; // x9
  int v8; // w20
  float v9; // s1
  struct UnityEngine_GameObject_array *v10; // x8
  int v11; // w9
  float v12; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_24;
  v3 = this;
  if ( SLODWORD(skillBaseList->max_length) >= 2 )
  {
    this = (ServantStatusListViewItemDrawEquipSkill_o *)skillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0);
    if ( !this )
      goto LABEL_24;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v4 = v3->fields.skillBaseList;
    if ( !v4 )
      goto LABEL_24;
    if ( LODWORD(v4->max_length) <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)v4->m_Items[1];
    if ( !this )
      goto LABEL_24;
    y = localPosition.fields.y;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0);
    if ( !this )
      goto LABEL_24;
    v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    skillBaseList = v3->fields.skillBaseList;
    v6 = (float)(y - v14.fields.y) == INFINITY ? 0x80000000 : (int)(float)(y - v14.fields.y);
    v3->fields.skillPitch = v6;
    if ( !skillBaseList )
      goto LABEL_24;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)v3->fields.titleSprite;
  v8 = v3->fields.skillPitch * LODWORD(skillBaseList->max_length);
  v9 = (float)(baseSprite->fields.mHeight - v8);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v9;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
  if ( !this )
    goto LABEL_24;
  v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v10 = v3->fields.skillBaseList;
  v11 = v8 >= 0 ? v8 : v8 + 1;
  v12 = (float)(v11 >> 1);
  v3->fields.titleBasePosition.fields.x = v15.fields.x;
  v3->fields.titleBasePosition.fields.y = v15.fields.y - v12;
  v3->fields.titleBasePosition.fields.z = v15.fields.z;
  if ( !v10 )
LABEL_24:
    sub_1C372B4(this);
  if ( !LODWORD(v10->max_length) )
LABEL_25:
    sub_1C372BC(this);
  this = (ServantStatusListViewItemDrawEquipSkill_o *)v10->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)this,
                                                        0);
  if ( !this )
    goto LABEL_24;
  v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.skillBasePosition.fields.x = v16.fields.x;
  v3->fields.skillBasePosition.fields.y = v16.fields.y - v12;
  v3->fields.skillBasePosition.fields.z = v16.fields.z;
}


int32_t ServantStatusListViewItemDrawEquipSkill__GetKind(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        const MethodInfo *method)
{
  return 12;
}


void ServantStatusListViewItemDrawEquipSkill__SetItem(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  System_String_o **v6; // x8
  System_String_o *v7; // x22
  UILabel_o *explanationLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *changeSkillBase; // x21
  struct SkillIconComponent_array *skillIconList; // x8
  il2cpp_array_size_t max_length; // x10
  unsigned __int64 max_length_low; // x9
  int v14; // w28
  signed __int64 v15; // x8
  SkillInfo_o *v16; // x13
  SkillInfo_o *v17; // x21
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  int v19; // w22
  CGThumbnailListItem_o *p_explanation; // x26
  __int64 v21; // x24
  unsigned __int64 v22; // x19
  unsigned __int64 v23; // x9
  __int64 v24; // x8
  struct UILabel_array *skillExplanationLabelList; // x9
  ServantStatusListViewItemDrawEquipSkill_c *v26; // x0
  SkillInfo_o *v27; // x23
  CGThumbnailListItem_o *v28; // x21
  UILabel_o *v29; // x25
  System_String_o *v30; // x26
  struct UILabel_array *v31; // x8
  __int64 v32; // x8
  int v33; // w26
  int v34; // w19
  UnityEngine_Object_o *equipSkillMask; // x25
  struct UILabel_array *v36; // x8
  UILabel_o *v37; // x8
  UnityEngine_Object_o *equipSkillMaskLabel; // x25
  struct UILabel_array *v39; // x8
  UILabel_o *v40; // x8
  int v41; // w8
  int v42; // w25
  UnityEngine_Transform_o *transform; // x0
  System_String_o **v44; // x9
  UILabel_o *v45; // x25
  System_String_o *v46; // x26
  UnityEngine_Object_o *changeSkillExplanationLabel; // x25
  int32_t Value; // w25
  System_String_o *EffectExplanation; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_String_o *Name; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  ServantStatusListViewItemDrawEquipSkill_c *v55; // x0
  UILabel_o *v56; // x25
  System_String_o *klass; // x26
  struct UILabel_o *v58; // x8
  struct UILabel_array *v59; // x9
  UILabel_o *v60; // x9
  int v61; // w8
  UnityEngine_Object_o *changeSkillTypeLabel; // x25
  UILabel_o *v63; // x25
  int32_t skillPitch; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x23
  float v69; // s8
  int32_t v70; // w1
  int32_t v71; // w1
  int v72; // w19
  float v73; // s8
  float v74; // s11
  float v75; // s9
  float v76; // s10
  struct UnityEngine_GameObject_array *v77; // x8
  float v78; // s8
  float v79; // s9
  unsigned int v80; // w22
  float v81; // s10
  unsigned int v82; // w10
  SkillInfo_o *v83; // x23
  struct UnityEngine_GameObject_array *v84; // x8
  struct SkillIconComponent_array *v85; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  _BOOL4 v87; // w23
  struct UILabel_array *v88; // x8
  UILabel_o *v89; // x8
  int32_t v90; // w23
  int32_t v91; // w9
  UnityEngine_Object_o *changeSkillIcon; // x24
  UnityEngine_Object_o *changeSkillTitleRangeLabel; // x24
  UnityEngine_Object_o *v94; // x23
  struct UILabel_array *v95; // x8
  UILabel_o *v96; // x8
  int mHeight; // w8
  int v98; // w9
  int v99; // w23
  UnityEngine_Transform_o *v100; // x0
  struct UILabel_o *v101; // x8
  int32_t v102; // w24
  UnityEngine_Object_o *v103; // x23
  UnityEngine_Object_o *v104; // x23
  CGThumbnailListItem_o *p_title; // [xsp+8h] [xbp-A8h]
  bool v106; // [xsp+14h] [xbp-9Ch]
  Il2CppObject *entity; // [xsp+20h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3FB76 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ServantStatusListViewItemDrawEquipSkill_TypeInfo);
    sub_1C37058(&SkillInfo_TypeInfo);
    sub_1C37058(&StringLiteral_11922/*"SERVANT_STATUS_EXPLANATION_GRAND_CHANGE_SKILL_PASSIVE"*/);
    sub_1C37058(&StringLiteral_6989/*"GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/);
    sub_1C37058(&StringLiteral_11934/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    sub_1C37058(&StringLiteral_6436/*"FOLLOWER_GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/);
    sub_1C37058(&StringLiteral_7001/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/);
    sub_1C37058(&StringLiteral_6990/*"GRAND_BOND_EQUIP_SKILL_INFO_ANOTHER_SKILL_HEADER"*/);
    byte_4C3FB76 = 1;
  }
  entity = 0;
  skillInfoList = 0;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  v106 = ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill(item, 0);
  if ( v106 && item->fields._IsMyEquip_k__BackingField )
    v6 = (System_String_o **)&StringLiteral_11922/*"SERVANT_STATUS_EXPLANATION_GRAND_CHANGE_SKILL_PASSIVE"*/;
  else
    v6 = (System_String_o **)&StringLiteral_11934/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  v7 = *v6;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v7, 0);
  if ( !explanationLabel )
    goto LABEL_205;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0, 0);
  changeSkillBase = (UnityEngine_Object_o *)this->fields.changeSkillBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(changeSkillBase, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = this->fields.changeSkillBase;
    if ( !gameObject )
      goto LABEL_205;
    UnityEngine_GameObject__SetActive(gameObject, v106, 0);
  }
  if ( !skillInfoList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_205;
  max_length = skillIconList->max_length;
  if ( (__int64)(max_length << 32) < 1 )
  {
    v14 = 0;
  }
  else
  {
    max_length_low = LODWORD(skillInfoList->max_length);
    v14 = 0;
    v15 = 0;
    do
    {
      if ( v15 < (int)max_length_low )
      {
        if ( v15 >= max_length_low )
LABEL_206:
          sub_1C372BC(gameObject);
        v16 = skillInfoList->m_Items[v15];
        if ( v16 && v16->fields.id >= 1 )
          v14 = v15 + 1;
      }
      ++v15;
    }
    while ( v15 < (int)max_length );
  }
  v17 = (SkillInfo_o *)sub_1C372A4(SkillInfo_TypeInfo);
  SkillInfo___ctor(v17, 0);
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_205;
  p_title = (CGThumbnailListItem_o *)&v17->fields.title;
  v19 = 0;
  p_explanation = (CGThumbnailListItem_o *)&v17->fields.explanation;
  v21 = 4;
  while ( 1 )
  {
    v22 = v21 - 4;
    if ( v21 - 4 >= SLODWORD(skillBaseList->max_length) )
      break;
    if ( skillInfoList )
    {
      v23 = LODWORD(skillInfoList->max_length);
      if ( (__int64)v22 < (int)v23 )
      {
        if ( v22 >= v23 )
          goto LABEL_206;
        v24 = *((_QWORD *)&skillInfoList->obj.klass + v21);
        if ( v24 )
        {
          if ( *(int *)(v24 + 16) >= 1 )
          {
            skillExplanationLabelList = this->fields.skillExplanationLabelList;
            if ( !skillExplanationLabelList )
              goto LABEL_205;
            if ( v22 >= LODWORD(skillExplanationLabelList->max_length) )
              goto LABEL_206;
            v26 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            v27 = v17;
            v28 = p_explanation;
            v29 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v21);
            v30 = *(System_String_o **)(v24 + 40);
            if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
              v26 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            }
            gameObject = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                       v29,
                                                       v30,
                                                       v26->static_fields->DETAIL_FONT_SIZE,
                                                       v26->static_fields->DETAIL_FONT_SIZE,
                                                       0);
            v31 = this->fields.skillExplanationLabelList;
            if ( !v31 )
              goto LABEL_205;
            if ( v22 >= LODWORD(v31->max_length) )
              goto LABEL_206;
            v32 = *((_QWORD *)&v31->obj.klass + v21);
            if ( !v32 )
              goto LABEL_205;
            v33 = *(_DWORD *)(v32 + 172);
            v34 = ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->ADJUST_HEIGHT + v33;
            if ( v21 == 4 )
            {
              equipSkillMask = (UnityEngine_Object_o *)this->fields.equipSkillMask;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(equipSkillMask, 0, 0) )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.equipSkillMask;
                if ( !gameObject )
                  goto LABEL_205;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !gameObject )
                  goto LABEL_205;
                UnityEngine_GameObject__SetActive(gameObject, v106, 0);
                if ( v106 )
                {
                  v36 = this->fields.skillExplanationLabelList;
                  if ( !v36 )
                    goto LABEL_205;
                  if ( !LODWORD(v36->max_length) )
                    goto LABEL_206;
                  v37 = v36->m_Items[0];
                  if ( !v37 )
                    goto LABEL_205;
                  if ( v37->fields.mHeight >= 71 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSkillMask;
                    if ( !gameObject )
                      goto LABEL_205;
                    UIWidget__set_height((UIWidget_o *)gameObject, v33 + 39, 0);
                  }
                }
              }
              equipSkillMaskLabel = (UnityEngine_Object_o *)this->fields.equipSkillMaskLabel;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(equipSkillMaskLabel, 0, 0) )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.equipSkillMaskLabel;
                if ( !gameObject )
                  goto LABEL_205;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !gameObject )
                  goto LABEL_205;
                UnityEngine_GameObject__SetActive(gameObject, v106, 0);
                if ( v106 )
                {
                  v39 = this->fields.skillExplanationLabelList;
                  if ( !v39 )
                    goto LABEL_205;
                  if ( !LODWORD(v39->max_length) )
                    goto LABEL_206;
                  v40 = v39->m_Items[0];
                  if ( !v40 )
                    goto LABEL_205;
                  if ( v40->fields.mHeight >= 71 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSkillMaskLabel;
                    if ( !gameObject )
                      goto LABEL_205;
                    v41 = -39 - v33;
                    if ( -39 - v33 < 0 )
                      v41 = -38 - v33;
                    v42 = v41 >> 1;
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
                    TransformHelper__SetLocalPositionY(transform, (float)v42, 0);
                  }
                  v44 = (System_String_o **)&StringLiteral_6436/*"FOLLOWER_GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/;
                  v45 = this->fields.equipSkillMaskLabel;
                  if ( item->fields._IsMyEquip_k__BackingField )
                    v44 = (System_String_o **)&StringLiteral_6989/*"GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/;
                  v46 = *v44;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v46, 0);
                  if ( !v45 )
                    goto LABEL_205;
                  UILabel__set_text(v45, (System_String_o *)gameObject, 0);
                }
              }
              changeSkillExplanationLabel = (UnityEngine_Object_o *)this->fields.changeSkillExplanationLabel;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              p_explanation = v28;
              if ( UnityEngine_Object__op_Inequality(changeSkillExplanationLabel, 0, 0) )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillExplanationLabel;
                if ( !gameObject )
                  goto LABEL_205;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !gameObject )
                  goto LABEL_205;
                UnityEngine_GameObject__SetActive(gameObject, v106, 0);
                if ( v106 )
                {
                  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_7001/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/, 0);
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
                  if ( !gameObject )
                    goto LABEL_205;
                  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                             &entity,
                                                             Value,
                                                             (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)gameObject & 1) != 0 )
                  {
                    if ( !v27 )
                      goto LABEL_205;
                    v27->fields.id = Value;
                    gameObject = (UnityEngine_GameObject_o *)entity;
                    if ( !entity )
                      goto LABEL_205;
                    EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0);
                    v28->klass = (CGThumbnailListItem_c *)EffectExplanation;
                    sub_1C36FFC(v28, (int32_t)EffectExplanation, v50, v51);
                    gameObject = (UnityEngine_GameObject_o *)entity;
                    if ( !entity )
                      goto LABEL_205;
                    Name = SkillEntity__getName((SkillEntity_o *)entity, 0);
                    p_title->klass = (CGThumbnailListItem_c *)Name;
                    sub_1C36FFC(p_title, (int32_t)Name, v53, v54);
                    v55 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
                    v56 = this->fields.changeSkillExplanationLabel;
                    klass = (System_String_o *)v28->klass;
                    if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
                      v55 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
                    }
                    gameObject = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                               v56,
                                                               klass,
                                                               v55->static_fields->DETAIL_FONT_SIZE,
                                                               v55->static_fields->DETAIL_FONT_SIZE,
                                                               0);
                    v58 = this->fields.changeSkillExplanationLabel;
                    if ( !v58 )
                      goto LABEL_205;
                    v59 = this->fields.skillExplanationLabelList;
                    if ( !v59 )
                      goto LABEL_205;
                    if ( !LODWORD(v59->max_length) )
                      goto LABEL_206;
                    v60 = v59->m_Items[0];
                    if ( !v60 )
                      goto LABEL_205;
                    p_explanation = v28;
                    v61 = v34 + v58->fields.mHeight + 64;
                    if ( v60->fields.mHeight >= 71 )
                      v34 = v61 + 13;
                    else
                      v34 = v61;
                  }
                }
              }
              changeSkillTypeLabel = (UnityEngine_Object_o *)this->fields.changeSkillTypeLabel;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(changeSkillTypeLabel, 0, 0);
              v17 = v27;
              if ( ((unsigned __int8)gameObject & 1) != 0 )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillTypeLabel;
                if ( !gameObject )
                  goto LABEL_205;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !gameObject )
                  goto LABEL_205;
                UnityEngine_GameObject__SetActive(gameObject, v106, 0);
                v63 = this->fields.changeSkillTypeLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_6990/*"GRAND_BOND_EQUIP_SKILL_INFO_ANOTHER_SKILL_HEADER"*/,
                                                           0);
                if ( !v63 )
                  goto LABEL_205;
                UILabel__set_text(v63, (System_String_o *)gameObject, 0);
              }
            }
            else
            {
              p_explanation = v28;
              v17 = v27;
            }
            skillPitch = this->fields.skillPitch;
            if ( v34 >= skillPitch )
              v19 += v34;
            else
              v19 += skillPitch;
          }
        }
      }
    }
    skillBaseList = this->fields.skillBaseList;
    ++v21;
    if ( !skillBaseList )
      goto LABEL_205;
  }
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v69 = y + (float)v19;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !gameObject )
      goto LABEL_205;
    v110.fields.x = x;
    v110.fields.y = v69;
    v110.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v110, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !gameObject )
    goto LABEL_205;
  v70 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)gameObject, v70, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !gameObject )
    goto LABEL_205;
  v71 = v69 == INFINITY ? 0x80000000 : (int)v69;
  UIWidget__set_height((UIWidget_o *)gameObject, v71, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v72 = v19 >= 0 ? v19 : v19 + 1;
  if ( !gameObject )
    goto LABEL_205;
  v73 = this->fields.titleBasePosition.fields.x;
  v74 = this->fields.titleBasePosition.fields.y;
  v75 = this->fields.titleBasePosition.fields.z;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
  if ( !gameObject
    || (v76 = (float)(v72 >> 1),
        v111.fields.y = v74 + v76,
        v111.fields.x = v73,
        v111.fields.z = v75,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v111, 0),
        (v77 = this->fields.skillBaseList) == 0) )
  {
LABEL_205:
    sub_1C372B4(gameObject);
  }
  v78 = this->fields.skillBasePosition.fields.z;
  v79 = this->fields.skillBasePosition.fields.x;
  v80 = 0;
  v81 = this->fields.skillBasePosition.fields.y + v76;
  while ( 1 )
  {
    v82 = v77->max_length;
    if ( (int)v80 >= (int)v82 )
      break;
    if ( (int)v80 >= v14 )
    {
      if ( v80 >= v82 )
        goto LABEL_206;
      gameObject = v77->m_Items[v80];
      if ( !gameObject )
        goto LABEL_205;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_205;
      if ( v80 >= LODWORD(skillInfoList->max_length) || v80 >= v82 )
        goto LABEL_206;
      gameObject = v77->m_Items[v80];
      if ( !gameObject )
        goto LABEL_205;
      v83 = skillInfoList->m_Items[v80];
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      v84 = this->fields.skillBaseList;
      if ( !v84 )
        goto LABEL_205;
      if ( v80 >= LODWORD(v84->max_length) )
        goto LABEL_206;
      gameObject = v84->m_Items[v80];
      if ( !gameObject )
        goto LABEL_205;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( !gameObject )
        goto LABEL_205;
      v112.fields.x = v79;
      v112.fields.y = v81;
      v112.fields.z = v78;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v112, 0);
      v85 = this->fields.skillIconList;
      if ( !v85 )
        goto LABEL_205;
      if ( v80 >= LODWORD(v85->max_length) )
        goto LABEL_206;
      if ( !v83 )
        goto LABEL_205;
      gameObject = (UnityEngine_GameObject_o *)v85->m_Items[v80];
      if ( !gameObject )
        goto LABEL_205;
      SkillIconComponent__Set((SkillIconComponent_o *)gameObject, v83->fields.id, 0);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_205;
      if ( v80 >= LODWORD(skillTitleRangeLabelList->max_length) )
        goto LABEL_206;
      gameObject = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v80];
      if ( !gameObject )
        goto LABEL_205;
      UIRangeLabel__Set((UIRangeLabel_o *)gameObject, v83->fields.title, 0, 1, 0, 0, 0);
      if ( !v80 )
      {
        gameObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill(item, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v17 )
            goto LABEL_205;
          v87 = v17->fields.id > 0;
        }
        else
        {
          v87 = 0;
        }
        changeSkillIcon = (UnityEngine_Object_o *)this->fields.changeSkillIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(changeSkillIcon, 0, 0) )
        {
          gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillIcon;
          if ( !gameObject )
            goto LABEL_205;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_205;
          UnityEngine_GameObject__SetActive(gameObject, v87, 0);
        }
        changeSkillTitleRangeLabel = (UnityEngine_Object_o *)this->fields.changeSkillTitleRangeLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(changeSkillTitleRangeLabel, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillTitleRangeLabel;
          if ( !gameObject )
            goto LABEL_205;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_205;
          UnityEngine_GameObject__SetActive(gameObject, v87, 0);
        }
        if ( v87 )
        {
          v94 = (UnityEngine_Object_o *)this->fields.changeSkillBase;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v94, 0, 0);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            v95 = this->fields.skillExplanationLabelList;
            if ( !v95 )
              goto LABEL_205;
            if ( !LODWORD(v95->max_length) )
              goto LABEL_206;
            v96 = v95->m_Items[0];
            if ( !v96 )
              goto LABEL_205;
            gameObject = this->fields.changeSkillBase;
            if ( !gameObject )
              goto LABEL_205;
            mHeight = v96->fields.mHeight;
            if ( mHeight >= 71 )
              v98 = -77;
            else
              v98 = -64;
            v99 = v98 - mHeight;
            v100 = UnityEngine_GameObject__get_transform(gameObject, 0);
            TransformHelper__SetLocalPositionY(v100, (float)v99, 0);
          }
          v101 = this->fields.changeSkillExplanationLabel;
          if ( !v101 )
            goto LABEL_205;
          v102 = v101->fields.mHeight;
          v103 = (UnityEngine_Object_o *)this->fields.changeSkillIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v103, 0, 0);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v17 )
              goto LABEL_205;
            gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillIcon;
            if ( !gameObject )
              goto LABEL_205;
            SkillIconComponent__Set((SkillIconComponent_o *)gameObject, v17->fields.id, 0);
          }
          v104 = (UnityEngine_Object_o *)this->fields.changeSkillTitleRangeLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v81 = v81 - (float)(v102 + 64);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v104, 0, 0);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v17 )
              goto LABEL_205;
            gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillTitleRangeLabel;
            if ( !gameObject )
              goto LABEL_205;
            UIRangeLabel__Set((UIRangeLabel_o *)gameObject, (System_String_o *)p_title->klass, 0, 1, 0, 0, 0);
          }
        }
      }
    }
    v88 = this->fields.skillExplanationLabelList;
    if ( !v88 )
      goto LABEL_205;
    if ( v80 >= LODWORD(v88->max_length) )
      goto LABEL_206;
    v89 = v88->m_Items[v80];
    if ( v89 )
    {
      gameObject = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      v90 = v89->fields.mHeight;
      if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      }
      ++v80;
      v77 = this->fields.skillBaseList;
      v91 = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 4) + v90;
      if ( v91 < this->fields.skillPitch )
        v91 = this->fields.skillPitch;
      v81 = v81 - (float)v91;
      if ( v77 )
        continue;
    }
    goto LABEL_205;
  }
}