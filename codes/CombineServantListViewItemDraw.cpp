void CombineServantListViewItemDraw___ctor(CombineServantListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.fortificationInfoRootObjOffsetY = 9.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CombineServantListViewItemDraw__Awake(CombineServantListViewItemDraw_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UISprite_o *v17; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defaultMaskAtlas,
    (int32_t)mAtlas,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v17 = this->fields.maskSprite;
  if ( v17 )
    mSpriteName = v17->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defaultMaskName,
    (int32_t)mSpriteName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewItemDraw__SetInput(
        CombineServantListViewItemDraw_o *this,
        CombineServantListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  int v4; // w21
  _BOOL4 IsSelect; // w0
  unsigned int v8; // w8
  int v9; // w22
  bool CanNotBaseSelect; // w0
  bool v11; // w24
  _BOOL4 IsOrganization; // w0
  UnityEngine_Object_o *v13; // x21
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  UnityEngine_Component_o *maskSprite; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  UILabel_o *v19; // x21
  LocalizationManager_c *v20; // x0
  UILabel_o *maskLabel; // x21
  int v22; // w8
  _BOOL4 v23; // w23
  int32_t atkBase; // w8
  UILabel_o *v25; // x21
  UnityEngine_Object_o *baseButton; // x24
  UnityEngine_Object_o *v27; // x24
  _BOOL4 isMaxSelect; // w25
  int32_t type; // w8
  char v30; // w8
  __int64 *v31; // x8
  UILabel_o *v32; // x21

  v4 = isSelectEnable;
  if ( (byte_596A2AB & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_9672/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_2213A60(&StringLiteral_9667/*"NONSELECT_MATERIAL"*/);
    sub_2213A60(&StringLiteral_9670/*"NONSELECT_NPUP_BASE"*/);
    sub_2213A60(&StringLiteral_9668/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    byte_596A2AB = 1;
  }
  if ( !item )
  {
    v23 = 0;
    v9 = 0;
LABEL_38:
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isSelectEnable);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !maskSprite )
        goto LABEL_90;
      ((void (__fastcall *)(UnityEngine_Component_o *, __int64, const char *))maskSprite->klass[1]._1.name)(
        maskSprite,
        1,
        maskSprite->klass[1]._1.namespaze);
      maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !maskSprite )
        goto LABEL_90;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))maskSprite->klass[1]._1.nestedTypes)(
        maskSprite,
        0,
        1,
        maskSprite->klass[1]._1.implementedInterfaces);
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_90;
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
      if ( !maskSprite )
        goto LABEL_90;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
    }
    if ( !item )
      goto LABEL_76;
    v27 = (UnityEngine_Object_o *)this->fields.baseButton;
    isMaxSelect = item->fields.isMaxSelect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
    {
      maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !maskSprite )
        goto LABEL_90;
      ((void (__fastcall *)(UnityEngine_Component_o *, __int64, const char *))maskSprite->klass[1]._1.name)(
        maskSprite,
        1,
        maskSprite->klass[1]._1.namespaze);
      maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !maskSprite )
        goto LABEL_90;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))maskSprite->klass[1]._1.nestedTypes)(
        maskSprite,
        0,
        1,
        maskSprite->klass[1]._1.implementedInterfaces);
    }
    else
    {
      isMaxSelect = 0;
    }
    type = item->fields.type;
    if ( type == 5 )
    {
      v30 = item->fields.isMaxNextLv || isMaxSelect;
      if ( (v30 & 1) == 0 )
        goto LABEL_76;
    }
    else if ( type == 1 )
    {
      if ( ((v23 & ~v4 & ~v9 | isMaxSelect) & 1) == 0 )
        goto LABEL_76;
    }
    else if ( !isMaxSelect )
    {
      goto LABEL_76;
    }
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_90;
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
    if ( !maskSprite )
      goto LABEL_90;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
    maskLabel = this->fields.maskLabel;
    v20 = LocalizationManager_TypeInfo;
    v22 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( item->fields.type == 5 )
      goto LABEL_67;
    goto LABEL_71;
  }
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
  v8 = item->fields.type;
  v9 = IsSelect;
  if ( v8 > 0xC )
  {
    IsOrganization = CombineServantListViewItem__get_IsOrganization(item, 0);
LABEL_37:
    v23 = IsOrganization;
    goto LABEL_38;
  }
  if ( ((1 << v8) & 0x1FDD) != 0 )
    CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0);
  else
    CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotSelect(item, 0);
  v11 = CanNotBaseSelect;
  IsOrganization = CombineServantListViewItem__get_IsOrganization(item, 0);
  if ( !v11 )
    goto LABEL_37;
  v13 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isSelectEnable);
  if ( !UnityEngine_Object__op_Inequality(v13, 0, 0) )
    goto LABEL_76;
  maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
  if ( !maskSprite )
    goto LABEL_90;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, const char *))maskSprite->klass[1]._1.name)(
    maskSprite,
    1,
    maskSprite->klass[1]._1.namespaze);
  maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
  if ( !maskSprite )
    goto LABEL_90;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))maskSprite->klass[1]._1.nestedTypes)(
    maskSprite,
    0,
    1,
    maskSprite->klass[1]._1.implementedInterfaces);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_90;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
  if ( !item->fields.isMaxNextLv )
  {
    if ( !item->fields.isStatusUpSvt )
      goto LABEL_76;
    if ( item->fields.isCanStUp )
    {
      atkBase = item->fields.atkBase;
      if ( item->fields.rarity >= 4 )
      {
        if ( atkBase >= 1 && (item->fields.isNotSelectSecondStatusUpAtk || item->fields.isNotSelectAddParam2) )
        {
          v32 = this->fields.maskLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v15);
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9672/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
          if ( !v32 )
            goto LABEL_90;
          UILabel__set_text(v32, (System_String_o *)maskSprite, 0);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectSecondStatusUpHp && !item->fields.isNotSelectAddParam1 )
          goto LABEL_76;
      }
      else
      {
        if ( atkBase >= 1 && item->fields.isNotSelectStatusUpAtk )
        {
          v25 = this->fields.maskLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v15);
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9672/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
          if ( !v25 )
            goto LABEL_90;
          UILabel__set_text(v25, (System_String_o *)maskSprite, 0);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectStatusUpHp )
          goto LABEL_76;
      }
      maskLabel = this->fields.maskLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v15);
      v31 = &StringLiteral_9672/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_74:
      maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v31, 0);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)maskSprite, 0);
        goto LABEL_76;
      }
LABEL_90:
      sub_2213CDC(maskSprite, v14);
    }
    maskLabel = this->fields.maskLabel;
    v20 = LocalizationManager_TypeInfo;
    v22 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
LABEL_71:
    if ( !v22 )
      j_il2cpp_runtime_class_init_0(v20, v17, v15);
    v31 = &StringLiteral_9667/*"NONSELECT_MATERIAL"*/;
    goto LABEL_74;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0) )
  {
    v19 = this->fields.maskLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v15);
    maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9668/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0);
    if ( !v19 )
      goto LABEL_90;
    UILabel__set_text(v19, (System_String_o *)maskSprite, 0);
    if ( item->fields.type == 5 )
    {
      v20 = LocalizationManager_TypeInfo;
      maskLabel = this->fields.maskLabel;
      v22 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
LABEL_67:
      if ( !v22 )
        j_il2cpp_runtime_class_init_0(v20, v17, v15);
      v31 = &StringLiteral_9670/*"NONSELECT_NPUP_BASE"*/;
      goto LABEL_74;
    }
  }
