void __fastcall ServantStatusListViewItemDrawEquipSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42186AD & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItemDrawEquipSkill_TypeInfo, v1);
    byte_42186AD = 1;
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

  if ( (byte_42186AC & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, v3);
    sub_B0D8A4(&SkillIconComponent___TypeInfo, v4);
    sub_B0D8A4(&UILabel___TypeInfo, v5);
    sub_B0D8A4(&UIRangeLabel___TypeInfo, v6);
    byte_42186AC = 1;
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
    sub_B0D97C(this);
  if ( !v15->max_length )
  {
LABEL_25:
    v18 = sub_B0D9A8(this);
    sub_B0D948(v18, 0LL);
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
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  __int64 v13; // x10
  unsigned __int64 max_length; // x9
  int v15; // w22
  signed __int64 v16; // x8
  SkillInfo_o *v17; // x13
  struct SkillIconComponent_array *skillIconList; // x8
  int v19; // w24
  __int64 v20; // x25
  unsigned __int64 v21; // x26
  unsigned __int64 v22; // x9
  __int64 v23; // x8
  __int64 v24; // x9
  ServantStatusListViewItemDrawEquipSkill_c *v25; // x0
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
  unsigned int v50; // w9
  SkillInfo_o *v51; // x24
  struct SkillIconComponent_array *v52; // x8
  struct UIRangeLabel_array *v53; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  __int64 v55; // x8
  __int64 v56; // x8
  int v57; // w21
  float v58; // w9
  __int64 v59; // x0
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42186AB & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, item);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&ServantStatusListViewItemDrawEquipSkill_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_12019/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v9);
    byte_42186AB = 1;
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
  titleSprite = (SkillIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12019/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
  if ( !skillBaseList )
    goto LABEL_91;
  UILabel__set_text(skillBaseList, (System_String_o *)titleSprite, 0LL);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0LL);
  if ( !skillInfoList )
    return;
  skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
  if ( !skillTitleRangeLabelList )
    goto LABEL_91;
  v13 = *(_QWORD *)&skillTitleRangeLabelList->max_length;
  if ( v13 << 32 < 1 )
  {
    v15 = 0;
  }
  else
  {
    max_length = skillInfoList->max_length;
    v15 = 0;
    v16 = 0LL;
    do
    {
      if ( v16 < (int)max_length )
      {
        if ( v16 >= max_length )
        {
LABEL_93:
          v59 = sub_B0D9A8(titleSprite);
          sub_B0D948(v59, 0LL);
        }
        v17 = skillInfoList->m_Items[v16];
        if ( v17 && v17->fields.id >= 1 )
          v15 = v16 + 1;
      }
      ++v16;
    }
    while ( v16 < (int)v13 );
  }
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_91;
  v19 = 0;
  v20 = 4LL;
  while ( 1 )
  {
    v21 = v20 - 4;
    if ( v20 - 4 >= (int)skillIconList->max_length )
      break;
    if ( skillInfoList )
    {
      v22 = skillInfoList->max_length;
      if ( (__int64)v21 < (int)v22 )
      {
        if ( v21 >= v22 )
          goto LABEL_93;
        v23 = *((_QWORD *)&skillInfoList->obj.klass + v20);
        if ( v23 )
        {
          if ( *(int *)(v23 + 16) >= 1 )
          {
            v24 = *(_QWORD *)&this->fields.skillPitch;
            if ( !v24 )
              goto LABEL_91;
            if ( v21 >= *(unsigned int *)(v24 + 24) )
              goto LABEL_93;
            v25 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            v26 = *(UILabel_o **)(v24 + 8 * v20);
            v27 = *(System_String_o **)(v23 + 40);
            if ( (BYTE3(ServantStatusListViewItemDrawEquipSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
              v25 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
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
              goto LABEL_91;
            if ( v21 >= *(unsigned int *)(v28 + 24) )
              goto LABEL_93;
            v29 = *(_QWORD *)(v28 + 8 * v20);
            if ( !v29 )
              goto LABEL_91;
            v30 = *(_DWORD *)(v29 + 164);
            y = this->fields.baseSize.fields.y;
            v32 = ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->ADJUST_HEIGHT + v30;
            if ( v32 >= SLODWORD(y) )
              v19 += v32;
            else
              v19 += LODWORD(y);
          }
        }
      }
    }
    skillIconList = this->fields.skillIconList;
    ++v20;
    if ( !skillIconList )
      goto LABEL_91;
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
  v37 = x + (float)v19;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    titleSprite = (SkillIconComponent_o *)this->fields.baseSprite;
    if ( !titleSprite )
      goto LABEL_91;
    v61.fields.x = z;
    v61.fields.y = v37;
    v61.fields.z = v35;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)titleSprite, v61, 0LL);
  }
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_91;
  v38 = z;
  if ( z == INFINITY )
    v38 = -z;
  UIWidget__set_width((UIWidget_o *)titleSprite, (int)v38, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_91;
  v39 = v37;
  if ( v37 == INFINITY )
    v39 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)titleSprite, (int)v39, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.explanationLabel;
  v40 = v19 >= 0 ? v19 : v19 + 1;
  if ( !titleSprite )
    goto LABEL_91;
  v41 = this->fields.titleBasePosition.fields.z;
  v42 = this->fields.skillBasePosition.fields.x;
  v43 = this->fields.skillBasePosition.fields.y;
  titleSprite = (SkillIconComponent_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)titleSprite,
                                          0LL);
  if ( !titleSprite
    || (v44 = (float)(v40 >> 1),
        v62.fields.y = v42 + v44,
        v62.fields.x = v41,
        v62.fields.z = v43,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v62, 0LL),
        (v45 = this->fields.skillIconList) == 0LL) )
  {
LABEL_91:
    sub_B0D97C(titleSprite);
  }
  v46 = this->fields.skillBasePosition.fields.z;
  v47 = *((float *)&this[1].klass + 1);
  v48 = 0LL;
  v49 = *(float *)&this[1].klass + v44;
  while ( 1 )
  {
    v50 = v45->max_length;
    if ( (int)v48 >= (int)v50 )
      break;
    if ( (int)v48 >= v15 )
    {
      if ( (unsigned int)v48 >= v50 )
        goto LABEL_93;
      titleSprite = v45->m_Items[v48];
      if ( !titleSprite )
        goto LABEL_91;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_91;
      if ( (unsigned int)v48 >= skillInfoList->max_length || (unsigned int)v48 >= v50 )
        goto LABEL_93;
      titleSprite = v45->m_Items[(int)v48];
      if ( !titleSprite )
        goto LABEL_91;
      v51 = skillInfoList->m_Items[(int)v48];
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 1, 0LL);
      v52 = this->fields.skillIconList;
      if ( !v52 )
        goto LABEL_91;
      if ( (unsigned int)v48 >= v52->max_length )
        goto LABEL_93;
      titleSprite = v52->m_Items[(int)v48];
      if ( !titleSprite )
        goto LABEL_91;
      titleSprite = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)titleSprite,
                                              0LL);
      if ( !titleSprite )
        goto LABEL_91;
      v63.fields.x = v46;
      v63.fields.y = v49;
      v63.fields.z = v47;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v63, 0LL);
      v53 = this->fields.skillTitleRangeLabelList;
      if ( !v53 )
        goto LABEL_91;
      if ( (unsigned int)v48 >= v53->max_length )
        goto LABEL_93;
      if ( !v51 )
        goto LABEL_91;
      titleSprite = (SkillIconComponent_o *)v53->m_Items[(int)v48];
      if ( !titleSprite )
        goto LABEL_91;
      SkillIconComponent__Set(titleSprite, v51->fields.id, 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_91;
      if ( (unsigned int)v48 >= skillExplanationLabelList->max_length )
        goto LABEL_93;
      titleSprite = (SkillIconComponent_o *)skillExplanationLabelList->m_Items[(int)v48];
      if ( !titleSprite )
        goto LABEL_91;
      UIRangeLabel__Set((UIRangeLabel_o *)titleSprite, v51->fields.title, 0LL, 1, 0, 0LL);
    }
    v55 = *(_QWORD *)&this->fields.skillPitch;
    if ( !v55 )
      goto LABEL_91;
    if ( (unsigned int)v48 >= *(_DWORD *)(v55 + 24) )
      goto LABEL_93;
    v56 = *(_QWORD *)(v55 + 8LL * (int)v48 + 32);
    if ( v56 )
    {
      titleSprite = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      v57 = *(_DWORD *)(v56 + 164);
      if ( (BYTE3(ServantStatusListViewItemDrawEquipSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
        titleSprite = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      }
      ++v48;
      v45 = this->fields.skillIconList;
      LODWORD(v58) = LODWORD(titleSprite[2].fields.baseSprite->monitor) + v57;
      if ( SLODWORD(v58) < SLODWORD(this->fields.baseSize.fields.y) )
        v58 = this->fields.baseSize.fields.y;
      v49 = v49 - (float)SLODWORD(v58);
      if ( v45 )
        continue;
    }
    goto LABEL_91;
  }
}