void __fastcall ServantStatusListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42186D0 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItemDrawSkill_TypeInfo, v1);
    byte_42186D0 = 1;
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
  struct UnityEngine_GameObject_o *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7

  if ( (byte_42186CF & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, v3);
    sub_B0D8A4(&ServantSkillStrengthStatus___TypeInfo, v4);
    sub_B0D8A4(&SkillIconComponent___TypeInfo, v5);
    sub_B0D8A4(&UILabel___TypeInfo, v6);
    sub_B0D8A4(&UISprite___TypeInfo, v7);
    byte_42186CF = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct SkillIconComponent_array *)sub_B0D8BC(
                                            UnityEngine_GameObject___TypeInfo,
                                            (unsigned int)v8->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (struct UISprite_array *)sub_B0D8BC(
                                   SkillIconComponent___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.chargeTitleSpriteList = v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.chargeTitleSpriteList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (struct UILabel_array *)sub_B0D8BC(
                                  UISprite___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.chargeDataLabelList = v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.chargeDataLabelList,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (struct UILabel_array *)sub_B0D8BC(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillNameLabelList = v30;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillNameLabelList,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (struct ServantSkillStrengthStatus_array *)sub_B0D8BC(
                                                     UILabel___TypeInfo,
                                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillStrengthStatus = v37;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (struct UILabel_array *)sub_B0D8BC(
                                  ServantSkillStrengthStatus___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v44;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillExplanationLabelList,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = (struct UnityEngine_GameObject_o *)sub_B0D8BC(
                                             UILabel___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.reinforceObject = v51;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.reinforceObject,
    (System_Int32_array **)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
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
    sub_B0D97C(this);
  if ( !v15->max_length )
  {
LABEL_25:
    v18 = sub_B0D9A8(this);
    sub_B0D948(v18, 0LL);
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
  int v20; // w12
  __int64 v21; // x24
  __int64 v22; // x9
  unsigned __int64 max_length; // x11
  SkillInfo_o *v24; // x21
  int64_t UserId; // x22
  int32_t SvtId; // w0
  struct SkillIconComponent_array *skillIconList; // x8
  char v28; // w26
  int v29; // w25
  __int64 v30; // x28
  unsigned __int64 v31; // x24
  struct UnityEngine_GameObject_o *reinforceObject; // x9
  __int64 v33; // x8
  ServantStatusListViewItemDrawSkill_c *v34; // x0
  UILabel_o *v35; // x21
  System_String_o *v36; // x22
  struct UnityEngine_GameObject_o *v37; // x8
  __int64 v38; // x8
  int v39; // w10
  float y; // w8
  int v41; // w21
  UserServantEntity_o *userSvtEntity; // x0
  int v43; // w23
  signed int v44; // w9
  unsigned int v45; // w10
  SkillInfo_o *v46; // x11
  float x; // s8
  float z; // s9
  float v49; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v51; // s8
  double v52; // d0
  double v53; // d0
  int v54; // w20
  float v55; // s8
  float v56; // s11
  float v57; // s9
  float v58; // s10
  struct SkillIconComponent_array *v59; // x8
  float v60; // s8
  float v61; // s9
  __int64 v62; // x25
  float v63; // s10
  unsigned int v64; // w9
  SkillInfo_o *v65; // x28
  float v66; // s0
  float v67; // s1
  float v68; // s2
  float v69; // s3
  struct SkillIconComponent_array *v70; // x8
  float v71; // s11
  float v72; // s12
  float v73; // s13
  float v74; // s14
  struct UISprite_array *v75; // x8
  struct UILabel_array *v76; // x8
  struct UILabel_array *v77; // x8
  UILabel_o *v78; // x21
  System_String_o *v79; // x1
  struct UILabel_array *chargeDataLabelList; // x8
  struct UILabel_array *skillNameLabelList; // x8
  struct UnityEngine_GameObject_o *v82; // x8
  struct ServantSkillStrengthStatus_array *skillStrengthStatus; // x8
  struct ServantSkillStrengthStatus_array *v84; // x8
  struct ServantSkillStrengthStatus_array *v85; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  UnityEngine_Object_o *v87; // x20
  struct UILabel_array *v88; // x8
  UnityEngine_Object_o *v89; // x20
  struct ServantSkillStrengthStatus_array *v90; // x8
  UnityEngine_Component_o *v91; // x8
  System_String_o *v92; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UILabel_array *v94; // x21
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x20
  Il2CppClass **v102; // x0
  struct UILabel_array *v103; // x8
  struct ServantSkillStrengthStatus_array *v104; // x9
  struct UILabel_array *v105; // x8
  UnityEngine_Object_o *gameObject; // x20
  struct UnityEngine_GameObject_o *v107; // x8
  __int64 v108; // x8
  int v109; // w20
  float v110; // w9
  int v111; // w21
  __int64 v112; // x8
  int v113; // w8
  __int64 v114; // x0
  __int64 v115; // x0
  int v116; // [xsp+0h] [xbp-A0h]
  SkillInfo_array *v117; // [xsp+8h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-88h] BYREF
  UnityEngine_Vector2Int_o v119; // 0:x6.8
  UnityEngine_Vector3_o v120; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v123; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v124; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42186CE & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, item);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&ServantSkillStrengthStatus_TypeInfo, v10);
    sub_B0D8A4(&ServantStatusListViewItemDrawSkill_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_12019/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v12);
    sub_B0D8A4(&StringLiteral_12017/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    byte_42186CE = 1;
  }
  skillInfoList = 0LL;
  v117 = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( !item || !mode )
    return;
  svtEntity = (__int64)item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_182;
  skillBaseList = (UILabel_o *)this->fields.skillBaseList;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0LL) )
    v17 = (System_String_o **)&StringLiteral_12019/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  else
    v17 = (System_String_o **)&StringLiteral_12017/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/;
  v18 = *v17;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  svtEntity = (__int64)LocalizationManager__Get(v18, 0LL);
  if ( !skillBaseList )
    goto LABEL_182;
  UILabel__set_text(skillBaseList, (System_String_o *)svtEntity, 0LL);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0LL);
  if ( !skillInfoList )
    return;
  chargeTitleSpriteList = this->fields.chargeTitleSpriteList;
  if ( !chargeTitleSpriteList )
    goto LABEL_182;
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
LABEL_194:
          v114 = sub_B0D9A8(svtEntity);
          sub_B0D948(v114, 0LL);
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
    goto LABEL_182;
  }
  skillIconList = this->fields.skillIconList;
  v116 = v20;
  if ( !skillIconList )
    goto LABEL_182;
  v28 = 0;
  v29 = 0;
  v30 = 4LL;
  while ( 1 )
  {
    v31 = v30 - 4;
    if ( v30 - 4 >= (int)skillIconList->max_length )
      break;
    if ( (__int64)v31 < v116 )
    {
      if ( !skillInfoList )
        goto LABEL_182;
      if ( v31 >= skillInfoList->max_length )
        goto LABEL_194;
      reinforceObject = this->fields.reinforceObject;
      if ( !reinforceObject )
        goto LABEL_182;
      if ( v31 >= LODWORD(reinforceObject[1].klass) )
        goto LABEL_194;
      v33 = *((_QWORD *)&skillInfoList->obj.klass + v30);
      if ( !v33 )
        goto LABEL_182;
      v34 = ServantStatusListViewItemDrawSkill_TypeInfo;
      v35 = (UILabel_o *)*((_QWORD *)&reinforceObject->klass + v30);
      v36 = *(System_String_o **)(v33 + 40);
      if ( (BYTE3(ServantStatusListViewItemDrawSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        v34 = ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      svtEntity = WrapControlText__textBBCodeAdjust(
                    v35,
                    v36,
                    v34->static_fields->DETAIL_FONT_SIZE,
                    v34->static_fields->DETAIL_FONT_SIZE,
                    v34->static_fields->MAX_HEIGHT,
                    0LL);
      v37 = this->fields.reinforceObject;
      if ( !v37 )
        goto LABEL_182;
      if ( v31 >= LODWORD(v37[1].klass) )
        goto LABEL_194;
      v38 = *((_QWORD *)&v37->klass + v30);
      if ( !v38 )
        goto LABEL_182;
      v39 = *(_DWORD *)(v38 + 164);
      y = this->fields.baseSize.fields.y;
      v41 = v39 + ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v41 >= SLODWORD(y) )
      {
        v29 += v41;
        svtEntity = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          svtEntity = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v31 == *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 32LL) - 1 )
          v28 |= v41 - LODWORD(this->fields.baseSize.fields.y) > 10;
      }
      else
      {
        v29 += LODWORD(y);
      }
    }
    skillIconList = this->fields.skillIconList;
    ++v30;
    if ( !skillIconList )
      goto LABEL_182;
  }
  if ( item->fields._IsDisplayCombineButton_k__BackingField && (userSvtEntity = item->fields.userSvtEntity) != 0LL )
  {
    v43 = v116;
    if ( !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
    {
      ServantStatusListViewItem__GetSkillInfo(item, &v117, 0LL);
      if ( !v117 )
        goto LABEL_182;
      v44 = v117->max_length;
      if ( v44 >= 1 )
      {
        v45 = 0;
        while ( 1 )
        {
          if ( v45 >= v44 )
            goto LABEL_194;
          v46 = v117->m_Items[v45];
          if ( !v46 )
            goto LABEL_182;
          if ( v46->fields.isUse && v46->fields.lv <= 9 )
            break;
          if ( (int)++v45 >= v44 )
            goto LABEL_62;
        }
        svtEntity = (__int64)this->fields.reinforceButton;
        if ( (v28 & 1) != 0 )
          v111 = 62;
        else
          v111 = 50;
        if ( !svtEntity )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        v112 = *(_QWORD *)&this->fields.skillPitch;
        if ( !v112 )
          goto LABEL_182;
        *(_BYTE *)(v112 + 89) = 1;
        svtEntity = *(_QWORD *)&this->fields.skillPitch;
        if ( !svtEntity )
          goto LABEL_182;
        v29 += v111;
        UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
        if ( v29 >= 0 )
          v113 = v29;
        else
          v113 = v29 + 1;
        GameObjectExtensions__SetLocalPositionY(
          (UnityEngine_GameObject_o *)this->fields.reinforceButton,
          (float)-(v113 >> 1),
          0LL);
      }
    }
  }
  else
  {
    v43 = v116;
  }
LABEL_62:
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v49 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v51 = x + (float)v29;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    svtEntity = (__int64)this->fields.baseSprite;
    if ( !svtEntity )
      goto LABEL_182;
    v120.fields.x = z;
    v120.fields.y = v51;
    v120.fields.z = v49;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)svtEntity, v120, 0LL);
  }
  svtEntity = (__int64)this->fields.titleSprite;
  if ( !svtEntity )
    goto LABEL_182;
  v52 = z;
  if ( z == INFINITY )
    v52 = -z;
  UIWidget__set_width((UIWidget_o *)svtEntity, (int)v52, 0LL);
  svtEntity = (__int64)this->fields.titleSprite;
  if ( !svtEntity )
    goto LABEL_182;
  v53 = v51;
  if ( v51 == INFINITY )
    v53 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)svtEntity, (int)v53, 0LL);
  svtEntity = (__int64)this->fields.explanationLabel;
  v54 = v29 >= 0 ? v29 : v29 + 1;
  if ( !svtEntity )
    goto LABEL_182;
  v55 = this->fields.titleBasePosition.fields.z;
  v56 = this->fields.skillBasePosition.fields.x;
  v57 = this->fields.skillBasePosition.fields.y;
  svtEntity = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)svtEntity, 0LL);
  if ( !svtEntity
    || (v58 = (float)(v54 >> 1),
        v121.fields.y = v56 + v58,
        v121.fields.x = v55,
        v121.fields.z = v57,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtEntity, v121, 0LL),
        (v59 = this->fields.skillIconList) == 0LL) )
  {
LABEL_182:
    sub_B0D97C(svtEntity);
  }
  v60 = this->fields.skillBasePosition.fields.z;
  v61 = *((float *)&this[1].klass + 1);
  v62 = 0LL;
  v63 = *(float *)&this[1].klass + v58;
  while ( 1 )
  {
    v64 = v59->max_length;
    if ( (int)v62 >= (int)v64 )
      break;
    if ( (int)v62 >= v43 )
    {
      if ( (unsigned int)v62 >= v64 )
        goto LABEL_194;
      svtEntity = (__int64)v59->m_Items[v62];
      if ( !svtEntity )
        goto LABEL_182;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_182;
      if ( (unsigned int)v62 >= skillInfoList->max_length || (unsigned int)v62 >= v64 )
        goto LABEL_194;
      svtEntity = (__int64)v59->m_Items[(int)v62];
      if ( !svtEntity )
        goto LABEL_182;
      v65 = skillInfoList->m_Items[(int)v62];
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
      if ( !v65 )
        goto LABEL_182;
      *(UnityEngine_Color_o *)&v66 = (v65->fields.lv & 0x80000000) != 0
                                   ? UnityEngine_Color__get_gray(0LL)
                                   : UnityEngine_Color__get_white(0LL);
      v70 = this->fields.skillIconList;
      v71 = v66;
      v72 = v67;
      v73 = v68;
      v74 = v69;
      if ( !v70 )
        goto LABEL_182;
      if ( (unsigned int)v62 >= v70->max_length )
        goto LABEL_194;
      svtEntity = (__int64)v70->m_Items[(int)v62];
      if ( !svtEntity )
        goto LABEL_182;
      svtEntity = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)svtEntity, 0LL);
      if ( !svtEntity )
        goto LABEL_182;
      v122.fields.x = v60;
      v122.fields.y = v63;
      v122.fields.z = v61;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtEntity, v122, 0LL);
      v75 = this->fields.chargeTitleSpriteList;
      if ( !v75 )
        goto LABEL_182;
      if ( (unsigned int)v62 >= v75->max_length )
        goto LABEL_194;
      svtEntity = (__int64)v75->m_Items[(int)v62];
      if ( !svtEntity )
        goto LABEL_182;
      SkillIconComponent__Set_26129364((SkillIconComponent_o *)svtEntity, v65->fields.id, v65->fields.lv, 0LL);
      if ( (v65->fields.lv & 0x80000000) != 0 || (v65->fields.charge & 0x80000000) != 0 )
      {
        chargeDataLabelList = this->fields.chargeDataLabelList;
        if ( !chargeDataLabelList )
          goto LABEL_182;
        if ( (unsigned int)v62 >= chargeDataLabelList->max_length )
          goto LABEL_194;
        svtEntity = (__int64)chargeDataLabelList->m_Items[(int)v62];
        if ( !svtEntity )
          goto LABEL_182;
        svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
        skillNameLabelList = this->fields.skillNameLabelList;
        if ( !skillNameLabelList )
          goto LABEL_182;
        if ( (unsigned int)v62 >= skillNameLabelList->max_length )
          goto LABEL_194;
        svtEntity = (__int64)skillNameLabelList->m_Items[(int)v62];
        if ( !svtEntity )
          goto LABEL_182;
        v79 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        v76 = this->fields.chargeDataLabelList;
        if ( !v76 )
          goto LABEL_182;
        if ( (unsigned int)v62 >= v76->max_length )
          goto LABEL_194;
        svtEntity = (__int64)v76->m_Items[(int)v62];
        if ( !svtEntity )
          goto LABEL_182;
        svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        v77 = this->fields.skillNameLabelList;
        if ( !v77 )
          goto LABEL_182;
        if ( (unsigned int)v62 >= v77->max_length )
          goto LABEL_194;
        v78 = v77->m_Items[(int)v62];
        svtEntity = (__int64)System_Int32__ToString((int)v65 + 24, 0LL);
        if ( !v78 )
          goto LABEL_182;
        v79 = (System_String_o *)svtEntity;
        svtEntity = (__int64)v78;
      }
      UILabel__set_text((UILabel_o *)svtEntity, v79, 0LL);
      v82 = this->fields.reinforceObject;
      if ( !v82 )
        goto LABEL_182;
      if ( (unsigned int)v62 >= LODWORD(v82[1].klass) )
        goto LABEL_194;
      svtEntity = *((_QWORD *)&v82[1].monitor + (int)v62);
      if ( !svtEntity )
        goto LABEL_182;
      v123.fields.r = v71;
      v123.fields.g = v72;
      v123.fields.b = v73;
      v123.fields.a = v74;
      UIWidget__set_color((UIWidget_o *)svtEntity, v123, 0LL);
      skillStrengthStatus = this->fields.skillStrengthStatus;
      if ( !skillStrengthStatus )
        goto LABEL_182;
      if ( (unsigned int)v62 >= skillStrengthStatus->max_length )
        goto LABEL_194;
      svtEntity = (__int64)skillStrengthStatus->m_Items[(int)v62];
      if ( !svtEntity )
        goto LABEL_182;
      UILabel__set_text((UILabel_o *)svtEntity, v65->fields.title, 0LL);
      v84 = this->fields.skillStrengthStatus;
      if ( !v84 )
        goto LABEL_182;
      if ( (unsigned int)v62 >= v84->max_length )
        goto LABEL_194;
      svtEntity = (__int64)v84->m_Items[(int)v62];
      if ( !svtEntity )
        goto LABEL_182;
      v124.fields.r = v71;
      v124.fields.g = v72;
      v124.fields.b = v73;
      v124.fields.a = v74;
      UIWidget__set_color((UIWidget_o *)svtEntity, v124, 0LL);
      v85 = this->fields.skillStrengthStatus;
      if ( !v85 )
        goto LABEL_182;
      if ( (unsigned int)v62 >= v85->max_length )
        goto LABEL_194;
      svtEntity = (__int64)v85->m_Items[(int)v62];
      if ( !svtEntity )
        goto LABEL_182;
      UILabel__SetCondensedScale((UILabel_o *)svtEntity, 340, 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_182;
      if ( (unsigned int)v62 >= skillExplanationLabelList->max_length )
        goto LABEL_194;
      v87 = (UnityEngine_Object_o *)skillExplanationLabelList->m_Items[(int)v62];
      if ( (v65->fields.lv & 0x80000000) != 0 )
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        svtEntity = UnityEngine_Object__op_Inequality(v87, 0LL, 0LL);
        if ( (svtEntity & 1) != 0 )
        {
          v105 = this->fields.skillExplanationLabelList;
          if ( !v105 )
            goto LABEL_182;
          if ( (unsigned int)v62 >= v105->max_length )
            goto LABEL_194;
          svtEntity = (__int64)v105->m_Items[(int)v62];
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
          UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
        }
      }
      else
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        svtEntity = UnityEngine_Object__op_Inequality(v87, 0LL, 0LL);
        if ( (svtEntity & 1) != 0 )
        {
          v88 = this->fields.skillExplanationLabelList;
          if ( !v88 )
            goto LABEL_182;
          if ( (unsigned int)v62 >= v88->max_length )
            goto LABEL_194;
          svtEntity = (__int64)v88->m_Items[(int)v62];
          if ( !svtEntity )
            goto LABEL_182;
          v89 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_34935276(v89, 0LL);
        }
        svtEntity = (__int64)ServantSkillStrengthStatus_TypeInfo;
        if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
          svtEntity = (__int64)ServantSkillStrengthStatus_TypeInfo;
        }
        v90 = this->fields.skillStrengthStatus;
        if ( !v90 )
          goto LABEL_182;
        if ( (unsigned int)v62 >= v90->max_length )
          goto LABEL_194;
        v91 = (UnityEngine_Component_o *)v90->m_Items[(int)v62];
        if ( !v91 )
          goto LABEL_182;
        v92 = **(System_String_o ***)(svtEntity + 184);
        transform = UnityEngine_Component__get_transform(v91, 0LL);
        svtEntity = (__int64)BaseMonoBehaviour__CreateObjectStatic(v92, transform, 0LL, 0LL);
        if ( !svtEntity )
          goto LABEL_182;
        v94 = this->fields.skillExplanationLabelList;
        svtEntity = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)svtEntity,
                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        if ( !v94 )
          goto LABEL_182;
        v101 = (System_Int32_array **)svtEntity;
        if ( svtEntity )
        {
          svtEntity = sub_B0D964(svtEntity, v94->obj.klass->_1.element_class);
          if ( !svtEntity )
          {
            v115 = sub_B0D99C(0LL);
            sub_B0D948(v115, 0LL);
          }
        }
        if ( (unsigned int)v62 >= v94->max_length )
          goto LABEL_194;
        v102 = &v94->obj.klass + (int)v62;
        v102[4] = (Il2CppClass *)v101;
        sub_B0D840((BattleServantConfConponent_o *)(v102 + 4), v101, v95, v96, v97, v98, v99, v100);
        v103 = this->fields.skillExplanationLabelList;
        if ( !v103 )
          goto LABEL_182;
        if ( (unsigned int)v62 >= v103->max_length )
          goto LABEL_194;
        v104 = this->fields.skillStrengthStatus;
        if ( !v104 )
          goto LABEL_182;
        if ( (unsigned int)v62 >= v104->max_length )
          goto LABEL_194;
        svtEntity = (__int64)v103->m_Items[(int)v62];
        if ( !svtEntity )
          goto LABEL_182;
        v119 = (UnityEngine_Vector2Int_o)0x1600000018LL;
        ServantSkillStrengthStatus__Set(
          (ServantSkillStrengthStatus_o *)svtEntity,
          (UILabel_o *)v104->m_Items[(int)v62],
          v65->fields.strengthStatus,
          v65->fields.skillRecord,
          24,
          1,
          v119,
          0LL);
      }
    }
    v107 = this->fields.reinforceObject;
    if ( !v107 )
      goto LABEL_182;
    if ( (unsigned int)v62 >= LODWORD(v107[1].klass) )
      goto LABEL_194;
    v108 = *((_QWORD *)&v107[1].monitor + (int)v62);
    if ( v108 )
    {
      svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      v109 = *(_DWORD *)(v108 + 164);
      if ( (BYTE3(ServantStatusListViewItemDrawSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      ++v62;
      v59 = this->fields.skillIconList;
      LODWORD(v110) = *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 8LL) + v109;
      if ( SLODWORD(v110) < SLODWORD(this->fields.baseSize.fields.y) )
        v110 = this->fields.baseSize.fields.y;
      v63 = v63 - (float)SLODWORD(v110);
      if ( v59 )
        continue;
    }
    goto LABEL_182;
  }
}