LABEL_76:
  CombineServantListViewItemDraw__SetSelectDisp(this, item, v15);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewItemDraw__SetItem(
        CombineServantListViewItemDraw_o *this,
        CombineServantListViewItem_o *item,
        int32_t mode,
        bool isSelectEnable,
        int32_t modeKind,
        const MethodInfo *method)
{
  CombineServantListViewItem_o *v9; // x28
  UnityEngine_Object_o *svtCommandCardList; // x23
  System_String_o *switchInfoList; // x1
  __int64 gameObject; // x0
  int32_t type; // w19
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  UIIconLabel_o *subIconLabel; // x24
  int32_t rarity; // w23
  int32_t v18; // w25
  UIIconLabel_o *v19; // x23
  int32_t v20; // w24
  int32_t v21; // w25
  UnityEngine_GameObject_o *v22; // x23
  UnityEngine_GameObject_o *v23; // x23
  UnityEngine_GameObject_o *v24; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Object_o *pushImg; // x23
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_Object_o *materialTdSprite; // x23
  __int64 v31; // x2
  UISprite_o *v32; // x23
  const MethodInfo *v33; // x1
  __int64 v34; // x2
  int32_t v35; // w23
  int32_t v36; // w8
  __int64 v37; // x1
  __int64 v38; // x2
  bool CanNotBaseSelect; // w8
  UnityEngine_Object_o *v40; // x22
  int v41; // w9
  __int64 v42; // x2
  struct UILabel_o *v43; // x22
  __int64 *v44; // x8
  __int64 v45; // x1
  __int64 v46; // x2
  bool IsNotCombineResourceServant; // w8
  UILabel_o *maskLabel; // x23
  int v49; // w9
  __int64 *v50; // x8
  int32_t v51; // w2
  char v52; // w21
  __int64 v53; // x1
  __int64 v54; // x2
  UILabel_o *v55; // x23
  __int64 v56; // x1
  __int64 v57; // x2
  UILabel_o *v58; // x23
  __int64 v59; // x1
  __int64 v60; // x2
  UILabel_o *v61; // x23
  const MethodInfo *v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  UILabel_o *v65; // x23
  __int64 v66; // x1
  __int64 v67; // x2
  UILabel_o *v68; // x23
  __int64 v69; // x1
  __int64 v70; // x2
  UILabel_o *v71; // x23
  __int64 v72; // x1
  __int64 v73; // x2
  UILabel_o *v74; // x23
  __int64 v75; // x1
  __int64 v76; // x2
  UILabel_o *v77; // x23
  __int64 v78; // x1
  __int64 v79; // x2
  UILabel_o *v80; // x23
  _BOOL4 isParty; // w19
  __int64 *v82; // x8
  __int64 v83; // x1
  __int64 v84; // x2
  UILabel_o *v85; // x23
  _BOOL4 v86; // w19
  __int64 *v87; // x8
  __int64 v88; // x1
  __int64 v89; // x2
  UILabel_o *v90; // x23
  UnityEngine_GameObject_o *v91; // x23
  __int64 v92; // x1
  __int64 v93; // x2
  UILabel_o *v94; // x23
  __int64 v95; // x1
  __int64 v96; // x2
  bool CanNotSelect; // w8
  UnityEngine_Object_o *baseButton; // x23
  int v99; // w9
  int atkBase; // w8
  UILabel_o *v101; // x22
  UILabel_o *v102; // x22
  UILabel_o *v103; // x22
  UILabel_o *v104; // x22
  __int64 *v105; // x8
  __int64 v106; // x2
  UnityEngine_Object_o *v107; // x23
  _BOOL4 isMaxSelect; // w19
  UserServantEntity_o *UserSvtEntity; // x22
  bool IsSecondHpAdjustMax; // w23
  System_Collections_Generic_List_object__o *v111; // x22
  __int64 v112; // x1
  __int64 v113; // x2
  int v114; // w8
  System_String_o *v115; // x23
  Il2CppObject *v116; // x0
  __int64 *v117; // x8
  __int64 v118; // x1
  __int64 v119; // x2
  UILabel_o *v120; // x22
  UILabel_o *v121; // x22
  UILabel_o *v122; // x22
  int32_t v123; // w8
  UILabel_o *v124; // x22
  UnityEngine_GameObject_o *v125; // x22
  __int64 v126; // x1
  __int64 v127; // x2
  bool v128; // w8
  UILabel_o *statusTxtLb; // x22
  int v130; // w9
  __int64 *v131; // x8
  __int64 v132; // x1
  __int64 v133; // x2
  System_String_o *v134; // x23
  Il2CppObject *v135; // x0
  __int64 v136; // x1
  __int64 v137; // x2
  UILabel_o *fortificationAppointmentLabel; // x22
  float fortificationInfoRootObjOffsetY; // s10
  float x; // s8
  float z; // s9
  System_String_o *v142; // x1
  __int64 v143; // x1
  __int64 v144; // x2
  System_String_o *v145; // x23
  Il2CppObject *v146; // x0
  bool IsSecondAtkAdjustMax; // w23
  __int64 v148; // x1
  __int64 v149; // x2
  int v150; // w8
  System_String_o *v151; // x23
  Il2CppObject *v152; // x0
  __int64 v153; // x1
  __int64 v154; // x2
  bool v155; // w8
  int v156; // w9
  System_String_o *v157; // x23
  Il2CppObject *v158; // x0
  System_String_o *v159; // x23
  Il2CppObject *v160; // x0
  System_String_o *v161; // x0
  UnityEngine_Object_o *v162; // x22
  __int64 v163; // x1
  __int64 v164; // x2
  UILabel_o *v165; // x22
  int v166; // w8
  __int64 *v167; // x8
  __int64 v168; // x1
  __int64 v169; // x2
  bool v170; // w8
  UnityEngine_Object_o *v171; // x22
  int v172; // w9
  struct UILabel_o *sealedStateLabel; // x22
  __int64 *v174; // x8
  UnityEngine_Object_o *v175; // x22
  __int64 v176; // x1
  __int64 v177; // x2
  System_String_o *v178; // x1
  UnityEngine_Object_o *v179; // x22
  UnityEngine_Object_o *v180; // x22
  __int64 v181; // x1
  __int64 v182; // x2
  int32_t v183; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  System_Text_StringBuilder_o *v185; // x22
  __int64 v186; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v188; // x19
  __int64 v189; // x28
  __int64 v190; // x29
  SkillInfo_o *v191; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v194; // w25
  Il2CppObject *v195; // x24
  __int64 v196; // x1
  __int64 v197; // x2
  bool v198; // w25
  __int64 *v199; // x8
  __int64 v200; // x1
  __int64 v201; // x2
  bool v202; // w25
  UILabel_o *skillLvLabel; // x23
  __int64 v204; // x1
  __int64 v205; // x2
  UnityEngine_Object_o *v206; // x22
  __int64 v207; // x1
  __int64 v208; // x2
  UILabel_o *v209; // x22
  UILabel_o *v210; // x22
  __int64 *v211; // x8
  UnityEngine_Object_o *v212; // x22
  int v213; // w8
  __int64 v214; // x1
  __int64 v215; // x2
  SvtUseSkillData_o *AppendSkillData; // x24
  System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  System_Text_StringBuilder_o *v218; // x23
  __int64 v219; // x2
  struct System_Int32_array *svtUseSkillIdList; // x8
  il2cpp_array_size_t v221; // x8
  unsigned __int64 v222; // x19
  __int64 v223; // x28
  __int64 v224; // x29
  int v225; // w27
  struct System_Int32_array *v226; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  int32_t v228; // w26
  Il2CppObject *v229; // x25
  __int64 v230; // x1
  __int64 v231; // x2
  bool v232; // w26
  bool v233; // zf
  __int64 *v234; // x8
  __int64 *v235; // x9
  __int64 v236; // x1
  __int64 v237; // x2
  bool v238; // w26
  UILabel_o *v239; // x24
  __int64 v240; // x2
  __int64 v241; // x1
  __int64 v242; // x2
  UILabel_o *v243; // x22
  UILabel_o *v244; // x22
  UILabel_o *v245; // x22
  __int64 *v246; // x8
  __int64 v247; // x1
  __int64 v248; // x2
  UnityEngine_Object_o *v249; // x22
  __int64 v250; // x2
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  Il2CppObject *v254; // x0
  ItemIconComponent_o *coinIcon; // x22
  int32_t v256; // w8
  SvtUseSkillData_o *v257; // x23
  System_Text_StringBuilder_o *v258; // x22
  __int64 v259; // x2
  struct System_Int32_array *v260; // x8
  il2cpp_array_size_t v261; // x19
  unsigned __int64 v262; // x20
  char v263; // w25
  char v264; // w29
  __int64 v265; // x26
  struct System_Int32_array *v266; // x8
  struct System_Int32_array *v267; // x8
  int v268; // w9
  unsigned __int64 v269; // x28
  int v270; // w26
  __int64 v271; // x2
  struct System_Int32_array *v272; // x8
  Il2CppObject *v273; // x24
  LocalizationManager_c *v274; // x0
  __int64 *v275; // x27
  UILabel_o *v276; // x23
  __int64 v277; // x2
  __int64 v278; // x1
  __int64 v279; // x2
  UILabel_o *v280; // x22
  UILabel_o *v281; // x22
  __int64 *v282; // x8
  __int64 v283; // x1
  __int64 v284; // x2
  Il2CppObject *Master_object; // x22
  long double v286; // q0
  System_String_o *v287; // x23
  Il2CppObject *v288; // x0
  UnityEngine_Object_o *v289; // x22
  int32_t v290; // w2
  __int64 v291; // x1
  __int64 v292; // x2
  UnityEngine_Object_o *v293; // x22
  __int64 v294; // x1
  __int64 v295; // x2
  UILabel_o *v296; // x22
  int v297; // w8
  __int64 *v298; // x8
  UnityEngine_Object_o *v299; // x22
  __int64 v300; // x1
  __int64 v301; // x2
  System_String_o *v302; // x0
  int32_t v303; // w8
  __int64 v304; // x1
  __int64 v305; // x2
  UnityEngine_Object_o *v306; // x22
  __int64 v307; // x1
  __int64 v308; // x2
  UILabel_o *v309; // x22
  int v310; // w8
  __int64 *v311; // x8
  UnityEngine_Object_c *v312; // x0
  UnityEngine_Object_o *v313; // x22
  int v314; // w8
  __int64 v315; // x1
  __int64 v316; // x2
  System_String_o *v317; // x0
  UnityEngine_Object_o *v318; // x22
  const MethodInfo *v319; // x1
  __int64 v320; // x2
  int32_t v321; // w22
  int32_t SortKind; // w8
  __int64 v323; // x1
  __int64 v324; // x2
  bool v325; // w8
  UnityEngine_Object_o *v326; // x22
  int v327; // w9
  __int64 v328; // x2
  UILabel_o *v329; // x22
  UILabel_o *v330; // x22
  struct UILabel_o *v331; // x22
  System_String_o *v332; // x1
  UnityEngine_Object_o *v333; // x22
  ServantCommandCardListComponent_o *v334; // x22
  __int64 v335; // x1
  __int64 v336; // x2
  UnityEngine_Object_o *v337; // x22
  __int64 v338; // x1
  __int64 v339; // x2
  UILabel_o *v340; // x22
  int v341; // w8
  __int64 *v342; // x8
  UnityEngine_Object_c *v343; // x0
  UnityEngine_Object_o *v344; // x22
  int v345; // w8
  __int64 v346; // x1
  __int64 v347; // x2
  System_String_o *v348; // x0
  __int64 v349; // x1
  __int64 v350; // x2
  __int64 v351; // x1
  __int64 v352; // x2
  struct UILabel_o *v353; // x20
  __int64 *v354; // x8
  __int64 v355; // x1
  __int64 v356; // x2
  UnityEngine_Object_o *v357; // x22
  __int64 v358; // x1
  __int64 v359; // x2
  CombineServantListViewItemDraw_o *v360; // [xsp+18h] [xbp-B8h]
  int32_t v361; // [xsp+24h] [xbp-ACh]
  CombineServantListViewItem_o *v362; // [xsp+28h] [xbp-A8h]
  char v363; // [xsp+30h] [xbp-A0h]
  int32_t SkillOpenItemNum; // [xsp+34h] [xbp-9Ch] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+38h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+40h] [xbp-90h] BYREF
  MethodInfo tdMaxLv; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v368; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v369; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v371; // 0:s0.4,4:s1.4,8:s2.4

  v9 = item;
  if ( (byte_596A2AA & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&CombineServantListViewManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&StringLiteral_12752/*"SKILL_LVDISP_TXT"*/);
    sub_2213A60(&StringLiteral_10704/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/);
    sub_2213A60(&StringLiteral_9672/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_2213A60(&StringLiteral_6763/*"FORTIFICATION_APPOINTMENT"*/);
    sub_2213A60(&StringLiteral_3425/*"CAN_PARAM2_UP_INFO"*/);
    sub_2213A60(&StringLiteral_3712/*"COMBINE_CAN_STATUS_UP_INFO"*/);
    sub_2213A60(&StringLiteral_9162/*"MSG_CAMPAIGN_COMBINE_EXP"*/);
    sub_2213A60(&StringLiteral_12750/*"SKILL_LVDISP_ENABLE_TXT"*/);
    sub_2213A60(&StringLiteral_2082/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/);
    sub_2213A60(&StringLiteral_9667/*"NONSELECT_MATERIAL"*/);
    sub_2213A60(&StringLiteral_24320/*"ribbon_noblephantasmup_01"*/);
    sub_2213A60(&StringLiteral_9666/*"NONSELECT_LIMITUP_BASE"*/);
    sub_2213A60(&StringLiteral_2083/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/);
    sub_2213A60(&StringLiteral_3420/*"CAN_ADD_PARAM2_UP_INFO"*/);
    sub_2213A60(&StringLiteral_10505/*"PARTY_MEMBER_TXT"*/);
    sub_2213A60(&StringLiteral_3426/*"CAN_SELECT_SEALED_SERVANT_BASE"*/);
    sub_2213A60(&StringLiteral_9670/*"NONSELECT_NPUP_BASE"*/);
    sub_2213A60(&StringLiteral_13039/*"SUPPORT_MEMBER"*/);
    sub_2213A60(&StringLiteral_9158/*"MSG_ABLED_LIMITUP"*/);
    sub_2213A60(&StringLiteral_12060/*"SELECT_PUSH"*/);
    sub_2213A60(&StringLiteral_12029/*"SELECT_CANNOT"*/);
    sub_2213A60(&StringLiteral_9733/*"NPUP_BASE"*/);
    sub_2213A60(&StringLiteral_2084/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/);
    sub_2213A60(&StringLiteral_12749/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/);
    sub_2213A60(&StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_2213A60(&StringLiteral_9721/*"NO_SELECT_FRIENDSHIP_EXCEED"*/);
    sub_2213A60(&StringLiteral_11946/*"SAME_SERVANT"*/);
    sub_2213A60(&StringLiteral_9157/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/);
    sub_2213A60(&StringLiteral_9668/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    sub_2213A60(&StringLiteral_3424/*"CAN_PARAM1_UP_INFO"*/);
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    sub_2213A60(&StringLiteral_12751/*"SKILL_LVDISP_SINGLE_TXT"*/);
    sub_2213A60(&StringLiteral_9159/*"MSG_ABLED_SKILLUP"*/);
    sub_2213A60(&StringLiteral_3419/*"CAN_ADD_PARAM1_UP_INFO"*/);
    sub_2213A60(&StringLiteral_9669/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/);
    sub_2213A60(&StringLiteral_9673/*"NONSKILL_TXT"*/);
    sub_2213A60(&StringLiteral_8665/*"LOCKMODE_SELECTED_SERVANT"*/);
    sub_2213A60(&StringLiteral_6669/*"FAVORITE_SERVANT"*/);
    sub_2213A60(&StringLiteral_3494/*"CHOICE_SERVANT"*/);
    sub_2213A60(&StringLiteral_11517/*"RECOMMEND_SUPPORT_MEMBER"*/);
    sub_2213A60(&StringLiteral_9161/*"MSG_ABLED_TDUP"*/);
    sub_2213A60(&StringLiteral_12023/*"SEAL_COMBINE_LIMIT_THIRD"*/);
    sub_2213A60(&StringLiteral_9665/*"NONSELECT_BASE_ALLMAX"*/);
    sub_2213A60(&StringLiteral_9722/*"NO_SELECT_LVEXCEED"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_9671/*"NONSELECT_SKILLUP_BASE"*/);
    sub_2213A60(&StringLiteral_12059/*"SELECT_PROTECTED_EVENT_SVT"*/);
    sub_2213A60(&StringLiteral_7297/*"GRAND_MEMBER"*/);
    sub_2213A60(&StringLiteral_8666/*"LOCK_SERVANT"*/);
    sub_2213A60(&StringLiteral_9664/*"NONSEELECT_STATUSUP_MAX"*/);
    byte_596A2AA = 1;
  }
  tdMaxLv.invoker_method = 0;
  skillInfoList = 0;
  tdMaxLv.methodPointer = 0;
  entity = 0;
  if ( !v9 || !mode )
    return;
  svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, *(_QWORD *)&mode);
  if ( UnityEngine_Object__op_Implicit(svtCommandCardList, 0) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  type = v9->fields.type;
  servantFaceIcon = this->fields.servantFaceIcon;
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0);
  switchInfoList = (System_String_o *)gameObject;
  if ( type )
  {
    if ( !servantFaceIcon )
      goto LABEL_1153;
    ServantFaceIconComponent__Set_48049524(
      servantFaceIcon,
      (UserServantEntity_o *)gameObject,
      v9->fields.iconLabelInfo1,
      v9->fields.iconLabelInfo2,
      1,
      0);
    subIconLabel = this->fields.subIconLabel;
    rarity = v9->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0);
    if ( !gameObject )
      goto LABEL_1153;
    v18 = *(_DWORD *)(gameObject + 440);
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0);
    if ( !gameObject || !subIconLabel )
      goto LABEL_1153;
    UIIconLabel__Set_48071660(
      subIconLabel,
      36,
      rarity,
      v18,
      0,
      0,
      0,
      0,
      *(_DWORD *)(gameObject + 400),
      v9->fields.actualRarity,
      0);
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_1153;
    ServantFaceIconComponent__Set_48049524(
      servantFaceIcon,
      (UserServantEntity_o *)gameObject,
      v9->fields.iconLabelInfo1,
      0,
      1,
      0);
    gameObject = (__int64)v9->fields.iconLabelInfo2;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = IconLabelInfo__IsClear((IconLabelInfo_o *)gameObject, 0);
    v19 = this->fields.subIconLabel;
    if ( (gameObject & 1) != 0 )
    {
      v20 = v9->fields.rarity;
      gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0);
      if ( !gameObject )
        goto LABEL_1153;
      v21 = *(_DWORD *)(gameObject + 440);
      gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0);
      if ( !gameObject || !v19 )
        goto LABEL_1153;
      UIIconLabel__Set_48071660(
        v19,
        36,
        v20,
        v21,
        0,
        0,
        0,
        0,
        *(_DWORD *)(gameObject + 400),
        v9->fields.actualRarity,
        0);
    }
    else
    {
      if ( !v19 )
        goto LABEL_1153;
      UIIconLabel__Set(this->fields.subIconLabel, v9->fields.iconLabelInfo2, 0);
    }
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_1153;
  ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
    (ServantFaceIconComponent_o *)gameObject,
    this->fields.maskSprite,
    this->fields.defaultMaskName,
    this->fields.defaultMaskAtlas,
    0);
  CombineServantListViewItem__GetNpInfo(
    v9,
    (int32_t *)&tdMaxLv.invoker_method + 1,
    (int32_t *)&tdMaxLv.invoker_method,
    (int32_t *)&tdMaxLv.methodPointer + 1,
    0);
  gameObject = (__int64)this->fields.lockImg;
  if ( !gameObject )
    goto LABEL_1153;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1153;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_1153;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.maskLabel;
  if ( !gameObject )
    goto LABEL_1153;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)this->fields.maskLabel;
  if ( !gameObject )
    goto LABEL_1153;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  GameObjectExtensions__SetLocalScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1153;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1153;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1153;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  GameObjectExtensions__SetLocalScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1153;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.partyIcon;
  if ( !gameObject )
    goto LABEL_1153;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.removeImg;
  if ( !gameObject )
    goto LABEL_1153;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1153;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.choiceImg;
  if ( !gameObject )
    goto LABEL_1153;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  gameObject = CombineServantListViewItem__get_IsDispChoice(v9, 0);
  if ( !v24 )
    goto LABEL_1153;
  UnityEngine_GameObject__SetActive(v24, gameObject & 1, 0);
  gameObject = (__int64)this->fields.switchInfoComp;
  if ( !gameObject )
    goto LABEL_1153;
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.fortificationRootObj;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0),
        (gameObject = (__int64)this->fields.fortificationNameLabel) == 0)
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0),
        (gameObject = (__int64)this->fields.fortificationDetailNameLabel) == 0)
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0),
        (gameObject = (__int64)this->fields.fortificationAppointmentLabel) == 0) )
  {
LABEL_1153:
    sub_2213CDC(gameObject, switchInfoList);
  }
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
  if ( UnityEngine_Object__op_Inequality(pushImg, 0, 0) )
  {
    gameObject = (__int64)this->fields.pushImg;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9->fields.isPush, 0);
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_1153;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)gameObject, 0);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9->fields.isMaterialTdSvt, 0);
    if ( v9->fields.isMaterialTdSvt )
    {
      v32 = this->fields.materialTdSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, switchInfoList, v31);
      AtlasManager__SetEventSprite(v32, (System_String_o *)StringLiteral_24320/*"ribbon_noblephantasmup_01"*/, 0);
      v35 = v9->fields.type;
      if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v33, v34);
      if ( CombineServantListViewManager__GetSortKind(v35, v33) == 1 )
      {
        gameObject = (__int64)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_1153;
        v368.fields.y = 1.0;
        v368.fields.z = 1.0;
        v368.fields.x = *(float *)"ff&?";
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v368, 0);
      }
    }
  }
  v36 = v9->fields.type;
  switch ( v36 )
  {
    case 5:
      gameObject = (__int64)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_1153;
      v51 = SHIDWORD(tdMaxLv.invoker_method) <= 0 ? -1 : LODWORD(tdMaxLv.invoker_method);
      UIIconLabel__Set_48071660(
        (UIIconLabel_o *)gameObject,
        33,
        v51,
        SHIDWORD(tdMaxLv.methodPointer),
        0,
        0,
        0,
        0,
        0,
        0,
        0);
      gameObject = (__int64)this->fields.npLvInfo;
      if ( !gameObject )
        goto LABEL_1153;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      goto LABEL_117;
    case 1:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1153;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        v9->fields.currentLimitCnt,
        v9->fields.maxLimitCnt,
        0);
      if ( CombineServantListViewItem__get_IsProtected(v9, 0) && v9->fields.type != 5 )
      {
        gameObject = (__int64)this->fields.maskSprite;
        if ( !gameObject )
          goto LABEL_1153;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0);
        if ( !gameObject )
          goto LABEL_1153;
        IsNotCombineResourceServant = UserServantEntity__IsNotCombineResourceServant(
                                        (UserServantEntity_o *)gameObject,
                                        0);
        maskLabel = this->fields.maskLabel;
        v49 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
        if ( IsNotCombineResourceServant )
        {
          if ( !v49 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45, v46);
          v50 = &StringLiteral_9667/*"NONSELECT_MATERIAL"*/;
        }
        else
        {
          if ( !v49 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45, v46);
          v50 = &StringLiteral_12059/*"SELECT_PROTECTED_EVENT_SVT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v50, 0);
        if ( !maskLabel )
          goto LABEL_1153;
        UILabel__set_text(maskLabel, (System_String_o *)gameObject, 0);
        v52 = 1;
LABEL_118:
        if ( v9->fields.isParty )
        {
          gameObject = (__int64)this->fields.partyIcon;
          if ( !gameObject )
            goto LABEL_1153;
          FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
          gameObject = (__int64)this->fields.maskSprite;
          if ( !gameObject )
            goto LABEL_1153;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1153;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v55 = this->fields.maskLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53, v54);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10505/*"PARTY_MEMBER_TXT"*/, 0);
          if ( !v55 )
            goto LABEL_1153;
          UILabel__set_text(v55, (System_String_o *)gameObject, 0);
          v52 = 1;
        }
        if ( v9->fields.isFavorite )
        {
          gameObject = (__int64)this->fields.maskSprite;
          if ( !gameObject )
            goto LABEL_1153;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1153;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v58 = this->fields.maskLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56, v57);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6669/*"FAVORITE_SERVANT"*/, 0);
          if ( !v58 )
            goto LABEL_1153;
          UILabel__set_text(v58, (System_String_o *)gameObject, 0);
          v52 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispLock(v9, 0) )
        {
          gameObject = (__int64)this->fields.lockImg;
          if ( !gameObject )
            goto LABEL_1153;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1153;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          gameObject = (__int64)this->fields.maskSprite;
          if ( !gameObject )
            goto LABEL_1153;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1153;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v61 = this->fields.maskLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v59, v60);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8666/*"LOCK_SERVANT"*/, 0);
          if ( !v61 )
            goto LABEL_1153;
          UILabel__set_text(v61, (System_String_o *)gameObject, 0);
          v52 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispChoice(v9, 0) )
        {
          gameObject = (__int64)this->fields.maskSprite;
          if ( !gameObject )
            goto LABEL_1153;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1153;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v65 = this->fields.maskLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v63, v64);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3494/*"CHOICE_SERVANT"*/, 0);
          if ( !v65 )
            goto LABEL_1153;
          UILabel__set_text(v65, (System_String_o *)gameObject, 0);
          v52 = 1;
        }
        if ( v9->fields.isLimitCntTarget )
        {
          gameObject = (__int64)this->fields.maskSprite;
          if ( !gameObject )
            goto LABEL_1153;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1153;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v68 = this->fields.maskLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v66, v67);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11946/*"SAME_SERVANT"*/, 0);
          if ( !v68 )
            goto LABEL_1153;
          UILabel__set_text(v68, (System_String_o *)gameObject, 0);
          v52 = 1;
        }
        if ( v9->fields.isHeroineSvt )
        {
          gameObject = (__int64)this->fields.maskSprite;
          if ( !gameObject )
            goto LABEL_1153;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1153;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v71 = this->fields.maskLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69, v70);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9667/*"NONSELECT_MATERIAL"*/, 0);
          if ( !v71 )
            goto LABEL_1153;
          UILabel__set_text(v71, (System_String_o *)gameObject, 0);
          v52 = 1;
        }
        if ( v9->fields.isStatusUpSvt && !v9->fields.isCanStUp )
        {
          gameObject = (__int64)this->fields.maskSprite;
          if ( !gameObject )
            goto LABEL_1153;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1153;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v74 = this->fields.maskLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72, v73);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9667/*"NONSELECT_MATERIAL"*/, 0);
          if ( !v74 )
            goto LABEL_1153;
          UILabel__set_text(v74, (System_String_o *)gameObject, 0);
          v52 = 1;
        }
        if ( v9->fields.isEventJoin )
        {
          gameObject = (__int64)this->fields.maskSprite;
          if ( !gameObject )
            goto LABEL_1153;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1153;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v77 = this->fields.maskLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v75, v76);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/, 0);
          if ( !v77 )
            goto LABEL_1153;
          UILabel__set_text(v77, (System_String_o *)gameObject, 0);
          v52 = 1;
        }
        if ( v9->fields.isUseSupport )
        {
          gameObject = (__int64)this->fields.maskSprite;
          if ( !gameObject )
            goto LABEL_1153;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1153;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v80 = this->fields.maskLabel;
          isParty = v9->fields.isParty;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v78, v79);
          v82 = &StringLiteral_13039/*"SUPPORT_MEMBER"*/;
          if ( isParty )
            v82 = &StringLiteral_10505/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v82, 0);
          if ( !v80 )
            goto LABEL_1153;
          UILabel__set_text(v80, (System_String_o *)gameObject, 0);
          v52 = 1;
        }
        if ( v9->fields.isUseRecommendSupport )
        {
          gameObject = (__int64)this->fields.maskSprite;
          if ( !gameObject )
            goto LABEL_1153;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1153;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v85 = this->fields.maskLabel;
          v86 = v9->fields.isParty;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v83, v84);
          v87 = &StringLiteral_11517/*"RECOMMEND_SUPPORT_MEMBER"*/;
          if ( v86 )
            v87 = &StringLiteral_10505/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v87, 0);
          if ( !v85 )
            goto LABEL_1153;
          UILabel__set_text(v85, (System_String_o *)gameObject, 0);
          if ( !v9->fields.isParty )
          {
            gameObject = (__int64)this->fields.maskLabel;
            if ( !gameObject )
              goto LABEL_1153;
            UILabel__SetCondensedScale((UILabel_o *)gameObject, 106, 0, 0);
          }
          v52 = 1;
        }
        if ( v9->fields.isPush )
        {
          gameObject = (__int64)this->fields.maskSprite;
          if ( !gameObject )
            goto LABEL_1153;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1153;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v90 = this->fields.maskLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v88, v89);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12060/*"SELECT_PUSH"*/, 0);
          if ( !v90 )
            goto LABEL_1153;
          UILabel__set_text(v90, (System_String_o *)gameObject, 0);
          gameObject = (__int64)this->fields.maskLabel;
          if ( !gameObject )
            goto LABEL_1153;
          v91 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !byte_5969AE5 )
          {
            sub_2213A60(&UnityEngine_Vector3_TypeInfo);
            byte_5969AE5 = 1;
          }
          GameObjectExtensions__SetLocalScale(v91, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          v52 = 1;
        }
        if ( v9->fields.isGrandSvt )
        {
          gameObject = (__int64)this->fields.maskSprite;
          if ( !gameObject )
            goto LABEL_1153;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1153;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v94 = this->fields.maskLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v92, v93);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7297/*"GRAND_MEMBER"*/, 0);
          if ( !v94 )
            goto LABEL_1153;
          UILabel__set_text(v94, (System_String_o *)gameObject, 0);
          v52 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, v9, v62);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(v9, 0);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        v99 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
        if ( !CanNotSelect )
        {
          if ( !v99 )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v95, v96);
          if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1153;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1153;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
            gameObject = (__int64)this->fields.maskSprite;
            if ( !gameObject )
              goto LABEL_1153;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_1153;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          }
          v107 = (UnityEngine_Object_o *)this->fields.baseButton;
          isMaxSelect = v9->fields.isMaxSelect;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, switchInfoList, v106);
          if ( UnityEngine_Object__op_Inequality(v107, 0, 0) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1153;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1153;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          }
          else
          {
            isMaxSelect = 0;
          }
          if ( v9->fields.type == 1 && CombineServantListViewItem__get_IsOrganization(v9, 0) && !isSelectEnable )
          {
            if ( !(isMaxSelect | !ListViewItem__get_IsSelect((ListViewItem_o *)v9, 0)) )
              break;
          }
          else if ( !isMaxSelect )
          {
            break;
          }
          gameObject = (__int64)this->fields.maskSprite;
          if ( !gameObject )
            goto LABEL_1153;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1153;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v120 = this->fields.maskLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v118, v119);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9667/*"NONSELECT_MATERIAL"*/, 0);
          if ( !v120 )
            goto LABEL_1153;
          UILabel__set_text(v120, (System_String_o *)gameObject, 0);
          break;
        }
        if ( !v99 )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v95, v96);
        if ( !UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
          break;
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1153;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1153;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)this->fields.maskSprite;
        if ( !gameObject )
          goto LABEL_1153;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        if ( v9->fields.isMaxNextLv || v9->fields.isBaseLvMax )
        {
          if ( v9->fields.isCanStUp )
            goto LABEL_227;
          if ( CombineServantListViewItem__get_IsCanNotSelectMaterial(v9, 0) )
            goto LABEL_342;
          v121 = this->fields.maskLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v31);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9668/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0);
          if ( !v121 )
            goto LABEL_1153;
          UILabel__set_text(v121, (System_String_o *)gameObject, 0);
          if ( v9->fields.type != 5 )
            break;
          v104 = this->fields.maskLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v31);
          v105 = &StringLiteral_9670/*"NONSELECT_NPUP_BASE"*/;
        }
        else
        {
          if ( v9->fields.isCanStUp )
          {
LABEL_227:
            if ( v9->fields.isStatusUpSvt )
            {
              atkBase = v9->fields.atkBase;
              if ( v9->fields.rarity <= 3 )
              {
                if ( atkBase >= 1
                  && (v9->fields.isAtkUpMax || v9->fields.isAtkSecondUpMax || v9->fields.isNotSelectStatusUpAtk) )
                {
                  v122 = this->fields.maskLabel;
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v31);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9672/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                  if ( !v122 )
                    goto LABEL_1153;
                  UILabel__set_text(v122, (System_String_o *)gameObject, 0);
                }
                if ( v9->fields.hpBase < 1
                  || !v9->fields.isHpUpMax && !v9->fields.isHpSecondUpMax && !v9->fields.isNotSelectStatusUpHp )
                {
                  goto LABEL_342;
                }
                v104 = this->fields.maskLabel;
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v31);
                v105 = &StringLiteral_9672/*"NONSELECT_UNDER_STATUS_MAX"*/;
              }
              else
              {
                if ( atkBase >= 1 )
                {
                  if ( v9->fields.isAtkSecondUpMax
                    || v9->fields.isNotSelectSecondStatusUpAtk
                    || v9->fields.isNotSelectAddParam2 )
                  {
                    v101 = this->fields.maskLabel;
                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v31);
                    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9672/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                    if ( !v101 )
                      goto LABEL_1153;
                    UILabel__set_text(v101, (System_String_o *)gameObject, 0);
                  }
                  if ( CombineServantListViewItem__IsCanNotSelectSecondStatusMaterial(v9, 0) )
                  {
                    v102 = this->fields.maskLabel;
                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v31);
                    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9669/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0);
                    if ( !v102 )
                      goto LABEL_1153;
                    UILabel__set_text(v102, (System_String_o *)gameObject, 0);
                  }
                }
                if ( v9->fields.hpBase < 1 )
                  goto LABEL_342;
                if ( v9->fields.isHpSecondUpMax
                  || v9->fields.isNotSelectSecondStatusUpHp
                  || v9->fields.isNotSelectAddParam1 )
                {
                  v103 = this->fields.maskLabel;
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v31);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9672/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                  if ( !v103 )
                    goto LABEL_1153;
                  UILabel__set_text(v103, (System_String_o *)gameObject, 0);
                }
                if ( !CombineServantListViewItem__IsCanNotSelectSecondStatusMaterial(v9, 0) )
                  goto LABEL_342;
                v104 = this->fields.maskLabel;
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v31);
                v105 = &StringLiteral_9669/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
              }
              goto LABEL_340;
            }
