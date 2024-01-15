void __fastcall ServantStatusListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FDEBF & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItemDrawSkill_TypeInfo, v1);
    byte_40FDEBF = 1;
  }
  ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->MAX_HEIGHT = 500;
  ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawSkill___ctor(
        ServantStatusListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BalanceConfig_c *v9; // x0
  struct SkillIconComponent_array *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x2
  struct UISprite_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x2
  struct UILabel_array *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x2
  struct UILabel_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x2
  struct ServantSkillStrengthStatus_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x2
  struct UILabel_array *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x2
  System_Int32_array **v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7

  if ( (byte_40FDEBE & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v4);
    sub_B16FFC(&ServantSkillStrengthStatus___TypeInfo, v5);
    sub_B16FFC(&SkillIconComponent___TypeInfo, v6);
    sub_B16FFC(&UILabel___TypeInfo, v7);
    sub_B16FFC(&UISprite___TypeInfo, v8);
    byte_40FDEBE = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v10 = (struct SkillIconComponent_array *)sub_B17014(
                                             UnityEngine_GameObject___TypeInfo,
                                             (unsigned int)v9->static_fields->SvtSkillListMax,
                                             v2);
  this->fields.skillIconList = v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v18 = (struct UISprite_array *)sub_B17014(
                                   SkillIconComponent___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                   v17);
  this->fields.chargeTitleSpriteList = v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.chargeTitleSpriteList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v26 = (struct UILabel_array *)sub_B17014(
                                  UISprite___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                  v25);
  this->fields.chargeDataLabelList = v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.chargeDataLabelList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v34 = (struct UILabel_array *)sub_B17014(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                  v33);
  this->fields.skillNameLabelList = v34;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillNameLabelList,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v42 = (struct ServantSkillStrengthStatus_array *)sub_B17014(
                                                     UILabel___TypeInfo,
                                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                                     v41);
  this->fields.skillStrengthStatus = v42;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v50 = (struct UILabel_array *)sub_B17014(
                                  ServantSkillStrengthStatus___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                  v49);
  this->fields.skillExplanationLabelList = v50;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillExplanationLabelList,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v58 = (System_Int32_array **)sub_B17014(
                                 UILabel___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                 v57);
  *(_QWORD *)&this->fields.skillPitch = v58;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.skillPitch, v58, v59, v60, v61, v62, v63, v64);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawSkill__Awake(
        ServantStatusListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  struct SkillIconComponent_array *skillIconList; // x8
  UnityEngine_GameObject_o *v4; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  float v9; // s1
  struct SkillIconComponent_array *v10; // x8
  UnityEngine_GameObject_o *v11; // x0
  float v12; // s8
  UnityEngine_Transform_o *v13; // x0
  float v14; // s0
  double v15; // d0
  struct UISprite_o *titleSprite; // x9
  UnityEngine_Component_o *explanationLabel; // x0
  int v18; // w20
  float v19; // s1
  UnityEngine_Transform_o *v20; // x0
  float v21; // s0
  float v22; // s1
  float v23; // s2
  struct SkillIconComponent_array *v24; // x8
  int v25; // w9
  float v26; // s8
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Transform_o *v28; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_24;
  if ( (int)skillIconList->max_length >= 2 )
  {
    v4 = (UnityEngine_GameObject_o *)skillIconList->m_Items[0];
    if ( !v4 )
      goto LABEL_24;
    transform = UnityEngine_GameObject__get_transform(v4, 0LL);
    if ( !transform )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
    v10 = this->fields.skillIconList;
    if ( !v10 )
      goto LABEL_24;
    if ( v10->max_length <= 1 )
      goto LABEL_25;
    v11 = (UnityEngine_GameObject_o *)v10->m_Items[1];
    if ( !v11 )
      goto LABEL_24;
    v12 = v9;
    v13 = UnityEngine_GameObject__get_transform(v11, 0LL);
    if ( !v13 )
      goto LABEL_24;
    localPosition = UnityEngine_Transform__get_localPosition(v13, 0LL);
    v14 = v12 - localPosition.fields.y;
    skillIconList = this->fields.skillIconList;
    v15 = (float)(v12 - localPosition.fields.y) == INFINITY ? -v14 : v14;
    LODWORD(this->fields.baseSize.fields.y) = (int)v15;
    if ( !skillIconList )
      goto LABEL_24;
  }
  titleSprite = this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_24;
  explanationLabel = (UnityEngine_Component_o *)this->fields.explanationLabel;
  v18 = LODWORD(this->fields.baseSize.fields.y) * skillIconList->max_length;
  v19 = (float)(titleSprite->fields.mHeight - v18);
  this->fields.baseSize.fields.z = (float)titleSprite->fields.mWidth;
  this->fields.titleBasePosition.fields.x = v19;
  this->fields.titleBasePosition.fields.y = 0.0;
  if ( !explanationLabel )
    goto LABEL_24;
  v20 = UnityEngine_Component__get_transform(explanationLabel, 0LL);
  if ( !v20 )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_localPosition(v20, 0LL);
  v24 = this->fields.skillIconList;
  v25 = v18 >= 0 ? v18 : v18 + 1;
  v26 = (float)(v25 >> 1);
  this->fields.titleBasePosition.fields.z = v21;
  this->fields.skillBasePosition.fields.x = v22 - v26;
  this->fields.skillBasePosition.fields.y = v23;
  if ( !v24 )
LABEL_24:
    sub_B170D4();
  if ( !v24->max_length )
  {
LABEL_25:
    sub_B17100(v6, v7, v8);
    sub_B170A0();
  }
  v27 = (UnityEngine_GameObject_o *)v24->m_Items[0];
  if ( !v27 )
    goto LABEL_24;
  v28 = UnityEngine_GameObject__get_transform(v27, 0LL);
  if ( !v28 )
    goto LABEL_24;
  v30 = UnityEngine_Transform__get_localPosition(v28, 0LL);
  this->fields.skillBasePosition.fields.z = v30.fields.x;
  *(float *)&this[1].klass = v30.fields.y - v26;
  HIDWORD(this[1].klass) = LODWORD(v30.fields.z);
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
  ServantEntity_o *svtEntity; // x0
  UILabel_o *skillBaseList; // x21
  System_String_o **v16; // x8
  System_String_o *v17; // x22
  System_String_o *v18; // x0
  __int64 Component_srcLineSprite; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  struct UISprite_array *chargeTitleSpriteList; // x8
  int v23; // w22
  __int64 v24; // x23
  __int64 v25; // x9
  unsigned __int64 max_length; // x11
  SkillInfo_o *v27; // x21
  int64_t UserId; // x22
  int32_t SvtId; // w0
  struct SkillIconComponent_array *skillIconList; // x8
  int v31; // w25
  __int64 v32; // x26
  unsigned __int64 v33; // x27
  __int64 v34; // x9
  __int64 v35; // x8
  ServantStatusListViewItemDrawSkill_c *v36; // x0
  UILabel_o *v37; // x20
  System_String_o *v38; // x21
  __int64 v39; // x8
  __int64 v40; // x8
  int v41; // w10
  float y; // w8
  int v43; // w9
  float x; // s8
  float z; // s9
  float v46; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v48; // s8
  UnityEngine_BoxCollider_o *v49; // x0
  UIWidget_o *titleSprite; // x0
  double v51; // d0
  UIWidget_o *v52; // x0
  double v53; // d0
  UnityEngine_Component_o *explanationLabel; // x0
  int v55; // w20
  float v56; // s8
  float v57; // s11
  float v58; // s9
  UnityEngine_Transform_o *transform; // x0
  float v60; // s10
  struct SkillIconComponent_array *v61; // x8
  float v62; // s8
  float v63; // s9
  __int64 v64; // x25
  float v65; // s10
  unsigned int v66; // w9
  UnityEngine_GameObject_o *v67; // x0
  SkillInfo_o *v68; // x28
  float v69; // s0
  float v70; // s1
  float v71; // s2
  float v72; // s3
  UnityEngine_GameObject_o *v73; // x0
  struct SkillIconComponent_array *v74; // x8
  float v75; // s11
  float v76; // s12
  float v77; // s13
  float v78; // s14
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_Transform_o *v80; // x0
  struct UISprite_array *v81; // x8
  SkillIconComponent_o *v82; // x0
  struct UILabel_array *v83; // x8
  UnityEngine_Component_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  struct UILabel_array *v86; // x8
  UILabel_o *v87; // x21
  System_String_o *v88; // x0
  System_String_o *v89; // x1
  UILabel_o *v90; // x0
  struct UILabel_array *chargeDataLabelList; // x8
  UnityEngine_Component_o *v92; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *skillNameLabelList; // x8
  __int64 v95; // x8
  UIWidget_o *v96; // x0
  struct ServantSkillStrengthStatus_array *skillStrengthStatus; // x8
  UILabel_o *v98; // x0
  struct ServantSkillStrengthStatus_array *v99; // x8
  UIWidget_o *v100; // x0
  struct ServantSkillStrengthStatus_array *v101; // x8
  UILabel_o *v102; // x0
  struct UILabel_array *skillExplanationLabelList; // x8
  UnityEngine_Object_o *v104; // x20
  struct UILabel_array *v105; // x8
  UnityEngine_Component_o *v106; // x0
  UnityEngine_Object_o *v107; // x20
  struct ServantSkillStrengthStatus_array *v108; // x8
  UnityEngine_Component_o *v109; // x8
  System_String_o *v110; // x20
  UnityEngine_Transform_o *v111; // x0
  UnityEngine_GameObject_o *ObjectStatic; // x0
  struct UILabel_array *v113; // x21
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array **v119; // x20
  Il2CppClass **v120; // x0
  struct UILabel_array *v121; // x8
  struct ServantSkillStrengthStatus_array *v122; // x9
  ServantSkillStrengthStatus_o *v123; // x0
  struct UILabel_array *v124; // x8
  UnityEngine_Component_o *v125; // x0
  UnityEngine_Object_o *v126; // x20
  __int64 v127; // x8
  __int64 v128; // x8
  int v129; // w20
  float v130; // w9
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector2Int_o v132; // 0:x6.8
  UnityEngine_Vector3_o v133; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v134; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v135; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v136; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v137; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FDEBD & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, item);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&ServantSkillStrengthStatus_TypeInfo, v9);
    sub_B16FFC(&ServantStatusListViewItemDrawSkill_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_11932/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v11);
    sub_B16FFC(&StringLiteral_11930/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/, v12);
    sub_B16FFC(&StringLiteral_1/*""*/, v13);
    byte_40FDEBD = 1;
  }
  skillInfoList = 0LL;
  LODWORD(this->fields.baseCollider) = mode;
  if ( !item || !mode )
    return;
  svtEntity = item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_165;
  skillBaseList = (UILabel_o *)this->fields.skillBaseList;
  if ( ServantEntity__get_IsServantEquip(svtEntity, 0LL) )
    v16 = (System_String_o **)&StringLiteral_11932/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  else
    v16 = (System_String_o **)&StringLiteral_11930/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/;
  v17 = *v16;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get(v17, 0LL);
  if ( !skillBaseList )
    goto LABEL_165;
  UILabel__set_text(skillBaseList, v18, 0LL);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0LL);
  if ( !skillInfoList )
    return;
  chargeTitleSpriteList = this->fields.chargeTitleSpriteList;
  if ( !chargeTitleSpriteList )
    goto LABEL_165;
  v23 = 0;
  v24 = 4LL;
  while ( 1 )
  {
    v25 = v24 - 4;
    if ( v24 - 4 >= (int)chargeTitleSpriteList->max_length )
      break;
    if ( skillInfoList )
    {
      max_length = skillInfoList->max_length;
      if ( v25 < (int)max_length )
      {
        if ( v25 >= max_length )
        {
LABEL_167:
          sub_B17100(Component_srcLineSprite, v20, v21);
          sub_B170A0();
        }
        v27 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + v24);
        if ( v27 )
        {
          if ( v27->fields.id >= 1 )
          {
            UserId = ServantStatusListViewItem__get_UserId(item, 0LL);
            SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
            SkillInfo__OverwriteNextSkill(v27, UserId, SvtId, 0LL);
            chargeTitleSpriteList = this->fields.chargeTitleSpriteList;
            v23 = v24 - 3;
          }
        }
      }
      ++v24;
      if ( chargeTitleSpriteList )
        continue;
    }
    goto LABEL_165;
  }
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_165;
  v31 = 0;
  v32 = 4LL;
  while ( 1 )
  {
    v33 = v32 - 4;
    if ( v32 - 4 >= (int)skillIconList->max_length )
      break;
    if ( (__int64)v33 < v23 )
    {
      if ( !skillInfoList )
        goto LABEL_165;
      if ( v33 >= skillInfoList->max_length )
        goto LABEL_167;
      v34 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v34 )
        goto LABEL_165;
      if ( v33 >= *(unsigned int *)(v34 + 24) )
        goto LABEL_167;
      v35 = *((_QWORD *)&skillInfoList->obj.klass + v32);
      if ( !v35 )
        goto LABEL_165;
      v36 = ServantStatusListViewItemDrawSkill_TypeInfo;
      v37 = *(UILabel_o **)(v34 + 8 * v32);
      v38 = *(System_String_o **)(v35 + 40);
      if ( (BYTE3(ServantStatusListViewItemDrawSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        v36 = ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      Component_srcLineSprite = WrapControlText__textBBCodeAdjust(
                                  v37,
                                  v38,
                                  v36->static_fields->DETAIL_FONT_SIZE,
                                  v36->static_fields->DETAIL_FONT_SIZE,
                                  v36->static_fields->MAX_HEIGHT,
                                  0LL);
      v39 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v39 )
        goto LABEL_165;
      if ( v33 >= *(unsigned int *)(v39 + 24) )
        goto LABEL_167;
      v40 = *(_QWORD *)(v39 + 8 * v32);
      if ( !v40 )
        goto LABEL_165;
      v41 = *(_DWORD *)(v40 + 164);
      y = this->fields.baseSize.fields.y;
      v43 = v41 + ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v43 >= SLODWORD(y) )
        v31 += v43;
      else
        v31 += LODWORD(y);
    }
    skillIconList = this->fields.skillIconList;
    ++v32;
    if ( !skillIconList )
      goto LABEL_165;
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v46 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v48 = x + (float)v31;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v49 = (UnityEngine_BoxCollider_o *)this->fields.baseSprite;
    if ( !v49 )
      goto LABEL_165;
    v133.fields.x = z;
    v133.fields.y = v48;
    v133.fields.z = v46;
    UnityEngine_BoxCollider__set_size(v49, v133, 0LL);
  }
  titleSprite = (UIWidget_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_165;
  v51 = z;
  if ( z == INFINITY )
    v51 = -z;
  UIWidget__set_width(titleSprite, (int)v51, 0LL);
  v52 = (UIWidget_o *)this->fields.titleSprite;
  if ( !v52 )
    goto LABEL_165;
  v53 = v48;
  if ( v48 == INFINITY )
    v53 = -INFINITY;
  UIWidget__set_height(v52, (int)v53, 0LL);
  explanationLabel = (UnityEngine_Component_o *)this->fields.explanationLabel;
  v55 = v31 >= 0 ? v31 : v31 + 1;
  if ( !explanationLabel )
    goto LABEL_165;
  v56 = this->fields.titleBasePosition.fields.z;
  v57 = this->fields.skillBasePosition.fields.x;
  v58 = this->fields.skillBasePosition.fields.y;
  transform = UnityEngine_Component__get_transform(explanationLabel, 0LL);
  if ( !transform
    || (v60 = (float)(v55 >> 1),
        v134.fields.y = v57 + v60,
        v134.fields.x = v56,
        v134.fields.z = v58,
        UnityEngine_Transform__set_localPosition(transform, v134, 0LL),
        (v61 = this->fields.skillIconList) == 0LL) )
  {
LABEL_165:
    sub_B170D4();
  }
  v62 = this->fields.skillBasePosition.fields.z;
  v63 = *((float *)&this[1].klass + 1);
  v64 = 0LL;
  v65 = *(float *)&this[1].klass + v60;
  while ( 1 )
  {
    v66 = v61->max_length;
    if ( (int)v64 >= (int)v66 )
      break;
    if ( (int)v64 >= v23 )
    {
      if ( (unsigned int)v64 >= v66 )
        goto LABEL_167;
      v73 = (UnityEngine_GameObject_o *)v61->m_Items[v64];
      if ( !v73 )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive(v73, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_165;
      if ( (unsigned int)v64 >= skillInfoList->max_length || (unsigned int)v64 >= v66 )
        goto LABEL_167;
      v67 = (UnityEngine_GameObject_o *)v61->m_Items[(int)v64];
      if ( !v67 )
        goto LABEL_165;
      v68 = skillInfoList->m_Items[(int)v64];
      UnityEngine_GameObject__SetActive(v67, 1, 0LL);
      if ( !v68 )
        goto LABEL_165;
      *(UnityEngine_Color_o *)&v69 = (v68->fields.lv & 0x80000000) != 0
                                   ? UnityEngine_Color__get_gray(0LL)
                                   : UnityEngine_Color__get_white(0LL);
      v74 = this->fields.skillIconList;
      v75 = v69;
      v76 = v70;
      v77 = v71;
      v78 = v72;
      if ( !v74 )
        goto LABEL_165;
      if ( (unsigned int)v64 >= v74->max_length )
        goto LABEL_167;
      v79 = (UnityEngine_GameObject_o *)v74->m_Items[(int)v64];
      if ( !v79 )
        goto LABEL_165;
      v80 = UnityEngine_GameObject__get_transform(v79, 0LL);
      if ( !v80 )
        goto LABEL_165;
      v135.fields.x = v62;
      v135.fields.y = v65;
      v135.fields.z = v63;
      UnityEngine_Transform__set_localPosition(v80, v135, 0LL);
      v81 = this->fields.chargeTitleSpriteList;
      if ( !v81 )
        goto LABEL_165;
      if ( (unsigned int)v64 >= v81->max_length )
        goto LABEL_167;
      v82 = (SkillIconComponent_o *)v81->m_Items[(int)v64];
      if ( !v82 )
        goto LABEL_165;
      SkillIconComponent__Set_23613360(v82, v68->fields.id, v68->fields.lv, 0LL);
      if ( (v68->fields.lv & 0x80000000) != 0 || (v68->fields.charge & 0x80000000) != 0 )
      {
        chargeDataLabelList = this->fields.chargeDataLabelList;
        if ( !chargeDataLabelList )
          goto LABEL_165;
        if ( (unsigned int)v64 >= chargeDataLabelList->max_length )
          goto LABEL_167;
        v92 = (UnityEngine_Component_o *)chargeDataLabelList->m_Items[(int)v64];
        if ( !v92 )
          goto LABEL_165;
        gameObject = UnityEngine_Component__get_gameObject(v92, 0LL);
        if ( !gameObject )
          goto LABEL_165;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        skillNameLabelList = this->fields.skillNameLabelList;
        if ( !skillNameLabelList )
          goto LABEL_165;
        if ( (unsigned int)v64 >= skillNameLabelList->max_length )
          goto LABEL_167;
        v90 = skillNameLabelList->m_Items[(int)v64];
        if ( !v90 )
          goto LABEL_165;
        v89 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        v83 = this->fields.chargeDataLabelList;
        if ( !v83 )
          goto LABEL_165;
        if ( (unsigned int)v64 >= v83->max_length )
          goto LABEL_167;
        v84 = (UnityEngine_Component_o *)v83->m_Items[(int)v64];
        if ( !v84 )
          goto LABEL_165;
        v85 = UnityEngine_Component__get_gameObject(v84, 0LL);
        if ( !v85 )
          goto LABEL_165;
        UnityEngine_GameObject__SetActive(v85, 1, 0LL);
        v86 = this->fields.skillNameLabelList;
        if ( !v86 )
          goto LABEL_165;
        if ( (unsigned int)v64 >= v86->max_length )
          goto LABEL_167;
        v87 = v86->m_Items[(int)v64];
        v88 = System_Int32__ToString((int)v68 + 24, 0LL);
        if ( !v87 )
          goto LABEL_165;
        v89 = v88;
        v90 = v87;
      }
      UILabel__set_text(v90, v89, 0LL);
      v95 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v95 )
        goto LABEL_165;
      if ( (unsigned int)v64 >= *(_DWORD *)(v95 + 24) )
        goto LABEL_167;
      v96 = *(UIWidget_o **)(v95 + 8LL * (int)v64 + 32);
      if ( !v96 )
        goto LABEL_165;
      v136.fields.r = v75;
      v136.fields.g = v76;
      v136.fields.b = v77;
      v136.fields.a = v78;
      UIWidget__set_color(v96, v136, 0LL);
      skillStrengthStatus = this->fields.skillStrengthStatus;
      if ( !skillStrengthStatus )
        goto LABEL_165;
      if ( (unsigned int)v64 >= skillStrengthStatus->max_length )
        goto LABEL_167;
      v98 = (UILabel_o *)skillStrengthStatus->m_Items[(int)v64];
      if ( !v98 )
        goto LABEL_165;
      UILabel__set_text(v98, v68->fields.title, 0LL);
      v99 = this->fields.skillStrengthStatus;
      if ( !v99 )
        goto LABEL_165;
      if ( (unsigned int)v64 >= v99->max_length )
        goto LABEL_167;
      v100 = (UIWidget_o *)v99->m_Items[(int)v64];
      if ( !v100 )
        goto LABEL_165;
      v137.fields.r = v75;
      v137.fields.g = v76;
      v137.fields.b = v77;
      v137.fields.a = v78;
      UIWidget__set_color(v100, v137, 0LL);
      v101 = this->fields.skillStrengthStatus;
      if ( !v101 )
        goto LABEL_165;
      if ( (unsigned int)v64 >= v101->max_length )
        goto LABEL_167;
      v102 = (UILabel_o *)v101->m_Items[(int)v64];
      if ( !v102 )
        goto LABEL_165;
      UILabel__SetCondensedScale(v102, 340, 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_165;
      if ( (unsigned int)v64 >= skillExplanationLabelList->max_length )
        goto LABEL_167;
      v104 = (UnityEngine_Object_o *)skillExplanationLabelList->m_Items[(int)v64];
      if ( (v68->fields.lv & 0x80000000) != 0 )
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Component_srcLineSprite = UnityEngine_Object__op_Inequality(v104, 0LL, 0LL);
        if ( (Component_srcLineSprite & 1) != 0 )
        {
          v124 = this->fields.skillExplanationLabelList;
          if ( !v124 )
            goto LABEL_165;
          if ( (unsigned int)v64 >= v124->max_length )
            goto LABEL_167;
          v125 = (UnityEngine_Component_o *)v124->m_Items[(int)v64];
          if ( !v125 )
            goto LABEL_165;
          v126 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v125, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_34809464(v126, 0LL);
        }
      }
      else
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Component_srcLineSprite = UnityEngine_Object__op_Inequality(v104, 0LL, 0LL);
        if ( (Component_srcLineSprite & 1) != 0 )
        {
          v105 = this->fields.skillExplanationLabelList;
          if ( !v105 )
            goto LABEL_165;
          if ( (unsigned int)v64 >= v105->max_length )
            goto LABEL_167;
          v106 = (UnityEngine_Component_o *)v105->m_Items[(int)v64];
          if ( !v106 )
            goto LABEL_165;
          v107 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v106, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_34809464(v107, 0LL);
        }
        Component_srcLineSprite = (__int64)ServantSkillStrengthStatus_TypeInfo;
        if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
          Component_srcLineSprite = (__int64)ServantSkillStrengthStatus_TypeInfo;
        }
        v108 = this->fields.skillStrengthStatus;
        if ( !v108 )
          goto LABEL_165;
        if ( (unsigned int)v64 >= v108->max_length )
          goto LABEL_167;
        v109 = (UnityEngine_Component_o *)v108->m_Items[(int)v64];
        if ( !v109 )
          goto LABEL_165;
        v110 = **(System_String_o ***)(Component_srcLineSprite + 184);
        v111 = UnityEngine_Component__get_transform(v109, 0LL);
        ObjectStatic = BaseMonoBehaviour__CreateObjectStatic(v110, v111, 0LL, 0LL);
        if ( !ObjectStatic )
          goto LABEL_165;
        v113 = this->fields.skillExplanationLabelList;
        Component_srcLineSprite = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             ObjectStatic,
                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        if ( !v113 )
          goto LABEL_165;
        v119 = (System_Int32_array **)Component_srcLineSprite;
        if ( Component_srcLineSprite )
        {
          Component_srcLineSprite = sub_B170BC(Component_srcLineSprite, v113->obj.klass->_1.element_class);
          if ( !Component_srcLineSprite )
          {
            sub_B170F4(0LL);
            sub_B170A0();
          }
        }
        if ( (unsigned int)v64 >= v113->max_length )
          goto LABEL_167;
        v120 = &v113->obj.klass + (int)v64;
        v120[4] = (Il2CppClass *)v119;
        sub_B16F98((BattleServantConfConponent_o *)(v120 + 4), v119, v21, v114, v115, v116, v117, v118);
        v121 = this->fields.skillExplanationLabelList;
        if ( !v121 )
          goto LABEL_165;
        if ( (unsigned int)v64 >= v121->max_length )
          goto LABEL_167;
        v122 = this->fields.skillStrengthStatus;
        if ( !v122 )
          goto LABEL_165;
        if ( (unsigned int)v64 >= v122->max_length )
          goto LABEL_167;
        v123 = (ServantSkillStrengthStatus_o *)v121->m_Items[(int)v64];
        if ( !v123 )
          goto LABEL_165;
        v132 = (UnityEngine_Vector2Int_o)0x1600000018LL;
        ServantSkillStrengthStatus__Set(
          v123,
          (UILabel_o *)v122->m_Items[(int)v64],
          v68->fields.strengthStatus,
          v68->fields.skillRecord,
          24,
          1,
          v132,
          0LL);
      }
    }
    v127 = *(_QWORD *)&this->fields.skillPitch;
    if ( !v127 )
      goto LABEL_165;
    if ( (unsigned int)v64 >= *(_DWORD *)(v127 + 24) )
      goto LABEL_167;
    v128 = *(_QWORD *)(v127 + 8LL * (int)v64 + 32);
    if ( v128 )
    {
      Component_srcLineSprite = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      v129 = *(_DWORD *)(v128 + 164);
      if ( (BYTE3(ServantStatusListViewItemDrawSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        Component_srcLineSprite = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      ++v64;
      v61 = this->fields.skillIconList;
      LODWORD(v130) = *(_DWORD *)(*(_QWORD *)(Component_srcLineSprite + 184) + 8LL) + v129;
      if ( SLODWORD(v130) < SLODWORD(this->fields.baseSize.fields.y) )
        v130 = this->fields.baseSize.fields.y;
      v65 = v65 - (float)SLODWORD(v130);
      if ( v61 )
        continue;
    }
    goto LABEL_165;
  }
}