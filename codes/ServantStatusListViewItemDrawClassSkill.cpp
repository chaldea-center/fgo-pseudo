void __fastcall ServantStatusListViewItemDrawClassSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418D197 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItemDrawClassSkill_TypeInfo, v1);
    byte_418D197 = 1;
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

  if ( (byte_418D196 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&UnityEngine_GameObject___TypeInfo, v3);
    sub_B2C35C(&SkillIconComponent___TypeInfo, v4);
    sub_B2C35C(&UILabel___TypeInfo, v5);
    sub_B2C35C(&UIRangeLabel___TypeInfo, v6);
    byte_418D196 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct SkillIconComponent_array *)sub_B2C374(
                                            UnityEngine_GameObject___TypeInfo,
                                            (unsigned int)v7->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (struct UIRangeLabel_array *)sub_B2C374(
                                       SkillIconComponent___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillTitleRangeLabelList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (struct UILabel_array *)sub_B2C374(
                                  UIRangeLabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillExplanationLabelList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Int32_array **)sub_B2C374(
                                 UILabel___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  *(_QWORD *)&this->fields.skillPitch = v29;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.skillPitch, v29, v30, v31, v32, v33, v34, v35);
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
    sub_B2C434(this, method);
  if ( !v15->max_length )
  {
LABEL_25:
    v18 = sub_B2C460(this);
    sub_B2C400(v18, 0LL);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x9
  __int64 v15; // x11
  unsigned __int64 max_length; // x10
  signed __int64 v17; // x9
  int v18; // w22
  int v19; // w13
  struct SkillIconComponent_array *skillIconList; // x8
  int v21; // w24
  __int64 v22; // x26
  unsigned __int64 v23; // x27
  __int64 v24; // x8
  ServantStatusListViewItemDrawClassSkill_c *v25; // x0
  UILabel_o *v26; // x20
  System_String_o *v27; // x21
  __int64 v28; // x8
  __int64 v29; // x8
  int v30; // w10
  float y; // w8
  int v32; // w9
  float x; // s8
  float z; // s9
  float v35; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v37; // s8
  double v38; // d0
  double v39; // d0
  int v40; // w20
  float v41; // s8
  float v42; // s11
  float v43; // s9
  float v44; // s10
  struct SkillIconComponent_array *v45; // x8
  float v46; // s8
  float v47; // s9
  __int64 v48; // x20
  float v49; // s10
  int v50; // w9
  struct SkillIconComponent_array *v51; // x8
  struct UIRangeLabel_array *v52; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  __int64 v54; // x8
  __int64 v55; // x8
  int v56; // w21
  float v57; // w9
  __int64 v58; // x0
  System_String_array *v59; // [xsp+0h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418D195 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&ServantStatusListViewItemDrawClassSkill_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_11982/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v9);
    byte_418D195 = 1;
  }
  idList = 0LL;
  v59 = 0LL;
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
  titleSprite = (SkillIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11982/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
  if ( !skillBaseList )
    goto LABEL_88;
  UILabel__set_text(skillBaseList, (System_String_o *)titleSprite, 0LL);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &v59, v13);
  if ( !idList )
    return;
  skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
  if ( !skillTitleRangeLabelList )
    goto LABEL_88;
  v15 = *(_QWORD *)&skillTitleRangeLabelList->max_length;
  if ( v15 << 32 < 1 )
  {
    v18 = 1;
  }
  else
  {
    max_length = idList->max_length;
    v17 = 0LL;
    v18 = 1;
    do
    {
      if ( v17 >= (int)max_length )
      {
        ++v17;
      }
      else
      {
        if ( v17 >= max_length )
        {
LABEL_90:
          v58 = sub_B2C460(titleSprite);
          sub_B2C400(v58, 0LL);
        }
        v19 = idList->m_Items[++v17];
        if ( v19 >= 1 )
          v18 = v17;
      }
    }
    while ( v17 < (int)v15 );
  }
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_88;
  v21 = 0;
  v22 = 4LL;
  while ( 1 )
  {
    v23 = v22 - 4;
    if ( v22 - 4 >= (int)skillIconList->max_length )
      break;
    if ( (__int64)v23 < v18 )
    {
      v24 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v24 )
        goto LABEL_88;
      if ( v23 >= *(unsigned int *)(v24 + 24) )
        goto LABEL_90;
      if ( !v59 )
        goto LABEL_88;
      if ( v23 >= v59->max_length )
        goto LABEL_90;
      v25 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v26 = *(UILabel_o **)(v24 + 8 * v22);
      v27 = (System_String_o *)*((_QWORD *)&v59->obj.klass + v22);
      if ( (BYTE3(ServantStatusListViewItemDrawClassSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        v25 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      titleSprite = (SkillIconComponent_o *)WrapControlText__textAdjust(
                                              v26,
                                              v27,
                                              v25->static_fields->DETAIL_FONT_SIZE,
                                              v25->static_fields->DETAIL_FONT_SIZE,
                                              v25->static_fields->MAX_HEIGHT,
                                              0LL);
      v28 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v28 )
        goto LABEL_88;
      if ( v23 >= *(unsigned int *)(v28 + 24) )
        goto LABEL_90;
      v29 = *(_QWORD *)(v28 + 8 * v22);
      if ( !v29 )
        goto LABEL_88;
      v30 = *(_DWORD *)(v29 + 164);
      y = this->fields.baseSize.fields.y;
      v32 = v30 + ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v32 >= SLODWORD(y) )
        v21 += v32;
      else
        v21 += LODWORD(y);
    }
    skillIconList = this->fields.skillIconList;
    ++v22;
    if ( !skillIconList )
      goto LABEL_88;
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v35 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v37 = x + (float)v21;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    titleSprite = (SkillIconComponent_o *)this->fields.baseSprite;
    if ( !titleSprite )
      goto LABEL_88;
    v62.fields.x = z;
    v62.fields.y = v37;
    v62.fields.z = v35;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)titleSprite, v62, 0LL);
  }
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_88;
  v38 = z;
  if ( z == INFINITY )
    v38 = -z;
  UIWidget__set_width((UIWidget_o *)titleSprite, (int)v38, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_88;
  v39 = v37;
  if ( v37 == INFINITY )
    v39 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)titleSprite, (int)v39, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.explanationLabel;
  v40 = v21 >= 0 ? v21 : v21 + 1;
  if ( !titleSprite )
    goto LABEL_88;
  v41 = this->fields.titleBasePosition.fields.z;
  v42 = this->fields.skillBasePosition.fields.x;
  v43 = this->fields.skillBasePosition.fields.y;
  titleSprite = (SkillIconComponent_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)titleSprite,
                                          0LL);
  if ( !titleSprite
    || (v44 = (float)(v40 >> 1),
        v63.fields.y = v42 + v44,
        v63.fields.x = v41,
        v63.fields.z = v43,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v63, 0LL),
        (v45 = this->fields.skillIconList) == 0LL) )
  {
LABEL_88:
    sub_B2C434(titleSprite, v12);
  }
  v46 = this->fields.skillBasePosition.fields.z;
  v47 = *((float *)&this[1].klass + 1);
  v48 = 0LL;
  v49 = *(float *)&this[1].klass + v44;
  while ( 1 )
  {
    v50 = v45->max_length;
    if ( (int)v48 >= v50 )
      break;
    if ( (unsigned int)v48 >= v50 )
      goto LABEL_90;
    titleSprite = v45->m_Items[v48];
    if ( !titleSprite )
      goto LABEL_88;
    if ( (int)v48 >= v18 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 1, 0LL);
      v51 = this->fields.skillIconList;
      if ( !v51 )
        goto LABEL_88;
      if ( (unsigned int)v48 >= v51->max_length )
        goto LABEL_90;
      titleSprite = v51->m_Items[v48];
      if ( !titleSprite )
        goto LABEL_88;
      titleSprite = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)titleSprite,
                                              0LL);
      if ( !titleSprite )
        goto LABEL_88;
      v64.fields.x = v46;
      v64.fields.y = v49;
      v64.fields.z = v47;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v64, 0LL);
      v52 = this->fields.skillTitleRangeLabelList;
      if ( !v52 )
        goto LABEL_88;
      if ( (unsigned int)v48 >= v52->max_length )
        goto LABEL_90;
      if ( !idList )
        goto LABEL_88;
      if ( (unsigned int)v48 >= idList->max_length )
        goto LABEL_90;
      titleSprite = (SkillIconComponent_o *)v52->m_Items[v48];
      if ( !titleSprite )
        goto LABEL_88;
      SkillIconComponent__Set(titleSprite, idList->m_Items[v48 + 1], 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_88;
      if ( (unsigned int)v48 >= skillExplanationLabelList->max_length )
        goto LABEL_90;
      if ( !titleList )
        goto LABEL_88;
      if ( (unsigned int)v48 >= titleList->max_length )
        goto LABEL_90;
      titleSprite = (SkillIconComponent_o *)skillExplanationLabelList->m_Items[v48];
      if ( !titleSprite )
        goto LABEL_88;
      UIRangeLabel__Set((UIRangeLabel_o *)titleSprite, titleList->m_Items[v48], 0LL, 1, 0, 0LL);
    }
    v54 = *(_QWORD *)&this->fields.skillPitch;
    if ( !v54 )
      goto LABEL_88;
    if ( (unsigned int)v48 >= *(_DWORD *)(v54 + 24) )
      goto LABEL_90;
    v55 = *(_QWORD *)(v54 + 8 * v48 + 32);
    if ( v55 )
    {
      titleSprite = (SkillIconComponent_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v56 = *(_DWORD *)(v55 + 164);
      if ( (BYTE3(ServantStatusListViewItemDrawClassSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        titleSprite = (SkillIconComponent_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      ++v48;
      v45 = this->fields.skillIconList;
      LODWORD(v57) = LODWORD(titleSprite[2].fields.baseSprite->monitor) + v56;
      if ( SLODWORD(v57) < SLODWORD(this->fields.baseSize.fields.y) )
        v57 = this->fields.baseSize.fields.y;
      v49 = v49 - (float)SLODWORD(v57);
      if ( v45 )
        continue;
    }
    goto LABEL_88;
  }
}