LABEL_342:
            v123 = v9->fields.type;
            if ( v123 != 5 )
              goto LABEL_450;
            if ( v9->fields.isBaseSvt )
            {
              v124 = this->fields.maskLabel;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v31);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9733/*"NPUP_BASE"*/, 0);
              if ( !v124 )
                goto LABEL_1153;
              UILabel__set_text(v124, (System_String_o *)gameObject, 0);
              gameObject = (__int64)this->fields.maskLabel;
              if ( !gameObject )
                goto LABEL_1153;
              v125 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              v369.fields.x = sub_2417914(0);
              GameObjectExtensions__SetLocalScale(v125, v369, 0);
            }
            break;
          }
          if ( v9->fields.isFortification )
          {
            gameObject = (__int64)this->fields.maskLabel;
            if ( !gameObject )
              goto LABEL_1153;
            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
            gameObject = (__int64)this->fields.fortificationRootObj;
            if ( !gameObject )
              goto LABEL_1153;
            gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_1153;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            gameObject = (__int64)this->fields.fortificationNameLabel;
            if ( !gameObject )
              goto LABEL_1153;
            UILabel__set_text((UILabel_o *)gameObject, v9->fields.fortificationName, 0);
            gameObject = (__int64)this->fields.fortificationDetailNameLabel;
            if ( !gameObject )
              goto LABEL_1153;
            UILabel__set_text((UILabel_o *)gameObject, v9->fields.fortificationDetailName, 0);
            fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v136, v137);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6763/*"FORTIFICATION_APPOINTMENT"*/, 0);
            if ( !fortificationAppointmentLabel )
              goto LABEL_1153;
            UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)gameObject, 0);
            gameObject = (__int64)this->fields.fortificationNameLabel;
            if ( !gameObject )
              goto LABEL_1153;
            UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0);
            gameObject = (__int64)this->fields.fortificationDetailNameLabel;
            if ( !gameObject )
              goto LABEL_1153;
            UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0);
            if ( v9->fields.type != 5 )
              break;
            gameObject = (__int64)this->fields.fortificationRootObj;
            if ( !gameObject )
              goto LABEL_1153;
            gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_1153;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
            gameObject = (__int64)this->fields.fortificationRootObj;
            if ( !gameObject )
              goto LABEL_1153;
            fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
            x = localPosition.fields.x;
            z = localPosition.fields.z;
            gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_1153;
            v371.fields.x = x;
            v371.fields.y = fortificationInfoRootObjOffsetY;
            v371.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v371, 0);
            goto LABEL_342;
          }
          if ( (v52 & 1) != 0 )
            goto LABEL_342;
          v104 = this->fields.maskLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v31);
          v105 = &StringLiteral_9667/*"NONSELECT_MATERIAL"*/;
        }
