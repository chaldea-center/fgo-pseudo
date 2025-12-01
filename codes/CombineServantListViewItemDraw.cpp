void CombineServantListViewItemDraw___ctor(CombineServantListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.fortificationInfoRootObjOffsetY = 9.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CombineServantListViewItemDraw__Awake(CombineServantListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UISprite_o *v17; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.defaultMaskAtlas, (int32_t)mAtlas, v2, v3, v4, v5, v6, v7);
  v17 = this->fields.maskSprite;
  if ( v17 )
    mSpriteName = v17->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.defaultMaskName,
    (int32_t)mSpriteName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void CombineServantListViewItemDraw__SetInput(
        CombineServantListViewItemDraw_o *this,
        CombineServantListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  _BOOL4 v4; // w21
  _BOOL4 IsSelect; // w0
  unsigned int type; // w8
  _BOOL4 v9; // w23
  bool CanNotBaseSelect; // w0
  bool v11; // w22
  _BOOL4 v12; // w25
  int v13; // w24
  UnityEngine_Object_o *baseButton; // x23
  bool v15; // w0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  UnityEngine_Component_o *maskSprite; // x0
  UILabel_o *v19; // x21
  LocalizationManager_c *v20; // x0
  UILabel_o *maskLabel; // x21
  uint32_t v22; // w8
  UnityEngine_Object_o *v23; // x22
  uint32_t cctor_finished; // w8
  int v25; // w22
  int32_t v26; // w8
  __int64 *v27; // x8
  int32_t atkBase; // w8
  UILabel_o *v29; // x21
  UILabel_o *v30; // x21

  v4 = isSelectEnable;
  if ( (byte_4CCB6C0 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_9288/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_1C713B0(&StringLiteral_9283/*"NONSELECT_MATERIAL"*/);
    sub_1C713B0(&StringLiteral_9286/*"NONSELECT_NPUP_BASE"*/);
    sub_1C713B0(&StringLiteral_9284/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    byte_4CCB6C0 = 1;
  }
  if ( item )
  {
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
    type = item->fields.type;
    v9 = IsSelect;
    if ( type > 0xC )
    {
      v11 = 0;
    }
    else
    {
      if ( ((1 << type) & 0x1FDD) != 0 )
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0);
      else
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotSelect(item, 0);
      v11 = CanNotBaseSelect;
    }
    v12 = !CombineServantListViewItem__get_IsOrganization(item, 0);
    v13 = !v9;
  }
  else
  {
    v11 = 0;
    v13 = 1;
    v12 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__op_Inequality(baseButton, 0, 0);
  if ( !v11 )
  {
    if ( v15 )
    {
      maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !maskSprite )
        goto LABEL_92;
      ((void (__fastcall *)(UnityEngine_Component_o *, __int64, const char *))maskSprite->klass[1]._1.name)(
        maskSprite,
        1,
        maskSprite->klass[1]._1.namespaze);
      maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !maskSprite )
        goto LABEL_92;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))maskSprite->klass[1]._1.nestedTypes)(
        maskSprite,
        0,
        1,
        maskSprite->klass[1]._1.implementedInterfaces);
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_92;
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
      if ( !maskSprite )
        goto LABEL_92;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
    }
    if ( !item )
      goto LABEL_80;
    v23 = (UnityEngine_Object_o *)this->fields.baseButton;
    cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
    if ( item->fields.isMaxSelect )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
      {
        maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
        if ( !maskSprite )
          goto LABEL_92;
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, const char *))maskSprite->klass[1]._1.name)(
          maskSprite,
          1,
          maskSprite->klass[1]._1.namespaze);
        maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
        if ( !maskSprite )
          goto LABEL_92;
        v25 = 1;
        ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))maskSprite->klass[1]._1.nestedTypes)(
          maskSprite,
          0,
          1,
          maskSprite->klass[1]._1.implementedInterfaces);
        goto LABEL_47;
      }
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
      {
        maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
        if ( !maskSprite )
          goto LABEL_92;
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, const char *))maskSprite->klass[1]._1.name)(
          maskSprite,
          1,
          maskSprite->klass[1]._1.namespaze);
        maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
        if ( !maskSprite )
          goto LABEL_92;
        ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))maskSprite->klass[1]._1.nestedTypes)(
          maskSprite,
          0,
          1,
          maskSprite->klass[1]._1.implementedInterfaces);
      }
    }
    v25 = 0;
LABEL_47:
    v26 = item->fields.type;
    if ( v26 == 5 )
    {
      if ( !(v25 & 1 | item->fields.isMaxNextLv) )
        goto LABEL_80;
    }
    else if ( v26 == 1 )
    {
      if ( ((v13 & ~(v12 || v4) | v25) & 1) == 0 )
        goto LABEL_80;
    }
    else if ( !v25 )
    {
      goto LABEL_80;
    }
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_92;
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
    if ( !maskSprite )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
    maskLabel = this->fields.maskLabel;
    v20 = LocalizationManager_TypeInfo;
    v22 = LocalizationManager_TypeInfo->_2.cctor_finished;
    if ( item->fields.type == 5 )
      goto LABEL_57;
    goto LABEL_75;
  }
  if ( !v15 )
    goto LABEL_80;
  maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
  if ( !maskSprite )
    goto LABEL_92;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, const char *))maskSprite->klass[1]._1.name)(
    maskSprite,
    1,
    maskSprite->klass[1]._1.namespaze);
  maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
  if ( !maskSprite )
    goto LABEL_92;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))maskSprite->klass[1]._1.nestedTypes)(
    maskSprite,
    0,
    1,
    maskSprite->klass[1]._1.implementedInterfaces);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_92;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
  if ( !item )
    goto LABEL_92;
  if ( !item->fields.isMaxNextLv )
  {
    if ( !item->fields.isStatusUpSvt )
      goto LABEL_80;
    if ( item->fields.isCanStUp )
    {
      atkBase = item->fields.atkBase;
      if ( item->fields.rarity >= 4 )
      {
        if ( atkBase >= 1 && item->fields.isNotSelectSecondStatusUpAtk )
        {
          v30 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9288/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
          if ( !v30 )
            goto LABEL_92;
          UILabel__set_text(v30, (System_String_o *)maskSprite, 0);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectSecondStatusUpHp )
          goto LABEL_80;
      }
      else
      {
        if ( atkBase >= 1 && item->fields.isNotSelectStatusUpAtk )
        {
          v29 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9288/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
          if ( !v29 )
            goto LABEL_92;
          UILabel__set_text(v29, (System_String_o *)maskSprite, 0);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectStatusUpHp )
          goto LABEL_80;
      }
      maskLabel = this->fields.maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = &StringLiteral_9288/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_78:
      maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v27, 0);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)maskSprite, 0);
        goto LABEL_80;
      }
LABEL_92:
      sub_1C71608(maskSprite, v16);
    }
    maskLabel = this->fields.maskLabel;
    v20 = LocalizationManager_TypeInfo;
    v22 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_75:
    if ( !v22 )
      j_il2cpp_runtime_class_init_0(v20);
    v27 = &StringLiteral_9283/*"NONSELECT_MATERIAL"*/;
    goto LABEL_78;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0) )
  {
    v19 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9284/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0);
    if ( !v19 )
      goto LABEL_92;
    UILabel__set_text(v19, (System_String_o *)maskSprite, 0);
    if ( item->fields.type == 5 )
    {
      v20 = LocalizationManager_TypeInfo;
      maskLabel = this->fields.maskLabel;
      v22 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_57:
      if ( !v22 )
        j_il2cpp_runtime_class_init_0(v20);
      v27 = &StringLiteral_9286/*"NONSELECT_NPUP_BASE"*/;
      goto LABEL_78;
    }
  }
LABEL_80:
  CombineServantListViewItemDraw__SetSelectDisp(this, item, v17);
}


