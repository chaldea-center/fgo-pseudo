void __fastcall ServantStatusListViewItemDrawEquipSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFF09E & 1) == 0 )
  {
    sub_1BC3008(&ServantStatusListViewItemDrawEquipSkill_TypeInfo, v1);
    byte_4AFF09E = 1;
  }
  *ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawEquipSkill_StaticFields)0x2800000012LL;
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
  struct UnityEngine_GameObject_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct SkillIconComponent_array *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UIRangeLabel_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UILabel_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4AFF09D & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1BC3008(&SkillIconComponent___TypeInfo, v4);
    sub_1BC3008(&UILabel___TypeInfo, v5);
    sub_1BC3008(&UIRangeLabel___TypeInfo, v6);
    byte_4AFF09D = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_1BC30B0(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v8;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skillBaseList, (int32_t)v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_1BC30B0(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v11;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skillIconList, (int32_t)v11, v12, v13);
  v14 = (struct UIRangeLabel_array *)sub_1BC30B0(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v14;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skillTitleRangeLabelList, (int32_t)v14, v15, v16);
  v17 = (struct UILabel_array *)sub_1BC30B0(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v17;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skillExplanationLabelList, (int32_t)v17, v18, v19);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawEquipSkill__Awake(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  ServantStatusListViewItemDrawEquipSkill_o *v3; // x19
  __int64 v4; // x2
  float v5; // s1
  struct UnityEngine_GameObject_array *v6; // x8
  float v7; // s8
  float v8; // s1
  unsigned int v9; // w9
  struct UISprite_o *baseSprite; // x9
  int v11; // w20
  float v12; // s1
  float v13; // s0
  float v14; // s1
  float v15; // s2
  struct UnityEngine_GameObject_array *v16; // x8
  int v17; // w9
  float v18; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_24;
  v3 = this;
  if ( (int)skillBaseList->max_length >= 2 )
  {
    this = (ServantStatusListViewItemDrawEquipSkill_o *)skillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v6 = v3->fields.skillBaseList;
    if ( !v6 )
      goto LABEL_24;
    if ( v6->max_length <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)v6->m_Items[1];
    if ( !this )
      goto LABEL_24;
    v7 = v5;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    skillBaseList = v3->fields.skillBaseList;
    v9 = (float)(v7 - v8) == INFINITY ? 0x80000000 : (int)(float)(v7 - v8);
    v3->fields.skillPitch = v9;
    if ( !skillBaseList )
      goto LABEL_24;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)v3->fields.titleSprite;
  v11 = v3->fields.skillPitch * skillBaseList->max_length;
  v12 = (float)(baseSprite->fields.mHeight - v11);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v12;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v16 = v3->fields.skillBaseList;
  v17 = v11 >= 0 ? v11 : v11 + 1;
  v18 = (float)(v17 >> 1);
  v3->fields.titleBasePosition.fields.x = v13;
  v3->fields.titleBasePosition.fields.y = v14 - v18;
  v3->fields.titleBasePosition.fields.z = v15;
  if ( !v16 )
LABEL_24:
    sub_1BC3264(this, method);
  if ( !v16->max_length )
LABEL_25:
    sub_1BC326C(this, method, v4);
  this = (ServantStatusListViewItemDrawEquipSkill_o *)v16->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.skillBasePosition.fields.x = localPosition.fields.x;
  v3->fields.skillBasePosition.fields.y = localPosition.fields.y - v18;
  v3->fields.skillBasePosition.fields.z = localPosition.fields.z;
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
  UILabel_o *explanationLabel; // x21
  UnityEngine_GameObject_o *baseSprite; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v15; // x10
  unsigned __int64 max_length; // x9
  signed int v17; // w22
  signed __int64 v18; // x8
  SkillInfo_o *v19; // x13
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  int v21; // w24
  __int64 v22; // x25
  unsigned __int64 v23; // x26
  unsigned __int64 v24; // x9
  __int64 v25; // x8
  struct UILabel_array *skillExplanationLabelList; // x9
  ServantStatusListViewItemDrawEquipSkill_c *v27; // x0
  UILabel_o *v28; // x20
  System_String_o *v29; // x21
  struct UILabel_array *v30; // x8
  __int64 v31; // x8
  int v32; // w10
  int32_t skillPitch; // w8
  int32_t v34; // w9
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v39; // s8
  int32_t v40; // w1
  int32_t v41; // w1
  int v42; // w20
  float v43; // s8
  float v44; // s11
  float v45; // s9
  float v46; // s10
  struct UnityEngine_GameObject_array *v47; // x8
  float v48; // s8
  float v49; // s9
  signed int v50; // w20
  float v51; // s10
  unsigned int v52; // w10
  SkillInfo_o *v53; // x24
  struct UnityEngine_GameObject_array *v54; // x8
  struct SkillIconComponent_array *v55; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  struct UILabel_array *v57; // x8
  UILabel_o *v58; // x8
  int32_t mHeight; // w21
  int32_t v60; // w9
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFF09C & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, item);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&ServantStatusListViewItemDrawEquipSkill_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_11817/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v9);
    byte_4AFF09C = 1;
  }
  skillInfoList = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseSprite = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11817/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_89;
  UILabel__set_text(explanationLabel, (System_String_o *)baseSprite, 0LL);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0, 0LL);
  if ( !skillInfoList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_89;
  v15 = *(_QWORD *)&skillIconList->max_length;
  if ( v15 << 32 < 1 )
  {
    v17 = 0;
  }
  else
  {
    max_length = skillInfoList->max_length;
    v17 = 0;
    v18 = 0LL;
    do
    {
      if ( v18 < (int)max_length )
      {
        if ( v18 >= max_length )
LABEL_91:
          sub_1BC326C(baseSprite, v12, v13);
        v19 = skillInfoList->m_Items[v18];
        if ( v19 && v19->fields.id >= 1 )
          v17 = v18 + 1;
      }
      ++v18;
    }
    while ( v18 < (int)v15 );
  }
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_89;
  v21 = 0;
  v22 = 4LL;
  while ( 1 )
  {
    v23 = v22 - 4;
    if ( v22 - 4 >= (int)skillBaseList->max_length )
      break;
    if ( skillInfoList )
    {
      v24 = skillInfoList->max_length;
      if ( (__int64)v23 < (int)v24 )
      {
        if ( v23 >= v24 )
          goto LABEL_91;
        v25 = *((_QWORD *)&skillInfoList->obj.klass + v22);
        if ( v25 )
        {
          if ( *(int *)(v25 + 16) >= 1 )
          {
            skillExplanationLabelList = this->fields.skillExplanationLabelList;
            if ( !skillExplanationLabelList )
              goto LABEL_89;
            if ( v23 >= skillExplanationLabelList->max_length )
              goto LABEL_91;
            v27 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            v28 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v22);
            v29 = *(System_String_o **)(v25 + 40);
            if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
              v27 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            }
            baseSprite = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                       v28,
                                                       v29,
                                                       v27->static_fields->DETAIL_FONT_SIZE,
                                                       v27->static_fields->DETAIL_FONT_SIZE,
                                                       0LL);
            v30 = this->fields.skillExplanationLabelList;
            if ( !v30 )
              goto LABEL_89;
            if ( v23 >= v30->max_length )
              goto LABEL_91;
            v31 = *((_QWORD *)&v30->obj.klass + v22);
            if ( !v31 )
              goto LABEL_89;
            v32 = *(_DWORD *)(v31 + 172);
            skillPitch = this->fields.skillPitch;
            v34 = ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->ADJUST_HEIGHT + v32;
            if ( v34 >= skillPitch )
              v21 += v34;
            else
              v21 += skillPitch;
          }
        }
      }
    }
    skillBaseList = this->fields.skillBaseList;
    ++v22;
    if ( !skillBaseList )
      goto LABEL_89;
  }
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v39 = y + (float)v21;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !baseSprite )
      goto LABEL_89;
    v62.fields.x = x;
    v62.fields.y = v39;
    v62.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)baseSprite, v62, 0LL);
  }
  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_89;
  v40 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)baseSprite, v40, 0LL);
  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_89;
  v41 = v39 == INFINITY ? 0x80000000 : (int)v39;
  UIWidget__set_height((UIWidget_o *)baseSprite, v41, 0LL);
  baseSprite = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v42 = v21 >= 0 ? v21 : v21 + 1;
  if ( !baseSprite )
    goto LABEL_89;
  v43 = this->fields.titleBasePosition.fields.x;
  v44 = this->fields.titleBasePosition.fields.y;
  v45 = this->fields.titleBasePosition.fields.z;
  baseSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)baseSprite,
                                             0LL);
  if ( !baseSprite
    || (v46 = (float)(v42 >> 1),
        v63.fields.y = v44 + v46,
        v63.fields.x = v43,
        v63.fields.z = v45,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v63, 0LL),
        (v47 = this->fields.skillBaseList) == 0LL) )
  {
LABEL_89:
    sub_1BC3264(baseSprite, v12);
  }
  v48 = this->fields.skillBasePosition.fields.z;
  v49 = this->fields.skillBasePosition.fields.x;
  v50 = 0;
  v51 = this->fields.skillBasePosition.fields.y + v46;
  while ( 1 )
  {
    v52 = v47->max_length;
    if ( v50 >= (int)v52 )
      break;
    if ( v50 >= v17 )
    {
      if ( v50 >= v52 )
        goto LABEL_91;
      baseSprite = v47->m_Items[v50];
      if ( !baseSprite )
        goto LABEL_89;
      UnityEngine_GameObject__SetActive(baseSprite, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_89;
      if ( v50 >= skillInfoList->max_length || v50 >= v52 )
        goto LABEL_91;
      baseSprite = v47->m_Items[v50];
      if ( !baseSprite )
        goto LABEL_89;
      v53 = skillInfoList->m_Items[v50];
      UnityEngine_GameObject__SetActive(baseSprite, 1, 0LL);
      v54 = this->fields.skillBaseList;
      if ( !v54 )
        goto LABEL_89;
      if ( v50 >= v54->max_length )
        goto LABEL_91;
      baseSprite = v54->m_Items[v50];
      if ( !baseSprite )
        goto LABEL_89;
      baseSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSprite, 0LL);
      if ( !baseSprite )
        goto LABEL_89;
      v64.fields.x = v49;
      v64.fields.y = v51;
      v64.fields.z = v48;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v64, 0LL);
      v55 = this->fields.skillIconList;
      if ( !v55 )
        goto LABEL_89;
      if ( v50 >= v55->max_length )
        goto LABEL_91;
      if ( !v53 )
        goto LABEL_89;
      baseSprite = (UnityEngine_GameObject_o *)v55->m_Items[v50];
      if ( !baseSprite )
        goto LABEL_89;
      SkillIconComponent__Set((SkillIconComponent_o *)baseSprite, v53->fields.id, 0LL);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_89;
      if ( v50 >= skillTitleRangeLabelList->max_length )
        goto LABEL_91;
      baseSprite = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v50];
      if ( !baseSprite )
        goto LABEL_89;
      UIRangeLabel__Set((UIRangeLabel_o *)baseSprite, v53->fields.title, 0LL, 1, 0, 0, 0LL);
    }
    v57 = this->fields.skillExplanationLabelList;
    if ( !v57 )
      goto LABEL_89;
    if ( v50 >= v57->max_length )
      goto LABEL_91;
    v58 = v57->m_Items[v50];
    if ( v58 )
    {
      baseSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      mHeight = v58->fields.mHeight;
      if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
        baseSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      }
      ++v50;
      v47 = this->fields.skillBaseList;
      v60 = *(_DWORD *)(*(_QWORD *)&baseSprite[7].fields.m_CachedPtr + 4LL) + mHeight;
      if ( v60 < this->fields.skillPitch )
        v60 = this->fields.skillPitch;
      v51 = v51 - (float)v60;
      if ( v47 )
        continue;
    }
    goto LABEL_89;
  }
}