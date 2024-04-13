void __fastcall ServantStatusListViewItemDrawCommandCodeSkill___ctor(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BalanceConfig_c *v17; // x0
  struct SkillIconComponent_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UIRangeLabel_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct UILabel_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_42ECB51 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SkillIconComponent___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UILabel___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UIRangeLabel___TypeInfo, v14, v15, v16);
    byte_42ECB51 = 1;
  }
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  v18 = (struct SkillIconComponent_array *)sub_B5D5DC(
                                             UnityEngine_GameObject___TypeInfo,
                                             (unsigned int)v17->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v18;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UIRangeLabel_array *)sub_B5D5DC(
                                       SkillIconComponent___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillTitleRangeLabelList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (struct UILabel_array *)sub_B5D5DC(
                                  UIRangeLabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillExplanationLabelList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Int32_array **)sub_B5D5DC(
                                 UILabel___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  *(_QWORD *)&this->fields.skillPitch = v39;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.skillPitch, v39, v40, v41, v42, v43, v44, v45);
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
    sub_B5D69C(this, method);
  if ( !v15->max_length )
  {
LABEL_25:
    v18 = sub_B5D6C8(this);
    sub_B5D668(v18, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UILabel_o *skillBaseList; // x21
  SkillIconComponent_o *titleSprite; // x0
  __int64 v15; // x1
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x9
  __int64 v17; // x11
  unsigned __int64 max_length; // x10
  signed __int64 v19; // x9
  int v20; // w21
  int v21; // w13
  float x; // s8
  float z; // s9
  float y; // s10
  UnityEngine_Object_o *baseSprite; // x20
  int v26; // w22
  float v27; // s8
  double v28; // d0
  double v29; // d0
  int v30; // w20
  float v31; // s8
  float v32; // s11
  float v33; // s9
  float v34; // s10
  struct SkillIconComponent_array *skillIconList; // x8
  float v36; // s8
  float v37; // s9
  __int64 v38; // x20
  float v39; // s10
  int v40; // w9
  struct SkillIconComponent_array *v41; // x8
  struct UIRangeLabel_array *v42; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  __int64 v44; // x8
  __int64 v45; // x0
  System_String_array *explanationList; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+10h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ECB50 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_12130/*"SERVANT_STATUS_EXPLANATION_SKILL_COMMAND_CODE"*/, v10, v11, v12);
    byte_42ECB50 = 1;
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
  titleSprite = (SkillIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12130/*"SERVANT_STATUS_EXPLANATION_SKILL_COMMAND_CODE"*/, 0LL);
  if ( !skillBaseList )
    goto LABEL_65;
  UILabel__set_text(skillBaseList, (System_String_o *)titleSprite, 0LL);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &explanationList, 0LL);
  if ( !idList )
    return;
  skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
  if ( !skillTitleRangeLabelList )
    goto LABEL_65;
  v17 = *(_QWORD *)&skillTitleRangeLabelList->max_length;
  if ( v17 << 32 < 1 )
  {
    v20 = 1;
  }
  else
  {
    max_length = idList->max_length;
    v19 = 0LL;
    v20 = 1;
    do
    {
      if ( v19 >= (int)max_length )
      {
        ++v19;
      }
      else
      {
        if ( v19 >= max_length )
        {
LABEL_67:
          v45 = sub_B5D6C8(titleSprite);
          sub_B5D668(v45, 0LL);
        }
        v21 = idList->m_Items[++v19];
        if ( v21 >= 1 )
          v20 = v19;
      }
    }
    while ( v19 < (int)v17 );
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  y = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  v26 = LODWORD(this->fields.baseSize.fields.y) * v20;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v27 = x + (float)v26;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    titleSprite = (SkillIconComponent_o *)this->fields.baseSprite;
    if ( !titleSprite )
      goto LABEL_65;
    v49.fields.x = z;
    v49.fields.y = v27;
    v49.fields.z = y;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)titleSprite, v49, 0LL);
  }
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_65;
  v28 = z;
  if ( z == INFINITY )
    v28 = -z;
  UIWidget__set_width((UIWidget_o *)titleSprite, (int)v28, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_65;
  v29 = v27;
  if ( v27 == INFINITY )
    v29 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)titleSprite, (int)v29, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.explanationLabel;
  v30 = v26 >= 0 ? v26 : v26 + 1;
  if ( !titleSprite )
    goto LABEL_65;
  v31 = this->fields.titleBasePosition.fields.z;
  v32 = this->fields.skillBasePosition.fields.x;
  v33 = this->fields.skillBasePosition.fields.y;
  titleSprite = (SkillIconComponent_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)titleSprite,
                                          0LL);
  if ( !titleSprite
    || (v34 = (float)(v30 >> 1),
        v50.fields.y = v32 + v34,
        v50.fields.x = v31,
        v50.fields.z = v33,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v50, 0LL),
        (skillIconList = this->fields.skillIconList) == 0LL) )
  {
LABEL_65:
    sub_B5D69C(titleSprite, v15);
  }
  v36 = this->fields.skillBasePosition.fields.z;
  v37 = *((float *)&this[1].klass + 1);
  v38 = 0LL;
  v39 = *(float *)&this[1].klass + v34;
  while ( 1 )
  {
    v40 = skillIconList->max_length;
    if ( (int)v38 >= v40 )
      break;
    if ( (unsigned int)v38 >= v40 )
      goto LABEL_67;
    titleSprite = skillIconList->m_Items[v38];
    if ( !titleSprite )
      goto LABEL_65;
    if ( (int)v38 >= v20 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 1, 0LL);
      v41 = this->fields.skillIconList;
      if ( !v41 )
        goto LABEL_65;
      if ( (unsigned int)v38 >= v41->max_length )
        goto LABEL_67;
      titleSprite = v41->m_Items[v38];
      if ( !titleSprite )
        goto LABEL_65;
      titleSprite = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)titleSprite,
                                              0LL);
      if ( !titleSprite )
        goto LABEL_65;
      v51.fields.x = v36;
      v51.fields.y = v39;
      v51.fields.z = v37;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v51, 0LL);
      v42 = this->fields.skillTitleRangeLabelList;
      if ( !v42 )
        goto LABEL_65;
      if ( (unsigned int)v38 >= v42->max_length )
        goto LABEL_67;
      if ( !idList )
        goto LABEL_65;
      if ( (unsigned int)v38 >= idList->max_length )
        goto LABEL_67;
      titleSprite = (SkillIconComponent_o *)v42->m_Items[v38];
      if ( !titleSprite )
        goto LABEL_65;
      SkillIconComponent__Set(titleSprite, idList->m_Items[v38 + 1], 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_65;
      if ( (unsigned int)v38 >= skillExplanationLabelList->max_length )
        goto LABEL_67;
      if ( !titleList )
        goto LABEL_65;
      if ( (unsigned int)v38 >= titleList->max_length )
        goto LABEL_67;
      titleSprite = (SkillIconComponent_o *)skillExplanationLabelList->m_Items[v38];
      if ( !titleSprite )
        goto LABEL_65;
      UIRangeLabel__Set((UIRangeLabel_o *)titleSprite, titleList->m_Items[v38], 0LL, 1, 0, 0LL);
      v44 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v44 )
        goto LABEL_65;
      if ( (unsigned int)v38 >= *(_DWORD *)(v44 + 24) )
        goto LABEL_67;
      if ( !explanationList )
        goto LABEL_65;
      if ( (unsigned int)v38 >= explanationList->max_length )
        goto LABEL_67;
      titleSprite = (SkillIconComponent_o *)WrapControlText__textAdjust(
                                              *(UILabel_o **)(v44 + 8 * v38 + 32),
                                              explanationList->m_Items[v38],
                                              22,
                                              0,
                                              0,
                                              0LL);
    }
    skillIconList = this->fields.skillIconList;
    ++v38;
    v39 = v39 - (float)SLODWORD(this->fields.baseSize.fields.y);
    if ( !skillIconList )
      goto LABEL_65;
  }
}