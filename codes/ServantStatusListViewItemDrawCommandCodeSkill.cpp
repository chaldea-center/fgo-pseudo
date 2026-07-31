void ServantStatusListViewItemDrawCommandCodeSkill___ctor(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
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

  if ( (byte_5935152 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&UnityEngine_GameObject___TypeInfo);
    sub_21FFC50(&SkillIconComponent___TypeInfo);
    sub_21FFC50(&UILabel___TypeInfo);
    sub_21FFC50(&UIRangeLabel___TypeInfo);
    byte_5935152 = 1;
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


void ServantStatusListViewItemDrawCommandCodeSkill__Awake(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  ServantStatusListViewItemDrawCommandCodeSkill_o *v3; // x19
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
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)skillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_23;
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_GameObject__get_transform(
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
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)v4->m_Items[1];
    if ( !this )
      goto LABEL_23;
    y = localPosition.fields.y;
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_GameObject__get_transform(
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
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)v3->fields.titleSprite;
  v8 = v3->fields.skillPitch * LODWORD(skillBaseList->max_length);
  mHeight = baseSprite->fields.mHeight;
  mWidth = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.z = 0.0;
  v3->fields.baseSize.fields.x = mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight - v8);
  if ( !this )
    goto LABEL_23;
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_Component__get_transform(
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
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)v13->m_Items[0];
  if ( !this )
    goto LABEL_23;
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0);
  if ( !this )
    goto LABEL_23;
  v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.skillBasePosition.fields.x = v17.fields.x;
  v3->fields.skillBasePosition.fields.y = v17.fields.y - v12;
  v3->fields.skillBasePosition.fields.z = v17.fields.z;
}


