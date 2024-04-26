void __fastcall ServantStatusListViewItemDrawCommandCodeSkill___ctor(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct SkillIconComponent_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UIRangeLabel_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UILabel_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4355DF3 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&UnityEngine_GameObject___TypeInfo);
    sub_B70694(&SkillIconComponent___TypeInfo);
    sub_B70694(&UILabel___TypeInfo);
    sub_B70694(&UIRangeLabel___TypeInfo);
    byte_4355DF3 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct SkillIconComponent_array *)sub_B706AC(
                                            UnityEngine_GameObject___TypeInfo,
                                            (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v4;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct UIRangeLabel_array *)sub_B706AC(
                                       SkillIconComponent___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v11;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.skillTitleRangeLabelList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (struct UILabel_array *)sub_B706AC(
                                  UIRangeLabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v18;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.skillExplanationLabelList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Int32_array **)sub_B706AC(
                                 UILabel___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  *(_QWORD *)&this->fields.skillPitch = v25;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.skillPitch, v25, v26, v27, v28, v29, v30, v31);
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawCommandCodeSkill__Awake(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        const MethodInfo *method)
{
  struct SkillIconComponent_array *skillIconList; // x8
  ServantStatusListViewItemDrawCommandCodeSkill_o *v3; // x19
  float v4; // s1
  struct SkillIconComponent_array *v5; // x8
  float v6; // s8
  float v7; // s0
  double v8; // d0
  struct UISprite_o *titleSprite; // x9
  int v10; // w20
  float v11; // s1
  float v12; // s0
  float v13; // s1
  float v14; // s2
  struct SkillIconComponent_array *v15; // x8
  int v16; // w9
  float v17; // s8
  __int64 v18; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_24;
  v3 = this;
  if ( (int)skillIconList->max_length >= 2 )
  {
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)skillIconList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v4 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v5 = v3->fields.skillIconList;
    if ( !v5 )
      goto LABEL_24;
    if ( v5->max_length <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)v5->m_Items[1];
    if ( !this )
      goto LABEL_24;
    v6 = v4;
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL);
    if ( !this )
      goto LABEL_24;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v7 = v6 - localPosition.fields.y;
    skillIconList = v3->fields.skillIconList;
    v8 = (float)(v6 - localPosition.fields.y) == INFINITY ? -v7 : v7;
    LODWORD(v3->fields.baseSize.fields.y) = (int)v8;
    if ( !skillIconList )
      goto LABEL_24;
  }
  titleSprite = v3->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)v3->fields.explanationLabel;
  v10 = LODWORD(v3->fields.baseSize.fields.y) * skillIconList->max_length;
  v11 = (float)(titleSprite->fields.mHeight - v10);
  v3->fields.baseSize.fields.z = (float)titleSprite->fields.mWidth;
  v3->fields.titleBasePosition.fields.x = v11;
  v3->fields.titleBasePosition.fields.y = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v15 = v3->fields.skillIconList;
  v16 = v10 >= 0 ? v10 : v10 + 1;
  v17 = (float)(v16 >> 1);
  v3->fields.titleBasePosition.fields.z = v12;
  v3->fields.skillBasePosition.fields.x = v13 - v17;
  v3->fields.skillBasePosition.fields.y = v14;
  if ( !v15 )
LABEL_24:
    sub_B7076C(this, method);
  if ( !v15->max_length )
  {
LABEL_25:
    v18 = sub_B70798(this);
    sub_B70738(v18, 0LL);
  }
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)v15->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_24;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.skillBasePosition.fields.z = v20.fields.x;
  *(float *)&v3[1].klass = v20.fields.y - v17;
  HIDWORD(v3[1].klass) = LODWORD(v20.fields.z);
}


int32_t __fastcall ServantStatusListViewItemDrawCommandCodeSkill__GetKind(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        const MethodInfo *method)
{
  return 14;
}