void CombineServantListViewItemDraw__SetItem(
        CombineServantListViewItemDraw_o *this,
        CombineServantListViewItem_o *item,
        int32_t mode,
        bool isSelectEnable,
        int32_t modeKind,
        const MethodInfo *method)
{
  UnityEngine_Object_o *svtCommandCardList; // x23
  UIWidget_array *switchInfoList; // x1
  __int64 gameObject; // x0
  int32_t type; // w19
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  IconLabelInfo_o *iconLabelInfo1; // x2
  UIIconLabel_o *subIconLabel; // x23
  int32_t rarity; // w24
  int32_t v19; // w25
  UILabel_o **p_statusTxtLb; // x28
  struct UILabel_o **p_maskLabel; // x20
  UnityEngine_GameObject_o *v22; // x23
  UnityEngine_GameObject_o *v23; // x23
  UnityEngine_GameObject_o *v24; // x23
  UnityEngine_Object_o *pushImg; // x23
  UnityEngine_Object_o *materialTdSprite; // x23
  UISprite_o *v27; // x23
  const MethodInfo *v28; // x1
  int32_t v29; // w23
  int32_t v30; // w8
  bool CanNotBaseSelect; // w0
  UnityEngine_Object_o *v32; // x23
  bool v33; // w22
  bool v34; // w0
  struct UILabel_o *v35; // x22
  __int64 *v36; // x8
  int32_t v37; // w2
  char v38; // w20
  UILabel_o *v39; // x23
  UILabel_o *v40; // x23
  UILabel_o *v41; // x23
  const MethodInfo *v42; // x2
  UILabel_o *v43; // x23
  UILabel_o *v44; // x23
  UILabel_o *v45; // x23
  UILabel_o *v46; // x23
  UILabel_o *v47; // x23
  UILabel_o *v48; // x23
  _BOOL4 isParty; // w19
  __int64 *v50; // x8
  UILabel_o *v51; // x23
  _BOOL4 v52; // w19
  __int64 *v53; // x8
  UILabel_o *v54; // x23
  UnityEngine_GameObject_o *v55; // x23
  UILabel_o *v56; // x23
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x24
  bool v59; // w23
  bool v60; // w0
  UILabel_o *v61; // x22
  UILabel_o *v62; // x22
  UILabel_o *v63; // x22
  UILabel_o *v64; // x22
  __int64 *v65; // x8
  UnityEngine_Object_o *v66; // x23
  uint32_t cctor_finished; // w8
  int v68; // w19
  UILabel_o *v69; // x22
  System_String_o *v70; // x23
  Il2CppObject *v71; // x0
  UILabel_o *v72; // x22
  bool IsNotCombineResourceServant; // w0
  UILabel_o *v74; // x23
  bool v75; // w24
  System_String_o **v76; // x8
  UILabel_o *v77; // x22
  UILabel_o *v78; // x22
  UILabel_o *v79; // x22
  int32_t v80; // w8
  UILabel_o *v81; // x22
  UnityEngine_GameObject_o *v82; // x22
  UILabel_o *fortificationAppointmentLabel; // x22
  float fortificationInfoRootObjOffsetY; // s10
  float x; // s8
  float z; // s9
  System_String_o *v87; // x1
  System_Collections_Generic_List_object__o *v88; // x22
  System_String_o *v89; // x23
  Il2CppObject *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  struct System_Object_array *items; // x8
  _QWORD *v98; // x9
  __int64 size; // x10
  __int64 v100; // x1
  Il2CppClass **v101; // x0
  System_String_o *v102; // x23
  Il2CppObject *v103; // x0
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7
  struct System_Object_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  __int64 v113; // x1
  Il2CppClass **v114; // x0
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  struct System_Object_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  __int64 v124; // x1
  Il2CppClass **v125; // x0
  UnityEngine_Object_o *v126; // x22
  _BOOL4 isHeroineSvt; // w19
  UILabel_o *sealedStateLabel; // x22
  __int64 *v129; // x8
  bool v130; // w0
  UnityEngine_Object_o *v131; // x23
  bool v132; // w22
  bool v133; // w0
  UILabel_o *v134; // x22
  __int64 *v135; // x8
  UnityEngine_Object_o *v136; // x22
  System_String_o *v137; // x1
  UnityEngine_Object_o *v138; // x22
  UnityEngine_Object_o *v139; // x22
  int32_t v140; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  System_Text_StringBuilder_o *v142; // x22
  SkillInfo_array *v143; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned __int64 v145; // x19
  __int64 v146; // x20
  __int64 v147; // x21
  SkillInfo_o *v148; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v151; // w25
  Il2CppObject *v152; // x24
  bool v153; // w25
  __int64 *v154; // x8
  UILabel_o *skillLvLabel; // x23
  UnityEngine_Object_o *v156; // x22
  UILabel_o *v157; // x22
  UILabel_o *v158; // x22
  __int64 *v159; // x8
  _BOOL4 isSkillUpItemNum; // w19
  UnityEngine_Object_o *v161; // x22
  bool v162; // w0
  SvtUseSkillData_o *AppendSkillData; // x0
  struct System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v165; // x24
  System_Text_StringBuilder_o *v166; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  il2cpp_array_size_t v168; // x9
  unsigned __int64 v169; // x19
  __int64 v170; // x20
  __int64 v171; // x21
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v173; // x0
  int32_t v174; // w26
  int32_t v175; // w0
  int v176; // t1
  Il2CppObject *v177; // x25
  bool v178; // w26
  __int64 *v179; // x8
  UILabel_o *v180; // x24
  UILabel_o *v181; // x22
  UILabel_o *v182; // x22
  UILabel_o *v183; // x22
  UnityEngine_Object_o *v184; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  Il2CppObject *v188; // x0
  struct ItemIconComponent_o *coinIcon; // x22
  int32_t v190; // w8
  SvtUseSkillData_o *v191; // x23
  System_Text_StringBuilder_o *v192; // x22
  struct System_Int32_array *v193; // x8
  il2cpp_array_size_t v194; // x19
  char v195; // w27
  char v196; // w26
  char v197; // w25
  unsigned __int64 v198; // x21
  struct System_Int32_array *v199; // x8
  char *v200; // x0
  int v201; // t1
  int32_t v202; // w9
  int v203; // w8
  unsigned __int64 v204; // x29
  __int64 v205; // x26
  struct System_Int32_array *v206; // x8
  Il2CppObject *v207; // x24
  __int64 *v208; // x8
  char v209; // w26
  UILabel_o *v210; // x23
  UILabel_o *v211; // x22
  UILabel_o *v212; // x22
  __int64 *v213; // x8
  Il2CppObject *Master_object; // x22
  System_String_o *v215; // x23
  Il2CppObject *v216; // x0
  UnityEngine_Object_o *v217; // x22
  int32_t v218; // w2
  UnityEngine_Object_o *v219; // x22
  _BOOL4 v220; // w19
  UILabel_o *v221; // x22
  __int64 *v222; // x8
  UnityEngine_Object_o *v223; // x22
  System_String_o *v224; // x0
  int32_t v225; // w8
  UnityEngine_Object_o *v226; // x22
  _BOOL4 isEventJoin; // w19
  UILabel_o *v228; // x22
  __int64 *v229; // x8
  _BOOL4 isLvExceedItemNum; // w19
  UnityEngine_Object_o *v231; // x22
  bool v232; // w0
  System_String_o *v233; // x0
  UnityEngine_Object_o *v234; // x22
  UnityEngine_Object_o *v235; // x22
  const MethodInfo *v236; // x1
  int32_t v237; // w22
  struct ServantFaceIconComponent_o *v238; // x8
  bool v239; // w0
  UnityEngine_Object_o *v240; // x23
  bool v241; // w22
  bool v242; // w0
  UILabel_o *v243; // x22
  UILabel_o *v244; // x22
  struct UILabel_o *v245; // x22
  System_String_o *v246; // x1
  UnityEngine_Object_o *v247; // x22
  ServantCommandCardListComponent_o *v248; // x22
  UnityEngine_Object_o *v249; // x22
  _BOOL4 v250; // w19
  UILabel_o *v251; // x22
  __int64 *v252; // x8
  _BOOL4 isFriendshipExceedItemNum; // w19
  UnityEngine_Object_o *v254; // x22
  bool v255; // w0
  System_String_o *v256; // x0
  UnityEngine_Object_o *v257; // x22
  struct UILabel_o *v258; // x19
  System_String_o *v259; // x1
  UnityEngine_Object_o *v260; // x22
  char v261; // [xsp+20h] [xbp-D0h]
  int32_t v262; // [xsp+24h] [xbp-CCh]
  struct UILabel_o **v263; // [xsp+28h] [xbp-C8h]
  CombineServantListViewItemDraw_o *v264; // [xsp+30h] [xbp-C0h]
  CombineServantListViewItem_o *v265; // [xsp+38h] [xbp-B8h]
  struct UISprite_o **p_maskSprite; // [xsp+40h] [xbp-B0h]
  struct UILabel_o **v267; // [xsp+48h] [xbp-A8h]
  int32_t SkillOpenItemNum; // [xsp+54h] [xbp-9Ch] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+58h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+60h] [xbp-90h] BYREF
  MethodInfo tdMaxLv; // [xsp+68h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v272; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v274; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCB6BF & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&CombineServantListViewManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&System_Text_StringBuilder_TypeInfo);
    sub_1C713B0(&string_TypeInfo);
    sub_1C713B0(&TutorialFlag_TypeInfo);
    sub_1C713B0(&StringLiteral_12242/*"SKILL_LVDISP_TXT"*/);
    sub_1C713B0(&StringLiteral_10295/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/);
    sub_1C713B0(&StringLiteral_9288/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_1C713B0(&StringLiteral_6472/*"FORTIFICATION_APPOINTMENT"*/);
    sub_1C713B0(&StringLiteral_3565/*"COMBINE_CAN_STATUS_UP_INFO"*/);
    sub_1C713B0(&StringLiteral_8798/*"MSG_CAMPAIGN_COMBINE_EXP"*/);
    sub_1C713B0(&StringLiteral_12240/*"SKILL_LVDISP_ENABLE_TXT"*/);
    sub_1C713B0(&StringLiteral_1981/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/);
    sub_1C713B0(&StringLiteral_9283/*"NONSELECT_MATERIAL"*/);
    sub_1C713B0(&StringLiteral_23227/*"ribbon_noblephantasmup_01"*/);
    sub_1C713B0(&StringLiteral_9282/*"NONSELECT_LIMITUP_BASE"*/);
    sub_1C713B0(&StringLiteral_1982/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/);
    sub_1C713B0(&StringLiteral_10101/*"PARTY_MEMBER_TXT"*/);
    sub_1C713B0(&StringLiteral_3284/*"CAN_SELECT_SEALED_SERVANT_BASE"*/);
    sub_1C713B0(&StringLiteral_9286/*"NONSELECT_NPUP_BASE"*/);
    sub_1C713B0(&StringLiteral_12523/*"SUPPORT_MEMBER"*/);
    sub_1C713B0(&StringLiteral_8794/*"MSG_ABLED_LIMITUP"*/);
    sub_1C713B0(&StringLiteral_11557/*"SELECT_PUSH"*/);
    sub_1C713B0(&StringLiteral_11526/*"SELECT_CANNOT"*/);
    sub_1C713B0(&StringLiteral_9349/*"NPUP_BASE"*/);
    sub_1C713B0(&StringLiteral_1983/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/);
    sub_1C713B0(&StringLiteral_12239/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/);
    sub_1C713B0(&StringLiteral_11558/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C713B0(&StringLiteral_9337/*"NO_SELECT_FRIENDSHIP_EXCEED"*/);
    sub_1C713B0(&StringLiteral_11450/*"SAME_SERVANT"*/);
    sub_1C713B0(&StringLiteral_8793/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/);
    sub_1C713B0(&StringLiteral_9284/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    sub_1C713B0(&StringLiteral_25182/*"{0:#,0}"*/);
    sub_1C713B0(&StringLiteral_12241/*"SKILL_LVDISP_SINGLE_TXT"*/);
    sub_1C713B0(&StringLiteral_8795/*"MSG_ABLED_SKILLUP"*/);
    sub_1C713B0(&StringLiteral_9285/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/);
    sub_1C713B0(&StringLiteral_9289/*"NONSKILL_TXT"*/);
    sub_1C713B0(&StringLiteral_8317/*"LOCKMODE_SELECTED_SERVANT"*/);
    sub_1C713B0(&StringLiteral_6392/*"FAVORITE_SERVANT"*/);
    sub_1C713B0(&StringLiteral_3350/*"CHOICE_SERVANT"*/);
    sub_1C713B0(&StringLiteral_11043/*"RECOMMEND_SUPPORT_MEMBER"*/);
    sub_1C713B0(&StringLiteral_8797/*"MSG_ABLED_TDUP"*/);
    sub_1C713B0(&StringLiteral_11520/*"SEAL_COMBINE_LIMIT_THIRD"*/);
    sub_1C713B0(&StringLiteral_9281/*"NONSELECT_BASE_ALLMAX"*/);
    sub_1C713B0(&StringLiteral_9338/*"NO_SELECT_LVEXCEED"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_9287/*"NONSELECT_SKILLUP_BASE"*/);
    sub_1C713B0(&StringLiteral_11556/*"SELECT_PROTECTED_EVENT_SVT"*/);
    sub_1C713B0(&StringLiteral_6998/*"GRAND_MEMBER"*/);
    sub_1C713B0(&StringLiteral_8318/*"LOCK_SERVANT"*/);
    sub_1C713B0(&StringLiteral_9280/*"NONSEELECT_STATUSUP_MAX"*/);
    byte_4CCB6BF = 1;
  }
  tdMaxLv.invoker_method = 0;
  skillInfoList = 0;
  tdMaxLv.methodPointer = 0;
  entity = 0;
  if ( !item || !mode )
    return;
  svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(svtCommandCardList, 0) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  type = item->fields.type;
  servantFaceIcon = this->fields.servantFaceIcon;
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
  iconLabelInfo1 = item->fields.iconLabelInfo1;
  switchInfoList = (UIWidget_array *)gameObject;
  if ( type )
  {
    if ( !servantFaceIcon )
      goto LABEL_1106;
    ServantFaceIconComponent__Set_41281864(
      servantFaceIcon,
      (UserServantEntity_o *)gameObject,
      iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0);
    subIconLabel = this->fields.subIconLabel;
    rarity = item->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
    if ( !gameObject )
      goto LABEL_1106;
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_1106;
    ServantFaceIconComponent__Set_41281864(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0, 0);
    gameObject = (__int64)item->fields.iconLabelInfo2;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = IconLabelInfo__IsClear((IconLabelInfo_o *)gameObject, 0);
    subIconLabel = this->fields.subIconLabel;
    if ( (gameObject & 1) == 0 )
    {
      if ( !subIconLabel )
        goto LABEL_1106;
      UIIconLabel__Set(this->fields.subIconLabel, item->fields.iconLabelInfo2, 0);
      goto LABEL_22;
    }
    rarity = item->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
    if ( !gameObject )
      goto LABEL_1106;
  }
  v19 = *(_DWORD *)(gameObject + 296);
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
  if ( !gameObject || !subIconLabel )
    goto LABEL_1106;
  UIIconLabel__Set_41387288(
    subIconLabel,
    36,
    rarity,
    v19,
    0,
    0,
    0,
    0,
    *(_DWORD *)(gameObject + 256),
    item->fields.actualRarity,
    0);
LABEL_22:
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_1106;
  ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
    (ServantFaceIconComponent_o *)gameObject,
    this->fields.maskSprite,
    this->fields.defaultMaskName,
    this->fields.defaultMaskAtlas,
    0);
  CombineServantListViewItem__GetNpInfo(
    item,
    (int32_t *)&tdMaxLv.invoker_method + 1,
    (int32_t *)&tdMaxLv.invoker_method,
    (int32_t *)&tdMaxLv.methodPointer + 1,
    0);
  gameObject = (__int64)this->fields.lockImg;
  if ( !gameObject )
    goto LABEL_1106;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  p_statusTxtLb = &this->fields.statusTxtLb;
  gameObject = (__int64)this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1106;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.maskSprite;
  p_maskSprite = &this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_1106;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  p_maskLabel = &this->fields.maskLabel;
  gameObject = (__int64)this->fields.maskLabel;
  if ( !gameObject )
    goto LABEL_1106;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)*p_maskLabel;
  if ( !*p_maskLabel )
    goto LABEL_1106;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !byte_4CC0D0E )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D0E = 1;
  }
  GameObjectExtensions__SetLocalScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1106;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1106;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1106;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !byte_4CC0D0E )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D0E = 1;
  }
  GameObjectExtensions__SetLocalScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1106;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.partyIcon;
  if ( !gameObject )
    goto LABEL_1106;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.removeImg;
  if ( !gameObject )
    goto LABEL_1106;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1106;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.choiceImg;
  if ( !gameObject )
    goto LABEL_1106;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  gameObject = CombineServantListViewItem__get_IsDispChoice(item, 0);
  if ( !v24 )
    goto LABEL_1106;
  UnityEngine_GameObject__SetActive(v24, gameObject & 1, 0);
  gameObject = (__int64)this->fields.switchInfoComp;
  if ( !gameObject )
    goto LABEL_1106;
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.fortificationRootObj;
  if ( !gameObject )
    goto LABEL_1106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.fortificationNameLabel;
  if ( !gameObject )
    goto LABEL_1106;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)this->fields.fortificationDetailNameLabel;
  if ( !gameObject )
    goto LABEL_1106;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)this->fields.fortificationAppointmentLabel;
  if ( !gameObject )
    goto LABEL_1106;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushImg, 0, 0) )
  {
    gameObject = (__int64)this->fields.pushImg;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isPush, 0);
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_1106;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)gameObject, 0);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isMaterialTdSvt, 0);
    if ( item->fields.isMaterialTdSvt )
    {
      v27 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v27, (System_String_o *)StringLiteral_23227/*"ribbon_noblephantasmup_01"*/, 0);
      v29 = item->fields.type;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      if ( CombineServantListViewManager__GetSortKind(v29, v28) == 1 )
      {
        gameObject = (__int64)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_1106;
        v272.fields.x = 0.65;
        v272.fields.y = 1.0;
        v272.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v272, 0);
      }
    }
  }
  v30 = item->fields.type;
  v267 = &this->fields.maskLabel;
  switch ( v30 )
  {
    case 5:
      gameObject = (__int64)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_1106;
      v37 = SHIDWORD(tdMaxLv.invoker_method) <= 0 ? -1 : LODWORD(tdMaxLv.invoker_method);
      UIIconLabel__Set_41387288(
        (UIIconLabel_o *)gameObject,
        33,
        v37,
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
        goto LABEL_1106;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      goto LABEL_108;
    case 1:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1106;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0);
      if ( CombineServantListViewItem__get_IsProtected(item, 0) && item->fields.type != 5 )
      {
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1106;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
        if ( !gameObject )
          goto LABEL_1106;
        IsNotCombineResourceServant = UserServantEntity__IsNotCombineResourceServant(
                                        (UserServantEntity_o *)gameObject,
                                        0);
        v74 = *v267;
        v75 = IsNotCombineResourceServant;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v76 = (System_String_o **)(v75 ? &StringLiteral_9283/*"NONSELECT_MATERIAL"*/ : &StringLiteral_11556/*"SELECT_PROTECTED_EVENT_SVT"*/);
        gameObject = (__int64)LocalizationManager__Get(*v76, 0);
        if ( !v74 )
          goto LABEL_1106;
        UILabel__set_text(v74, (System_String_o *)gameObject, 0);
        v38 = 1;
LABEL_109:
        if ( item->fields.isParty )
        {
          gameObject = (__int64)this->fields.partyIcon;
          if ( !gameObject )
            goto LABEL_1106;
          FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1106;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1106;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v39 = *v267;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10101/*"PARTY_MEMBER_TXT"*/, 0);
          if ( !v39 )
            goto LABEL_1106;
          UILabel__set_text(v39, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        if ( item->fields.isFavorite )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1106;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1106;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v40 = *v267;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6392/*"FAVORITE_SERVANT"*/, 0);
          if ( !v40 )
            goto LABEL_1106;
          UILabel__set_text(v40, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
        {
          gameObject = (__int64)this->fields.lockImg;
          if ( !gameObject )
            goto LABEL_1106;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1106;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1106;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1106;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v41 = *v267;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8318/*"LOCK_SERVANT"*/, 0);
          if ( !v41 )
            goto LABEL_1106;
          UILabel__set_text(v41, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispChoice(item, 0) )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1106;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1106;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v43 = *v267;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3350/*"CHOICE_SERVANT"*/, 0);
          if ( !v43 )
            goto LABEL_1106;
          UILabel__set_text(v43, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        if ( item->fields.isLimitCntTarget )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1106;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1106;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v44 = *v267;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11450/*"SAME_SERVANT"*/, 0);
          if ( !v44 )
            goto LABEL_1106;
          UILabel__set_text(v44, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        if ( item->fields.isHeroineSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1106;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1106;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v45 = *v267;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9283/*"NONSELECT_MATERIAL"*/, 0);
          if ( !v45 )
            goto LABEL_1106;
          UILabel__set_text(v45, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        if ( item->fields.isStatusUpSvt && !item->fields.isCanStUp )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1106;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1106;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v46 = *v267;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9283/*"NONSELECT_MATERIAL"*/, 0);
          if ( !v46 )
            goto LABEL_1106;
          UILabel__set_text(v46, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        if ( item->fields.isEventJoin )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1106;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1106;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v47 = *v267;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11558/*"SELECT_SERVANT_EVENT_JOIN"*/, 0);
          if ( !v47 )
            goto LABEL_1106;
          UILabel__set_text(v47, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        if ( item->fields.isUseSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1106;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1106;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v48 = *v267;
          isParty = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v50 = &StringLiteral_12523/*"SUPPORT_MEMBER"*/;
          if ( isParty )
            v50 = &StringLiteral_10101/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v50, 0);
          if ( !v48 )
            goto LABEL_1106;
          UILabel__set_text(v48, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        if ( item->fields.isUseRecommendSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1106;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1106;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v51 = *v267;
          v52 = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v53 = &StringLiteral_11043/*"RECOMMEND_SUPPORT_MEMBER"*/;
          if ( v52 )
            v53 = &StringLiteral_10101/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v53, 0);
          if ( !v51 )
            goto LABEL_1106;
          UILabel__set_text(v51, (System_String_o *)gameObject, 0);
          if ( !item->fields.isParty )
          {
            gameObject = (__int64)*v267;
            if ( !*v267 )
              goto LABEL_1106;
            UILabel__SetCondensedScale((UILabel_o *)gameObject, 106, 0, 0);
          }
          v38 = 1;
        }
        if ( item->fields.isPush )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1106;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1106;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v54 = *v267;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11557/*"SELECT_PUSH"*/, 0);
          if ( !v54 )
            goto LABEL_1106;
          UILabel__set_text(v54, (System_String_o *)gameObject, 0);
          gameObject = (__int64)*v267;
          if ( !*v267 )
            goto LABEL_1106;
          v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !byte_4CC0D0E )
          {
            sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
            byte_4CC0D0E = 1;
          }
          GameObjectExtensions__SetLocalScale(v55, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          v38 = 1;
        }
        if ( item->fields.isGrandSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1106;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1106;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v56 = *v267;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6998/*"GRAND_MEMBER"*/, 0);
          if ( !v56 )
            goto LABEL_1106;
          UILabel__set_text(v56, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, item, v42);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(item, 0);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        v59 = CanNotSelect;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v60 = UnityEngine_Object__op_Inequality(baseButton, 0, 0);
        if ( v59 )
        {
          if ( !v60 )
            break;
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1106;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1106;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1106;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1106;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          if ( item->fields.isMaxNextLv || item->fields.isBaseLvMax )
          {
            if ( !item->fields.isCanStUp )
            {
              if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0) )
              {
                v77 = *v267;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9284/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0);
                if ( !v77 )
                  goto LABEL_1106;
                UILabel__set_text(v77, (System_String_o *)gameObject, 0);
                if ( item->fields.type != 5 )
                  break;
                v64 = *v267;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v65 = &StringLiteral_9286/*"NONSELECT_NPUP_BASE"*/;
LABEL_336:
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v65, 0);
                if ( !v64 )
                  goto LABEL_1106;
LABEL_337:
                UILabel__set_text(v64, (System_String_o *)gameObject, 0);
              }
LABEL_338:
              v80 = item->fields.type;
              if ( v80 != 5 )
                goto LABEL_420;
              if ( item->fields.isBaseSvt )
              {
                v81 = *v267;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9349/*"NPUP_BASE"*/, 0);
                if ( !v81 )
                  goto LABEL_1106;
                UILabel__set_text(v81, (System_String_o *)gameObject, 0);
                gameObject = (__int64)*v267;
                if ( !*v267 )
                  goto LABEL_1106;
                v82 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !byte_4CC0D0E )
                {
                  sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
                  byte_4CC0D0E = 1;
                }
                GameObjectExtensions__SetLocalScale(v82, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
              }
              break;
            }
          }
          else if ( !item->fields.isCanStUp )
          {
            if ( item->fields.isFortification )
            {
              gameObject = (__int64)*v267;
              if ( !*v267 )
                goto LABEL_1106;
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1106;
              gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1106;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1106;
              UILabel__set_text((UILabel_o *)gameObject, item->fields.fortificationName, 0);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1106;
              UILabel__set_text((UILabel_o *)gameObject, item->fields.fortificationDetailName, 0);
              fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6472/*"FORTIFICATION_APPOINTMENT"*/, 0);
              if ( !fortificationAppointmentLabel )
                goto LABEL_1106;
              UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)gameObject, 0);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1106;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1106;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0);
              if ( item->fields.type != 5 )
                break;
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1106;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1106;
              localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1106;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              x = localPosition.fields.x;
              z = localPosition.fields.z;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1106;
              v274.fields.x = x;
              v274.fields.y = fortificationInfoRootObjOffsetY;
              v274.fields.z = z;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v274, 0);
              goto LABEL_338;
            }
            if ( (v38 & 1) == 0 )
            {
              v64 = *v267;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9283/*"NONSELECT_MATERIAL"*/, 0);
              if ( !v64 )
                goto LABEL_1106;
              goto LABEL_337;
            }
            goto LABEL_338;
          }
          if ( item->fields.isStatusUpSvt )
          {
            if ( item->fields.rarity <= 3 )
            {
              if ( item->fields.isAtkUpMax || item->fields.isHpUpMax )
              {
                v78 = *v267;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9288/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                if ( !v78 )
                  goto LABEL_1106;
                UILabel__set_text(v78, (System_String_o *)gameObject, 0);
              }
              if ( item->fields.isAtkSecondUpMax || item->fields.isHpSecondUpMax )
              {
                v79 = *v267;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9288/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                if ( !v79 )
                  goto LABEL_1106;
                UILabel__set_text(v79, (System_String_o *)gameObject, 0);
              }
              if ( !item->fields.isNotSelectStatusUpAtk && !item->fields.isNotSelectStatusUpHp )
                goto LABEL_338;
              v64 = *v267;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v65 = &StringLiteral_9288/*"NONSELECT_UNDER_STATUS_MAX"*/;
            }
            else
            {
              if ( item->fields.atkBase >= 1 )
              {
                if ( item->fields.isAtkSecondUpMax || item->fields.isNotSelectSecondStatusUpAtk )
                {
                  v61 = *v267;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9288/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                  if ( !v61 )
                    goto LABEL_1106;
                  UILabel__set_text(v61, (System_String_o *)gameObject, 0);
                }
                if ( !item->fields.isAtkUpMax )
                {
                  v62 = *v267;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9285/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0);
                  if ( !v62 )
                    goto LABEL_1106;
                  UILabel__set_text(v62, (System_String_o *)gameObject, 0);
                }
              }
              if ( item->fields.hpBase < 1 )
                goto LABEL_338;
              if ( item->fields.isHpSecondUpMax || item->fields.isNotSelectSecondStatusUpHp )
              {
                v63 = *v267;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9288/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                if ( !v63 )
                  goto LABEL_1106;
                UILabel__set_text(v63, (System_String_o *)gameObject, 0);
              }
              if ( item->fields.isHpUpMax )
                goto LABEL_338;
              v64 = *v267;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v65 = &StringLiteral_9285/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
            }
            goto LABEL_336;
          }
          goto LABEL_338;
        }
        if ( v60 )
        {
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1106;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1106;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1106;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1106;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        v66 = (UnityEngine_Object_o *)this->fields.baseButton;
        cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
        if ( item->fields.isMaxSelect )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v66, 0, 0) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1106;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1106;
            v68 = 1;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
