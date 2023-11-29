void __fastcall ServantStatusListViewItemDrawEquip___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FDE98 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItemDrawEquip_TypeInfo, v1);
    byte_40FDE98 = 1;
  }
  ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->MAX_HEIGHT = 500;
  ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawEquip___ctor(
        ServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v16; // x2
  struct UIRangeLabel_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x2
  struct UILabel_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x2
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  float v40; // s4
  float v41; // s5
  float v42; // s6
  __int128 v43; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FDE97 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v4);
    sub_B16FFC(&SkillIconComponent___TypeInfo, v5);
    sub_B16FFC(&UILabel___TypeInfo, v6);
    sub_B16FFC(&UIRangeLabel___TypeInfo, v7);
    byte_40FDE97 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct SkillIconComponent_array *)sub_B17014(
                                            UnityEngine_GameObject___TypeInfo,
                                            (unsigned int)v8->static_fields->SvtEquipSkillListMax,
                                            v2);
  this->fields.equipSkillIcon = v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipSkillIcon,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v17 = (struct UIRangeLabel_array *)sub_B17014(
                                       SkillIconComponent___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax,
                                       v16);
  this->fields.equipSkillTitleRangeLabelList = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipSkillTitleRangeLabelList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v25 = (struct UILabel_array *)sub_B17014(
                                  UIRangeLabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax,
                                  v24);
  this->fields.equipSkillExplanationLabelList = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipSkillExplanationLabelList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v33 = (System_Int32_array **)sub_B17014(
                                 UILabel___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax,
                                 v32);
  *(_QWORD *)&this->fields.skillPitch = v33;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.skillPitch, v33, v34, v35, v36, v37, v38, v39);
  v44.fields.r = 0.32941;
  v43 = 0uLL;
  v44.fields.g = 0.32941;
  v44.fields.b = 0.32941;
  UnityEngine_Color___ctor_40666012(v44, v40, v41, v42, (const MethodInfo *)&v43);
  *(_OWORD *)&this->fields.COLOR_INVALID.fields.b = v43;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawEquip__Awake(
        ServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  struct SkillIconComponent_array *equipSkillIcon; // x8
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
  UnityEngine_Component_o *equipButton; // x0
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

  equipSkillIcon = this->fields.equipSkillIcon;
  if ( !equipSkillIcon )
    goto LABEL_24;
  if ( (int)equipSkillIcon->max_length >= 2 )
  {
    v4 = (UnityEngine_GameObject_o *)equipSkillIcon->m_Items[0];
    if ( !v4 )
      goto LABEL_24;
    transform = UnityEngine_GameObject__get_transform(v4, 0LL);
    if ( !transform )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
    v10 = this->fields.equipSkillIcon;
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
    equipSkillIcon = this->fields.equipSkillIcon;
    v15 = (float)(v12 - localPosition.fields.y) == INFINITY ? -v14 : v14;
    LODWORD(this->fields.baseSize.fields.y) = (int)v15;
    if ( !equipSkillIcon )
      goto LABEL_24;
  }
  titleSprite = this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_24;
  equipButton = (UnityEngine_Component_o *)this->fields.equipButton;
  v18 = LODWORD(this->fields.baseSize.fields.y) * equipSkillIcon->max_length;
  v19 = (float)(titleSprite->fields.mHeight - v18);
  this->fields.baseSize.fields.z = (float)titleSprite->fields.mWidth;
  this->fields.titleBasePosition.fields.x = v19;
  this->fields.titleBasePosition.fields.y = 0.0;
  if ( !equipButton )
    goto LABEL_24;
  v20 = UnityEngine_Component__get_transform(equipButton, 0LL);
  if ( !v20 )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_localPosition(v20, 0LL);
  v24 = this->fields.equipSkillIcon;
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
  this->fields.COLOR_INVALID.fields.r = v30.fields.y - v26;
  this->fields.COLOR_INVALID.fields.g = v30.fields.z;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct UIRangeLabel_o *nameRangeLabel; // x21
  System_String_o *v15; // x0
  __int64 equipTargetId1; // x1
  ServantFaceIconComponent_o *explanationLabel; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v20; // x21
  __int64 v21; // x22
  int32_t v22; // w0
  struct UILabel_o *v23; // x8
  struct ServantLeaderInfo_o *v24; // x9
  ServantEntity_o *equipServantEntity; // x0
  UIRangeLabel_o *levelLabel; // x21
  System_String_o *Name; // x1
  struct UILabel_o *maxLevelLabel; // x21
  System_String_o *v29; // x0
  struct UIIconLabel_o *attackIconLabel; // x21
  System_String_o *v31; // x0
  struct UnityEngine_GameObject_o *expBase; // x21
  System_String_o *v33; // x0
  UIIconLabel_o *hpIconLabel; // x21
  int32_t EquipAtk; // w0
  UIIconLabel_o *costLabel; // x21
  int32_t EquipHp; // w0
  bool EquipExpInfo; // w0
  UnityEngine_GameObject_o *lateExpLabel; // x0
  UILabel_o *expBar; // x21
  int32_t v41; // w22
  System_String_o *NumberFormat; // x0
  struct ServantStatusLimitCountGauge_o *limitCountGauge; // x0
  struct UISprite_o *lineSprite; // x21
  int32_t EquipLimitCount; // w0
  struct ServantEntity_o *v46; // x8
  int32_t limitMax; // w2
  int32_t v48; // w1
  ServantStatusLimitCountGauge_o *v49; // x0
  ServantStatusListViewItemDrawEquip_c *IsRarityRestriction_32530996; // x0
  _BOOL8 v51; // x1
  __int64 v52; // x2
  struct UIRangeLabel_array *equipSkillTitleRangeLabelList; // x8
  __int64 v54; // x10
  unsigned __int64 max_length; // x9
  int v56; // w22
  signed __int64 v57; // x8
  SkillInfo_o *v58; // x13
  UnityEngine_Object_o *equipSkillBaseList; // x21
  UnityEngine_Component_o *v60; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct SkillIconComponent_array *equipSkillIcon; // x8
  int v63; // w23
  __int64 v64; // x25
  unsigned __int64 v65; // x26
  unsigned __int64 v66; // x9
  __int64 v67; // x8
  __int64 v68; // x9
  ServantStatusListViewItemDrawEquip_c *v69; // x0
  UILabel_o *v70; // x21
  System_String_o *v71; // x22
  __int64 v72; // x8
  __int64 v73; // x8
  int v74; // w10
  float y; // w8
  int v76; // w9
  float x; // s8
  float z; // s9
  float v79; // s10
  UnityEngine_Object_o *baseSprite; // x21
  float v81; // s8
  UnityEngine_BoxCollider_o *v82; // x0
  UIWidget_o *titleSprite; // x0
  double v84; // d0
  UIWidget_o *v85; // x0
  double v86; // d0
  UnityEngine_Component_o *equipButton; // x0
  int v88; // w21
  float v89; // s8
  float v90; // s11
  float v91; // s9
  UnityEngine_Transform_o *transform; // x0
  float v93; // s10
  struct SkillIconComponent_array *v94; // x8
  float g; // s8
  float v96; // s9
  __int64 v97; // x25
  float v98; // s10
  int v99; // w9
  il2cpp_array_size_t v100; // w23
  il2cpp_array_size_t v101; // w11
  SkillInfo_o *v102; // x27
  UnityEngine_GameObject_o *v103; // x0
  UnityEngine_Transform_o *v104; // x0
  struct UIRangeLabel_array *v105; // x8
  SkillIconComponent_o *v106; // x0
  struct UILabel_array *equipSkillExplanationLabelList; // x8
  UIRangeLabel_o *v108; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v110; // x21
  __int64 v111; // x22
  int32_t v112; // w0
  int32_t v113; // w21
  int32_t Rarity; // w0
  struct SkillIconComponent_array *v115; // x8
  UnityEngine_GameObject_o *v116; // x0
  __int64 v117; // x8
  __int64 v118; // x8
  int v119; // w21
  float v120; // w9
  struct ServantLeaderInfo_o *v121; // x8
  __int64 v122; // x21
  __int64 v123; // x22
  int32_t v124; // w0
  int32_t v125; // w22
  PartyOrganizationUtility_o *v126; // x0
  struct UIRangeLabel_array *v127; // x8
  SkillIconComponent_o *v128; // x0
  struct UILabel_array *v129; // x8
  UIRangeLabel_o *v130; // x0
  __int64 v131; // x8
  UIWidget_o *v132; // x0
  UnityEngine_Object_o *equipIcon; // x21
  bool v134; // w0
  float barExp[2]; // [xsp+18h] [xbp-88h] BYREF
  int32_t exp[2]; // [xsp+20h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16
  UnityEngine_Vector3_o v141; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v143; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDE96 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&ServantStatusListViewItemDrawEquip_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v11);
    sub_B16FFC(&StringLiteral_11917, v12);
    sub_B16FFC(&StringLiteral_1, v13);
    byte_40FDE96 = 1;
  }
  *(_QWORD *)exp = 0LL;
  skillInfoList = 0LL;
  *(_QWORD *)barExp = 0LL;
  LODWORD(this->fields.baseButton) = mode;
  if ( !item || !mode )
    return;
  nameRangeLabel = this->fields.nameRangeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11917, 0LL);
  if ( !nameRangeLabel )
    goto LABEL_181;
  UILabel__set_text((UILabel_o *)nameRangeLabel, v15, 0LL);
  if ( item->fields.userSvtEntity )
  {
    equipTargetId1 = item->fields.equipTargetId1;
    explanationLabel = (ServantFaceIconComponent_o *)this->fields.explanationLabel;
    if ( equipTargetId1 >= 1 )
    {
      if ( !explanationLabel )
        goto LABEL_181;
      ServantFaceIconComponent__Set_30705604(explanationLabel, equipTargetId1, 0LL, 0LL, 0LL);
      goto LABEL_26;
    }
    if ( !explanationLabel )
      goto LABEL_181;
LABEL_25:
    ServantFaceIconComponent__NoMount(explanationLabel, 0LL);
    goto LABEL_26;
  }
  servantLeaderInfo = item->fields.servantLeaderInfo;
  if ( !servantLeaderInfo || (equipTarget1 = servantLeaderInfo->fields.equipTarget1) == 0LL )
  {
    explanationLabel = (ServantFaceIconComponent_o *)this->fields.explanationLabel;
    if ( !explanationLabel )
      goto LABEL_181;
    goto LABEL_25;
  }
  v21 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v138.fields.currentCryptoKey = v21;
  *(_QWORD *)&v138.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v138, 0LL);
  v23 = this->fields.explanationLabel;
  if ( v22 < 1 )
  {
    if ( !v23 )
      goto LABEL_181;
    explanationLabel = (ServantFaceIconComponent_o *)this->fields.explanationLabel;
    goto LABEL_25;
  }
  v24 = item->fields.servantLeaderInfo;
  if ( !v24 || !v23 )
    goto LABEL_181;
  ServantFaceIconComponent__Set_30710412(
    (ServantFaceIconComponent_o *)this->fields.explanationLabel,
    v24->fields.equipTarget1,
    0LL,
    0LL,
    0LL);
