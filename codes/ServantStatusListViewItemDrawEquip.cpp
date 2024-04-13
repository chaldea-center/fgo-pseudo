void __fastcall ServantStatusListViewItemDrawEquip___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECB54 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItemDrawEquip_TypeInfo, v1, v2, v3);
    byte_42ECB54 = 1;
  }
  ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->MAX_HEIGHT = 500;
  ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawEquip___ctor(
        ServantStatusListViewItemDrawEquip_o *this,
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
  struct UnityEngine_GameObject_o *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  float v46; // s4
  float v47; // s5
  float v48; // s6
  __int128 v49; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42ECB53 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SkillIconComponent___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UILabel___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UIRangeLabel___TypeInfo, v14, v15, v16);
    byte_42ECB53 = 1;
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
                                             (unsigned int)v17->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillIcon = v18;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipSkillIcon,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UIRangeLabel_array *)sub_B5D5DC(
                                       SkillIconComponent___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillTitleRangeLabelList = v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipSkillTitleRangeLabelList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (struct UILabel_array *)sub_B5D5DC(
                                  UIRangeLabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillExplanationLabelList = v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipSkillExplanationLabelList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (struct UnityEngine_GameObject_o *)sub_B5D5DC(
                                             UILabel___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.reinforceObject = v39;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.reinforceObject,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v50.fields.r = 0.32941;
  v49 = 0uLL;
  v50.fields.g = 0.32941;
  v50.fields.b = 0.32941;
  UnityEngine_Color___ctor_41567816(v50, v46, v47, v48, (const MethodInfo *)&v49);
  *(_OWORD *)&this->fields.COLOR_INVALID.fields.b = v49;
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawEquip__Awake(
        ServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  struct SkillIconComponent_array *equipSkillIcon; // x8
  ServantStatusListViewItemDrawEquip_o *v3; // x19
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

  equipSkillIcon = this->fields.equipSkillIcon;
  if ( !equipSkillIcon )
    goto LABEL_24;
  v3 = this;
  if ( (int)equipSkillIcon->max_length >= 2 )
  {
    this = (ServantStatusListViewItemDrawEquip_o *)equipSkillIcon->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v4 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v5 = v3->fields.equipSkillIcon;
    if ( !v5 )
      goto LABEL_24;
    if ( v5->max_length <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawEquip_o *)v5->m_Items[1];
    if ( !this )
      goto LABEL_24;
    v6 = v4;
    this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_24;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v7 = v6 - localPosition.fields.y;
    equipSkillIcon = v3->fields.equipSkillIcon;
    v8 = (float)(v6 - localPosition.fields.y) == INFINITY ? -v7 : v7;
    LODWORD(v3->fields.baseSize.fields.y) = (int)v8;
    if ( !equipSkillIcon )
      goto LABEL_24;
  }
  titleSprite = v3->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)v3->fields.equipButton;
  v10 = LODWORD(v3->fields.baseSize.fields.y) * equipSkillIcon->max_length;
  v11 = (float)(titleSprite->fields.mHeight - v10);
  v3->fields.baseSize.fields.z = (float)titleSprite->fields.mWidth;
  v3->fields.titleBasePosition.fields.x = v11;
  v3->fields.titleBasePosition.fields.y = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v15 = v3->fields.equipSkillIcon;
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
  this = (ServantStatusListViewItemDrawEquip_o *)v15->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_24;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.skillBasePosition.fields.z = v20.fields.x;
  v3->fields.COLOR_INVALID.fields.g = v20.fields.z;
  v3->fields.COLOR_INVALID.fields.r = v20.fields.y - v17;
}


int32_t __fastcall ServantStatusListViewItemDrawEquip__GetKind(
        ServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  return 3;
}


void __fastcall ServantStatusListViewItemDrawEquip__SetItem(
        ServantStatusListViewItemDrawEquip_o *this,
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
  struct UIRangeLabel_o *nameRangeLabel; // x21
  UIRangeLabel_o *explanationLabel; // x0
  System_String_o *equipTargetId1; // x1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v33; // x21
  __int64 v34; // x22
  struct UILabel_o *v35; // x8
  struct ServantLeaderInfo_o *v36; // x9
  UIRangeLabel_o *levelLabel; // x21
  struct UILabel_o *maxLevelLabel; // x21
  struct UIIconLabel_o *attackIconLabel; // x21
  struct UnityEngine_GameObject_o *expBase; // x21
  UIIconLabel_o *hpIconLabel; // x21
  UIIconLabel_o *costLabel; // x21
  UILabel_o *expBar; // x21
  int32_t v44; // w22
  struct UISprite_o *lineSprite; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t limitMax; // w2
  int32_t v48; // w1
  ServantStatusLimitCountGauge_o *v49; // x0
  struct UIRangeLabel_array *equipSkillTitleRangeLabelList; // x8
  __int64 v51; // x10
  unsigned __int64 max_length; // x9
  int v53; // w22
  signed __int64 v54; // x8
  SkillInfo_o *v55; // x13
  UnityEngine_Object_o *equipSkillBaseList; // x21
  struct SkillIconComponent_array *equipSkillIcon; // x8
  int v58; // w23
  __int64 v59; // x27
  __int64 v60; // x28
  unsigned __int64 v61; // x25
  unsigned __int64 v62; // x9
  __int64 v63; // x8
  struct UnityEngine_GameObject_o *reinforceObject; // x9
  ServantStatusListViewItemDrawEquip_c *v65; // x0
  UILabel_o *v66; // x21
  System_String_o *v67; // x22
  struct UnityEngine_GameObject_o *v68; // x8
  __int64 v69; // x8
  float y; // w9
  int v71; // w10
  int v72; // w8
  __int64 v73; // x11
  __int64 v74; // x9
  int32_t EquipLevel; // w21
  struct ServantEntity_o *v76; // x8
  int v77; // w21
  __int64 v78; // x8
  int v79; // w8
  float x; // s8
  float z; // s9
  float v82; // s10
  UnityEngine_Object_o *baseSprite; // x21
  float v84; // s8
  double v85; // d0
  double v86; // d0
  int v87; // w21
  float v88; // s8
  float v89; // s11
  float v90; // s9
  float v91; // s10
  struct SkillIconComponent_array *v92; // x8
  float g; // s8
  float v94; // s9
  __int64 v95; // x25
  float v96; // s10
  int v97; // w9
  il2cpp_array_size_t v98; // w23
  il2cpp_array_size_t v99; // w11
  SkillInfo_o *v100; // x27
  struct UIRangeLabel_array *v101; // x8
  struct UILabel_array *equipSkillExplanationLabelList; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v104; // x21
  __int64 v105; // x22
  int32_t v106; // w21
  int32_t Rarity; // w0
  struct SkillIconComponent_array *v108; // x8
  struct UnityEngine_GameObject_o *v109; // x8
  __int64 v110; // x8
  int v111; // w21
  float v112; // w9
  struct ServantLeaderInfo_o *v113; // x8
  __int64 v114; // x21
  __int64 v115; // x22
  int32_t v116; // w22
  struct UIRangeLabel_array *v117; // x8
  struct UILabel_array *v118; // x8
  struct UnityEngine_GameObject_o *v119; // x8
  UnityEngine_Object_o *equipIcon; // x21
  __int64 v121; // x0
  char v122; // [xsp+14h] [xbp-8Ch]
  float barExp[2]; // [xsp+18h] [xbp-88h] BYREF
  int32_t exp[2]; // [xsp+20h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v130; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v131; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ECB52 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&ServantStatusListViewItemDrawEquip_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_12116/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_1/*""*/, v25, v26, v27);
    byte_42ECB52 = 1;
  }
  *(_QWORD *)exp = 0LL;
  skillInfoList = 0LL;
  *(_QWORD *)barExp = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( !item || !mode )
    return;
  nameRangeLabel = this->fields.nameRangeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  explanationLabel = (UIRangeLabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12116/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, 0LL);
  if ( !nameRangeLabel )
    goto LABEL_201;
  UILabel__set_text((UILabel_o *)nameRangeLabel, (System_String_o *)explanationLabel, 0LL);
  if ( item->fields.userSvtEntity )
  {
    equipTargetId1 = (System_String_o *)item->fields.equipTargetId1;
    explanationLabel = (UIRangeLabel_o *)this->fields.explanationLabel;
    if ( (__int64)equipTargetId1 >= 1 )
    {
      if ( !explanationLabel )
        goto LABEL_201;
      ServantFaceIconComponent__Set_30849484(
        (ServantFaceIconComponent_o *)explanationLabel,
        (int64_t)equipTargetId1,
        0LL,
        0LL,
        0LL);
      goto LABEL_26;
    }
    if ( !explanationLabel )
      goto LABEL_201;
LABEL_25:
    ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)explanationLabel, 0LL);
    goto LABEL_26;
  }
  servantLeaderInfo = item->fields.servantLeaderInfo;
  if ( !servantLeaderInfo || (equipTarget1 = servantLeaderInfo->fields.equipTarget1) == 0LL )
  {
    explanationLabel = (UIRangeLabel_o *)this->fields.explanationLabel;
    if ( !explanationLabel )
      goto LABEL_201;
    goto LABEL_25;
  }
  v34 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v126.fields.currentCryptoKey = v34;
  *(_QWORD *)&v126.fields.fakeValue = v33;
  explanationLabel = (UIRangeLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v126, 0LL);
  v35 = this->fields.explanationLabel;
  if ( (int)explanationLabel < 1 )
  {
    if ( !v35 )
      goto LABEL_201;
    explanationLabel = (UIRangeLabel_o *)this->fields.explanationLabel;
    goto LABEL_25;
  }
  v36 = item->fields.servantLeaderInfo;
  if ( !v36 || !v35 )
    goto LABEL_201;
  ServantFaceIconComponent__Set_30854332(
    (ServantFaceIconComponent_o *)this->fields.explanationLabel,
    v36->fields.equipTarget1,
    0LL,
    0LL,
    0LL);