LABEL_283:
            if ( item->fields.type == 1 && CombineServantListViewItem__get_IsOrganization(item, 0) && !isSelectEnable )
            {
              if ( !(v68 & 1 | !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0)) )
                break;
            }
            else if ( !v68 )
            {
              break;
            }
            gameObject = (__int64)*p_maskSprite;
            if ( !*p_maskSprite )
              goto LABEL_1106;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_1106;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            v72 = *v267;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9283/*"NONSELECT_MATERIAL"*/, 0);
            if ( !v72 )
              goto LABEL_1106;
            UILabel__set_text(v72, (System_String_o *)gameObject, 0);
            break;
          }
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v66, 0, 0) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1106;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1106;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          }
        }
        v68 = 0;
        goto LABEL_283;
      }
LABEL_108:
      v38 = 0;
      goto LABEL_109;
    case 0:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1106;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0);
      if ( item->fields.isParty )
      {
        gameObject = (__int64)this->fields.partyIcon;
        if ( !gameObject )
          goto LABEL_1106;
        FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
      }
      if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
      {
        gameObject = (__int64)this->fields.lockImg;
        if ( !gameObject )
          goto LABEL_1106;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      }
      CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0);
      v32 = (UnityEngine_Object_o *)this->fields.baseButton;
      v33 = CanNotBaseSelect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v34 = UnityEngine_Object__op_Inequality(v32, 0, 0);
      if ( v33 )
      {
        if ( !v34 )
          goto LABEL_415;
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1106;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1106;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1106;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        if ( item->fields.isHeroineSvt )
        {
          if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          if ( TutorialFlag__Get_40699620(126, 0) )
          {
            v35 = *v267;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v36 = &StringLiteral_11526/*"SELECT_CANNOT"*/;
LABEL_375:
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v36, 0);
            if ( !v35 )
              goto LABEL_1106;
            v87 = (System_String_o *)gameObject;
            gameObject = (__int64)v35;
LABEL_377:
            UILabel__set_text((UILabel_o *)gameObject, v87, 0);
            gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
            if ( !gameObject )
              goto LABEL_1106;
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              *p_statusTxtLb,
              0);
LABEL_415:
            if ( item->fields.isBaseSvt )
            {
              gameObject = (__int64)this->fields.removeImg;
              if ( !gameObject )
                goto LABEL_1106;
              gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1106;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            }
            break;
          }
        }
        if ( item->fields.isLvMax )
        {
          if ( !item->fields.isStatusUpSvt )
          {
            if ( !item->fields.isExpUpSvt )
            {
              v35 = *v267;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v36 = &StringLiteral_9281/*"NONSELECT_BASE_ALLMAX"*/;
              goto LABEL_375;
            }
            goto LABEL_371;
          }
        }
        else if ( !item->fields.isStatusUpSvt )
        {
LABEL_371:
          if ( !item->fields.isExpUpSvt )
          {
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1106;
            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
            gameObject = (__int64)*v267;
            if ( !*v267 )
              goto LABEL_1106;
            v87 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_377;
          }
        }
        v35 = *v267;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v36 = &StringLiteral_9283/*"NONSELECT_MATERIAL"*/;
        goto LABEL_375;
      }
      if ( !v34 )
        goto LABEL_415;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1106;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1106;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1106;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1106;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)*v267;
      if ( !*v267 )
        goto LABEL_1106;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( item->fields.isCombineExpCampaignTarget )
      {
        if ( item->fields.isDispAtkStatusUpInfo
          && CombineServantListViewItem__get_IsAtkAdjustMax(item, 0)
          && !CombineServantListViewItem__get_IsSecondAtkAdjustMax(item, 0) )
        {
          v88 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v88,
            (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v89 = LocalizationManager__Get((System_String_o *)StringLiteral_8798/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
          *(float *)&tdMaxLv.methodPointer = item->fields.combineExpCampaignValue;
          v90 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
          gameObject = (__int64)System_String__Format(v89, v90, 0);
          if ( !v88 )
            goto LABEL_1106;
          items = v88->fields._items;
          v98 = Method_System_Collections_Generic_List_string__Add__;
          ++v88->fields._version;
          if ( !items )
            goto LABEL_1106;
          size = v88->fields._size;
          v100 = gameObject;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v88,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
          }
          else
          {
            v101 = &items->obj.klass + size;
            v88->fields._size = size + 1;
            v101[4] = (Il2CppClass *)v100;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v101 + 4), v100, v91, v92, v93, v94, v95, v96);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3565/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0);
          v121 = v88->fields._items;
          v122 = Method_System_Collections_Generic_List_string__Add__;
          ++v88->fields._version;
          if ( !v121 )
            goto LABEL_1106;
        }
        else
        {
          if ( !item->fields.isDispHpStatusUpInfo
            || !CombineServantListViewItem__get_IsHpAdjustMax(item, 0)
            || CombineServantListViewItem__get_IsSecondHpAdjustMax(item, 0) )
          {
            gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
            if ( !gameObject )
              goto LABEL_1106;
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              *p_statusTxtLb,
              0);
            v69 = *p_statusTxtLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v70 = LocalizationManager__Get((System_String_o *)StringLiteral_8798/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
            *(float *)&tdMaxLv.methodPointer = item->fields.combineExpCampaignValue;
            v71 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
            gameObject = (__int64)System_String__Format(v70, v71, 0);
            if ( !v69 )
              goto LABEL_1106;
LABEL_275:
            UILabel__set_text(v69, (System_String_o *)gameObject, 0);
LABEL_412:
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1106;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_1106;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            goto LABEL_415;
          }
          v88 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v88,
            (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v102 = LocalizationManager__Get((System_String_o *)StringLiteral_8798/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
          *(float *)&tdMaxLv.methodPointer = item->fields.combineExpCampaignValue;
          v103 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
          gameObject = (__int64)System_String__Format(v102, v103, 0);
          if ( !v88 )
            goto LABEL_1106;
          v110 = v88->fields._items;
          v111 = Method_System_Collections_Generic_List_string__Add__;
          ++v88->fields._version;
          if ( !v110 )
            goto LABEL_1106;
          v112 = v88->fields._size;
          v113 = gameObject;
          if ( (unsigned int)v112 >= LODWORD(v110->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v88,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
          }
          else
          {
            v114 = &v110->obj.klass + v112;
            v88->fields._size = v112 + 1;
            v114[4] = (Il2CppClass *)v113;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v114 + 4), v113, v104, v105, v106, v107, v108, v109);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3565/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0);
          v121 = v88->fields._items;
          v122 = Method_System_Collections_Generic_List_string__Add__;
          ++v88->fields._version;
          if ( !v121 )
            goto LABEL_1106;
        }
        v123 = v88->fields._size;
        v124 = gameObject;
        if ( (unsigned int)v123 >= LODWORD(v121->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v88,
            (Il2CppObject *)gameObject,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
        }
        else
        {
          v125 = &v121->obj.klass + v123;
          v88->fields._size = v123 + 1;
          v125[4] = (Il2CppClass *)v124;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v125 + 4), v124, v115, v116, v117, v118, v119, v120);
        }
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1106;
        CombineServantListViewNoticeTween__AddTarget(
          (CombineServantListViewNoticeTween_o *)gameObject,
          *p_statusTxtLb,
          (System_Collections_Generic_List_string__o *)v88,
          0);
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1106;
        CombineServantListViewNoticeTween__SetTexts((CombineServantListViewNoticeTween_o *)gameObject, 0, 0);
        goto LABEL_412;
      }
      gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
      if ( !gameObject )
        goto LABEL_1106;
      CombineServantListViewNoticeTween__RemoveTarget(
        (CombineServantListViewNoticeTween_o *)gameObject,
        *p_statusTxtLb,
        0);
      if ( item->fields.isDispAtkStatusUpInfo )
      {
        if ( !CombineServantListViewItem__get_IsAtkAdjustMax(item, 0)
          || CombineServantListViewItem__get_IsSecondAtkAdjustMax(item, 0) )
        {
          goto LABEL_415;
        }
      }
      else if ( !item->fields.isDispHpStatusUpInfo
             || !CombineServantListViewItem__get_IsHpAdjustMax(item, 0)
             || CombineServantListViewItem__get_IsSecondHpAdjustMax(item, 0) )
      {
        goto LABEL_415;
      }
      v69 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3565/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0);
      if ( !v69 )
        goto LABEL_1106;
      goto LABEL_275;
  }
  v80 = item->fields.type;