LABEL_26:
  equipServantEntity = item->fields.equipServantEntity;
  levelLabel = (UIRangeLabel_o *)this->fields.levelLabel;
  if ( equipServantEntity )
  {
    Name = ServantEntity__getName(equipServantEntity, -1, -1, 0LL);
    if ( !levelLabel )
      goto LABEL_181;
  }
  else
  {
    Name = (System_String_o *)StringLiteral_1;
    if ( !levelLabel )
      goto LABEL_181;
  }
  UIRangeLabel__Set(levelLabel, Name, 0LL, 1, 0, 0LL);
  maxLevelLabel = this->fields.maxLevelLabel;
  exp[1] = ServantStatusListViewItem__get_EquipLevel(item, 0LL);
  v29 = System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !maxLevelLabel )
    goto LABEL_181;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)maxLevelLabel, v29, 0LL);
  attackIconLabel = this->fields.attackIconLabel;
  exp[1] = ServantStatusListViewItem__get_EquipMaxLevel(item, 0LL);
  v31 = System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !attackIconLabel )
    goto LABEL_181;
  UILabel__set_text((UILabel_o *)attackIconLabel, v31, 0LL);
  expBase = this->fields.expBase;
  exp[1] = ServantStatusListViewItem__get_EquipCost(item, 0LL);
  v33 = System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !expBase )
    goto LABEL_181;
  UILabel__set_text((UILabel_o *)expBase, v33, 0LL);
  hpIconLabel = this->fields.hpIconLabel;
  EquipAtk = ServantStatusListViewItem__get_EquipAtk(item, 0LL);
  if ( !hpIconLabel )
    goto LABEL_181;
  UIIconLabel__Set_40377052(hpIconLabel, 5, EquipAtk, 0, 0, 0LL, 0, 0, 0, 0LL);
  costLabel = (UIIconLabel_o *)this->fields.costLabel;
  EquipHp = ServantStatusListViewItem__get_EquipHp(item, 0LL);
  if ( !costLabel )
    goto LABEL_181;
  UIIconLabel__Set_40377052(costLabel, 3, EquipHp, 0, 0, 0LL, 0, 0, 0, 0LL);
  EquipExpInfo = ServantStatusListViewItem__GetEquipExpInfo(item, exp, (int32_t *)&barExp[1], barExp, 0LL);
  if ( !this->fields.lateExpBase )
    goto LABEL_181;
  if ( EquipExpInfo )
  {
    UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 1, 0LL);
    lateExpLabel = (UnityEngine_GameObject_o *)this->fields.lateExpLabel;
    if ( !lateExpLabel )
      goto LABEL_181;
    UnityEngine_GameObject__SetActive(lateExpLabel, SLODWORD(barExp[1]) > 0, 0LL);
    expBar = (UILabel_o *)this->fields.expBar;
    v41 = LODWORD(barExp[1]);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    NumberFormat = LocalizationManager__GetNumberFormat(v41, 0LL);
    if ( !expBar )
      goto LABEL_181;
    UILabel__set_text(expBar, NumberFormat, 0LL);
    limitCountGauge = this->fields.limitCountGauge;
    if ( !limitCountGauge )
      goto LABEL_181;
    UIProgressBar__set_value((UIProgressBar_o *)limitCountGauge, barExp[0], 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 0, 0LL);
  }
  lineSprite = this->fields.lineSprite;
  if ( item->fields.equipServantEntity )
  {
    EquipLimitCount = ServantStatusListViewItem__get_EquipLimitCount(item, 0LL);
    v46 = item->fields.equipServantEntity;
    if ( !v46 || !lineSprite )
      goto LABEL_181;
    limitMax = v46->fields.limitMax;
    v48 = EquipLimitCount;
    v49 = (ServantStatusLimitCountGauge_o *)lineSprite;
  }
  else
  {
    if ( !lineSprite )
      goto LABEL_181;
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
    goto LABEL_181;
  v54 = *(_QWORD *)&equipSkillTitleRangeLabelList->max_length;
  if ( v54 << 32 >= 1 )
  {
    max_length = skillInfoList->max_length;
    v56 = 0;
    v57 = 0LL;
    do
    {
      if ( v57 < (int)max_length )
      {
        if ( v57 >= max_length )
        {
LABEL_182:
          sub_B17100(IsRarityRestriction_32530996, v51, v52);
          sub_B170A0();
        }
        v58 = skillInfoList->m_Items[v57];
        if ( v58 && v58->fields.id >= 1 )
          v56 = v57 + 1;
      }
      ++v57;
    }
    while ( v57 < (int)v54 );
  }
  else
  {
LABEL_62:
    v56 = 0;
  }
  equipSkillBaseList = (UnityEngine_Object_o *)this->fields.equipSkillBaseList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  IsRarityRestriction_32530996 = (ServantStatusListViewItemDrawEquip_c *)UnityEngine_Object__op_Inequality(
                                                                           equipSkillBaseList,
                                                                           0LL,
                                                                           0LL);
  if ( ((unsigned __int8)IsRarityRestriction_32530996 & 1) != 0 )
  {
    v60 = (UnityEngine_Component_o *)this->fields.equipSkillBaseList;
    if ( !v60 )
      goto LABEL_181;
    gameObject = UnityEngine_Component__get_gameObject(v60, 0LL);
    if ( !gameObject )
      goto LABEL_181;
    UnityEngine_GameObject__SetActive(gameObject, v56 > 0, 0LL);
  }
  equipSkillIcon = this->fields.equipSkillIcon;
  if ( !equipSkillIcon )
    goto LABEL_181;
  v63 = 0;
  v64 = 4LL;
  while ( 1 )
  {
    v65 = v64 - 4;
    if ( v64 - 4 >= (int)equipSkillIcon->max_length )
      break;
    if ( skillInfoList )
    {
      v66 = skillInfoList->max_length;
      if ( (__int64)v65 < (int)v66 )
      {
        if ( v65 >= v66 )
          goto LABEL_182;
        v67 = *((_QWORD *)&skillInfoList->obj.klass + v64);
        if ( v67 )
        {
          if ( *(int *)(v67 + 16) >= 1 )
          {
            v68 = *(_QWORD *)&this->fields.skillPitch;
            if ( !v68 )
              goto LABEL_181;
            if ( v65 >= *(unsigned int *)(v68 + 24) )
              goto LABEL_182;
            v69 = ServantStatusListViewItemDrawEquip_TypeInfo;
            v70 = *(UILabel_o **)(v68 + 8 * v64);
            v71 = *(System_String_o **)(v67 + 40);
            if ( (BYTE3(ServantStatusListViewItemDrawEquip_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
              v69 = ServantStatusListViewItemDrawEquip_TypeInfo;
            }
            IsRarityRestriction_32530996 = (ServantStatusListViewItemDrawEquip_c *)WrapControlText__textAdjust(
                                                                                     v70,
                                                                                     v71,
                                                                                     v69->static_fields->DETAIL_FONT_SIZE,
                                                                                     v69->static_fields->DETAIL_FONT_SIZE,
                                                                                     v69->static_fields->MAX_HEIGHT,
                                                                                     0LL);
            v72 = *(_QWORD *)&this->fields.skillPitch;
            if ( !v72 )
              goto LABEL_181;
            if ( v65 >= *(unsigned int *)(v72 + 24) )
              goto LABEL_182;
            v73 = *(_QWORD *)(v72 + 8 * v64);
            if ( !v73 )
              goto LABEL_181;
            v74 = *(_DWORD *)(v73 + 164);
            y = this->fields.baseSize.fields.y;
            v76 = ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->ADJUST_HEIGHT + v74;
            if ( v76 >= SLODWORD(y) )
              v63 += v76;
            else
              v63 += LODWORD(y);
          }
        }
      }
    }
    equipSkillIcon = this->fields.equipSkillIcon;
    ++v64;
    if ( !equipSkillIcon )
      goto LABEL_181;
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v79 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v81 = x + (float)v63;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v82 = (UnityEngine_BoxCollider_o *)this->fields.baseSprite;
    if ( !v82 )
      goto LABEL_181;
    v141.fields.x = z;
    v141.fields.y = v81;
    v141.fields.z = v79;
    UnityEngine_BoxCollider__set_size(v82, v141, 0LL);
  }
  titleSprite = (UIWidget_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_181;
  v84 = z;
  if ( z == INFINITY )
    v84 = -z;
  UIWidget__set_width(titleSprite, (int)v84, 0LL);
  v85 = (UIWidget_o *)this->fields.titleSprite;
  if ( !v85 )
    goto LABEL_181;
  v86 = v81;
  if ( v81 == INFINITY )
    v86 = -INFINITY;
  UIWidget__set_height(v85, (int)v86, 0LL);
  equipButton = (UnityEngine_Component_o *)this->fields.equipButton;
  v88 = v63 >= 0 ? v63 : v63 + 1;
  if ( !equipButton )
    goto LABEL_181;
  v89 = this->fields.titleBasePosition.fields.z;
  v90 = this->fields.skillBasePosition.fields.x;
  v91 = this->fields.skillBasePosition.fields.y;
  transform = UnityEngine_Component__get_transform(equipButton, 0LL);
  if ( !transform
    || (v93 = (float)(v88 >> 1),
        v142.fields.y = v90 + v93,
        v142.fields.x = v89,
        v142.fields.z = v91,
        UnityEngine_Transform__set_localPosition(transform, v142, 0LL),
        (v94 = this->fields.equipSkillIcon) == 0LL) )
  {
LABEL_181:
    sub_B170D4();
  }
  g = this->fields.COLOR_INVALID.fields.g;
  v96 = this->fields.skillBasePosition.fields.z;
  v97 = 4LL;
  v98 = this->fields.COLOR_INVALID.fields.r + v93;
  while ( 1 )
  {
    v99 = v94->max_length;
    v100 = v97 - 4;
    if ( (int)v97 - 4 >= v99 )
      break;
    if ( !skillInfoList )
      goto LABEL_131;
    v101 = skillInfoList->max_length;
    if ( (int)v100 >= (int)v101 )
      goto LABEL_131;
    if ( v100 >= v101 )
      goto LABEL_182;
    v102 = skillInfoList->m_Items[v100];
    if ( !v102 || v102->fields.id < 1 )
    {
LABEL_131:
      v51 = 0LL;
      goto LABEL_132;
    }
    if ( v100 >= v99 )
      goto LABEL_182;
    v103 = (UnityEngine_GameObject_o *)v94->m_Items[v100];
    if ( !v103 )
      goto LABEL_181;
    v104 = UnityEngine_GameObject__get_transform(v103, 0LL);
    if ( !v104 )
      goto LABEL_181;
    v143.fields.x = v96;
    v143.fields.y = v98;
    v143.fields.z = g;
    UnityEngine_Transform__set_localPosition(v104, v143, 0LL);
    v105 = this->fields.equipSkillTitleRangeLabelList;
    if ( !v105 )
      goto LABEL_181;
    if ( v100 >= v105->max_length )
      goto LABEL_182;
    v106 = (SkillIconComponent_o *)v105->m_Items[v100];
    if ( !v106 )
      goto LABEL_181;
    SkillIconComponent__Set(v106, v102->fields.id, 0LL);
    equipSkillExplanationLabelList = this->fields.equipSkillExplanationLabelList;
    if ( !equipSkillExplanationLabelList )
      goto LABEL_181;
    if ( v100 >= equipSkillExplanationLabelList->max_length )
      goto LABEL_182;
    v108 = (UIRangeLabel_o *)equipSkillExplanationLabelList->m_Items[v100];
    if ( !v108 )
      goto LABEL_181;
    UIRangeLabel__Set(v108, v102->fields.title, 0LL, 1, 0, 0LL);
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v111 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v110 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v139.fields.currentCryptoKey = v111;
      *(_QWORD *)&v139.fields.fakeValue = v110;
      v112 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v139, 0LL);
      if ( !item->fields.userSvtEntity )
        goto LABEL_181;
      v113 = v112;
      Rarity = UserServantEntity__getRarity(item->fields.userSvtEntity, 0LL);
LABEL_151:
      v125 = Rarity;
      goto LABEL_152;
    }
    v121 = item->fields.servantLeaderInfo;
    if ( v121 )
    {
      v123 = *(_QWORD *)&v121->fields.svtId.fields.currentCryptoKey;
      v122 = *(_QWORD *)&v121->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v140.fields.currentCryptoKey = v123;
      *(_QWORD *)&v140.fields.fakeValue = v122;
      v124 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v140, 0LL);
      if ( !item->fields.servantLeaderInfo )
        goto LABEL_181;
      v113 = v124;
      Rarity = ServantLeaderInfo__getRarity(item->fields.servantLeaderInfo, 0LL);
      goto LABEL_151;
    }
    v125 = -1;
    v113 = -1;
LABEL_152:
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v126 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v126 )
      goto LABEL_181;
    IsRarityRestriction_32530996 = (ServantStatusListViewItemDrawEquip_c *)PartyOrganizationUtility__IsRarityRestriction_32530996(
                                                                             v126,
                                                                             v113,
                                                                             v125,
                                                                             v102->fields.id,
                                                                             v102->fields.lv,
                                                                             0LL);
    if ( ((unsigned __int8)IsRarityRestriction_32530996 & 1) != 0 )
    {
      v127 = this->fields.equipSkillTitleRangeLabelList;
      if ( !v127 )
        goto LABEL_181;
      if ( v100 >= v127->max_length )
        goto LABEL_182;
      v128 = (SkillIconComponent_o *)v127->m_Items[v100];
      if ( !v128 )
        goto LABEL_181;
      SkillIconComponent__SetInvalidColor(v128, *(UnityEngine_Color_o *)&this->fields.COLOR_INVALID.fields.b, 0LL);
      v129 = this->fields.equipSkillExplanationLabelList;
      if ( !v129 )
        goto LABEL_181;
      if ( v100 >= v129->max_length )
        goto LABEL_182;
      v130 = (UIRangeLabel_o *)v129->m_Items[v100];
      if ( !v130 )
        goto LABEL_181;
      UIRangeLabel__set_color(v130, *(UnityEngine_Color_o *)&this->fields.COLOR_INVALID.fields.b, 0LL);
      v131 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v131 )
        goto LABEL_181;
      if ( v100 >= *(_DWORD *)(v131 + 24) )
        goto LABEL_182;
      v132 = *(UIWidget_o **)(v131 + 8LL * (int)v100 + 32);
      if ( !v132 )
        goto LABEL_181;
      UIWidget__set_color(v132, *(UnityEngine_Color_o *)&this->fields.COLOR_INVALID.fields.b, 0LL);
    }
    v51 = 1LL;