LABEL_26:
  explanationLabel = (UIRangeLabel_o *)item->fields.equipServantEntity;
  levelLabel = (UIRangeLabel_o *)this->fields.levelLabel;
  if ( explanationLabel )
  {
    explanationLabel = (UIRangeLabel_o *)ServantEntity__getName((ServantEntity_o *)explanationLabel, -1, -1, 0LL);
    equipTargetId1 = (System_String_o *)explanationLabel;
    if ( !levelLabel )
      goto LABEL_201;
  }
  else
  {
    equipTargetId1 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !levelLabel )
      goto LABEL_201;
  }
  UIRangeLabel__Set(levelLabel, equipTargetId1, 0LL, 1, 0, 0LL);
  maxLevelLabel = this->fields.maxLevelLabel;
  exp[1] = ServantStatusListViewItem__get_EquipLevel(item, 0LL);
  explanationLabel = (UIRangeLabel_o *)System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !maxLevelLabel )
    goto LABEL_201;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)maxLevelLabel, (System_String_o *)explanationLabel, 0LL);
  attackIconLabel = this->fields.attackIconLabel;
  exp[1] = ServantStatusListViewItem__get_EquipMaxLevel(item, 0LL);
  explanationLabel = (UIRangeLabel_o *)System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !attackIconLabel )
    goto LABEL_201;
  UILabel__set_text((UILabel_o *)attackIconLabel, (System_String_o *)explanationLabel, 0LL);
  expBase = this->fields.expBase;
  exp[1] = ServantStatusListViewItem__get_EquipCost(item, 0LL);
  explanationLabel = (UIRangeLabel_o *)System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !expBase )
    goto LABEL_201;
  UILabel__set_text((UILabel_o *)expBase, (System_String_o *)explanationLabel, 0LL);
  hpIconLabel = this->fields.hpIconLabel;
  explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItem__get_EquipAtk(item, 0LL);
  if ( !hpIconLabel )
    goto LABEL_201;
  UIIconLabel__Set_41886452(hpIconLabel, 5, (int32_t)explanationLabel, 0, 0, 0LL, 0, 0, 0, 0LL);
  costLabel = (UIIconLabel_o *)this->fields.costLabel;
  explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItem__get_EquipHp(item, 0LL);
  if ( !costLabel )
    goto LABEL_201;
  UIIconLabel__Set_41886452(costLabel, 3, (int32_t)explanationLabel, 0, 0, 0LL, 0, 0, 0, 0LL);
  explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItem__GetEquipExpInfo(
                                         item,
                                         exp,
                                         (int32_t *)&barExp[1],
                                         barExp,
                                         0LL);
  if ( !this->fields.lateExpBase )
    goto LABEL_201;
  if ( ((unsigned __int8)explanationLabel & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 1, 0LL);
    explanationLabel = (UIRangeLabel_o *)this->fields.lateExpLabel;
    if ( !explanationLabel )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)explanationLabel, SLODWORD(barExp[1]) > 0, 0LL);
    expBar = (UILabel_o *)this->fields.expBar;
    v44 = LODWORD(barExp[1]);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    explanationLabel = (UIRangeLabel_o *)LocalizationManager__GetNumberFormat(v44, 0LL);
    if ( !expBar )
      goto LABEL_201;
    UILabel__set_text(expBar, (System_String_o *)explanationLabel, 0LL);
    explanationLabel = (UIRangeLabel_o *)this->fields.limitCountGauge;
    if ( !explanationLabel )
      goto LABEL_201;
    UIProgressBar__set_value((UIProgressBar_o *)explanationLabel, barExp[0], 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 0, 0LL);
  }
  lineSprite = this->fields.lineSprite;
  if ( item->fields.equipServantEntity )
  {
    explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItem__get_EquipLimitCount(item, 0LL);
    equipServantEntity = item->fields.equipServantEntity;
    if ( !equipServantEntity || !lineSprite )
      goto LABEL_201;
    limitMax = equipServantEntity->fields.limitMax;
    v48 = (int)explanationLabel;
    v49 = (ServantStatusLimitCountGauge_o *)lineSprite;
  }
  else
  {
    if ( !lineSprite )
      goto LABEL_201;
    v49 = (ServantStatusLimitCountGauge_o *)this->fields.lineSprite;
    v48 = 0;
    limitMax = 0;
  }
  ServantStatusLimitCountGauge__Set(v49, v48, limitMax, 0LL);
  ServantStatusListViewItem__GetEquipSkillInfo(item, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_62;
  equipSkillTitleRangeLabelList = this->fields.equipSkillTitleRangeLabelList;
  if ( !equipSkillTitleRangeLabelList )
    goto LABEL_201;
  v51 = *(_QWORD *)&equipSkillTitleRangeLabelList->max_length;
  if ( v51 << 32 >= 1 )
  {
    max_length = skillInfoList->max_length;
    v53 = 0;
    v54 = 0LL;
    do
    {
      if ( v54 < (int)max_length )
      {
        if ( v54 >= max_length )
        {
LABEL_202:
          v121 = sub_B5D6C8(explanationLabel);
          sub_B5D668(v121, 0LL);
        }
        v55 = skillInfoList->m_Items[v54];
        if ( v55 && v55->fields.id >= 1 )
          v53 = v54 + 1;
      }
      ++v54;
    }
    while ( v54 < (int)v51 );
  }
  else
  {
LABEL_62:
    v53 = 0;
  }
  equipSkillBaseList = (UnityEngine_Object_o *)this->fields.equipSkillBaseList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  explanationLabel = (UIRangeLabel_o *)UnityEngine_Object__op_Inequality(equipSkillBaseList, 0LL, 0LL);
  if ( ((unsigned __int8)explanationLabel & 1) != 0 )
  {
    explanationLabel = (UIRangeLabel_o *)this->fields.equipSkillBaseList;
    if ( !explanationLabel )
      goto LABEL_201;
    explanationLabel = (UIRangeLabel_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)explanationLabel,
                                           0LL);
    if ( !explanationLabel )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)explanationLabel, v53 > 0, 0LL);
  }
  equipSkillIcon = this->fields.equipSkillIcon;
  if ( !equipSkillIcon )
    goto LABEL_201;
  v122 = 0;
  v58 = 0;
  v59 = 4LL;
  v60 = 0x100000000LL;
  while ( 1 )
  {
    v61 = v59 - 4;
    if ( v59 - 4 >= (int)equipSkillIcon->max_length )
      break;
    if ( skillInfoList )
    {
      v62 = skillInfoList->max_length;
      if ( (__int64)v61 < (int)v62 )
      {
        if ( v61 >= v62 )
          goto LABEL_202;
        v63 = *((_QWORD *)&skillInfoList->obj.klass + v59);
        if ( v63 )
        {
          if ( *(int *)(v63 + 16) >= 1 )
          {
            reinforceObject = this->fields.reinforceObject;
            if ( !reinforceObject )
              goto LABEL_201;
            if ( v61 >= LODWORD(reinforceObject[1].klass) )
              goto LABEL_202;
            v65 = ServantStatusListViewItemDrawEquip_TypeInfo;
            v66 = (UILabel_o *)*((_QWORD *)&reinforceObject->klass + v59);
            v67 = *(System_String_o **)(v63 + 40);
            if ( (BYTE3(ServantStatusListViewItemDrawEquip_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
              v65 = ServantStatusListViewItemDrawEquip_TypeInfo;
            }
            explanationLabel = (UIRangeLabel_o *)WrapControlText__textAdjust(
                                                   v66,
                                                   v67,
                                                   v65->static_fields->DETAIL_FONT_SIZE,
                                                   v65->static_fields->DETAIL_FONT_SIZE,
                                                   v65->static_fields->MAX_HEIGHT,
                                                   0LL);
            v68 = this->fields.reinforceObject;
            if ( !v68 )
              goto LABEL_201;
            if ( v61 >= LODWORD(v68[1].klass) )
              goto LABEL_202;
            v69 = *((_QWORD *)&v68->klass + v59);
            if ( !v69 )
              goto LABEL_201;
            y = this->fields.baseSize.fields.y;
            v71 = ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->ADJUST_HEIGHT + *(_DWORD *)(v69 + 164);
            v72 = v71 - LODWORD(y);
            if ( v71 >= SLODWORD(y) )
            {
              if ( !skillInfoList )
                goto LABEL_201;
              v73 = *(_QWORD *)&skillInfoList->max_length;
              v58 += v71;
              if ( v61 == (_DWORD)v73 - 1 )
                goto LABEL_93;
              if ( v59 - 3 >= (unsigned __int64)(unsigned int)v73 )
                goto LABEL_202;
              v74 = *(__int64 *)((char *)skillInfoList->m_Items + (v60 >> 29));
              if ( !v74 || *(int *)(v74 + 16) <= 0 )
LABEL_93:
                v122 |= v72 > 10;
            }
            else
            {
              v58 += LODWORD(y);
            }
          }
        }
      }
    }
    equipSkillIcon = this->fields.equipSkillIcon;
    ++v59;
    v60 += 0x100000000LL;
    if ( !equipSkillIcon )
      goto LABEL_201;
  }
  if ( item->fields._IsDisplayCombineButton_k__BackingField && item->fields.equipServantEntity )
  {
    EquipLevel = ServantStatusListViewItem__get_EquipLevel(item, 0LL);
    if ( EquipLevel < ServantStatusListViewItem__get_EquipMaxLevel(item, 0LL) )
      goto LABEL_101;
    explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItem__get_EquipLimitCount(item, 0LL);
    v76 = item->fields.equipServantEntity;
    if ( !v76 )
      goto LABEL_201;
    if ( (int)explanationLabel < v76->fields.limitMax )
    {
LABEL_101:
      explanationLabel = (UIRangeLabel_o *)this->fields.reinforceButton;
      if ( (v122 & 1) != 0 )
        v77 = 50;
      else
        v77 = 38;
      if ( !explanationLabel )
        goto LABEL_201;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)explanationLabel, 1, 0LL);
      v78 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v78 )
        goto LABEL_201;
      *(_BYTE *)(v78 + 89) = 1;
      explanationLabel = *(UIRangeLabel_o **)&this->fields.skillPitch;
      if ( !explanationLabel )
        goto LABEL_201;
      v58 += v77;
      UICommonButton__SetEnable((UICommonButton_o *)explanationLabel, item->fields._CanMoveCombine_k__BackingField, 0LL);
      if ( v58 >= 0 )
        v79 = v58;
      else
        v79 = v58 + 1;
      GameObjectExtensions__SetLocalPositionY(
        (UnityEngine_GameObject_o *)this->fields.reinforceButton,
        (float)-(v79 >> 1),
        0LL);
    }
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v82 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v84 = x + (float)v58;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    explanationLabel = (UIRangeLabel_o *)this->fields.baseSprite;
    if ( !explanationLabel )
      goto LABEL_201;
    v129.fields.x = z;
    v129.fields.y = v84;
    v129.fields.z = v82;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)explanationLabel, v129, 0LL);
  }
  explanationLabel = (UIRangeLabel_o *)this->fields.titleSprite;
  if ( !explanationLabel )
    goto LABEL_201;
  v85 = z;
  if ( z == INFINITY )
    v85 = -z;
  UIWidget__set_width((UIWidget_o *)explanationLabel, (int)v85, 0LL);
  explanationLabel = (UIRangeLabel_o *)this->fields.titleSprite;
  if ( !explanationLabel )
    goto LABEL_201;
  v86 = v84;
  if ( v84 == INFINITY )
    v86 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)explanationLabel, (int)v86, 0LL);
  explanationLabel = (UIRangeLabel_o *)this->fields.equipButton;
  v87 = v58 >= 0 ? v58 : v58 + 1;
  if ( !explanationLabel )
    goto LABEL_201;
  v88 = this->fields.titleBasePosition.fields.z;
  v89 = this->fields.skillBasePosition.fields.x;
  v90 = this->fields.skillBasePosition.fields.y;
  explanationLabel = (UIRangeLabel_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)explanationLabel,
                                         0LL);
  if ( !explanationLabel
    || (v91 = (float)(v87 >> 1),
        v130.fields.y = v89 + v91,
        v130.fields.x = v88,
        v130.fields.z = v90,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)explanationLabel, v130, 0LL),
        (v92 = this->fields.equipSkillIcon) == 0LL) )
  {
LABEL_201:
    sub_B5D69C(explanationLabel, equipTargetId1);
  }
  g = this->fields.COLOR_INVALID.fields.g;
  v94 = this->fields.skillBasePosition.fields.z;
  v95 = 4LL;
  v96 = this->fields.COLOR_INVALID.fields.r + v91;
  while ( 1 )
  {
    v97 = v92->max_length;
    v98 = v95 - 4;
    if ( (int)v95 - 4 >= v97 )
      break;
    if ( !skillInfoList )
      goto LABEL_151;
    v99 = skillInfoList->max_length;
    if ( (int)v98 >= (int)v99 )
      goto LABEL_151;
    if ( v98 >= v99 )
      goto LABEL_202;
    v100 = skillInfoList->m_Items[v98];
    if ( !v100 || v100->fields.id < 1 )
    {
LABEL_151:
      equipTargetId1 = 0LL;
      goto LABEL_152;
    }
    if ( v98 >= v97 )
      goto LABEL_202;
    explanationLabel = (UIRangeLabel_o *)v92->m_Items[v98];
    if ( !explanationLabel )
      goto LABEL_201;
    explanationLabel = (UIRangeLabel_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)explanationLabel,
                                           0LL);
    if ( !explanationLabel )
      goto LABEL_201;
    v131.fields.x = v94;
    v131.fields.y = v96;
    v131.fields.z = g;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)explanationLabel, v131, 0LL);
    v101 = this->fields.equipSkillTitleRangeLabelList;
    if ( !v101 )
      goto LABEL_201;
    if ( v98 >= v101->max_length )
      goto LABEL_202;
    explanationLabel = v101->m_Items[v98];
    if ( !explanationLabel )
      goto LABEL_201;
    SkillIconComponent__Set((SkillIconComponent_o *)explanationLabel, v100->fields.id, 0LL);
    equipSkillExplanationLabelList = this->fields.equipSkillExplanationLabelList;
    if ( !equipSkillExplanationLabelList )
      goto LABEL_201;
    if ( v98 >= equipSkillExplanationLabelList->max_length )
      goto LABEL_202;
    explanationLabel = (UIRangeLabel_o *)equipSkillExplanationLabelList->m_Items[v98];
    if ( !explanationLabel )
      goto LABEL_201;
    UIRangeLabel__Set(explanationLabel, v100->fields.title, 0LL, 1, 0, 0LL);
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v105 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v104 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v127.fields.currentCryptoKey = v105;
      *(_QWORD *)&v127.fields.fakeValue = v104;
      explanationLabel = (UIRangeLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                             v127,
                                             0LL);
      if ( !item->fields.userSvtEntity )
        goto LABEL_201;
      v106 = (int)explanationLabel;
      Rarity = UserServantEntity__getRarity(item->fields.userSvtEntity, 0LL);