LABEL_420:
  if ( v80 == 9 )
  {
    gameObject = (__int64)this->fields.limitCountIcon;
    if ( !gameObject )
      goto LABEL_1106;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)gameObject,
      item->fields.currentLimitCnt,
      item->fields.maxLimitCnt,
      0);
    if ( item->fields.isParty )
    {
      gameObject = (__int64)this->fields.partyIcon;
      if ( !gameObject )
        goto LABEL_1106;
      FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
    }
    if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_1106;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1106;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    }
    v130 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0);
    v131 = (UnityEngine_Object_o *)this->fields.baseButton;
    v132 = v130;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v133 = UnityEngine_Object__op_Inequality(v131, 0, 0);
    if ( !v132 )
    {
      if ( !v133 )
        goto LABEL_509;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1106;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1106;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1106;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1106;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)*v267;
      if ( !*v267 )
        goto LABEL_1106;
      v137 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_508;
    }
    if ( !v133 )
      goto LABEL_509;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( item->fields.isHeroineSvt || item->fields.isEventJoin || item->fields.isIgnoreCombineLimitSpecial )
    {
      v134 = *v267;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v135 = &StringLiteral_9283/*"NONSELECT_MATERIAL"*/;
    }
    else if ( item->fields.isLimitCntMax )
    {
      v134 = *v267;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v135 = &StringLiteral_9282/*"NONSELECT_LIMITUP_BASE"*/;
    }
    else
    {
      if ( !item->fields.isSealCombineLimit )
        goto LABEL_509;
      v134 = *v267;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v135 = &StringLiteral_11520/*"SEAL_COMBINE_LIMIT_THIRD"*/;
    }
