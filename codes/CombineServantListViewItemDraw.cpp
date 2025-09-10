void CombineServantListViewItemDraw___ctor(CombineServantListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.fortificationInfoRootObjOffsetY = 9.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CombineServantListViewItemDraw__Awake(CombineServantListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UISprite_o *v9; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defaultMaskAtlas, (int32_t)mAtlas, v2, v3);
  v9 = this->fields.maskSprite;
  if ( v9 )
    mSpriteName = v9->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defaultMaskName, (int32_t)mSpriteName, v7, v8);
}


void CombineServantListViewItemDraw__SetInput(
        CombineServantListViewItemDraw_o *this,
        CombineServantListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  _BOOL4 v4; // w21
  _BOOL4 IsSelect; // w0
  const MethodInfo *v8; // x1
  unsigned int type; // w8
  _BOOL4 v10; // w23
  bool CanNotBaseSelect; // w0
  bool v12; // w22
  ServantEntity_o *servantEntity; // x0
  _BOOL4 v14; // w25
  int v15; // w24
  UnityEngine_Object_o *baseButton; // x23
  bool v17; // w0
  const MethodInfo *v18; // x2
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
  if ( (byte_4C2B465 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_9280/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_1C2D490(&StringLiteral_9275/*"NONSELECT_MATERIAL"*/);
    sub_1C2D490(&StringLiteral_9278/*"NONSELECT_NPUP_BASE"*/);
    sub_1C2D490(&StringLiteral_9276/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    byte_4C2B465 = 1;
  }
  if ( item )
  {
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
    type = item->fields.type;
    v10 = IsSelect;
    if ( type > 0xC )
    {
      v12 = 0;
    }
    else
    {
      if ( ((1 << type) & 0x1FDD) != 0 )
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, v8);
      else
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotSelect(item, v8);
      v12 = CanNotBaseSelect;
    }
    servantEntity = item->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_93;
    v14 = !ServantEntity__get_IsOrganization(servantEntity, 0);
    v15 = !v10;
  }
  else
  {
    v12 = 0;
    v15 = 1;
    v14 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v17 = UnityEngine_Object__op_Inequality(baseButton, 0, 0);
  if ( !v12 )
  {
    if ( v17 )
    {
      servantEntity = (ServantEntity_o *)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_93;
      ((void (__fastcall *)(ServantEntity_o *, __int64, const MethodInfo *))servantEntity->klass->vtable._5_CreatePrimaryKey.methodPtr)(
        servantEntity,
        1,
        servantEntity->klass->vtable._5_CreatePrimaryKey.method);
      servantEntity = (ServantEntity_o *)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_93;
      ((void (__fastcall *)(ServantEntity_o *, _QWORD, __int64, void *))servantEntity->klass[1]._1.fields)(
        servantEntity,
        0,
        1,
        servantEntity->klass[1]._1.events);
      servantEntity = (ServantEntity_o *)this->fields.maskSprite;
      if ( !servantEntity )
        goto LABEL_93;
      servantEntity = (ServantEntity_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)servantEntity,
                                           0);
      if ( !servantEntity )
        goto LABEL_93;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0);
    }
    if ( !item )
      goto LABEL_81;
    v23 = (UnityEngine_Object_o *)this->fields.baseButton;
    cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
    if ( item->fields.isMaxSelect )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
      {
        servantEntity = (ServantEntity_o *)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_93;
        ((void (__fastcall *)(ServantEntity_o *, __int64, const MethodInfo *))servantEntity->klass->vtable._5_CreatePrimaryKey.methodPtr)(
          servantEntity,
          1,
          servantEntity->klass->vtable._5_CreatePrimaryKey.method);
        servantEntity = (ServantEntity_o *)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_93;
        v25 = 1;
        ((void (__fastcall *)(ServantEntity_o *, _QWORD, __int64, void *))servantEntity->klass[1]._1.fields)(
          servantEntity,
          0,
          1,
          servantEntity->klass[1]._1.events);
        goto LABEL_48;
      }
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
      {
        servantEntity = (ServantEntity_o *)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_93;
        ((void (__fastcall *)(ServantEntity_o *, __int64, const MethodInfo *))servantEntity->klass->vtable._5_CreatePrimaryKey.methodPtr)(
          servantEntity,
          1,
          servantEntity->klass->vtable._5_CreatePrimaryKey.method);
        servantEntity = (ServantEntity_o *)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_93;
        ((void (__fastcall *)(ServantEntity_o *, _QWORD, __int64, void *))servantEntity->klass[1]._1.fields)(
          servantEntity,
          0,
          1,
          servantEntity->klass[1]._1.events);
      }
    }
    v25 = 0;
LABEL_48:
    v26 = item->fields.type;
    if ( v26 == 5 )
    {
      if ( !(v25 & 1 | item->fields.isMaxNextLv) )
        goto LABEL_81;
    }
    else if ( v26 == 1 )
    {
      if ( ((v15 & ~(v14 || v4) | v25) & 1) == 0 )
        goto LABEL_81;
    }
    else if ( !v25 )
    {
      goto LABEL_81;
    }
    servantEntity = (ServantEntity_o *)this->fields.maskSprite;
    if ( !servantEntity )
      goto LABEL_93;
    servantEntity = (ServantEntity_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)servantEntity,
                                         0);
    if ( !servantEntity )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0);
    maskLabel = this->fields.maskLabel;
    v20 = LocalizationManager_TypeInfo;
    v22 = LocalizationManager_TypeInfo->_2.cctor_finished;
    if ( item->fields.type == 5 )
      goto LABEL_58;
    goto LABEL_76;
  }
  if ( !v17 )
    goto LABEL_81;
  servantEntity = (ServantEntity_o *)this->fields.baseButton;
  if ( !servantEntity )
    goto LABEL_93;
  ((void (__fastcall *)(ServantEntity_o *, __int64, const MethodInfo *))servantEntity->klass->vtable._5_CreatePrimaryKey.methodPtr)(
    servantEntity,
    1,
    servantEntity->klass->vtable._5_CreatePrimaryKey.method);
  servantEntity = (ServantEntity_o *)this->fields.baseButton;
  if ( !servantEntity )
    goto LABEL_93;
  ((void (__fastcall *)(ServantEntity_o *, _QWORD, __int64, void *))servantEntity->klass[1]._1.fields)(
    servantEntity,
    0,
    1,
    servantEntity->klass[1]._1.events);
  servantEntity = (ServantEntity_o *)this->fields.maskSprite;
  if ( !servantEntity )
    goto LABEL_93;
  servantEntity = (ServantEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0);
  if ( !servantEntity )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0);
  if ( !item )
    goto LABEL_93;
  if ( !item->fields.isMaxNextLv )
  {
    if ( !item->fields.isStatusUpSvt )
      goto LABEL_81;
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
          servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9280/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
          if ( !v30 )
            goto LABEL_93;
          UILabel__set_text(v30, (System_String_o *)servantEntity, 0);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectSecondStatusUpHp )
          goto LABEL_81;
      }
      else
      {
        if ( atkBase >= 1 && item->fields.isNotSelectStatusUpAtk )
        {
          v29 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9280/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
          if ( !v29 )
            goto LABEL_93;
          UILabel__set_text(v29, (System_String_o *)servantEntity, 0);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectStatusUpHp )
          goto LABEL_81;
      }
      maskLabel = this->fields.maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = &StringLiteral_9280/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_79:
      servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)*v27, 0);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)servantEntity, 0);
        goto LABEL_81;
      }
LABEL_93:
      sub_1C2D6EC(servantEntity, v8);
    }
    maskLabel = this->fields.maskLabel;
    v20 = LocalizationManager_TypeInfo;
    v22 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_76:
    if ( !v22 )
      j_il2cpp_runtime_class_init_0(v20);
    v27 = &StringLiteral_9275/*"NONSELECT_MATERIAL"*/;
    goto LABEL_79;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, v8) )
  {
    v19 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9276/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0);
    if ( !v19 )
      goto LABEL_93;
    UILabel__set_text(v19, (System_String_o *)servantEntity, 0);
    if ( item->fields.type == 5 )
    {
      v20 = LocalizationManager_TypeInfo;
      maskLabel = this->fields.maskLabel;
      v22 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_58:
      if ( !v22 )
        j_il2cpp_runtime_class_init_0(v20);
      v27 = &StringLiteral_9278/*"NONSELECT_NPUP_BASE"*/;
      goto LABEL_79;
    }
  }