LABEL_171:
      v116 = Rarity;
      goto LABEL_172;
    }
    v113 = item->fields.servantLeaderInfo;
    if ( v113 )
    {
      v115 = *(_QWORD *)&v113->fields.svtId.fields.currentCryptoKey;
      v114 = *(_QWORD *)&v113->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v128.fields.currentCryptoKey = v115;
      *(_QWORD *)&v128.fields.fakeValue = v114;
      explanationLabel = (UIRangeLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                             v128,
                                             0LL);
      if ( !item->fields.servantLeaderInfo )
        goto LABEL_201;
      v106 = (int)explanationLabel;
      Rarity = ServantLeaderInfo__getRarity(item->fields.servantLeaderInfo, 0LL);
      goto LABEL_171;
    }
    v116 = -1;
    v106 = -1;
LABEL_172:
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    explanationLabel = (UIRangeLabel_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !explanationLabel )
      goto LABEL_201;
    explanationLabel = (UIRangeLabel_o *)PartyOrganizationUtility__IsRarityRestriction_32053400(
                                           (PartyOrganizationUtility_o *)explanationLabel,
                                           v106,
                                           v116,
                                           v100->fields.id,
                                           v100->fields.lv,
                                           0LL);
    if ( ((unsigned __int8)explanationLabel & 1) != 0 )
    {
      v117 = this->fields.equipSkillTitleRangeLabelList;
      if ( !v117 )
        goto LABEL_201;
      if ( v98 >= v117->max_length )
        goto LABEL_202;
      explanationLabel = v117->m_Items[v98];
      if ( !explanationLabel )
        goto LABEL_201;
      SkillIconComponent__SetInvalidColor(
        (SkillIconComponent_o *)explanationLabel,
        *(UnityEngine_Color_o *)&this->fields.COLOR_INVALID.fields.b,
        0LL);
      v118 = this->fields.equipSkillExplanationLabelList;
      if ( !v118 )
        goto LABEL_201;
      if ( v98 >= v118->max_length )
        goto LABEL_202;
      explanationLabel = (UIRangeLabel_o *)v118->m_Items[v98];
      if ( !explanationLabel )
        goto LABEL_201;
      UIRangeLabel__set_color(explanationLabel, *(UnityEngine_Color_o *)&this->fields.COLOR_INVALID.fields.b, 0LL);
      v119 = this->fields.reinforceObject;
      if ( !v119 )
        goto LABEL_201;
      if ( v98 >= LODWORD(v119[1].klass) )
        goto LABEL_202;
      explanationLabel = (UIRangeLabel_o *)*((_QWORD *)&v119[1].monitor + (int)v98);
      if ( !explanationLabel )
        goto LABEL_201;
      UIWidget__set_color(
        (UIWidget_o *)explanationLabel,
        *(UnityEngine_Color_o *)&this->fields.COLOR_INVALID.fields.b,
        0LL);
    }
    equipTargetId1 = (System_String_o *)(&dword_0 + 1);
