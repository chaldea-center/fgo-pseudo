void ServantStatusListViewItemDrawEquipSkill___cctor(const MethodInfo *method)
{
  if ( (byte_4D29C37 & 1) == 0 )
  {
    sub_1C94098(&ServantStatusListViewItemDrawEquipSkill_TypeInfo);
    byte_4D29C37 = 1;
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct SkillIconComponent_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct UIRangeLabel_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct UILabel_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4D29C36 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&UnityEngine_GameObject___TypeInfo);
    sub_1C94098(&SkillIconComponent___TypeInfo);
    sub_1C94098(&UILabel___TypeInfo);
    sub_1C94098(&UIRangeLabel___TypeInfo);
    byte_4D29C36 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C94140(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.skillBaseList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_1C94140(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v11;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.skillIconList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (struct UIRangeLabel_array *)sub_1C94140(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v18;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillTitleRangeLabelList,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UILabel_array *)sub_1C94140(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v25;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillExplanationLabelList,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
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
    sub_1C942F0(this, method);
  if ( !LODWORD(v10->max_length) )
LABEL_25:
    sub_1C942F8(this);
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
  __int64 v10; // x1
  UnityEngine_Object_o *changeSkillBase; // x21
  struct SkillIconComponent_array *skillIconList; // x8
  il2cpp_array_size_t max_length; // x10
  unsigned __int64 max_length_low; // x9
  int v15; // w28
  signed __int64 v16; // x8
  SkillInfo_o *v17; // x13
  SkillInfo_o *v18; // x21
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  int v20; // w22
  GrandQuestFolderBoardItem_o *p_explanation; // x26
  __int64 v22; // x24
  unsigned __int64 v23; // x19
  unsigned __int64 v24; // x9
  __int64 v25; // x8
  struct UILabel_array *skillExplanationLabelList; // x9
  ServantStatusListViewItemDrawEquipSkill_c *v27; // x0
  SkillInfo_o *v28; // x23
  GrandQuestFolderBoardItem_o *v29; // x21
  UILabel_o *v30; // x25
  System_String_o *v31; // x26
  struct UILabel_array *v32; // x8
  __int64 v33; // x8
  int v34; // w26
  int v35; // w19
  UnityEngine_Object_o *equipSkillMask; // x25
  struct UILabel_array *v37; // x8
  UILabel_o *v38; // x8
  UnityEngine_Object_o *equipSkillMaskLabel; // x25
  struct UILabel_array *v40; // x8
  UILabel_o *v41; // x8
  int v42; // w8
  int v43; // w25
  UnityEngine_Transform_o *transform; // x0
  System_String_o **v45; // x9
  UILabel_o *v46; // x25
  System_String_o *v47; // x26
  UnityEngine_Object_o *changeSkillExplanationLabel; // x25
  int32_t Value; // w25
  System_String_o *EffectExplanation; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  System_String_o *Name; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  ServantStatusListViewItemDrawEquipSkill_c *v64; // x0
  UILabel_o *v65; // x25
  System_String_o *klass; // x26
  struct UILabel_o *v67; // x8
  struct UILabel_array *v68; // x9
  UILabel_o *v69; // x9
  int v70; // w8
  UnityEngine_Object_o *changeSkillTypeLabel; // x25
  UILabel_o *v72; // x25
  int32_t skillPitch; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x23
  float v78; // s8
  int32_t v79; // w1
  int32_t v80; // w1
  int v81; // w19
  float v82; // s8
  float v83; // s11
  float v84; // s9
  float v85; // s10
  struct UnityEngine_GameObject_array *v86; // x8
  float v87; // s8
  float v88; // s9
  unsigned int v89; // w22
  float v90; // s10
  unsigned int v91; // w10
  SkillInfo_o *v92; // x23
  struct UnityEngine_GameObject_array *v93; // x8
  struct SkillIconComponent_array *v94; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  _BOOL4 v96; // w23
  struct UILabel_array *v97; // x8
  UILabel_o *v98; // x8
  int32_t v99; // w23
  int32_t v100; // w9
  UnityEngine_Object_o *changeSkillIcon; // x24
  UnityEngine_Object_o *changeSkillTitleRangeLabel; // x24
  UnityEngine_Object_o *v103; // x23
  struct UILabel_array *v104; // x8
  UILabel_o *v105; // x8
  int mHeight; // w8
  int v107; // w9
  int v108; // w23
  UnityEngine_Transform_o *v109; // x0
  struct UILabel_o *v110; // x8
  int32_t v111; // w24
  UnityEngine_Object_o *v112; // x23
  UnityEngine_Object_o *v113; // x23
  GrandQuestFolderBoardItem_o *p_title; // [xsp+8h] [xbp-A8h]
  bool v115; // [xsp+14h] [xbp-9Ch]
  Il2CppObject *entity; // [xsp+20h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v120; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D29C35 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ServantStatusListViewItemDrawEquipSkill_TypeInfo);
    sub_1C94098(&SkillInfo_TypeInfo);
    sub_1C94098(&StringLiteral_11969/*"SERVANT_STATUS_EXPLANATION_GRAND_CHANGE_SKILL_PASSIVE"*/);
    sub_1C94098(&StringLiteral_6999/*"GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/);
    sub_1C94098(&StringLiteral_11981/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    sub_1C94098(&StringLiteral_6443/*"FOLLOWER_GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/);
    sub_1C94098(&StringLiteral_7012/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/);
    sub_1C94098(&StringLiteral_7000/*"GRAND_BOND_EQUIP_SKILL_INFO_ANOTHER_SKILL_HEADER"*/);
    byte_4D29C35 = 1;
  }
  entity = 0;
  skillInfoList = 0;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  v115 = ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill(item, 0);
  if ( v115 && item->fields._IsMyEquip_k__BackingField )
    v6 = (System_String_o **)&StringLiteral_11969/*"SERVANT_STATUS_EXPLANATION_GRAND_CHANGE_SKILL_PASSIVE"*/;
  else
    v6 = (System_String_o **)&StringLiteral_11981/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
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
    UnityEngine_GameObject__SetActive(gameObject, v115, 0);
  }
  if ( !skillInfoList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_205;
  max_length = skillIconList->max_length;
  if ( (__int64)(max_length << 32) < 1 )
  {
    v15 = 0;
  }
  else
  {
    max_length_low = LODWORD(skillInfoList->max_length);
    v15 = 0;
    v16 = 0;
    do
    {
      if ( v16 < (int)max_length_low )
      {
        if ( v16 >= max_length_low )
LABEL_206:
          sub_1C942F8(gameObject);
        v17 = skillInfoList->m_Items[v16];
        if ( v17 && v17->fields.id >= 1 )
          v15 = v16 + 1;
      }
      ++v16;
    }
    while ( v16 < (int)max_length );
  }
  v18 = (SkillInfo_o *)sub_1C942E4(SkillInfo_TypeInfo);
  SkillInfo___ctor(v18, 0);
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_205;
  p_title = (GrandQuestFolderBoardItem_o *)&v18->fields.title;
  v20 = 0;
  p_explanation = (GrandQuestFolderBoardItem_o *)&v18->fields.explanation;
  v22 = 4;
  while ( 1 )
  {
    v23 = v22 - 4;
    if ( v22 - 4 >= SLODWORD(skillBaseList->max_length) )
      break;
    if ( skillInfoList )
    {
      v24 = LODWORD(skillInfoList->max_length);
      if ( (__int64)v23 < (int)v24 )
      {
        if ( v23 >= v24 )
          goto LABEL_206;
        v25 = *((_QWORD *)&skillInfoList->obj.klass + v22);
        if ( v25 )
        {
          if ( *(int *)(v25 + 16) >= 1 )
          {
            skillExplanationLabelList = this->fields.skillExplanationLabelList;
            if ( !skillExplanationLabelList )
              goto LABEL_205;
            if ( v23 >= LODWORD(skillExplanationLabelList->max_length) )
              goto LABEL_206;
            v27 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            v28 = v18;
            v29 = p_explanation;
            v30 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v22);
            v31 = *(System_String_o **)(v25 + 40);
            if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
              v27 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            }
            gameObject = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                       v30,
                                                       v31,
                                                       v27->static_fields->DETAIL_FONT_SIZE,
                                                       v27->static_fields->DETAIL_FONT_SIZE,
                                                       0);
            v32 = this->fields.skillExplanationLabelList;
            if ( !v32 )
              goto LABEL_205;
            if ( v23 >= LODWORD(v32->max_length) )
              goto LABEL_206;
            v33 = *((_QWORD *)&v32->obj.klass + v22);
            if ( !v33 )
              goto LABEL_205;
            v34 = *(_DWORD *)(v33 + 172);
            v35 = ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->ADJUST_HEIGHT + v34;
            if ( v22 == 4 )
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
                UnityEngine_GameObject__SetActive(gameObject, v115, 0);
                if ( v115 )
                {
                  v37 = this->fields.skillExplanationLabelList;
                  if ( !v37 )
                    goto LABEL_205;
                  if ( !LODWORD(v37->max_length) )
                    goto LABEL_206;
                  v38 = v37->m_Items[0];
                  if ( !v38 )
                    goto LABEL_205;
                  if ( v38->fields.mHeight >= 71 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSkillMask;
                    if ( !gameObject )
                      goto LABEL_205;
                    UIWidget__set_height((UIWidget_o *)gameObject, v34 + 39, 0);
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
                UnityEngine_GameObject__SetActive(gameObject, v115, 0);
                if ( v115 )
                {
                  v40 = this->fields.skillExplanationLabelList;
                  if ( !v40 )
                    goto LABEL_205;
                  if ( !LODWORD(v40->max_length) )
                    goto LABEL_206;
                  v41 = v40->m_Items[0];
                  if ( !v41 )
                    goto LABEL_205;
                  if ( v41->fields.mHeight >= 71 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSkillMaskLabel;
                    if ( !gameObject )
                      goto LABEL_205;
                    v42 = -39 - v34;
                    if ( -39 - v34 < 0 )
                      v42 = -38 - v34;
                    v43 = v42 >> 1;
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
                    TransformHelper__SetLocalPositionY(transform, (float)v43, 0);
                  }
                  v45 = (System_String_o **)&StringLiteral_6443/*"FOLLOWER_GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/;
                  v46 = this->fields.equipSkillMaskLabel;
                  if ( item->fields._IsMyEquip_k__BackingField )
                    v45 = (System_String_o **)&StringLiteral_6999/*"GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/;
                  v47 = *v45;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v47, 0);
                  if ( !v46 )
                    goto LABEL_205;
                  UILabel__set_text(v46, (System_String_o *)gameObject, 0);
                }
              }
              changeSkillExplanationLabel = (UnityEngine_Object_o *)this->fields.changeSkillExplanationLabel;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              p_explanation = v29;
              if ( UnityEngine_Object__op_Inequality(changeSkillExplanationLabel, 0, 0) )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillExplanationLabel;
                if ( !gameObject )
                  goto LABEL_205;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !gameObject )
                  goto LABEL_205;
                UnityEngine_GameObject__SetActive(gameObject, v115, 0);
                if ( v115 )
                {
                  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_7012/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/, 0);
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SkillMaster___);
                  if ( !gameObject )
                    goto LABEL_205;
                  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                             &entity,
                                                             Value,
                                                             (const MethodInfo_345B50C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)gameObject & 1) != 0 )
                  {
                    if ( !v28 )
                      goto LABEL_205;
                    v28->fields.id = Value;
                    gameObject = (UnityEngine_GameObject_o *)entity;
                    if ( !entity )
                      goto LABEL_205;
                    EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0);
                    v29->klass = (GrandQuestFolderBoardItem_c *)EffectExplanation;
                    sub_1C9403C(v29, (int32_t)EffectExplanation, v51, v52, v53, v54, v55, v56);
                    gameObject = (UnityEngine_GameObject_o *)entity;
                    if ( !entity )
                      goto LABEL_205;
                    Name = SkillEntity__getName((SkillEntity_o *)entity, 0);
                    p_title->klass = (GrandQuestFolderBoardItem_c *)Name;
                    sub_1C9403C(p_title, (int32_t)Name, v58, v59, v60, v61, v62, v63);
                    v64 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
                    v65 = this->fields.changeSkillExplanationLabel;
                    klass = (System_String_o *)v29->klass;
                    if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
                      v64 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
                    }
                    gameObject = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                               v65,
                                                               klass,
                                                               v64->static_fields->DETAIL_FONT_SIZE,
                                                               v64->static_fields->DETAIL_FONT_SIZE,
                                                               0);
                    v67 = this->fields.changeSkillExplanationLabel;
                    if ( !v67 )
                      goto LABEL_205;
                    v68 = this->fields.skillExplanationLabelList;
                    if ( !v68 )
                      goto LABEL_205;
                    if ( !LODWORD(v68->max_length) )
                      goto LABEL_206;
                    v69 = v68->m_Items[0];
                    if ( !v69 )
                      goto LABEL_205;
                    p_explanation = v29;
                    v70 = v35 + v67->fields.mHeight + 64;
                    if ( v69->fields.mHeight >= 71 )
                      v35 = v70 + 13;
                    else
                      v35 = v70;
                  }
                }
              }
              changeSkillTypeLabel = (UnityEngine_Object_o *)this->fields.changeSkillTypeLabel;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(changeSkillTypeLabel, 0, 0);
              v18 = v28;
              if ( ((unsigned __int8)gameObject & 1) != 0 )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillTypeLabel;
                if ( !gameObject )
                  goto LABEL_205;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !gameObject )
                  goto LABEL_205;
                UnityEngine_GameObject__SetActive(gameObject, v115, 0);
                v72 = this->fields.changeSkillTypeLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_7000/*"GRAND_BOND_EQUIP_SKILL_INFO_ANOTHER_SKILL_HEADER"*/,
                                                           0);
                if ( !v72 )
                  goto LABEL_205;
                UILabel__set_text(v72, (System_String_o *)gameObject, 0);
              }
            }
            else
            {
              p_explanation = v29;
              v18 = v28;
            }
            skillPitch = this->fields.skillPitch;
            if ( v35 >= skillPitch )
              v20 += v35;
            else
              v20 += skillPitch;
          }
        }
      }
    }
    skillBaseList = this->fields.skillBaseList;
    ++v22;
    if ( !skillBaseList )
      goto LABEL_205;
  }
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v78 = y + (float)v20;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !gameObject )
      goto LABEL_205;
    v119.fields.x = x;
    v119.fields.y = v78;
    v119.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v119, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !gameObject )
    goto LABEL_205;
  v79 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)gameObject, v79, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !gameObject )
    goto LABEL_205;
  v80 = v78 == INFINITY ? 0x80000000 : (int)v78;
  UIWidget__set_height((UIWidget_o *)gameObject, v80, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v81 = v20 >= 0 ? v20 : v20 + 1;
  if ( !gameObject )
    goto LABEL_205;
  v82 = this->fields.titleBasePosition.fields.x;
  v83 = this->fields.titleBasePosition.fields.y;
  v84 = this->fields.titleBasePosition.fields.z;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
  if ( !gameObject
    || (v85 = (float)(v81 >> 1),
        v120.fields.y = v83 + v85,
        v120.fields.x = v82,
        v120.fields.z = v84,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v120, 0),
        (v86 = this->fields.skillBaseList) == 0) )
  {
LABEL_205:
    sub_1C942F0(gameObject, v10);
  }
  v87 = this->fields.skillBasePosition.fields.z;
  v88 = this->fields.skillBasePosition.fields.x;
  v89 = 0;
  v90 = this->fields.skillBasePosition.fields.y + v85;
  while ( 1 )
  {
    v91 = v86->max_length;
    if ( (int)v89 >= (int)v91 )
      break;
    if ( (int)v89 >= v15 )
    {
      if ( v89 >= v91 )
        goto LABEL_206;
      gameObject = v86->m_Items[v89];
      if ( !gameObject )
        goto LABEL_205;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_205;
      if ( v89 >= LODWORD(skillInfoList->max_length) || v89 >= v91 )
        goto LABEL_206;
      gameObject = v86->m_Items[v89];
      if ( !gameObject )
        goto LABEL_205;
      v92 = skillInfoList->m_Items[v89];
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      v93 = this->fields.skillBaseList;
      if ( !v93 )
        goto LABEL_205;
      if ( v89 >= LODWORD(v93->max_length) )
        goto LABEL_206;
      gameObject = v93->m_Items[v89];
      if ( !gameObject )
        goto LABEL_205;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( !gameObject )
        goto LABEL_205;
      v121.fields.x = v88;
      v121.fields.y = v90;
      v121.fields.z = v87;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v121, 0);
      v94 = this->fields.skillIconList;
      if ( !v94 )
        goto LABEL_205;
      if ( v89 >= LODWORD(v94->max_length) )
        goto LABEL_206;
      if ( !v92 )
        goto LABEL_205;
      gameObject = (UnityEngine_GameObject_o *)v94->m_Items[v89];
      if ( !gameObject )
        goto LABEL_205;
      SkillIconComponent__Set((SkillIconComponent_o *)gameObject, v92->fields.id, 0);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_205;
      if ( v89 >= LODWORD(skillTitleRangeLabelList->max_length) )
        goto LABEL_206;
      gameObject = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v89];
      if ( !gameObject )
        goto LABEL_205;
      UIRangeLabel__Set((UIRangeLabel_o *)gameObject, v92->fields.title, 0, 1, 0, 0, 0);
      if ( !v89 )
      {
        gameObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill(item, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v18 )
            goto LABEL_205;
          v96 = v18->fields.id > 0;
        }
        else
        {
          v96 = 0;
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
          UnityEngine_GameObject__SetActive(gameObject, v96, 0);
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
          UnityEngine_GameObject__SetActive(gameObject, v96, 0);
        }
        if ( v96 )
        {
          v103 = (UnityEngine_Object_o *)this->fields.changeSkillBase;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v103, 0, 0);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            v104 = this->fields.skillExplanationLabelList;
            if ( !v104 )
              goto LABEL_205;
            if ( !LODWORD(v104->max_length) )
              goto LABEL_206;
            v105 = v104->m_Items[0];
            if ( !v105 )
              goto LABEL_205;
            gameObject = this->fields.changeSkillBase;
            if ( !gameObject )
              goto LABEL_205;
            mHeight = v105->fields.mHeight;
            if ( mHeight >= 71 )
              v107 = -77;
            else
              v107 = -64;
            v108 = v107 - mHeight;
            v109 = UnityEngine_GameObject__get_transform(gameObject, 0);
            TransformHelper__SetLocalPositionY(v109, (float)v108, 0);
          }
          v110 = this->fields.changeSkillExplanationLabel;
          if ( !v110 )
            goto LABEL_205;
          v111 = v110->fields.mHeight;
          v112 = (UnityEngine_Object_o *)this->fields.changeSkillIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v112, 0, 0);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v18 )
              goto LABEL_205;
            gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillIcon;
            if ( !gameObject )
              goto LABEL_205;
            SkillIconComponent__Set((SkillIconComponent_o *)gameObject, v18->fields.id, 0);
          }
          v113 = (UnityEngine_Object_o *)this->fields.changeSkillTitleRangeLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v90 = v90 - (float)(v111 + 64);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v113, 0, 0);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v18 )
              goto LABEL_205;
            gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillTitleRangeLabel;
            if ( !gameObject )
              goto LABEL_205;
            UIRangeLabel__Set((UIRangeLabel_o *)gameObject, (System_String_o *)p_title->klass, 0, 1, 0, 0, 0);
          }
        }
      }
    }
    v97 = this->fields.skillExplanationLabelList;
    if ( !v97 )
      goto LABEL_205;
    if ( v89 >= LODWORD(v97->max_length) )
      goto LABEL_206;
    v98 = v97->m_Items[v89];
    if ( v98 )
    {
      gameObject = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      v99 = v98->fields.mHeight;
      if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      }
      ++v89;
      v86 = this->fields.skillBaseList;
      v100 = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 4) + v99;
      if ( v100 < this->fields.skillPitch )
        v100 = this->fields.skillPitch;
      v90 = v90 - (float)v100;
      if ( v86 )
        continue;
    }
    goto LABEL_205;
  }
}