LABEL_81:
  CombineServantListViewItemDraw__SetSelectDisp(this, item, v18);
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
  MethodInfo *switchInfoList; // x1
  __int64 gameObject; // x0
  int32_t type; // w19
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  IconLabelInfo_o *iconLabelInfo1; // x2
  UIIconLabel_o *subIconLabel; // x23
  int32_t rarity; // w24
  const MethodInfo *v19; // x1
  int32_t v20; // w25
  const MethodInfo *v21; // x4
  UILabel_o **p_statusTxtLb; // x28
  struct UILabel_o **p_maskLabel; // x20
  UnityEngine_GameObject_o *v24; // x23
  UnityEngine_GameObject_o *v25; // x23
  bool v26; // w1
  UnityEngine_Object_o *pushImg; // x23
  UnityEngine_Object_o *materialTdSprite; // x23
  const MethodInfo *v29; // x2
  UISprite_o *v30; // x23
  const MethodInfo *v31; // x1
  int32_t v32; // w23
  int32_t v33; // w8
  _BOOL4 v34; // w8
  bool CanNotBaseSelect; // w0
  UnityEngine_Object_o *v36; // x23
  bool v37; // w22
  bool v38; // w0
  struct UILabel_o *v39; // x22
  __int64 *v40; // x8
  int32_t v41; // w2
  const MethodInfo *v42; // x2
  UserServantEntity_o *userSvtEntity; // x0
  char v44; // w20
  UILabel_o *v45; // x23
  UILabel_o *v46; // x23
  _BOOL4 isLock; // w8
  UILabel_o *v48; // x23
  _BOOL4 isChoice; // w8
  UILabel_o *v50; // x23
  UILabel_o *v51; // x23
  UILabel_o *v52; // x23
  UILabel_o *v53; // x23
  UILabel_o *v54; // x23
  UILabel_o *v55; // x23
  _BOOL4 isParty; // w19
  __int64 *v57; // x8
  UILabel_o *v58; // x23
  _BOOL4 v59; // w19
  __int64 *v60; // x8
  UILabel_o *v61; // x23
  UnityEngine_GameObject_o *v62; // x23
  UILabel_o *v63; // x23
  const MethodInfo *v64; // x1
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x24
  bool v67; // w23
  bool v68; // w0
  UILabel_o *v69; // x22
  UILabel_o *v70; // x22
  UILabel_o *v71; // x22
  UILabel_o *v72; // x22
  __int64 *v73; // x8
  UnityEngine_Object_o *v74; // x23
  uint32_t cctor_finished; // w8
  int v76; // w19
  UILabel_o *v77; // x22
  System_String_o *v78; // x23
  Il2CppObject *v79; // x0
  UILabel_o *v80; // x22
  UILabel_o *v81; // x22
  System_String_o *v82; // x0
  UILabel_o *v83; // x23
  UILabel_o *v84; // x22
  UILabel_o *v85; // x22
  int32_t v86; // w8
  UILabel_o *v87; // x22
  UnityEngine_GameObject_o *v88; // x22
  System_String_o *v89; // x1
  UILabel_o *fortificationAppointmentLabel; // x22
  float fortificationInfoRootObjOffsetY; // s10
  float x; // s8
  float z; // s9
  System_Collections_Generic_List_object__o *v94; // x22
  System_String_o *v95; // x23
  Il2CppObject *v96; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  struct System_Object_array *items; // x8
  _QWORD *v100; // x9
  __int64 size; // x10
  __int64 v102; // x1
  Il2CppClass **v103; // x0
  System_String_o *v104; // x23
  Il2CppObject *v105; // x0
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  __int64 v111; // x1
  Il2CppClass **v112; // x0
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  struct System_Object_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  __int64 v118; // x1
  Il2CppClass **v119; // x0
  _BOOL4 v120; // w8
  UnityEngine_Object_o *v121; // x22
  _BOOL4 isHeroineSvt; // w19
  UILabel_o *sealedStateLabel; // x22
  __int64 *v124; // x8
  _BOOL4 v125; // w8
  bool v126; // w0
  UnityEngine_Object_o *v127; // x23
  bool v128; // w22
  bool v129; // w0
  UILabel_o *v130; // x22
  __int64 *v131; // x8
  UnityEngine_Object_o *v132; // x22
  System_String_o *v133; // x1
  UnityEngine_Object_o *v134; // x22
  UnityEngine_Object_o *v135; // x22
  int32_t v136; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  System_Text_StringBuilder_o *v138; // x22
  __int64 v139; // x2
  SkillInfo_array *v140; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned __int64 v142; // x19
  __int64 v143; // x20
  __int64 v144; // x21
  SkillInfo_o *v145; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v148; // w25
  Il2CppObject *v149; // x24
  bool v150; // w25
  __int64 *v151; // x8
  UILabel_o *skillLvLabel; // x23
  _BOOL4 v153; // w8
  UnityEngine_Object_o *v154; // x22
  UILabel_o *v155; // x22
  UILabel_o *v156; // x22
  __int64 *v157; // x8
  _BOOL4 isSkillUpItemNum; // w19
  UnityEngine_Object_o *v159; // x22
  bool v160; // w0
  SvtUseSkillData_o *AppendSkillData; // x0
  struct System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v163; // x24
  System_Text_StringBuilder_o *v164; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  il2cpp_array_size_t v166; // x9
  unsigned __int64 v167; // x19
  __int64 v168; // x20
  __int64 v169; // x21
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v171; // x0
  int32_t v172; // w26
  int32_t v173; // w0
  int v174; // t1
  Il2CppObject *v175; // x25
  bool v176; // w26
  __int64 *v177; // x8
  UILabel_o *v178; // x24
  _BOOL4 v179; // w8
  UILabel_o *v180; // x22
  UILabel_o *v181; // x22
  UILabel_o *v182; // x22
  __int64 *v183; // x8
  UnityEngine_Object_o *v184; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  const MethodInfo *v188; // x1
  const MethodInfo *v189; // x1
  __int64 v190; // x2
  __int64 v191; // x3
  __int64 v192; // x4
  Il2CppObject *v193; // x0
  const MethodInfo *v194; // x1
  struct ItemIconComponent_o *coinIcon; // x22
  int32_t v196; // w8
  SvtUseSkillData_o *v197; // x23
  System_Text_StringBuilder_o *v198; // x22
  struct System_Int32_array *v199; // x8
  il2cpp_array_size_t v200; // x19
  char v201; // w27
  char v202; // w26
  char v203; // w25
  unsigned __int64 v204; // x21
  struct System_Int32_array *v205; // x8
  char *v206; // x0
  int v207; // t1
  int32_t v208; // w9
  int v209; // w8
  unsigned __int64 v210; // x29
  __int64 v211; // x26
  struct System_Int32_array *v212; // x8
  Il2CppObject *v213; // x24
  __int64 *v214; // x8
  char v215; // w26
  UILabel_o *v216; // x23
  _BOOL4 v217; // w8
  UILabel_o *v218; // x22
  UILabel_o *v219; // x22
  __int64 *v220; // x8
  Il2CppObject *Master_object; // x22
  System_String_o *v222; // x23
  __int64 v223; // x2
  __int64 v224; // x3
  __int64 v225; // x4
  Il2CppObject *v226; // x0
  UnityEngine_Object_o *v227; // x22
  int32_t v228; // w2
  _BOOL4 v229; // w8
  UnityEngine_Object_o *v230; // x22
  _BOOL4 v231; // w19
  UILabel_o *v232; // x22
  System_String_o **v233; // x8
  UnityEngine_Object_o *v234; // x22
  int32_t v235; // w8
  _BOOL4 v236; // w8
  UnityEngine_Object_o *v237; // x22
  _BOOL4 isEventJoin; // w19
  UILabel_o *v239; // x22
  __int64 *v240; // x8
  _BOOL4 isLvExceedItemNum; // w19
  UnityEngine_Object_o *v242; // x22
  bool v243; // w0
  UnityEngine_Object_o *v244; // x22
  UnityEngine_Object_o *v245; // x22
  const MethodInfo *v246; // x1
  int32_t v247; // w22
  struct ServantFaceIconComponent_o *v248; // x8
  _BOOL4 v249; // w8
  bool v250; // w0
  UnityEngine_Object_o *v251; // x23
  bool v252; // w22
  bool v253; // w0
  UILabel_o *v254; // x22
  UILabel_o *v255; // x22
  struct UILabel_o *v256; // x22
  System_String_o *v257; // x1
  UnityEngine_Object_o *v258; // x22
  ServantCommandCardListComponent_o *v259; // x22
  const MethodInfo *v260; // x1
  _BOOL4 v261; // w8
  UnityEngine_Object_o *v262; // x22
  _BOOL4 v263; // w19
  UILabel_o *v264; // x22
  __int64 *v265; // x8
  _BOOL4 isFriendshipExceedItemNum; // w19
  UnityEngine_Object_o *v267; // x22
  bool v268; // w0
  UnityEngine_Object_o *v269; // x22
  struct UILabel_o *v270; // x19
  __int64 *v271; // x8
  UnityEngine_Object_o *v272; // x22
  char v273; // [xsp+20h] [xbp-D0h]
  int32_t v274; // [xsp+24h] [xbp-CCh]
  struct UILabel_o **v275; // [xsp+28h] [xbp-C8h]
  CombineServantListViewItemDraw_o *v276; // [xsp+30h] [xbp-C0h]
  CombineServantListViewItem_o *v277; // [xsp+38h] [xbp-B8h]
  struct UISprite_o **p_maskSprite; // [xsp+40h] [xbp-B0h]
  struct UILabel_o **v279; // [xsp+48h] [xbp-A8h]
  int32_t SkillOpenItemNum; // [xsp+54h] [xbp-9Ch] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+58h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+60h] [xbp-90h] BYREF
  MethodInfo tdMaxLv; // [xsp+68h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v284; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v286; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2B464 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    sub_1C2D490(&StringLiteral_12230/*"SKILL_LVDISP_TXT"*/);
    sub_1C2D490(&StringLiteral_10285/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/);
    sub_1C2D490(&StringLiteral_9280/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_1C2D490(&StringLiteral_6472/*"FORTIFICATION_APPOINTMENT"*/);
    sub_1C2D490(&StringLiteral_3563/*"COMBINE_CAN_STATUS_UP_INFO"*/);
    sub_1C2D490(&StringLiteral_8790/*"MSG_CAMPAIGN_COMBINE_EXP"*/);
    sub_1C2D490(&StringLiteral_12228/*"SKILL_LVDISP_ENABLE_TXT"*/);
    sub_1C2D490(&StringLiteral_1984/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/);
    sub_1C2D490(&StringLiteral_9275/*"NONSELECT_MATERIAL"*/);
    sub_1C2D490(&StringLiteral_23090/*"ribbon_noblephantasmup_01"*/);
    sub_1C2D490(&StringLiteral_9274/*"NONSELECT_LIMITUP_BASE"*/);
    sub_1C2D490(&StringLiteral_1985/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/);
    sub_1C2D490(&StringLiteral_10092/*"PARTY_MEMBER_TXT"*/);
    sub_1C2D490(&StringLiteral_3286/*"CAN_SELECT_SEALED_SERVANT_BASE"*/);
    sub_1C2D490(&StringLiteral_9278/*"NONSELECT_NPUP_BASE"*/);
    sub_1C2D490(&StringLiteral_12508/*"SUPPORT_MEMBER"*/);
    sub_1C2D490(&StringLiteral_8786/*"MSG_ABLED_LIMITUP"*/);
    sub_1C2D490(&StringLiteral_11545/*"SELECT_PUSH"*/);
    sub_1C2D490(&StringLiteral_11514/*"SELECT_CANNOT"*/);
    sub_1C2D490(&StringLiteral_9340/*"NPUP_BASE"*/);
    sub_1C2D490(&StringLiteral_1986/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/);
    sub_1C2D490(&StringLiteral_12227/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/);
    sub_1C2D490(&StringLiteral_11546/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C2D490(&StringLiteral_9328/*"NO_SELECT_FRIENDSHIP_EXCEED"*/);
    sub_1C2D490(&StringLiteral_11438/*"SAME_SERVANT"*/);
    sub_1C2D490(&StringLiteral_8785/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/);
    sub_1C2D490(&StringLiteral_9276/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    sub_1C2D490(&StringLiteral_25029/*"{0:#,0}"*/);
    sub_1C2D490(&StringLiteral_12229/*"SKILL_LVDISP_SINGLE_TXT"*/);
    sub_1C2D490(&StringLiteral_8787/*"MSG_ABLED_SKILLUP"*/);
    sub_1C2D490(&StringLiteral_9277/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/);
    sub_1C2D490(&StringLiteral_9281/*"NONSKILL_TXT"*/);
    sub_1C2D490(&StringLiteral_8309/*"LOCKMODE_SELECTED_SERVANT"*/);
    sub_1C2D490(&StringLiteral_6389/*"FAVORITE_SERVANT"*/);
    sub_1C2D490(&StringLiteral_3352/*"CHOICE_SERVANT"*/);
    sub_1C2D490(&StringLiteral_11032/*"RECOMMEND_SUPPORT_MEMBER"*/);
    sub_1C2D490(&StringLiteral_8789/*"MSG_ABLED_TDUP"*/);
    sub_1C2D490(&StringLiteral_11508/*"SEAL_COMBINE_LIMIT_THIRD"*/);
    sub_1C2D490(&StringLiteral_9273/*"NONSELECT_BASE_ALLMAX"*/);
    sub_1C2D490(&StringLiteral_9329/*"NO_SELECT_LVEXCEED"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_9279/*"NONSELECT_SKILLUP_BASE"*/);
    sub_1C2D490(&StringLiteral_11544/*"SELECT_PROTECTED_EVENT_SVT"*/);
    sub_1C2D490(&StringLiteral_6996/*"GRAND_MEMBER"*/);
    sub_1C2D490(&StringLiteral_8310/*"LOCK_SERVANT"*/);
    sub_1C2D490(&StringLiteral_9272/*"NONSEELECT_STATUSUP_MAX"*/);
    byte_4C2B464 = 1;
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
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  type = item->fields.type;
  servantFaceIcon = this->fields.servantFaceIcon;
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, switchInfoList);
  iconLabelInfo1 = item->fields.iconLabelInfo1;
  switchInfoList = (MethodInfo *)gameObject;
  if ( type )
  {
    if ( !servantFaceIcon )
      goto LABEL_1128;
    ServantFaceIconComponent__Set_40783748(
      servantFaceIcon,
      (UserServantEntity_o *)gameObject,
      iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0);
    subIconLabel = this->fields.subIconLabel;
    rarity = item->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, v19);
    if ( !gameObject )
      goto LABEL_1128;
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_1128;
    ServantFaceIconComponent__Set_40783748(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0, 0);
    gameObject = (__int64)item->fields.iconLabelInfo2;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = IconLabelInfo__IsClear((IconLabelInfo_o *)gameObject, 0);
    subIconLabel = this->fields.subIconLabel;
    if ( (gameObject & 1) == 0 )
    {
      if ( !subIconLabel )
        goto LABEL_1128;
      UIIconLabel__Set(this->fields.subIconLabel, item->fields.iconLabelInfo2, 0);
      goto LABEL_22;
    }
    rarity = item->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, switchInfoList);
    if ( !gameObject )
      goto LABEL_1128;
  }
  v20 = *(_DWORD *)(gameObject + 296);
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, switchInfoList);
  if ( !gameObject || !subIconLabel )
    goto LABEL_1128;
  UIIconLabel__Set_40889008(
    subIconLabel,
    36,
    rarity,
    v20,
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
    goto LABEL_1128;
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
    v21);
  gameObject = (__int64)this->fields.lockImg;
  if ( !gameObject )
    goto LABEL_1128;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  p_statusTxtLb = &this->fields.statusTxtLb;
  gameObject = (__int64)this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1128;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.maskSprite;
  p_maskSprite = &this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_1128;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  p_maskLabel = &this->fields.maskLabel;
  gameObject = (__int64)this->fields.maskLabel;
  if ( !gameObject )
    goto LABEL_1128;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)*p_maskLabel;
  if ( !*p_maskLabel )
    goto LABEL_1128;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !byte_4C20DA6 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1128;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1128;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1128;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !byte_4C20DA6 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v25, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1128;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.partyIcon;
  if ( !gameObject )
    goto LABEL_1128;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.removeImg;
  if ( !gameObject )
    goto LABEL_1128;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1128;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.choiceImg;
  if ( !gameObject )
    goto LABEL_1128;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1128;
  v26 = item->fields.isSwapChoice ? !item->fields.isChoice : item->fields.isChoice;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v26, 0);
  gameObject = (__int64)this->fields.switchInfoComp;
  if ( !gameObject )
    goto LABEL_1128;
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.fortificationRootObj;
  if ( !gameObject )
    goto LABEL_1128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.fortificationNameLabel;
  if ( !gameObject )
    goto LABEL_1128;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)this->fields.fortificationDetailNameLabel;
  if ( !gameObject )
    goto LABEL_1128;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)this->fields.fortificationAppointmentLabel;
  if ( !gameObject )
    goto LABEL_1128;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushImg, 0, 0) )
  {
    gameObject = (__int64)this->fields.pushImg;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isPush, 0);
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_1128;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)gameObject, 0);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isMaterialTdSvt, 0);
    if ( item->fields.isMaterialTdSvt )
    {
      v30 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v30, (System_String_o *)StringLiteral_23090/*"ribbon_noblephantasmup_01"*/, 0);
      v32 = item->fields.type;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      if ( CombineServantListViewManager__GetSortKind(v32, v31) == 1 )
      {
        gameObject = (__int64)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_1128;
        v284.fields.x = 0.65;
        v284.fields.y = 1.0;
        v284.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v284, 0);
      }
    }
  }
  v33 = item->fields.type;
  v279 = &this->fields.maskLabel;
  switch ( v33 )
  {
    case 5:
      gameObject = (__int64)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_1128;
      v41 = SHIDWORD(tdMaxLv.invoker_method) <= 0 ? -1 : LODWORD(tdMaxLv.invoker_method);
      UIIconLabel__Set_40889008(
        (UIIconLabel_o *)gameObject,
        33,
        v41,
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
        goto LABEL_1128;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      goto LABEL_113;
    case 1:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1128;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0);
      userSvtEntity = item->fields.userSvtEntity;
      if ( userSvtEntity && UserServantEntity__IsProtectedEventServant(userSvtEntity, 0) && item->fields.type != 5 )
      {
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1128;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1128;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v83 = *v279;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11544/*"SELECT_PROTECTED_EVENT_SVT"*/, 0);
        if ( !v83 )
          goto LABEL_1128;
        UILabel__set_text(v83, (System_String_o *)gameObject, 0);
        v44 = 1;
LABEL_114:
        if ( item->fields.isParty )
        {
          gameObject = (__int64)this->fields.partyIcon;
          if ( !gameObject )
            goto LABEL_1128;
          FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v45 = *v279;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10092/*"PARTY_MEMBER_TXT"*/, 0);
          if ( !v45 )
            goto LABEL_1128;
          UILabel__set_text(v45, (System_String_o *)gameObject, 0);
          v44 = 1;
        }
        if ( item->fields.isFavorite )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v46 = *v279;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6389/*"FAVORITE_SERVANT"*/, 0);
          if ( !v46 )
            goto LABEL_1128;
          UILabel__set_text(v46, (System_String_o *)gameObject, 0);
          v44 = 1;
        }
        isLock = !item->fields.isLock;
        if ( !item->fields.isSwapLock )
          isLock = item->fields.isLock;
        if ( isLock )
        {
          gameObject = (__int64)this->fields.lockImg;
          if ( !gameObject )
            goto LABEL_1128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v48 = *v279;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8310/*"LOCK_SERVANT"*/, 0);
          if ( !v48 )
            goto LABEL_1128;
          UILabel__set_text(v48, (System_String_o *)gameObject, 0);
          v44 = 1;
        }
        isChoice = !item->fields.isChoice;
        if ( !item->fields.isSwapChoice )
          isChoice = item->fields.isChoice;
        if ( isChoice )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v50 = *v279;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3352/*"CHOICE_SERVANT"*/, 0);
          if ( !v50 )
            goto LABEL_1128;
          UILabel__set_text(v50, (System_String_o *)gameObject, 0);
          v44 = 1;
        }
        if ( item->fields.isLimitCntTarget )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v51 = *v279;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11438/*"SAME_SERVANT"*/, 0);
          if ( !v51 )
            goto LABEL_1128;
          UILabel__set_text(v51, (System_String_o *)gameObject, 0);
          v44 = 1;
        }
        if ( item->fields.isHeroineSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v52 = *v279;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9275/*"NONSELECT_MATERIAL"*/, 0);
          if ( !v52 )
            goto LABEL_1128;
          UILabel__set_text(v52, (System_String_o *)gameObject, 0);
          v44 = 1;
        }
        if ( item->fields.isStatusUpSvt && !item->fields.isCanStUp )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v53 = *v279;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9275/*"NONSELECT_MATERIAL"*/, 0);
          if ( !v53 )
            goto LABEL_1128;
          UILabel__set_text(v53, (System_String_o *)gameObject, 0);
          v44 = 1;
        }
        if ( item->fields.isEventJoin )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v54 = *v279;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11546/*"SELECT_SERVANT_EVENT_JOIN"*/, 0);
          if ( !v54 )
            goto LABEL_1128;
          UILabel__set_text(v54, (System_String_o *)gameObject, 0);
          v44 = 1;
        }
        if ( item->fields.isUseSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v55 = *v279;
          isParty = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v57 = &StringLiteral_12508/*"SUPPORT_MEMBER"*/;
          if ( isParty )
            v57 = &StringLiteral_10092/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v57, 0);
          if ( !v55 )
            goto LABEL_1128;
          UILabel__set_text(v55, (System_String_o *)gameObject, 0);
          v44 = 1;
        }
        if ( item->fields.isUseRecommendSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v58 = *v279;
          v59 = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v60 = &StringLiteral_11032/*"RECOMMEND_SUPPORT_MEMBER"*/;
          if ( v59 )
            v60 = &StringLiteral_10092/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v60, 0);
          if ( !v58 )
            goto LABEL_1128;
          UILabel__set_text(v58, (System_String_o *)gameObject, 0);
          if ( !item->fields.isParty )
          {
            gameObject = (__int64)*v279;
            if ( !*v279 )
              goto LABEL_1128;
            UILabel__SetCondensedScale((UILabel_o *)gameObject, 106, 0, 0);
          }
          v44 = 1;
        }
        if ( item->fields.isPush )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v61 = *v279;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11545/*"SELECT_PUSH"*/, 0);
          if ( !v61 )
            goto LABEL_1128;
          UILabel__set_text(v61, (System_String_o *)gameObject, 0);
          gameObject = (__int64)*v279;
          if ( !*v279 )
            goto LABEL_1128;
          v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !byte_4C20DA6 )
          {
            sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
            byte_4C20DA6 = 1;
          }
          GameObjectExtensions__SetLocalScale(v62, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          v44 = 1;
        }
        if ( item->fields.isGrandSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v63 = *v279;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6996/*"GRAND_MEMBER"*/, 0);
          if ( !v63 )
            goto LABEL_1128;
          UILabel__set_text(v63, (System_String_o *)gameObject, 0);
          v44 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, item, v42);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(item, v64);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        v67 = CanNotSelect;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v68 = UnityEngine_Object__op_Inequality(baseButton, 0, 0);
        if ( v67 )
        {
          if ( !v68 )
            break;
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1128;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1128;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          if ( item->fields.isMaxNextLv || item->fields.isBaseLvMax )
          {
            if ( !item->fields.isCanStUp )
            {
              if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, switchInfoList) )
              {
                v81 = *v279;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9276/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0);
                if ( !v81 )
                  goto LABEL_1128;
                UILabel__set_text(v81, (System_String_o *)gameObject, 0);
                if ( item->fields.type != 5 )
                  break;
                v72 = *v279;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v82 = (System_String_o *)StringLiteral_9278/*"NONSELECT_NPUP_BASE"*/;
                goto LABEL_341;
              }
              goto LABEL_343;
            }
          }
          else if ( !item->fields.isCanStUp )
          {
            if ( item->fields.isFortification )
            {
              gameObject = (__int64)*v279;
              if ( !*v279 )
                goto LABEL_1128;
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1128;
              gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1128;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1128;
              UILabel__set_text((UILabel_o *)gameObject, item->fields.fortificationName, 0);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1128;
              UILabel__set_text((UILabel_o *)gameObject, item->fields.fortificationDetailName, 0);
              fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6472/*"FORTIFICATION_APPOINTMENT"*/, 0);
              if ( !fortificationAppointmentLabel )
                goto LABEL_1128;
              UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)gameObject, 0);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1128;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1128;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0);
              if ( item->fields.type != 5 )
                break;
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1128;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1128;
              localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1128;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              x = localPosition.fields.x;
              z = localPosition.fields.z;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1128;
              v286.fields.x = x;
              v286.fields.y = fortificationInfoRootObjOffsetY;
              v286.fields.z = z;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v286, 0);
              goto LABEL_343;
            }
            if ( (v44 & 1) == 0 )
            {
              v72 = *v279;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v73 = &StringLiteral_9275/*"NONSELECT_MATERIAL"*/;
LABEL_340:
              v82 = (System_String_o *)*v73;
LABEL_341:
              gameObject = (__int64)LocalizationManager__Get(v82, 0);
              if ( !v72 )
                goto LABEL_1128;
              UILabel__set_text(v72, (System_String_o *)gameObject, 0);
            }
