void __fastcall ServantStatusListViewItemDrawEquipSkill___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECB58 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItemDrawEquipSkill_TypeInfo, v1, v2, v3);
    byte_42ECB58 = 1;
  }
  ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->MAX_HEIGHT = 500;
  ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawEquipSkill___ctor(
        ServantStatusListViewItemDrawEquipSkill_o *this,
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

  if ( (byte_42ECB57 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SkillIconComponent___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UILabel___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UIRangeLabel___TypeInfo, v14, v15, v16);
    byte_42ECB57 = 1;
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
    sub_B5D69C(this, method);
  if ( !v15->max_length )
  {
LABEL_25:
    v18 = sub_B5D6C8(this);
    sub_B5D668(v18, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  UILabel_o *skillBaseList; // x21
  SkillIconComponent_o *titleSprite; // x0
  __int64 v18; // x1
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  __int64 v20; // x10
  unsigned __int64 max_length; // x9
  int v22; // w22
  signed __int64 v23; // x8
  SkillInfo_o *v24; // x13
  struct SkillIconComponent_array *skillIconList; // x8
  int v26; // w24
  __int64 v27; // x25
  unsigned __int64 v28; // x26
  unsigned __int64 v29; // x9
  __int64 v30; // x8
  __int64 v31; // x9
  ServantStatusListViewItemDrawEquipSkill_c *v32; // x0
  UILabel_o *v33; // x20
  System_String_o *v34; // x21
  __int64 v35; // x8
  __int64 v36; // x8
  int v37; // w10
  float y; // w8
  int v39; // w9
  float x; // s8
  float z; // s9
  float v42; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v44; // s8
  double v45; // d0
  double v46; // d0
  int v47; // w20
  float v48; // s8
  float v49; // s11
  float v50; // s9
  float v51; // s10
  struct SkillIconComponent_array *v52; // x8
  float v53; // s8
  float v54; // s9
  __int64 v55; // x20
  float v56; // s10
  unsigned int v57; // w9
  SkillInfo_o *v58; // x24
  struct SkillIconComponent_array *v59; // x8
  struct UIRangeLabel_array *v60; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  __int64 v62; // x8
  __int64 v63; // x8
  int v64; // w21
  float v65; // w9
  __int64 v66; // x0
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ECB56 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&ServantStatusListViewItemDrawEquipSkill_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_12131/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v13, v14, v15);
    byte_42ECB56 = 1;
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
  titleSprite = (SkillIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12131/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
  if ( !skillBaseList )
    goto LABEL_91;
  UILabel__set_text(skillBaseList, (System_String_o *)titleSprite, 0LL);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0LL);
  if ( !skillInfoList )
    return;
  skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
  if ( !skillTitleRangeLabelList )
    goto LABEL_91;
  v20 = *(_QWORD *)&skillTitleRangeLabelList->max_length;
  if ( v20 << 32 < 1 )
  {
    v22 = 0;
  }
  else
  {
    max_length = skillInfoList->max_length;
    v22 = 0;
    v23 = 0LL;
    do
    {
      if ( v23 < (int)max_length )
      {
        if ( v23 >= max_length )
        {
LABEL_93:
          v66 = sub_B5D6C8(titleSprite);
          sub_B5D668(v66, 0LL);
        }
        v24 = skillInfoList->m_Items[v23];
        if ( v24 && v24->fields.id >= 1 )
          v22 = v23 + 1;
      }
      ++v23;
    }
    while ( v23 < (int)v20 );
  }
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_91;
  v26 = 0;
  v27 = 4LL;
  while ( 1 )
  {
    v28 = v27 - 4;
    if ( v27 - 4 >= (int)skillIconList->max_length )
      break;
    if ( skillInfoList )
    {
      v29 = skillInfoList->max_length;
      if ( (__int64)v28 < (int)v29 )
      {
        if ( v28 >= v29 )
          goto LABEL_93;
        v30 = *((_QWORD *)&skillInfoList->obj.klass + v27);
        if ( v30 )
        {
          if ( *(int *)(v30 + 16) >= 1 )
          {
            v31 = *(_QWORD *)&this->fields.skillPitch;
            if ( !v31 )
              goto LABEL_91;
            if ( v28 >= *(unsigned int *)(v31 + 24) )
              goto LABEL_93;
            v32 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            v33 = *(UILabel_o **)(v31 + 8 * v27);
            v34 = *(System_String_o **)(v30 + 40);
            if ( (BYTE3(ServantStatusListViewItemDrawEquipSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
              v32 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            }
            titleSprite = (SkillIconComponent_o *)WrapControlText__textAdjust(
                                                    v33,
                                                    v34,
                                                    v32->static_fields->DETAIL_FONT_SIZE,
                                                    v32->static_fields->DETAIL_FONT_SIZE,
                                                    v32->static_fields->MAX_HEIGHT,
                                                    0LL);
            v35 = *(_QWORD *)&this->fields.skillPitch;
            if ( !v35 )
              goto LABEL_91;
            if ( v28 >= *(unsigned int *)(v35 + 24) )
              goto LABEL_93;
            v36 = *(_QWORD *)(v35 + 8 * v27);
            if ( !v36 )
              goto LABEL_91;
            v37 = *(_DWORD *)(v36 + 164);
            y = this->fields.baseSize.fields.y;
            v39 = ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->ADJUST_HEIGHT + v37;
            if ( v39 >= SLODWORD(y) )
              v26 += v39;
            else
              v26 += LODWORD(y);
          }
        }
      }
    }
    skillIconList = this->fields.skillIconList;
    ++v27;
    if ( !skillIconList )
      goto LABEL_91;
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v42 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v44 = x + (float)v26;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    titleSprite = (SkillIconComponent_o *)this->fields.baseSprite;
    if ( !titleSprite )
      goto LABEL_91;
    v68.fields.x = z;
    v68.fields.y = v44;
    v68.fields.z = v42;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)titleSprite, v68, 0LL);
  }
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_91;
  v45 = z;
  if ( z == INFINITY )
    v45 = -z;
  UIWidget__set_width((UIWidget_o *)titleSprite, (int)v45, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_91;
  v46 = v44;
  if ( v44 == INFINITY )
    v46 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)titleSprite, (int)v46, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.explanationLabel;
  v47 = v26 >= 0 ? v26 : v26 + 1;
  if ( !titleSprite )
    goto LABEL_91;
  v48 = this->fields.titleBasePosition.fields.z;
  v49 = this->fields.skillBasePosition.fields.x;
  v50 = this->fields.skillBasePosition.fields.y;
  titleSprite = (SkillIconComponent_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)titleSprite,
                                          0LL);
  if ( !titleSprite
    || (v51 = (float)(v47 >> 1),
        v69.fields.y = v49 + v51,
        v69.fields.x = v48,
        v69.fields.z = v50,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v69, 0LL),
        (v52 = this->fields.skillIconList) == 0LL) )
  {
LABEL_91:
    sub_B5D69C(titleSprite, v18);
  }
  v53 = this->fields.skillBasePosition.fields.z;
  v54 = *((float *)&this[1].klass + 1);
  v55 = 0LL;
  v56 = *(float *)&this[1].klass + v51;
  while ( 1 )
  {
    v57 = v52->max_length;
    if ( (int)v55 >= (int)v57 )
      break;
    if ( (int)v55 >= v22 )
    {
      if ( (unsigned int)v55 >= v57 )
        goto LABEL_93;
      titleSprite = v52->m_Items[v55];
      if ( !titleSprite )
        goto LABEL_91;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_91;
      if ( (unsigned int)v55 >= skillInfoList->max_length || (unsigned int)v55 >= v57 )
        goto LABEL_93;
      titleSprite = v52->m_Items[(int)v55];
      if ( !titleSprite )
        goto LABEL_91;
      v58 = skillInfoList->m_Items[(int)v55];
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 1, 0LL);
      v59 = this->fields.skillIconList;
      if ( !v59 )
        goto LABEL_91;
      if ( (unsigned int)v55 >= v59->max_length )
        goto LABEL_93;
      titleSprite = v59->m_Items[(int)v55];
      if ( !titleSprite )
        goto LABEL_91;
      titleSprite = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)titleSprite,
                                              0LL);
      if ( !titleSprite )
        goto LABEL_91;
      v70.fields.x = v53;
      v70.fields.y = v56;
      v70.fields.z = v54;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v70, 0LL);
      v60 = this->fields.skillTitleRangeLabelList;
      if ( !v60 )
        goto LABEL_91;
      if ( (unsigned int)v55 >= v60->max_length )
        goto LABEL_93;
      if ( !v58 )
        goto LABEL_91;
      titleSprite = (SkillIconComponent_o *)v60->m_Items[(int)v55];
      if ( !titleSprite )
        goto LABEL_91;
      SkillIconComponent__Set(titleSprite, v58->fields.id, 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_91;
      if ( (unsigned int)v55 >= skillExplanationLabelList->max_length )
        goto LABEL_93;
      titleSprite = (SkillIconComponent_o *)skillExplanationLabelList->m_Items[(int)v55];
      if ( !titleSprite )
        goto LABEL_91;
      UIRangeLabel__Set((UIRangeLabel_o *)titleSprite, v58->fields.title, 0LL, 1, 0, 0LL);
    }
    v62 = *(_QWORD *)&this->fields.skillPitch;
    if ( !v62 )
      goto LABEL_91;
    if ( (unsigned int)v55 >= *(_DWORD *)(v62 + 24) )
      goto LABEL_93;
    v63 = *(_QWORD *)(v62 + 8LL * (int)v55 + 32);
    if ( v63 )
    {
      titleSprite = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      v64 = *(_DWORD *)(v63 + 164);
      if ( (BYTE3(ServantStatusListViewItemDrawEquipSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
        titleSprite = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      }
      ++v55;
      v52 = this->fields.skillIconList;
      LODWORD(v65) = LODWORD(titleSprite[2].fields.baseSprite->monitor) + v64;
      if ( SLODWORD(v65) < SLODWORD(this->fields.baseSize.fields.y) )
        v65 = this->fields.baseSize.fields.y;
      v56 = v56 - (float)SLODWORD(v65);
      if ( v52 )
        continue;
    }
    goto LABEL_91;
  }
}