LABEL_340:
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v105, 0);
        if ( !v104 )
          goto LABEL_1153;
        UILabel__set_text(v104, (System_String_o *)gameObject, 0);
        goto LABEL_342;
      }
LABEL_117:
      v52 = 0;
      goto LABEL_118;
    case 0:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1153;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        v9->fields.currentLimitCnt,
        v9->fields.maxLimitCnt,
        0);
      if ( v9->fields.isParty )
      {
        gameObject = (__int64)this->fields.partyIcon;
        if ( !gameObject )
          goto LABEL_1153;
        FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
      }
      if ( CombineServantListViewItem__get_IsDispLock(v9, 0) )
      {
        gameObject = (__int64)this->fields.lockImg;
        if ( !gameObject )
          goto LABEL_1153;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      }
      CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0);
      v40 = (UnityEngine_Object_o *)this->fields.baseButton;
      v41 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
      if ( CanNotBaseSelect )
      {
        if ( !v41 )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v38);
        if ( !UnityEngine_Object__op_Inequality(v40, 0, 0) )
          goto LABEL_445;
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1153;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1153;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)this->fields.maskSprite;
        if ( !gameObject )
          goto LABEL_1153;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        if ( v9->fields.isHeroineSvt )
        {
          if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, switchInfoList, v42);
          if ( TutorialFlag__Get_47388504(126, 0) )
          {
            v43 = this->fields.maskLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v42);
            v44 = &StringLiteral_12029/*"SELECT_CANNOT"*/;
LABEL_397:
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v44, 0);
            if ( !v43 )
              goto LABEL_1153;
            v142 = (System_String_o *)gameObject;
            gameObject = (__int64)v43;
LABEL_399:
            UILabel__set_text((UILabel_o *)gameObject, v142, 0);
            gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
            if ( !gameObject )
              goto LABEL_1153;
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              this->fields.statusTxtLb,
              0);