LABEL_343:
            v86 = item->fields.type;
            if ( v86 != 5 )
              goto LABEL_430;
            if ( item->fields.isBaseSvt )
            {
              v87 = *v279;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9340/*"NPUP_BASE"*/, 0);
              if ( !v87 )
                goto LABEL_1128;
              UILabel__set_text(v87, (System_String_o *)gameObject, 0);
              gameObject = (__int64)*v279;
              if ( !*v279 )
                goto LABEL_1128;
              v88 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              if ( !byte_4C20DA6 )
              {
                sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
                byte_4C20DA6 = 1;
              }
              GameObjectExtensions__SetLocalScale(v88, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
            }
            break;
          }
          if ( item->fields.isStatusUpSvt )
          {
            if ( item->fields.rarity <= 3 )
            {
              if ( item->fields.isAtkUpMax || item->fields.isHpUpMax )
              {
                v84 = *v279;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9280/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                if ( !v84 )
                  goto LABEL_1128;
                UILabel__set_text(v84, (System_String_o *)gameObject, 0);
              }
              if ( item->fields.isAtkSecondUpMax || item->fields.isHpSecondUpMax )
              {
                v85 = *v279;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9280/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                if ( !v85 )
                  goto LABEL_1128;
                UILabel__set_text(v85, (System_String_o *)gameObject, 0);
              }
              if ( !item->fields.isNotSelectStatusUpAtk && !item->fields.isNotSelectStatusUpHp )
                goto LABEL_343;
              v72 = *v279;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v73 = &StringLiteral_9280/*"NONSELECT_UNDER_STATUS_MAX"*/;
            }
            else
            {
              if ( item->fields.atkBase >= 1 )
              {
                if ( item->fields.isAtkSecondUpMax || item->fields.isNotSelectSecondStatusUpAtk )
                {
                  v69 = *v279;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9280/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                  if ( !v69 )
                    goto LABEL_1128;
                  UILabel__set_text(v69, (System_String_o *)gameObject, 0);
                }
                if ( !item->fields.isAtkUpMax )
                {
                  v70 = *v279;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9277/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0);
                  if ( !v70 )
                    goto LABEL_1128;
                  UILabel__set_text(v70, (System_String_o *)gameObject, 0);
                }
              }
              if ( item->fields.hpBase < 1 )
                goto LABEL_343;
              if ( item->fields.isHpSecondUpMax || item->fields.isNotSelectSecondStatusUpHp )
              {
                v71 = *v279;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9280/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                if ( !v71 )
                  goto LABEL_1128;
                UILabel__set_text(v71, (System_String_o *)gameObject, 0);
              }
              if ( item->fields.isHpUpMax )
                goto LABEL_343;
              v72 = *v279;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v73 = &StringLiteral_9277/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
            }
            goto LABEL_340;
          }
          goto LABEL_343;
        }
        if ( v68 )
        {
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1128;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1128;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        v74 = (UnityEngine_Object_o *)this->fields.baseButton;
        cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
        if ( item->fields.isMaxSelect )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v74, 0, 0) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1128;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1128;
            v76 = 1;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