LABEL_506:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v135, 0);
    if ( !v134 )
      goto LABEL_1106;
    v137 = (System_String_o *)gameObject;
    gameObject = (__int64)v134;
LABEL_508:
    UILabel__set_text((UILabel_o *)gameObject, v137, 0);
    goto LABEL_509;
  }
  if ( v80 != 2 )
    goto LABEL_513;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1106;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1106;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0) )
  {
    v126 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v126, 0, 0) )
      goto LABEL_495;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    isHeroineSvt = item->fields.isHeroineSvt;
    sealedStateLabel = *v267;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isHeroineSvt )
      v129 = &StringLiteral_9283/*"NONSELECT_MATERIAL"*/;
    else
      v129 = &StringLiteral_9282/*"NONSELECT_LIMITUP_BASE"*/;
LABEL_493:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v129, 0);
    if ( !sealedStateLabel )
      goto LABEL_1106;
    UILabel__set_text(sealedStateLabel, (System_String_o *)gameObject, 0);
    goto LABEL_495;
  }
  if ( item->fields.isSealedLimitCount && item->fields.isLimitCntMax )
  {
    v136 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v136, 0, 0) )
      goto LABEL_495;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)this->fields.sealedStateLabel;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    sealedStateLabel = this->fields.sealedStateLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v129 = &StringLiteral_3284/*"CAN_SELECT_SEALED_SERVANT_BASE"*/;
    goto LABEL_493;
  }
  if ( item->fields.isLvMax && item->fields.isLimitUpItemNum && !item->fields.isSealCombineLimit )
  {
    if ( !item->fields.isLimitCntMax )
    {
      v260 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v260, 0, 0) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1106;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1106;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1106;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        gameObject = (__int64)*v267;
        if ( !*v267 )
          goto LABEL_1106;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
        gameObject = (__int64)*p_statusTxtLb;
        if ( !*p_statusTxtLb )
          goto LABEL_1106;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v134 = *p_statusTxtLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v135 = &StringLiteral_8794/*"MSG_ABLED_LIMITUP"*/;
        goto LABEL_506;
      }
    }
  }
  else
  {
    v138 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v138, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1106;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1106;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
  }