LABEL_445:
            if ( v9->fields.isBaseSvt )
            {
              gameObject = (__int64)this->fields.removeImg;
              if ( !gameObject )
                goto LABEL_1153;
              gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1153;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            }
            break;
          }
        }
        if ( v9->fields.isLvMax )
        {
          if ( !v9->fields.isStatusUpSvt )
          {
            if ( !v9->fields.isExpUpSvt )
            {
              v43 = this->fields.maskLabel;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v42);
              v44 = &StringLiteral_9665/*"NONSELECT_BASE_ALLMAX"*/;
              goto LABEL_397;
            }
            goto LABEL_393;
          }
        }
        else if ( !v9->fields.isStatusUpSvt )
        {
LABEL_393:
          if ( !v9->fields.isExpUpSvt )
          {
            gameObject = (__int64)this->fields.statusTxtLb;
            if ( !gameObject )
              goto LABEL_1153;
            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
            gameObject = (__int64)this->fields.maskLabel;
            if ( !gameObject )
              goto LABEL_1153;
            v142 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_399;
          }
        }
        v43 = this->fields.maskLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v42);
        v44 = &StringLiteral_9667/*"NONSELECT_MATERIAL"*/;
        goto LABEL_397;
      }
      if ( !v41 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v38);
      if ( !UnityEngine_Object__op_Inequality(v40, 0, 0) )
        goto LABEL_445;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)this->fields.maskSprite;
      if ( !gameObject )
        goto LABEL_1153;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1153;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)this->fields.maskLabel;
      if ( !gameObject )
        goto LABEL_1153;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(v9, 0);
      if ( v9->fields.isCombineExpCampaignTarget )
      {
        if ( ConstantMaster__IsFlag20260802(0) )
        {
          if ( v9->fields.isDispAtkStatusUpInfo )
          {
            gameObject = CombineServantListViewItem__get_IsAtkAdjustMax(v9, 0);
            if ( (gameObject & 1) != 0 )
            {
              if ( !UserSvtEntity )
                goto LABEL_1153;
              if ( !UserServantEntity__IsAddParam2Max(UserSvtEntity, 0) )
              {
                IsSecondAtkAdjustMax = CombineServantListViewItem__get_IsSecondAtkAdjustMax(v9, 0);
                v111 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v111,
                  (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
                v150 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
                if ( IsSecondAtkAdjustMax )
                {
                  if ( !v150 )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v148, v149);
                  v151 = LocalizationManager__Get((System_String_o *)StringLiteral_9162/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
                  *(float *)&tdMaxLv.methodPointer = v9->fields.combineExpCampaignValue;
                  v152 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
                  gameObject = (__int64)System_String__Format(v151, v152, 0);
                  if ( !v111 )
                    goto LABEL_1153;
                  sub_1FFEDA8(v111, gameObject, Method_System_Collections_Generic_List_string__Add__);
                  v117 = &StringLiteral_3420/*"CAN_ADD_PARAM2_UP_INFO"*/;
                }
                else
                {
                  if ( !v150 )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v148, v149);
                  v157 = LocalizationManager__Get((System_String_o *)StringLiteral_9162/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
                  *(float *)&tdMaxLv.methodPointer = v9->fields.combineExpCampaignValue;
                  v158 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
                  gameObject = (__int64)System_String__Format(v157, v158, 0);
                  if ( !v111 )
                    goto LABEL_1153;
                  sub_1FFEDA8(v111, gameObject, Method_System_Collections_Generic_List_string__Add__);
                  v117 = &StringLiteral_3425/*"CAN_PARAM2_UP_INFO"*/;
                }
                goto LABEL_439;
              }
            }
          }
          if ( v9->fields.isDispHpStatusUpInfo )
          {
            gameObject = CombineServantListViewItem__get_IsHpAdjustMax(v9, 0);
            if ( (gameObject & 1) != 0 )
            {
              if ( !UserSvtEntity )
                goto LABEL_1153;
              if ( !UserServantEntity__IsAddParam1Max(UserSvtEntity, 0) )
              {
                IsSecondHpAdjustMax = CombineServantListViewItem__get_IsSecondHpAdjustMax(v9, 0);
                v111 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v111,
                  (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
                v114 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
                if ( IsSecondHpAdjustMax )
                {
                  if ( !v114 )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v112, v113);
                  v115 = LocalizationManager__Get((System_String_o *)StringLiteral_9162/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
                  *(float *)&tdMaxLv.methodPointer = v9->fields.combineExpCampaignValue;
                  v116 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
                  gameObject = (__int64)System_String__Format(v115, v116, 0);
                  if ( !v111 )
                    goto LABEL_1153;
                  sub_1FFEDA8(v111, gameObject, Method_System_Collections_Generic_List_string__Add__);
                  v117 = &StringLiteral_3419/*"CAN_ADD_PARAM1_UP_INFO"*/;
                }
                else
                {
                  if ( !v114 )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v112, v113);
                  v159 = LocalizationManager__Get((System_String_o *)StringLiteral_9162/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
                  *(float *)&tdMaxLv.methodPointer = v9->fields.combineExpCampaignValue;
                  v160 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
                  gameObject = (__int64)System_String__Format(v159, v160, 0);
                  if ( !v111 )
                    goto LABEL_1153;
                  sub_1FFEDA8(v111, gameObject, Method_System_Collections_Generic_List_string__Add__);
                  v117 = &StringLiteral_3424/*"CAN_PARAM1_UP_INFO"*/;
                }
LABEL_439:
                v161 = LocalizationManager__Get((System_String_o *)*v117, 0);
                sub_1FFEDA8(v111, v161, Method_System_Collections_Generic_List_string__Add__);
                gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
                if ( !gameObject )
                  goto LABEL_1153;
                CombineServantListViewNoticeTween__AddTarget(
                  (CombineServantListViewNoticeTween_o *)gameObject,
                  this->fields.statusTxtLb,
                  (System_Collections_Generic_List_string__o *)v111,
                  0);
                gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
                if ( !gameObject )
                  goto LABEL_1153;
                CombineServantListViewNoticeTween__SetTexts((CombineServantListViewNoticeTween_o *)gameObject, 0, 0);
                goto LABEL_442;
              }
            }
          }
        }
        else if ( v9->fields.isDispAtkStatusUpInfo
               && CombineServantListViewItem__get_IsAtkAdjustMax(v9, 0)
               && !CombineServantListViewItem__get_IsSecondAtkAdjustMax(v9, 0)
               || v9->fields.isDispHpStatusUpInfo
               && CombineServantListViewItem__get_IsHpAdjustMax(v9, 0)
               && !CombineServantListViewItem__get_IsSecondHpAdjustMax(v9, 0) )
        {
          v111 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v111,
            (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v143, v144);
          v145 = LocalizationManager__Get((System_String_o *)StringLiteral_9162/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
          *(float *)&tdMaxLv.methodPointer = v9->fields.combineExpCampaignValue;
          v146 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
          gameObject = (__int64)System_String__Format(v145, v146, 0);
          if ( !v111 )
            goto LABEL_1153;
          sub_1FFEDA8(v111, gameObject, Method_System_Collections_Generic_List_string__Add__);
          v117 = &StringLiteral_3712/*"COMBINE_CAN_STATUS_UP_INFO"*/;
          goto LABEL_439;
        }
        gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1153;
        CombineServantListViewNoticeTween__RemoveTarget(
          (CombineServantListViewNoticeTween_o *)gameObject,
          this->fields.statusTxtLb,
          0);
        statusTxtLb = this->fields.statusTxtLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v132, v133);
        v134 = LocalizationManager__Get((System_String_o *)StringLiteral_9162/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
        *(float *)&tdMaxLv.methodPointer = v9->fields.combineExpCampaignValue;
        v135 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
        gameObject = (__int64)System_String__Format(v134, v135, 0);
        if ( !statusTxtLb )
          goto LABEL_1153;
      }
      else
      {
        gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1153;
        CombineServantListViewNoticeTween__RemoveTarget(
          (CombineServantListViewNoticeTween_o *)gameObject,
          this->fields.statusTxtLb,
          0);
        if ( ConstantMaster__IsFlag20260802(0) )
        {
          if ( !v9->fields.isDispAtkStatusUpInfo )
            goto LABEL_358;
          gameObject = CombineServantListViewItem__get_IsAtkAdjustMax(v9, 0);
          if ( (gameObject & 1) == 0 )
            goto LABEL_358;
          if ( !UserSvtEntity )
            goto LABEL_1153;
          if ( !UserServantEntity__IsAddParam2Max(UserSvtEntity, 0) )
          {
            v155 = CombineServantListViewItem__get_IsSecondAtkAdjustMax(v9, 0);
            statusTxtLb = this->fields.statusTxtLb;
            v156 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
            if ( v155 )
            {
              if ( !v156 )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v153, v154);
              v131 = &StringLiteral_3420/*"CAN_ADD_PARAM2_UP_INFO"*/;
            }
            else
            {
              if ( !v156 )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v153, v154);
              v131 = &StringLiteral_3425/*"CAN_PARAM2_UP_INFO"*/;
            }
          }
          else
          {
LABEL_358:
            if ( !v9->fields.isDispHpStatusUpInfo )
              goto LABEL_445;
            gameObject = CombineServantListViewItem__get_IsHpAdjustMax(v9, 0);
            if ( (gameObject & 1) == 0 )
              goto LABEL_445;
            if ( !UserSvtEntity )
              goto LABEL_1153;
            if ( UserServantEntity__IsAddParam1Max(UserSvtEntity, 0) )
              goto LABEL_445;
            v128 = CombineServantListViewItem__get_IsSecondHpAdjustMax(v9, 0);
            statusTxtLb = this->fields.statusTxtLb;
            v130 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
            if ( v128 )
            {
              if ( !v130 )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v126, v127);
              v131 = &StringLiteral_3419/*"CAN_ADD_PARAM1_UP_INFO"*/;
            }
            else
            {
              if ( !v130 )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v126, v127);
              v131 = &StringLiteral_3424/*"CAN_PARAM1_UP_INFO"*/;
            }
          }
        }
        else
        {
          if ( v9->fields.isDispAtkStatusUpInfo )
          {
            if ( !CombineServantListViewItem__get_IsAtkAdjustMax(v9, 0)
              || CombineServantListViewItem__get_IsSecondAtkAdjustMax(v9, 0) )
            {
              goto LABEL_445;
            }
          }
          else if ( !v9->fields.isDispHpStatusUpInfo
                 || !CombineServantListViewItem__get_IsHpAdjustMax(v9, 0)
                 || CombineServantListViewItem__get_IsSecondHpAdjustMax(v9, 0) )
          {
            goto LABEL_445;
          }
          statusTxtLb = this->fields.statusTxtLb;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v31);
          v131 = &StringLiteral_3712/*"COMBINE_CAN_STATUS_UP_INFO"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v131, 0);
        if ( !statusTxtLb )
          goto LABEL_1153;
      }
      UILabel__set_text(statusTxtLb, (System_String_o *)gameObject, 0);
LABEL_442:
      gameObject = (__int64)this->fields.statusTxtLb;
      if ( !gameObject )
        goto LABEL_1153;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1153;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      goto LABEL_445;
  }
  v123 = v9->fields.type;
LABEL_450:
  if ( v123 != 9 )
  {
    if ( v123 != 2 )
      goto LABEL_547;
    gameObject = (__int64)this->fields.limitCountIcon;
    if ( !gameObject )
      goto LABEL_1153;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)gameObject,
      v9->fields.currentLimitCnt,
      v9->fields.maxLimitCnt,
      0);
    if ( v9->fields.isParty )
    {
      gameObject = (__int64)this->fields.partyIcon;
      if ( !gameObject )
        goto LABEL_1153;
      FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
    }
    if ( CombineServantListViewItem__get_IsDispLock(v9, 0) )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_1153;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1153;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    }
    if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0) )
    {
      v162 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, switchInfoList, v31);
      if ( !UnityEngine_Object__op_Inequality(v162, 0, 0) )
        goto LABEL_529;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)this->fields.maskSprite;
      if ( !gameObject )
        goto LABEL_1153;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1153;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v165 = this->fields.maskLabel;
      v166 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( v9->fields.isHeroineSvt )
      {
        if ( !v166 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v163, v164);
        v167 = &StringLiteral_9667/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        if ( !v166 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v163, v164);
        v167 = &StringLiteral_9666/*"NONSELECT_LIMITUP_BASE"*/;
      }
    }
    else
    {
      if ( !v9->fields.isSealedLimitCount || !v9->fields.isLimitCntMax )
      {
        if ( v9->fields.isLvMax && v9->fields.isLimitUpItemNum && !v9->fields.isSealCombineLimit )
        {
          if ( !v9->fields.isLimitCntMax )
          {
            v357 = (UnityEngine_Object_o *)this->fields.baseButton;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, switchInfoList, v31);
            if ( UnityEngine_Object__op_Inequality(v357, 0, 0) )
            {
              gameObject = (__int64)this->fields.baseButton;
              if ( !gameObject )
                goto LABEL_1153;
              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
                gameObject,
                1,
                *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
              gameObject = (__int64)this->fields.baseButton;
              if ( !gameObject )
                goto LABEL_1153;
              (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
                gameObject,
                0,
                1,
                *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
              gameObject = (__int64)this->fields.maskSprite;
              if ( !gameObject )
                goto LABEL_1153;
              gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1153;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
              gameObject = (__int64)this->fields.maskLabel;
              if ( !gameObject )
                goto LABEL_1153;
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
              gameObject = (__int64)this->fields.statusTxtLb;
              if ( !gameObject )
                goto LABEL_1153;
              gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1153;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
              sealedStateLabel = this->fields.statusTxtLb;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v358, v359);
              v174 = &StringLiteral_9158/*"MSG_ABLED_LIMITUP"*/;
              goto LABEL_540;
            }
          }
        }
        else
        {
          v179 = (UnityEngine_Object_o *)this->fields.baseButton;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, switchInfoList, v31);
          if ( UnityEngine_Object__op_Inequality(v179, 0, 0) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1153;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1153;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          }
        }