LABEL_296:
            if ( item->fields.type != 1 )
              goto LABEL_302;
            gameObject = (__int64)item->fields.servantEntity;
            if ( !gameObject )
              goto LABEL_1128;
            if ( ServantEntity__get_IsOrganization((ServantEntity_o *)gameObject, 0) && !isSelectEnable )
            {
              if ( !(v76 & 1 | !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0)) )
                break;
            }
            else
            {
LABEL_302:
              if ( !v76 )
                break;
            }
            gameObject = (__int64)*p_maskSprite;
            if ( !*p_maskSprite )
              goto LABEL_1128;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_1128;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            v80 = *v279;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9275/*"NONSELECT_MATERIAL"*/, 0);
            if ( !v80 )
              goto LABEL_1128;
            UILabel__set_text(v80, (System_String_o *)gameObject, 0);
            break;
          }
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v74, 0, 0) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1128;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1128;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          }
        }
        v76 = 0;
        goto LABEL_296;
      }
LABEL_113:
      v44 = 0;
      goto LABEL_114;
    case 0:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1128;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0);
      if ( item->fields.isParty )
      {
        gameObject = (__int64)this->fields.partyIcon;
        if ( !gameObject )
          goto LABEL_1128;
        FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
      }
      v34 = !item->fields.isLock;
      if ( !item->fields.isSwapLock )
        v34 = item->fields.isLock;
      if ( v34 )
      {
        gameObject = (__int64)this->fields.lockImg;
        if ( !gameObject )
          goto LABEL_1128;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1128;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      }
      CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList);
      v36 = (UnityEngine_Object_o *)this->fields.baseButton;
      v37 = CanNotBaseSelect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v38 = UnityEngine_Object__op_Inequality(v36, 0, 0);
      if ( v37 )
      {
        if ( !v38 )
          goto LABEL_425;
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1128;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1128;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1128;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1128;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        if ( item->fields.isLvMax )
        {
          if ( item->fields.isStatusUpSvt )
            goto LABEL_354;
          if ( !item->fields.isExpUpSvt )
          {
            v39 = *v279;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v40 = &StringLiteral_9273/*"NONSELECT_BASE_ALLMAX"*/;
            goto LABEL_357;
          }
        }
        else if ( item->fields.isStatusUpSvt )
        {
          goto LABEL_354;
        }
        if ( !item->fields.isExpUpSvt )
        {
          if ( !item->fields.isHeroineSvt )
          {
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1128;
            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
            gameObject = (__int64)*v279;
            if ( !*v279 )
              goto LABEL_1128;
            v89 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_359;
          }
          v39 = *v279;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v40 = &StringLiteral_11514/*"SELECT_CANNOT"*/;
LABEL_357:
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v40, 0);
          if ( !v39 )
            goto LABEL_1128;
          v89 = (System_String_o *)gameObject;
          gameObject = (__int64)v39;
LABEL_359:
          UILabel__set_text((UILabel_o *)gameObject, v89, 0);
          gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
          if ( !gameObject )
            goto LABEL_1128;
          CombineServantListViewNoticeTween__RemoveTarget(
            (CombineServantListViewNoticeTween_o *)gameObject,
            *p_statusTxtLb,
            0);
          goto LABEL_425;
        }
