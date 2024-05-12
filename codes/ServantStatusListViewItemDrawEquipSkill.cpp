void __fastcall ServantStatusListViewItemDrawEquipSkill___cctor(const MethodInfo *method)
{
  if ( (byte_438F2CE & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItemDrawEquipSkill_TypeInfo);
    byte_438F2CE = 1;
  }
  ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->MAX_HEIGHT = 500;
  ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawEquipSkill___ctor(
        ServantStatusListViewItemDrawEquipSkill_o *this,
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

  if ( (byte_438F2CD & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&UnityEngine_GameObject___TypeInfo);
    sub_B775C4(&SkillIconComponent___TypeInfo);
    sub_B775C4(&UILabel___TypeInfo);
    sub_B775C4(&UIRangeLabel___TypeInfo);
    byte_438F2CD = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct SkillIconComponent_array *)sub_B775DC(
                                            UnityEngine_GameObject___TypeInfo,
                                            (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct UIRangeLabel_array *)sub_B775DC(
                                       SkillIconComponent___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.skillTitleRangeLabelList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (struct UILabel_array *)sub_B775DC(
                                  UIRangeLabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v18;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.skillExplanationLabelList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Int32_array **)sub_B775DC(
                                 UILabel___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  *(_QWORD *)&this->fields.skillPitch = v25;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.skillPitch, v25, v26, v27, v28, v29, v30, v31);
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
    sub_B7769C(this, method);
  if ( !v15->max_length )
  {
LABEL_25:
    v18 = sub_B776C8(this);
    sub_B77668(v18, 0LL);
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
  UILabel_o *skillBaseList; // x21
  SkillIconComponent_o *titleSprite; // x0
  __int64 v9; // x1
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  __int64 v11; // x10
  unsigned __int64 max_length; // x9
  int v13; // w22
  signed __int64 v14; // x8
  SkillInfo_o *v15; // x13
  struct SkillIconComponent_array *skillIconList; // x8
  int v17; // w24
  __int64 v18; // x25
  unsigned __int64 v19; // x26
  unsigned __int64 v20; // x9
  __int64 v21; // x8
  __int64 v22; // x9
  ServantStatusListViewItemDrawEquipSkill_c *v23; // x0
  UILabel_o *v24; // x20
  System_String_o *v25; // x21
  __int64 v26; // x8
  __int64 v27; // x8
  int v28; // w10
  float y; // w8
  int v30; // w9
  float x; // s8
  float z; // s9
  float v33; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v35; // s8
  double v36; // d0
  double v37; // d0
  int v38; // w20
  float v39; // s8
  float v40; // s11
  float v41; // s9
  float v42; // s10
  struct SkillIconComponent_array *v43; // x8
  float v44; // s8
  float v45; // s9
  __int64 v46; // x20
  float v47; // s10
  unsigned int v48; // w9
  SkillInfo_o *v49; // x24
  struct SkillIconComponent_array *v50; // x8
  struct UIRangeLabel_array *v51; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  __int64 v53; // x8
  __int64 v54; // x8
  int v55; // w21
  float v56; // w9
  __int64 v57; // x0
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438F2CC & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantStatusListViewItemDrawEquipSkill_TypeInfo);
    sub_B775C4(&StringLiteral_12216/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    byte_438F2CC = 1;
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
  titleSprite = (SkillIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12216/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
  if ( !skillBaseList )
    goto LABEL_91;
  UILabel__set_text(skillBaseList, (System_String_o *)titleSprite, 0LL);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0, 0LL);
  if ( !skillInfoList )
    return;
  skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
  if ( !skillTitleRangeLabelList )
    goto LABEL_91;
  v11 = *(_QWORD *)&skillTitleRangeLabelList->max_length;
  if ( v11 << 32 < 1 )
  {
    v13 = 0;
  }
  else
  {
    max_length = skillInfoList->max_length;
    v13 = 0;
    v14 = 0LL;
    do
    {
      if ( v14 < (int)max_length )
      {
        if ( v14 >= max_length )
        {
LABEL_93:
          v57 = sub_B776C8(titleSprite);
          sub_B77668(v57, 0LL);
        }
        v15 = skillInfoList->m_Items[v14];
        if ( v15 && v15->fields.id >= 1 )
          v13 = v14 + 1;
      }
      ++v14;
    }
    while ( v14 < (int)v11 );
  }
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_91;
  v17 = 0;
  v18 = 4LL;
  while ( 1 )
  {
    v19 = v18 - 4;
    if ( v18 - 4 >= (int)skillIconList->max_length )
      break;
    if ( skillInfoList )
    {
      v20 = skillInfoList->max_length;
      if ( (__int64)v19 < (int)v20 )
      {
        if ( v19 >= v20 )
          goto LABEL_93;
        v21 = *((_QWORD *)&skillInfoList->obj.klass + v18);
        if ( v21 )
        {
          if ( *(int *)(v21 + 16) >= 1 )
          {
            v22 = *(_QWORD *)&this->fields.skillPitch;
            if ( !v22 )
              goto LABEL_91;
            if ( v19 >= *(unsigned int *)(v22 + 24) )
              goto LABEL_93;
            v23 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            v24 = *(UILabel_o **)(v22 + 8 * v18);
            v25 = *(System_String_o **)(v21 + 40);
            if ( (BYTE3(ServantStatusListViewItemDrawEquipSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
              v23 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            }
            titleSprite = (SkillIconComponent_o *)WrapControlText__textAdjust(
                                                    v24,
                                                    v25,
                                                    v23->static_fields->DETAIL_FONT_SIZE,
                                                    v23->static_fields->DETAIL_FONT_SIZE,
                                                    v23->static_fields->MAX_HEIGHT,
                                                    0LL);
            v26 = *(_QWORD *)&this->fields.skillPitch;
            if ( !v26 )
              goto LABEL_91;
            if ( v19 >= *(unsigned int *)(v26 + 24) )
              goto LABEL_93;
            v27 = *(_QWORD *)(v26 + 8 * v18);
            if ( !v27 )
              goto LABEL_91;
            v28 = *(_DWORD *)(v27 + 164);
            y = this->fields.baseSize.fields.y;
            v30 = ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->ADJUST_HEIGHT + v28;
            if ( v30 >= SLODWORD(y) )
              v17 += v30;
            else
              v17 += LODWORD(y);
          }
        }
      }
    }
    skillIconList = this->fields.skillIconList;
    ++v18;
    if ( !skillIconList )
      goto LABEL_91;
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v33 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v35 = x + (float)v17;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    titleSprite = (SkillIconComponent_o *)this->fields.baseSprite;
    if ( !titleSprite )
      goto LABEL_91;
    v59.fields.x = z;
    v59.fields.y = v35;
    v59.fields.z = v33;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)titleSprite, v59, 0LL);
  }
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_91;
  v36 = z;
  if ( z == INFINITY )
    v36 = -z;
  UIWidget__set_width((UIWidget_o *)titleSprite, (int)v36, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_91;
  v37 = v35;
  if ( v35 == INFINITY )
    v37 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)titleSprite, (int)v37, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.explanationLabel;
  v38 = v17 >= 0 ? v17 : v17 + 1;
  if ( !titleSprite )
    goto LABEL_91;
  v39 = this->fields.titleBasePosition.fields.z;
  v40 = this->fields.skillBasePosition.fields.x;
  v41 = this->fields.skillBasePosition.fields.y;
  titleSprite = (SkillIconComponent_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)titleSprite,
                                          0LL);
  if ( !titleSprite
    || (v42 = (float)(v38 >> 1),
        v60.fields.y = v40 + v42,
        v60.fields.x = v39,
        v60.fields.z = v41,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v60, 0LL),
        (v43 = this->fields.skillIconList) == 0LL) )
  {
LABEL_91:
    sub_B7769C(titleSprite, v9);
  }
  v44 = this->fields.skillBasePosition.fields.z;
  v45 = *((float *)&this[1].klass + 1);
  v46 = 0LL;
  v47 = *(float *)&this[1].klass + v42;
  while ( 1 )
  {
    v48 = v43->max_length;
    if ( (int)v46 >= (int)v48 )
      break;
    if ( (int)v46 >= v13 )
    {
      if ( (unsigned int)v46 >= v48 )
        goto LABEL_93;
      titleSprite = v43->m_Items[v46];
      if ( !titleSprite )
        goto LABEL_91;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_91;
      if ( (unsigned int)v46 >= skillInfoList->max_length || (unsigned int)v46 >= v48 )
        goto LABEL_93;
      titleSprite = v43->m_Items[(int)v46];
      if ( !titleSprite )
        goto LABEL_91;
      v49 = skillInfoList->m_Items[(int)v46];
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 1, 0LL);
      v50 = this->fields.skillIconList;
      if ( !v50 )
        goto LABEL_91;
      if ( (unsigned int)v46 >= v50->max_length )
        goto LABEL_93;
      titleSprite = v50->m_Items[(int)v46];
      if ( !titleSprite )
        goto LABEL_91;
      titleSprite = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)titleSprite,
                                              0LL);
      if ( !titleSprite )
        goto LABEL_91;
      v61.fields.x = v44;
      v61.fields.y = v47;
      v61.fields.z = v45;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v61, 0LL);
      v51 = this->fields.skillTitleRangeLabelList;
      if ( !v51 )
        goto LABEL_91;
      if ( (unsigned int)v46 >= v51->max_length )
        goto LABEL_93;
      if ( !v49 )
        goto LABEL_91;
      titleSprite = (SkillIconComponent_o *)v51->m_Items[(int)v46];
      if ( !titleSprite )
        goto LABEL_91;
      SkillIconComponent__Set(titleSprite, v49->fields.id, 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_91;
      if ( (unsigned int)v46 >= skillExplanationLabelList->max_length )
        goto LABEL_93;
      titleSprite = (SkillIconComponent_o *)skillExplanationLabelList->m_Items[(int)v46];
      if ( !titleSprite )
        goto LABEL_91;
      UIRangeLabel__Set((UIRangeLabel_o *)titleSprite, v49->fields.title, 0LL, 1, 0, 0LL);
    }
    v53 = *(_QWORD *)&this->fields.skillPitch;
    if ( !v53 )
      goto LABEL_91;
    if ( (unsigned int)v46 >= *(_DWORD *)(v53 + 24) )
      goto LABEL_93;
    v54 = *(_QWORD *)(v53 + 8LL * (int)v46 + 32);
    if ( v54 )
    {
      titleSprite = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      v55 = *(_DWORD *)(v54 + 164);
      if ( (BYTE3(ServantStatusListViewItemDrawEquipSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
        titleSprite = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      }
      ++v46;
      v43 = this->fields.skillIconList;
      LODWORD(v56) = LODWORD(titleSprite[2].fields.baseSprite->monitor) + v55;
      if ( SLODWORD(v56) < SLODWORD(this->fields.baseSize.fields.y) )
        v56 = this->fields.baseSize.fields.y;
      v47 = v47 - (float)SLODWORD(v56);
      if ( v43 )
        continue;
    }
    goto LABEL_91;
  }
}