LABEL_529:
        if ( v9->fields.isSealedLimitCount )
        {
          v180 = (UnityEngine_Object_o *)this->fields.baseButton;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, switchInfoList, v31);
          if ( UnityEngine_Object__op_Inequality(v180, 0, 0) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1153;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1153;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
            gameObject = (__int64)this->fields.sealedStateLabel;
            if ( !gameObject )
              goto LABEL_1153;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_1153;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            sealedStateLabel = this->fields.sealedStateLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v181, v182);
            v174 = &StringLiteral_3426/*"CAN_SELECT_SEALED_SERVANT_BASE"*/;
            goto LABEL_540;
          }
        }
        goto LABEL_543;
      }
      v175 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, switchInfoList, v31);
      if ( !UnityEngine_Object__op_Inequality(v175, 0, 0) )
        goto LABEL_529;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)this->fields.sealedStateLabel;
      if ( !gameObject )
        goto LABEL_1153;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1153;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v165 = this->fields.sealedStateLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v176, v177);
      v167 = &StringLiteral_3426/*"CAN_SELECT_SEALED_SERVANT_BASE"*/;
    }
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v167, 0);
    if ( !v165 )
      goto LABEL_1153;
    UILabel__set_text(v165, (System_String_o *)gameObject, 0);
    goto LABEL_529;
  }
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1153;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    v9->fields.currentLimitCnt,
    v9->fields.maxLimitCnt,
    0);
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1153;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v170 = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0);
  v171 = (UnityEngine_Object_o *)this->fields.baseButton;
  v172 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( v170 )
  {
    if ( !v172 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v168, v169);
    if ( UnityEngine_Object__op_Inequality(v171, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)this->fields.maskSprite;
      if ( !gameObject )
        goto LABEL_1153;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1153;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      if ( v9->fields.isHeroineSvt || v9->fields.isEventJoin || v9->fields.isIgnoreCombineLimitSpecial )
      {
        sealedStateLabel = this->fields.maskLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v31);
        v174 = &StringLiteral_9667/*"NONSELECT_MATERIAL"*/;
      }
      else if ( v9->fields.isLimitCntMax )
      {
        sealedStateLabel = this->fields.maskLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v31);
        v174 = &StringLiteral_9666/*"NONSELECT_LIMITUP_BASE"*/;
      }
      else
      {
        if ( !v9->fields.isSealCombineLimit )
          goto LABEL_543;
        sealedStateLabel = this->fields.maskLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v31);
        v174 = &StringLiteral_12023/*"SEAL_COMBINE_LIMIT_THIRD"*/;
      }
LABEL_540:
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v174, 0);
      if ( !sealedStateLabel )
        goto LABEL_1153;
      v178 = (System_String_o *)gameObject;
      gameObject = (__int64)sealedStateLabel;
LABEL_542:
      UILabel__set_text((UILabel_o *)gameObject, v178, 0);
    }
  }
  else
  {
    if ( !v172 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v168, v169);
    if ( UnityEngine_Object__op_Inequality(v171, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)this->fields.maskSprite;
      if ( !gameObject )
        goto LABEL_1153;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1153;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)this->fields.maskLabel;
      if ( !gameObject )
        goto LABEL_1153;
      v178 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_542;
    }
  }
LABEL_543:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_547:
  v183 = v9->fields.type;
  v360 = this;
  v362 = v9;
  v361 = modeKind;
  if ( v183 != 3 )
    goto LABEL_628;
  CombineServantListViewItem__GetSkillInfo(v9, &skillInfoList, 0);
  enableSkillUp = v9->fields.enableSkillUp;
  v185 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v185, 0);
  if ( !skillInfoList )
    goto LABEL_1153;
  max_length = skillInfoList->max_length;
  if ( (int)max_length >= 1 )
  {
    v188 = 0;
    v189 = (unsigned int)(max_length - 1);
    v190 = (unsigned int)skillInfoList->max_length;
    while ( 1 )
    {
      if ( !skillInfoList )
        goto LABEL_1153;
      if ( v188 >= LODWORD(skillInfoList->max_length) )
        goto LABEL_1154;
      v191 = skillInfoList->m_Items[v188];
      if ( v191 )
      {
        lv = v191->fields.lv;
        p_lv = &v191->fields.lv;
        v194 = *(p_lv - 1);
        if ( lv > 0 )
        {
          gameObject = (__int64)System_Int32__ToString((int32_t)p_lv, 0);
          goto LABEL_560;
        }
      }
      else
      {
        v194 = -1;
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v186);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9673/*"NONSKILL_TXT"*/, 0);
LABEL_560:
      v195 = (Il2CppObject *)gameObject;
      if ( v189 == v188 )
      {
        if ( !enableSkillUp )
          goto LABEL_1153;
        v198 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v194,
                 (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v196, v197);
        v199 = &StringLiteral_12749/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
        if ( !v198 )
          v199 = &StringLiteral_12751/*"SKILL_LVDISP_SINGLE_TXT"*/;
      }
      else
      {
        if ( !enableSkillUp )
          goto LABEL_1153;
        v202 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v194,
                 (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v200, v201);
        v199 = &StringLiteral_12750/*"SKILL_LVDISP_ENABLE_TXT"*/;
        if ( !v202 )
          v199 = &StringLiteral_12752/*"SKILL_LVDISP_TXT"*/;
      }
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v199, 0);
      if ( !v185 )
        goto LABEL_1153;
      gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v185, (System_String_o *)gameObject, v195, 0);
      if ( v190 == ++v188 )
        goto LABEL_576;
    }
  }
  if ( !v185 )
    goto LABEL_1153;
LABEL_576:
  skillLvLabel = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v185->klass->vtable._3_ToString.methodPtr)(
                 v185,
                 v185->klass->vtable._3_ToString.method);
  if ( !skillLvLabel )
    goto LABEL_1153;
  UILabel__set_text(skillLvLabel, (System_String_o *)gameObject, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  v9 = v362;
  if ( !gameObject )
    goto LABEL_1153;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  if ( v362->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1153;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v362, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v362, 0) )
  {
    v206 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v204, v205);
    if ( !UnityEngine_Object__op_Inequality(v206, 0, 0) )
      goto LABEL_623;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1153;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1153;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)this->fields.maskSprite;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v209 = this->fields.maskLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v207, v208);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9671/*"NONSELECT_SKILLUP_BASE"*/, 0);
    if ( !v209 )
      goto LABEL_1153;
    UILabel__set_text(v209, (System_String_o *)gameObject, 0);
    if ( !v362->fields.isHeroineSvt )
      goto LABEL_623;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, switchInfoList, v31);
    if ( !TutorialFlag__Get_47388504(126, 0) )
      goto LABEL_623;
    v210 = this->fields.maskLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v31);
    v211 = &StringLiteral_12029/*"SELECT_CANNOT"*/;
    goto LABEL_615;
  }
  v212 = (UnityEngine_Object_o *)this->fields.baseButton;
  v213 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( !v362->fields.isSkillUpItemNum )
  {
    if ( !v213 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v204, v205);
    if ( UnityEngine_Object__op_Inequality(v212, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_623;
  }
  if ( !v213 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v204, v205);
  if ( UnityEngine_Object__op_Inequality(v212, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1153;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1153;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)this->fields.statusTxtLb;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v210 = this->fields.statusTxtLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v214, v215);
    v211 = &StringLiteral_9159/*"MSG_ABLED_SKILLUP"*/;
LABEL_615:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v211, 0);
    if ( !v210 )
      goto LABEL_1153;
    UILabel__set_text(v210, (System_String_o *)gameObject, 0);
  }
LABEL_623:
  if ( v362->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v183 = v362->fields.type;
LABEL_628:
  if ( v183 != 11 )
    goto LABEL_726;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(v9, 0);
  enableAppendSkillUp = v9->fields.enableAppendSkillUp;
  v218 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v218, 0);
  if ( !AppendSkillData )
    goto LABEL_1153;
  svtUseSkillIdList = AppendSkillData->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_1153;
  v221 = svtUseSkillIdList->max_length;
  if ( (int)v221 >= 1 )
  {
    v222 = 0;
    v223 = (unsigned int)(v221 - 1);
    v224 = (unsigned int)v221;
    v225 = 32;
    while ( 1 )
    {
      v226 = AppendSkillData->fields.svtUseSkillIdList;
      if ( !v226 )
        goto LABEL_1153;
      if ( v222 >= LODWORD(v226->max_length) )
        break;
      svtSkillLvList = AppendSkillData->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_1153;
      if ( v222 >= LODWORD(svtSkillLvList->max_length) )
        break;
      v228 = v226->m_Items[v222];
      if ( svtSkillLvList->m_Items[v222] <= 0 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v219);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9673/*"NONSKILL_TXT"*/, 0);
      }
      else
      {
        gameObject = (__int64)System_Int32__ToString((int)svtSkillLvList + v225, 0);
      }
      v229 = (Il2CppObject *)gameObject;
      if ( v223 == v222 )
      {
        if ( !enableAppendSkillUp )
          goto LABEL_1153;
        v232 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v228,
                 (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v230, v231);
        v233 = !v232;
        v234 = &StringLiteral_12749/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
        v235 = &StringLiteral_12751/*"SKILL_LVDISP_SINGLE_TXT"*/;
      }
      else
      {
        if ( !enableAppendSkillUp )
          goto LABEL_1153;
        v238 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v228,
                 (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v236, v237);
        v233 = !v238;
        v234 = &StringLiteral_12750/*"SKILL_LVDISP_ENABLE_TXT"*/;
        v235 = &StringLiteral_12752/*"SKILL_LVDISP_TXT"*/;
      }
      if ( v233 )
        v234 = v235;
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v234, 0);
      if ( !v218 )
        goto LABEL_1153;
      gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v218, (System_String_o *)gameObject, v229, 0);
      ++v222;
      v225 += 4;
      if ( v224 == v222 )
        goto LABEL_658;
    }
LABEL_1154:
    sub_2213CE4(gameObject);
  }
  if ( !v218 )
    goto LABEL_1153;
LABEL_658:
  this = v360;
  v239 = v360->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v218->klass->vtable._3_ToString.methodPtr)(
                 v218,
                 v218->klass->vtable._3_ToString.method);
  v9 = v362;
  if ( !v239 )
    goto LABEL_1153;
  UILabel__set_text(v239, (System_String_o *)gameObject, 0);
  gameObject = (__int64)v360->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1153;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  if ( v362->fields.isParty )
  {
    gameObject = (__int64)v360->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1153;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v362, 0) )
  {
    gameObject = (__int64)v360->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  gameObject = CombineServantListViewItem__get_IsCanNotBaseSelect(v362, 0);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)v360->fields.maskSprite;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v243 = v360->fields.maskLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v241, v242);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9671/*"NONSELECT_SKILLUP_BASE"*/, 0);
    if ( !v243 )
      goto LABEL_1153;
    UILabel__set_text(v243, (System_String_o *)gameObject, 0);
    if ( v362->fields.isEventJoin )
    {
      v244 = v360->fields.maskLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v240);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10704/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v244 )
        goto LABEL_1153;
      UILabel__set_text(v244, (System_String_o *)gameObject, 0);
    }
    if ( !v362->fields.isHeroineSvt )
      goto LABEL_696;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, switchInfoList, v240);
    if ( !TutorialFlag__Get_47388504(126, 0) )
      goto LABEL_696;
    v245 = v360->fields.maskLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v240);
    v246 = &StringLiteral_12029/*"SELECT_CANNOT"*/;
    goto LABEL_694;
  }
  if ( !enableAppendSkillUp )
    goto LABEL_1153;
  if ( enableAppendSkillUp->fields._size > 0 || v362->fields.isAppendSkillOpenItemNum )
  {
    gameObject = (__int64)v360->fields.statusTxtLb;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v245 = v360->fields.statusTxtLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v247, v248);
    v246 = &StringLiteral_9159/*"MSG_ABLED_SKILLUP"*/;
LABEL_694:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v246, 0);
    if ( !v245 )
      goto LABEL_1153;
    UILabel__set_text(v245, (System_String_o *)gameObject, 0);
  }