LABEL_354:
        v39 = *v279;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_9275/*"NONSELECT_MATERIAL"*/;
        goto LABEL_357;
      }
      if ( !v38 )
        goto LABEL_425;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1128;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1128;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1128;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1128;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)*v279;
      if ( !*v279 )
        goto LABEL_1128;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( item->fields.isCombineExpCampaignTarget )
      {
        if ( !item->fields.isDispAtkStatusUpInfo )
          goto LABEL_283;
        gameObject = (__int64)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_1128;
        if ( !UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)gameObject, 0) )
          goto LABEL_283;
        gameObject = (__int64)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_1128;
        if ( !UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)gameObject, 0) )
        {
          v94 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v94,
            (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v95 = LocalizationManager__Get((System_String_o *)StringLiteral_8790/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
          *(float *)&tdMaxLv.methodPointer = item->fields.combineExpCampaignValue;
          v96 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
          gameObject = (__int64)System_String__Format(v95, v96, 0);
          if ( !v94 )
            goto LABEL_1128;
          items = v94->fields._items;
          v100 = Method_System_Collections_Generic_List_string__Add__;
          ++v94->fields._version;
          if ( !items )
            goto LABEL_1128;
          size = v94->fields._size;
          v102 = gameObject;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v94,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
          }
          else
          {
            v103 = &items->obj.klass + size;
            v94->fields._size = size + 1;
            v103[4] = (Il2CppClass *)v102;
            sub_1C2D434((CGThumbnailListItem_o *)(v103 + 4), v102, v97, v98);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3563/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0);
          v115 = v94->fields._items;
          v116 = Method_System_Collections_Generic_List_string__Add__;
          ++v94->fields._version;
          if ( !v115 )
            goto LABEL_1128;
        }
        else
        {
LABEL_283:
          if ( !item->fields.isDispHpStatusUpInfo )
            goto LABEL_284;
          gameObject = (__int64)item->fields.userSvtEntity;
          if ( !gameObject )
            goto LABEL_1128;
          if ( !UserServantEntity__isAdjustHpMax((UserServantEntity_o *)gameObject, 0) )
            goto LABEL_284;
          gameObject = (__int64)item->fields.userSvtEntity;
          if ( !gameObject )
            goto LABEL_1128;
          if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)gameObject, 0) )
          {
LABEL_284:
            gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
            if ( !gameObject )
              goto LABEL_1128;
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              *p_statusTxtLb,
              0);
            v77 = *p_statusTxtLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v78 = LocalizationManager__Get((System_String_o *)StringLiteral_8790/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
            *(float *)&tdMaxLv.methodPointer = item->fields.combineExpCampaignValue;
            v79 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
            gameObject = (__int64)System_String__Format(v78, v79, 0);
            if ( !v77 )
              goto LABEL_1128;
LABEL_288:
            UILabel__set_text(v77, (System_String_o *)gameObject, 0);
LABEL_422:
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1128;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_1128;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            goto LABEL_425;
          }
          v94 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v94,
            (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v104 = LocalizationManager__Get((System_String_o *)StringLiteral_8790/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
          *(float *)&tdMaxLv.methodPointer = item->fields.combineExpCampaignValue;
          v105 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
          gameObject = (__int64)System_String__Format(v104, v105, 0);
          if ( !v94 )
            goto LABEL_1128;
          v108 = v94->fields._items;
          v109 = Method_System_Collections_Generic_List_string__Add__;
          ++v94->fields._version;
          if ( !v108 )
            goto LABEL_1128;
          v110 = v94->fields._size;
          v111 = gameObject;
          if ( (unsigned int)v110 >= LODWORD(v108->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v94,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
          }
          else
          {
            v112 = &v108->obj.klass + v110;
            v94->fields._size = v110 + 1;
            v112[4] = (Il2CppClass *)v111;
            sub_1C2D434((CGThumbnailListItem_o *)(v112 + 4), v111, v106, v107);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3563/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0);
          v115 = v94->fields._items;
          v116 = Method_System_Collections_Generic_List_string__Add__;
          ++v94->fields._version;
          if ( !v115 )
            goto LABEL_1128;
        }
        v117 = v94->fields._size;
        v118 = gameObject;
        if ( (unsigned int)v117 >= LODWORD(v115->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v94,
            (Il2CppObject *)gameObject,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
        }
        else
        {
          v119 = &v115->obj.klass + v117;
          v94->fields._size = v117 + 1;
          v119[4] = (Il2CppClass *)v118;
          sub_1C2D434((CGThumbnailListItem_o *)(v119 + 4), v118, v113, v114);
        }
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1128;
        CombineServantListViewNoticeTween__AddTarget(
          (CombineServantListViewNoticeTween_o *)gameObject,
          *p_statusTxtLb,
          (System_Collections_Generic_List_string__o *)v94,
          0);
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1128;
        CombineServantListViewNoticeTween__SetTexts((CombineServantListViewNoticeTween_o *)gameObject, 0, 0);
        goto LABEL_422;
      }
      gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
      if ( !gameObject )
        goto LABEL_1128;
      CombineServantListViewNoticeTween__RemoveTarget(
        (CombineServantListViewNoticeTween_o *)gameObject,
        *p_statusTxtLb,
        0);
      if ( item->fields.isDispAtkStatusUpInfo )
      {
        gameObject = (__int64)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_1128;
        if ( UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)gameObject, 0) )
        {
          gameObject = (__int64)item->fields.userSvtEntity;
          if ( !gameObject )
            goto LABEL_1128;
          if ( !UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)gameObject, 0) )
            goto LABEL_391;
        }
      }
      else if ( item->fields.isDispHpStatusUpInfo )
      {
        gameObject = (__int64)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_1128;
        if ( UserServantEntity__isAdjustHpMax((UserServantEntity_o *)gameObject, 0) )
        {
          gameObject = (__int64)item->fields.userSvtEntity;
          if ( !gameObject )
            goto LABEL_1128;
          if ( !UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)gameObject, 0) )
          {
LABEL_391:
            v77 = *p_statusTxtLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3563/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0);
            if ( !v77 )
              goto LABEL_1128;
            goto LABEL_288;
          }
        }
      }
LABEL_425:
      if ( item->fields.isBaseSvt )
      {
        gameObject = (__int64)this->fields.removeImg;
        if ( !gameObject )
          goto LABEL_1128;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1128;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      }
      break;
  }
  v86 = item->fields.type;
LABEL_430:
  if ( v86 == 9 )
  {
    gameObject = (__int64)this->fields.limitCountIcon;
    if ( !gameObject )
      goto LABEL_1128;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)gameObject,
      item->fields.currentLimitCnt,
      item->fields.maxLimitCnt,
      0);
    if ( item->fields.isParty )
    {
      gameObject = (__int64)this->fields.partyIcon;
      if ( !gameObject )
        goto LABEL_1128;
      FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
    }
    v125 = !item->fields.isLock;
    if ( !item->fields.isSwapLock )
      v125 = item->fields.isLock;
    if ( v125 )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_1128;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1128;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    }
    v126 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList);
    v127 = (UnityEngine_Object_o *)this->fields.baseButton;
    v128 = v126;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v129 = UnityEngine_Object__op_Inequality(v127, 0, 0);
    if ( !v128 )
    {
      if ( !v129 )
        goto LABEL_523;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1128;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1128;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1128;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1128;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)*v279;
      if ( !*v279 )
        goto LABEL_1128;
      v133 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_522;
    }
    if ( !v129 )
      goto LABEL_523;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( item->fields.isHeroineSvt || item->fields.isEventJoin || item->fields.isIgnoreCombineLimitSpecial )
    {
      v130 = *v279;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v131 = &StringLiteral_9275/*"NONSELECT_MATERIAL"*/;
    }
    else if ( item->fields.isLimitCntMax )
    {
      v130 = *v279;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v131 = &StringLiteral_9274/*"NONSELECT_LIMITUP_BASE"*/;
    }
    else
    {
      if ( !item->fields.isSealCombineLimit )
        goto LABEL_523;
      v130 = *v279;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v131 = &StringLiteral_11508/*"SEAL_COMBINE_LIMIT_THIRD"*/;
    }
