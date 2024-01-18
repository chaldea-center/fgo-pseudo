void __fastcall ServantStatusListViewItemDrawEquip___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A7C0 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItemDrawEquip_TypeInfo, v1);
    byte_418A7C0 = 1;
  }
  ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->MAX_HEIGHT = 500;
  ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawEquip___ctor(
        ServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct SkillIconComponent_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct UIRangeLabel_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UILabel_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  float v36; // s4
  float v37; // s5
  float v38; // s6
  __int128 v39; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A7BF & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&UnityEngine_GameObject___TypeInfo, v3);
    sub_B2C35C(&SkillIconComponent___TypeInfo, v4);
    sub_B2C35C(&UILabel___TypeInfo, v5);
    sub_B2C35C(&UIRangeLabel___TypeInfo, v6);
    byte_418A7BF = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct SkillIconComponent_array *)sub_B2C374(
                                            UnityEngine_GameObject___TypeInfo,
                                            (unsigned int)v7->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillIcon = v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipSkillIcon,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (struct UIRangeLabel_array *)sub_B2C374(
                                       SkillIconComponent___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillTitleRangeLabelList = v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipSkillTitleRangeLabelList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (struct UILabel_array *)sub_B2C374(
                                  UIRangeLabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillExplanationLabelList = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipSkillExplanationLabelList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Int32_array **)sub_B2C374(
                                 UILabel___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  *(_QWORD *)&this->fields.skillPitch = v29;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.skillPitch, v29, v30, v31, v32, v33, v34, v35);
  v40.fields.r = 0.32941;
  v39 = 0uLL;
  v40.fields.g = 0.32941;
  v40.fields.b = 0.32941;
  UnityEngine_Color___ctor_40633184(v40, v36, v37, v38, (const MethodInfo *)&v39);
  *(_OWORD *)&this->fields.COLOR_INVALID.fields.b = v39;
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
    sub_B2C434(this, method);
  if ( !v15->max_length )
  {
LABEL_25:
    v18 = sub_B2C460(this);
    sub_B2C400(v18, 0LL);
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
  v3->fields.COLOR_INVALID.fields.r = v20.fields.y - v17;
  v3->fields.COLOR_INVALID.fields.g = v20.fields.z;
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
  UIRangeLabel_o *explanationLabel; // x0
  System_String_o *equipTargetId1; // x1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v19; // x21
  __int64 v20; // x22
  struct UILabel_o *v21; // x8
  struct ServantLeaderInfo_o *v22; // x9
  UIRangeLabel_o *levelLabel; // x21
  struct UILabel_o *maxLevelLabel; // x21
  struct UIIconLabel_o *attackIconLabel; // x21
  struct UnityEngine_GameObject_o *expBase; // x21
  UIIconLabel_o *hpIconLabel; // x21
  UIIconLabel_o *costLabel; // x21
  UILabel_o *expBar; // x21
  int32_t v30; // w22
  struct UISprite_o *lineSprite; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t limitMax; // w2
  int32_t v34; // w1
  ServantStatusLimitCountGauge_o *v35; // x0
  struct UIRangeLabel_array *equipSkillTitleRangeLabelList; // x8
  __int64 v37; // x10
  unsigned __int64 max_length; // x9
  int v39; // w22
  signed __int64 v40; // x8
  SkillInfo_o *v41; // x13
  UnityEngine_Object_o *equipSkillBaseList; // x21
  struct SkillIconComponent_array *equipSkillIcon; // x8
  int v44; // w23
  __int64 v45; // x25
  unsigned __int64 v46; // x26
  unsigned __int64 v47; // x9
  __int64 v48; // x8
  __int64 v49; // x9
  ServantStatusListViewItemDrawEquip_c *v50; // x0
  UILabel_o *v51; // x21
  System_String_o *v52; // x22
  __int64 v53; // x8
  __int64 v54; // x8
  int v55; // w10
  float y; // w8
  int v57; // w9
  float x; // s8
  float z; // s9
  float v60; // s10
  UnityEngine_Object_o *baseSprite; // x21
  float v62; // s8
  double v63; // d0
  double v64; // d0
  int v65; // w21
  float v66; // s8
  float v67; // s11
  float v68; // s9
  float v69; // s10
  struct SkillIconComponent_array *v70; // x8
  float g; // s8
  float v72; // s9
  __int64 v73; // x25
  float v74; // s10
  int v75; // w9
  il2cpp_array_size_t v76; // w23
  il2cpp_array_size_t v77; // w11
  SkillInfo_o *v78; // x27
  struct UIRangeLabel_array *v79; // x8
  struct UILabel_array *equipSkillExplanationLabelList; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v82; // x21
  __int64 v83; // x22
  int32_t v84; // w21
  int32_t Rarity; // w0
  struct SkillIconComponent_array *v86; // x8
  __int64 v87; // x8
  __int64 v88; // x8
  int v89; // w21
  float v90; // w9
  struct ServantLeaderInfo_o *v91; // x8
  __int64 v92; // x21
  __int64 v93; // x22
  int32_t v94; // w22
  struct UIRangeLabel_array *v95; // x8
  struct UILabel_array *v96; // x8
  __int64 v97; // x8
  UnityEngine_Object_o *equipIcon; // x21
  __int64 v99; // x0
  float barExp[2]; // [xsp+18h] [xbp-88h] BYREF
  int32_t exp[2]; // [xsp+20h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A7BE & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&ServantStatusListViewItemDrawEquip_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v11);
    sub_B2C35C(&StringLiteral_11967/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_418A7BE = 1;
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
  explanationLabel = (UIRangeLabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11967/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, 0LL);
  if ( !nameRangeLabel )
    goto LABEL_181;
  UILabel__set_text((UILabel_o *)nameRangeLabel, (System_String_o *)explanationLabel, 0LL);
  if ( item->fields.userSvtEntity )
  {
    equipTargetId1 = (System_String_o *)item->fields.equipTargetId1;
    explanationLabel = (UIRangeLabel_o *)this->fields.explanationLabel;
    if ( (__int64)equipTargetId1 >= 1 )
    {
      if ( !explanationLabel )
        goto LABEL_181;
      ServantFaceIconComponent__Set_30793276(
        (ServantFaceIconComponent_o *)explanationLabel,
        (int64_t)equipTargetId1,
        0LL,
        0LL,
        0LL);
      goto LABEL_26;
    }
    if ( !explanationLabel )
      goto LABEL_181;
LABEL_25:
    ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)explanationLabel, 0LL);
    goto LABEL_26;
  }
  servantLeaderInfo = item->fields.servantLeaderInfo;
  if ( !servantLeaderInfo || (equipTarget1 = servantLeaderInfo->fields.equipTarget1) == 0LL )
  {
    explanationLabel = (UIRangeLabel_o *)this->fields.explanationLabel;
    if ( !explanationLabel )
      goto LABEL_181;
    goto LABEL_25;
  }
  v20 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v103.fields.currentCryptoKey = v20;
  *(_QWORD *)&v103.fields.fakeValue = v19;
  explanationLabel = (UIRangeLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v103, 0LL);
  v21 = this->fields.explanationLabel;
  if ( (int)explanationLabel < 1 )
  {
    if ( !v21 )
      goto LABEL_181;
    explanationLabel = (UIRangeLabel_o *)this->fields.explanationLabel;
    goto LABEL_25;
  }
  v22 = item->fields.servantLeaderInfo;
  if ( !v22 || !v21 )
    goto LABEL_181;
  ServantFaceIconComponent__Set_30798084(
    (ServantFaceIconComponent_o *)this->fields.explanationLabel,
    v22->fields.equipTarget1,
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
      goto LABEL_181;
  }
  else
  {
    equipTargetId1 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !levelLabel )
      goto LABEL_181;
  }
  UIRangeLabel__Set(levelLabel, equipTargetId1, 0LL, 1, 0, 0LL);
  maxLevelLabel = this->fields.maxLevelLabel;
  exp[1] = ServantStatusListViewItem__get_EquipLevel(item, 0LL);
  explanationLabel = (UIRangeLabel_o *)System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !maxLevelLabel )
    goto LABEL_181;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)maxLevelLabel, (System_String_o *)explanationLabel, 0LL);
  attackIconLabel = this->fields.attackIconLabel;
  exp[1] = ServantStatusListViewItem__get_EquipMaxLevel(item, 0LL);
  explanationLabel = (UIRangeLabel_o *)System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !attackIconLabel )
    goto LABEL_181;
  UILabel__set_text((UILabel_o *)attackIconLabel, (System_String_o *)explanationLabel, 0LL);
  expBase = this->fields.expBase;
  exp[1] = ServantStatusListViewItem__get_EquipCost(item, 0LL);
  explanationLabel = (UIRangeLabel_o *)System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !expBase )
    goto LABEL_181;
  UILabel__set_text((UILabel_o *)expBase, (System_String_o *)explanationLabel, 0LL);
  hpIconLabel = this->fields.hpIconLabel;
  explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItem__get_EquipAtk(item, 0LL);
  if ( !hpIconLabel )
    goto LABEL_181;
  UIIconLabel__Set_41609428(hpIconLabel, 5, (int32_t)explanationLabel, 0, 0, 0LL, 0, 0, 0, 0LL);
  costLabel = (UIIconLabel_o *)this->fields.costLabel;
  explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItem__get_EquipHp(item, 0LL);
  if ( !costLabel )
    goto LABEL_181;
  UIIconLabel__Set_41609428(costLabel, 3, (int32_t)explanationLabel, 0, 0, 0LL, 0, 0, 0, 0LL);
  explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItem__GetEquipExpInfo(
                                         item,
                                         exp,
                                         (int32_t *)&barExp[1],
                                         barExp,
                                         0LL);
  if ( !this->fields.lateExpBase )
    goto LABEL_181;
  if ( ((unsigned __int8)explanationLabel & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 1, 0LL);
    explanationLabel = (UIRangeLabel_o *)this->fields.lateExpLabel;
    if ( !explanationLabel )
      goto LABEL_181;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)explanationLabel, SLODWORD(barExp[1]) > 0, 0LL);
    expBar = (UILabel_o *)this->fields.expBar;
    v30 = LODWORD(barExp[1]);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    explanationLabel = (UIRangeLabel_o *)LocalizationManager__GetNumberFormat(v30, 0LL);
    if ( !expBar )
      goto LABEL_181;
    UILabel__set_text(expBar, (System_String_o *)explanationLabel, 0LL);
    explanationLabel = (UIRangeLabel_o *)this->fields.limitCountGauge;
    if ( !explanationLabel )
      goto LABEL_181;
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
      goto LABEL_181;
    limitMax = equipServantEntity->fields.limitMax;
    v34 = (int)explanationLabel;
    v35 = (ServantStatusLimitCountGauge_o *)lineSprite;
  }
  else
  {
    if ( !lineSprite )
      goto LABEL_181;
    v35 = (ServantStatusLimitCountGauge_o *)this->fields.lineSprite;
    v34 = 0;
    limitMax = 0;
  }
  ServantStatusLimitCountGauge__Set(v35, v34, limitMax, 0LL);
  ServantStatusListViewItem__GetEquipSkillInfo(item, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_62;
  equipSkillTitleRangeLabelList = this->fields.equipSkillTitleRangeLabelList;
  if ( !equipSkillTitleRangeLabelList )
    goto LABEL_181;
  v37 = *(_QWORD *)&equipSkillTitleRangeLabelList->max_length;
  if ( v37 << 32 >= 1 )
  {
    max_length = skillInfoList->max_length;
    v39 = 0;
    v40 = 0LL;
    do
    {
      if ( v40 < (int)max_length )
      {
        if ( v40 >= max_length )
        {
LABEL_182:
          v99 = sub_B2C460(explanationLabel);
          sub_B2C400(v99, 0LL);
        }
        v41 = skillInfoList->m_Items[v40];
        if ( v41 && v41->fields.id >= 1 )
          v39 = v40 + 1;
      }
      ++v40;
    }
    while ( v40 < (int)v37 );
  }
  else
  {
LABEL_62:
    v39 = 0;
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
      goto LABEL_181;
    explanationLabel = (UIRangeLabel_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)explanationLabel,
                                           0LL);
    if ( !explanationLabel )
      goto LABEL_181;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)explanationLabel, v39 > 0, 0LL);
  }
  equipSkillIcon = this->fields.equipSkillIcon;
  if ( !equipSkillIcon )
    goto LABEL_181;
  v44 = 0;
  v45 = 4LL;
  while ( 1 )
  {
    v46 = v45 - 4;
    if ( v45 - 4 >= (int)equipSkillIcon->max_length )
      break;
    if ( skillInfoList )
    {
      v47 = skillInfoList->max_length;
      if ( (__int64)v46 < (int)v47 )
      {
        if ( v46 >= v47 )
          goto LABEL_182;
        v48 = *((_QWORD *)&skillInfoList->obj.klass + v45);
        if ( v48 )
        {
          if ( *(int *)(v48 + 16) >= 1 )
          {
            v49 = *(_QWORD *)&this->fields.skillPitch;
            if ( !v49 )
              goto LABEL_181;
            if ( v46 >= *(unsigned int *)(v49 + 24) )
              goto LABEL_182;
            v50 = ServantStatusListViewItemDrawEquip_TypeInfo;
            v51 = *(UILabel_o **)(v49 + 8 * v45);
            v52 = *(System_String_o **)(v48 + 40);
            if ( (BYTE3(ServantStatusListViewItemDrawEquip_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
              v50 = ServantStatusListViewItemDrawEquip_TypeInfo;
            }
            explanationLabel = (UIRangeLabel_o *)WrapControlText__textAdjust(
                                                   v51,
                                                   v52,
                                                   v50->static_fields->DETAIL_FONT_SIZE,
                                                   v50->static_fields->DETAIL_FONT_SIZE,
                                                   v50->static_fields->MAX_HEIGHT,
                                                   0LL);
            v53 = *(_QWORD *)&this->fields.skillPitch;
            if ( !v53 )
              goto LABEL_181;
            if ( v46 >= *(unsigned int *)(v53 + 24) )
              goto LABEL_182;
            v54 = *(_QWORD *)(v53 + 8 * v45);
            if ( !v54 )
              goto LABEL_181;
            v55 = *(_DWORD *)(v54 + 164);
            y = this->fields.baseSize.fields.y;
            v57 = ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->ADJUST_HEIGHT + v55;
            if ( v57 >= SLODWORD(y) )
              v44 += v57;
            else
              v44 += LODWORD(y);
          }
        }
      }
    }
    equipSkillIcon = this->fields.equipSkillIcon;
    ++v45;
    if ( !equipSkillIcon )
      goto LABEL_181;
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v60 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v62 = x + (float)v44;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    explanationLabel = (UIRangeLabel_o *)this->fields.baseSprite;
    if ( !explanationLabel )
      goto LABEL_181;
    v106.fields.x = z;
    v106.fields.y = v62;
    v106.fields.z = v60;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)explanationLabel, v106, 0LL);
  }
  explanationLabel = (UIRangeLabel_o *)this->fields.titleSprite;
  if ( !explanationLabel )
    goto LABEL_181;
  v63 = z;
  if ( z == INFINITY )
    v63 = -z;
  UIWidget__set_width((UIWidget_o *)explanationLabel, (int)v63, 0LL);
  explanationLabel = (UIRangeLabel_o *)this->fields.titleSprite;
  if ( !explanationLabel )
    goto LABEL_181;
  v64 = v62;
  if ( v62 == INFINITY )
    v64 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)explanationLabel, (int)v64, 0LL);
  explanationLabel = (UIRangeLabel_o *)this->fields.equipButton;
  v65 = v44 >= 0 ? v44 : v44 + 1;
  if ( !explanationLabel )
    goto LABEL_181;
  v66 = this->fields.titleBasePosition.fields.z;
  v67 = this->fields.skillBasePosition.fields.x;
  v68 = this->fields.skillBasePosition.fields.y;
  explanationLabel = (UIRangeLabel_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)explanationLabel,
                                         0LL);
  if ( !explanationLabel
    || (v69 = (float)(v65 >> 1),
        v107.fields.y = v67 + v69,
        v107.fields.x = v66,
        v107.fields.z = v68,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)explanationLabel, v107, 0LL),
        (v70 = this->fields.equipSkillIcon) == 0LL) )
  {
LABEL_181:
    sub_B2C434(explanationLabel, equipTargetId1);
  }
  g = this->fields.COLOR_INVALID.fields.g;
  v72 = this->fields.skillBasePosition.fields.z;
  v73 = 4LL;
  v74 = this->fields.COLOR_INVALID.fields.r + v69;
  while ( 1 )
  {
    v75 = v70->max_length;
    v76 = v73 - 4;
    if ( (int)v73 - 4 >= v75 )
      break;
    if ( !skillInfoList )
      goto LABEL_131;
    v77 = skillInfoList->max_length;
    if ( (int)v76 >= (int)v77 )
      goto LABEL_131;
    if ( v76 >= v77 )
      goto LABEL_182;
    v78 = skillInfoList->m_Items[v76];
    if ( !v78 || v78->fields.id < 1 )
    {
LABEL_131:
      equipTargetId1 = 0LL;
      goto LABEL_132;
    }
    if ( v76 >= v75 )
      goto LABEL_182;
    explanationLabel = (UIRangeLabel_o *)v70->m_Items[v76];
    if ( !explanationLabel )
      goto LABEL_181;
    explanationLabel = (UIRangeLabel_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)explanationLabel,
                                           0LL);
    if ( !explanationLabel )
      goto LABEL_181;
    v108.fields.x = v72;
    v108.fields.y = v74;
    v108.fields.z = g;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)explanationLabel, v108, 0LL);
    v79 = this->fields.equipSkillTitleRangeLabelList;
    if ( !v79 )
      goto LABEL_181;
    if ( v76 >= v79->max_length )
      goto LABEL_182;
    explanationLabel = v79->m_Items[v76];
    if ( !explanationLabel )
      goto LABEL_181;
    SkillIconComponent__Set((SkillIconComponent_o *)explanationLabel, v78->fields.id, 0LL);
    equipSkillExplanationLabelList = this->fields.equipSkillExplanationLabelList;
    if ( !equipSkillExplanationLabelList )
      goto LABEL_181;
    if ( v76 >= equipSkillExplanationLabelList->max_length )
      goto LABEL_182;
    explanationLabel = (UIRangeLabel_o *)equipSkillExplanationLabelList->m_Items[v76];
    if ( !explanationLabel )
      goto LABEL_181;
    UIRangeLabel__Set(explanationLabel, v78->fields.title, 0LL, 1, 0, 0LL);
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v83 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v82 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v104.fields.currentCryptoKey = v83;
      *(_QWORD *)&v104.fields.fakeValue = v82;
      explanationLabel = (UIRangeLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                             v104,
                                             0LL);
      if ( !item->fields.userSvtEntity )
        goto LABEL_181;
      v84 = (int)explanationLabel;
      Rarity = UserServantEntity__getRarity(item->fields.userSvtEntity, 0LL);