void __fastcall ServantStatusListViewItemDrawCommandCodeSkill__SetItem(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *skillBaseList; // x21
  SkillIconComponent_o *titleSprite; // x0
  __int64 v9; // x1
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x9
  __int64 v11; // x11
  unsigned __int64 max_length; // x10
  signed __int64 v13; // x9
  int v14; // w21
  int v15; // w13
  float x; // s8
  float z; // s9
  float y; // s10
  UnityEngine_Object_o *baseSprite; // x20
  int v20; // w22
  float v21; // s8
  double v22; // d0
  double v23; // d0
  int v24; // w20
  float v25; // s8
  float v26; // s11
  float v27; // s9
  float v28; // s10
  struct SkillIconComponent_array *skillIconList; // x8
  float v30; // s8
  float v31; // s9
  __int64 v32; // x20
  float v33; // s10
  int v34; // w9
  struct SkillIconComponent_array *v35; // x8
  struct UIRangeLabel_array *v36; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  __int64 v38; // x8
  __int64 v39; // x0
  System_String_array *explanationList; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+10h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4355DF2 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_12151/*"SERVANT_STATUS_EXPLANATION_SKILL_COMMAND_CODE"*/);
    byte_4355DF2 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( !item || !mode )
    return;
  skillBaseList = (UILabel_o *)this->fields.skillBaseList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleSprite = (SkillIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12151/*"SERVANT_STATUS_EXPLANATION_SKILL_COMMAND_CODE"*/, 0LL);
  if ( !skillBaseList )
    goto LABEL_65;
  UILabel__set_text(skillBaseList, (System_String_o *)titleSprite, 0LL);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &explanationList, 0, 0LL);
  if ( !idList )
    return;
  skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
  if ( !skillTitleRangeLabelList )
    goto LABEL_65;
  v11 = *(_QWORD *)&skillTitleRangeLabelList->max_length;
  if ( v11 << 32 < 1 )
  {
    v14 = 1;
  }
  else
  {
    max_length = idList->max_length;
    v13 = 0LL;
    v14 = 1;
    do
    {
      if ( v13 >= (int)max_length )
      {
        ++v13;
      }
      else
      {
        if ( v13 >= max_length )
        {
LABEL_67:
          v39 = sub_B70798(titleSprite);
          sub_B70738(v39, 0LL);
        }
        v15 = idList->m_Items[++v13];
        if ( v15 >= 1 )
          v14 = v13;
      }
    }
    while ( v13 < (int)v11 );
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  y = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  v20 = LODWORD(this->fields.baseSize.fields.y) * v14;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v21 = x + (float)v20;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    titleSprite = (SkillIconComponent_o *)this->fields.baseSprite;
    if ( !titleSprite )
      goto LABEL_65;
    v43.fields.x = z;
    v43.fields.y = v21;
    v43.fields.z = y;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)titleSprite, v43, 0LL);
  }
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_65;
  v22 = z;
  if ( z == INFINITY )
    v22 = -z;
  UIWidget__set_width((UIWidget_o *)titleSprite, (int)v22, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_65;
  v23 = v21;
  if ( v21 == INFINITY )
    v23 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)titleSprite, (int)v23, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.explanationLabel;
  v24 = v20 >= 0 ? v20 : v20 + 1;
  if ( !titleSprite )
    goto LABEL_65;
  v25 = this->fields.titleBasePosition.fields.z;
  v26 = this->fields.skillBasePosition.fields.x;
  v27 = this->fields.skillBasePosition.fields.y;
  titleSprite = (SkillIconComponent_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)titleSprite,
                                          0LL);
  if ( !titleSprite
    || (v28 = (float)(v24 >> 1),
        v44.fields.y = v26 + v28,
        v44.fields.x = v25,
        v44.fields.z = v27,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v44, 0LL),
        (skillIconList = this->fields.skillIconList) == 0LL) )
  {
LABEL_65:
    sub_B7076C(titleSprite, v9);
  }
  v30 = this->fields.skillBasePosition.fields.z;
  v31 = *((float *)&this[1].klass + 1);
  v32 = 0LL;
  v33 = *(float *)&this[1].klass + v28;
  while ( 1 )
  {
    v34 = skillIconList->max_length;
    if ( (int)v32 >= v34 )
      break;
    if ( (unsigned int)v32 >= v34 )
      goto LABEL_67;
    titleSprite = skillIconList->m_Items[v32];
    if ( !titleSprite )
      goto LABEL_65;
    if ( (int)v32 >= v14 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 1, 0LL);
      v35 = this->fields.skillIconList;
      if ( !v35 )
        goto LABEL_65;
      if ( (unsigned int)v32 >= v35->max_length )
        goto LABEL_67;
      titleSprite = v35->m_Items[v32];
      if ( !titleSprite )
        goto LABEL_65;
      titleSprite = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)titleSprite,
                                              0LL);
      if ( !titleSprite )
        goto LABEL_65;
      v45.fields.x = v30;
      v45.fields.y = v33;
      v45.fields.z = v31;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v45, 0LL);
      v36 = this->fields.skillTitleRangeLabelList;
      if ( !v36 )
        goto LABEL_65;
      if ( (unsigned int)v32 >= v36->max_length )
        goto LABEL_67;
      if ( !idList )
        goto LABEL_65;
      if ( (unsigned int)v32 >= idList->max_length )
        goto LABEL_67;
      titleSprite = (SkillIconComponent_o *)v36->m_Items[v32];
      if ( !titleSprite )
        goto LABEL_65;
      SkillIconComponent__Set(titleSprite, idList->m_Items[v32 + 1], 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_65;
      if ( (unsigned int)v32 >= skillExplanationLabelList->max_length )
        goto LABEL_67;
      if ( !titleList )
        goto LABEL_65;
      if ( (unsigned int)v32 >= titleList->max_length )
        goto LABEL_67;
      titleSprite = (SkillIconComponent_o *)skillExplanationLabelList->m_Items[v32];
      if ( !titleSprite )
        goto LABEL_65;
      UIRangeLabel__Set((UIRangeLabel_o *)titleSprite, titleList->m_Items[v32], 0LL, 1, 0, 0LL);
      v38 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v38 )
        goto LABEL_65;
      if ( (unsigned int)v32 >= *(_DWORD *)(v38 + 24) )
        goto LABEL_67;
      if ( !explanationList )
        goto LABEL_65;
      if ( (unsigned int)v32 >= explanationList->max_length )
        goto LABEL_67;
      titleSprite = (SkillIconComponent_o *)WrapControlText__textAdjust(
                                              *(UILabel_o **)(v38 + 8 * v32 + 32),
                                              explanationList->m_Items[v32],
                                              22,
                                              0,
                                              0,
                                              0LL);
    }
    skillIconList = this->fields.skillIconList;
    ++v32;
    v33 = v33 - (float)SLODWORD(this->fields.baseSize.fields.y);
    if ( !skillIconList )
      goto LABEL_65;
  }
}