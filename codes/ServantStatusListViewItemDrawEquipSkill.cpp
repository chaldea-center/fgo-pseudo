void ServantStatusListViewItemDrawEquipSkill___cctor(const MethodInfo *method)
{
  if ( (byte_5935159 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusListViewItemDrawEquipSkill_TypeInfo);
    byte_5935159 = 1;
  }
  *ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawEquipSkill_StaticFields)0x2800000012LL;
}


void ServantStatusListViewItemDrawEquipSkill___ctor(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct UnityEngine_GameObject_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct SkillIconComponent_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct UIRangeLabel_array *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct UILabel_array *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_5935158 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&UnityEngine_GameObject___TypeInfo);
    sub_21FFC50(&SkillIconComponent___TypeInfo);
    sub_21FFC50(&UILabel___TypeInfo);
    sub_21FFC50(&UIRangeLabel___TypeInfo);
    byte_5935158 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct UnityEngine_GameObject_array *)sub_21FFD10(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v4->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.skillBaseList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (struct SkillIconComponent_array *)sub_21FFD10(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v12;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillIconList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (struct UIRangeLabel_array *)sub_21FFD10(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v19;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillTitleRangeLabelList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (struct UILabel_array *)sub_21FFD10(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v26;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillExplanationLabelList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
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
  int v6; // w9
  struct UISprite_o *baseSprite; // x9
  int v8; // w20
  int32_t mHeight; // w8
  float mWidth; // s0
  int v11; // w8
  float v12; // s8
  struct UnityEngine_GameObject_array *v13; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_23;
  v3 = this;
  if ( SLODWORD(skillBaseList->max_length) >= 2 )
  {
    this = (ServantStatusListViewItemDrawEquipSkill_o *)skillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_23;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0);
    if ( !this )
      goto LABEL_23;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v4 = v3->fields.skillBaseList;
    if ( !v4 )
      goto LABEL_23;
    if ( (v4->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)v4->m_Items[1];
    if ( !this )
      goto LABEL_23;
    y = localPosition.fields.y;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0);
    if ( !this )
      goto LABEL_23;
    v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    skillBaseList = v3->fields.skillBaseList;
    v6 = (int)(float)(y - v15.fields.y);
    if ( (float)(y - v15.fields.y) == INFINITY )
      v6 = 0x80000000;
    v3->fields.skillPitch = v6;
    if ( !skillBaseList )
      goto LABEL_23;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_23;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)v3->fields.titleSprite;
  v8 = v3->fields.skillPitch * LODWORD(skillBaseList->max_length);
  mHeight = baseSprite->fields.mHeight;
  mWidth = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.z = 0.0;
  v3->fields.baseSize.fields.x = mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight - v8);
  if ( !this )
    goto LABEL_23;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
  if ( !this )
    goto LABEL_23;
  v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.titleBasePosition.fields.x = v16.fields.x;
  v11 = v8 >= 0 ? v8 : v8 + 1;
  v12 = (float)(v11 >> 1);
  v13 = v3->fields.skillBaseList;
  v3->fields.titleBasePosition.fields.y = v16.fields.y - v12;
  v3->fields.titleBasePosition.fields.z = v16.fields.z;
  if ( !v13 )
LABEL_23:
    sub_21FFECC(this, method);
  if ( !LODWORD(v13->max_length) )
LABEL_24:
    sub_21FFED4(this);
  this = (ServantStatusListViewItemDrawEquipSkill_o *)v13->m_Items[0];
  if ( !this )
    goto LABEL_23;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)this,
                                                        0);
  if ( !this )
    goto LABEL_23;
  v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.skillBasePosition.fields.x = v17.fields.x;
  v3->fields.skillBasePosition.fields.y = v17.fields.y - v12;
  v3->fields.skillBasePosition.fields.z = v17.fields.z;
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
  __int64 v6; // x1
  __int64 v7; // x2
  bool v8; // w22
  System_String_o **v9; // x8
  UILabel_o *explanationLabel; // x21
  System_String_o *v11; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *changeSkillBase; // x21
  struct SkillIconComponent_array *skillIconList; // x8
  int max_length; // w10
  unsigned __int64 max_length_low; // x9
  __int64 v20; // x10
  int v21; // w26
  unsigned __int64 v22; // x8
  SkillInfo_o *v23; // x13
  __int64 v24; // x21
  __int64 v25; // x2
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  int v27; // w29
  __int64 v28; // x28
  unsigned __int64 v29; // x19
  unsigned __int64 v30; // x9
  __int64 v31; // x8
  struct UILabel_array *skillExplanationLabelList; // x9
  ServantStatusListViewItemDrawEquipSkill_c *v33; // x0
  UILabel_o *v34; // x23
  System_String_o *v35; // x24
  struct UILabel_array *v36; // x8
  __int64 v37; // x8
  int v38; // w24
  int v39; // w19
  UnityEngine_Object_o *equipSkillMask; // x23
  __int64 v41; // x2
  struct UILabel_array *v42; // x8
  UILabel_o *v43; // x8
  UnityEngine_Object_o *equipSkillMaskLabel; // x23
  __int64 v45; // x2
  struct UILabel_array *v46; // x8
  UILabel_o *v47; // x8
  int v48; // w8
  int v49; // w23
  UnityEngine_Transform_o *transform; // x0
  System_String_o **v51; // x8
  UILabel_o *v52; // x23
  System_String_o *v53; // x24
  UnityEngine_Object_o *changeSkillExplanationLabel; // x23
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  int32_t Value; // w23
  System_String_o *EffectExplanation; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_String_o *Name; // x0
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  __int64 v73; // x1
  __int64 v74; // x2
  ServantStatusListViewItemDrawEquipSkill_c *v75; // x0
  UILabel_o *v76; // x23
  System_String_o *v77; // x24
  struct UILabel_o *v78; // x8
  struct UILabel_array *v79; // x9
  UILabel_o *v80; // x9
  int v81; // w8
  UnityEngine_Object_o *changeSkillTypeLabel; // x23
  __int64 v83; // x1
  __int64 v84; // x2
  UILabel_o *v85; // x23
  int32_t skillPitch; // w8
  float z; // s10
  float x; // s9
  float y; // s11
  UnityEngine_Object_o *baseCollider; // x22
  float v91; // s8
  int32_t v92; // w1
  int32_t v93; // w1
  int v94; // w19
  float v95; // s8
  float v96; // s11
  float v97; // s9
  float v98; // s10
  struct UnityEngine_GameObject_array *v99; // x8
  float v100; // s8
  unsigned int v101; // w24
  float v102; // s9
  float v103; // s10
  unsigned int v104; // w10
  SkillInfo_o *v105; // x22
  struct UnityEngine_GameObject_array *v106; // x8
  struct SkillIconComponent_array *v107; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  __int64 v109; // x2
  __int64 v110; // x2
  _BOOL4 v111; // w22
  struct UILabel_array *v112; // x8
  UILabel_o *v113; // x8
  int32_t v114; // w22
  int32_t v115; // w8
  float v116; // s0
  UnityEngine_Object_o *changeSkillIcon; // x23
  __int64 v118; // x2
  UnityEngine_Object_o *changeSkillTitleRangeLabel; // x23
  UnityEngine_Object_o *v120; // x22
  __int64 v121; // x2
  struct UILabel_array *v122; // x8
  UILabel_o *v123; // x8
  int mHeight; // w8
  int v125; // w9
  int v126; // w22
  UnityEngine_Transform_o *v127; // x0
  struct UILabel_o *v128; // x8
  int32_t v129; // w23
  UnityEngine_Object_o *v130; // x22
  __int64 v131; // x2
  UnityEngine_Object_o *v132; // x22
  Il2CppObject *entity; // [xsp+10h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v137; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v138; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935157 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ServantStatusListViewItemDrawEquipSkill_TypeInfo);
    sub_21FFC50(&SkillInfo_TypeInfo);
    sub_21FFC50(&StringLiteral_12411/*"SERVANT_STATUS_EXPLANATION_GRAND_CHANGE_SKILL_PASSIVE"*/);
    sub_21FFC50(&StringLiteral_7271/*"GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_12423/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    sub_21FFC50(&StringLiteral_6709/*"FOLLOWER_GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_7284/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/);
    sub_21FFC50(&StringLiteral_7272/*"GRAND_BOND_EQUIP_SKILL_INFO_ANOTHER_SKILL_HEADER"*/);
    byte_5935157 = 1;
  }
  entity = 0;
  skillInfoList = 0;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  v8 = ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill(item, 0);
  v9 = (System_String_o **)&StringLiteral_12411/*"SERVANT_STATUS_EXPLANATION_GRAND_CHANGE_SKILL_PASSIVE"*/;
  explanationLabel = this->fields.explanationLabel;
  if ( !v8 || !item->fields._IsMyEquip_k__BackingField )
    v9 = (System_String_o **)&StringLiteral_12423/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  v11 = *v9;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v11, 0);
  if ( !explanationLabel )
    goto LABEL_110;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0, 0);
  changeSkillBase = (UnityEngine_Object_o *)this->fields.changeSkillBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(changeSkillBase, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = this->fields.changeSkillBase;
    if ( !gameObject )
      goto LABEL_110;
    UnityEngine_GameObject__SetActive(gameObject, v8, 0);
  }
  if ( !skillInfoList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_110;
  max_length = skillIconList->max_length;
  if ( max_length < 1 )
  {
    v21 = 0;
  }
  else
  {
    max_length_low = LODWORD(skillInfoList->max_length);
    v20 = max_length & (unsigned int)~(max_length >> 31);
    v21 = 0;
    v22 = 0;
    do
    {
      if ( (__int64)v22 < (int)max_length_low )
      {
        if ( v22 >= max_length_low )
LABEL_203:
          sub_21FFED4(gameObject);
        v23 = skillInfoList->m_Items[v22];
        if ( v23 && v23->fields.id >= 1 )
          v21 = v22 + 1;
      }
      ++v22;
    }
    while ( v20 != v22 );
  }
  v24 = sub_21FFEBC(SkillInfo_TypeInfo);
  SkillInfo___ctor((SkillInfo_o *)v24, 0);
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_110;
  v27 = 0;
  v28 = 4;
  while ( 1 )
  {
    v29 = v28 - 4;
    if ( v28 - 4 >= SLODWORD(skillBaseList->max_length) )
      break;
    if ( skillInfoList )
    {
      v30 = LODWORD(skillInfoList->max_length);
      if ( (__int64)v29 < (int)v30 )
      {
        if ( v29 >= v30 )
          goto LABEL_203;
        v31 = *((_QWORD *)&skillInfoList->obj.klass + v28);
        if ( v31 )
        {
          if ( *(int *)(v31 + 16) >= 1 )
          {
            skillExplanationLabelList = this->fields.skillExplanationLabelList;
            if ( !skillExplanationLabelList )
              goto LABEL_110;
            if ( v29 >= LODWORD(skillExplanationLabelList->max_length) )
              goto LABEL_203;
            v33 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            v34 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v28);
            v35 = *(System_String_o **)(v31 + 40);
            if ( !*(&ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo, v13, v25);
              v33 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            }
            gameObject = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                       v34,
                                                       v35,
                                                       v33->static_fields->DETAIL_FONT_SIZE,
                                                       v33->static_fields->DETAIL_FONT_SIZE,
                                                       0);
            v36 = this->fields.skillExplanationLabelList;
            if ( !v36 )
              goto LABEL_110;
            if ( v29 >= LODWORD(v36->max_length) )
              goto LABEL_203;
            v37 = *((_QWORD *)&v36->obj.klass + v28);
            if ( !v37 )
              goto LABEL_110;
            v38 = *(_DWORD *)(v37 + 172);
            v39 = ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->ADJUST_HEIGHT + v38;
            if ( v28 == 4 )
            {
              equipSkillMask = (UnityEngine_Object_o *)this->fields.equipSkillMask;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v25);
              if ( UnityEngine_Object__op_Inequality(equipSkillMask, 0, 0) )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.equipSkillMask;
                if ( !gameObject )
                  goto LABEL_110;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !gameObject )
                  goto LABEL_110;
                UnityEngine_GameObject__SetActive(gameObject, v8, 0);
                if ( v8 )
                {
                  v42 = this->fields.skillExplanationLabelList;
                  if ( !v42 )
                    goto LABEL_110;
                  if ( !LODWORD(v42->max_length) )
                    goto LABEL_203;
                  v43 = v42->m_Items[0];
                  if ( !v43 )
                    goto LABEL_110;
                  if ( v43->fields.mHeight >= 71 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSkillMask;
                    if ( !gameObject )
                      goto LABEL_110;
                    UIWidget__set_height((UIWidget_o *)gameObject, v38 + 39, 0);
                  }
                }
              }
              equipSkillMaskLabel = (UnityEngine_Object_o *)this->fields.equipSkillMaskLabel;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v41);
              if ( UnityEngine_Object__op_Inequality(equipSkillMaskLabel, 0, 0) )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.equipSkillMaskLabel;
                if ( !gameObject )
                  goto LABEL_110;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !gameObject )
                  goto LABEL_110;
                UnityEngine_GameObject__SetActive(gameObject, v8, 0);
                if ( v8 )
                {
                  v46 = this->fields.skillExplanationLabelList;
                  if ( !v46 )
                    goto LABEL_110;
                  if ( !LODWORD(v46->max_length) )
                    goto LABEL_203;
                  v47 = v46->m_Items[0];
                  if ( !v47 )
                    goto LABEL_110;
                  if ( v47->fields.mHeight >= 71 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSkillMaskLabel;
                    if ( !gameObject )
                      goto LABEL_110;
                    v48 = -39 - v38;
                    if ( -39 - v38 < 0 )
                      v48 = -38 - v38;
                    v49 = v48 >> 1;
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
                    TransformHelper__SetLocalPositionY(transform, (float)v49, 0);
                  }
                  v51 = (System_String_o **)&StringLiteral_6709/*"FOLLOWER_GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/;
                  v52 = this->fields.equipSkillMaskLabel;
                  if ( item->fields._IsMyEquip_k__BackingField )
                    v51 = (System_String_o **)&StringLiteral_7271/*"GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/;
                  v53 = *v51;
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v45);
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v53, 0);
                  if ( !v52 )
                    goto LABEL_110;
                  UILabel__set_text(v52, (System_String_o *)gameObject, 0);
                }
              }
              changeSkillExplanationLabel = (UnityEngine_Object_o *)this->fields.changeSkillExplanationLabel;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v45);
              if ( UnityEngine_Object__op_Inequality(changeSkillExplanationLabel, 0, 0) )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillExplanationLabel;
                if ( !gameObject )
                  goto LABEL_110;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !gameObject )
                  goto LABEL_110;
                UnityEngine_GameObject__SetActive(gameObject, v8, 0);
                if ( v8 )
                {
                  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_7284/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/, 0);
                  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v56, v57);
                  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
                  if ( !gameObject )
                    goto LABEL_110;
                  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                             &entity,
                                                             Value,
                                                             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)gameObject & 1) != 0 )
                  {
                    if ( !v24 )
                      goto LABEL_110;
                    gameObject = (UnityEngine_GameObject_o *)entity;
                    *(_DWORD *)(v24 + 16) = Value;
                    if ( !gameObject )
                      goto LABEL_110;
                    EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)gameObject, 0, 0);
                    *(_QWORD *)(v24 + 40) = EffectExplanation;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)(v24 + 40),
                      (int32_t)EffectExplanation,
                      v60,
                      v61,
                      v62,
                      v63,
                      v64,
                      v65);
                    gameObject = (UnityEngine_GameObject_o *)entity;
                    if ( !entity )
                      goto LABEL_110;
                    Name = SkillEntity__getName((SkillEntity_o *)entity, 0);
                    *(_QWORD *)(v24 + 32) = Name;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)(v24 + 32),
                      (int32_t)Name,
                      v67,
                      v68,
                      v69,
                      v70,
                      v71,
                      v72);
                    v75 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
                    v76 = this->fields.changeSkillExplanationLabel;
                    v77 = *(System_String_o **)(v24 + 40);
                    if ( !*(&ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo, v73, v74);
                      v75 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
                    }
                    gameObject = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                               v76,
                                                               v77,
                                                               v75->static_fields->DETAIL_FONT_SIZE,
                                                               v75->static_fields->DETAIL_FONT_SIZE,
                                                               0);
                    v78 = this->fields.changeSkillExplanationLabel;
                    if ( !v78 )
                      goto LABEL_110;
                    v79 = this->fields.skillExplanationLabelList;
                    if ( !v79 )
                      goto LABEL_110;
                    if ( !LODWORD(v79->max_length) )
                      goto LABEL_203;
                    v80 = v79->m_Items[0];
                    if ( !v80 )
                      goto LABEL_110;
                    v81 = v39 + v78->fields.mHeight + 64;
                    if ( v80->fields.mHeight >= 71 )
                      v39 = v81 + 13;
                    else
                      v39 = v81;
                  }
                }
              }
              changeSkillTypeLabel = (UnityEngine_Object_o *)this->fields.changeSkillTypeLabel;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v55);
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(changeSkillTypeLabel, 0, 0);
              if ( ((unsigned __int8)gameObject & 1) != 0 )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillTypeLabel;
                if ( !gameObject )
                  goto LABEL_110;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !gameObject )
                  goto LABEL_110;
                UnityEngine_GameObject__SetActive(gameObject, v8, 0);
                v85 = this->fields.changeSkillTypeLabel;
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v83, v84);
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_7272/*"GRAND_BOND_EQUIP_SKILL_INFO_ANOTHER_SKILL_HEADER"*/,
                                                           0);
                if ( !v85 )
                  goto LABEL_110;
                UILabel__set_text(v85, (System_String_o *)gameObject, 0);
              }
            }
            skillPitch = this->fields.skillPitch;
            if ( v39 >= skillPitch )
              v27 += v39;
            else
              v27 += skillPitch;
          }
        }
      }
    }
    skillBaseList = this->fields.skillBaseList;
    ++v28;
    if ( !skillBaseList )
      goto LABEL_110;
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v25);
  v91 = y + (float)v27;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !gameObject )
      goto LABEL_110;
    v136.fields.x = x;
    v136.fields.y = y + (float)v27;
    v136.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v136, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !gameObject )
    goto LABEL_110;
  v92 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)gameObject, v92, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !gameObject )
    goto LABEL_110;
  v93 = v91 == INFINITY ? 0x80000000 : (int)v91;
  UIWidget__set_height((UIWidget_o *)gameObject, v93, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v94 = v27 >= 0 ? v27 : v27 + 1;
  if ( !gameObject )
    goto LABEL_110;
  v95 = this->fields.titleBasePosition.fields.x;
  v96 = this->fields.titleBasePosition.fields.y;
  v97 = this->fields.titleBasePosition.fields.z;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
  if ( !gameObject
    || (v137.fields.x = v95,
        v137.fields.z = v97,
        v98 = (float)(v94 >> 1),
        v137.fields.y = v96 + v98,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v137, 0),
        (v99 = this->fields.skillBaseList) == 0) )
  {
LABEL_110:
    sub_21FFECC(gameObject, v13);
  }
  v100 = this->fields.skillBasePosition.fields.x;
  v101 = 0;
  v102 = this->fields.skillBasePosition.fields.y + v98;
  v103 = this->fields.skillBasePosition.fields.z;
  while ( 1 )
  {
    v104 = v99->max_length;
    if ( (int)v101 >= (int)v104 )
      break;
    if ( (int)v101 >= v21 )
    {
      if ( v101 >= v104 )
        goto LABEL_203;
      gameObject = v99->m_Items[v101];
      if ( !gameObject )
        goto LABEL_110;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_110;
      if ( v101 >= LODWORD(skillInfoList->max_length) || v101 >= v104 )
        goto LABEL_203;
      gameObject = v99->m_Items[v101];
      if ( !gameObject )
        goto LABEL_110;
      v105 = skillInfoList->m_Items[v101];
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      v106 = this->fields.skillBaseList;
      if ( !v106 )
        goto LABEL_110;
      if ( v101 >= LODWORD(v106->max_length) )
        goto LABEL_203;
      gameObject = v106->m_Items[v101];
      if ( !gameObject )
        goto LABEL_110;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( !gameObject )
        goto LABEL_110;
      v138.fields.x = v100;
      v138.fields.y = v102;
      v138.fields.z = v103;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v138, 0);
      v107 = this->fields.skillIconList;
      if ( !v107 )
        goto LABEL_110;
      if ( v101 >= LODWORD(v107->max_length) )
        goto LABEL_203;
      if ( !v105 )
        goto LABEL_110;
      gameObject = (UnityEngine_GameObject_o *)v107->m_Items[v101];
      if ( !gameObject )
        goto LABEL_110;
      SkillIconComponent__Set((SkillIconComponent_o *)gameObject, v105->fields.id, 0);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_110;
      if ( v101 >= LODWORD(skillTitleRangeLabelList->max_length) )
        goto LABEL_203;
      gameObject = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v101];
      if ( !gameObject )
        goto LABEL_110;
      UIRangeLabel__Set((UIRangeLabel_o *)gameObject, v105->fields.title, 0, 1, 0, 0, 0);
      if ( !v101 )
      {
        gameObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill(item, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v24 )
            goto LABEL_110;
          v111 = *(_DWORD *)(v24 + 16) > 0;
        }
        else
        {
          v111 = 0;
        }
        changeSkillIcon = (UnityEngine_Object_o *)this->fields.changeSkillIcon;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v110);
        if ( UnityEngine_Object__op_Inequality(changeSkillIcon, 0, 0) )
        {
          gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillIcon;
          if ( !gameObject )
            goto LABEL_110;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_110;
          UnityEngine_GameObject__SetActive(gameObject, v111, 0);
        }
        changeSkillTitleRangeLabel = (UnityEngine_Object_o *)this->fields.changeSkillTitleRangeLabel;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v118);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(changeSkillTitleRangeLabel, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillTitleRangeLabel;
          if ( !gameObject )
            goto LABEL_110;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_110;
          UnityEngine_GameObject__SetActive(gameObject, v111, 0);
        }
        if ( v111 )
        {
          v120 = (UnityEngine_Object_o *)this->fields.changeSkillBase;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v109);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v120, 0, 0);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            v122 = this->fields.skillExplanationLabelList;
            if ( !v122 )
              goto LABEL_110;
            if ( !LODWORD(v122->max_length) )
              goto LABEL_203;
            v123 = v122->m_Items[v101];
            if ( !v123 )
              goto LABEL_110;
            gameObject = this->fields.changeSkillBase;
            if ( !gameObject )
              goto LABEL_110;
            mHeight = v123->fields.mHeight;
            if ( mHeight >= 71 )
              v125 = -77;
            else
              v125 = -64;
            v126 = v125 - mHeight;
            v127 = UnityEngine_GameObject__get_transform(gameObject, 0);
            TransformHelper__SetLocalPositionY(v127, (float)v126, 0);
          }
          v128 = this->fields.changeSkillExplanationLabel;
          if ( !v128 )
            goto LABEL_110;
          v129 = v128->fields.mHeight;
          v130 = (UnityEngine_Object_o *)this->fields.changeSkillIcon;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v121);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v130, 0, 0);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v24 )
              goto LABEL_110;
            gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillIcon;
            if ( !gameObject )
              goto LABEL_110;
            SkillIconComponent__Set((SkillIconComponent_o *)gameObject, *(_DWORD *)(v24 + 16), 0);
          }
          v132 = (UnityEngine_Object_o *)this->fields.changeSkillTitleRangeLabel;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v131);
          v102 = v102 - (float)(v129 + 64);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v132, 0, 0);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v24 )
              goto LABEL_110;
            gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillTitleRangeLabel;
            if ( !gameObject )
              goto LABEL_110;
            UIRangeLabel__Set((UIRangeLabel_o *)gameObject, *(System_String_o **)(v24 + 32), 0, 1, 0, 0, 0);
          }
        }
      }
    }
    v112 = this->fields.skillExplanationLabelList;
    if ( !v112 )
      goto LABEL_110;
    if ( v101 >= LODWORD(v112->max_length) )
      goto LABEL_203;
    v113 = v112->m_Items[v101];
    if ( v113 )
    {
      gameObject = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      v114 = v113->fields.mHeight;
      if ( !*(&ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo, v13, v109);
        gameObject = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      }
      ++v101;
      v115 = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 4) + v114;
      if ( v115 <= this->fields.skillPitch )
        v115 = this->fields.skillPitch;
      v116 = (float)v115;
      v99 = this->fields.skillBaseList;
      v102 = v102 - v116;
      if ( v99 )
        continue;
    }
    goto LABEL_110;
  }
}