void __fastcall ServantStatusListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  if ( (byte_4355E1E & 1) == 0 )
  {
    sub_B70694(&ServantStatusListViewItemDrawSkill_TypeInfo);
    byte_4355E1E = 1;
  }
  ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->MAX_HEIGHT = 500;
  ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawSkill___ctor(
        ServantStatusListViewItemDrawSkill_o *this,
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
  struct UISprite_array *v11; // x0
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
  struct UILabel_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct ServantSkillStrengthStatus_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UILabel_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct UnityEngine_GameObject_o *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_4355E1D & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&UnityEngine_GameObject___TypeInfo);
    sub_B70694(&ServantSkillStrengthStatus___TypeInfo);
    sub_B70694(&SkillIconComponent___TypeInfo);
    sub_B70694(&UILabel___TypeInfo);
    sub_B70694(&UISprite___TypeInfo);
    byte_4355E1D = 1;
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
  v11 = (struct UISprite_array *)sub_B706AC(
                                   SkillIconComponent___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.chargeTitleSpriteList = v11;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.chargeTitleSpriteList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (struct UILabel_array *)sub_B706AC(
                                  UISprite___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.chargeDataLabelList = v18;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.chargeDataLabelList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UILabel_array *)sub_B706AC(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillNameLabelList = v25;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.skillNameLabelList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (struct ServantSkillStrengthStatus_array *)sub_B706AC(
                                                     UILabel___TypeInfo,
                                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillStrengthStatus = v32;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (struct UILabel_array *)sub_B706AC(
                                  ServantSkillStrengthStatus___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v39;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.skillExplanationLabelList,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (struct UnityEngine_GameObject_o *)sub_B706AC(
                                             UILabel___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.reinforceObject = v46;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.reinforceObject,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  LODWORD(this->fields.baseSize.fields.x) = 34;
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawSkill__Awake(
        ServantStatusListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  struct SkillIconComponent_array *skillIconList; // x8
  ServantStatusListViewItemDrawSkill_o *v3; // x19
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
    this = (ServantStatusListViewItemDrawSkill_o *)skillIconList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawSkill_o *)UnityEngine_GameObject__get_transform(
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
    this = (ServantStatusListViewItemDrawSkill_o *)v5->m_Items[1];
    if ( !this )
      goto LABEL_24;
    v6 = v4;
    this = (ServantStatusListViewItemDrawSkill_o *)UnityEngine_GameObject__get_transform(
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
  this = (ServantStatusListViewItemDrawSkill_o *)v3->fields.explanationLabel;
  v10 = LODWORD(v3->fields.baseSize.fields.y) * skillIconList->max_length;
  v11 = (float)(titleSprite->fields.mHeight - v10);
  v3->fields.baseSize.fields.z = (float)titleSprite->fields.mWidth;
  v3->fields.titleBasePosition.fields.x = v11;
  v3->fields.titleBasePosition.fields.y = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawSkill_o *)UnityEngine_Component__get_transform(
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
  this = (ServantStatusListViewItemDrawSkill_o *)v15->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawSkill_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_24;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.skillBasePosition.fields.z = v20.fields.x;
  *((float *)&v3->fields.skillBasePosition + 3) = v20.fields.y - v17;
  *(float *)&v3[1].klass = v20.fields.z;
}


int32_t __fastcall ServantStatusListViewItemDrawSkill__GetKind(
        ServantStatusListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  return 4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawSkill__SetItem(
        ServantStatusListViewItemDrawSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 svtEntity; // x0
  UILabel_o *skillBaseList; // x21
  System_String_o **v10; // x8
  System_String_o *v11; // x22
  int32_t SvtId; // w21
  struct UISprite_array *chargeTitleSpriteList; // x8
  int v14; // w24
  __int64 v15; // x23
  __int64 v16; // x9
  unsigned __int64 max_length; // x11
  SkillInfo_o *v18; // x22
  int64_t UserId; // x0
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *v21; // x21
  float x; // w25
  struct SkillIconComponent_array *skillIconList; // x8
  char v24; // w27
  __int64 v25; // x26
  unsigned __int64 v26; // x23
  struct UnityEngine_GameObject_o *reinforceObject; // x9
  __int64 v28; // x8
  ServantStatusListViewItemDrawSkill_c *v29; // x0
  UILabel_o *v30; // x21
  System_String_o *v31; // x22
  struct UnityEngine_GameObject_o *v32; // x8
  __int64 v33; // x8
  int v34; // w10
  float y; // w8
  int v36; // w21
  UserServantEntity_o *userSvtEntity; // x0
  int v38; // w23
  signed int v39; // w9
  unsigned int v40; // w10
  SkillInfo_o *v41; // x11
  float v42; // s8
  float z; // s9
  float v44; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v46; // s8
  double v47; // d0
  double v48; // d0
  int v49; // w20
  float v50; // s8
  float v51; // s10
  float v52; // s9
  int v53; // w20
  struct SkillIconComponent_array *v54; // x8
  float v55; // s8
  float v56; // s9
  __int64 v57; // x25
  float v58; // s10
  unsigned int v59; // w9
  SkillInfo_o *v60; // x28
  float v61; // s0
  float v62; // s1
  float v63; // s2
  float v64; // s3
  struct SkillIconComponent_array *v65; // x8
  float v66; // s11
  float v67; // s12
  float v68; // s13
  float v69; // s14
  struct UISprite_array *v70; // x8
  struct UILabel_array *v71; // x8
  struct UILabel_array *v72; // x8
  UILabel_o *v73; // x21
  System_String_o *v74; // x1
  struct UILabel_array *chargeDataLabelList; // x8
  struct UILabel_array *skillNameLabelList; // x8
  struct UnityEngine_GameObject_o *v77; // x8
  struct ServantSkillStrengthStatus_array *skillStrengthStatus; // x8
  struct ServantSkillStrengthStatus_array *v79; // x8
  struct ServantSkillStrengthStatus_array *v80; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  UnityEngine_Object_o *v82; // x20
  struct UILabel_array *v83; // x8
  UnityEngine_Object_o *v84; // x20
  struct ServantSkillStrengthStatus_array *v85; // x8
  UnityEngine_Component_o *v86; // x8
  System_String_o *v87; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UILabel_array *v89; // x21
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x20
  Il2CppClass **v97; // x0
  struct UILabel_array *v98; // x8
  struct ServantSkillStrengthStatus_array *v99; // x9
  struct UILabel_array *v100; // x8
  UnityEngine_Object_o *gameObject; // x20
  struct UnityEngine_GameObject_o *v102; // x8
  __int64 v103; // x8
  int v104; // w20
  float v105; // w9
  int v106; // w21
  struct UISprite_o *transformNameSprite; // x8
  int v108; // w8
  __int64 v109; // x0
  __int64 v110; // x0
  int v111; // [xsp+Ch] [xbp-A4h]
  SkillInfo_array *v112; // [xsp+18h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  UnityEngine_Vector2Int_o v114; // 0:x6.8
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4355E1C & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantSkillStrengthStatus_TypeInfo);
    sub_B70694(&ServantStatusListViewItemDrawSkill_TypeInfo);
    sub_B70694(&StringLiteral_12152/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    sub_B70694(&StringLiteral_12150/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4355E1C = 1;
  }
  skillInfoList = 0LL;
  v112 = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( !item || !mode )
    return;
  svtEntity = (__int64)item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_188;
  skillBaseList = (UILabel_o *)this->fields.skillBaseList;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0LL) )
    v10 = (System_String_o **)&StringLiteral_12152/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  else
    v10 = (System_String_o **)&StringLiteral_12150/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/;
  v11 = *v10;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  svtEntity = (__int64)LocalizationManager__Get(v11, 0LL);
  if ( !skillBaseList )
    goto LABEL_188;
  UILabel__set_text(skillBaseList, (System_String_o *)svtEntity, 0LL);
  SvtId = ServantStatusListViewItem__GetSvtId(item, 1, 0LL);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 1, 0LL);
  if ( !skillInfoList )
    return;
  chargeTitleSpriteList = this->fields.chargeTitleSpriteList;
  if ( !chargeTitleSpriteList )
    goto LABEL_188;
  v14 = 0;
  v15 = 4LL;
  while ( 1 )
  {
    v16 = v15 - 4;
    if ( v15 - 4 >= (int)chargeTitleSpriteList->max_length )
      break;
    if ( skillInfoList )
    {
      max_length = skillInfoList->max_length;
      if ( v16 < (int)max_length )
      {
        if ( v16 >= max_length )
        {
LABEL_200:
          v109 = sub_B70798(svtEntity);
          sub_B70738(v109, 0LL);
        }
        v18 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + v15);
        if ( v18 )
        {
          if ( v18->fields.id >= 1 )
          {
            UserId = ServantStatusListViewItem__get_UserId(item, 0LL);
            SkillInfo__OverwriteNextSkill(v18, UserId, SvtId, 0LL);
            chargeTitleSpriteList = this->fields.chargeTitleSpriteList;
            v14 = v15 - 3;
          }
        }
      }
      ++v15;
      if ( chargeTitleSpriteList )
        continue;
    }
    goto LABEL_188;
  }
  svtEntity = (__int64)this->fields.transformNameLabel;
  if ( !svtEntity )
    goto LABEL_188;
  IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
  svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
  if ( !svtEntity )
    goto LABEL_188;
  if ( IsTransformServant_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
    v21 = *(UILabel_o **)&this->fields.transformNameAddHeight;
    svtEntity = (__int64)ServantStatusListViewItem__GetTransformName(item, 0LL);
    if ( !v21 )
      goto LABEL_188;
    UILabel__set_text(v21, (System_String_o *)svtEntity, 0LL);
    x = this->fields.baseSize.fields.x;
    v111 = -LODWORD(x);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
    x = 0.0;
    v111 = 0;
  }
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_188;
  v24 = 0;
  v25 = 4LL;
  while ( 1 )
  {
    v26 = v25 - 4;
    if ( v25 - 4 >= (int)skillIconList->max_length )
      break;
    if ( (__int64)v26 < v14 )
    {
      if ( !skillInfoList )
        goto LABEL_188;
      if ( v26 >= skillInfoList->max_length )
        goto LABEL_200;
      reinforceObject = this->fields.reinforceObject;
      if ( !reinforceObject )
        goto LABEL_188;
      if ( v26 >= LODWORD(reinforceObject[1].klass) )
        goto LABEL_200;
      v28 = *((_QWORD *)&skillInfoList->obj.klass + v25);
      if ( !v28 )
        goto LABEL_188;
      v29 = ServantStatusListViewItemDrawSkill_TypeInfo;
      v30 = (UILabel_o *)*((_QWORD *)&reinforceObject->klass + v25);
      v31 = *(System_String_o **)(v28 + 40);
      if ( (BYTE3(ServantStatusListViewItemDrawSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        v29 = ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      svtEntity = WrapControlText__textBBCodeAdjust(
                    v30,
                    v31,
                    v29->static_fields->DETAIL_FONT_SIZE,
                    v29->static_fields->DETAIL_FONT_SIZE,
                    v29->static_fields->MAX_HEIGHT,
                    0LL);
      v32 = this->fields.reinforceObject;
      if ( !v32 )
        goto LABEL_188;
      if ( v26 >= LODWORD(v32[1].klass) )
        goto LABEL_200;
      v33 = *((_QWORD *)&v32->klass + v25);
      if ( !v33 )
        goto LABEL_188;
      v34 = *(_DWORD *)(v33 + 164);
      y = this->fields.baseSize.fields.y;
      v36 = v34 + ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v36 >= SLODWORD(y) )
      {
        LODWORD(x) += v36;
        svtEntity = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          svtEntity = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v26 == *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 32LL) - 1 )
          v24 |= v36 - LODWORD(this->fields.baseSize.fields.y) > 10;
      }
      else
      {
        LODWORD(x) += LODWORD(y);
      }
    }
    skillIconList = this->fields.skillIconList;
    ++v25;
    if ( !skillIconList )
      goto LABEL_188;
  }
  if ( item->fields._IsDisplayCombineButton_k__BackingField )
  {
    userSvtEntity = item->fields.userSvtEntity;
    v38 = v14;
    if ( userSvtEntity && !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
    {
      ServantStatusListViewItem__GetSkillInfo(item, &v112, 0, 0LL);
      if ( !v112 )
        goto LABEL_188;
      v39 = v112->max_length;
      if ( v39 >= 1 )
      {
        v40 = 0;
        while ( 1 )
        {
          if ( v40 >= v39 )
            goto LABEL_200;
          v41 = v112->m_Items[v40];
          if ( !v41 )
            goto LABEL_188;
          if ( v41->fields.isUse && v41->fields.lv <= 9 )
            break;
          if ( (int)++v40 >= v39 )
            goto LABEL_68;
        }
        svtEntity = (__int64)this->fields.reinforceButton;
        if ( (v24 & 1) != 0 )
          v106 = 62;
        else
          v106 = 50;
        if ( !svtEntity )
          goto LABEL_188;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        transformNameSprite = this->fields.transformNameSprite;
        if ( !transformNameSprite )
          goto LABEL_188;
        transformNameSprite->fields.mStarted = 1;
        svtEntity = (__int64)this->fields.transformNameSprite;
        if ( !svtEntity )
          goto LABEL_188;
        LODWORD(x) += v106;
        UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
        if ( x >= 0.0 )
          v108 = LODWORD(x);
        else
          v108 = LODWORD(x) + 1;
        GameObjectExtensions__SetLocalPositionY(
          (UnityEngine_GameObject_o *)this->fields.reinforceButton,
          (float)-(v108 >> 1),
          0LL);
      }
    }
  }
  else
  {
    v38 = v14;
  }
LABEL_68:
  z = this->fields.baseSize.fields.z;
  v42 = this->fields.titleBasePosition.fields.x;
  v44 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v46 = v42 + (float)SLODWORD(x);
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    svtEntity = (__int64)this->fields.baseSprite;
    if ( !svtEntity )
      goto LABEL_188;
    v115.fields.x = z;
    v115.fields.y = v46;
    v115.fields.z = v44;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)svtEntity, v115, 0LL);
  }
  svtEntity = (__int64)this->fields.titleSprite;
  if ( !svtEntity )
    goto LABEL_188;
  v47 = z;
  if ( z == INFINITY )
    v47 = -z;
  UIWidget__set_width((UIWidget_o *)svtEntity, (int)v47, 0LL);
  svtEntity = (__int64)this->fields.titleSprite;
  if ( !svtEntity )
    goto LABEL_188;
  v48 = v46;
  if ( v46 == INFINITY )
    v48 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)svtEntity, (int)v48, 0LL);
  svtEntity = (__int64)this->fields.explanationLabel;
  v49 = x >= 0.0 ? LODWORD(x) : LODWORD(x) + 1;
  if ( !svtEntity )
    goto LABEL_188;
  v50 = this->fields.titleBasePosition.fields.z;
  v51 = this->fields.skillBasePosition.fields.x;
  v52 = this->fields.skillBasePosition.fields.y;
  svtEntity = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)svtEntity, 0LL);
  if ( !svtEntity
    || (v53 = v49 >> 1,
        v116.fields.y = v51 + (float)v53,
        v116.fields.x = v50,
        v116.fields.z = v52,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtEntity, v116, 0LL),
        (v54 = this->fields.skillIconList) == 0LL) )
  {
LABEL_188:
    sub_B7076C(svtEntity, v7);
  }
  v55 = *(float *)&this[1].klass;
  v56 = this->fields.skillBasePosition.fields.z;
  v57 = 0LL;
  v58 = *((float *)&this->fields.skillBasePosition + 3) + (float)(v53 + v111);
  while ( 1 )
  {
    v59 = v54->max_length;
    if ( (int)v57 >= (int)v59 )
      break;
    if ( (int)v57 >= v38 )
    {
      if ( (unsigned int)v57 >= v59 )
        goto LABEL_200;
      svtEntity = (__int64)v54->m_Items[v57];
      if ( !svtEntity )
        goto LABEL_188;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_188;
      if ( (unsigned int)v57 >= skillInfoList->max_length || (unsigned int)v57 >= v59 )
        goto LABEL_200;
      svtEntity = (__int64)v54->m_Items[(int)v57];
      if ( !svtEntity )
        goto LABEL_188;
      v60 = skillInfoList->m_Items[(int)v57];
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
      if ( !v60 )
        goto LABEL_188;
      *(UnityEngine_Color_o *)&v61 = (v60->fields.lv & 0x80000000) != 0
                                   ? UnityEngine_Color__get_gray(0LL)
                                   : UnityEngine_Color__get_white(0LL);
      v65 = this->fields.skillIconList;
      v66 = v61;
      v67 = v62;
      v68 = v63;
      v69 = v64;
      if ( !v65 )
        goto LABEL_188;
      if ( (unsigned int)v57 >= v65->max_length )
        goto LABEL_200;
      svtEntity = (__int64)v65->m_Items[(int)v57];
      if ( !svtEntity )
        goto LABEL_188;
      svtEntity = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)svtEntity, 0LL);
      if ( !svtEntity )
        goto LABEL_188;
      v117.fields.x = v56;
      v117.fields.y = v58;
      v117.fields.z = v55;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtEntity, v117, 0LL);
      v70 = this->fields.chargeTitleSpriteList;
      if ( !v70 )
        goto LABEL_188;
      if ( (unsigned int)v57 >= v70->max_length )
        goto LABEL_200;
      svtEntity = (__int64)v70->m_Items[(int)v57];
      if ( !svtEntity )
        goto LABEL_188;
      SkillIconComponent__Set_26485508((SkillIconComponent_o *)svtEntity, v60->fields.id, v60->fields.lv, 0LL);
      if ( (v60->fields.lv & 0x80000000) != 0 || (v60->fields.charge & 0x80000000) != 0 )
      {
        chargeDataLabelList = this->fields.chargeDataLabelList;
        if ( !chargeDataLabelList )
          goto LABEL_188;
        if ( (unsigned int)v57 >= chargeDataLabelList->max_length )
          goto LABEL_200;
        svtEntity = (__int64)chargeDataLabelList->m_Items[(int)v57];
        if ( !svtEntity )
          goto LABEL_188;
        svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_188;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
        skillNameLabelList = this->fields.skillNameLabelList;
        if ( !skillNameLabelList )
          goto LABEL_188;
        if ( (unsigned int)v57 >= skillNameLabelList->max_length )
          goto LABEL_200;
        svtEntity = (__int64)skillNameLabelList->m_Items[(int)v57];
        if ( !svtEntity )
          goto LABEL_188;
        v74 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        v71 = this->fields.chargeDataLabelList;
        if ( !v71 )
          goto LABEL_188;
        if ( (unsigned int)v57 >= v71->max_length )
          goto LABEL_200;
        svtEntity = (__int64)v71->m_Items[(int)v57];
        if ( !svtEntity )
          goto LABEL_188;
        svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_188;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        v72 = this->fields.skillNameLabelList;
        if ( !v72 )
          goto LABEL_188;
        if ( (unsigned int)v57 >= v72->max_length )
          goto LABEL_200;
        v73 = v72->m_Items[(int)v57];
        svtEntity = (__int64)System_Int32__ToString((int)v60 + 24, 0LL);
        if ( !v73 )
          goto LABEL_188;
        v74 = (System_String_o *)svtEntity;
        svtEntity = (__int64)v73;
      }
      UILabel__set_text((UILabel_o *)svtEntity, v74, 0LL);
      v77 = this->fields.reinforceObject;
      if ( !v77 )
        goto LABEL_188;
      if ( (unsigned int)v57 >= LODWORD(v77[1].klass) )
        goto LABEL_200;
      svtEntity = *((_QWORD *)&v77[1].monitor + (int)v57);
      if ( !svtEntity )
        goto LABEL_188;
      v118.fields.r = v66;
      v118.fields.g = v67;
      v118.fields.b = v68;
      v118.fields.a = v69;
      UIWidget__set_color((UIWidget_o *)svtEntity, v118, 0LL);
      skillStrengthStatus = this->fields.skillStrengthStatus;
      if ( !skillStrengthStatus )
        goto LABEL_188;
      if ( (unsigned int)v57 >= skillStrengthStatus->max_length )
        goto LABEL_200;
      svtEntity = (__int64)skillStrengthStatus->m_Items[(int)v57];
      if ( !svtEntity )
        goto LABEL_188;
      UILabel__set_text((UILabel_o *)svtEntity, v60->fields.title, 0LL);
      v79 = this->fields.skillStrengthStatus;
      if ( !v79 )
        goto LABEL_188;
      if ( (unsigned int)v57 >= v79->max_length )
        goto LABEL_200;
      svtEntity = (__int64)v79->m_Items[(int)v57];
      if ( !svtEntity )
        goto LABEL_188;
      v119.fields.r = v66;
      v119.fields.g = v67;
      v119.fields.b = v68;
      v119.fields.a = v69;
      UIWidget__set_color((UIWidget_o *)svtEntity, v119, 0LL);
      v80 = this->fields.skillStrengthStatus;
      if ( !v80 )
        goto LABEL_188;
      if ( (unsigned int)v57 >= v80->max_length )
        goto LABEL_200;
      svtEntity = (__int64)v80->m_Items[(int)v57];
      if ( !svtEntity )
        goto LABEL_188;
      UILabel__SetCondensedScale((UILabel_o *)svtEntity, 340, 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_188;
      if ( (unsigned int)v57 >= skillExplanationLabelList->max_length )
        goto LABEL_200;
      v82 = (UnityEngine_Object_o *)skillExplanationLabelList->m_Items[(int)v57];
      if ( (v60->fields.lv & 0x80000000) != 0 )
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        svtEntity = UnityEngine_Object__op_Inequality(v82, 0LL, 0LL);
        if ( (svtEntity & 1) != 0 )
        {
          v100 = this->fields.skillExplanationLabelList;
          if ( !v100 )
            goto LABEL_188;
          if ( (unsigned int)v57 >= v100->max_length )
            goto LABEL_200;
          svtEntity = (__int64)v100->m_Items[(int)v57];
          if ( !svtEntity )
            goto LABEL_188;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)svtEntity,
                                                 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
        }
      }
      else
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        svtEntity = UnityEngine_Object__op_Inequality(v82, 0LL, 0LL);
        if ( (svtEntity & 1) != 0 )
        {
          v83 = this->fields.skillExplanationLabelList;
          if ( !v83 )
            goto LABEL_188;
          if ( (unsigned int)v57 >= v83->max_length )
            goto LABEL_200;
          svtEntity = (__int64)v83->m_Items[(int)v57];
          if ( !svtEntity )
            goto LABEL_188;
          v84 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_36067208(v84, 0LL);
        }
        svtEntity = (__int64)ServantSkillStrengthStatus_TypeInfo;
        if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
          svtEntity = (__int64)ServantSkillStrengthStatus_TypeInfo;
        }
        v85 = this->fields.skillStrengthStatus;
        if ( !v85 )
          goto LABEL_188;
        if ( (unsigned int)v57 >= v85->max_length )
          goto LABEL_200;
        v86 = (UnityEngine_Component_o *)v85->m_Items[(int)v57];
        if ( !v86 )
          goto LABEL_188;
        v87 = **(System_String_o ***)(svtEntity + 184);
        transform = UnityEngine_Component__get_transform(v86, 0LL);
        svtEntity = (__int64)BaseMonoBehaviour__CreateObjectStatic(v87, transform, 0LL, 0LL);
        if ( !svtEntity )
          goto LABEL_188;
        v89 = this->fields.skillExplanationLabelList;
        svtEntity = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)svtEntity,
                               (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        if ( !v89 )
          goto LABEL_188;
        v96 = (System_Int32_array **)svtEntity;
        if ( svtEntity )
        {
          svtEntity = sub_B70754(svtEntity, v89->obj.klass->_1.element_class);
          if ( !svtEntity )
          {
            v110 = sub_B7078C(0LL);
            sub_B70738(v110, 0LL);
          }
        }
        if ( (unsigned int)v57 >= v89->max_length )
          goto LABEL_200;
        v97 = &v89->obj.klass + (int)v57;
        v97[4] = (Il2CppClass *)v96;
        sub_B70630((BattleServantConfConponent_o *)(v97 + 4), v96, v90, v91, v92, v93, v94, v95);
        v98 = this->fields.skillExplanationLabelList;
        if ( !v98 )
          goto LABEL_188;
        if ( (unsigned int)v57 >= v98->max_length )
          goto LABEL_200;
        v99 = this->fields.skillStrengthStatus;
        if ( !v99 )
          goto LABEL_188;
        if ( (unsigned int)v57 >= v99->max_length )
          goto LABEL_200;
        svtEntity = (__int64)v98->m_Items[(int)v57];
        if ( !svtEntity )
          goto LABEL_188;
        v114 = (UnityEngine_Vector2Int_o)0x1600000018LL;
        ServantSkillStrengthStatus__Set(
          (ServantSkillStrengthStatus_o *)svtEntity,
          (UILabel_o *)v99->m_Items[(int)v57],
          v60->fields.strengthStatus,
          v60->fields.skillRecord,
          24,
          1,
          v114,
          0LL);
      }
    }
    v102 = this->fields.reinforceObject;
    if ( !v102 )
      goto LABEL_188;
    if ( (unsigned int)v57 >= LODWORD(v102[1].klass) )
      goto LABEL_200;
    v103 = *((_QWORD *)&v102[1].monitor + (int)v57);
    if ( v103 )
    {
      svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      v104 = *(_DWORD *)(v103 + 164);
      if ( (BYTE3(ServantStatusListViewItemDrawSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      ++v57;
      v54 = this->fields.skillIconList;
      LODWORD(v105) = *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 8LL) + v104;
      if ( SLODWORD(v105) < SLODWORD(this->fields.baseSize.fields.y) )
        v105 = this->fields.baseSize.fields.y;
      v58 = v58 - (float)SLODWORD(v105);
      if ( v54 )
        continue;
    }
    goto LABEL_188;
  }
}