LABEL_152:
    v108 = this->fields.equipSkillIcon;
    if ( !v108 )
      goto LABEL_201;
    if ( v98 >= v108->max_length )
      goto LABEL_202;
    explanationLabel = (UIRangeLabel_o *)*((_QWORD *)&v108->obj.klass + v95);
    if ( explanationLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)explanationLabel, (bool)equipTargetId1, 0LL);
      v109 = this->fields.reinforceObject;
      if ( v109 )
      {
        if ( v98 >= LODWORD(v109[1].klass) )
          goto LABEL_202;
        v110 = *((_QWORD *)&v109->klass + v95);
        if ( v110 )
        {
          explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          v111 = *(_DWORD *)(v110 + 164);
          if ( (BYTE3(ServantStatusListViewItemDrawEquip_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
            explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          }
          ++v95;
          v92 = this->fields.equipSkillIcon;
          LODWORD(v112) = *(_DWORD *)(*(_QWORD *)&explanationLabel[3].fields.m_CachedPtr + 8LL) + v111;
          if ( SLODWORD(v112) < SLODWORD(this->fields.baseSize.fields.y) )
            v112 = this->fields.baseSize.fields.y;
          v96 = v96 - (float)SLODWORD(v112);
          if ( v92 )
            continue;
        }
      }
    }
    goto LABEL_201;
  }
  equipIcon = (UnityEngine_Object_o *)this->fields.equipIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipIcon, 0LL, 0LL) )
  {
    explanationLabel = (UIRangeLabel_o *)(item->fields.isEquipChangeMode
                                       || ServantStatusListViewItem__get_IsEquip(item, 0LL));
    if ( this->fields.equipIcon )
    {
      UICommonButton__SetColliderEnable(
        (UICommonButton_o *)this->fields.equipIcon,
        (unsigned __int8)explanationLabel & 1,
        1,
        0LL);
      return;
    }
    goto LABEL_201;
  }
}