LABEL_696:
  v249 = (UnityEngine_Object_o *)v360->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, switchInfoList, v240);
  if ( UnityEngine_Object__op_Inequality(v249, 0, 0) )
  {
    gameObject = (__int64)v360->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1153;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)v360->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1153;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  coinInfo = (UnityEngine_Object_o *)v360->fields.coinInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, switchInfoList, v250);
  if ( UnityEngine_Object__op_Inequality(coinInfo, 0, 0) )
  {
    switchInfoComp = (UnityEngine_Object_o *)v360->fields.switchInfoComp;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, switchInfoList, v31);
    if ( UnityEngine_Object__op_Inequality(switchInfoComp, 0, 0) )
    {
      switchInfoList = (System_String_o *)v360->fields.switchInfoList;
      if ( switchInfoList )
      {
        gameObject = (__int64)v360->fields.switchInfoComp;
        if ( !gameObject )
          goto LABEL_1153;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)gameObject, (UIWidget_array *)switchInfoList, 0, 0);
        gameObject = (__int64)v360->fields.coinInfo;
        if ( !gameObject )
          goto LABEL_1153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        coinNumLabel = v360->fields.coinNumLabel;
        gameObject = CombineServantListViewItem__get_SkillOpenItemNum(v362, 0);
        if ( (gameObject & 0x80000000) != 0 )
        {
          switchInfoList = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(v362, 0);
          v254 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &SkillOpenItemNum);
          gameObject = (__int64)System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v254, 0);
          switchInfoList = (System_String_o *)gameObject;
        }
        if ( !coinNumLabel )
          goto LABEL_1153;
        UILabel__set_text(coinNumLabel, switchInfoList, 0);
        gameObject = CombineServantListViewItem__get_SkillOpenItemId(v362, 0);
        coinIcon = v360->fields.coinIcon;
        if ( (int)gameObject < 1 )
        {
          if ( !coinIcon )
            goto LABEL_1153;
          gameObject = (__int64)coinIcon->fields.iconSprite;
          if ( !gameObject )
            goto LABEL_1153;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1153;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        else
        {
          gameObject = CombineServantListViewItem__get_SkillOpenItemId(v362, 0);
          if ( !coinIcon )
            goto LABEL_1153;
          ItemIconComponent__SetItem(coinIcon, gameObject, -1, 1, 0);
        }
      }
    }
  }
  if ( v362->fields.isBaseSvt )
  {
    gameObject = (__int64)v360->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_726:
  v256 = v9->fields.type;
  if ( v256 != 12 )
    goto LABEL_840;
  v257 = CombineServantListViewItem__GetAppendSkillData(v9, 0);
  v258 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v258, 0);
  if ( !v257 )
    goto LABEL_1153;
  v260 = v257->fields.svtUseSkillIdList;
  if ( !v260 )
    goto LABEL_1153;
  v261 = v260->max_length;
  if ( (int)v261 < 1 )
  {
    v263 = 0;
    v363 = 0;
    if ( v258 )
      goto LABEL_777;
    goto LABEL_1153;
  }
  v363 = 0;
  v262 = 0;
  v263 = 0;
  v264 = 0;
  v265 = 32;
  do
  {
    v266 = v257->fields.svtUseSkillIdList;
    if ( !v266 )
      goto LABEL_1153;
    if ( v262 >= LODWORD(v266->max_length) )
      goto LABEL_1154;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v259);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9673/*"NONSKILL_TXT"*/, 0);
    v267 = v257->fields.svtSkillLvList;
    if ( !v267 )
      goto LABEL_1153;
    if ( v262 >= LODWORD(v267->max_length) )
      goto LABEL_1154;
    if ( *(int *)((char *)&v267->obj.klass + v265) >= 1 )
    {
      gameObject = (__int64)System_Int32__ToString((int)v267 + (int)v265, 0);
      v267 = v257->fields.svtSkillLvList;
      if ( !v267 )
        goto LABEL_1153;
      v363 = 1;
    }
    if ( v262 >= LODWORD(v267->max_length) )
      goto LABEL_1154;
    v268 = *(_DWORD *)((char *)&v267->obj.klass + v265);
    ++v262;
    v265 += 4;
    v263 |= v268 < 10;
    v264 |= v267->m_Items[0] != v268;
  }
  while ( (unsigned int)v261 != v262 );
  v269 = 0;
  v270 = 32;
  do
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v259);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9673/*"NONSKILL_TXT"*/, 0);
    v272 = v257->fields.svtSkillLvList;
    if ( !v272 )
      goto LABEL_1153;
    if ( v269 >= LODWORD(v272->max_length) )
      goto LABEL_1154;
    if ( v272->m_Items[v269] >= 1 )
      gameObject = (__int64)System_Int32__ToString((int)v272 + v270, 0);
    v273 = (Il2CppObject *)gameObject;
    if ( (_DWORD)v261 - 1 == v269 )
    {
      if ( (v264 & 1) == 0 )
        goto LABEL_755;
      if ( !v362->fields.isHeroineSvt )
        goto LABEL_764;
      if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, switchInfoList, v271);
      if ( TutorialFlag__Get_47388504(126, 0) )
      {
LABEL_755:
        v274 = LocalizationManager_TypeInfo;
        if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        {
          v275 = &StringLiteral_12751/*"SKILL_LVDISP_SINGLE_TXT"*/;
          goto LABEL_773;
        }
        v275 = &StringLiteral_12751/*"SKILL_LVDISP_SINGLE_TXT"*/;
      }
      else
      {
LABEL_764:
        v274 = LocalizationManager_TypeInfo;
        if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        {
          v275 = &StringLiteral_12749/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          goto LABEL_773;
        }
        v275 = &StringLiteral_12749/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
      }
    }
    else
    {
      if ( (v264 & 1) == 0 )
        goto LABEL_762;
      if ( !v362->fields.isHeroineSvt )
        goto LABEL_766;
      if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, switchInfoList, v271);
      if ( TutorialFlag__Get_47388504(126, 0) )
      {
LABEL_762:
        v274 = LocalizationManager_TypeInfo;
        if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        {
          v275 = &StringLiteral_12752/*"SKILL_LVDISP_TXT"*/;
          goto LABEL_773;
        }
        v275 = &StringLiteral_12752/*"SKILL_LVDISP_TXT"*/;
      }
      else
      {
LABEL_766:
        v274 = LocalizationManager_TypeInfo;
        if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        {
          v275 = &StringLiteral_12750/*"SKILL_LVDISP_ENABLE_TXT"*/;
          goto LABEL_773;
        }
        v275 = &StringLiteral_12750/*"SKILL_LVDISP_ENABLE_TXT"*/;
      }
    }
    j_il2cpp_runtime_class_init_0(v274, switchInfoList, v271);
LABEL_773:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v275, 0);
    if ( !v258 )
      goto LABEL_1153;
    System_Text_StringBuilder__AppendFormat(v258, (System_String_o *)gameObject, v273, 0);
    ++v269;
    v270 += 4;
  }
  while ( (unsigned int)v261 != v269 );
  this = v360;
  v9 = v362;
  modeKind = v361;
LABEL_777:
  v276 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v258->klass->vtable._3_ToString.methodPtr)(
                 v258,
                 v258->klass->vtable._3_ToString.method);
  if ( !v276 )
    goto LABEL_1153;
  UILabel__set_text(v276, (System_String_o *)gameObject, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1153;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  if ( !v9->fields.isParty )
    goto LABEL_783;
  gameObject = (__int64)this->fields.partyIcon;
  if ( !gameObject )
    goto LABEL_1153;
  FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
LABEL_783:
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        goto LABEL_787;
      }
    }
    goto LABEL_1153;
  }
LABEL_787:
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0) )
  {
    gameObject = (__int64)this->fields.maskSprite;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (__int64)this->fields.maskLabel;
    if ( !gameObject )
      goto LABEL_1153;
    UILabel__set_text((UILabel_o *)gameObject, **(System_String_o ***)(qword_5984390 + 184), 0);
    if ( v9->fields.isEventJoin )
    {
      v280 = this->fields.maskLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v278, v279);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10704/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v280 )
        goto LABEL_1153;
      UILabel__set_text(v280, (System_String_o *)gameObject, 0);
    }
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_1157;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v278, v279);
    if ( TutorialFlag__Get_47388504(126, 0) )
    {
      v281 = this->fields.maskLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v278, v279);
      v282 = &StringLiteral_12029/*"SELECT_CANNOT"*/;
LABEL_827:
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v282, 0);
      if ( !v281 )
        goto LABEL_1153;
LABEL_828:
      UILabel__set_text(v281, (System_String_o *)gameObject, 0);
    }
    else
    {
LABEL_1157:
      if ( v9->fields.isEventJoin )
      {
        v281 = this->fields.maskLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v278, v279);
        v282 = &StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/;
        goto LABEL_827;
      }
      if ( (v363 & 1) == 0 )
      {
        v281 = this->fields.maskLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v278, v279);
        v282 = &StringLiteral_2082/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/;
        goto LABEL_827;
      }
      if ( (v263 & 1) == 0 )
      {
        v281 = this->fields.maskLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v278, v279);
        v282 = &StringLiteral_2083/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/;
        goto LABEL_827;
      }
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v278, v279);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v286 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v283, v284);
      gameObject = sub_2417958(0, v286);
      if ( !Master_object )
        goto LABEL_1153;
      if ( UserServantAppendPassiveSkillMaster__TryGetEntity(
             (UserServantAppendPassiveSkillMaster_o *)Master_object,
             &entity,
             gameObject,
             v9->fields.svtId,
             0)
        && UserServantAppendPassiveSkillMaster__IsExchangeLimited(0) )
      {
        v281 = this->fields.maskLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v277);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2084/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/, 0);
        if ( !entity )
          goto LABEL_1153;
        v287 = (System_String_o *)gameObject;
        SkillOpenItemNum = UserServantAppendPassiveSkillEntity__GetRemainingExchangeNum(entity, 0);
        v288 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &SkillOpenItemNum);
        gameObject = (__int64)System_String__Format(v287, v288, 0);
        if ( !v281 )
          goto LABEL_1153;
        goto LABEL_828;
      }
    }
  }
  v289 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, switchInfoList, v277);
  if ( UnityEngine_Object__op_Inequality(v289, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1153;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1153;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v256 = v9->fields.type;
LABEL_840:
  if ( v256 == 4 )
  {
    gameObject = (__int64)this->fields.npIconLabel;
    if ( !gameObject )
      goto LABEL_1153;
    v290 = SHIDWORD(tdMaxLv.invoker_method) <= 0 ? -1 : LODWORD(tdMaxLv.invoker_method);
    UIIconLabel__Set_48071660(
      (UIIconLabel_o *)gameObject,
      33,
      v290,
      SHIDWORD(tdMaxLv.methodPointer),
      0,
      0,
      0,
      0,
      0,
      0,
      0);
    gameObject = (__int64)this->fields.npLvInfo;
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( v9->fields.isParty )
    {
      gameObject = (__int64)this->fields.partyIcon;
      if ( !gameObject )
        goto LABEL_1153;
      FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
    }
    if ( CombineServantListViewItem__get_IsDispLock(v9, 0) )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_1153;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1153;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    }
    if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0) )
    {
      v293 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v291, v292);
      if ( UnityEngine_Object__op_Inequality(v293, 0, 0) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1153;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1153;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)this->fields.maskSprite;
        if ( !gameObject )
          goto LABEL_1153;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v296 = this->fields.maskLabel;
        v297 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
        if ( v9->fields.isHeroineSvt )
        {
          if ( !v297 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v294, v295);
          v298 = &StringLiteral_9667/*"NONSELECT_MATERIAL"*/;
        }
        else
        {
          if ( !v297 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v294, v295);
          v298 = &StringLiteral_9670/*"NONSELECT_NPUP_BASE"*/;
        }
        v302 = (System_String_o *)*v298;
        goto LABEL_882;
      }
    }
    else if ( v9->fields.isSameSvt || v9->fields.isBaseSvt )
    {
      v299 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v291, v292);
      if ( UnityEngine_Object__op_Inequality(v299, 0, 0) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1153;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1153;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        if ( v9->fields.isSameSvt )
        {
          gameObject = (__int64)this->fields.statusTxtLb;
          if ( !gameObject )
            goto LABEL_1153;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1153;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v296 = this->fields.statusTxtLb;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v300, v301);
          v302 = (System_String_o *)StringLiteral_9161/*"MSG_ABLED_TDUP"*/;
LABEL_882:
          gameObject = (__int64)LocalizationManager__Get(v302, 0);
          if ( !v296 )
            goto LABEL_1153;
          UILabel__set_text(v296, (System_String_o *)gameObject, 0);
        }
      }
    }
    else
    {
      v318 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v291, v292);
      if ( UnityEngine_Object__op_Inequality(v318, 0, 0) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1153;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1153;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      }
    }
    if ( v9->fields.isBaseSvt )
    {
      gameObject = (__int64)this->fields.removeImg;
      if ( !gameObject )
        goto LABEL_1153;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1153;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    }
  }
  v303 = v9->fields.type;
  if ( v303 != 6 )
    goto LABEL_955;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1153;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    v9->fields.currentLimitCnt,
    v9->fields.maxLimitCnt,
    0);
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1153;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0) )
  {
    v306 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v304, v305);
    if ( UnityEngine_Object__op_Inequality(v306, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)this->fields.maskSprite;
      if ( !gameObject )
        goto LABEL_1153;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1153;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      if ( v9->fields.isHeroineSvt && !v9->fields.isLvExceedMax )
      {
        v309 = this->fields.maskLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v307, v308);
        v311 = &StringLiteral_9667/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        v309 = this->fields.maskLabel;
        v310 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
        if ( v9->fields.isEventJoin )
        {
          if ( !v310 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v307, v308);
          v311 = &StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/;
        }
        else
        {
          if ( !v310 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v307, v308);
          v311 = &StringLiteral_9722/*"NO_SELECT_LVEXCEED"*/;
        }
      }
      v317 = (System_String_o *)*v311;
      goto LABEL_948;
    }
    goto LABEL_950;
  }
  if ( !v9->fields.isLvMax || !v9->fields.isLimitCntMax )
  {
    v312 = UnityEngine_Object_TypeInfo;
    v313 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_929;
    goto LABEL_928;
  }
  v312 = UnityEngine_Object_TypeInfo;
  v313 = (UnityEngine_Object_o *)this->fields.baseButton;
  v314 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( !v9->fields.isLvExceedItemNum )
  {
    if ( v314 )
    {
LABEL_929:
      if ( UnityEngine_Object__op_Inequality(v313, 0, 0) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1153;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1153;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      }
      goto LABEL_950;
    }
LABEL_928:
    j_il2cpp_runtime_class_init_0(v312, v304, v305);
    goto LABEL_929;
  }
  if ( !v314 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v304, v305);
  if ( UnityEngine_Object__op_Inequality(v313, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1153;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1153;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)this->fields.maskSprite;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)this->fields.maskLabel;
    if ( !gameObject )
      goto LABEL_1153;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    gameObject = (__int64)this->fields.statusTxtLb;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v309 = this->fields.statusTxtLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v315, v316);
    v317 = (System_String_o *)StringLiteral_9158/*"MSG_ABLED_LIMITUP"*/;