LABEL_132:
    v115 = this->fields.equipSkillIcon;
    if ( !v115 )
      goto LABEL_181;
    if ( v100 >= v115->max_length )
      goto LABEL_182;
    v116 = (UnityEngine_GameObject_o *)*((_QWORD *)&v115->obj.klass + v97);
    if ( v116 )
    {
      UnityEngine_GameObject__SetActive(v116, v51, 0LL);
      v117 = *(_QWORD *)&this->fields.skillPitch;
      if ( v117 )
      {
        if ( v100 >= *(_DWORD *)(v117 + 24) )
          goto LABEL_182;
        v118 = *(_QWORD *)(v117 + 8 * v97);
        if ( v118 )
        {
          IsRarityRestriction_32530996 = ServantStatusListViewItemDrawEquip_TypeInfo;
          v119 = *(_DWORD *)(v118 + 164);
          if ( (BYTE3(ServantStatusListViewItemDrawEquip_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
            IsRarityRestriction_32530996 = ServantStatusListViewItemDrawEquip_TypeInfo;
          }
          ++v97;
          v94 = this->fields.equipSkillIcon;
          LODWORD(v120) = IsRarityRestriction_32530996->static_fields->ADJUST_HEIGHT + v119;
          if ( SLODWORD(v120) < SLODWORD(this->fields.baseSize.fields.y) )
            v120 = this->fields.baseSize.fields.y;
          v98 = v98 - (float)SLODWORD(v120);
          if ( v94 )
            continue;
        }
      }
    }
    goto LABEL_181;
  }
  equipIcon = (UnityEngine_Object_o *)this->fields.equipIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipIcon, 0LL, 0LL) )
  {
    v134 = item->fields.isEquipChangeMode || ServantStatusListViewItem__get_IsEquip(item, 0LL);
    if ( this->fields.equipIcon )
    {
      UICommonButton__SetColliderEnable((UICommonButton_o *)this->fields.equipIcon, v134, 1, 0LL);
      return;
    }
    goto LABEL_181;
  }
}