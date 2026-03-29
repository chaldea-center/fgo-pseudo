void ServantStatusListViewItemDrawClassSkill___cctor(const MethodInfo *method)
{
  if ( (byte_4D2DB61 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusListViewItemDrawClassSkill_TypeInfo);
    byte_4D2DB61 = 1;
  }
  *ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawClassSkill_StaticFields)0x2800000012LL;
}


void ServantStatusListViewItemDrawClassSkill___ctor(
        ServantStatusListViewItemDrawClassSkill_o *this,
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

  if ( (byte_4D2DB60 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&UnityEngine_GameObject___TypeInfo);
    sub_1C93AD4(&SkillIconComponent___TypeInfo);
    sub_1C93AD4(&UILabel___TypeInfo);
    sub_1C93AD4(&UIRangeLabel___TypeInfo);
    byte_4D2DB60 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C93B7C(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.skillBaseList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_1C93B7C(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v11;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.skillIconList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (struct UIRangeLabel_array *)sub_1C93B7C(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v18;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillTitleRangeLabelList,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UILabel_array *)sub_1C93B7C(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v25;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillExplanationLabelList,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.transformNameAddHeight = 34;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawClassSkill__Awake(
        ServantStatusListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  ServantStatusListViewItemDrawClassSkill_o *v3; // x19
  struct UnityEngine_GameObject_array *v4; // x8
  float v5; // s8
  unsigned int v6; // w9
  struct UISprite_o *baseSprite; // x9
  int v8; // w8
  int v9; // w10
  int v10; // w20
  float v11; // s1
  struct UnityEngine_GameObject_array *v12; // x8
  int v13; // w9
  float v14; // s8
  float y; // s1
  float v16; // s1
  UnityEngine_Vector3_o localPosition; // 0:kr20_12.12
  UnityEngine_Vector3_o v18; // 0:kr34_12.12

  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_27;
  v3 = this;
  if ( SLODWORD(skillBaseList->max_length) >= 2 )
  {
    this = (ServantStatusListViewItemDrawClassSkill_o *)skillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_27;
    this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0);
    if ( !this )
      goto LABEL_27;
    y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y;
    v4 = v3->fields.skillBaseList;
    if ( !v4 )
      goto LABEL_27;
    if ( LODWORD(v4->max_length) <= 1 )
      goto LABEL_28;
    this = (ServantStatusListViewItemDrawClassSkill_o *)v4->m_Items[1];
    if ( !this )
      goto LABEL_27;
    v5 = y;
    this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0);
    if ( !this )
      goto LABEL_27;
    v16 = COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y));
    skillBaseList = v3->fields.skillBaseList;
    v6 = (float)(v5 - v16) == INFINITY ? 0x80000000 : (int)(float)(v5 - v16);
    v3->fields.skillPitch = v6;
    if ( !skillBaseList )
      goto LABEL_27;
  }
  baseSprite = v3->fields.baseSprite;
  v8 = v3->fields.skillPitch * LODWORD(skillBaseList->max_length);
  v9 = v8 >= 0 ? v8 : v8 + 1;
  if ( !baseSprite )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawClassSkill_o *)v3->fields.titleSprite;
  v10 = v8 - (v9 & 0xFFFFFFFE) + v8;
  v11 = (float)(baseSprite->fields.mHeight - v10);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v11;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
  if ( !this )
    goto LABEL_27;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v12 = v3->fields.skillBaseList;
  v13 = v10 >= 0 ? v10 : v10 + 1;
  v14 = (float)(v13 >> 1);
  v3->fields.titleBasePosition.fields.x = localPosition.fields.x;
  v3->fields.titleBasePosition.fields.y = localPosition.fields.y - v14;
  v3->fields.titleBasePosition.fields.z = localPosition.fields.z;
  if ( !v12 )
LABEL_27:
    sub_1C93D2C(this, method);
  if ( !LODWORD(v12->max_length) )
LABEL_28:
    sub_1C93D34(this);
  this = (ServantStatusListViewItemDrawClassSkill_o *)v12->m_Items[0];
  if ( !this )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)this,
                                                        0);
  if ( !this )
    goto LABEL_27;
  v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.skillBasePosition.fields.x = v18.fields.x;
  v3->fields.skillBasePosition.fields.y = v18.fields.y - v14;
  v3->fields.skillBasePosition.fields.z = v18.fields.z;
}