LABEL_520:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v131, 0);
    if ( !v130 )
      goto LABEL_1128;
    v133 = (System_String_o *)gameObject;
    gameObject = (__int64)v130;
LABEL_522:
    UILabel__set_text((UILabel_o *)gameObject, v133, 0);
    goto LABEL_523;
  }
  if ( v86 != 2 )
    goto LABEL_527;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1128;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1128;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  v120 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v120 = item->fields.isLock;
  if ( v120 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList) )
  {
    v121 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v121, 0, 0) )
      goto LABEL_509;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    isHeroineSvt = item->fields.isHeroineSvt;
    sealedStateLabel = *v279;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isHeroineSvt )
      v124 = &StringLiteral_9275/*"NONSELECT_MATERIAL"*/;
    else
      v124 = &StringLiteral_9274/*"NONSELECT_LIMITUP_BASE"*/;
LABEL_507:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v124, 0);
    if ( !sealedStateLabel )
      goto LABEL_1128;
    UILabel__set_text(sealedStateLabel, (System_String_o *)gameObject, 0);
    goto LABEL_509;
  }
  if ( item->fields.isSealedLimitCount && item->fields.isLimitCntMax )
  {
    v132 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v132, 0, 0) )
      goto LABEL_509;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)this->fields.sealedStateLabel;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    sealedStateLabel = this->fields.sealedStateLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v124 = &StringLiteral_3286/*"CAN_SELECT_SEALED_SERVANT_BASE"*/;
    goto LABEL_507;
  }
  if ( item->fields.isLvMax && item->fields.isLimitUpItemNum && !item->fields.isSealCombineLimit )
  {
    if ( !item->fields.isLimitCntMax )
    {
      v272 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v272, 0, 0) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1128;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1128;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1128;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1128;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        gameObject = (__int64)*v279;
        if ( !*v279 )
          goto LABEL_1128;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
        gameObject = (__int64)*p_statusTxtLb;
        if ( !*p_statusTxtLb )
          goto LABEL_1128;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1128;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v130 = *p_statusTxtLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v131 = &StringLiteral_8786/*"MSG_ABLED_LIMITUP"*/;
        goto LABEL_520;
      }
    }
  }
  else
  {
    v134 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v134, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1128;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1128;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
  }
LABEL_509:
  if ( item->fields.isSealedLimitCount )
  {
    v135 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v135, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1128;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1128;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)this->fields.sealedStateLabel;
      if ( !gameObject )
        goto LABEL_1128;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1128;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v130 = this->fields.sealedStateLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v131 = &StringLiteral_3286/*"CAN_SELECT_SEALED_SERVANT_BASE"*/;
      goto LABEL_520;
    }
  }
LABEL_523:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_527:
  v136 = item->fields.type;
  v276 = this;
  v277 = item;
  v274 = modeKind;
  v275 = &this->fields.statusTxtLb;
  if ( v136 != 3 )
    goto LABEL_605;
  CombineServantListViewItem__GetSkillInfo(item, &skillInfoList, v29);
  enableSkillUp = item->fields.enableSkillUp;
  v138 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v138, 0);
  v140 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_1128;
  max_length = skillInfoList->max_length;
  if ( (int)max_length >= 1 )
  {
    v142 = 0;
    v143 = (unsigned int)(max_length - 1);
    v144 = (unsigned int)skillInfoList->max_length;
    while ( 1 )
    {
      if ( v142 >= LODWORD(v140->max_length) )
        goto LABEL_1129;
      v145 = v140->m_Items[v142];
      if ( v145 )
      {
        lv = v145->fields.lv;
        p_lv = &v145->fields.lv;
        v148 = *(p_lv - 1);
        if ( lv > 0 )
        {
          gameObject = (__int64)System_Int32__ToString((int32_t)p_lv, 0);
          goto LABEL_539;
        }
      }
      else
      {
        v148 = -1;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9281/*"NONSKILL_TXT"*/, 0);
LABEL_539:
      v149 = (Il2CppObject *)gameObject;
      if ( enableSkillUp )
      {
        v150 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v148,
                 (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v143 == v142 )
        {
          v151 = &StringLiteral_12227/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v150 )
            v151 = &StringLiteral_12229/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v151 = &StringLiteral_12228/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v150 )
            v151 = &StringLiteral_12230/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v151, 0);
        if ( v138 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v138, (System_String_o *)gameObject, v149, 0);
          if ( v144 == ++v142 )
            goto LABEL_553;
          v140 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_1128;
    }
  }
  if ( !v138 )
    goto LABEL_1128;
LABEL_553:
  skillLvLabel = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v138->klass->vtable._3_ToString.methodPtr)(
                 v138,
                 v138->klass->vtable._3_ToString.method);
  if ( !skillLvLabel )
    goto LABEL_1128;
  UILabel__set_text(skillLvLabel, (System_String_o *)gameObject, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1128;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  modeKind = v274;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1128;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  v153 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v153 = item->fields.isLock;
  if ( v153 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList) )
  {
    v154 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v154, 0, 0) )
      goto LABEL_600;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v155 = *v279;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9279/*"NONSELECT_SKILLUP_BASE"*/, 0);
    if ( !v155 )
      goto LABEL_1128;
    UILabel__set_text(v155, (System_String_o *)gameObject, 0);
    if ( !item->fields.isHeroineSvt )
      goto LABEL_600;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_40206092(126, 0) )
      goto LABEL_600;
    v156 = *v279;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v157 = &StringLiteral_11514/*"SELECT_CANNOT"*/;
    goto LABEL_594;
  }
  isSkillUpItemNum = item->fields.isSkillUpItemNum;
  v159 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v160 = UnityEngine_Object__op_Inequality(v159, 0, 0);
  if ( !isSkillUpItemNum )
  {
    if ( v160 )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1128;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1128;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_600;
  }
  if ( v160 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*v275;
    if ( !*v275 )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v156 = *v275;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v157 = &StringLiteral_8787/*"MSG_ABLED_SKILLUP"*/;
LABEL_594:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v157, 0);
    if ( !v156 )
      goto LABEL_1128;
    UILabel__set_text(v156, (System_String_o *)gameObject, 0);
  }
LABEL_600:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v136 = item->fields.type;
LABEL_605:
  if ( v136 != 11 )
    goto LABEL_702;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(item, switchInfoList);
  enableAppendSkillUp = item->fields.enableAppendSkillUp;
  v163 = AppendSkillData;
  v164 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v164, 0);
  if ( !v163 )
    goto LABEL_1128;
  svtUseSkillIdList = v163->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_1128;
  v166 = svtUseSkillIdList->max_length;
  if ( (int)v166 >= 1 )
  {
    v167 = 0;
    v168 = (unsigned int)(v166 - 1);
    v169 = (unsigned int)svtUseSkillIdList->max_length;
    while ( v167 < LODWORD(svtUseSkillIdList->max_length) )
    {
      svtSkillLvList = v163->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_1128;
      if ( v167 >= LODWORD(svtSkillLvList->max_length) )
        break;
      v171 = (__int64)svtSkillLvList + 4 * v167;
      v172 = svtUseSkillIdList->m_Items[v167];
      v174 = *(_DWORD *)(v171 + 32);
      v173 = v171 + 32;
      if ( v174 <= 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9281/*"NONSKILL_TXT"*/, 0);
      }
      else
      {
        gameObject = (__int64)System_Int32__ToString(v173, 0);
      }
      v175 = (Il2CppObject *)gameObject;
      if ( enableAppendSkillUp )
      {
        v176 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v172,
                 (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v167 == v168 )
        {
          v177 = &StringLiteral_12227/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v176 )
            v177 = &StringLiteral_12229/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v177 = &StringLiteral_12228/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v176 )
            v177 = &StringLiteral_12230/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v177, 0);
        if ( v164 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v164, (System_String_o *)gameObject, v175, 0);
          if ( ++v167 == v169 )
            goto LABEL_632;
          svtUseSkillIdList = v163->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_1128;
    }
LABEL_1129:
    sub_1C2D6F4(gameObject, switchInfoList, v139);
  }
  if ( !v164 )
    goto LABEL_1128;
LABEL_632:
  v178 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v164->klass->vtable._3_ToString.methodPtr)(
                 v164,
                 v164->klass->vtable._3_ToString.method);
  if ( !v178 )
    goto LABEL_1128;
  UILabel__set_text(v178, (System_String_o *)gameObject, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1128;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  modeKind = v274;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1128;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  v179 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v179 = item->fields.isLock;
  if ( v179 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  gameObject = CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v180 = *v279;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9279/*"NONSELECT_SKILLUP_BASE"*/, 0);
    if ( !v180 )
      goto LABEL_1128;
    UILabel__set_text(v180, (System_String_o *)gameObject, 0);
    if ( item->fields.isEventJoin )
    {
      v181 = *v279;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10285/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v181 )
        goto LABEL_1128;
      UILabel__set_text(v181, (System_String_o *)gameObject, 0);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_672;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_40206092(126, 0) )
      goto LABEL_672;
    v182 = *v279;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v183 = &StringLiteral_11514/*"SELECT_CANNOT"*/;
    goto LABEL_670;
  }
  if ( !enableAppendSkillUp )
    goto LABEL_1128;
  if ( enableAppendSkillUp->fields._size > 0 || item->fields.isAppendSkillOpenItemNum )
  {
    gameObject = (__int64)*v275;
    if ( !*v275 )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v182 = *v275;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v183 = &StringLiteral_8787/*"MSG_ABLED_SKILLUP"*/;
LABEL_670:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v183, 0);
    if ( !v182 )
      goto LABEL_1128;
    UILabel__set_text(v182, (System_String_o *)gameObject, 0);
  }
