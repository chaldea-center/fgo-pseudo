void __fastcall ServantStatusListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  if ( (byte_42B4278 & 1) == 0 )
  {
    sub_B52984(&ServantStatusListViewItemDrawSkill_TypeInfo);
    byte_42B4278 = 1;
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

  if ( (byte_42B4277 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&UnityEngine_GameObject___TypeInfo);
    sub_B52984(&ServantSkillStrengthStatus___TypeInfo);
    sub_B52984(&SkillIconComponent___TypeInfo);
    sub_B52984(&UILabel___TypeInfo);
    sub_B52984(&UISprite___TypeInfo);
    byte_42B4277 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct SkillIconComponent_array *)sub_B5299C(
                                            UnityEngine_GameObject___TypeInfo,
                                            (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct UISprite_array *)sub_B5299C(
                                   SkillIconComponent___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.chargeTitleSpriteList = v11;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.chargeTitleSpriteList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (struct UILabel_array *)sub_B5299C(
                                  UISprite___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.chargeDataLabelList = v18;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.chargeDataLabelList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UILabel_array *)sub_B5299C(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillNameLabelList = v25;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillNameLabelList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (struct ServantSkillStrengthStatus_array *)sub_B5299C(
                                                     UILabel___TypeInfo,
                                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillStrengthStatus = v32;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (struct UILabel_array *)sub_B5299C(
                                  ServantSkillStrengthStatus___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v39;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillExplanationLabelList,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (struct UnityEngine_GameObject_o *)sub_B5299C(
                                             UILabel___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.reinforceObject = v46;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.reinforceObject,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
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
    sub_B52A5C(this, method);
  if ( !v15->max_length )
  {
LABEL_25:
    v18 = sub_B52A88(this);
    sub_B52A28(v18, 0LL);
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
  __int64 svtEntity; // x0
  UILabel_o *skillBaseList; // x21
  System_String_o **v10; // x8
  System_String_o *v11; // x22
  struct UISprite_array *chargeTitleSpriteList; // x8
  int v13; // w12
  __int64 v14; // x24
  __int64 v15; // x9
  unsigned __int64 max_length; // x11
  SkillInfo_o *v17; // x21
  int64_t UserId; // x22
  int32_t SvtId; // w0
  struct SkillIconComponent_array *skillIconList; // x8
  char v21; // w26
  int v22; // w25
  __int64 v23; // x28
  unsigned __int64 v24; // x24
  struct UnityEngine_GameObject_o *reinforceObject; // x9
  __int64 v26; // x8
  ServantStatusListViewItemDrawSkill_c *v27; // x0
  UILabel_o *v28; // x21
  System_String_o *v29; // x22
  struct UnityEngine_GameObject_o *v30; // x8
  __int64 v31; // x8
  int v32; // w10
  float y; // w8
  int v34; // w21
  UserServantEntity_o *userSvtEntity; // x0
  int v36; // w23
  signed int v37; // w9
  unsigned int v38; // w10
  SkillInfo_o *v39; // x11
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
  __int64 v55; // x25
  float v56; // s10
  unsigned int v57; // w9
  SkillInfo_o *v58; // x28
  float v59; // s0
  float v60; // s1
  float v61; // s2
  float v62; // s3
  struct SkillIconComponent_array *v63; // x8
  float v64; // s11
  float v65; // s12
  float v66; // s13
  float v67; // s14
  struct UISprite_array *v68; // x8
  struct UILabel_array *v69; // x8
  struct UILabel_array *v70; // x8
  UILabel_o *v71; // x21
  System_String_o *v72; // x1
  struct UILabel_array *chargeDataLabelList; // x8
  struct UILabel_array *skillNameLabelList; // x8
  struct UnityEngine_GameObject_o *v75; // x8
  struct ServantSkillStrengthStatus_array *skillStrengthStatus; // x8
  struct ServantSkillStrengthStatus_array *v77; // x8
  struct ServantSkillStrengthStatus_array *v78; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  UnityEngine_Object_o *v80; // x20
  struct UILabel_array *v81; // x8
  UnityEngine_Object_o *v82; // x20
  struct ServantSkillStrengthStatus_array *v83; // x8
  UnityEngine_Component_o *v84; // x8
  System_String_o *v85; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UILabel_array *v87; // x21
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x20
  Il2CppClass **v95; // x0
  struct UILabel_array *v96; // x8
  struct ServantSkillStrengthStatus_array *v97; // x9
  struct UILabel_array *v98; // x8
  UnityEngine_Object_o *gameObject; // x20
  struct UnityEngine_GameObject_o *v100; // x8
  __int64 v101; // x8
  int v102; // w20
  float v103; // w9
  int v104; // w21
  __int64 v105; // x8
  int v106; // w8
  __int64 v107; // x0
  __int64 v108; // x0
  int v109; // [xsp+0h] [xbp-A0h]
  SkillInfo_array *v110; // [xsp+8h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-88h] BYREF
  UnityEngine_Vector2Int_o v112; // 0:x6.8
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B4276 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantSkillStrengthStatus_TypeInfo);
    sub_B52984(&ServantStatusListViewItemDrawSkill_TypeInfo);
    sub_B52984(&StringLiteral_12074/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    sub_B52984(&StringLiteral_12072/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B4276 = 1;
  }
  skillInfoList = 0LL;
  v110 = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( !item || !mode )
    return;
  svtEntity = (__int64)item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_182;
  skillBaseList = (UILabel_o *)this->fields.skillBaseList;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0LL) )
    v10 = (System_String_o **)&StringLiteral_12074/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  else
    v10 = (System_String_o **)&StringLiteral_12072/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/;
  v11 = *v10;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  svtEntity = (__int64)LocalizationManager__Get(v11, 0LL);
  if ( !skillBaseList )
    goto LABEL_182;
  UILabel__set_text(skillBaseList, (System_String_o *)svtEntity, 0LL);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0LL);
  if ( !skillInfoList )
    return;
  chargeTitleSpriteList = this->fields.chargeTitleSpriteList;
  if ( !chargeTitleSpriteList )
    goto LABEL_182;
  v13 = 0;
  v14 = 4LL;
  while ( 1 )
  {
    v15 = v14 - 4;
    if ( v14 - 4 >= (int)chargeTitleSpriteList->max_length )
      break;
    if ( skillInfoList )
    {
      max_length = skillInfoList->max_length;
      if ( v15 < (int)max_length )
      {
        if ( v15 >= max_length )
        {
LABEL_194:
          v107 = sub_B52A88(svtEntity);
          sub_B52A28(v107, 0LL);
        }
        v17 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + v14);
        if ( v17 )
        {
          if ( v17->fields.id >= 1 )
          {
            UserId = ServantStatusListViewItem__get_UserId(item, 0LL);
            SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
            SkillInfo__OverwriteNextSkill(v17, UserId, SvtId, 0LL);
            chargeTitleSpriteList = this->fields.chargeTitleSpriteList;
            v13 = v14 - 3;
          }
        }
      }
      ++v14;
      if ( chargeTitleSpriteList )
        continue;
    }
    goto LABEL_182;
  }
  skillIconList = this->fields.skillIconList;
  v109 = v13;
  if ( !skillIconList )
    goto LABEL_182;
  v21 = 0;
  v22 = 0;
  v23 = 4LL;
  while ( 1 )
  {
    v24 = v23 - 4;
    if ( v23 - 4 >= (int)skillIconList->max_length )
      break;
    if ( (__int64)v24 < v109 )
    {
      if ( !skillInfoList )
        goto LABEL_182;
      if ( v24 >= skillInfoList->max_length )
        goto LABEL_194;
      reinforceObject = this->fields.reinforceObject;
      if ( !reinforceObject )
        goto LABEL_182;
      if ( v24 >= LODWORD(reinforceObject[1].klass) )
        goto LABEL_194;
      v26 = *((_QWORD *)&skillInfoList->obj.klass + v23);
      if ( !v26 )
        goto LABEL_182;
      v27 = ServantStatusListViewItemDrawSkill_TypeInfo;
      v28 = (UILabel_o *)*((_QWORD *)&reinforceObject->klass + v23);
      v29 = *(System_String_o **)(v26 + 40);
      if ( (BYTE3(ServantStatusListViewItemDrawSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        v27 = ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      svtEntity = WrapControlText__textBBCodeAdjust(
                    v28,
                    v29,
                    v27->static_fields->DETAIL_FONT_SIZE,
                    v27->static_fields->DETAIL_FONT_SIZE,
                    v27->static_fields->MAX_HEIGHT,
                    0LL);
      v30 = this->fields.reinforceObject;
      if ( !v30 )
        goto LABEL_182;
      if ( v24 >= LODWORD(v30[1].klass) )
        goto LABEL_194;
      v31 = *((_QWORD *)&v30->klass + v23);
      if ( !v31 )
        goto LABEL_182;
      v32 = *(_DWORD *)(v31 + 164);
      y = this->fields.baseSize.fields.y;
      v34 = v32 + ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v34 >= SLODWORD(y) )
      {
        v22 += v34;
        svtEntity = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          svtEntity = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v24 == *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 32LL) - 1 )
          v21 |= v34 - LODWORD(this->fields.baseSize.fields.y) > 10;
      }
      else
      {
        v22 += LODWORD(y);
      }
    }
    skillIconList = this->fields.skillIconList;
    ++v23;
    if ( !skillIconList )
      goto LABEL_182;
  }
  if ( item->fields._IsDisplayCombineButton_k__BackingField && (userSvtEntity = item->fields.userSvtEntity) != 0LL )
  {
    v36 = v109;
    if ( !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
    {
      ServantStatusListViewItem__GetSkillInfo(item, &v110, 0LL);
      if ( !v110 )
        goto LABEL_182;
      v37 = v110->max_length;
      if ( v37 >= 1 )
      {
        v38 = 0;
        while ( 1 )
        {
          if ( v38 >= v37 )
            goto LABEL_194;
          v39 = v110->m_Items[v38];
          if ( !v39 )
            goto LABEL_182;
          if ( v39->fields.isUse && v39->fields.lv <= 9 )
            break;
          if ( (int)++v38 >= v37 )
            goto LABEL_62;
        }
        svtEntity = (__int64)this->fields.reinforceButton;
        if ( (v21 & 1) != 0 )
          v104 = 62;
        else
          v104 = 50;
        if ( !svtEntity )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        v105 = *(_QWORD *)&this->fields.skillPitch;
        if ( !v105 )
          goto LABEL_182;
        *(_BYTE *)(v105 + 89) = 1;
        svtEntity = *(_QWORD *)&this->fields.skillPitch;
        if ( !svtEntity )
          goto LABEL_182;
        v22 += v104;
        UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
        if ( v22 >= 0 )
          v106 = v22;
        else
          v106 = v22 + 1;
        GameObjectExtensions__SetLocalPositionY(
          (UnityEngine_GameObject_o *)this->fields.reinforceButton,
          (float)-(v106 >> 1),
          0LL);
      }
    }
  }
  else
  {
    v36 = v109;
  }
LABEL_62:
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v42 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v44 = x + (float)v22;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    svtEntity = (__int64)this->fields.baseSprite;
    if ( !svtEntity )
      goto LABEL_182;
    v113.fields.x = z;
    v113.fields.y = v44;
    v113.fields.z = v42;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)svtEntity, v113, 0LL);
  }
  svtEntity = (__int64)this->fields.titleSprite;
  if ( !svtEntity )
    goto LABEL_182;
  v45 = z;
  if ( z == INFINITY )
    v45 = -z;
  UIWidget__set_width((UIWidget_o *)svtEntity, (int)v45, 0LL);
  svtEntity = (__int64)this->fields.titleSprite;
  if ( !svtEntity )
    goto LABEL_182;
  v46 = v44;
  if ( v44 == INFINITY )
    v46 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)svtEntity, (int)v46, 0LL);
  svtEntity = (__int64)this->fields.explanationLabel;
  v47 = v22 >= 0 ? v22 : v22 + 1;
  if ( !svtEntity )
    goto LABEL_182;
  v48 = this->fields.titleBasePosition.fields.z;
  v49 = this->fields.skillBasePosition.fields.x;
  v50 = this->fields.skillBasePosition.fields.y;
  svtEntity = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)svtEntity, 0LL);
  if ( !svtEntity
    || (v51 = (float)(v47 >> 1),
        v114.fields.y = v49 + v51,
        v114.fields.x = v48,
        v114.fields.z = v50,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtEntity, v114, 0LL),
        (v52 = this->fields.skillIconList) == 0LL) )
  {
LABEL_182:
    sub_B52A5C(svtEntity, v7);
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
    if ( (int)v55 >= v36 )
    {
      if ( (unsigned int)v55 >= v57 )
        goto LABEL_194;
      svtEntity = (__int64)v52->m_Items[v55];
      if ( !svtEntity )
        goto LABEL_182;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_182;
      if ( (unsigned int)v55 >= skillInfoList->max_length || (unsigned int)v55 >= v57 )
        goto LABEL_194;
      svtEntity = (__int64)v52->m_Items[(int)v55];
      if ( !svtEntity )
        goto LABEL_182;
      v58 = skillInfoList->m_Items[(int)v55];
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
      if ( !v58 )
        goto LABEL_182;
      *(UnityEngine_Color_o *)&v59 = (v58->fields.lv & 0x80000000) != 0
                                   ? UnityEngine_Color__get_gray(0LL)
                                   : UnityEngine_Color__get_white(0LL);
      v63 = this->fields.skillIconList;
      v64 = v59;
      v65 = v60;
      v66 = v61;
      v67 = v62;
      if ( !v63 )
        goto LABEL_182;
      if ( (unsigned int)v55 >= v63->max_length )
        goto LABEL_194;
      svtEntity = (__int64)v63->m_Items[(int)v55];
      if ( !svtEntity )
        goto LABEL_182;
      svtEntity = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)svtEntity, 0LL);
      if ( !svtEntity )
        goto LABEL_182;
      v115.fields.x = v53;
      v115.fields.y = v56;
      v115.fields.z = v54;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtEntity, v115, 0LL);
      v68 = this->fields.chargeTitleSpriteList;
      if ( !v68 )
        goto LABEL_182;
      if ( (unsigned int)v55 >= v68->max_length )
        goto LABEL_194;
      svtEntity = (__int64)v68->m_Items[(int)v55];
      if ( !svtEntity )
        goto LABEL_182;
      SkillIconComponent__Set_26537744((SkillIconComponent_o *)svtEntity, v58->fields.id, v58->fields.lv, 0LL);
      if ( (v58->fields.lv & 0x80000000) != 0 || (v58->fields.charge & 0x80000000) != 0 )
      {
        chargeDataLabelList = this->fields.chargeDataLabelList;
        if ( !chargeDataLabelList )
          goto LABEL_182;
        if ( (unsigned int)v55 >= chargeDataLabelList->max_length )
          goto LABEL_194;
        svtEntity = (__int64)chargeDataLabelList->m_Items[(int)v55];
        if ( !svtEntity )
          goto LABEL_182;
        svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
        skillNameLabelList = this->fields.skillNameLabelList;
        if ( !skillNameLabelList )
          goto LABEL_182;
        if ( (unsigned int)v55 >= skillNameLabelList->max_length )
          goto LABEL_194;
        svtEntity = (__int64)skillNameLabelList->m_Items[(int)v55];
        if ( !svtEntity )
          goto LABEL_182;
        v72 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        v69 = this->fields.chargeDataLabelList;
        if ( !v69 )
          goto LABEL_182;
        if ( (unsigned int)v55 >= v69->max_length )
          goto LABEL_194;
        svtEntity = (__int64)v69->m_Items[(int)v55];
        if ( !svtEntity )
          goto LABEL_182;
        svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        v70 = this->fields.skillNameLabelList;
        if ( !v70 )
          goto LABEL_182;
        if ( (unsigned int)v55 >= v70->max_length )
          goto LABEL_194;
        v71 = v70->m_Items[(int)v55];
        svtEntity = (__int64)System_Int32__ToString((int)v58 + 24, 0LL);
        if ( !v71 )
          goto LABEL_182;
        v72 = (System_String_o *)svtEntity;
        svtEntity = (__int64)v71;
      }
      UILabel__set_text((UILabel_o *)svtEntity, v72, 0LL);
      v75 = this->fields.reinforceObject;
      if ( !v75 )
        goto LABEL_182;
      if ( (unsigned int)v55 >= LODWORD(v75[1].klass) )
        goto LABEL_194;
      svtEntity = *((_QWORD *)&v75[1].monitor + (int)v55);
      if ( !svtEntity )
        goto LABEL_182;
      v116.fields.r = v64;
      v116.fields.g = v65;
      v116.fields.b = v66;
      v116.fields.a = v67;
      UIWidget__set_color((UIWidget_o *)svtEntity, v116, 0LL);
      skillStrengthStatus = this->fields.skillStrengthStatus;
      if ( !skillStrengthStatus )
        goto LABEL_182;
      if ( (unsigned int)v55 >= skillStrengthStatus->max_length )
        goto LABEL_194;
      svtEntity = (__int64)skillStrengthStatus->m_Items[(int)v55];
      if ( !svtEntity )
        goto LABEL_182;
      UILabel__set_text((UILabel_o *)svtEntity, v58->fields.title, 0LL);
      v77 = this->fields.skillStrengthStatus;
      if ( !v77 )
        goto LABEL_182;
      if ( (unsigned int)v55 >= v77->max_length )
        goto LABEL_194;
      svtEntity = (__int64)v77->m_Items[(int)v55];
      if ( !svtEntity )
        goto LABEL_182;
      v117.fields.r = v64;
      v117.fields.g = v65;
      v117.fields.b = v66;
      v117.fields.a = v67;
      UIWidget__set_color((UIWidget_o *)svtEntity, v117, 0LL);
      v78 = this->fields.skillStrengthStatus;
      if ( !v78 )
        goto LABEL_182;
      if ( (unsigned int)v55 >= v78->max_length )
        goto LABEL_194;
      svtEntity = (__int64)v78->m_Items[(int)v55];
      if ( !svtEntity )
        goto LABEL_182;
      UILabel__SetCondensedScale((UILabel_o *)svtEntity, 340, 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_182;
      if ( (unsigned int)v55 >= skillExplanationLabelList->max_length )
        goto LABEL_194;
      v80 = (UnityEngine_Object_o *)skillExplanationLabelList->m_Items[(int)v55];
      if ( (v58->fields.lv & 0x80000000) != 0 )
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        svtEntity = UnityEngine_Object__op_Inequality(v80, 0LL, 0LL);
        if ( (svtEntity & 1) != 0 )
        {
          v98 = this->fields.skillExplanationLabelList;
          if ( !v98 )
            goto LABEL_182;
          if ( (unsigned int)v55 >= v98->max_length )
            goto LABEL_194;
          svtEntity = (__int64)v98->m_Items[(int)v55];
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
          UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
        }
      }
      else
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        svtEntity = UnityEngine_Object__op_Inequality(v80, 0LL, 0LL);
        if ( (svtEntity & 1) != 0 )
        {
          v81 = this->fields.skillExplanationLabelList;
          if ( !v81 )
            goto LABEL_182;
          if ( (unsigned int)v55 >= v81->max_length )
            goto LABEL_194;
          svtEntity = (__int64)v81->m_Items[(int)v55];
          if ( !svtEntity )
            goto LABEL_182;
          v82 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35616956(v82, 0LL);
        }
        svtEntity = (__int64)ServantSkillStrengthStatus_TypeInfo;
        if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
          svtEntity = (__int64)ServantSkillStrengthStatus_TypeInfo;
        }
        v83 = this->fields.skillStrengthStatus;
        if ( !v83 )
          goto LABEL_182;
        if ( (unsigned int)v55 >= v83->max_length )
          goto LABEL_194;
        v84 = (UnityEngine_Component_o *)v83->m_Items[(int)v55];
        if ( !v84 )
          goto LABEL_182;
        v85 = **(System_String_o ***)(svtEntity + 184);
        transform = UnityEngine_Component__get_transform(v84, 0LL);
        svtEntity = (__int64)BaseMonoBehaviour__CreateObjectStatic(v85, transform, 0LL, 0LL);
        if ( !svtEntity )
          goto LABEL_182;
        v87 = this->fields.skillExplanationLabelList;
        svtEntity = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)svtEntity,
                               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        if ( !v87 )
          goto LABEL_182;
        v94 = (System_Int32_array **)svtEntity;
        if ( svtEntity )
        {
          svtEntity = sub_B52A44(svtEntity, v87->obj.klass->_1.element_class);
          if ( !svtEntity )
          {
            v108 = sub_B52A7C(0LL);
            sub_B52A28(v108, 0LL);
          }
        }
        if ( (unsigned int)v55 >= v87->max_length )
          goto LABEL_194;
        v95 = &v87->obj.klass + (int)v55;
        v95[4] = (Il2CppClass *)v94;
        sub_B52920((BattleServantConfConponent_o *)(v95 + 4), v94, v88, v89, v90, v91, v92, v93);
        v96 = this->fields.skillExplanationLabelList;
        if ( !v96 )
          goto LABEL_182;
        if ( (unsigned int)v55 >= v96->max_length )
          goto LABEL_194;
        v97 = this->fields.skillStrengthStatus;
        if ( !v97 )
          goto LABEL_182;
        if ( (unsigned int)v55 >= v97->max_length )
          goto LABEL_194;
        svtEntity = (__int64)v96->m_Items[(int)v55];
        if ( !svtEntity )
          goto LABEL_182;
        v112 = (UnityEngine_Vector2Int_o)0x1600000018LL;
        ServantSkillStrengthStatus__Set(
          (ServantSkillStrengthStatus_o *)svtEntity,
          (UILabel_o *)v97->m_Items[(int)v55],
          v58->fields.strengthStatus,
          v58->fields.skillRecord,
          24,
          1,
          v112,
          0LL);
      }
    }
    v100 = this->fields.reinforceObject;
    if ( !v100 )
      goto LABEL_182;
    if ( (unsigned int)v55 >= LODWORD(v100[1].klass) )
      goto LABEL_194;
    v101 = *((_QWORD *)&v100[1].monitor + (int)v55);
    if ( v101 )
    {
      svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      v102 = *(_DWORD *)(v101 + 164);
      if ( (BYTE3(ServantStatusListViewItemDrawSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      ++v55;
      v52 = this->fields.skillIconList;
      LODWORD(v103) = *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 8LL) + v102;
      if ( SLODWORD(v103) < SLODWORD(this->fields.baseSize.fields.y) )
        v103 = this->fields.baseSize.fields.y;
      v56 = v56 - (float)SLODWORD(v103);
      if ( v52 )
        continue;
    }
    goto LABEL_182;
  }
}