LABEL_495:
  if ( item->fields.isSealedLimitCount )
  {
    v139 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v139, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1106;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1106;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)this->fields.sealedStateLabel;
      if ( !gameObject )
        goto LABEL_1106;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1106;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v134 = this->fields.sealedStateLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v135 = &StringLiteral_3284/*"CAN_SELECT_SEALED_SERVANT_BASE"*/;
      goto LABEL_506;
    }
  }
LABEL_509:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_513:
  v140 = item->fields.type;
  v264 = this;
  v265 = item;
  v262 = modeKind;
  v263 = &this->fields.statusTxtLb;
  if ( v140 != 3 )
    goto LABEL_589;
  CombineServantListViewItem__GetSkillInfo(item, &skillInfoList, 0);
  enableSkillUp = item->fields.enableSkillUp;
  v142 = (System_Text_StringBuilder_o *)sub_1C715FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v142, 0);
  v143 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_1106;
  max_length = skillInfoList->max_length;
  if ( (int)max_length >= 1 )
  {
    v145 = 0;
    v146 = (unsigned int)(max_length - 1);
    v147 = (unsigned int)skillInfoList->max_length;
    while ( 1 )
    {
      if ( v145 >= LODWORD(v143->max_length) )
        goto LABEL_1107;
      v148 = v143->m_Items[v145];
      if ( v148 )
      {
        lv = v148->fields.lv;
        p_lv = &v148->fields.lv;
        v151 = *(p_lv - 1);
        if ( lv > 0 )
        {
          gameObject = (__int64)System_Int32__ToString((int32_t)p_lv, 0);
          goto LABEL_525;
        }
      }
      else
      {
        v151 = -1;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9289/*"NONSKILL_TXT"*/, 0);
LABEL_525:
      v152 = (Il2CppObject *)gameObject;
      if ( enableSkillUp )
      {
        v153 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v151,
                 (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v146 == v145 )
        {
          v154 = &StringLiteral_12239/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v153 )
            v154 = &StringLiteral_12241/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v154 = &StringLiteral_12240/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v153 )
            v154 = &StringLiteral_12242/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v154, 0);
        if ( v142 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v142, (System_String_o *)gameObject, v152, 0);
          if ( v147 == ++v145 )
            goto LABEL_539;
          v143 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_1106;
    }
  }
  if ( !v142 )
    goto LABEL_1106;
LABEL_539:
  skillLvLabel = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v142->klass->vtable._3_ToString.methodPtr)(
                 v142,
                 v142->klass->vtable._3_ToString.method);
  if ( !skillLvLabel )
    goto LABEL_1106;
  UILabel__set_text(skillLvLabel, (System_String_o *)gameObject, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1106;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  modeKind = v262;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1106;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0) )
  {
    v156 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v156, 0, 0) )
      goto LABEL_584;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v157 = *v267;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9287/*"NONSELECT_SKILLUP_BASE"*/, 0);
    if ( !v157 )
      goto LABEL_1106;
    UILabel__set_text(v157, (System_String_o *)gameObject, 0);
    if ( !item->fields.isHeroineSvt )
      goto LABEL_584;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_40699620(126, 0) )
      goto LABEL_584;
    v158 = *v267;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v159 = &StringLiteral_11526/*"SELECT_CANNOT"*/;
    goto LABEL_578;
  }
  isSkillUpItemNum = item->fields.isSkillUpItemNum;
  v161 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v162 = UnityEngine_Object__op_Inequality(v161, 0, 0);
  if ( !isSkillUpItemNum )
  {
    if ( v162 )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1106;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1106;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_584;
  }
  if ( v162 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*v263;
    if ( !*v263 )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v158 = *v263;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v159 = &StringLiteral_8795/*"MSG_ABLED_SKILLUP"*/;
LABEL_578:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v159, 0);
    if ( !v158 )
      goto LABEL_1106;
    UILabel__set_text(v158, (System_String_o *)gameObject, 0);
  }
LABEL_584:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v140 = item->fields.type;
LABEL_589:
  if ( v140 != 11 )
    goto LABEL_684;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(item, 0);
  enableAppendSkillUp = item->fields.enableAppendSkillUp;
  v165 = AppendSkillData;
  v166 = (System_Text_StringBuilder_o *)sub_1C715FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v166, 0);
  if ( !v165 )
    goto LABEL_1106;
  svtUseSkillIdList = v165->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_1106;
  v168 = svtUseSkillIdList->max_length;
  if ( (int)v168 >= 1 )
  {
    v169 = 0;
    v170 = (unsigned int)(v168 - 1);
    v171 = (unsigned int)svtUseSkillIdList->max_length;
    while ( v169 < LODWORD(svtUseSkillIdList->max_length) )
    {
      svtSkillLvList = v165->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_1106;
      if ( v169 >= LODWORD(svtSkillLvList->max_length) )
        break;
      v173 = (__int64)svtSkillLvList + 4 * v169;
      v174 = svtUseSkillIdList->m_Items[v169];
      v176 = *(_DWORD *)(v173 + 32);
      v175 = v173 + 32;
      if ( v176 <= 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9289/*"NONSKILL_TXT"*/, 0);
      }
      else
      {
        gameObject = (__int64)System_Int32__ToString(v175, 0);
      }
      v177 = (Il2CppObject *)gameObject;
      if ( enableAppendSkillUp )
      {
        v178 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v174,
                 (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v169 == v170 )
        {
          v179 = &StringLiteral_12239/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v178 )
            v179 = &StringLiteral_12241/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v179 = &StringLiteral_12240/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v178 )
            v179 = &StringLiteral_12242/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v179, 0);
        if ( v166 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v166, (System_String_o *)gameObject, v177, 0);
          if ( ++v169 == v171 )
            goto LABEL_616;
          svtUseSkillIdList = v165->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_1106;
    }
LABEL_1107:
    sub_1C71610(gameObject);
  }
  if ( !v166 )
    goto LABEL_1106;
LABEL_616:
  v180 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v166->klass->vtable._3_ToString.methodPtr)(
                 v166,
                 v166->klass->vtable._3_ToString.method);
  if ( !v180 )
    goto LABEL_1106;
  UILabel__set_text(v180, (System_String_o *)gameObject, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1106;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  modeKind = v262;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1106;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  gameObject = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v181 = *v267;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9287/*"NONSELECT_SKILLUP_BASE"*/, 0);
    if ( !v181 )
      goto LABEL_1106;
    UILabel__set_text(v181, (System_String_o *)gameObject, 0);
    if ( item->fields.isEventJoin )
    {
      v182 = *v267;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10295/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v182 )
        goto LABEL_1106;
      UILabel__set_text(v182, (System_String_o *)gameObject, 0);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_654;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_40699620(126, 0) )
      goto LABEL_654;
    v183 = *v267;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11526/*"SELECT_CANNOT"*/, 0);
    if ( !v183 )
      goto LABEL_1106;
  }
  else
  {
    if ( !enableAppendSkillUp )
      goto LABEL_1106;
    if ( enableAppendSkillUp->fields._size <= 0 && !item->fields.isAppendSkillOpenItemNum )
      goto LABEL_654;
    gameObject = (__int64)*v263;
    if ( !*v263 )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v183 = *v263;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8795/*"MSG_ABLED_SKILLUP"*/, 0);
    if ( !v183 )
      goto LABEL_1106;
  }
  UILabel__set_text(v183, (System_String_o *)gameObject, 0);