LABEL_672:
  v184 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v184, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
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
      switchInfoList = (MethodInfo *)this->fields.switchInfoList;
      if ( switchInfoList )
      {
        gameObject = (__int64)this->fields.switchInfoComp;
        if ( !gameObject )
          goto LABEL_1128;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)gameObject, (UIWidget_array *)switchInfoList, 0, 0);
        gameObject = (__int64)this->fields.coinInfo;
        if ( !gameObject )
          goto LABEL_1128;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        coinNumLabel = this->fields.coinNumLabel;
        gameObject = CombineServantListViewItem__get_SkillOpenItemNum(item, v188);
        if ( (gameObject & 0x80000000) != 0 )
        {
          switchInfoList = (MethodInfo *)StringLiteral_1/*""*/;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(item, v189);
          v193 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum, v190, v191, v192);
          gameObject = (__int64)System_String__Format((System_String_o *)StringLiteral_25029/*"{0:#,0}"*/, v193, 0);
          switchInfoList = (MethodInfo *)gameObject;
        }
        if ( !coinNumLabel )
          goto LABEL_1128;
        UILabel__set_text(coinNumLabel, (System_String_o *)switchInfoList, 0);
        gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, v194);
        coinIcon = this->fields.coinIcon;
        if ( (int)gameObject < 1 )
        {
          if ( !coinIcon )
            goto LABEL_1128;
          gameObject = (__int64)coinIcon->fields.iconSprite;
          if ( !gameObject )
            goto LABEL_1128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        else
        {
          gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, switchInfoList);
          if ( !coinIcon )
            goto LABEL_1128;
          ItemIconComponent__SetItem(coinIcon, gameObject, -1, 1, 0);
        }
      }
    }
  }
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_702:
  v196 = item->fields.type;
  if ( v196 != 12 )
    goto LABEL_818;
  v197 = CombineServantListViewItem__GetAppendSkillData(item, switchInfoList);
  v198 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v198, 0);
  if ( !v197 )
    goto LABEL_1128;
  v199 = v197->fields.svtUseSkillIdList;
  if ( !v199 )
    goto LABEL_1128;
  v200 = v199->max_length;
  if ( (int)v200 < 1 )
  {
    v203 = 0;
    v215 = 0;
    if ( !v198 )
      goto LABEL_1128;
  }
  else
  {
    v201 = 0;
    v202 = 0;
    v203 = 0;
    v204 = 0;
    while ( 1 )
    {
      if ( v204 >= LODWORD(v199->max_length) )
        goto LABEL_1129;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9281/*"NONSKILL_TXT"*/, 0);
      v205 = v197->fields.svtSkillLvList;
      if ( !v205 )
        goto LABEL_1128;
      if ( v204 >= LODWORD(v205->max_length) )
        goto LABEL_1129;
      v206 = (char *)v205 + 4 * v204;
      v207 = *((_DWORD *)v206 + 8);
      gameObject = (__int64)(v206 + 32);
      if ( v207 >= 1 )
      {
        gameObject = (__int64)System_Int32__ToString(gameObject, 0);
        v205 = v197->fields.svtSkillLvList;
        if ( !v205 )
          goto LABEL_1128;
        v202 = 1;
      }
      if ( v204 >= LODWORD(v205->max_length) )
        goto LABEL_1129;
      v208 = v205->m_Items[0];
      v209 = v205->m_Items[v204++];
      v203 |= v209 < 10;
      v201 |= v208 != v209;
      if ( v204 == (unsigned int)v200 )
        break;
      v199 = v197->fields.svtUseSkillIdList;
      if ( !v199 )
        goto LABEL_1128;
    }
    v273 = v202;
    v210 = 0;
    v211 = 32;
    do
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9281/*"NONSKILL_TXT"*/, 0);
      v212 = v197->fields.svtSkillLvList;
      if ( !v212 )
        goto LABEL_1128;
      if ( v210 >= LODWORD(v212->max_length) )
        goto LABEL_1129;
      v213 = (Il2CppObject *)gameObject;
      if ( *(int *)((char *)&v212->obj.klass + v211) >= 1 )
        v213 = (Il2CppObject *)System_Int32__ToString((int)v212 + (int)v211, 0);
      if ( (_DWORD)v200 - 1 == v210 )
      {
        if ( (v201 & 1) == 0 )
          goto LABEL_732;
        if ( !v277->fields.isHeroineSvt )
          goto LABEL_741;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_40206092(126, 0) )
        {
LABEL_732:
          v214 = &StringLiteral_12229/*"SKILL_LVDISP_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v214 = &StringLiteral_12229/*"SKILL_LVDISP_SINGLE_TXT"*/;
          }
        }
        else
        {
LABEL_741:
          v214 = &StringLiteral_12227/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v214 = &StringLiteral_12227/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          }
        }
      }
      else
      {
        if ( (v201 & 1) == 0 )
          goto LABEL_739;
        if ( !v277->fields.isHeroineSvt )
          goto LABEL_743;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_40206092(126, 0) )
        {
LABEL_739:
          v214 = &StringLiteral_12230/*"SKILL_LVDISP_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v214 = &StringLiteral_12230/*"SKILL_LVDISP_TXT"*/;
          }
        }
        else
        {
LABEL_743:
          v214 = &StringLiteral_12228/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v214 = &StringLiteral_12228/*"SKILL_LVDISP_ENABLE_TXT"*/;
          }
        }
      }
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v214, 0);
      if ( !v198 )
        goto LABEL_1128;
      System_Text_StringBuilder__AppendFormat(v198, (System_String_o *)gameObject, v213, 0);
      ++v210;
      v211 += 4;
    }
    while ( (unsigned int)v200 != v210 );
    this = v276;
    item = v277;
    v215 = v273;
    modeKind = v274;
    p_statusTxtLb = v275;
  }
  v216 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v198->klass->vtable._3_ToString.methodPtr)(
                 v198,
                 v198->klass->vtable._3_ToString.method);
  if ( !v216 )
    goto LABEL_1128;
  UILabel__set_text(v216, (System_String_o *)gameObject, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1128;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1128;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  v217 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v217 = item->fields.isLock;
  if ( v217 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList) )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (__int64)*v279;
    if ( !*v279 )
      goto LABEL_1128;
    UILabel__set_text((UILabel_o *)gameObject, string_TypeInfo->static_fields->Empty, 0);
    if ( item->fields.isEventJoin )
    {
      v218 = *v279;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10285/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v218 )
        goto LABEL_1128;
      UILabel__set_text(v218, (System_String_o *)gameObject, 0);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_1132;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_40206092(126, 0) )
    {
      v219 = *v279;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v220 = &StringLiteral_11514/*"SELECT_CANNOT"*/;
    }
    else
    {
LABEL_1132:
      if ( item->fields.isEventJoin )
      {
        v219 = *v279;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v220 = &StringLiteral_11546/*"SELECT_SERVANT_EVENT_JOIN"*/;
      }
      else if ( (v215 & 1) != 0 )
      {
        if ( (v203 & 1) != 0 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C211E1 )
          {
            sub_1C2D490(&NetworkManager_TypeInfo);
            byte_4C211E1 = 1;
          }
          gameObject = (__int64)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            gameObject = (__int64)NetworkManager_TypeInfo;
          }
          if ( !Master_object )
            goto LABEL_1128;
          if ( !UserServantAppendPassiveSkillMaster__TryGetEntity(
                  (UserServantAppendPassiveSkillMaster_o *)Master_object,
                  &entity,
                  *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                  item->fields.svtId,
                  0)
            || !UserServantAppendPassiveSkillMaster__IsExchangeLimited(0) )
          {
            goto LABEL_807;
          }
          v219 = *v279;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1986/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/, 0);
          if ( !entity )
            goto LABEL_1128;
          v222 = (System_String_o *)gameObject;
          SkillOpenItemNum = UserServantAppendPassiveSkillEntity__GetRemainingExchangeNum(entity, 0);
          v226 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum, v223, v224, v225);
          gameObject = (__int64)System_String__Format(v222, v226, 0);
          if ( !v219 )
            goto LABEL_1128;
          goto LABEL_806;
        }
        v219 = *v279;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v220 = &StringLiteral_1985/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/;
      }
      else
      {
        v219 = *v279;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v220 = &StringLiteral_1984/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/;
      }
    }
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v220, 0);
    if ( !v219 )
      goto LABEL_1128;
LABEL_806:
    UILabel__set_text(v219, (System_String_o *)gameObject, 0);
  }
LABEL_807:
  v227 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v227, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
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
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v196 = item->fields.type;
LABEL_818:
  if ( v196 != 4 )
    goto LABEL_866;
  gameObject = (__int64)this->fields.npIconLabel;
  if ( !gameObject )
    goto LABEL_1128;
  v228 = SHIDWORD(tdMaxLv.invoker_method) <= 0 ? -1 : LODWORD(tdMaxLv.invoker_method);
  UIIconLabel__Set_40889008((UIIconLabel_o *)gameObject, 33, v228, SHIDWORD(tdMaxLv.methodPointer), 0, 0, 0, 0, 0, 0, 0);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1128;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  v229 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v229 = item->fields.isLock;
  if ( v229 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList) )
  {
    v230 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v230, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1128;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1128;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1128;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1128;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v231 = item->fields.isHeroineSvt;
      v232 = *v279;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v233 = (System_String_o **)(v231 ? &StringLiteral_9275/*"NONSELECT_MATERIAL"*/ : &StringLiteral_9278/*"NONSELECT_NPUP_BASE"*/);
      gameObject = (__int64)LocalizationManager__Get(*v233, 0);
      if ( !v232 )
        goto LABEL_1128;
LABEL_861:
      UILabel__set_text(v232, (System_String_o *)gameObject, 0);
    }
  }
  else
  {
    if ( !item->fields.isSameSvt && !item->fields.isBaseSvt )
    {
      v245 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v245, 0, 0) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1128;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1128;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      }
      goto LABEL_862;
    }
    v234 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v234, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1128;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1128;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      if ( item->fields.isSameSvt )
      {
        gameObject = (__int64)*p_statusTxtLb;
        if ( !*p_statusTxtLb )
          goto LABEL_1128;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1128;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v232 = *p_statusTxtLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8789/*"MSG_ABLED_TDUP"*/, 0);
        if ( !v232 )
          goto LABEL_1128;
        goto LABEL_861;
      }
    }
  }
