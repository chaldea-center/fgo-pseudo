void __fastcall ServantStatusListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECB7C & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItemDrawSkill_TypeInfo, v1, v2, v3);
    byte_42ECB7C = 1;
  }
  ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->MAX_HEIGHT = 500;
  ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawSkill___ctor(
        ServantStatusListViewItemDrawSkill_o *this,
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  BalanceConfig_c *v20; // x0
  struct SkillIconComponent_array *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UISprite_array *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct UILabel_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct UILabel_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct ServantSkillStrengthStatus_array *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct UILabel_array *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct UnityEngine_GameObject_o *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7

  if ( (byte_42ECB7B & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&ServantSkillStrengthStatus___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SkillIconComponent___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UILabel___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UISprite___TypeInfo, v17, v18, v19);
    byte_42ECB7B = 1;
  }
  v20 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  v21 = (struct SkillIconComponent_array *)sub_B5D5DC(
                                             UnityEngine_GameObject___TypeInfo,
                                             (unsigned int)v20->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (struct UISprite_array *)sub_B5D5DC(
                                   SkillIconComponent___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.chargeTitleSpriteList = v28;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.chargeTitleSpriteList,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (struct UILabel_array *)sub_B5D5DC(
                                  UISprite___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.chargeDataLabelList = v35;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.chargeDataLabelList,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (struct UILabel_array *)sub_B5D5DC(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillNameLabelList = v42;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillNameLabelList,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = (struct ServantSkillStrengthStatus_array *)sub_B5D5DC(
                                                     UILabel___TypeInfo,
                                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillStrengthStatus = v49;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v56 = (struct UILabel_array *)sub_B5D5DC(
                                  ServantSkillStrengthStatus___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v56;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillExplanationLabelList,
    (System_Int32_array **)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = (struct UnityEngine_GameObject_o *)sub_B5D5DC(
                                             UILabel___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.reinforceObject = v63;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.reinforceObject,
    (System_Int32_array **)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
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
    sub_B5D69C(this, method);
  if ( !v15->max_length )
  {
LABEL_25:
    v18 = sub_B5D6C8(this);
    sub_B5D668(v18, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  __int64 v31; // x1
  __int64 svtEntity; // x0
  UILabel_o *skillBaseList; // x21
  System_String_o **v34; // x8
  System_String_o *v35; // x22
  struct UISprite_array *chargeTitleSpriteList; // x8
  int v37; // w12
  __int64 v38; // x24
  __int64 v39; // x9
  unsigned __int64 max_length; // x11
  SkillInfo_o *v41; // x21
  int64_t UserId; // x22
  int32_t SvtId; // w0
  struct SkillIconComponent_array *skillIconList; // x8
  char v45; // w26
  int v46; // w25
  __int64 v47; // x28
  unsigned __int64 v48; // x24
  struct UnityEngine_GameObject_o *reinforceObject; // x9
  __int64 v50; // x8
  ServantStatusListViewItemDrawSkill_c *v51; // x0
  UILabel_o *v52; // x21
  System_String_o *v53; // x22
  struct UnityEngine_GameObject_o *v54; // x8
  __int64 v55; // x8
  int v56; // w10
  float y; // w8
  int v58; // w21
  UserServantEntity_o *userSvtEntity; // x0
  int v60; // w23
  signed int v61; // w9
  unsigned int v62; // w10
  SkillInfo_o *v63; // x11
  float x; // s8
  float z; // s9
  float v66; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v68; // s8
  double v69; // d0
  double v70; // d0
  int v71; // w20
  float v72; // s8
  float v73; // s11
  float v74; // s9
  float v75; // s10
  struct SkillIconComponent_array *v76; // x8
  float v77; // s8
  float v78; // s9
  __int64 v79; // x25
  float v80; // s10
  unsigned int v81; // w9
  SkillInfo_o *v82; // x28
  float v83; // s0
  float v84; // s1
  float v85; // s2
  float v86; // s3
  struct SkillIconComponent_array *v87; // x8
  float v88; // s11
  float v89; // s12
  float v90; // s13
  float v91; // s14
  struct UISprite_array *v92; // x8
  struct UILabel_array *v93; // x8
  struct UILabel_array *v94; // x8
  UILabel_o *v95; // x21
  System_String_o *v96; // x1
  struct UILabel_array *chargeDataLabelList; // x8
  struct UILabel_array *skillNameLabelList; // x8
  struct UnityEngine_GameObject_o *v99; // x8
  struct ServantSkillStrengthStatus_array *skillStrengthStatus; // x8
  struct ServantSkillStrengthStatus_array *v101; // x8
  struct ServantSkillStrengthStatus_array *v102; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  UnityEngine_Object_o *v104; // x20
  struct UILabel_array *v105; // x8
  UnityEngine_Object_o *v106; // x20
  struct ServantSkillStrengthStatus_array *v107; // x8
  UnityEngine_Component_o *v108; // x8
  System_String_o *v109; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UILabel_array *v111; // x21
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x20
  Il2CppClass **v119; // x0
  struct UILabel_array *v120; // x8
  struct ServantSkillStrengthStatus_array *v121; // x9
  struct UILabel_array *v122; // x8
  UnityEngine_Object_o *gameObject; // x20
  struct UnityEngine_GameObject_o *v124; // x8
  __int64 v125; // x8
  int v126; // w20
  float v127; // w9
  int v128; // w21
  __int64 v129; // x8
  int v130; // w8
  __int64 v131; // x0
  __int64 v132; // x0
  int v133; // [xsp+0h] [xbp-A0h]
  SkillInfo_array *v134; // [xsp+8h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-88h] BYREF
  UnityEngine_Vector2Int_o v136; // 0:x6.8
  UnityEngine_Vector3_o v137; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v138; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v140; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v141; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42ECB7A & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&ServantSkillStrengthStatus_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&ServantStatusListViewItemDrawSkill_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_12131/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_12129/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_1/*""*/, v28, v29, v30);
    byte_42ECB7A = 1;
  }
  skillInfoList = 0LL;
  v134 = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( !item || !mode )
    return;
  svtEntity = (__int64)item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_182;
  skillBaseList = (UILabel_o *)this->fields.skillBaseList;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0LL) )
    v34 = (System_String_o **)&StringLiteral_12131/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  else
    v34 = (System_String_o **)&StringLiteral_12129/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/;
  v35 = *v34;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  svtEntity = (__int64)LocalizationManager__Get(v35, 0LL);
  if ( !skillBaseList )
    goto LABEL_182;
  UILabel__set_text(skillBaseList, (System_String_o *)svtEntity, 0LL);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0LL);
  if ( !skillInfoList )
    return;
  chargeTitleSpriteList = this->fields.chargeTitleSpriteList;
  if ( !chargeTitleSpriteList )
    goto LABEL_182;
  v37 = 0;
  v38 = 4LL;
  while ( 1 )
  {
    v39 = v38 - 4;
    if ( v38 - 4 >= (int)chargeTitleSpriteList->max_length )
      break;
    if ( skillInfoList )
    {
      max_length = skillInfoList->max_length;
      if ( v39 < (int)max_length )
      {
        if ( v39 >= max_length )
        {
LABEL_194:
          v131 = sub_B5D6C8(svtEntity);
          sub_B5D668(v131, 0LL);
        }
        v41 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + v38);
        if ( v41 )
        {
          if ( v41->fields.id >= 1 )
          {
            UserId = ServantStatusListViewItem__get_UserId(item, 0LL);
            SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
            SkillInfo__OverwriteNextSkill(v41, UserId, SvtId, 0LL);
            chargeTitleSpriteList = this->fields.chargeTitleSpriteList;
            v37 = v38 - 3;
          }
        }
      }
      ++v38;
      if ( chargeTitleSpriteList )
        continue;
    }
    goto LABEL_182;
  }
  skillIconList = this->fields.skillIconList;
  v133 = v37;
  if ( !skillIconList )
    goto LABEL_182;
  v45 = 0;
  v46 = 0;
  v47 = 4LL;
  while ( 1 )
  {
    v48 = v47 - 4;
    if ( v47 - 4 >= (int)skillIconList->max_length )
      break;
    if ( (__int64)v48 < v133 )
    {
      if ( !skillInfoList )
        goto LABEL_182;
      if ( v48 >= skillInfoList->max_length )
        goto LABEL_194;
      reinforceObject = this->fields.reinforceObject;
      if ( !reinforceObject )
        goto LABEL_182;
      if ( v48 >= LODWORD(reinforceObject[1].klass) )
        goto LABEL_194;
      v50 = *((_QWORD *)&skillInfoList->obj.klass + v47);
      if ( !v50 )
        goto LABEL_182;
      v51 = ServantStatusListViewItemDrawSkill_TypeInfo;
      v52 = (UILabel_o *)*((_QWORD *)&reinforceObject->klass + v47);
      v53 = *(System_String_o **)(v50 + 40);
      if ( (BYTE3(ServantStatusListViewItemDrawSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        v51 = ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      svtEntity = WrapControlText__textBBCodeAdjust(
                    v52,
                    v53,
                    v51->static_fields->DETAIL_FONT_SIZE,
                    v51->static_fields->DETAIL_FONT_SIZE,
                    v51->static_fields->MAX_HEIGHT,
                    0LL);
      v54 = this->fields.reinforceObject;
      if ( !v54 )
        goto LABEL_182;
      if ( v48 >= LODWORD(v54[1].klass) )
        goto LABEL_194;
      v55 = *((_QWORD *)&v54->klass + v47);
      if ( !v55 )
        goto LABEL_182;
      v56 = *(_DWORD *)(v55 + 164);
      y = this->fields.baseSize.fields.y;
      v58 = v56 + ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v58 >= SLODWORD(y) )
      {
        v46 += v58;
        svtEntity = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          svtEntity = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v48 == *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 32LL) - 1 )
          v45 |= v58 - LODWORD(this->fields.baseSize.fields.y) > 10;
      }
      else
      {
        v46 += LODWORD(y);
      }
    }
    skillIconList = this->fields.skillIconList;
    ++v47;
    if ( !skillIconList )
      goto LABEL_182;
  }
  if ( item->fields._IsDisplayCombineButton_k__BackingField && (userSvtEntity = item->fields.userSvtEntity) != 0LL )
  {
    v60 = v133;
    if ( !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
    {
      ServantStatusListViewItem__GetSkillInfo(item, &v134, 0LL);
      if ( !v134 )
        goto LABEL_182;
      v61 = v134->max_length;
      if ( v61 >= 1 )
      {
        v62 = 0;
        while ( 1 )
        {
          if ( v62 >= v61 )
            goto LABEL_194;
          v63 = v134->m_Items[v62];
          if ( !v63 )
            goto LABEL_182;
          if ( v63->fields.isUse && v63->fields.lv <= 9 )
            break;
          if ( (int)++v62 >= v61 )
            goto LABEL_62;
        }
        svtEntity = (__int64)this->fields.reinforceButton;
        if ( (v45 & 1) != 0 )
          v128 = 62;
        else
          v128 = 50;
        if ( !svtEntity )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        v129 = *(_QWORD *)&this->fields.skillPitch;
        if ( !v129 )
          goto LABEL_182;
        *(_BYTE *)(v129 + 89) = 1;
        svtEntity = *(_QWORD *)&this->fields.skillPitch;
        if ( !svtEntity )
          goto LABEL_182;
        v46 += v128;
        UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
        if ( v46 >= 0 )
          v130 = v46;
        else
          v130 = v46 + 1;
        GameObjectExtensions__SetLocalPositionY(
          (UnityEngine_GameObject_o *)this->fields.reinforceButton,
          (float)-(v130 >> 1),
          0LL);
      }
    }
  }
  else
  {
    v60 = v133;
  }
LABEL_62:
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v66 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v68 = x + (float)v46;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    svtEntity = (__int64)this->fields.baseSprite;
    if ( !svtEntity )
      goto LABEL_182;
    v137.fields.x = z;
    v137.fields.y = v68;
    v137.fields.z = v66;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)svtEntity, v137, 0LL);
  }
  svtEntity = (__int64)this->fields.titleSprite;
  if ( !svtEntity )
    goto LABEL_182;
  v69 = z;
  if ( z == INFINITY )
    v69 = -z;
  UIWidget__set_width((UIWidget_o *)svtEntity, (int)v69, 0LL);
  svtEntity = (__int64)this->fields.titleSprite;
  if ( !svtEntity )
    goto LABEL_182;
  v70 = v68;
  if ( v68 == INFINITY )
    v70 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)svtEntity, (int)v70, 0LL);
  svtEntity = (__int64)this->fields.explanationLabel;
  v71 = v46 >= 0 ? v46 : v46 + 1;
  if ( !svtEntity )
    goto LABEL_182;
  v72 = this->fields.titleBasePosition.fields.z;
  v73 = this->fields.skillBasePosition.fields.x;
  v74 = this->fields.skillBasePosition.fields.y;
  svtEntity = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)svtEntity, 0LL);
  if ( !svtEntity
    || (v75 = (float)(v71 >> 1),
        v138.fields.y = v73 + v75,
        v138.fields.x = v72,
        v138.fields.z = v74,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtEntity, v138, 0LL),
        (v76 = this->fields.skillIconList) == 0LL) )
  {
LABEL_182:
    sub_B5D69C(svtEntity, v31);
  }
  v77 = this->fields.skillBasePosition.fields.z;
  v78 = *((float *)&this[1].klass + 1);
  v79 = 0LL;
  v80 = *(float *)&this[1].klass + v75;
  while ( 1 )
  {
    v81 = v76->max_length;
    if ( (int)v79 >= (int)v81 )
      break;
    if ( (int)v79 >= v60 )
    {
      if ( (unsigned int)v79 >= v81 )
        goto LABEL_194;
      svtEntity = (__int64)v76->m_Items[v79];
      if ( !svtEntity )
        goto LABEL_182;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_182;
      if ( (unsigned int)v79 >= skillInfoList->max_length || (unsigned int)v79 >= v81 )
        goto LABEL_194;
      svtEntity = (__int64)v76->m_Items[(int)v79];
      if ( !svtEntity )
        goto LABEL_182;
      v82 = skillInfoList->m_Items[(int)v79];
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
      if ( !v82 )
        goto LABEL_182;
      *(UnityEngine_Color_o *)&v83 = (v82->fields.lv & 0x80000000) != 0
                                   ? UnityEngine_Color__get_gray(0LL)
                                   : UnityEngine_Color__get_white(0LL);
      v87 = this->fields.skillIconList;
      v88 = v83;
      v89 = v84;
      v90 = v85;
      v91 = v86;
      if ( !v87 )
        goto LABEL_182;
      if ( (unsigned int)v79 >= v87->max_length )
        goto LABEL_194;
      svtEntity = (__int64)v87->m_Items[(int)v79];
      if ( !svtEntity )
        goto LABEL_182;
      svtEntity = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)svtEntity, 0LL);
      if ( !svtEntity )
        goto LABEL_182;
      v139.fields.x = v77;
      v139.fields.y = v80;
      v139.fields.z = v78;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtEntity, v139, 0LL);
      v92 = this->fields.chargeTitleSpriteList;
      if ( !v92 )
        goto LABEL_182;
      if ( (unsigned int)v79 >= v92->max_length )
        goto LABEL_194;
      svtEntity = (__int64)v92->m_Items[(int)v79];
      if ( !svtEntity )
        goto LABEL_182;
      SkillIconComponent__Set_26822028((SkillIconComponent_o *)svtEntity, v82->fields.id, v82->fields.lv, 0LL);
      if ( (v82->fields.lv & 0x80000000) != 0 || (v82->fields.charge & 0x80000000) != 0 )
      {
        chargeDataLabelList = this->fields.chargeDataLabelList;
        if ( !chargeDataLabelList )
          goto LABEL_182;
        if ( (unsigned int)v79 >= chargeDataLabelList->max_length )
          goto LABEL_194;
        svtEntity = (__int64)chargeDataLabelList->m_Items[(int)v79];
        if ( !svtEntity )
          goto LABEL_182;
        svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
        skillNameLabelList = this->fields.skillNameLabelList;
        if ( !skillNameLabelList )
          goto LABEL_182;
        if ( (unsigned int)v79 >= skillNameLabelList->max_length )
          goto LABEL_194;
        svtEntity = (__int64)skillNameLabelList->m_Items[(int)v79];
        if ( !svtEntity )
          goto LABEL_182;
        v96 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        v93 = this->fields.chargeDataLabelList;
        if ( !v93 )
          goto LABEL_182;
        if ( (unsigned int)v79 >= v93->max_length )
          goto LABEL_194;
        svtEntity = (__int64)v93->m_Items[(int)v79];
        if ( !svtEntity )
          goto LABEL_182;
        svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        v94 = this->fields.skillNameLabelList;
        if ( !v94 )
          goto LABEL_182;
        if ( (unsigned int)v79 >= v94->max_length )
          goto LABEL_194;
        v95 = v94->m_Items[(int)v79];
        svtEntity = (__int64)System_Int32__ToString((int)v82 + 24, 0LL);
        if ( !v95 )
          goto LABEL_182;
        v96 = (System_String_o *)svtEntity;
        svtEntity = (__int64)v95;
      }
      UILabel__set_text((UILabel_o *)svtEntity, v96, 0LL);
      v99 = this->fields.reinforceObject;
      if ( !v99 )
        goto LABEL_182;
      if ( (unsigned int)v79 >= LODWORD(v99[1].klass) )
        goto LABEL_194;
      svtEntity = *((_QWORD *)&v99[1].monitor + (int)v79);
      if ( !svtEntity )
        goto LABEL_182;
      v140.fields.r = v88;
      v140.fields.g = v89;
      v140.fields.b = v90;
      v140.fields.a = v91;
      UIWidget__set_color((UIWidget_o *)svtEntity, v140, 0LL);
      skillStrengthStatus = this->fields.skillStrengthStatus;
      if ( !skillStrengthStatus )
        goto LABEL_182;
      if ( (unsigned int)v79 >= skillStrengthStatus->max_length )
        goto LABEL_194;
      svtEntity = (__int64)skillStrengthStatus->m_Items[(int)v79];
      if ( !svtEntity )
        goto LABEL_182;
      UILabel__set_text((UILabel_o *)svtEntity, v82->fields.title, 0LL);
      v101 = this->fields.skillStrengthStatus;
      if ( !v101 )
        goto LABEL_182;
      if ( (unsigned int)v79 >= v101->max_length )
        goto LABEL_194;
      svtEntity = (__int64)v101->m_Items[(int)v79];
      if ( !svtEntity )
        goto LABEL_182;
      v141.fields.r = v88;
      v141.fields.g = v89;
      v141.fields.b = v90;
      v141.fields.a = v91;
      UIWidget__set_color((UIWidget_o *)svtEntity, v141, 0LL);
      v102 = this->fields.skillStrengthStatus;
      if ( !v102 )
        goto LABEL_182;
      if ( (unsigned int)v79 >= v102->max_length )
        goto LABEL_194;
      svtEntity = (__int64)v102->m_Items[(int)v79];
      if ( !svtEntity )
        goto LABEL_182;
      UILabel__SetCondensedScale((UILabel_o *)svtEntity, 340, 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_182;
      if ( (unsigned int)v79 >= skillExplanationLabelList->max_length )
        goto LABEL_194;
      v104 = (UnityEngine_Object_o *)skillExplanationLabelList->m_Items[(int)v79];
      if ( (v82->fields.lv & 0x80000000) != 0 )
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        svtEntity = UnityEngine_Object__op_Inequality(v104, 0LL, 0LL);
        if ( (svtEntity & 1) != 0 )
        {
          v122 = this->fields.skillExplanationLabelList;
          if ( !v122 )
            goto LABEL_182;
          if ( (unsigned int)v79 >= v122->max_length )
            goto LABEL_194;
          svtEntity = (__int64)v122->m_Items[(int)v79];
          if ( !svtEntity )
            goto LABEL_182;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)svtEntity,
                                                 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
        }
      }
      else
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        svtEntity = UnityEngine_Object__op_Inequality(v104, 0LL, 0LL);
        if ( (svtEntity & 1) != 0 )
        {
          v105 = this->fields.skillExplanationLabelList;
          if ( !v105 )
            goto LABEL_182;
          if ( (unsigned int)v79 >= v105->max_length )
            goto LABEL_194;
          svtEntity = (__int64)v105->m_Items[(int)v79];
          if ( !svtEntity )
            goto LABEL_182;
          v106 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)svtEntity,
                                           0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35620236(v106, 0LL);
        }
        svtEntity = (__int64)ServantSkillStrengthStatus_TypeInfo;
        if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
          svtEntity = (__int64)ServantSkillStrengthStatus_TypeInfo;
        }
        v107 = this->fields.skillStrengthStatus;
        if ( !v107 )
          goto LABEL_182;
        if ( (unsigned int)v79 >= v107->max_length )
          goto LABEL_194;
        v108 = (UnityEngine_Component_o *)v107->m_Items[(int)v79];
        if ( !v108 )
          goto LABEL_182;
        v109 = **(System_String_o ***)(svtEntity + 184);
        transform = UnityEngine_Component__get_transform(v108, 0LL);
        svtEntity = (__int64)BaseMonoBehaviour__CreateObjectStatic(v109, transform, 0LL, 0LL);
        if ( !svtEntity )
          goto LABEL_182;
        v111 = this->fields.skillExplanationLabelList;
        svtEntity = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)svtEntity,
                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        if ( !v111 )
          goto LABEL_182;
        v118 = (System_Int32_array **)svtEntity;
        if ( svtEntity )
        {
          svtEntity = sub_B5D684(svtEntity, v111->obj.klass->_1.element_class);
          if ( !svtEntity )
          {
            v132 = sub_B5D6BC(0LL);
            sub_B5D668(v132, 0LL);
          }
        }
        if ( (unsigned int)v79 >= v111->max_length )
          goto LABEL_194;
        v119 = &v111->obj.klass + (int)v79;
        v119[4] = (Il2CppClass *)v118;
        sub_B5D560((BattleServantConfConponent_o *)(v119 + 4), v118, v112, v113, v114, v115, v116, v117);
        v120 = this->fields.skillExplanationLabelList;
        if ( !v120 )
          goto LABEL_182;
        if ( (unsigned int)v79 >= v120->max_length )
          goto LABEL_194;
        v121 = this->fields.skillStrengthStatus;
        if ( !v121 )
          goto LABEL_182;
        if ( (unsigned int)v79 >= v121->max_length )
          goto LABEL_194;
        svtEntity = (__int64)v120->m_Items[(int)v79];
        if ( !svtEntity )
          goto LABEL_182;
        v136 = (UnityEngine_Vector2Int_o)0x1600000018LL;
        ServantSkillStrengthStatus__Set(
          (ServantSkillStrengthStatus_o *)svtEntity,
          (UILabel_o *)v121->m_Items[(int)v79],
          v82->fields.strengthStatus,
          v82->fields.skillRecord,
          24,
          1,
          v136,
          0LL);
      }
    }
    v124 = this->fields.reinforceObject;
    if ( !v124 )
      goto LABEL_182;
    if ( (unsigned int)v79 >= LODWORD(v124[1].klass) )
      goto LABEL_194;
    v125 = *((_QWORD *)&v124[1].monitor + (int)v79);
    if ( v125 )
    {
      svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      v126 = *(_DWORD *)(v125 + 164);
      if ( (BYTE3(ServantStatusListViewItemDrawSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      ++v79;
      v76 = this->fields.skillIconList;
      LODWORD(v127) = *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 8LL) + v126;
      if ( SLODWORD(v127) < SLODWORD(this->fields.baseSize.fields.y) )
        v127 = this->fields.baseSize.fields.y;
      v80 = v80 - (float)SLODWORD(v127);
      if ( v76 )
        continue;
    }
    goto LABEL_182;
  }
}