LABEL_654:
  v184 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v184, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  coinInfo = (UnityEngine_Object_o *)this->fields.coinInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(coinInfo, 0, 0) )
  {
    switchInfoComp = (UnityEngine_Object_o *)this->fields.switchInfoComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchInfoComp, 0, 0) )
    {
      switchInfoList = this->fields.switchInfoList;
      if ( switchInfoList )
      {
        gameObject = (__int64)this->fields.switchInfoComp;
        if ( !gameObject )
          goto LABEL_1106;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)gameObject, switchInfoList, 0, 0);
        gameObject = (__int64)this->fields.coinInfo;
        if ( !gameObject )
          goto LABEL_1106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        coinNumLabel = this->fields.coinNumLabel;
        gameObject = CombineServantListViewItem__get_SkillOpenItemNum(item, 0);
        if ( (gameObject & 0x80000000) != 0 )
        {
          switchInfoList = (UIWidget_array *)StringLiteral_1/*""*/;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(item, 0);
          v188 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum);
          gameObject = (__int64)System_String__Format((System_String_o *)StringLiteral_25182/*"{0:#,0}"*/, v188, 0);
          switchInfoList = (UIWidget_array *)gameObject;
        }
        if ( !coinNumLabel )
          goto LABEL_1106;
        UILabel__set_text(coinNumLabel, (System_String_o *)switchInfoList, 0);
        gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, 0);
        coinIcon = this->fields.coinIcon;
        if ( (int)gameObject < 1 )
        {
          if ( !coinIcon )
            goto LABEL_1106;
          gameObject = (__int64)coinIcon->fields.iconSprite;
          if ( !gameObject )
            goto LABEL_1106;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1106;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        else
        {
          gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, 0);
          if ( !coinIcon )
            goto LABEL_1106;
          ItemIconComponent__SetItem(coinIcon, gameObject, -1, 1, 0);
        }
      }
    }
  }
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_684:
  v190 = item->fields.type;
  if ( v190 != 12 )
    goto LABEL_798;
  v191 = CombineServantListViewItem__GetAppendSkillData(item, 0);
  v192 = (System_Text_StringBuilder_o *)sub_1C715FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v192, 0);
  if ( !v191 )
    goto LABEL_1106;
  v193 = v191->fields.svtUseSkillIdList;
  if ( !v193 )
    goto LABEL_1106;
  v194 = v193->max_length;
  if ( (int)v194 < 1 )
  {
    v197 = 0;
    v209 = 0;
    if ( !v192 )
      goto LABEL_1106;
  }
  else
  {
    v195 = 0;
    v196 = 0;
    v197 = 0;
    v198 = 0;
    while ( 1 )
    {
      if ( v198 >= LODWORD(v193->max_length) )
        goto LABEL_1107;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9289/*"NONSKILL_TXT"*/, 0);
      v199 = v191->fields.svtSkillLvList;
      if ( !v199 )
        goto LABEL_1106;
      if ( v198 >= LODWORD(v199->max_length) )
        goto LABEL_1107;
      v200 = (char *)v199 + 4 * v198;
      v201 = *((_DWORD *)v200 + 8);
      gameObject = (__int64)(v200 + 32);
      if ( v201 >= 1 )
      {
        gameObject = (__int64)System_Int32__ToString(gameObject, 0);
        v199 = v191->fields.svtSkillLvList;
        if ( !v199 )
          goto LABEL_1106;
        v196 = 1;
      }
      if ( v198 >= LODWORD(v199->max_length) )
        goto LABEL_1107;
      v202 = v199->m_Items[0];
      v203 = v199->m_Items[v198++];
      v197 |= v203 < 10;
      v195 |= v202 != v203;
      if ( v198 == (unsigned int)v194 )
        break;
      v193 = v191->fields.svtUseSkillIdList;
      if ( !v193 )
        goto LABEL_1106;
    }
    v261 = v196;
    v204 = 0;
    v205 = 32;
    do
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9289/*"NONSKILL_TXT"*/, 0);
      v206 = v191->fields.svtSkillLvList;
      if ( !v206 )
        goto LABEL_1106;
      if ( v204 >= LODWORD(v206->max_length) )
        goto LABEL_1107;
      v207 = (Il2CppObject *)gameObject;
      if ( *(int *)((char *)&v206->obj.klass + v205) >= 1 )
        v207 = (Il2CppObject *)System_Int32__ToString((int)v206 + (int)v205, 0);
      if ( (_DWORD)v194 - 1 == v204 )
      {
        if ( (v195 & 1) == 0 )
          goto LABEL_714;
        if ( !v265->fields.isHeroineSvt )
          goto LABEL_723;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_40699620(126, 0) )
        {
LABEL_714:
          v208 = &StringLiteral_12241/*"SKILL_LVDISP_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v208 = &StringLiteral_12241/*"SKILL_LVDISP_SINGLE_TXT"*/;
          }
        }
        else
        {
LABEL_723:
          v208 = &StringLiteral_12239/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v208 = &StringLiteral_12239/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          }
        }
      }
      else
      {
        if ( (v195 & 1) == 0 )
          goto LABEL_721;
        if ( !v265->fields.isHeroineSvt )
          goto LABEL_725;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_40699620(126, 0) )
        {
LABEL_721:
          v208 = &StringLiteral_12242/*"SKILL_LVDISP_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v208 = &StringLiteral_12242/*"SKILL_LVDISP_TXT"*/;
          }
        }
        else
        {
LABEL_725:
          v208 = &StringLiteral_12240/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v208 = &StringLiteral_12240/*"SKILL_LVDISP_ENABLE_TXT"*/;
          }
        }
      }
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v208, 0);
      if ( !v192 )
        goto LABEL_1106;
      System_Text_StringBuilder__AppendFormat(v192, (System_String_o *)gameObject, v207, 0);
      ++v204;
      v205 += 4;
    }
    while ( (unsigned int)v194 != v204 );
    this = v264;
    item = v265;
    v209 = v261;
    modeKind = v262;
    p_statusTxtLb = v263;
  }
  v210 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v192->klass->vtable._3_ToString.methodPtr)(
                 v192,
                 v192->klass->vtable._3_ToString.method);
  if ( !v210
    || (UILabel__set_text(v210, (System_String_o *)gameObject, 0), (gameObject = (__int64)this->fields.skillLvLabel) == 0)
    || (gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
LABEL_1106:
    sub_1C71608(gameObject, switchInfoList);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1106;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0) )
    goto LABEL_787;
  gameObject = (__int64)*p_maskSprite;
  if ( !*p_maskSprite )
    goto LABEL_1106;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (__int64)*v267;
  if ( !*v267 )
    goto LABEL_1106;
  UILabel__set_text((UILabel_o *)gameObject, string_TypeInfo->static_fields->Empty, 0);
  if ( item->fields.isEventJoin )
  {
    v211 = *v267;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10295/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0);
    if ( !v211 )
      goto LABEL_1106;
    UILabel__set_text(v211, (System_String_o *)gameObject, 0);
  }
  if ( !item->fields.isHeroineSvt )
    goto LABEL_1110;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40699620(126, 0) )
  {
    v212 = *v267;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v213 = &StringLiteral_11526/*"SELECT_CANNOT"*/;
  }
  else
  {
LABEL_1110:
    if ( item->fields.isEventJoin )
    {
      v212 = *v267;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v213 = &StringLiteral_11558/*"SELECT_SERVANT_EVENT_JOIN"*/;
    }
    else if ( (v209 & 1) != 0 )
    {
      if ( (v197 & 1) != 0 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CC112A )
        {
          sub_1C713B0(&NetworkManager_TypeInfo);
          byte_4CC112A = 1;
        }
        gameObject = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          gameObject = (__int64)NetworkManager_TypeInfo;
        }
        if ( !Master_object )
          goto LABEL_1106;
        if ( !UserServantAppendPassiveSkillMaster__TryGetEntity(
                (UserServantAppendPassiveSkillMaster_o *)Master_object,
                &entity,
                *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                item->fields.svtId,
                0)
          || !UserServantAppendPassiveSkillMaster__IsExchangeLimited(0) )
        {
          goto LABEL_787;
        }
        v212 = *v267;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1983/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/, 0);
        if ( !entity )
          goto LABEL_1106;
        v215 = (System_String_o *)gameObject;
        SkillOpenItemNum = UserServantAppendPassiveSkillEntity__GetRemainingExchangeNum(entity, 0);
        v216 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum);
        gameObject = (__int64)System_String__Format(v215, v216, 0);
        if ( !v212 )
          goto LABEL_1106;
        goto LABEL_786;
      }
      v212 = *v267;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v213 = &StringLiteral_1982/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/;
    }
    else
    {
      v212 = *v267;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v213 = &StringLiteral_1981/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/;
    }
  }
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v213, 0);
  if ( !v212 )
    goto LABEL_1106;
LABEL_786:
  UILabel__set_text(v212, (System_String_o *)gameObject, 0);
LABEL_787:
  v217 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v217, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v190 = item->fields.type;
LABEL_798:
  if ( v190 != 4 )
    goto LABEL_844;
  gameObject = (__int64)this->fields.npIconLabel;
  if ( !gameObject )
    goto LABEL_1106;
  v218 = SHIDWORD(tdMaxLv.invoker_method) <= 0 ? -1 : LODWORD(tdMaxLv.invoker_method);
  UIIconLabel__Set_41387288((UIIconLabel_o *)gameObject, 33, v218, SHIDWORD(tdMaxLv.methodPointer), 0, 0, 0, 0, 0, 0, 0);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1106;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0) )
  {
    v219 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v219, 0, 0) )
      goto LABEL_840;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v220 = item->fields.isHeroineSvt;
    v221 = *v267;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v220 )
      v222 = &StringLiteral_9283/*"NONSELECT_MATERIAL"*/;
    else
      v222 = &StringLiteral_9286/*"NONSELECT_NPUP_BASE"*/;
    v224 = (System_String_o *)*v222;
    goto LABEL_838;
  }
  if ( !item->fields.isSameSvt && !item->fields.isBaseSvt )
  {
    v235 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v235, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1106;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1106;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_840;
  }
  v223 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v223, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    if ( item->fields.isSameSvt )
    {
      gameObject = (__int64)*p_statusTxtLb;
      if ( !*p_statusTxtLb )
        goto LABEL_1106;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1106;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v221 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v224 = (System_String_o *)StringLiteral_8797/*"MSG_ABLED_TDUP"*/;
LABEL_838:
      gameObject = (__int64)LocalizationManager__Get(v224, 0);
      if ( !v221 )
        goto LABEL_1106;
      UILabel__set_text(v221, (System_String_o *)gameObject, 0);
    }
  }
