void __fastcall ServantStatusListViewItemDrawEquipSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A7C4 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItemDrawEquipSkill_TypeInfo, v1);
    byte_418A7C4 = 1;
  }
  ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->MAX_HEIGHT = 500;
  ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawEquipSkill___ctor(
        ServantStatusListViewItemDrawEquipSkill_o *this,
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

  if ( (byte_418A7C3 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&UnityEngine_GameObject___TypeInfo, v3);
    sub_B2C35C(&SkillIconComponent___TypeInfo, v4);
    sub_B2C35C(&UILabel___TypeInfo, v5);
    sub_B2C35C(&UIRangeLabel___TypeInfo, v6);
    byte_418A7C3 = 1;
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
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawEquipSkill__Awake(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        const MethodInfo *method)
{
  struct SkillIconComponent_array *skillIconList; // x8
  ServantStatusListViewItemDrawEquipSkill_o *v3; // x19
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
    this = (ServantStatusListViewItemDrawEquipSkill_o *)skillIconList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
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
    this = (ServantStatusListViewItemDrawEquipSkill_o *)v5->m_Items[1];
    if ( !this )
      goto LABEL_24;
    v6 = v4;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
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
  this = (ServantStatusListViewItemDrawEquipSkill_o *)v3->fields.explanationLabel;
  v10 = LODWORD(v3->fields.baseSize.fields.y) * skillIconList->max_length;
  v11 = (float)(titleSprite->fields.mHeight - v10);
  v3->fields.baseSize.fields.z = (float)titleSprite->fields.mWidth;
  v3->fields.titleBasePosition.fields.x = v11;
  v3->fields.titleBasePosition.fields.y = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_Component__get_transform(
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
  this = (ServantStatusListViewItemDrawEquipSkill_o *)v15->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_24;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.skillBasePosition.fields.z = v20.fields.x;
  *(float *)&v3[1].klass = v20.fields.y - v17;
  HIDWORD(v3[1].klass) = LODWORD(v20.fields.z);
}


int32_t __fastcall ServantStatusListViewItemDrawEquipSkill__GetKind(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        const MethodInfo *method)
{
  return 12;
}


void __fastcall ServantStatusListViewItemDrawEquipSkill__SetItem(
        ServantStatusListViewItemDrawEquipSkill_o *this,
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
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  __int64 v14; // x10
  unsigned __int64 max_length; // x9
  int v16; // w22
  signed __int64 v17; // x8
  SkillInfo_o *v18; // x13
  struct SkillIconComponent_array *skillIconList; // x8
  int v20; // w24
  __int64 v21; // x25
  unsigned __int64 v22; // x26
  unsigned __int64 v23; // x9
  __int64 v24; // x8
  __int64 v25; // x9
  ServantStatusListViewItemDrawEquipSkill_c *v26; // x0
  UILabel_o *v27; // x20
  System_String_o *v28; // x21
  __int64 v29; // x8
  __int64 v30; // x8
  int v31; // w10
  float y; // w8
  int v33; // w9
  float x; // s8
  float z; // s9
  float v36; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v38; // s8
  double v39; // d0
  double v40; // d0
  int v41; // w20
  float v42; // s8
  float v43; // s11
  float v44; // s9
  float v45; // s10
  struct SkillIconComponent_array *v46; // x8
  float v47; // s8
  float v48; // s9
  __int64 v49; // x20
  float v50; // s10
  unsigned int v51; // w9
  SkillInfo_o *v52; // x24
  struct SkillIconComponent_array *v53; // x8
  struct UIRangeLabel_array *v54; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  __int64 v56; // x8
  __int64 v57; // x8
  int v58; // w21
  float v59; // w9
  __int64 v60; // x0
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A7C2 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&ServantStatusListViewItemDrawEquipSkill_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_11982/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v9);
    byte_418A7C2 = 1;
  }
  skillInfoList = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
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
    goto LABEL_91;
  UILabel__set_text(skillBaseList, (System_String_o *)titleSprite, 0LL);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0LL);
  if ( !skillInfoList )
    return;
  skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
  if ( !skillTitleRangeLabelList )
    goto LABEL_91;
  v14 = *(_QWORD *)&skillTitleRangeLabelList->max_length;
  if ( v14 << 32 < 1 )
  {
    v16 = 0;
  }
  else
  {
    max_length = skillInfoList->max_length;
    v16 = 0;
    v17 = 0LL;
    do
    {
      if ( v17 < (int)max_length )
      {
        if ( v17 >= max_length )
        {
LABEL_93:
          v60 = sub_B2C460(titleSprite);
          sub_B2C400(v60, 0LL);
        }
        v18 = skillInfoList->m_Items[v17];
        if ( v18 && v18->fields.id >= 1 )
          v16 = v17 + 1;
      }
      ++v17;
    }
    while ( v17 < (int)v14 );
  }
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_91;
  v20 = 0;
  v21 = 4LL;
  while ( 1 )
  {
    v22 = v21 - 4;
    if ( v21 - 4 >= (int)skillIconList->max_length )
      break;
    if ( skillInfoList )
    {
      v23 = skillInfoList->max_length;
      if ( (__int64)v22 < (int)v23 )
      {
        if ( v22 >= v23 )
          goto LABEL_93;
        v24 = *((_QWORD *)&skillInfoList->obj.klass + v21);
        if ( v24 )
        {
          if ( *(int *)(v24 + 16) >= 1 )
          {
            v25 = *(_QWORD *)&this->fields.skillPitch;
            if ( !v25 )
              goto LABEL_91;
            if ( v22 >= *(unsigned int *)(v25 + 24) )
              goto LABEL_93;
            v26 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            v27 = *(UILabel_o **)(v25 + 8 * v21);
            v28 = *(System_String_o **)(v24 + 40);
            if ( (BYTE3(ServantStatusListViewItemDrawEquipSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
              v26 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            }
            titleSprite = (SkillIconComponent_o *)WrapControlText__textAdjust(
                                                    v27,
                                                    v28,
                                                    v26->static_fields->DETAIL_FONT_SIZE,
                                                    v26->static_fields->DETAIL_FONT_SIZE,
                                                    v26->static_fields->MAX_HEIGHT,
                                                    0LL);
            v29 = *(_QWORD *)&this->fields.skillPitch;
            if ( !v29 )
              goto LABEL_91;
            if ( v22 >= *(unsigned int *)(v29 + 24) )
              goto LABEL_93;
            v30 = *(_QWORD *)(v29 + 8 * v21);
            if ( !v30 )
              goto LABEL_91;
            v31 = *(_DWORD *)(v30 + 164);
            y = this->fields.baseSize.fields.y;
            v33 = ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->ADJUST_HEIGHT + v31;
            if ( v33 >= SLODWORD(y) )
              v20 += v33;
            else
              v20 += LODWORD(y);
          }
        }
      }
    }
    skillIconList = this->fields.skillIconList;
    ++v21;
    if ( !skillIconList )
      goto LABEL_91;
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v36 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v38 = x + (float)v20;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    titleSprite = (SkillIconComponent_o *)this->fields.baseSprite;
    if ( !titleSprite )
      goto LABEL_91;
    v62.fields.x = z;
    v62.fields.y = v38;
    v62.fields.z = v36;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)titleSprite, v62, 0LL);
  }
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_91;
  v39 = z;
  if ( z == INFINITY )
    v39 = -z;
  UIWidget__set_width((UIWidget_o *)titleSprite, (int)v39, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_91;
  v40 = v38;
  if ( v38 == INFINITY )
    v40 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)titleSprite, (int)v40, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.explanationLabel;
  v41 = v20 >= 0 ? v20 : v20 + 1;
  if ( !titleSprite )
    goto LABEL_91;
  v42 = this->fields.titleBasePosition.fields.z;
  v43 = this->fields.skillBasePosition.fields.x;
  v44 = this->fields.skillBasePosition.fields.y;
  titleSprite = (SkillIconComponent_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)titleSprite,
                                          0LL);
  if ( !titleSprite
    || (v45 = (float)(v41 >> 1),
        v63.fields.y = v43 + v45,
        v63.fields.x = v42,
        v63.fields.z = v44,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v63, 0LL),
        (v46 = this->fields.skillIconList) == 0LL) )
  {
LABEL_91:
    sub_B2C434(titleSprite, v12);
  }
  v47 = this->fields.skillBasePosition.fields.z;
  v48 = *((float *)&this[1].klass + 1);
  v49 = 0LL;
  v50 = *(float *)&this[1].klass + v45;
  while ( 1 )
  {
    v51 = v46->max_length;
    if ( (int)v49 >= (int)v51 )
      break;
    if ( (int)v49 >= v16 )
    {
      if ( (unsigned int)v49 >= v51 )
        goto LABEL_93;
      titleSprite = v46->m_Items[v49];
      if ( !titleSprite )
        goto LABEL_91;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_91;
      if ( (unsigned int)v49 >= skillInfoList->max_length || (unsigned int)v49 >= v51 )
        goto LABEL_93;
      titleSprite = v46->m_Items[(int)v49];
      if ( !titleSprite )
        goto LABEL_91;
      v52 = skillInfoList->m_Items[(int)v49];
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 1, 0LL);
      v53 = this->fields.skillIconList;
      if ( !v53 )
        goto LABEL_91;
      if ( (unsigned int)v49 >= v53->max_length )
        goto LABEL_93;
      titleSprite = v53->m_Items[(int)v49];
      if ( !titleSprite )
        goto LABEL_91;
      titleSprite = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)titleSprite,
                                              0LL);
      if ( !titleSprite )
        goto LABEL_91;
      v64.fields.x = v47;
      v64.fields.y = v50;
      v64.fields.z = v48;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v64, 0LL);
      v54 = this->fields.skillTitleRangeLabelList;
      if ( !v54 )
        goto LABEL_91;
      if ( (unsigned int)v49 >= v54->max_length )
        goto LABEL_93;
      if ( !v52 )
        goto LABEL_91;
      titleSprite = (SkillIconComponent_o *)v54->m_Items[(int)v49];
      if ( !titleSprite )
        goto LABEL_91;
      SkillIconComponent__Set(titleSprite, v52->fields.id, 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_91;
      if ( (unsigned int)v49 >= skillExplanationLabelList->max_length )
        goto LABEL_93;
      titleSprite = (SkillIconComponent_o *)skillExplanationLabelList->m_Items[(int)v49];
      if ( !titleSprite )
        goto LABEL_91;
      UIRangeLabel__Set((UIRangeLabel_o *)titleSprite, v52->fields.title, 0LL, 1, 0, 0LL);
    }
    v56 = *(_QWORD *)&this->fields.skillPitch;
    if ( !v56 )
      goto LABEL_91;
    if ( (unsigned int)v49 >= *(_DWORD *)(v56 + 24) )
      goto LABEL_93;
    v57 = *(_QWORD *)(v56 + 8LL * (int)v49 + 32);
    if ( v57 )
    {
      titleSprite = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      v58 = *(_DWORD *)(v57 + 164);
      if ( (BYTE3(ServantStatusListViewItemDrawEquipSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
        titleSprite = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      }
      ++v49;
      v46 = this->fields.skillIconList;
      LODWORD(v59) = LODWORD(titleSprite[2].fields.baseSprite->monitor) + v58;
      if ( SLODWORD(v59) < SLODWORD(this->fields.baseSize.fields.y) )
        v59 = this->fields.baseSize.fields.y;
      v50 = v50 - (float)SLODWORD(v59);
      if ( v46 )
        continue;
    }
    goto LABEL_91;
  }
}