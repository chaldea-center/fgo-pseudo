void ServantStatusListViewItemDrawCommandCodeSkill___ctor(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
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

  if ( (byte_4CEBBC3 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&UnityEngine_GameObject___TypeInfo);
    sub_1C7BAE8(&SkillIconComponent___TypeInfo);
    sub_1C7BAE8(&UILabel___TypeInfo);
    sub_1C7BAE8(&UIRangeLabel___TypeInfo);
    byte_4CEBBC3 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C7BB90(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.skillBaseList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_1C7BB90(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v11;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.skillIconList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (struct UIRangeLabel_array *)sub_1C7BB90(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v18;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillTitleRangeLabelList,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UILabel_array *)sub_1C7BB90(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v25;
  sub_1C7BA8C(
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


void ServantStatusListViewItemDrawCommandCodeSkill__Awake(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  ServantStatusListViewItemDrawCommandCodeSkill_o *v3; // x19
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
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)skillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_GameObject__get_transform(
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
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)v4->m_Items[1];
    if ( !this )
      goto LABEL_24;
    y = localPosition.fields.y;
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_GameObject__get_transform(
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
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)v3->fields.titleSprite;
  v8 = v3->fields.skillPitch * LODWORD(skillBaseList->max_length);
  v9 = (float)(baseSprite->fields.mHeight - v8);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v9;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_Component__get_transform(
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
    sub_1C7BD40(this, method);
  if ( !LODWORD(v10->max_length) )
LABEL_25:
    sub_1C7BD48(this);
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)v10->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0);
  if ( !this )
    goto LABEL_24;
  v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.skillBasePosition.fields.x = v16.fields.x;
  v3->fields.skillBasePosition.fields.y = v16.fields.y - v12;
  v3->fields.skillBasePosition.fields.z = v16.fields.z;
}


int32_t ServantStatusListViewItemDrawCommandCodeSkill__GetKind(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        const MethodInfo *method)
{
  return 14;
}


void ServantStatusListViewItemDrawCommandCodeSkill__SetItem(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *explanationLabel; // x21
  UnityEngine_GameObject_o *baseSprite; // x0
  __int64 v9; // x1
  struct SkillIconComponent_array *skillIconList; // x9
  il2cpp_array_size_t max_length; // x11
  unsigned __int64 max_length_low; // x10
  signed __int64 v13; // x9
  int v14; // w21
  int v15; // w13
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  int v20; // w22
  float v21; // s8
  int32_t v22; // w1
  int32_t v23; // w1
  int v24; // w20
  float v25; // s8
  float v26; // s11
  float v27; // s9
  float v28; // s10
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  float v30; // s8
  float v31; // s9
  unsigned int v32; // w20
  float v33; // s10
  unsigned int v34; // w9
  struct UnityEngine_GameObject_array *v35; // x8
  struct SkillIconComponent_array *v36; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  System_String_array *v39; // [xsp+0h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-28h] BYREF
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEBBC2 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11983/*"SERVANT_STATUS_EXPLANATION_SKILL_COMMAND_CODE"*/);
    byte_4CEBBC2 = 1;
  }
  idList = 0;
  v39 = 0;
  titleList = 0;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseSprite = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11983/*"SERVANT_STATUS_EXPLANATION_SKILL_COMMAND_CODE"*/, 0);
  if ( !explanationLabel )
    goto LABEL_65;
  UILabel__set_text(explanationLabel, (System_String_o *)baseSprite, 0);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &v39, 0, 0);
  if ( !idList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_65;
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
LABEL_67:
          sub_1C7BD48(baseSprite);
        v15 = idList->m_Items[v13++];
        if ( v15 >= 1 )
          v14 = v13;
      }
    }
    while ( v13 < (int)max_length );
  }
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v20 = this->fields.skillPitch * v14;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v21 = y + (float)v20;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    baseSprite = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !baseSprite )
      goto LABEL_65;
    v42.fields.x = x;
    v42.fields.y = v21;
    v42.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)baseSprite, v42, 0);
  }
  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_65;
  v22 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)baseSprite, v22, 0);
  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_65;
  v23 = v21 == INFINITY ? 0x80000000 : (int)v21;
  UIWidget__set_height((UIWidget_o *)baseSprite, v23, 0);
  baseSprite = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v24 = v20 >= 0 ? v20 : v20 + 1;
  if ( !baseSprite )
    goto LABEL_65;
  v25 = this->fields.titleBasePosition.fields.x;
  v26 = this->fields.titleBasePosition.fields.y;
  v27 = this->fields.titleBasePosition.fields.z;
  baseSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)baseSprite,
                                             0);
  if ( !baseSprite
    || (v28 = (float)(v24 >> 1),
        v43.fields.y = v26 + v28,
        v43.fields.x = v25,
        v43.fields.z = v27,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v43, 0),
        (skillBaseList = this->fields.skillBaseList) == 0) )
  {
LABEL_65:
    sub_1C7BD40(baseSprite, v9);
  }
  v30 = this->fields.skillBasePosition.fields.z;
  v31 = this->fields.skillBasePosition.fields.x;
  v32 = 0;
  v33 = this->fields.skillBasePosition.fields.y + v28;
  while ( 1 )
  {
    v34 = skillBaseList->max_length;
    if ( (int)v32 >= (int)v34 )
      break;
    if ( v32 >= v34 )
      goto LABEL_67;
    baseSprite = skillBaseList->m_Items[v32];
    if ( !baseSprite )
      goto LABEL_65;
    if ( (int)v32 >= v14 )
    {
      UnityEngine_GameObject__SetActive(baseSprite, 0, 0);
    }
    else
    {
      UnityEngine_GameObject__SetActive(baseSprite, 1, 0);
      v35 = this->fields.skillBaseList;
      if ( !v35 )
        goto LABEL_65;
      if ( v32 >= LODWORD(v35->max_length) )
        goto LABEL_67;
      baseSprite = v35->m_Items[v32];
      if ( !baseSprite )
        goto LABEL_65;
      baseSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSprite, 0);
      if ( !baseSprite )
        goto LABEL_65;
      v44.fields.x = v31;
      v44.fields.y = v33;
      v44.fields.z = v30;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v44, 0);
      v36 = this->fields.skillIconList;
      if ( !v36 )
        goto LABEL_65;
      if ( v32 >= LODWORD(v36->max_length) )
        goto LABEL_67;
      if ( !idList )
        goto LABEL_65;
      if ( v32 >= LODWORD(idList->max_length) )
        goto LABEL_67;
      baseSprite = (UnityEngine_GameObject_o *)v36->m_Items[v32];
      if ( !baseSprite )
        goto LABEL_65;
      SkillIconComponent__Set((SkillIconComponent_o *)baseSprite, idList->m_Items[v32], 0);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_65;
      if ( v32 >= LODWORD(skillTitleRangeLabelList->max_length) )
        goto LABEL_67;
      if ( !titleList )
        goto LABEL_65;
      if ( v32 >= LODWORD(titleList->max_length) )
        goto LABEL_67;
      baseSprite = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v32];
      if ( !baseSprite )
        goto LABEL_65;
      UIRangeLabel__Set((UIRangeLabel_o *)baseSprite, titleList->m_Items[v32], 0, 1, 0, 0, 0);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_65;
      if ( v32 >= LODWORD(skillExplanationLabelList->max_length) )
        goto LABEL_67;
      if ( !v39 )
        goto LABEL_65;
      if ( v32 >= LODWORD(v39->max_length) )
        goto LABEL_67;
      baseSprite = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                 skillExplanationLabelList->m_Items[v32],
                                                 v39->m_Items[v32],
                                                 22,
                                                 0,
                                                 0);
    }
    skillBaseList = this->fields.skillBaseList;
    ++v32;
    v33 = v33 - (float)this->fields.skillPitch;
    if ( !skillBaseList )
      goto LABEL_65;
  }
}