int32_t ServantStatusListViewItemDrawClassSkill__GetKind(
        ServantStatusListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  return 5;
}


void ServantStatusListViewItemDrawClassSkill__SetItem(
        ServantStatusListViewItemDrawClassSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *explanationLabel; // x21
  UnityEngine_GameObject_o *transformNameLabel; // x0
  __int64 v9; // x1
  struct SkillIconComponent_array *skillIconList; // x9
  il2cpp_array_size_t max_length; // x11
  unsigned __int64 max_length_low; // x10
  signed __int64 v13; // x9
  int v14; // w22
  int v15; // w13
  int v16; // w24
  int32_t transformNameAddHeight; // w25
  UILabel_o *v18; // x21
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  __int64 v20; // x27
  unsigned __int64 v21; // x28
  struct UILabel_array *skillExplanationLabelList; // x8
  ServantStatusListViewItemDrawClassSkill_c *v23; // x0
  UILabel_o *v24; // x20
  System_String_o *v25; // x21
  struct UILabel_array *v26; // x8
  __int64 v27; // x8
  int v28; // w10
  int32_t skillPitch; // w8
  int32_t v30; // w9
  int32_t v31; // w9
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  int v36; // w21
  float v37; // s8
  int32_t v38; // w1
  int32_t v39; // w1
  int v40; // w20
  float v41; // s8
  float v42; // s10
  float v43; // s9
  int v44; // w21
  struct UnityEngine_GameObject_array *v45; // x8
  float v46; // s8
  float v47; // s9
  unsigned int v48; // w20
  float v49; // s10
  unsigned int v50; // w9
  struct UnityEngine_GameObject_array *v51; // x8
  struct SkillIconComponent_array *v52; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  struct UILabel_array *v54; // x8
  UILabel_o *v55; // x8
  int32_t mHeight; // w21
  int32_t v57; // w9
  System_String_array *v58; // [xsp+0h] [xbp-90h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-88h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2DB5F & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ServantStatusListViewItemDrawClassSkill_TypeInfo);
    sub_1C93AD4(&StringLiteral_12021/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    byte_4D2DB5F = 1;
  }
  idList = 0;
  v58 = 0;
  titleList = 0;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transformNameLabel = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12021/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0);
  if ( !explanationLabel )
    goto LABEL_100;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameLabel, 0);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &v58, 1, 0);
  if ( !idList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_100;
  max_length = skillIconList->max_length;
  if ( (__int64)(max_length << 32) < 1 )
  {
    v14 = 1;
  }
  else
  {
    max_length_low = LODWORD(idList->max_length);
    v13 = 0;
    v14 = 1;
    do
    {
      if ( v13 >= (int)max_length_low )
      {
        ++v13;
      }
      else
      {
        if ( v13 >= max_length_low )
LABEL_102:
          sub_1C93D34(transformNameLabel);
        v15 = idList->m_Items[v13++];
        if ( v15 >= 1 )
          v14 = v13;
      }
    }
    while ( v13 < (int)max_length );
  }
  if ( item->fields._IsTransformServant_k__BackingField && !item->fields._TransformIsNotClassSkillChange_k__BackingField )
  {
    transformNameLabel = (UnityEngine_GameObject_o *)this->fields.transformNameLabel;
    if ( !transformNameLabel )
      goto LABEL_100;
    UIWidget__set_color((UIWidget_o *)transformNameLabel, item->fields._TransformNameLabelColor_k__BackingField, 0);
    transformNameLabel = (UnityEngine_GameObject_o *)this->fields.transformNameSprite;
    if ( !transformNameLabel )
      goto LABEL_100;
    UIWidget__set_color((UIWidget_o *)transformNameLabel, item->fields._TransformNameSpriteColor_k__BackingField, 0);
    transformNameLabel = (UnityEngine_GameObject_o *)this->fields.transformNameSprite;
    if ( !transformNameLabel )
      goto LABEL_100;
    transformNameLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transformNameLabel, 0);
    if ( !transformNameLabel )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive(transformNameLabel, 1, 0);
    v18 = this->fields.transformNameLabel;
    transformNameLabel = (UnityEngine_GameObject_o *)ServantStatusListViewItem__GetTransformName(item, 0);
    if ( !v18 )
      goto LABEL_100;
    UILabel__set_text(v18, (System_String_o *)transformNameLabel, 0);
    transformNameAddHeight = this->fields.transformNameAddHeight;
    v16 = -transformNameAddHeight;
  }
  else
  {
    transformNameLabel = (UnityEngine_GameObject_o *)this->fields.transformNameSprite;
    if ( !transformNameLabel )
      goto LABEL_100;
    transformNameLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transformNameLabel, 0);
    if ( !transformNameLabel )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive(transformNameLabel, 0, 0);
    v16 = 0;
    transformNameAddHeight = 0;
  }
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_100;
  v20 = 4;
  while ( 1 )
  {
    v21 = v20 - 4;
    if ( v20 - 4 >= SLODWORD(skillBaseList->max_length) )
      break;
    if ( (__int64)v21 < v14 )
    {
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_100;
      if ( v21 >= LODWORD(skillExplanationLabelList->max_length) )
        goto LABEL_102;
      if ( !v58 )
        goto LABEL_100;
      if ( v21 >= LODWORD(v58->max_length) )
        goto LABEL_102;
      v23 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v24 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v20);
      v25 = (System_String_o *)*((_QWORD *)&v58->obj.klass + v20);
      if ( !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        v23 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      transformNameLabel = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                         v24,
                                                         v25,
                                                         v23->static_fields->DETAIL_FONT_SIZE,
                                                         v23->static_fields->DETAIL_FONT_SIZE,
                                                         0);
      v26 = this->fields.skillExplanationLabelList;
      if ( !v26 )
        goto LABEL_100;
      if ( v21 >= LODWORD(v26->max_length) )
        goto LABEL_102;
      v27 = *((_QWORD *)&v26->obj.klass + v20);
      if ( !v27 )
        goto LABEL_100;
      v28 = *(_DWORD *)(v27 + 172);
      skillPitch = this->fields.skillPitch;
      v30 = v28 + ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v30 >= skillPitch )
        transformNameAddHeight += v30;
      else
        transformNameAddHeight += skillPitch;
    }
    skillBaseList = this->fields.skillBaseList;
    ++v20;
    if ( !skillBaseList )
      goto LABEL_100;
  }
  if ( transformNameAddHeight >= 0 )
    v31 = transformNameAddHeight;
  else
    v31 = transformNameAddHeight + 1;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v36 = transformNameAddHeight - (v31 & 0xFFFFFFFE) + transformNameAddHeight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v37 = y + (float)v36;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    transformNameLabel = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !transformNameLabel )
      goto LABEL_100;
    v61.fields.x = x;
    v61.fields.y = v37;
    v61.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)transformNameLabel, v61, 0);
  }
  transformNameLabel = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !transformNameLabel )
    goto LABEL_100;
  v38 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)transformNameLabel, v38, 0);
  transformNameLabel = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !transformNameLabel )
    goto LABEL_100;
  v39 = v37 == INFINITY ? 0x80000000 : (int)v37;
  UIWidget__set_height((UIWidget_o *)transformNameLabel, v39, 0);
  transformNameLabel = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v40 = v36 >= 0 ? v36 : v36 + 1;
  if ( !transformNameLabel )
    goto LABEL_100;
  v41 = this->fields.titleBasePosition.fields.x;
  v42 = this->fields.titleBasePosition.fields.y;
  v43 = this->fields.titleBasePosition.fields.z;
  transformNameLabel = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)transformNameLabel,
                                                     0);
  if ( !transformNameLabel
    || (v44 = v40 >> 1,
        v62.fields.y = v42 + (float)(v40 >> 1),
        v62.fields.x = v41,
        v62.fields.z = v43,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transformNameLabel, v62, 0),
        (v45 = this->fields.skillBaseList) == 0) )
  {
LABEL_100:
    sub_1C93D2C(transformNameLabel, v9);
  }
  v46 = this->fields.skillBasePosition.fields.z;
  v47 = this->fields.skillBasePosition.fields.x;
  v48 = 0;
  v49 = this->fields.skillBasePosition.fields.y + (float)(v44 + v16);
  while ( 1 )
  {
    v50 = v45->max_length;
    if ( (int)v48 >= (int)v50 )
      break;
    if ( v48 >= v50 )
      goto LABEL_102;
    transformNameLabel = v45->m_Items[v48];
    if ( !transformNameLabel )
      goto LABEL_100;
    if ( (int)v48 >= v14 )
    {
      UnityEngine_GameObject__SetActive(transformNameLabel, 0, 0);
    }
    else
    {
      UnityEngine_GameObject__SetActive(transformNameLabel, 1, 0);
      v51 = this->fields.skillBaseList;
      if ( !v51 )
        goto LABEL_100;
      if ( v48 >= LODWORD(v51->max_length) )
        goto LABEL_102;
      transformNameLabel = v51->m_Items[v48];
      if ( !transformNameLabel )
        goto LABEL_100;
      transformNameLabel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transformNameLabel, 0);
      if ( !transformNameLabel )
        goto LABEL_100;
      v63.fields.x = v47;
      v63.fields.y = v49;
      v63.fields.z = v46;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transformNameLabel, v63, 0);
      v52 = this->fields.skillIconList;
      if ( !v52 )
        goto LABEL_100;
      if ( v48 >= LODWORD(v52->max_length) )
        goto LABEL_102;
      if ( !idList )
        goto LABEL_100;
      if ( v48 >= LODWORD(idList->max_length) )
        goto LABEL_102;
      transformNameLabel = (UnityEngine_GameObject_o *)v52->m_Items[v48];
      if ( !transformNameLabel )
        goto LABEL_100;
      SkillIconComponent__Set((SkillIconComponent_o *)transformNameLabel, idList->m_Items[v48], 0);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_100;
      if ( v48 >= LODWORD(skillTitleRangeLabelList->max_length) )
        goto LABEL_102;
      if ( !titleList )
        goto LABEL_100;
      if ( v48 >= LODWORD(titleList->max_length) )
        goto LABEL_102;
      transformNameLabel = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v48];
      if ( !transformNameLabel )
        goto LABEL_100;
      UIRangeLabel__Set((UIRangeLabel_o *)transformNameLabel, titleList->m_Items[v48], 0, 1, 0, 0, 0);
    }
    v54 = this->fields.skillExplanationLabelList;
    if ( !v54 )
      goto LABEL_100;
    if ( v48 >= LODWORD(v54->max_length) )
      goto LABEL_102;
    v55 = v54->m_Items[v48];
    if ( v55 )
    {
      transformNameLabel = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      mHeight = v55->fields.mHeight;
      if ( !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        transformNameLabel = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      ++v48;
      v45 = this->fields.skillBaseList;
      v57 = *(_DWORD *)(transformNameLabel[7].fields.m_CachedPtr + 4) + mHeight;
      if ( v57 < this->fields.skillPitch )
        v57 = this->fields.skillPitch;
      v49 = v49 - (float)v57;
      if ( v45 )
        continue;
    }
    goto LABEL_100;
  }
}