LABEL_948:
    gameObject = (__int64)LocalizationManager__Get(v317, 0);
    if ( !v309 )
      goto LABEL_1153;
    UILabel__set_text(v309, (System_String_o *)gameObject, 0);
  }
LABEL_950:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v303 = v9->fields.type;
LABEL_955:
  if ( v303 == 10 || v303 == 7 )
  {
    gameObject = (__int64)this->fields.limitCountIcon;
    if ( !gameObject )
      goto LABEL_1153;
    LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0);
    gameObject = (__int64)this->fields.subIconLabel;
    if ( !gameObject )
      goto LABEL_1153;
    UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0);
    v321 = v9->fields.type;
    if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v319, v320);
    SortKind = CombineServantListViewManager__GetSortKind(v321, v319);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( SortKind == 2 )
    {
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 376LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 384LL));
      gameObject = (__int64)this->fields.servantFaceIcon;
      if ( !gameObject )
        goto LABEL_1153;
      ServantFaceIconComponent__ResetIconLabelPos((ServantFaceIconComponent_o *)gameObject, 0);
      gameObject = (__int64)this->fields.servantFaceIcon;
      if ( !gameObject )
        goto LABEL_1153;
      ServantFaceIconComponent__AdjustIconLabelPos((ServantFaceIconComponent_o *)gameObject, 1.0, -1.0, 0);
    }
    else
    {
      if ( !gameObject )
        goto LABEL_1153;
      ServantFaceIconComponent__ResetIconLabelPos((ServantFaceIconComponent_o *)gameObject, 0);
    }
    if ( v9->fields.isParty )
    {
      gameObject = (__int64)this->fields.partyIcon;
      if ( !gameObject )
        goto LABEL_1153;
      FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
    }
    if ( CombineServantListViewItem__get_IsDispLock(v9, 0) )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_1153;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1153;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    }
    v325 = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0);
    v326 = (UnityEngine_Object_o *)this->fields.baseButton;
    v327 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
    if ( v325 )
    {
      if ( !v327 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v323, v324);
      if ( UnityEngine_Object__op_Inequality(v326, 0, 0) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1153;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1153;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)this->fields.maskSprite;
        if ( !gameObject )
          goto LABEL_1153;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        if ( v9->fields.type == 10 && v9->fields.isCommandCardExceedMax )
        {
          v329 = this->fields.maskLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v328);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9664/*"NONSEELECT_STATUSUP_MAX"*/, 0);
          if ( !v329 )
            goto LABEL_1153;
          UILabel__set_text(v329, (System_String_o *)gameObject, 0);
        }
        if ( v9->fields.isEventJoin )
        {
          v330 = this->fields.maskLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v328);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/, 0);
          if ( !v330 )
            goto LABEL_1153;
          UILabel__set_text(v330, (System_String_o *)gameObject, 0);
        }
        if ( v9->fields.isHeroineSvt )
        {
          if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, switchInfoList, v328);
          if ( TutorialFlag__Get_47388504(126, 0) )
          {
            v331 = this->fields.maskLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList, v328);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12029/*"SELECT_CANNOT"*/, 0);
            if ( !v331 )
              goto LABEL_1153;
            v332 = (System_String_o *)gameObject;
            gameObject = (__int64)v331;
LABEL_1011:
            UILabel__set_text((UILabel_o *)gameObject, v332, 0);
          }
        }
      }
    }
    else
    {
      if ( !v327 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v323, v324);
      if ( UnityEngine_Object__op_Inequality(v326, 0, 0) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1153;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1153;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)this->fields.maskSprite;
        if ( !gameObject )
          goto LABEL_1153;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        gameObject = (__int64)this->fields.maskLabel;
        if ( !gameObject )
          goto LABEL_1153;
        v332 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_1011;
      }
    }
    if ( v9->fields.isBaseSvt )
    {
      gameObject = (__int64)this->fields.removeImg;
      if ( !gameObject )
        goto LABEL_1153;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1153;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    }
    v333 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, switchInfoList, v328);
    if ( UnityEngine_Object__op_Implicit(v333, 0) )
    {
      gameObject = (__int64)this->fields.svtCommandCardList;
      if ( !gameObject )
        goto LABEL_1153;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1153;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v334 = this->fields.svtCommandCardList;
      gameObject = CombineServantListViewItem__get_UserSvtId(v9, 0);
      if ( !v334 )
        goto LABEL_1153;
      ServantCommandCardListComponent__Set(v334, gameObject, 1, 1, 0);
    }
  }
  if ( v9->fields.type != 8 )
    goto LABEL_1080;
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1153;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0) )
  {
    v337 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v335, v336);
    if ( UnityEngine_Object__op_Inequality(v337, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)this->fields.maskSprite;
      if ( !gameObject )
        goto LABEL_1153;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1153;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      if ( v9->fields.isHeroineSvt && !v9->fields.isFriendshipExceedMax )
      {
        v340 = this->fields.maskLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v338, v339);
        v342 = &StringLiteral_9667/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        v340 = this->fields.maskLabel;
        v341 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
        if ( v9->fields.isEventJoin )
        {
          if ( !v341 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v338, v339);
          v342 = &StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/;
        }
        else
        {
          if ( !v341 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v338, v339);
          v342 = &StringLiteral_9721/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
        }
      }
      v348 = (System_String_o *)*v342;
      goto LABEL_1074;
    }
    goto LABEL_1076;
  }
  if ( !v9->fields.isFriendshipRankMax )
  {
    v343 = UnityEngine_Object_TypeInfo;
    v344 = (UnityEngine_Object_o *)this->fields.baseButton;
    v345 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
LABEL_1061:
    if ( !v345 )
      j_il2cpp_runtime_class_init_0(v343, v335, v336);
    if ( UnityEngine_Object__op_Inequality(v344, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1153;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_1076;
  }
  v343 = UnityEngine_Object_TypeInfo;
  v344 = (UnityEngine_Object_o *)this->fields.baseButton;
  v345 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( !v9->fields.isFriendshipExceedItemNum )
    goto LABEL_1061;
  if ( !v345 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v335, v336);
  if ( UnityEngine_Object__op_Inequality(v344, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1153;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1153;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)this->fields.maskSprite;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)this->fields.maskLabel;
    if ( !gameObject )
      goto LABEL_1153;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    gameObject = (__int64)this->fields.statusTxtLb;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v340 = this->fields.statusTxtLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v346, v347);
    v348 = (System_String_o *)StringLiteral_9157/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/;
LABEL_1074:
    gameObject = (__int64)LocalizationManager__Get(v348, 0);
    if ( !v340 )
      goto LABEL_1153;
    UILabel__set_text(v340, (System_String_o *)gameObject, 0);
  }
LABEL_1076:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1153;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_1080:
  if ( (unsigned int)(modeKind - 1) > 1 )
  {
    if ( modeKind == 3 )
    {
      if ( v9->fields.isEventJoin )
      {
        gameObject = (__int64)this->fields.maskSprite;
        if ( !gameObject )
          goto LABEL_1153;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v353 = this->fields.maskLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v351, v352);
        v354 = &StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/;
      }
      else
      {
        if ( !v9->fields.isCanNotLock )
        {
          gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0);
          if ( !gameObject )
            goto LABEL_1153;
          if ( !UserServantEntity__IsLeave((UserServantEntity_o *)gameObject, 0) )
          {
            gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0);
            if ( !gameObject )
              goto LABEL_1153;
            if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)gameObject, 0) )
            {
              gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0);
              if ( !gameObject )
                goto LABEL_1153;
              if ( !UserServantEntity__IsStatusUp((UserServantEntity_o *)gameObject, 0) )
              {
                gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0);
                if ( !gameObject )
                  goto LABEL_1153;
                if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)gameObject, 0) )
                {
                  gameObject = (__int64)this->fields.maskSprite;
                  if ( !gameObject )
                    goto LABEL_1153;
                  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                  if ( !gameObject )
                    goto LABEL_1153;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
                  gameObject = (__int64)this->fields.maskLabel;
                  if ( !gameObject )
                    goto LABEL_1153;
                  switchInfoList = (System_String_o *)StringLiteral_1/*""*/;
                  goto LABEL_1117;
                }
              }
            }
          }
        }
        gameObject = (__int64)this->fields.maskSprite;
        if ( !gameObject )
          goto LABEL_1153;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v353 = this->fields.maskLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v355, v356);
        v354 = &StringLiteral_8665/*"LOCKMODE_SELECTED_SERVANT"*/;
      }
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v354, 0);
      if ( !v353 )
        goto LABEL_1153;
      switchInfoList = (System_String_o *)gameObject;
      gameObject = (__int64)v353;
      goto LABEL_1117;
    }
  }
  else
  {
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_1085;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, switchInfoList, v31);
    if ( !TutorialFlag__Get_47388504(126, 0) )
    {
LABEL_1085:
      gameObject = (__int64)this->fields.maskSprite;
      if ( !gameObject )
        goto LABEL_1153;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1153;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9->fields.isCanNotLock, 0);
      if ( v9->fields.isCanNotLock )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v349, v350);
        switchInfoList = LocalizationManager__Get((System_String_o *)StringLiteral_8665/*"LOCKMODE_SELECTED_SERVANT"*/, 0);
      }
      else
      {
        switchInfoList = (System_String_o *)StringLiteral_1/*""*/;
      }
      gameObject = (__int64)this->fields.maskLabel;
      if ( !gameObject )
        goto LABEL_1153;
LABEL_1117:
      UILabel__set_text((UILabel_o *)gameObject, switchInfoList, 0);
      gameObject = (__int64)this->fields.statusTxtLb;
      if ( !gameObject )
        goto LABEL_1153;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    }
  }
}


void CombineServantListViewItemDraw__SetSelectDisp(
        CombineServantListViewItemDraw_o *this,
        CombineServantListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSelect; // x21
  __int64 v6; // x1
  DragSelectComponent_o *v7; // x0
  int32_t dragSelectNum; // w2
  int32_t selectNum; // w1

  if ( (byte_596A2AC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A2AC = 1;
  }
  dragSelect = (UnityEngine_Object_o *)this->fields.dragSelect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
  if ( !UnityEngine_Object__op_Equality(dragSelect, 0, 0) )
  {
    v7 = this->fields.dragSelect;
    if ( item )
    {
      if ( v7 )
      {
        dragSelectNum = item->fields.dragSelectNum;
        selectNum = item->fields.selectNum;
LABEL_11:
        DragSelectComponent__Set(v7, selectNum, dragSelectNum, 0);
        return;
      }
    }
    else if ( v7 )
    {
      selectNum = -1;
      dragSelectNum = -1;
      goto LABEL_11;
    }
    sub_2213CDC(v7, v6);
  }
}