LABEL_151:
      v94 = Rarity;
      goto LABEL_152;
    }
    v91 = item->fields.servantLeaderInfo;
    if ( v91 )
    {
      v93 = *(_QWORD *)&v91->fields.svtId.fields.currentCryptoKey;
      v92 = *(_QWORD *)&v91->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v105.fields.currentCryptoKey = v93;
      *(_QWORD *)&v105.fields.fakeValue = v92;
      explanationLabel = (UIRangeLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                             v105,
                                             0LL);
      if ( !item->fields.servantLeaderInfo )
        goto LABEL_181;
      v84 = (int)explanationLabel;
      Rarity = ServantLeaderInfo__getRarity(item->fields.servantLeaderInfo, 0LL);
      goto LABEL_151;
    }
    v94 = -1;
    v84 = -1;
LABEL_152:
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    explanationLabel = (UIRangeLabel_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !explanationLabel )
      goto LABEL_181;
    explanationLabel = (UIRangeLabel_o *)PartyOrganizationUtility__IsRarityRestriction_32345144(
                                           (PartyOrganizationUtility_o *)explanationLabel,
                                           v84,
                                           v94,
                                           v78->fields.id,
                                           v78->fields.lv,
                                           0LL);
    if ( ((unsigned __int8)explanationLabel & 1) != 0 )
    {
      v95 = this->fields.equipSkillTitleRangeLabelList;
      if ( !v95 )
        goto LABEL_181;
      if ( v76 >= v95->max_length )
        goto LABEL_182;
      explanationLabel = v95->m_Items[v76];
      if ( !explanationLabel )
        goto LABEL_181;
      SkillIconComponent__SetInvalidColor(
        (SkillIconComponent_o *)explanationLabel,
        *(UnityEngine_Color_o *)&this->fields.COLOR_INVALID.fields.b,
        0LL);
      v96 = this->fields.equipSkillExplanationLabelList;
      if ( !v96 )
        goto LABEL_181;
      if ( v76 >= v96->max_length )
        goto LABEL_182;
      explanationLabel = (UIRangeLabel_o *)v96->m_Items[v76];
      if ( !explanationLabel )
        goto LABEL_181;
      UIRangeLabel__set_color(explanationLabel, *(UnityEngine_Color_o *)&this->fields.COLOR_INVALID.fields.b, 0LL);
      v97 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v97 )
        goto LABEL_181;
      if ( v76 >= *(_DWORD *)(v97 + 24) )
        goto LABEL_182;
      explanationLabel = *(UIRangeLabel_o **)(v97 + 8LL * (int)v76 + 32);
      if ( !explanationLabel )
        goto LABEL_181;
      UIWidget__set_color(
        (UIWidget_o *)explanationLabel,
        *(UnityEngine_Color_o *)&this->fields.COLOR_INVALID.fields.b,
        0LL);
    }
    equipTargetId1 = (System_String_o *)(&dword_0 + 1);