LABEL_862:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_866:
  v235 = item->fields.type;
  if ( v235 != 6 )
    goto LABEL_933;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1128;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1128;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  v236 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v236 = item->fields.isLock;
  if ( v236 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList) )
  {
    v237 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v237, 0, 0) )
      goto LABEL_928;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( item->fields.isHeroineSvt && !item->fields.isLvExceedMax )
    {
      v239 = *v279;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v240 = &StringLiteral_9275/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      isEventJoin = item->fields.isEventJoin;
      v239 = *v279;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v240 = isEventJoin ? &StringLiteral_11546/*"SELECT_SERVANT_EVENT_JOIN"*/ : &StringLiteral_9329/*"NO_SELECT_LVEXCEED"*/;
    }
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v240, 0);
    if ( !v239 )
      goto LABEL_1128;
    goto LABEL_927;
  }
  if ( !item->fields.isLvMax || !item->fields.isLimitCntMax )
  {
    v244 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v244, 0, 0) )
      goto LABEL_928;
    goto LABEL_911;
  }
  isLvExceedItemNum = item->fields.isLvExceedItemNum;
  v242 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v243 = UnityEngine_Object__op_Inequality(v242, 0, 0);
  if ( !isLvExceedItemNum )
  {
    if ( !v243 )
      goto LABEL_928;
LABEL_911:
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_928;
  }
  if ( v243 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)*v279;
    if ( !*v279 )
      goto LABEL_1128;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v239 = *p_statusTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8786/*"MSG_ABLED_LIMITUP"*/, 0);
    if ( !v239 )
      goto LABEL_1128;
LABEL_927:
    UILabel__set_text(v239, (System_String_o *)gameObject, 0);
  }
LABEL_928:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v235 = item->fields.type;
LABEL_933:
  if ( v235 != 10 && v235 != 7 )
    goto LABEL_997;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1128;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.subIconLabel;
  if ( !gameObject )
    goto LABEL_1128;
  UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0);
  v247 = item->fields.type;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  gameObject = CombineServantListViewManager__GetSortKind(v247, v246);
  v248 = this->fields.servantFaceIcon;
  if ( !v248 )
    goto LABEL_1128;
  if ( (_DWORD)gameObject == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *__return_ptr, struct ServantFaceIconComponent_o *, __int64, const MethodInfo *))v248->klass->vtable._4_ParameterChange.methodPtr)(
      v248,
      this->fields.servantFaceIcon,
      1,
      v248->klass->vtable._4_ParameterChange.method);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_1128;
    ServantFaceIconComponent__ResetIconLabelPos((ServantFaceIconComponent_o *)gameObject, 0);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_1128;
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
      goto LABEL_1128;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  v249 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v249 = item->fields.isLock;
  if ( v249 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v250 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList);
  v251 = (UnityEngine_Object_o *)this->fields.baseButton;
  v252 = v250;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v253 = UnityEngine_Object__op_Inequality(v251, 0, 0);
  if ( v252 )
  {
    if ( !v253 )
      goto LABEL_986;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( item->fields.type == 10 && item->fields.isCommandCardExceedMax )
    {
      v254 = *v279;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9272/*"NONSEELECT_STATUSUP_MAX"*/, 0);
      if ( !v254 )
        goto LABEL_1128;
      UILabel__set_text(v254, (System_String_o *)gameObject, 0);
    }
    if ( item->fields.isEventJoin )
    {
      v255 = *v279;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11546/*"SELECT_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v255 )
        goto LABEL_1128;
      UILabel__set_text(v255, (System_String_o *)gameObject, 0);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_986;
    v256 = *v279;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11514/*"SELECT_CANNOT"*/, 0);
    if ( !v256 )
      goto LABEL_1128;
    v257 = (System_String_o *)gameObject;
    gameObject = (__int64)v256;
    goto LABEL_985;
  }
  if ( v253 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1128;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)*v279;
    if ( !*v279 )
      goto LABEL_1128;
    v257 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_985:
    UILabel__set_text((UILabel_o *)gameObject, v257, 0);
  }
LABEL_986:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v258 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v258, 0) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v259 = this->fields.svtCommandCardList;
    gameObject = CombineServantListViewItem__get_UserSvtId(item, v260);
    if ( !v259 )
      goto LABEL_1128;
    ServantCommandCardListComponent__Set(v259, gameObject, 1, 1, 0);
  }
LABEL_997:
  if ( item->fields.type != 8 )
    goto LABEL_1055;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1128;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  v261 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v261 = item->fields.isLock;
  if ( v261 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList) )
  {
    if ( item->fields.isFriendshipRankMax )
    {
      isFriendshipExceedItemNum = item->fields.isFriendshipExceedItemNum;
      v267 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v268 = UnityEngine_Object__op_Inequality(v267, 0, 0);
      if ( isFriendshipExceedItemNum )
      {
        if ( !v268 )
          goto LABEL_1051;
        gameObject = (__int64)this->fields.baseButton;
        if ( gameObject )
        {
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( gameObject )
          {
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
            gameObject = (__int64)*p_maskSprite;
            if ( *p_maskSprite )
            {
              gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
                gameObject = (__int64)*v279;
                if ( *v279 )
                {
                  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
                  gameObject = (__int64)*p_statusTxtLb;
                  if ( *p_statusTxtLb )
                  {
                    gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)gameObject,
                                            0);
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
                      v264 = *p_statusTxtLb;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8785/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, 0);
                      if ( v264 )
                        goto LABEL_1050;
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_1128;
      }
    }
    else
    {
      v269 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v268 = UnityEngine_Object__op_Inequality(v269, 0, 0);
    }
    if ( v268 )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1128;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1128;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_1051;
  }
  v262 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v262, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( gameObject )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( gameObject )
      {
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( *p_maskSprite )
        {
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            if ( !item->fields.isHeroineSvt || item->fields.isFriendshipExceedMax && ConstantMaster__IsFLAG20250430(0) )
            {
              v263 = item->fields.isEventJoin;
              v264 = *v279;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v265 = v263 ? &StringLiteral_11546/*"SELECT_SERVANT_EVENT_JOIN"*/ : &StringLiteral_9328/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
            }
            else
            {
              v264 = *v279;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v265 = &StringLiteral_9275/*"NONSELECT_MATERIAL"*/;
            }
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v265, 0);
            if ( v264 )
            {
LABEL_1050:
              UILabel__set_text(v264, (System_String_o *)gameObject, 0);
              goto LABEL_1051;
            }
          }
        }
      }
    }
LABEL_1128:
    sub_1C2D6EC(gameObject, switchInfoList);
  }
LABEL_1051:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_1055:
  if ( (unsigned int)(modeKind - 1) <= 1 )
  {
    if ( item->fields.isHeroineSvt )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__Get_40206092(126, 0) )
        return;
    }
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isCanNotLock, 0);
    if ( item->fields.isCanNotLock )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      switchInfoList = (MethodInfo *)LocalizationManager__Get((System_String_o *)StringLiteral_8309/*"LOCKMODE_SELECTED_SERVANT"*/, 0);
    }
    else
    {
      switchInfoList = (MethodInfo *)StringLiteral_1/*""*/;
    }
    gameObject = (__int64)*v279;
    if ( !*v279 )
      goto LABEL_1128;
    goto LABEL_1092;
  }
  if ( modeKind != 3 )
    return;
  if ( item->fields.isEventJoin )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v270 = *v279;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v271 = &StringLiteral_11546/*"SELECT_SERVANT_EVENT_JOIN"*/;
  }
  else
  {
    if ( !item->fields.isCanNotLock )
    {
      gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, switchInfoList);
      if ( !gameObject )
        goto LABEL_1128;
      if ( !UserServantEntity__IsLeave((UserServantEntity_o *)gameObject, 0) )
      {
        gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, switchInfoList);
        if ( !gameObject )
          goto LABEL_1128;
        if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)gameObject, 0) )
        {
          gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, switchInfoList);
          if ( !gameObject )
            goto LABEL_1128;
          if ( !UserServantEntity__IsStatusUp((UserServantEntity_o *)gameObject, 0) )
          {
            gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, switchInfoList);
            if ( !gameObject )
              goto LABEL_1128;
            if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)gameObject, 0) )
            {
              gameObject = (__int64)*p_maskSprite;
              if ( !*p_maskSprite )
                goto LABEL_1128;
              gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1128;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
              gameObject = (__int64)*v279;
              if ( !*v279 )
                goto LABEL_1128;
              switchInfoList = (MethodInfo *)StringLiteral_1/*""*/;
              goto LABEL_1092;
            }
          }
        }
      }
    }
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1128;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v270 = *v279;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v271 = &StringLiteral_8309/*"LOCKMODE_SELECTED_SERVANT"*/;
  }
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v271, 0);
  if ( !v270 )
    goto LABEL_1128;
  switchInfoList = (MethodInfo *)gameObject;
  gameObject = (__int64)v270;
LABEL_1092:
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)switchInfoList, 0);
  gameObject = (__int64)*p_statusTxtLb;
  if ( !*p_statusTxtLb )
    goto LABEL_1128;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
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

  if ( (byte_4C2B466 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B466 = 1;
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
    sub_1C2D6EC(v7, v6);
  }
}