LABEL_840:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_844:
  v225 = item->fields.type;
  if ( v225 != 6 )
    goto LABEL_911;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1106;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1106;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0) )
  {
    v226 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v226, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1106;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1106;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1106;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1106;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      if ( item->fields.isHeroineSvt && !item->fields.isLvExceedMax )
      {
        v228 = *v267;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v229 = &StringLiteral_9283/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        isEventJoin = item->fields.isEventJoin;
        v228 = *v267;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( isEventJoin )
          v229 = &StringLiteral_11558/*"SELECT_SERVANT_EVENT_JOIN"*/;
        else
          v229 = &StringLiteral_9338/*"NO_SELECT_LVEXCEED"*/;
      }
      v233 = (System_String_o *)*v229;
LABEL_904:
      gameObject = (__int64)LocalizationManager__Get(v233, 0);
      if ( !v228 )
        goto LABEL_1106;
      UILabel__set_text(v228, (System_String_o *)gameObject, 0);
      goto LABEL_906;
    }
    goto LABEL_906;
  }
  if ( !item->fields.isLvMax || !item->fields.isLimitCntMax )
  {
    v234 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v234, 0, 0) )
      goto LABEL_906;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
LABEL_888:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_906;
  }
  isLvExceedItemNum = item->fields.isLvExceedItemNum;
  v231 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v232 = UnityEngine_Object__op_Inequality(v231, 0, 0);
  if ( !isLvExceedItemNum )
  {
    if ( !v232 )
      goto LABEL_906;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    goto LABEL_888;
  }
  if ( v232 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)*v267;
    if ( !*v267 )
      goto LABEL_1106;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v228 = *p_statusTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v233 = (System_String_o *)StringLiteral_8794/*"MSG_ABLED_LIMITUP"*/;
    goto LABEL_904;
  }
LABEL_906:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v225 = item->fields.type;
LABEL_911:
  if ( v225 != 10 && v225 != 7 )
    goto LABEL_976;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1106;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.subIconLabel;
  if ( !gameObject )
    goto LABEL_1106;
  UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0);
  v237 = item->fields.type;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  gameObject = CombineServantListViewManager__GetSortKind(v237, v236);
  v238 = this->fields.servantFaceIcon;
  if ( !v238 )
    goto LABEL_1106;
  if ( (_DWORD)gameObject == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *__return_ptr, struct ServantFaceIconComponent_o *, __int64, const MethodInfo *))v238->klass->vtable._4_ParameterChange.methodPtr)(
      v238,
      this->fields.servantFaceIcon,
      1,
      v238->klass->vtable._4_ParameterChange.method);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_1106;
    ServantFaceIconComponent__ResetIconLabelPos((ServantFaceIconComponent_o *)gameObject, 0);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_1106;
    ServantFaceIconComponent__AdjustIconLabelPos((ServantFaceIconComponent_o *)gameObject, 1.0, -1.0, 0);
  }
  else
  {
    ServantFaceIconComponent__ResetIconLabelPos(this->fields.servantFaceIcon, 0);
  }
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1106;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v239 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0);
  v240 = (UnityEngine_Object_o *)this->fields.baseButton;
  v241 = v239;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v242 = UnityEngine_Object__op_Inequality(v240, 0, 0);
  if ( v241 )
  {
    if ( !v242 )
      goto LABEL_965;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( item->fields.type == 10 && item->fields.isCommandCardExceedMax )
    {
      v243 = *v267;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9280/*"NONSEELECT_STATUSUP_MAX"*/, 0);
      if ( !v243 )
        goto LABEL_1106;
      UILabel__set_text(v243, (System_String_o *)gameObject, 0);
    }
    if ( item->fields.isEventJoin )
    {
      v244 = *v267;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11558/*"SELECT_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v244 )
        goto LABEL_1106;
      UILabel__set_text(v244, (System_String_o *)gameObject, 0);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_965;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_40699620(126, 0) )
      goto LABEL_965;
    v245 = *v267;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11526/*"SELECT_CANNOT"*/, 0);
    if ( !v245 )
      goto LABEL_1106;
    v246 = (System_String_o *)gameObject;
    gameObject = (__int64)v245;
    goto LABEL_964;
  }
  if ( v242 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)*v267;
    if ( !*v267 )
      goto LABEL_1106;
    v246 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_964:
    UILabel__set_text((UILabel_o *)gameObject, v246, 0);
  }
LABEL_965:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v247 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v247, 0) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v248 = this->fields.svtCommandCardList;
    gameObject = CombineServantListViewItem__get_UserSvtId(item, 0);
    if ( !v248 )
      goto LABEL_1106;
    ServantCommandCardListComponent__Set(v248, gameObject, 1, 1, 0);
  }
LABEL_976:
  if ( item->fields.type != 8 )
    goto LABEL_1034;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1106;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0) )
  {
    v249 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v249, 0, 0) )
      goto LABEL_1030;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( item->fields.isHeroineSvt && !item->fields.isFriendshipExceedMax )
    {
      v251 = *v267;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v252 = &StringLiteral_9283/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      v250 = item->fields.isEventJoin;
      v251 = *v267;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v250 )
        v252 = &StringLiteral_11558/*"SELECT_SERVANT_EVENT_JOIN"*/;
      else
        v252 = &StringLiteral_9337/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
    }
    v256 = (System_String_o *)*v252;
    goto LABEL_1028;
  }
  if ( !item->fields.isFriendshipRankMax )
  {
    v257 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v257, 0, 0) )
      goto LABEL_1030;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
LABEL_1022:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_1030;
  }
  isFriendshipExceedItemNum = item->fields.isFriendshipExceedItemNum;
  v254 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v255 = UnityEngine_Object__op_Inequality(v254, 0, 0);
  if ( !isFriendshipExceedItemNum )
  {
    if ( !v255 )
      goto LABEL_1030;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1106;
    goto LABEL_1022;
  }
  if ( !v255 )
    goto LABEL_1030;
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_1106;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
    gameObject,
    1,
    *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_1106;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
    gameObject,
    0,
    1,
    *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  gameObject = (__int64)*p_maskSprite;
  if ( !*p_maskSprite )
    goto LABEL_1106;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)*v267;
  if ( !*v267 )
    goto LABEL_1106;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)*p_statusTxtLb;
  if ( !*p_statusTxtLb )
    goto LABEL_1106;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v251 = *p_statusTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v256 = (System_String_o *)StringLiteral_8793/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/;
LABEL_1028:
  gameObject = (__int64)LocalizationManager__Get(v256, 0);
  if ( !v251 )
    goto LABEL_1106;
  UILabel__set_text(v251, (System_String_o *)gameObject, 0);
LABEL_1030:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_1034:
  if ( (unsigned int)(modeKind - 1) > 1 )
  {
    if ( modeKind != 3 )
      return;
    if ( item->fields.isEventJoin )
    {
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1106;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1106;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v258 = *v267;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11558/*"SELECT_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v258 )
        goto LABEL_1106;
    }
    else
    {
      if ( !item->fields.isCanNotLock )
      {
        gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
        if ( !gameObject )
          goto LABEL_1106;
        if ( !UserServantEntity__IsLeave((UserServantEntity_o *)gameObject, 0) )
        {
          gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
          if ( !gameObject )
            goto LABEL_1106;
          if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)gameObject, 0) )
          {
            gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
            if ( !gameObject )
              goto LABEL_1106;
            if ( !UserServantEntity__IsStatusUp((UserServantEntity_o *)gameObject, 0) )
            {
              gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
              if ( !gameObject )
                goto LABEL_1106;
              if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)gameObject, 0) )
              {
                gameObject = (__int64)*p_maskSprite;
                if ( !*p_maskSprite )
                  goto LABEL_1106;
                gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !gameObject )
                  goto LABEL_1106;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
                gameObject = (__int64)*v267;
                if ( !*v267 )
                  goto LABEL_1106;
                v259 = (System_String_o *)StringLiteral_1/*""*/;
                goto LABEL_1072;
              }
            }
          }
        }
      }
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1106;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1106;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v258 = *v267;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8317/*"LOCKMODE_SELECTED_SERVANT"*/, 0);
      if ( !v258 )
        goto LABEL_1106;
    }
    v259 = (System_String_o *)gameObject;
    gameObject = (__int64)v258;
LABEL_1072:
    UILabel__set_text((UILabel_o *)gameObject, v259, 0);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1106;
LABEL_1073:
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    return;
  }
  if ( !item->fields.isHeroineSvt )
    goto LABEL_1039;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_40699620(126, 0) )
  {
LABEL_1039:
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isCanNotLock, 0);
    if ( item->fields.isCanNotLock )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      switchInfoList = (UIWidget_array *)LocalizationManager__Get((System_String_o *)StringLiteral_8317/*"LOCKMODE_SELECTED_SERVANT"*/, 0);
    }
    else
    {
      switchInfoList = (UIWidget_array *)StringLiteral_1/*""*/;
    }
    gameObject = (__int64)*v267;
    if ( !*v267 )
      goto LABEL_1106;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)switchInfoList, 0);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1106;
    goto LABEL_1073;
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

  if ( (byte_4CCB6C1 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB6C1 = 1;
  }
  dragSelect = (UnityEngine_Object_o *)this->fields.dragSelect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C71608(v7, v6);
  }
}