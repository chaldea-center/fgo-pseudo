void __fastcall ServantStatusListViewItemDrawClassSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4219D69 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItemDrawClassSkill_TypeInfo, v1);
    byte_4219D69 = 1;
  }
  ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->MAX_HEIGHT = 500;
  ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawClassSkill___ctor(
        ServantStatusListViewItemDrawClassSkill_o *this,
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

  if ( (byte_4219D68 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, v3);
    sub_B0D8A4(&SkillIconComponent___TypeInfo, v4);
    sub_B0D8A4(&UILabel___TypeInfo, v5);
    sub_B0D8A4(&UIRangeLabel___TypeInfo, v6);
    byte_4219D68 = 1;
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
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawClassSkill__Awake(
        ServantStatusListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  struct SkillIconComponent_array *skillIconList; // x8
  ServantStatusListViewItemDrawClassSkill_o *v3; // x19
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
    this = (ServantStatusListViewItemDrawClassSkill_o *)skillIconList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
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
    this = (ServantStatusListViewItemDrawClassSkill_o *)v5->m_Items[1];
    if ( !this )
      goto LABEL_24;
    v6 = v4;
    this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
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
  this = (ServantStatusListViewItemDrawClassSkill_o *)v3->fields.explanationLabel;
  v10 = LODWORD(v3->fields.baseSize.fields.y) * skillIconList->max_length;
  v11 = (float)(titleSprite->fields.mHeight - v10);
  v3->fields.baseSize.fields.z = (float)titleSprite->fields.mWidth;
  v3->fields.titleBasePosition.fields.x = v11;
  v3->fields.titleBasePosition.fields.y = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_Component__get_transform(
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
  this = (ServantStatusListViewItemDrawClassSkill_o *)v15->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_24;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.skillBasePosition.fields.z = v20.fields.x;
  *(float *)&v3[1].klass = v20.fields.y - v17;
  HIDWORD(v3[1].klass) = LODWORD(v20.fields.z);
}


int32_t __fastcall ServantStatusListViewItemDrawClassSkill__GetKind(
        ServantStatusListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  return 5;
}


void __fastcall ServantStatusListViewItemDrawClassSkill__SetItem(
        ServantStatusListViewItemDrawClassSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *skillBaseList; // x21
  SkillIconComponent_o *titleSprite; // x0
  const MethodInfo *v12; // x4
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x9
  __int64 v14; // x11
  unsigned __int64 max_length; // x10
  signed __int64 v16; // x9
  int v17; // w22
  int v18; // w13
  struct SkillIconComponent_array *skillIconList; // x8
  int v20; // w24
  __int64 v21; // x26
  unsigned __int64 v22; // x27
  __int64 v23; // x8
  ServantStatusListViewItemDrawClassSkill_c *v24; // x0
  UILabel_o *v25; // x20
  System_String_o *v26; // x21
  __int64 v27; // x8
  __int64 v28; // x8
  int v29; // w10
  float y; // w8
  int v31; // w9
  float x; // s8
  float z; // s9
  float v34; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v36; // s8
  double v37; // d0
  double v38; // d0
  int v39; // w20
  float v40; // s8
  float v41; // s11
  float v42; // s9
  float v43; // s10
  struct SkillIconComponent_array *v44; // x8
  float v45; // s8
  float v46; // s9
  __int64 v47; // x20
  float v48; // s10
  int v49; // w9
  struct SkillIconComponent_array *v50; // x8
  struct UIRangeLabel_array *v51; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  __int64 v53; // x8
  __int64 v54; // x8
  int v55; // w21
  float v56; // w9
  __int64 v57; // x0
  System_String_array *v58; // [xsp+0h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4219D67 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, item);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&ServantStatusListViewItemDrawClassSkill_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_12019/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v9);
    byte_4219D67 = 1;
  }
  idList = 0LL;
  v58 = 0LL;
  titleList = 0LL;
  LODWORD(this->fields.baseButton) = mode;
  if ( !item || !mode )
    return;
  skillBaseList = (UILabel_o *)this->fields.skillBaseList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleSprite = (SkillIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12019/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
  if ( !skillBaseList )
    goto LABEL_88;
  UILabel__set_text(skillBaseList, (System_String_o *)titleSprite, 0LL);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &v58, v12);
  if ( !idList )
    return;
  skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
  if ( !skillTitleRangeLabelList )
    goto LABEL_88;
  v14 = *(_QWORD *)&skillTitleRangeLabelList->max_length;
  if ( v14 << 32 < 1 )
  {
    v17 = 1;
  }
  else
  {
    max_length = idList->max_length;
    v16 = 0LL;
    v17 = 1;
    do
    {
      if ( v16 >= (int)max_length )
      {
        ++v16;
      }
      else
      {
        if ( v16 >= max_length )
        {
LABEL_90:
          v57 = sub_B0D9A8(titleSprite);
          sub_B0D948(v57, 0LL);
        }
        v18 = idList->m_Items[++v16];
        if ( v18 >= 1 )
          v17 = v16;
      }
    }
    while ( v16 < (int)v14 );
  }
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_88;
  v20 = 0;
  v21 = 4LL;
  while ( 1 )
  {
    v22 = v21 - 4;
    if ( v21 - 4 >= (int)skillIconList->max_length )
      break;
    if ( (__int64)v22 < v17 )
    {
      v23 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v23 )
        goto LABEL_88;
      if ( v22 >= *(unsigned int *)(v23 + 24) )
        goto LABEL_90;
      if ( !v58 )
        goto LABEL_88;
      if ( v22 >= v58->max_length )
        goto LABEL_90;
      v24 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v25 = *(UILabel_o **)(v23 + 8 * v21);
      v26 = (System_String_o *)*((_QWORD *)&v58->obj.klass + v21);
      if ( (BYTE3(ServantStatusListViewItemDrawClassSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        v24 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      titleSprite = (SkillIconComponent_o *)WrapControlText__textAdjust(
                                              v25,
                                              v26,
                                              v24->static_fields->DETAIL_FONT_SIZE,
                                              v24->static_fields->DETAIL_FONT_SIZE,
                                              v24->static_fields->MAX_HEIGHT,
                                              0LL);
      v27 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v27 )
        goto LABEL_88;
      if ( v22 >= *(unsigned int *)(v27 + 24) )
        goto LABEL_90;
      v28 = *(_QWORD *)(v27 + 8 * v21);
      if ( !v28 )
        goto LABEL_88;
      v29 = *(_DWORD *)(v28 + 164);
      y = this->fields.baseSize.fields.y;
      v31 = v29 + ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v31 >= SLODWORD(y) )
        v20 += v31;
      else
        v20 += LODWORD(y);
    }
    skillIconList = this->fields.skillIconList;
    ++v21;
    if ( !skillIconList )
      goto LABEL_88;
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v34 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v36 = x + (float)v20;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    titleSprite = (SkillIconComponent_o *)this->fields.baseSprite;
    if ( !titleSprite )
      goto LABEL_88;
    v61.fields.x = z;
    v61.fields.y = v36;
    v61.fields.z = v34;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)titleSprite, v61, 0LL);
  }
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_88;
  v37 = z;
  if ( z == INFINITY )
    v37 = -z;
  UIWidget__set_width((UIWidget_o *)titleSprite, (int)v37, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_88;
  v38 = v36;
  if ( v36 == INFINITY )
    v38 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)titleSprite, (int)v38, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.explanationLabel;
  v39 = v20 >= 0 ? v20 : v20 + 1;
  if ( !titleSprite )
    goto LABEL_88;
  v40 = this->fields.titleBasePosition.fields.z;
  v41 = this->fields.skillBasePosition.fields.x;
  v42 = this->fields.skillBasePosition.fields.y;
  titleSprite = (SkillIconComponent_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)titleSprite,
                                          0LL);
  if ( !titleSprite
    || (v43 = (float)(v39 >> 1),
        v62.fields.y = v41 + v43,
        v62.fields.x = v40,
        v62.fields.z = v42,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v62, 0LL),
        (v44 = this->fields.skillIconList) == 0LL) )
  {
LABEL_88:
    sub_B0D97C(titleSprite);
  }
  v45 = this->fields.skillBasePosition.fields.z;
  v46 = *((float *)&this[1].klass + 1);
  v47 = 0LL;
  v48 = *(float *)&this[1].klass + v43;
  while ( 1 )
  {
    v49 = v44->max_length;
    if ( (int)v47 >= v49 )
      break;
    if ( (unsigned int)v47 >= v49 )
      goto LABEL_90;
    titleSprite = v44->m_Items[v47];
    if ( !titleSprite )
      goto LABEL_88;
    if ( (int)v47 >= v17 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 1, 0LL);
      v50 = this->fields.skillIconList;
      if ( !v50 )
        goto LABEL_88;
      if ( (unsigned int)v47 >= v50->max_length )
        goto LABEL_90;
      titleSprite = v50->m_Items[v47];
      if ( !titleSprite )
        goto LABEL_88;
      titleSprite = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)titleSprite,
                                              0LL);
      if ( !titleSprite )
        goto LABEL_88;
      v63.fields.x = v45;
      v63.fields.y = v48;
      v63.fields.z = v46;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v63, 0LL);
      v51 = this->fields.skillTitleRangeLabelList;
      if ( !v51 )
        goto LABEL_88;
      if ( (unsigned int)v47 >= v51->max_length )
        goto LABEL_90;
      if ( !idList )
        goto LABEL_88;
      if ( (unsigned int)v47 >= idList->max_length )
        goto LABEL_90;
      titleSprite = (SkillIconComponent_o *)v51->m_Items[v47];
      if ( !titleSprite )
        goto LABEL_88;
      SkillIconComponent__Set(titleSprite, idList->m_Items[v47 + 1], 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_88;
      if ( (unsigned int)v47 >= skillExplanationLabelList->max_length )
        goto LABEL_90;
      if ( !titleList )
        goto LABEL_88;
      if ( (unsigned int)v47 >= titleList->max_length )
        goto LABEL_90;
      titleSprite = (SkillIconComponent_o *)skillExplanationLabelList->m_Items[v47];
      if ( !titleSprite )
        goto LABEL_88;
      UIRangeLabel__Set((UIRangeLabel_o *)titleSprite, titleList->m_Items[v47], 0LL, 1, 0, 0LL);
    }
    v53 = *(_QWORD *)&this->fields.skillPitch;
    if ( !v53 )
      goto LABEL_88;
    if ( (unsigned int)v47 >= *(_DWORD *)(v53 + 24) )
      goto LABEL_90;
    v54 = *(_QWORD *)(v53 + 8 * v47 + 32);
    if ( v54 )
    {
      titleSprite = (SkillIconComponent_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v55 = *(_DWORD *)(v54 + 164);
      if ( (BYTE3(ServantStatusListViewItemDrawClassSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        titleSprite = (SkillIconComponent_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      ++v47;
      v44 = this->fields.skillIconList;
      LODWORD(v56) = LODWORD(titleSprite[2].fields.baseSprite->monitor) + v55;
      if ( SLODWORD(v56) < SLODWORD(this->fields.baseSize.fields.y) )
        v56 = this->fields.baseSize.fields.y;
      v48 = v48 - (float)SLODWORD(v56);
      if ( v44 )
        continue;
    }
    goto LABEL_88;
  }
}