int32_t ServantStatusListViewItemDrawCommandCodeSkill__GetKind(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        const MethodInfo *method)
{
  return 14;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawCommandCodeSkill__SetItem(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *explanationLabel; // x21
  UnityEngine_GameObject_o *baseSprite; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct SkillIconComponent_array *skillIconList; // x9
  int max_length; // w11
  unsigned __int64 max_length_low; // x10
  __int64 v14; // x11
  unsigned __int64 v15; // x9
  int v16; // w21
  int *v17; // x13
  int v18; // w22
  float x; // s9
  float y; // s11
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v23; // s8
  int32_t v24; // w1
  int32_t v25; // w1
  int v26; // w20
  float v27; // s8
  float v28; // s11
  float v29; // s9
  float v30; // s10
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  float v32; // s8
  signed __int64 v33; // x20
  unsigned __int64 v34; // x21
  float v35; // s9
  float v36; // s10
  unsigned __int64 v37; // x9
  struct UnityEngine_GameObject_array *v38; // x8
  struct SkillIconComponent_array *v39; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  System_String_array *v42; // [xsp+0h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-28h] BYREF
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935151 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_12422/*"SERVANT_STATUS_EXPLANATION_SKILL_COMMAND_CODE"*/);
    byte_5935151 = 1;
  }
  idList = 0;
  v42 = 0;
  titleList = 0;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, *(_QWORD *)&mode);
  baseSprite = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12422/*"SERVANT_STATUS_EXPLANATION_SKILL_COMMAND_CODE"*/, 0);
  if ( !explanationLabel )
    goto LABEL_67;
  UILabel__set_text(explanationLabel, (System_String_o *)baseSprite, 0);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &v42, 0, 0);
  if ( !idList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_67;
  max_length = skillIconList->max_length;
  if ( max_length < 1 )
  {
    v16 = 1;
  }
  else
  {
    max_length_low = LODWORD(idList->max_length);
    v14 = max_length & (unsigned int)~(max_length >> 31);
    v15 = 0;
    v16 = 1;
    do
    {
      if ( (__int64)v15 >= (int)max_length_low )
      {
        ++v15;
      }
      else
      {
        if ( v15 >= max_length_low )
LABEL_69:
          sub_21FFED4(baseSprite);
        v17 = (int *)((char *)idList + 4 * v15++);
        if ( v17[8] >= 1 )
          v16 = v15;
      }
    }
    while ( v15 != v14 );
  }
  v18 = this->fields.skillPitch * v16;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  v23 = y + (float)v18;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    baseSprite = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !baseSprite )
      goto LABEL_67;
    v45.fields.x = x;
    v45.fields.y = y + (float)v18;
    v45.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)baseSprite, v45, 0);
  }
  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_67;
  v24 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)baseSprite, v24, 0);
  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_67;
  v25 = v23 == INFINITY ? 0x80000000 : (int)v23;
  UIWidget__set_height((UIWidget_o *)baseSprite, v25, 0);
  baseSprite = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v26 = v18 >= 0 ? v18 : v18 + 1;
  if ( !baseSprite )
    goto LABEL_67;
  v27 = this->fields.titleBasePosition.fields.x;
  v28 = this->fields.titleBasePosition.fields.y;
  v29 = this->fields.titleBasePosition.fields.z;
  baseSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)baseSprite,
                                             0);
  if ( !baseSprite
    || (v46.fields.x = v27,
        v46.fields.z = v29,
        v30 = (float)(v26 >> 1),
        v46.fields.y = v28 + v30,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v46, 0),
        (skillBaseList = this->fields.skillBaseList) == 0) )
  {
LABEL_67:
    sub_21FFECC(baseSprite, v9);
  }
  v32 = this->fields.skillBasePosition.fields.x;
  v33 = v16;
  v34 = 0;
  v35 = this->fields.skillBasePosition.fields.y + v30;
  v36 = this->fields.skillBasePosition.fields.z;
  while ( 1 )
  {
    v37 = LODWORD(skillBaseList->max_length);
    if ( (__int64)v34 >= (int)v37 )
      break;
    if ( (__int64)v34 >= v33 )
    {
      if ( v34 >= v37 )
        goto LABEL_69;
      baseSprite = skillBaseList->m_Items[v34];
      if ( !baseSprite )
        goto LABEL_67;
      UnityEngine_GameObject__SetActive(baseSprite, 0, 0);
    }
    else
    {
      if ( v34 >= v37 )
        goto LABEL_69;
      baseSprite = skillBaseList->m_Items[v34];
      if ( !baseSprite )
        goto LABEL_67;
      UnityEngine_GameObject__SetActive(baseSprite, 1, 0);
      v38 = this->fields.skillBaseList;
      if ( !v38 )
        goto LABEL_67;
      if ( v34 >= LODWORD(v38->max_length) )
        goto LABEL_69;
      baseSprite = v38->m_Items[v34];
      if ( !baseSprite )
        goto LABEL_67;
      baseSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSprite, 0);
      if ( !baseSprite )
        goto LABEL_67;
      v47.fields.x = v32;
      v47.fields.y = v35;
      v47.fields.z = v36;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v47, 0);
      v39 = this->fields.skillIconList;
      if ( !v39 )
        goto LABEL_67;
      if ( v34 >= LODWORD(v39->max_length) )
        goto LABEL_69;
      if ( !idList )
        goto LABEL_67;
      if ( v34 >= LODWORD(idList->max_length) )
        goto LABEL_69;
      baseSprite = (UnityEngine_GameObject_o *)v39->m_Items[v34];
      if ( !baseSprite )
        goto LABEL_67;
      SkillIconComponent__Set((SkillIconComponent_o *)baseSprite, idList->m_Items[v34], 0);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_67;
      if ( v34 >= LODWORD(skillTitleRangeLabelList->max_length) )
        goto LABEL_69;
      if ( !titleList )
        goto LABEL_67;
      if ( v34 >= LODWORD(titleList->max_length) )
        goto LABEL_69;
      baseSprite = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v34];
      if ( !baseSprite )
        goto LABEL_67;
      UIRangeLabel__Set((UIRangeLabel_o *)baseSprite, titleList->m_Items[v34], 0, 1, 0, 0, 0);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_67;
      if ( v34 >= LODWORD(skillExplanationLabelList->max_length) )
        goto LABEL_69;
      if ( !v42 )
        goto LABEL_67;
      if ( v34 >= LODWORD(v42->max_length) )
        goto LABEL_69;
      baseSprite = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                 skillExplanationLabelList->m_Items[v34],
                                                 v42->m_Items[v34],
                                                 22,
                                                 0,
                                                 0);
    }
    skillBaseList = this->fields.skillBaseList;
    ++v34;
    v35 = v35 - (float)this->fields.skillPitch;
    if ( !skillBaseList )
      goto LABEL_67;
  }
}