LABEL_132:
    v86 = this->fields.equipSkillIcon;
    if ( !v86 )
      goto LABEL_181;
    if ( v76 >= v86->max_length )
      goto LABEL_182;
    explanationLabel = (UIRangeLabel_o *)*((_QWORD *)&v86->obj.klass + v73);
    if ( explanationLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)explanationLabel, (bool)equipTargetId1, 0LL);
      v87 = *(_QWORD *)&this->fields.skillPitch;
      if ( v87 )
      {
        if ( v76 >= *(_DWORD *)(v87 + 24) )
          goto LABEL_182;
        v88 = *(_QWORD *)(v87 + 8 * v73);
        if ( v88 )
        {
          explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          v89 = *(_DWORD *)(v88 + 164);
          if ( (BYTE3(ServantStatusListViewItemDrawEquip_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
            explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          }
          ++v73;
          v70 = this->fields.equipSkillIcon;
          LODWORD(v90) = *(_DWORD *)(*(_QWORD *)&explanationLabel[3].fields.m_CachedPtr + 8LL) + v89;
          if ( SLODWORD(v90) < SLODWORD(this->fields.baseSize.fields.y) )
            v90 = this->fields.baseSize.fields.y;
          v74 = v74 - (float)SLODWORD(v90);
          if ( v70 )
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
    goto LABEL_181;
  }
}