void __fastcall ServantStatusListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A7E7 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItemDrawSkill_TypeInfo, v1);
    byte_418A7E7 = 1;
  }
  ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->MAX_HEIGHT = 500;
  ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawSkill___ctor(
        ServantStatusListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BalanceConfig_c *v8; // x0
  struct SkillIconComponent_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UISprite_array *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UILabel_array *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UILabel_array *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct ServantSkillStrengthStatus_array *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct UILabel_array *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7

  if ( (byte_418A7E6 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&UnityEngine_GameObject___TypeInfo, v3);
    sub_B2C35C(&ServantSkillStrengthStatus___TypeInfo, v4);
    sub_B2C35C(&SkillIconComponent___TypeInfo, v5);
    sub_B2C35C(&UILabel___TypeInfo, v6);
    sub_B2C35C(&UISprite___TypeInfo, v7);
    byte_418A7E6 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct SkillIconComponent_array *)sub_B2C374(
                                            UnityEngine_GameObject___TypeInfo,
                                            (unsigned int)v8->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v9;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (struct UISprite_array *)sub_B2C374(
                                   SkillIconComponent___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.chargeTitleSpriteList = v16;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.chargeTitleSpriteList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (struct UILabel_array *)sub_B2C374(
                                  UISprite___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.chargeDataLabelList = v23;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.chargeDataLabelList,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (struct UILabel_array *)sub_B2C374(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillNameLabelList = v30;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillNameLabelList,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (struct ServantSkillStrengthStatus_array *)sub_B2C374(
                                                     UILabel___TypeInfo,
                                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillStrengthStatus = v37;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (struct UILabel_array *)sub_B2C374(
                                  ServantSkillStrengthStatus___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v44;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillExplanationLabelList,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = (System_Int32_array **)sub_B2C374(
                                 UILabel___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  *(_QWORD *)&this->fields.skillPitch = v51;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.skillPitch, v51, v52, v53, v54, v55, v56, v57);
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
    sub_B2C434(this, method);
  if ( !v15->max_length )
  {
LABEL_25:
    v18 = sub_B2C460(this);
    sub_B2C400(v18, 0LL);
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
  *(float *)&v3[1].klass = v20.fields.y - v17;
  HIDWORD(v3[1].klass) = LODWORD(v20.fields.z);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 svtEntity; // x0
  UILabel_o *skillBaseList; // x21
  System_String_o **v17; // x8
  System_String_o *v18; // x22
  struct UISprite_array *chargeTitleSpriteList; // x8
  int v20; // w22
  __int64 v21; // x23
  __int64 v22; // x9
  unsigned __int64 max_length; // x11
  SkillInfo_o *v24; // x21
  int64_t UserId; // x22
  int32_t SvtId; // w0
  struct SkillIconComponent_array *skillIconList; // x8
  int v28; // w25
  __int64 v29; // x26
  unsigned __int64 v30; // x27
  __int64 v31; // x9
  __int64 v32; // x8
  ServantStatusListViewItemDrawSkill_c *v33; // x0
  UILabel_o *v34; // x20
  System_String_o *v35; // x21
  __int64 v36; // x8
  __int64 v37; // x8
  int v38; // w10
  float y; // w8
  int v40; // w9
  float x; // s8
  float z; // s9
  float v43; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v45; // s8
  double v46; // d0
  double v47; // d0
  int v48; // w20
  float v49; // s8
  float v50; // s11
  float v51; // s9
  float v52; // s10
  struct SkillIconComponent_array *v53; // x8
  float v54; // s8
  float v55; // s9
  __int64 v56; // x25
  float v57; // s10
  unsigned int v58; // w9
  SkillInfo_o *v59; // x28
  float v60; // s0
  float v61; // s1
  float v62; // s2
  float v63; // s3
  struct SkillIconComponent_array *v64; // x8
  float v65; // s11
  float v66; // s12
  float v67; // s13
  float v68; // s14
  struct UISprite_array *v69; // x8
  struct UILabel_array *v70; // x8
  struct UILabel_array *v71; // x8
  UILabel_o *v72; // x21
  System_String_o *v73; // x1
  struct UILabel_array *chargeDataLabelList; // x8
  struct UILabel_array *skillNameLabelList; // x8
  __int64 v76; // x8
  struct ServantSkillStrengthStatus_array *skillStrengthStatus; // x8
  struct ServantSkillStrengthStatus_array *v78; // x8
  struct ServantSkillStrengthStatus_array *v79; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  UnityEngine_Object_o *v81; // x20
  struct UILabel_array *v82; // x8
  UnityEngine_Object_o *v83; // x20
  struct ServantSkillStrengthStatus_array *v84; // x8
  UnityEngine_Component_o *v85; // x8
  System_String_o *v86; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UILabel_array *v88; // x21
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **v95; // x20
  Il2CppClass **v96; // x0
  struct UILabel_array *v97; // x8
  struct ServantSkillStrengthStatus_array *v98; // x9
  struct UILabel_array *v99; // x8
  UnityEngine_Object_o *gameObject; // x20
  __int64 v101; // x8
  __int64 v102; // x8
  int v103; // w20
  float v104; // w9
  __int64 v105; // x0
  __int64 v106; // x0
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector2Int_o v108; // 0:x6.8
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A7E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, item);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&ServantSkillStrengthStatus_TypeInfo, v9);
    sub_B2C35C(&ServantStatusListViewItemDrawSkill_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_11982/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v11);
    sub_B2C35C(&StringLiteral_11980/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_418A7E5 = 1;
  }
  skillInfoList = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( !item || !mode )
    return;
  svtEntity = (__int64)item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_165;
  skillBaseList = (UILabel_o *)this->fields.skillBaseList;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0LL) )
    v17 = (System_String_o **)&StringLiteral_11982/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  else
    v17 = (System_String_o **)&StringLiteral_11980/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/;
  v18 = *v17;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  svtEntity = (__int64)LocalizationManager__Get(v18, 0LL);
  if ( !skillBaseList )
    goto LABEL_165;
  UILabel__set_text(skillBaseList, (System_String_o *)svtEntity, 0LL);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0LL);
  if ( !skillInfoList )
    return;
  chargeTitleSpriteList = this->fields.chargeTitleSpriteList;
  if ( !chargeTitleSpriteList )
    goto LABEL_165;
  v20 = 0;
  v21 = 4LL;
  while ( 1 )
  {
    v22 = v21 - 4;
    if ( v21 - 4 >= (int)chargeTitleSpriteList->max_length )
      break;
    if ( skillInfoList )
    {
      max_length = skillInfoList->max_length;
      if ( v22 < (int)max_length )
      {
        if ( v22 >= max_length )
        {
LABEL_167:
          v105 = sub_B2C460(svtEntity);
          sub_B2C400(v105, 0LL);
        }
        v24 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + v21);
        if ( v24 )
        {
          if ( v24->fields.id >= 1 )
          {
            UserId = ServantStatusListViewItem__get_UserId(item, 0LL);
            SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
            SkillInfo__OverwriteNextSkill(v24, UserId, SvtId, 0LL);
            chargeTitleSpriteList = this->fields.chargeTitleSpriteList;
            v20 = v21 - 3;
          }
        }
      }
      ++v21;
      if ( chargeTitleSpriteList )
        continue;
    }
    goto LABEL_165;
  }
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_165;
  v28 = 0;
  v29 = 4LL;
  while ( 1 )
  {
    v30 = v29 - 4;
    if ( v29 - 4 >= (int)skillIconList->max_length )
      break;
    if ( (__int64)v30 < v20 )
    {
      if ( !skillInfoList )
        goto LABEL_165;
      if ( v30 >= skillInfoList->max_length )
        goto LABEL_167;
      v31 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v31 )
        goto LABEL_165;
      if ( v30 >= *(unsigned int *)(v31 + 24) )
        goto LABEL_167;
      v32 = *((_QWORD *)&skillInfoList->obj.klass + v29);
      if ( !v32 )
        goto LABEL_165;
      v33 = ServantStatusListViewItemDrawSkill_TypeInfo;
      v34 = *(UILabel_o **)(v31 + 8 * v29);
      v35 = *(System_String_o **)(v32 + 40);
      if ( (BYTE3(ServantStatusListViewItemDrawSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        v33 = ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      svtEntity = WrapControlText__textBBCodeAdjust(
                    v34,
                    v35,
                    v33->static_fields->DETAIL_FONT_SIZE,
                    v33->static_fields->DETAIL_FONT_SIZE,
                    v33->static_fields->MAX_HEIGHT,
                    0LL);
      v36 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v36 )
        goto LABEL_165;
      if ( v30 >= *(unsigned int *)(v36 + 24) )
        goto LABEL_167;
      v37 = *(_QWORD *)(v36 + 8 * v29);
      if ( !v37 )
        goto LABEL_165;
      v38 = *(_DWORD *)(v37 + 164);
      y = this->fields.baseSize.fields.y;
      v40 = v38 + ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v40 >= SLODWORD(y) )
        v28 += v40;
      else
        v28 += LODWORD(y);
    }
    skillIconList = this->fields.skillIconList;
    ++v29;
    if ( !skillIconList )
      goto LABEL_165;
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v43 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v45 = x + (float)v28;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    svtEntity = (__int64)this->fields.baseSprite;
    if ( !svtEntity )
      goto LABEL_165;
    v109.fields.x = z;
    v109.fields.y = v45;
    v109.fields.z = v43;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)svtEntity, v109, 0LL);
  }
  svtEntity = (__int64)this->fields.titleSprite;
  if ( !svtEntity )
    goto LABEL_165;
  v46 = z;
  if ( z == INFINITY )
    v46 = -z;
  UIWidget__set_width((UIWidget_o *)svtEntity, (int)v46, 0LL);
  svtEntity = (__int64)this->fields.titleSprite;
  if ( !svtEntity )
    goto LABEL_165;
  v47 = v45;
  if ( v45 == INFINITY )
    v47 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)svtEntity, (int)v47, 0LL);
  svtEntity = (__int64)this->fields.explanationLabel;
  v48 = v28 >= 0 ? v28 : v28 + 1;
  if ( !svtEntity )
    goto LABEL_165;
  v49 = this->fields.titleBasePosition.fields.z;
  v50 = this->fields.skillBasePosition.fields.x;
  v51 = this->fields.skillBasePosition.fields.y;
  svtEntity = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)svtEntity, 0LL);
  if ( !svtEntity
    || (v52 = (float)(v48 >> 1),
        v110.fields.y = v50 + v52,
        v110.fields.x = v49,
        v110.fields.z = v51,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtEntity, v110, 0LL),
        (v53 = this->fields.skillIconList) == 0LL) )
  {
LABEL_165:
    sub_B2C434(svtEntity, v14);
  }
  v54 = this->fields.skillBasePosition.fields.z;
  v55 = *((float *)&this[1].klass + 1);
  v56 = 0LL;
  v57 = *(float *)&this[1].klass + v52;
  while ( 1 )
  {
    v58 = v53->max_length;
    if ( (int)v56 >= (int)v58 )
      break;
    if ( (int)v56 >= v20 )
    {
      if ( (unsigned int)v56 >= v58 )
        goto LABEL_167;
      svtEntity = (__int64)v53->m_Items[v56];
      if ( !svtEntity )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_165;
      if ( (unsigned int)v56 >= skillInfoList->max_length || (unsigned int)v56 >= v58 )
        goto LABEL_167;
      svtEntity = (__int64)v53->m_Items[(int)v56];
      if ( !svtEntity )
        goto LABEL_165;
      v59 = skillInfoList->m_Items[(int)v56];
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
      if ( !v59 )
        goto LABEL_165;
      *(UnityEngine_Color_o *)&v60 = (v59->fields.lv & 0x80000000) != 0
                                   ? UnityEngine_Color__get_gray(0LL)
                                   : UnityEngine_Color__get_white(0LL);
      v64 = this->fields.skillIconList;
      v65 = v60;
      v66 = v61;
      v67 = v62;
      v68 = v63;
      if ( !v64 )
        goto LABEL_165;
      if ( (unsigned int)v56 >= v64->max_length )
        goto LABEL_167;
      svtEntity = (__int64)v64->m_Items[(int)v56];
      if ( !svtEntity )
        goto LABEL_165;
      svtEntity = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)svtEntity, 0LL);
      if ( !svtEntity )
        goto LABEL_165;
      v111.fields.x = v54;
      v111.fields.y = v57;
      v111.fields.z = v55;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtEntity, v111, 0LL);
      v69 = this->fields.chargeTitleSpriteList;
      if ( !v69 )
        goto LABEL_165;
      if ( (unsigned int)v56 >= v69->max_length )
        goto LABEL_167;
      svtEntity = (__int64)v69->m_Items[(int)v56];
      if ( !svtEntity )
        goto LABEL_165;
      SkillIconComponent__Set_23787276((SkillIconComponent_o *)svtEntity, v59->fields.id, v59->fields.lv, 0LL);
      if ( (v59->fields.lv & 0x80000000) != 0 || (v59->fields.charge & 0x80000000) != 0 )
      {
        chargeDataLabelList = this->fields.chargeDataLabelList;
        if ( !chargeDataLabelList )
          goto LABEL_165;
        if ( (unsigned int)v56 >= chargeDataLabelList->max_length )
          goto LABEL_167;
        svtEntity = (__int64)chargeDataLabelList->m_Items[(int)v56];
        if ( !svtEntity )
          goto LABEL_165;
        svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_165;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
        skillNameLabelList = this->fields.skillNameLabelList;
        if ( !skillNameLabelList )
          goto LABEL_165;
        if ( (unsigned int)v56 >= skillNameLabelList->max_length )
          goto LABEL_167;
        svtEntity = (__int64)skillNameLabelList->m_Items[(int)v56];
        if ( !svtEntity )
          goto LABEL_165;
        v73 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        v70 = this->fields.chargeDataLabelList;
        if ( !v70 )
          goto LABEL_165;
        if ( (unsigned int)v56 >= v70->max_length )
          goto LABEL_167;
        svtEntity = (__int64)v70->m_Items[(int)v56];
        if ( !svtEntity )
          goto LABEL_165;
        svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_165;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        v71 = this->fields.skillNameLabelList;
        if ( !v71 )
          goto LABEL_165;
        if ( (unsigned int)v56 >= v71->max_length )
          goto LABEL_167;
        v72 = v71->m_Items[(int)v56];
        svtEntity = (__int64)System_Int32__ToString((int)v59 + 24, 0LL);
        if ( !v72 )
          goto LABEL_165;
        v73 = (System_String_o *)svtEntity;
        svtEntity = (__int64)v72;
      }
      UILabel__set_text((UILabel_o *)svtEntity, v73, 0LL);
      v76 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v76 )
        goto LABEL_165;
      if ( (unsigned int)v56 >= *(_DWORD *)(v76 + 24) )
        goto LABEL_167;
      svtEntity = *(_QWORD *)(v76 + 8LL * (int)v56 + 32);
      if ( !svtEntity )
        goto LABEL_165;
      v112.fields.r = v65;
      v112.fields.g = v66;
      v112.fields.b = v67;
      v112.fields.a = v68;
      UIWidget__set_color((UIWidget_o *)svtEntity, v112, 0LL);
      skillStrengthStatus = this->fields.skillStrengthStatus;
      if ( !skillStrengthStatus )
        goto LABEL_165;
      if ( (unsigned int)v56 >= skillStrengthStatus->max_length )
        goto LABEL_167;
      svtEntity = (__int64)skillStrengthStatus->m_Items[(int)v56];
      if ( !svtEntity )
        goto LABEL_165;
      UILabel__set_text((UILabel_o *)svtEntity, v59->fields.title, 0LL);
      v78 = this->fields.skillStrengthStatus;
      if ( !v78 )
        goto LABEL_165;
      if ( (unsigned int)v56 >= v78->max_length )
        goto LABEL_167;
      svtEntity = (__int64)v78->m_Items[(int)v56];
      if ( !svtEntity )
        goto LABEL_165;
      v113.fields.r = v65;
      v113.fields.g = v66;
      v113.fields.b = v67;
      v113.fields.a = v68;
      UIWidget__set_color((UIWidget_o *)svtEntity, v113, 0LL);
      v79 = this->fields.skillStrengthStatus;
      if ( !v79 )
        goto LABEL_165;
      if ( (unsigned int)v56 >= v79->max_length )
        goto LABEL_167;
      svtEntity = (__int64)v79->m_Items[(int)v56];
      if ( !svtEntity )
        goto LABEL_165;
      UILabel__SetCondensedScale((UILabel_o *)svtEntity, 340, 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_165;
      if ( (unsigned int)v56 >= skillExplanationLabelList->max_length )
        goto LABEL_167;
      v81 = (UnityEngine_Object_o *)skillExplanationLabelList->m_Items[(int)v56];
      if ( (v59->fields.lv & 0x80000000) != 0 )
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        svtEntity = UnityEngine_Object__op_Inequality(v81, 0LL, 0LL);
        if ( (svtEntity & 1) != 0 )
        {
          v99 = this->fields.skillExplanationLabelList;
          if ( !v99 )
            goto LABEL_165;
          if ( (unsigned int)v56 >= v99->max_length )
            goto LABEL_167;
          svtEntity = (__int64)v99->m_Items[(int)v56];
          if ( !svtEntity )
            goto LABEL_165;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)svtEntity,
                                                 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
        }
      }
      else
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        svtEntity = UnityEngine_Object__op_Inequality(v81, 0LL, 0LL);
        if ( (svtEntity & 1) != 0 )
        {
          v82 = this->fields.skillExplanationLabelList;
          if ( !v82 )
            goto LABEL_165;
          if ( (unsigned int)v56 >= v82->max_length )
            goto LABEL_167;
          svtEntity = (__int64)v82->m_Items[(int)v56];
          if ( !svtEntity )
            goto LABEL_165;
          v83 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35314896(v83, 0LL);
        }
        svtEntity = (__int64)ServantSkillStrengthStatus_TypeInfo;
        if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
          svtEntity = (__int64)ServantSkillStrengthStatus_TypeInfo;
        }
        v84 = this->fields.skillStrengthStatus;
        if ( !v84 )
          goto LABEL_165;
        if ( (unsigned int)v56 >= v84->max_length )
          goto LABEL_167;
        v85 = (UnityEngine_Component_o *)v84->m_Items[(int)v56];
        if ( !v85 )
          goto LABEL_165;
        v86 = **(System_String_o ***)(svtEntity + 184);
        transform = UnityEngine_Component__get_transform(v85, 0LL);
        svtEntity = (__int64)BaseMonoBehaviour__CreateObjectStatic(v86, transform, 0LL, 0LL);
        if ( !svtEntity )
          goto LABEL_165;
        v88 = this->fields.skillExplanationLabelList;
        svtEntity = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)svtEntity,
                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        if ( !v88 )
          goto LABEL_165;
        v95 = (System_Int32_array **)svtEntity;
        if ( svtEntity )
        {
          svtEntity = sub_B2C41C(svtEntity, v88->obj.klass->_1.element_class);
          if ( !svtEntity )
          {
            v106 = sub_B2C454(0LL);
            sub_B2C400(v106, 0LL);
          }
        }
        if ( (unsigned int)v56 >= v88->max_length )
          goto LABEL_167;
        v96 = &v88->obj.klass + (int)v56;
        v96[4] = (Il2CppClass *)v95;
        sub_B2C2F8((BattleServantConfConponent_o *)(v96 + 4), v95, v89, v90, v91, v92, v93, v94);
        v97 = this->fields.skillExplanationLabelList;
        if ( !v97 )
          goto LABEL_165;
        if ( (unsigned int)v56 >= v97->max_length )
          goto LABEL_167;
        v98 = this->fields.skillStrengthStatus;
        if ( !v98 )
          goto LABEL_165;
        if ( (unsigned int)v56 >= v98->max_length )
          goto LABEL_167;
        svtEntity = (__int64)v97->m_Items[(int)v56];
        if ( !svtEntity )
          goto LABEL_165;
        v108 = (UnityEngine_Vector2Int_o)0x1600000018LL;
        ServantSkillStrengthStatus__Set(
          (ServantSkillStrengthStatus_o *)svtEntity,
          (UILabel_o *)v98->m_Items[(int)v56],
          v59->fields.strengthStatus,
          v59->fields.skillRecord,
          24,
          1,
          v108,
          0LL);
      }
    }
    v101 = *(_QWORD *)&this->fields.skillPitch;
    if ( !v101 )
      goto LABEL_165;
    if ( (unsigned int)v56 >= *(_DWORD *)(v101 + 24) )
      goto LABEL_167;
    v102 = *(_QWORD *)(v101 + 8LL * (int)v56 + 32);
    if ( v102 )
    {
      svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      v103 = *(_DWORD *)(v102 + 164);
      if ( (BYTE3(ServantStatusListViewItemDrawSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      ++v56;
      v53 = this->fields.skillIconList;
      LODWORD(v104) = *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 8LL) + v103;
      if ( SLODWORD(v104) < SLODWORD(this->fields.baseSize.fields.y) )
        v104 = this->fields.baseSize.fields.y;
      v57 = v57 - (float)SLODWORD(v104);
      if ( v53 )
        continue;
    }
    goto LABEL_165;
  }
}