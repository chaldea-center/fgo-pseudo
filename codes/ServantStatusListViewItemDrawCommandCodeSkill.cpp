void __fastcall ServantStatusListViewItemDrawCommandCodeSkill___ctor(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct SkillIconComponent_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct UIRangeLabel_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UILabel_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_42186A6 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, v3);
    sub_B0D8A4(&SkillIconComponent___TypeInfo, v4);
    sub_B0D8A4(&UILabel___TypeInfo, v5);
    sub_B0D8A4(&UIRangeLabel___TypeInfo, v6);
    byte_42186A6 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct SkillIconComponent_array *)sub_B0D8BC(
                                            UnityEngine_GameObject___TypeInfo,
                                            (unsigned int)v7->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (struct UIRangeLabel_array *)sub_B0D8BC(
                                       SkillIconComponent___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillTitleRangeLabelList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (struct UILabel_array *)sub_B0D8BC(
                                  UIRangeLabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v22;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillExplanationLabelList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Int32_array **)sub_B0D8BC(
                                 UILabel___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  *(_QWORD *)&this->fields.skillPitch = v29;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.skillPitch, v29, v30, v31, v32, v33, v34, v35);
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
    sub_B0D97C(this);
  if ( !v15->max_length )
  {
LABEL_25:
    v18 = sub_B0D9A8(this);
    sub_B0D948(v18, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  UILabel_o *skillBaseList; // x21
  SkillIconComponent_o *titleSprite; // x0
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x9
  __int64 v12; // x11
  unsigned __int64 max_length; // x10
  signed __int64 v14; // x9
  int v15; // w21
  int v16; // w13
  float x; // s8
  float z; // s9
  float y; // s10
  UnityEngine_Object_o *baseSprite; // x20
  int v21; // w22
  float v22; // s8
  double v23; // d0
  double v24; // d0
  int v25; // w20
  float v26; // s8
  float v27; // s11
  float v28; // s9
  float v29; // s10
  struct SkillIconComponent_array *skillIconList; // x8
  float v31; // s8
  float v32; // s9
  __int64 v33; // x20
  float v34; // s10
  int v35; // w9
  struct SkillIconComponent_array *v36; // x8
  struct UIRangeLabel_array *v37; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  __int64 v39; // x8
  __int64 v40; // x0
  System_String_array *explanationList; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+10h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42186A5 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, item);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_12018/*"SERVANT_STATUS_EXPLANATION_SKILL_COMMAND_CODE"*/, v8);
    byte_42186A5 = 1;
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
  titleSprite = (SkillIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12018/*"SERVANT_STATUS_EXPLANATION_SKILL_COMMAND_CODE"*/, 0LL);
  if ( !skillBaseList )
    goto LABEL_65;
  UILabel__set_text(skillBaseList, (System_String_o *)titleSprite, 0LL);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &explanationList, 0LL);
  if ( !idList )
    return;
  skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
  if ( !skillTitleRangeLabelList )
    goto LABEL_65;
  v12 = *(_QWORD *)&skillTitleRangeLabelList->max_length;
  if ( v12 << 32 < 1 )
  {
    v15 = 1;
  }
  else
  {
    max_length = idList->max_length;
    v14 = 0LL;
    v15 = 1;
    do
    {
      if ( v14 >= (int)max_length )
      {
        ++v14;
      }
      else
      {
        if ( v14 >= max_length )
        {
LABEL_67:
          v40 = sub_B0D9A8(titleSprite);
          sub_B0D948(v40, 0LL);
        }
        v16 = idList->m_Items[++v14];
        if ( v16 >= 1 )
          v15 = v14;
      }
    }
    while ( v14 < (int)v12 );
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  y = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  v21 = LODWORD(this->fields.baseSize.fields.y) * v15;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v22 = x + (float)v21;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    titleSprite = (SkillIconComponent_o *)this->fields.baseSprite;
    if ( !titleSprite )
      goto LABEL_65;
    v44.fields.x = z;
    v44.fields.y = v22;
    v44.fields.z = y;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)titleSprite, v44, 0LL);
  }
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_65;
  v23 = z;
  if ( z == INFINITY )
    v23 = -z;
  UIWidget__set_width((UIWidget_o *)titleSprite, (int)v23, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_65;
  v24 = v22;
  if ( v22 == INFINITY )
    v24 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)titleSprite, (int)v24, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.explanationLabel;
  v25 = v21 >= 0 ? v21 : v21 + 1;
  if ( !titleSprite )
    goto LABEL_65;
  v26 = this->fields.titleBasePosition.fields.z;
  v27 = this->fields.skillBasePosition.fields.x;
  v28 = this->fields.skillBasePosition.fields.y;
  titleSprite = (SkillIconComponent_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)titleSprite,
                                          0LL);
  if ( !titleSprite
    || (v29 = (float)(v25 >> 1),
        v45.fields.y = v27 + v29,
        v45.fields.x = v26,
        v45.fields.z = v28,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v45, 0LL),
        (skillIconList = this->fields.skillIconList) == 0LL) )
  {
LABEL_65:
    sub_B0D97C(titleSprite);
  }
  v31 = this->fields.skillBasePosition.fields.z;
  v32 = *((float *)&this[1].klass + 1);
  v33 = 0LL;
  v34 = *(float *)&this[1].klass + v29;
  while ( 1 )
  {
    v35 = skillIconList->max_length;
    if ( (int)v33 >= v35 )
      break;
    if ( (unsigned int)v33 >= v35 )
      goto LABEL_67;
    titleSprite = skillIconList->m_Items[v33];
    if ( !titleSprite )
      goto LABEL_65;
    if ( (int)v33 >= v15 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 1, 0LL);
      v36 = this->fields.skillIconList;
      if ( !v36 )
        goto LABEL_65;
      if ( (unsigned int)v33 >= v36->max_length )
        goto LABEL_67;
      titleSprite = v36->m_Items[v33];
      if ( !titleSprite )
        goto LABEL_65;
      titleSprite = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)titleSprite,
                                              0LL);
      if ( !titleSprite )
        goto LABEL_65;
      v46.fields.x = v31;
      v46.fields.y = v34;
      v46.fields.z = v32;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v46, 0LL);
      v37 = this->fields.skillTitleRangeLabelList;
      if ( !v37 )
        goto LABEL_65;
      if ( (unsigned int)v33 >= v37->max_length )
        goto LABEL_67;
      if ( !idList )
        goto LABEL_65;
      if ( (unsigned int)v33 >= idList->max_length )
        goto LABEL_67;
      titleSprite = (SkillIconComponent_o *)v37->m_Items[v33];
      if ( !titleSprite )
        goto LABEL_65;
      SkillIconComponent__Set(titleSprite, idList->m_Items[v33 + 1], 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_65;
      if ( (unsigned int)v33 >= skillExplanationLabelList->max_length )
        goto LABEL_67;
      if ( !titleList )
        goto LABEL_65;
      if ( (unsigned int)v33 >= titleList->max_length )
        goto LABEL_67;
      titleSprite = (SkillIconComponent_o *)skillExplanationLabelList->m_Items[v33];
      if ( !titleSprite )
        goto LABEL_65;
      UIRangeLabel__Set((UIRangeLabel_o *)titleSprite, titleList->m_Items[v33], 0LL, 1, 0, 0LL);
      v39 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v39 )
        goto LABEL_65;
      if ( (unsigned int)v33 >= *(_DWORD *)(v39 + 24) )
        goto LABEL_67;
      if ( !explanationList )
        goto LABEL_65;
      if ( (unsigned int)v33 >= explanationList->max_length )
        goto LABEL_67;
      titleSprite = (SkillIconComponent_o *)WrapControlText__textAdjust(
                                              *(UILabel_o **)(v39 + 8 * v33 + 32),
                                              explanationList->m_Items[v33],
                                              22,
                                              0,
                                              0,
                                              0LL);
    }
    skillIconList = this->fields.skillIconList;
    ++v33;
    v34 = v34 - (float)SLODWORD(this->fields.baseSize.fields.y);
    if ( !skillIconList )
      goto LABEL_65;
  }
}