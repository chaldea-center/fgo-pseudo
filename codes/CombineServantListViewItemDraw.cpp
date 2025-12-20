void CombineServantListViewItemDraw___ctor(CombineServantListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.fortificationInfoRootObjOffsetY = 9.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CombineServantListViewItemDraw__Awake(CombineServantListViewItemDraw_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v5; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_1C9403C(&this->fields.defaultMaskAtlas, mAtlas);
  v5 = this->fields.maskSprite;
  if ( v5 )
    mSpriteName = v5->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_1C9403C(&this->fields.defaultMaskName, mSpriteName);
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
  if ( (byte_4D2668A & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_9308/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_1C94098(&StringLiteral_9303/*"NONSELECT_MATERIAL"*/);
    sub_1C94098(&StringLiteral_9306/*"NONSELECT_NPUP_BASE"*/);
    sub_1C94098(&StringLiteral_9304/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    byte_4D2668A = 1;
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
          servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9308/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
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
          servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9308/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
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
      v27 = &StringLiteral_9308/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_79:
      servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)*v27, 0);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)servantEntity, 0);
        goto LABEL_81;
      }
LABEL_93:
      sub_1C942F0(servantEntity, v8);
    }
    maskLabel = this->fields.maskLabel;
    v20 = LocalizationManager_TypeInfo;
    v22 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_76:
    if ( !v22 )
      j_il2cpp_runtime_class_init_0(v20);
    v27 = &StringLiteral_9303/*"NONSELECT_MATERIAL"*/;
    goto LABEL_79;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, v8) )
  {
    v19 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9304/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0);
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
      v27 = &StringLiteral_9306/*"NONSELECT_NPUP_BASE"*/;
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
  const MethodInfo *v43; // x1
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
  const MethodInfo *v81; // x1
  bool IsNotCombineResourceServant; // w0
  UILabel_o *v83; // x23
  bool v84; // w24
  System_String_o **v85; // x8
  UILabel_o *v86; // x22
  System_String_o *v87; // x0
  UILabel_o *v88; // x22
  UILabel_o *v89; // x22
  int32_t v90; // w8
  UILabel_o *v91; // x22
  UnityEngine_GameObject_o *v92; // x22
  UILabel_o *fortificationAppointmentLabel; // x22
  float fortificationInfoRootObjOffsetY; // s10
  float x; // s8
  float z; // s9
  System_String_o *v97; // x1
  System_Collections_Generic_List_object__o *v98; // x22
  System_String_o *v99; // x23
  Il2CppObject *v100; // x0
  struct System_Object_array *items; // x8
  _QWORD *v102; // x9
  __int64 size; // x10
  __int64 v104; // x1
  Il2CppClass **v105; // x0
  System_String_o *v106; // x23
  Il2CppObject *v107; // x0
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  __int64 v111; // x1
  Il2CppClass **v112; // x0
  struct System_Object_array *v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  __int64 v116; // x1
  Il2CppClass **v117; // x0
  _BOOL4 v118; // w8
  UnityEngine_Object_o *v119; // x22
  _BOOL4 isHeroineSvt; // w19
  UILabel_o *sealedStateLabel; // x22
  __int64 *v122; // x8
  _BOOL4 v123; // w8
  bool v124; // w0
  UnityEngine_Object_o *v125; // x23
  bool v126; // w22
  bool v127; // w0
  UILabel_o *v128; // x22
  __int64 *v129; // x8
  UnityEngine_Object_o *v130; // x22
  System_String_o *v131; // x1
  UnityEngine_Object_o *v132; // x22
  UnityEngine_Object_o *v133; // x22
  int32_t v134; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  System_Text_StringBuilder_o *v136; // x22
  SkillInfo_array *v137; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned __int64 v139; // x19
  __int64 v140; // x20
  __int64 v141; // x21
  SkillInfo_o *v142; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v145; // w25
  Il2CppObject *v146; // x24
  bool v147; // w25
  __int64 *v148; // x8
  UILabel_o *skillLvLabel; // x23
  _BOOL4 v150; // w8
  UnityEngine_Object_o *v151; // x22
  UILabel_o *v152; // x22
  UILabel_o *v153; // x22
  __int64 *v154; // x8
  _BOOL4 isSkillUpItemNum; // w19
  UnityEngine_Object_o *v156; // x22
  bool v157; // w0
  SvtUseSkillData_o *AppendSkillData; // x0
  struct System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v160; // x24
  System_Text_StringBuilder_o *v161; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  il2cpp_array_size_t v163; // x9
  unsigned __int64 v164; // x19
  __int64 v165; // x20
  __int64 v166; // x21
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v168; // x0
  int32_t v169; // w26
  int32_t v170; // w0
  int v171; // t1
  Il2CppObject *v172; // x25
  bool v173; // w26
  __int64 *v174; // x8
  UILabel_o *v175; // x24
  _BOOL4 v176; // w8
  UILabel_o *v177; // x22
  UILabel_o *v178; // x22
  UILabel_o *v179; // x22
  __int64 *v180; // x8
  UnityEngine_Object_o *v181; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  const MethodInfo *v185; // x1
  const MethodInfo *v186; // x1
  Il2CppObject *v187; // x0
  const MethodInfo *v188; // x1
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
  _BOOL4 v211; // w8
  UILabel_o *v212; // x22
  UILabel_o *v213; // x22
  __int64 *v214; // x8
  Il2CppObject *Master_object; // x22
  System_String_o *v216; // x23
  Il2CppObject *v217; // x0
  UnityEngine_Object_o *v218; // x22
  int32_t v219; // w2
  _BOOL4 v220; // w8
  UnityEngine_Object_o *v221; // x22
  _BOOL4 v222; // w19
  UILabel_o *v223; // x22
  System_String_o **v224; // x8
  UnityEngine_Object_o *v225; // x22
  int32_t v226; // w8
  _BOOL4 v227; // w8
  UnityEngine_Object_o *v228; // x22
  _BOOL4 isEventJoin; // w19
  UILabel_o *v230; // x22
  __int64 *v231; // x8
  _BOOL4 isLvExceedItemNum; // w19
  UnityEngine_Object_o *v233; // x22
  bool v234; // w0
  UnityEngine_Object_o *v235; // x22
  UnityEngine_Object_o *v236; // x22
  const MethodInfo *v237; // x1
  int32_t v238; // w22
  struct ServantFaceIconComponent_o *v239; // x8
  _BOOL4 v240; // w8
  bool v241; // w0
  UnityEngine_Object_o *v242; // x23
  bool v243; // w22
  bool v244; // w0
  UILabel_o *v245; // x22
  UILabel_o *v246; // x22
  struct UILabel_o *v247; // x22
  System_String_o *v248; // x1
  UnityEngine_Object_o *v249; // x22
  ServantCommandCardListComponent_o *v250; // x22
  const MethodInfo *v251; // x1
  _BOOL4 v252; // w8
  UnityEngine_Object_o *v253; // x22
  _BOOL4 v254; // w19
  UILabel_o *v255; // x22
  __int64 *v256; // x8
  _BOOL4 isFriendshipExceedItemNum; // w19
  UnityEngine_Object_o *v258; // x22
  bool v259; // w0
  UnityEngine_Object_o *v260; // x22
  struct UILabel_o *v261; // x19
  __int64 *v262; // x8
  UnityEngine_Object_o *v263; // x22
  char v264; // [xsp+20h] [xbp-D0h]
  int32_t v265; // [xsp+24h] [xbp-CCh]
  struct UILabel_o **v266; // [xsp+28h] [xbp-C8h]
  CombineServantListViewItemDraw_o *v267; // [xsp+30h] [xbp-C0h]
  CombineServantListViewItem_o *v268; // [xsp+38h] [xbp-B8h]
  struct UISprite_o **p_maskSprite; // [xsp+40h] [xbp-B0h]
  struct UILabel_o **v270; // [xsp+48h] [xbp-A8h]
  int32_t SkillOpenItemNum; // [xsp+54h] [xbp-9Ch] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+58h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+60h] [xbp-90h] BYREF
  MethodInfo tdMaxLv; // [xsp+68h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v275; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v277; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D26689 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&CombineServantListViewManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&System_Text_StringBuilder_TypeInfo);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&TutorialFlag_TypeInfo);
    sub_1C94098(&StringLiteral_12283/*"SKILL_LVDISP_TXT"*/);
    sub_1C94098(&StringLiteral_10323/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/);
    sub_1C94098(&StringLiteral_9308/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_1C94098(&StringLiteral_6485/*"FORTIFICATION_APPOINTMENT"*/);
    sub_1C94098(&StringLiteral_3575/*"COMBINE_CAN_STATUS_UP_INFO"*/);
    sub_1C94098(&StringLiteral_8817/*"MSG_CAMPAIGN_COMBINE_EXP"*/);
    sub_1C94098(&StringLiteral_12281/*"SKILL_LVDISP_ENABLE_TXT"*/);
    sub_1C94098(&StringLiteral_1983/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/);
    sub_1C94098(&StringLiteral_9303/*"NONSELECT_MATERIAL"*/);
    sub_1C94098(&StringLiteral_23341/*"ribbon_noblephantasmup_01"*/);
    sub_1C94098(&StringLiteral_9302/*"NONSELECT_LIMITUP_BASE"*/);
    sub_1C94098(&StringLiteral_1984/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/);
    sub_1C94098(&StringLiteral_10124/*"PARTY_MEMBER_TXT"*/);
    sub_1C94098(&StringLiteral_3292/*"CAN_SELECT_SEALED_SERVANT_BASE"*/);
    sub_1C94098(&StringLiteral_9306/*"NONSELECT_NPUP_BASE"*/);
    sub_1C94098(&StringLiteral_12567/*"SUPPORT_MEMBER"*/);
    sub_1C94098(&StringLiteral_8813/*"MSG_ABLED_LIMITUP"*/);
    sub_1C94098(&StringLiteral_11599/*"SELECT_PUSH"*/);
    sub_1C94098(&StringLiteral_11568/*"SELECT_CANNOT"*/);
    sub_1C94098(&StringLiteral_9369/*"NPUP_BASE"*/);
    sub_1C94098(&StringLiteral_1985/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/);
    sub_1C94098(&StringLiteral_12280/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/);
    sub_1C94098(&StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C94098(&StringLiteral_9357/*"NO_SELECT_FRIENDSHIP_EXCEED"*/);
    sub_1C94098(&StringLiteral_11491/*"SAME_SERVANT"*/);
    sub_1C94098(&StringLiteral_8812/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/);
    sub_1C94098(&StringLiteral_9304/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    sub_1C94098(&StringLiteral_25304/*"{0:#,0}"*/);
    sub_1C94098(&StringLiteral_12282/*"SKILL_LVDISP_SINGLE_TXT"*/);
    sub_1C94098(&StringLiteral_8814/*"MSG_ABLED_SKILLUP"*/);
    sub_1C94098(&StringLiteral_9305/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/);
    sub_1C94098(&StringLiteral_9309/*"NONSKILL_TXT"*/);
    sub_1C94098(&StringLiteral_8336/*"LOCKMODE_SELECTED_SERVANT"*/);
    sub_1C94098(&StringLiteral_6405/*"FAVORITE_SERVANT"*/);
    sub_1C94098(&StringLiteral_3359/*"CHOICE_SERVANT"*/);
    sub_1C94098(&StringLiteral_11080/*"RECOMMEND_SUPPORT_MEMBER"*/);
    sub_1C94098(&StringLiteral_8816/*"MSG_ABLED_TDUP"*/);
    sub_1C94098(&StringLiteral_11562/*"SEAL_COMBINE_LIMIT_THIRD"*/);
    sub_1C94098(&StringLiteral_9301/*"NONSELECT_BASE_ALLMAX"*/);
    sub_1C94098(&StringLiteral_9358/*"NO_SELECT_LVEXCEED"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_9307/*"NONSELECT_SKILLUP_BASE"*/);
    sub_1C94098(&StringLiteral_11598/*"SELECT_PROTECTED_EVENT_SVT"*/);
    sub_1C94098(&StringLiteral_7013/*"GRAND_MEMBER"*/);
    sub_1C94098(&StringLiteral_8337/*"LOCK_SERVANT"*/);
    sub_1C94098(&StringLiteral_9300/*"NONSEELECT_STATUSUP_MAX"*/);
    byte_4D26689 = 1;
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
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
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
      goto LABEL_1136;
    ServantFaceIconComponent__Set_41844968(
      servantFaceIcon,
      (UserServantEntity_o *)gameObject,
      iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0);
    subIconLabel = this->fields.subIconLabel;
    rarity = item->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, v19);
    if ( !gameObject )
      goto LABEL_1136;
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_1136;
    ServantFaceIconComponent__Set_41844968(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0, 0);
    gameObject = (__int64)item->fields.iconLabelInfo2;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = IconLabelInfo__IsClear((IconLabelInfo_o *)gameObject, 0);
    subIconLabel = this->fields.subIconLabel;
    if ( (gameObject & 1) == 0 )
    {
      if ( !subIconLabel )
        goto LABEL_1136;
      UIIconLabel__Set(this->fields.subIconLabel, item->fields.iconLabelInfo2, 0);
      goto LABEL_22;
    }
    rarity = item->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, switchInfoList);
    if ( !gameObject )
      goto LABEL_1136;
  }
  v20 = *(_DWORD *)(gameObject + 296);
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, switchInfoList);
  if ( !gameObject || !subIconLabel )
    goto LABEL_1136;
  UIIconLabel__Set_41867060(
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
    goto LABEL_1136;
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
    goto LABEL_1136;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1136;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  p_statusTxtLb = &this->fields.statusTxtLb;
  gameObject = (__int64)this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1136;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1136;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.maskSprite;
  p_maskSprite = &this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_1136;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1136;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  p_maskLabel = &this->fields.maskLabel;
  gameObject = (__int64)this->fields.maskLabel;
  if ( !gameObject )
    goto LABEL_1136;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)*p_maskLabel;
  if ( !*p_maskLabel )
    goto LABEL_1136;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !byte_4D25F1E )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F1E = 1;
  }
  GameObjectExtensions__SetLocalScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1136;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1136;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1136;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1136;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !byte_4D25F1E )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F1E = 1;
  }
  GameObjectExtensions__SetLocalScale(v25, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1136;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1136;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.partyIcon;
  if ( !gameObject )
    goto LABEL_1136;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.removeImg;
  if ( !gameObject )
    goto LABEL_1136;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1136;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1136;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1136;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.choiceImg;
  if ( !gameObject )
    goto LABEL_1136;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1136;
  v26 = item->fields.isSwapChoice ? !item->fields.isChoice : item->fields.isChoice;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v26, 0);
  gameObject = (__int64)this->fields.switchInfoComp;
  if ( !gameObject )
    goto LABEL_1136;
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.fortificationRootObj;
  if ( !gameObject )
    goto LABEL_1136;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.fortificationNameLabel;
  if ( !gameObject )
    goto LABEL_1136;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)this->fields.fortificationDetailNameLabel;
  if ( !gameObject )
    goto LABEL_1136;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)this->fields.fortificationAppointmentLabel;
  if ( !gameObject )
    goto LABEL_1136;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushImg, 0, 0) )
  {
    gameObject = (__int64)this->fields.pushImg;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isPush, 0);
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_1136;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)gameObject, 0);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isMaterialTdSvt, 0);
    if ( item->fields.isMaterialTdSvt )
    {
      v30 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v30, (System_String_o *)StringLiteral_23341/*"ribbon_noblephantasmup_01"*/, 0);
      v32 = item->fields.type;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      if ( CombineServantListViewManager__GetSortKind(v32, v31) == 1 )
      {
        gameObject = (__int64)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_1136;
        v275.fields.x = 0.65;
        v275.fields.y = 1.0;
        v275.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v275, 0);
      }
    }
  }
  v33 = item->fields.type;
  v270 = &this->fields.maskLabel;
  switch ( v33 )
  {
    case 5:
      gameObject = (__int64)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_1136;
      v41 = SHIDWORD(tdMaxLv.invoker_method) <= 0 ? -1 : LODWORD(tdMaxLv.invoker_method);
      UIIconLabel__Set_41867060(
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
        goto LABEL_1136;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      goto LABEL_113;
    case 1:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1136;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0);
      if ( CombineServantListViewItem__get_IsProtected(item, v43) && item->fields.type != 5 )
      {
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1136;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1136;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, v81);
        if ( !gameObject )
          goto LABEL_1136;
        IsNotCombineResourceServant = UserServantEntity__IsNotCombineResourceServant(
                                        (UserServantEntity_o *)gameObject,
                                        0);
        v83 = *v270;
        v84 = IsNotCombineResourceServant;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v85 = (System_String_o **)(v84 ? &StringLiteral_9303/*"NONSELECT_MATERIAL"*/ : &StringLiteral_11598/*"SELECT_PROTECTED_EVENT_SVT"*/);
        gameObject = (__int64)LocalizationManager__Get(*v85, 0);
        if ( !v83 )
          goto LABEL_1136;
        UILabel__set_text(v83, (System_String_o *)gameObject, 0);
        v44 = 1;
LABEL_114:
        if ( item->fields.isParty )
        {
          gameObject = (__int64)this->fields.partyIcon;
          if ( !gameObject )
            goto LABEL_1136;
          FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v45 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10124/*"PARTY_MEMBER_TXT"*/, 0);
          if ( !v45 )
            goto LABEL_1136;
          UILabel__set_text(v45, (System_String_o *)gameObject, 0);
          v44 = 1;
        }
        if ( item->fields.isFavorite )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v46 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6405/*"FAVORITE_SERVANT"*/, 0);
          if ( !v46 )
            goto LABEL_1136;
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
            goto LABEL_1136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v48 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8337/*"LOCK_SERVANT"*/, 0);
          if ( !v48 )
            goto LABEL_1136;
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
            goto LABEL_1136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v50 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3359/*"CHOICE_SERVANT"*/, 0);
          if ( !v50 )
            goto LABEL_1136;
          UILabel__set_text(v50, (System_String_o *)gameObject, 0);
          v44 = 1;
        }
        if ( item->fields.isLimitCntTarget )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v51 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11491/*"SAME_SERVANT"*/, 0);
          if ( !v51 )
            goto LABEL_1136;
          UILabel__set_text(v51, (System_String_o *)gameObject, 0);
          v44 = 1;
        }
        if ( item->fields.isHeroineSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v52 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9303/*"NONSELECT_MATERIAL"*/, 0);
          if ( !v52 )
            goto LABEL_1136;
          UILabel__set_text(v52, (System_String_o *)gameObject, 0);
          v44 = 1;
        }
        if ( item->fields.isStatusUpSvt && !item->fields.isCanStUp )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v53 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9303/*"NONSELECT_MATERIAL"*/, 0);
          if ( !v53 )
            goto LABEL_1136;
          UILabel__set_text(v53, (System_String_o *)gameObject, 0);
          v44 = 1;
        }
        if ( item->fields.isEventJoin )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v54 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/, 0);
          if ( !v54 )
            goto LABEL_1136;
          UILabel__set_text(v54, (System_String_o *)gameObject, 0);
          v44 = 1;
        }
        if ( item->fields.isUseSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v55 = *v270;
          isParty = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v57 = &StringLiteral_12567/*"SUPPORT_MEMBER"*/;
          if ( isParty )
            v57 = &StringLiteral_10124/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v57, 0);
          if ( !v55 )
            goto LABEL_1136;
          UILabel__set_text(v55, (System_String_o *)gameObject, 0);
          v44 = 1;
        }
        if ( item->fields.isUseRecommendSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v58 = *v270;
          v59 = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v60 = &StringLiteral_11080/*"RECOMMEND_SUPPORT_MEMBER"*/;
          if ( v59 )
            v60 = &StringLiteral_10124/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v60, 0);
          if ( !v58 )
            goto LABEL_1136;
          UILabel__set_text(v58, (System_String_o *)gameObject, 0);
          if ( !item->fields.isParty )
          {
            gameObject = (__int64)*v270;
            if ( !*v270 )
              goto LABEL_1136;
            UILabel__SetCondensedScale((UILabel_o *)gameObject, 106, 0, 0);
          }
          v44 = 1;
        }
        if ( item->fields.isPush )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v61 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11599/*"SELECT_PUSH"*/, 0);
          if ( !v61 )
            goto LABEL_1136;
          UILabel__set_text(v61, (System_String_o *)gameObject, 0);
          gameObject = (__int64)*v270;
          if ( !*v270 )
            goto LABEL_1136;
          v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !byte_4D25F1E )
          {
            sub_1C94098(&UnityEngine_Vector3_TypeInfo);
            byte_4D25F1E = 1;
          }
          GameObjectExtensions__SetLocalScale(v62, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          v44 = 1;
        }
        if ( item->fields.isGrandSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v63 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7013/*"GRAND_MEMBER"*/, 0);
          if ( !v63 )
            goto LABEL_1136;
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
            goto LABEL_1136;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1136;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          if ( item->fields.isMaxNextLv || item->fields.isBaseLvMax )
          {
            if ( !item->fields.isCanStUp )
            {
              if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, switchInfoList) )
              {
                v86 = *v270;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9304/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0);
                if ( !v86 )
                  goto LABEL_1136;
                UILabel__set_text(v86, (System_String_o *)gameObject, 0);
                if ( item->fields.type != 5 )
                  break;
                v72 = *v270;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v87 = (System_String_o *)StringLiteral_9306/*"NONSELECT_NPUP_BASE"*/;
                goto LABEL_351;
              }
              goto LABEL_353;
            }
          }
          else if ( !item->fields.isCanStUp )
          {
            if ( item->fields.isFortification )
            {
              gameObject = (__int64)*v270;
              if ( !*v270 )
                goto LABEL_1136;
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1136;
              gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1136;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1136;
              UILabel__set_text((UILabel_o *)gameObject, item->fields.fortificationName, 0);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1136;
              UILabel__set_text((UILabel_o *)gameObject, item->fields.fortificationDetailName, 0);
              fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6485/*"FORTIFICATION_APPOINTMENT"*/, 0);
              if ( !fortificationAppointmentLabel )
                goto LABEL_1136;
              UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)gameObject, 0);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1136;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1136;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0);
              if ( item->fields.type != 5 )
                break;
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1136;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1136;
              localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1136;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              x = localPosition.fields.x;
              z = localPosition.fields.z;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1136;
              v277.fields.x = x;
              v277.fields.y = fortificationInfoRootObjOffsetY;
              v277.fields.z = z;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v277, 0);
              goto LABEL_353;
            }
            if ( (v44 & 1) == 0 )
            {
              v72 = *v270;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v73 = &StringLiteral_9303/*"NONSELECT_MATERIAL"*/;
LABEL_350:
              v87 = (System_String_o *)*v73;
LABEL_351:
              gameObject = (__int64)LocalizationManager__Get(v87, 0);
              if ( !v72 )
                goto LABEL_1136;
              UILabel__set_text(v72, (System_String_o *)gameObject, 0);
            }
LABEL_353:
            v90 = item->fields.type;
            if ( v90 != 5 )
              goto LABEL_439;
            if ( item->fields.isBaseSvt )
            {
              v91 = *v270;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9369/*"NPUP_BASE"*/, 0);
              if ( !v91 )
                goto LABEL_1136;
              UILabel__set_text(v91, (System_String_o *)gameObject, 0);
              gameObject = (__int64)*v270;
              if ( !*v270 )
                goto LABEL_1136;
              v92 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              if ( !byte_4D25F1E )
              {
                sub_1C94098(&UnityEngine_Vector3_TypeInfo);
                byte_4D25F1E = 1;
              }
              GameObjectExtensions__SetLocalScale(v92, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
            }
            break;
          }
          if ( item->fields.isStatusUpSvt )
          {
            if ( item->fields.rarity <= 3 )
            {
              if ( item->fields.isAtkUpMax || item->fields.isHpUpMax )
              {
                v88 = *v270;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9308/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                if ( !v88 )
                  goto LABEL_1136;
                UILabel__set_text(v88, (System_String_o *)gameObject, 0);
              }
              if ( item->fields.isAtkSecondUpMax || item->fields.isHpSecondUpMax )
              {
                v89 = *v270;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9308/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                if ( !v89 )
                  goto LABEL_1136;
                UILabel__set_text(v89, (System_String_o *)gameObject, 0);
              }
              if ( !item->fields.isNotSelectStatusUpAtk && !item->fields.isNotSelectStatusUpHp )
                goto LABEL_353;
              v72 = *v270;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v73 = &StringLiteral_9308/*"NONSELECT_UNDER_STATUS_MAX"*/;
            }
            else
            {
              if ( item->fields.atkBase >= 1 )
              {
                if ( item->fields.isAtkSecondUpMax || item->fields.isNotSelectSecondStatusUpAtk )
                {
                  v69 = *v270;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9308/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                  if ( !v69 )
                    goto LABEL_1136;
                  UILabel__set_text(v69, (System_String_o *)gameObject, 0);
                }
                if ( !item->fields.isAtkUpMax )
                {
                  v70 = *v270;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9305/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0);
                  if ( !v70 )
                    goto LABEL_1136;
                  UILabel__set_text(v70, (System_String_o *)gameObject, 0);
                }
              }
              if ( item->fields.hpBase < 1 )
                goto LABEL_353;
              if ( item->fields.isHpSecondUpMax || item->fields.isNotSelectSecondStatusUpHp )
              {
                v71 = *v270;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9308/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                if ( !v71 )
                  goto LABEL_1136;
                UILabel__set_text(v71, (System_String_o *)gameObject, 0);
              }
              if ( item->fields.isHpUpMax )
                goto LABEL_353;
              v72 = *v270;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v73 = &StringLiteral_9305/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
            }
            goto LABEL_350;
          }
          goto LABEL_353;
        }
        if ( v68 )
        {
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1136;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1136;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1136;
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
              goto LABEL_1136;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1136;
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
              goto LABEL_1136;
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
              goto LABEL_1136;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_1136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            v80 = *v270;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9303/*"NONSELECT_MATERIAL"*/, 0);
            if ( !v80 )
              goto LABEL_1136;
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
              goto LABEL_1136;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1136;
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
        goto LABEL_1136;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0);
      if ( item->fields.isParty )
      {
        gameObject = (__int64)this->fields.partyIcon;
        if ( !gameObject )
          goto LABEL_1136;
        FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
      }
      v34 = !item->fields.isLock;
      if ( !item->fields.isSwapLock )
        v34 = item->fields.isLock;
      if ( v34 )
      {
        gameObject = (__int64)this->fields.lockImg;
        if ( !gameObject )
          goto LABEL_1136;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1136;
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
          goto LABEL_434;
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1136;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1136;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1136;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1136;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        if ( item->fields.isHeroineSvt )
        {
          if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          if ( TutorialFlag__Get_41176064(126, 0) )
          {
            v39 = *v270;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v40 = &StringLiteral_11568/*"SELECT_CANNOT"*/;
LABEL_392:
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v40, 0);
            if ( !v39 )
              goto LABEL_1136;
            v97 = (System_String_o *)gameObject;
            gameObject = (__int64)v39;
LABEL_394:
            UILabel__set_text((UILabel_o *)gameObject, v97, 0);
            gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
            if ( !gameObject )
              goto LABEL_1136;
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              *p_statusTxtLb,
              0);
            goto LABEL_434;
          }
        }
        if ( item->fields.isLvMax )
        {
          if ( !item->fields.isStatusUpSvt )
          {
            if ( !item->fields.isExpUpSvt )
            {
              v39 = *v270;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_9301/*"NONSELECT_BASE_ALLMAX"*/;
              goto LABEL_392;
            }
            goto LABEL_388;
          }
        }
        else if ( !item->fields.isStatusUpSvt )
        {
LABEL_388:
          if ( !item->fields.isExpUpSvt )
          {
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1136;
            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
            gameObject = (__int64)*v270;
            if ( !*v270 )
              goto LABEL_1136;
            v97 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_394;
          }
        }
        v39 = *v270;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_9303/*"NONSELECT_MATERIAL"*/;
        goto LABEL_392;
      }
      if ( !v38 )
        goto LABEL_434;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1136;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1136;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1136;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)*v270;
      if ( !*v270 )
        goto LABEL_1136;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( item->fields.isCombineExpCampaignTarget )
      {
        if ( !item->fields.isDispAtkStatusUpInfo )
          goto LABEL_283;
        gameObject = (__int64)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_1136;
        if ( !UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)gameObject, 0) )
          goto LABEL_283;
        gameObject = (__int64)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_1136;
        if ( !UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)gameObject, 0) )
        {
          v98 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v98,
            (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v99 = LocalizationManager__Get((System_String_o *)StringLiteral_8817/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
          *(float *)&tdMaxLv.methodPointer = item->fields.combineExpCampaignValue;
          v100 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
          gameObject = (__int64)System_String__Format(v99, v100, 0);
          if ( !v98 )
            goto LABEL_1136;
          items = v98->fields._items;
          v102 = Method_System_Collections_Generic_List_string__Add__;
          ++v98->fields._version;
          if ( !items )
            goto LABEL_1136;
          size = v98->fields._size;
          v104 = gameObject;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v98,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
          }
          else
          {
            v105 = &items->obj.klass + size;
            v98->fields._size = size + 1;
            v105[4] = (Il2CppClass *)v104;
            sub_1C9403C(v105 + 4, v104);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3575/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0);
          v113 = v98->fields._items;
          v114 = Method_System_Collections_Generic_List_string__Add__;
          ++v98->fields._version;
          if ( !v113 )
            goto LABEL_1136;
        }
        else
        {
LABEL_283:
          if ( !item->fields.isDispHpStatusUpInfo )
            goto LABEL_284;
          gameObject = (__int64)item->fields.userSvtEntity;
          if ( !gameObject )
            goto LABEL_1136;
          if ( !UserServantEntity__isAdjustHpMax((UserServantEntity_o *)gameObject, 0) )
            goto LABEL_284;
          gameObject = (__int64)item->fields.userSvtEntity;
          if ( !gameObject )
            goto LABEL_1136;
          if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)gameObject, 0) )
          {
LABEL_284:
            gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
            if ( !gameObject )
              goto LABEL_1136;
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              *p_statusTxtLb,
              0);
            v77 = *p_statusTxtLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v78 = LocalizationManager__Get((System_String_o *)StringLiteral_8817/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
            *(float *)&tdMaxLv.methodPointer = item->fields.combineExpCampaignValue;
            v79 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
            gameObject = (__int64)System_String__Format(v78, v79, 0);
            if ( !v77 )
              goto LABEL_1136;
LABEL_288:
            UILabel__set_text(v77, (System_String_o *)gameObject, 0);
LABEL_431:
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1136;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_1136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            goto LABEL_434;
          }
          v98 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v98,
            (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v106 = LocalizationManager__Get((System_String_o *)StringLiteral_8817/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
          *(float *)&tdMaxLv.methodPointer = item->fields.combineExpCampaignValue;
          v107 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
          gameObject = (__int64)System_String__Format(v106, v107, 0);
          if ( !v98 )
            goto LABEL_1136;
          v108 = v98->fields._items;
          v109 = Method_System_Collections_Generic_List_string__Add__;
          ++v98->fields._version;
          if ( !v108 )
            goto LABEL_1136;
          v110 = v98->fields._size;
          v111 = gameObject;
          if ( (unsigned int)v110 >= LODWORD(v108->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v98,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
          }
          else
          {
            v112 = &v108->obj.klass + v110;
            v98->fields._size = v110 + 1;
            v112[4] = (Il2CppClass *)v111;
            sub_1C9403C(v112 + 4, v111);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3575/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0);
          v113 = v98->fields._items;
          v114 = Method_System_Collections_Generic_List_string__Add__;
          ++v98->fields._version;
          if ( !v113 )
            goto LABEL_1136;
        }
        v115 = v98->fields._size;
        v116 = gameObject;
        if ( (unsigned int)v115 >= LODWORD(v113->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v98,
            (Il2CppObject *)gameObject,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
        }
        else
        {
          v117 = &v113->obj.klass + v115;
          v98->fields._size = v115 + 1;
          v117[4] = (Il2CppClass *)v116;
          sub_1C9403C(v117 + 4, v116);
        }
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1136;
        CombineServantListViewNoticeTween__AddTarget(
          (CombineServantListViewNoticeTween_o *)gameObject,
          *p_statusTxtLb,
          (System_Collections_Generic_List_string__o *)v98,
          0);
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1136;
        CombineServantListViewNoticeTween__SetTexts((CombineServantListViewNoticeTween_o *)gameObject, 0, 0);
        goto LABEL_431;
      }
      gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
      if ( !gameObject )
        goto LABEL_1136;
      CombineServantListViewNoticeTween__RemoveTarget(
        (CombineServantListViewNoticeTween_o *)gameObject,
        *p_statusTxtLb,
        0);
      if ( item->fields.isDispAtkStatusUpInfo )
      {
        gameObject = (__int64)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_1136;
        if ( !UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)gameObject, 0) )
          goto LABEL_434;
        gameObject = (__int64)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_1136;
        if ( UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)gameObject, 0) )
          goto LABEL_434;
      }
      else
      {
        if ( !item->fields.isDispHpStatusUpInfo )
          goto LABEL_434;
        gameObject = (__int64)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_1136;
        if ( !UserServantEntity__isAdjustHpMax((UserServantEntity_o *)gameObject, 0) )
          goto LABEL_434;
        gameObject = (__int64)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_1136;
        if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)gameObject, 0) )
        {
LABEL_434:
          if ( item->fields.isBaseSvt )
          {
            gameObject = (__int64)this->fields.removeImg;
            if ( !gameObject )
              goto LABEL_1136;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_1136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          }
          break;
        }
      }
      v77 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3575/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0);
      if ( !v77 )
        goto LABEL_1136;
      goto LABEL_288;
  }
  v90 = item->fields.type;
LABEL_439:
  if ( v90 == 9 )
  {
    gameObject = (__int64)this->fields.limitCountIcon;
    if ( !gameObject )
      goto LABEL_1136;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)gameObject,
      item->fields.currentLimitCnt,
      item->fields.maxLimitCnt,
      0);
    if ( item->fields.isParty )
    {
      gameObject = (__int64)this->fields.partyIcon;
      if ( !gameObject )
        goto LABEL_1136;
      FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
    }
    v123 = !item->fields.isLock;
    if ( !item->fields.isSwapLock )
      v123 = item->fields.isLock;
    if ( v123 )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_1136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1136;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    }
    v124 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList);
    v125 = (UnityEngine_Object_o *)this->fields.baseButton;
    v126 = v124;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v127 = UnityEngine_Object__op_Inequality(v125, 0, 0);
    if ( !v126 )
    {
      if ( !v127 )
        goto LABEL_532;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1136;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1136;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1136;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)*v270;
      if ( !*v270 )
        goto LABEL_1136;
      v131 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_531;
    }
    if ( !v127 )
      goto LABEL_532;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( item->fields.isHeroineSvt || item->fields.isEventJoin || item->fields.isIgnoreCombineLimitSpecial )
    {
      v128 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v129 = &StringLiteral_9303/*"NONSELECT_MATERIAL"*/;
    }
    else if ( item->fields.isLimitCntMax )
    {
      v128 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v129 = &StringLiteral_9302/*"NONSELECT_LIMITUP_BASE"*/;
    }
    else
    {
      if ( !item->fields.isSealCombineLimit )
        goto LABEL_532;
      v128 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v129 = &StringLiteral_11562/*"SEAL_COMBINE_LIMIT_THIRD"*/;
    }
LABEL_529:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v129, 0);
    if ( !v128 )
      goto LABEL_1136;
    v131 = (System_String_o *)gameObject;
    gameObject = (__int64)v128;
LABEL_531:
    UILabel__set_text((UILabel_o *)gameObject, v131, 0);
    goto LABEL_532;
  }
  if ( v90 != 2 )
    goto LABEL_536;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1136;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1136;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  v118 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v118 = item->fields.isLock;
  if ( v118 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList) )
  {
    v119 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v119, 0, 0) )
      goto LABEL_518;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    isHeroineSvt = item->fields.isHeroineSvt;
    sealedStateLabel = *v270;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isHeroineSvt )
      v122 = &StringLiteral_9303/*"NONSELECT_MATERIAL"*/;
    else
      v122 = &StringLiteral_9302/*"NONSELECT_LIMITUP_BASE"*/;
LABEL_516:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v122, 0);
    if ( !sealedStateLabel )
      goto LABEL_1136;
    UILabel__set_text(sealedStateLabel, (System_String_o *)gameObject, 0);
    goto LABEL_518;
  }
  if ( item->fields.isSealedLimitCount && item->fields.isLimitCntMax )
  {
    v130 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v130, 0, 0) )
      goto LABEL_518;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)this->fields.sealedStateLabel;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    sealedStateLabel = this->fields.sealedStateLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v122 = &StringLiteral_3292/*"CAN_SELECT_SEALED_SERVANT_BASE"*/;
    goto LABEL_516;
  }
  if ( item->fields.isLvMax && item->fields.isLimitUpItemNum && !item->fields.isSealCombineLimit )
  {
    if ( !item->fields.isLimitCntMax )
    {
      v263 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v263, 0, 0) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1136;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1136;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1136;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1136;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        gameObject = (__int64)*v270;
        if ( !*v270 )
          goto LABEL_1136;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
        gameObject = (__int64)*p_statusTxtLb;
        if ( !*p_statusTxtLb )
          goto LABEL_1136;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1136;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v128 = *p_statusTxtLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v129 = &StringLiteral_8813/*"MSG_ABLED_LIMITUP"*/;
        goto LABEL_529;
      }
    }
  }
  else
  {
    v132 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v132, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1136;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1136;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
  }
LABEL_518:
  if ( item->fields.isSealedLimitCount )
  {
    v133 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v133, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1136;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1136;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)this->fields.sealedStateLabel;
      if ( !gameObject )
        goto LABEL_1136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1136;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v128 = this->fields.sealedStateLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v129 = &StringLiteral_3292/*"CAN_SELECT_SEALED_SERVANT_BASE"*/;
      goto LABEL_529;
    }
  }
LABEL_532:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_536:
  v134 = item->fields.type;
  v267 = this;
  v268 = item;
  v265 = modeKind;
  v266 = &this->fields.statusTxtLb;
  if ( v134 != 3 )
    goto LABEL_614;
  CombineServantListViewItem__GetSkillInfo(item, &skillInfoList, v29);
  enableSkillUp = item->fields.enableSkillUp;
  v136 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v136, 0);
  v137 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_1136;
  max_length = skillInfoList->max_length;
  if ( (int)max_length >= 1 )
  {
    v139 = 0;
    v140 = (unsigned int)(max_length - 1);
    v141 = (unsigned int)skillInfoList->max_length;
    while ( 1 )
    {
      if ( v139 >= LODWORD(v137->max_length) )
        goto LABEL_1137;
      v142 = v137->m_Items[v139];
      if ( v142 )
      {
        lv = v142->fields.lv;
        p_lv = &v142->fields.lv;
        v145 = *(p_lv - 1);
        if ( lv > 0 )
        {
          gameObject = (__int64)System_Int32__ToString((int32_t)p_lv, 0);
          goto LABEL_548;
        }
      }
      else
      {
        v145 = -1;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9309/*"NONSKILL_TXT"*/, 0);
LABEL_548:
      v146 = (Il2CppObject *)gameObject;
      if ( enableSkillUp )
      {
        v147 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v145,
                 (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v140 == v139 )
        {
          v148 = &StringLiteral_12280/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v147 )
            v148 = &StringLiteral_12282/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v148 = &StringLiteral_12281/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v147 )
            v148 = &StringLiteral_12283/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v148, 0);
        if ( v136 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v136, (System_String_o *)gameObject, v146, 0);
          if ( v141 == ++v139 )
            goto LABEL_562;
          v137 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_1136;
    }
  }
  if ( !v136 )
    goto LABEL_1136;
LABEL_562:
  skillLvLabel = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v136->klass->vtable._3_ToString.methodPtr)(
                 v136,
                 v136->klass->vtable._3_ToString.method);
  if ( !skillLvLabel )
    goto LABEL_1136;
  UILabel__set_text(skillLvLabel, (System_String_o *)gameObject, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1136;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1136;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  modeKind = v265;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1136;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  v150 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v150 = item->fields.isLock;
  if ( v150 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList) )
  {
    v151 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v151, 0, 0) )
      goto LABEL_609;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v152 = *v270;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9307/*"NONSELECT_SKILLUP_BASE"*/, 0);
    if ( !v152 )
      goto LABEL_1136;
    UILabel__set_text(v152, (System_String_o *)gameObject, 0);
    if ( !item->fields.isHeroineSvt )
      goto LABEL_609;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_41176064(126, 0) )
      goto LABEL_609;
    v153 = *v270;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v154 = &StringLiteral_11568/*"SELECT_CANNOT"*/;
    goto LABEL_603;
  }
  isSkillUpItemNum = item->fields.isSkillUpItemNum;
  v156 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v157 = UnityEngine_Object__op_Inequality(v156, 0, 0);
  if ( !isSkillUpItemNum )
  {
    if ( v157 )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1136;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1136;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_609;
  }
  if ( v157 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*v266;
    if ( !*v266 )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v153 = *v266;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v154 = &StringLiteral_8814/*"MSG_ABLED_SKILLUP"*/;
LABEL_603:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v154, 0);
    if ( !v153 )
      goto LABEL_1136;
    UILabel__set_text(v153, (System_String_o *)gameObject, 0);
  }
LABEL_609:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v134 = item->fields.type;
LABEL_614:
  if ( v134 != 11 )
    goto LABEL_711;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(item, switchInfoList);
  enableAppendSkillUp = item->fields.enableAppendSkillUp;
  v160 = AppendSkillData;
  v161 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v161, 0);
  if ( !v160 )
    goto LABEL_1136;
  svtUseSkillIdList = v160->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_1136;
  v163 = svtUseSkillIdList->max_length;
  if ( (int)v163 >= 1 )
  {
    v164 = 0;
    v165 = (unsigned int)(v163 - 1);
    v166 = (unsigned int)svtUseSkillIdList->max_length;
    while ( v164 < LODWORD(svtUseSkillIdList->max_length) )
    {
      svtSkillLvList = v160->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_1136;
      if ( v164 >= LODWORD(svtSkillLvList->max_length) )
        break;
      v168 = (__int64)svtSkillLvList + 4 * v164;
      v169 = svtUseSkillIdList->m_Items[v164];
      v171 = *(_DWORD *)(v168 + 32);
      v170 = v168 + 32;
      if ( v171 <= 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9309/*"NONSKILL_TXT"*/, 0);
      }
      else
      {
        gameObject = (__int64)System_Int32__ToString(v170, 0);
      }
      v172 = (Il2CppObject *)gameObject;
      if ( enableAppendSkillUp )
      {
        v173 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v169,
                 (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v164 == v165 )
        {
          v174 = &StringLiteral_12280/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v173 )
            v174 = &StringLiteral_12282/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v174 = &StringLiteral_12281/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v173 )
            v174 = &StringLiteral_12283/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v174, 0);
        if ( v161 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v161, (System_String_o *)gameObject, v172, 0);
          if ( ++v164 == v166 )
            goto LABEL_641;
          svtUseSkillIdList = v160->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_1136;
    }
LABEL_1137:
    sub_1C942F8(gameObject);
  }
  if ( !v161 )
    goto LABEL_1136;
LABEL_641:
  v175 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v161->klass->vtable._3_ToString.methodPtr)(
                 v161,
                 v161->klass->vtable._3_ToString.method);
  if ( !v175 )
    goto LABEL_1136;
  UILabel__set_text(v175, (System_String_o *)gameObject, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1136;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1136;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  modeKind = v265;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1136;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  v176 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v176 = item->fields.isLock;
  if ( v176 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  gameObject = CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v177 = *v270;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9307/*"NONSELECT_SKILLUP_BASE"*/, 0);
    if ( !v177 )
      goto LABEL_1136;
    UILabel__set_text(v177, (System_String_o *)gameObject, 0);
    if ( item->fields.isEventJoin )
    {
      v178 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10323/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v178 )
        goto LABEL_1136;
      UILabel__set_text(v178, (System_String_o *)gameObject, 0);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_681;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_41176064(126, 0) )
      goto LABEL_681;
    v179 = *v270;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v180 = &StringLiteral_11568/*"SELECT_CANNOT"*/;
    goto LABEL_679;
  }
  if ( !enableAppendSkillUp )
    goto LABEL_1136;
  if ( enableAppendSkillUp->fields._size > 0 || item->fields.isAppendSkillOpenItemNum )
  {
    gameObject = (__int64)*v266;
    if ( !*v266 )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v179 = *v266;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v180 = &StringLiteral_8814/*"MSG_ABLED_SKILLUP"*/;
LABEL_679:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v180, 0);
    if ( !v179 )
      goto LABEL_1136;
    UILabel__set_text(v179, (System_String_o *)gameObject, 0);
  }
LABEL_681:
  v181 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v181, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
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
          goto LABEL_1136;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)gameObject, (UIWidget_array *)switchInfoList, 0, 0);
        gameObject = (__int64)this->fields.coinInfo;
        if ( !gameObject )
          goto LABEL_1136;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        coinNumLabel = this->fields.coinNumLabel;
        gameObject = CombineServantListViewItem__get_SkillOpenItemNum(item, v185);
        if ( (gameObject & 0x80000000) != 0 )
        {
          switchInfoList = (MethodInfo *)StringLiteral_1/*""*/;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(item, v186);
          v187 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum);
          gameObject = (__int64)System_String__Format((System_String_o *)StringLiteral_25304/*"{0:#,0}"*/, v187, 0);
          switchInfoList = (MethodInfo *)gameObject;
        }
        if ( !coinNumLabel )
          goto LABEL_1136;
        UILabel__set_text(coinNumLabel, (System_String_o *)switchInfoList, 0);
        gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, v188);
        coinIcon = this->fields.coinIcon;
        if ( (int)gameObject < 1 )
        {
          if ( !coinIcon )
            goto LABEL_1136;
          gameObject = (__int64)coinIcon->fields.iconSprite;
          if ( !gameObject )
            goto LABEL_1136;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        else
        {
          gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, switchInfoList);
          if ( !coinIcon )
            goto LABEL_1136;
          ItemIconComponent__SetItem(coinIcon, gameObject, -1, 1, 0);
        }
      }
    }
  }
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_711:
  v190 = item->fields.type;
  if ( v190 != 12 )
    goto LABEL_827;
  v191 = CombineServantListViewItem__GetAppendSkillData(item, switchInfoList);
  v192 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v192, 0);
  if ( !v191 )
    goto LABEL_1136;
  v193 = v191->fields.svtUseSkillIdList;
  if ( !v193 )
    goto LABEL_1136;
  v194 = v193->max_length;
  if ( (int)v194 < 1 )
  {
    v197 = 0;
    v209 = 0;
    if ( !v192 )
      goto LABEL_1136;
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
        goto LABEL_1137;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9309/*"NONSKILL_TXT"*/, 0);
      v199 = v191->fields.svtSkillLvList;
      if ( !v199 )
        goto LABEL_1136;
      if ( v198 >= LODWORD(v199->max_length) )
        goto LABEL_1137;
      v200 = (char *)v199 + 4 * v198;
      v201 = *((_DWORD *)v200 + 8);
      gameObject = (__int64)(v200 + 32);
      if ( v201 >= 1 )
      {
        gameObject = (__int64)System_Int32__ToString(gameObject, 0);
        v199 = v191->fields.svtSkillLvList;
        if ( !v199 )
          goto LABEL_1136;
        v196 = 1;
      }
      if ( v198 >= LODWORD(v199->max_length) )
        goto LABEL_1137;
      v202 = v199->m_Items[0];
      v203 = v199->m_Items[v198++];
      v197 |= v203 < 10;
      v195 |= v202 != v203;
      if ( v198 == (unsigned int)v194 )
        break;
      v193 = v191->fields.svtUseSkillIdList;
      if ( !v193 )
        goto LABEL_1136;
    }
    v264 = v196;
    v204 = 0;
    v205 = 32;
    do
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9309/*"NONSKILL_TXT"*/, 0);
      v206 = v191->fields.svtSkillLvList;
      if ( !v206 )
        goto LABEL_1136;
      if ( v204 >= LODWORD(v206->max_length) )
        goto LABEL_1137;
      v207 = (Il2CppObject *)gameObject;
      if ( *(int *)((char *)&v206->obj.klass + v205) >= 1 )
        v207 = (Il2CppObject *)System_Int32__ToString((int)v206 + (int)v205, 0);
      if ( (_DWORD)v194 - 1 == v204 )
      {
        if ( (v195 & 1) == 0 )
          goto LABEL_741;
        if ( !v268->fields.isHeroineSvt )
          goto LABEL_750;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_41176064(126, 0) )
        {
LABEL_741:
          v208 = &StringLiteral_12282/*"SKILL_LVDISP_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v208 = &StringLiteral_12282/*"SKILL_LVDISP_SINGLE_TXT"*/;
          }
        }
        else
        {
LABEL_750:
          v208 = &StringLiteral_12280/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v208 = &StringLiteral_12280/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          }
        }
      }
      else
      {
        if ( (v195 & 1) == 0 )
          goto LABEL_748;
        if ( !v268->fields.isHeroineSvt )
          goto LABEL_752;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_41176064(126, 0) )
        {
LABEL_748:
          v208 = &StringLiteral_12283/*"SKILL_LVDISP_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v208 = &StringLiteral_12283/*"SKILL_LVDISP_TXT"*/;
          }
        }
        else
        {
LABEL_752:
          v208 = &StringLiteral_12281/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v208 = &StringLiteral_12281/*"SKILL_LVDISP_ENABLE_TXT"*/;
          }
        }
      }
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v208, 0);
      if ( !v192 )
        goto LABEL_1136;
      System_Text_StringBuilder__AppendFormat(v192, (System_String_o *)gameObject, v207, 0);
      ++v204;
      v205 += 4;
    }
    while ( (unsigned int)v194 != v204 );
    this = v267;
    item = v268;
    v209 = v264;
    modeKind = v265;
    p_statusTxtLb = v266;
  }
  v210 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v192->klass->vtable._3_ToString.methodPtr)(
                 v192,
                 v192->klass->vtable._3_ToString.method);
  if ( !v210 )
    goto LABEL_1136;
  UILabel__set_text(v210, (System_String_o *)gameObject, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1136;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1136;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1136;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  v211 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v211 = item->fields.isLock;
  if ( v211 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList) )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (__int64)*v270;
    if ( !*v270 )
      goto LABEL_1136;
    UILabel__set_text((UILabel_o *)gameObject, string_TypeInfo->static_fields->Empty, 0);
    if ( item->fields.isEventJoin )
    {
      v212 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10323/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v212 )
        goto LABEL_1136;
      UILabel__set_text(v212, (System_String_o *)gameObject, 0);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_1140;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_41176064(126, 0) )
    {
      v213 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v214 = &StringLiteral_11568/*"SELECT_CANNOT"*/;
    }
    else
    {
LABEL_1140:
      if ( item->fields.isEventJoin )
      {
        v213 = *v270;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v214 = &StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/;
      }
      else if ( (v209 & 1) != 0 )
      {
        if ( (v197 & 1) != 0 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4D2633A )
          {
            sub_1C94098(&NetworkManager_TypeInfo);
            byte_4D2633A = 1;
          }
          gameObject = (__int64)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            gameObject = (__int64)NetworkManager_TypeInfo;
          }
          if ( !Master_object )
            goto LABEL_1136;
          if ( !UserServantAppendPassiveSkillMaster__TryGetEntity(
                  (UserServantAppendPassiveSkillMaster_o *)Master_object,
                  &entity,
                  *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                  item->fields.svtId,
                  0)
            || !UserServantAppendPassiveSkillMaster__IsExchangeLimited(0) )
          {
            goto LABEL_816;
          }
          v213 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1985/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/, 0);
          if ( !entity )
            goto LABEL_1136;
          v216 = (System_String_o *)gameObject;
          SkillOpenItemNum = UserServantAppendPassiveSkillEntity__GetRemainingExchangeNum(entity, 0);
          v217 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum);
          gameObject = (__int64)System_String__Format(v216, v217, 0);
          if ( !v213 )
            goto LABEL_1136;
          goto LABEL_815;
        }
        v213 = *v270;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v214 = &StringLiteral_1984/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/;
      }
      else
      {
        v213 = *v270;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v214 = &StringLiteral_1983/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/;
      }
    }
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v214, 0);
    if ( !v213 )
      goto LABEL_1136;
LABEL_815:
    UILabel__set_text(v213, (System_String_o *)gameObject, 0);
  }
LABEL_816:
  v218 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v218, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
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
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v190 = item->fields.type;
LABEL_827:
  if ( v190 != 4 )
    goto LABEL_875;
  gameObject = (__int64)this->fields.npIconLabel;
  if ( !gameObject )
    goto LABEL_1136;
  v219 = SHIDWORD(tdMaxLv.invoker_method) <= 0 ? -1 : LODWORD(tdMaxLv.invoker_method);
  UIIconLabel__Set_41867060((UIIconLabel_o *)gameObject, 33, v219, SHIDWORD(tdMaxLv.methodPointer), 0, 0, 0, 0, 0, 0, 0);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1136;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1136;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  v220 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v220 = item->fields.isLock;
  if ( v220 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList) )
  {
    v221 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v221, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1136;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1136;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1136;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v222 = item->fields.isHeroineSvt;
      v223 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v224 = (System_String_o **)(v222 ? &StringLiteral_9303/*"NONSELECT_MATERIAL"*/ : &StringLiteral_9306/*"NONSELECT_NPUP_BASE"*/);
      gameObject = (__int64)LocalizationManager__Get(*v224, 0);
      if ( !v223 )
        goto LABEL_1136;
LABEL_870:
      UILabel__set_text(v223, (System_String_o *)gameObject, 0);
    }
  }
  else
  {
    if ( !item->fields.isSameSvt && !item->fields.isBaseSvt )
    {
      v236 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v236, 0, 0) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1136;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1136;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      }
      goto LABEL_871;
    }
    v225 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v225, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1136;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1136;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      if ( item->fields.isSameSvt )
      {
        gameObject = (__int64)*p_statusTxtLb;
        if ( !*p_statusTxtLb )
          goto LABEL_1136;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1136;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v223 = *p_statusTxtLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8816/*"MSG_ABLED_TDUP"*/, 0);
        if ( !v223 )
          goto LABEL_1136;
        goto LABEL_870;
      }
    }
  }
LABEL_871:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_875:
  v226 = item->fields.type;
  if ( v226 != 6 )
    goto LABEL_942;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1136;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1136;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  v227 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v227 = item->fields.isLock;
  if ( v227 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList) )
  {
    v228 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v228, 0, 0) )
      goto LABEL_937;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( item->fields.isHeroineSvt && !item->fields.isLvExceedMax )
    {
      v230 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v231 = &StringLiteral_9303/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      isEventJoin = item->fields.isEventJoin;
      v230 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v231 = isEventJoin ? &StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/ : &StringLiteral_9358/*"NO_SELECT_LVEXCEED"*/;
    }
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v231, 0);
    if ( !v230 )
      goto LABEL_1136;
    goto LABEL_936;
  }
  if ( !item->fields.isLvMax || !item->fields.isLimitCntMax )
  {
    v235 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v235, 0, 0) )
      goto LABEL_937;
    goto LABEL_920;
  }
  isLvExceedItemNum = item->fields.isLvExceedItemNum;
  v233 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v234 = UnityEngine_Object__op_Inequality(v233, 0, 0);
  if ( !isLvExceedItemNum )
  {
    if ( !v234 )
      goto LABEL_937;
LABEL_920:
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_937;
  }
  if ( v234 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)*v270;
    if ( !*v270 )
      goto LABEL_1136;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v230 = *p_statusTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8813/*"MSG_ABLED_LIMITUP"*/, 0);
    if ( !v230 )
      goto LABEL_1136;
LABEL_936:
    UILabel__set_text(v230, (System_String_o *)gameObject, 0);
  }
LABEL_937:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v226 = item->fields.type;
LABEL_942:
  if ( v226 != 10 && v226 != 7 )
    goto LABEL_1009;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1136;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.subIconLabel;
  if ( !gameObject )
    goto LABEL_1136;
  UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0);
  v238 = item->fields.type;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  gameObject = CombineServantListViewManager__GetSortKind(v238, v237);
  v239 = this->fields.servantFaceIcon;
  if ( !v239 )
    goto LABEL_1136;
  if ( (_DWORD)gameObject == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *__return_ptr, struct ServantFaceIconComponent_o *, __int64, const MethodInfo *))v239->klass->vtable._4_ParameterChange.methodPtr)(
      v239,
      this->fields.servantFaceIcon,
      1,
      v239->klass->vtable._4_ParameterChange.method);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_1136;
    ServantFaceIconComponent__ResetIconLabelPos((ServantFaceIconComponent_o *)gameObject, 0);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_1136;
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
      goto LABEL_1136;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  v240 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v240 = item->fields.isLock;
  if ( v240 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v241 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList);
  v242 = (UnityEngine_Object_o *)this->fields.baseButton;
  v243 = v241;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v244 = UnityEngine_Object__op_Inequality(v242, 0, 0);
  if ( v243 )
  {
    if ( !v244 )
      goto LABEL_998;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( item->fields.type == 10 && item->fields.isCommandCardExceedMax )
    {
      v245 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9300/*"NONSEELECT_STATUSUP_MAX"*/, 0);
      if ( !v245 )
        goto LABEL_1136;
      UILabel__set_text(v245, (System_String_o *)gameObject, 0);
    }
    if ( item->fields.isEventJoin )
    {
      v246 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v246 )
        goto LABEL_1136;
      UILabel__set_text(v246, (System_String_o *)gameObject, 0);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_998;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_41176064(126, 0) )
      goto LABEL_998;
    v247 = *v270;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11568/*"SELECT_CANNOT"*/, 0);
    if ( !v247 )
      goto LABEL_1136;
    v248 = (System_String_o *)gameObject;
    gameObject = (__int64)v247;
    goto LABEL_997;
  }
  if ( v244 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1136;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)*v270;
    if ( !*v270 )
      goto LABEL_1136;
    v248 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_997:
    UILabel__set_text((UILabel_o *)gameObject, v248, 0);
  }
LABEL_998:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v249 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v249, 0) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v250 = this->fields.svtCommandCardList;
    gameObject = CombineServantListViewItem__get_UserSvtId(item, v251);
    if ( !v250 )
      goto LABEL_1136;
    ServantCommandCardListComponent__Set(v250, gameObject, 1, 1, 0);
  }
LABEL_1009:
  if ( item->fields.type != 8 )
    goto LABEL_1066;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1136;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  v252 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v252 = item->fields.isLock;
  if ( v252 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList) )
  {
    if ( item->fields.isFriendshipRankMax )
    {
      isFriendshipExceedItemNum = item->fields.isFriendshipExceedItemNum;
      v258 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v259 = UnityEngine_Object__op_Inequality(v258, 0, 0);
      if ( isFriendshipExceedItemNum )
      {
        if ( !v259 )
          goto LABEL_1062;
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
                gameObject = (__int64)*v270;
                if ( *v270 )
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
                      v255 = *p_statusTxtLb;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8812/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, 0);
                      if ( v255 )
                        goto LABEL_1061;
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_1136;
      }
    }
    else
    {
      v260 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v259 = UnityEngine_Object__op_Inequality(v260, 0, 0);
    }
    if ( v259 )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1136;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1136;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_1062;
  }
  v253 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v253, 0, 0) )
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
            if ( item->fields.isHeroineSvt && !item->fields.isFriendshipExceedMax )
            {
              v255 = *v270;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v256 = &StringLiteral_9303/*"NONSELECT_MATERIAL"*/;
            }
            else
            {
              v254 = item->fields.isEventJoin;
              v255 = *v270;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v256 = v254 ? &StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/ : &StringLiteral_9357/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
            }
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v256, 0);
            if ( v255 )
            {
LABEL_1061:
              UILabel__set_text(v255, (System_String_o *)gameObject, 0);
              goto LABEL_1062;
            }
          }
        }
      }
    }
LABEL_1136:
    sub_1C942F0(gameObject, switchInfoList);
  }
LABEL_1062:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_1066:
  if ( (unsigned int)(modeKind - 1) <= 1 )
  {
    if ( item->fields.isHeroineSvt )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__Get_41176064(126, 0) )
        return;
    }
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isCanNotLock, 0);
    if ( item->fields.isCanNotLock )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      switchInfoList = (MethodInfo *)LocalizationManager__Get((System_String_o *)StringLiteral_8336/*"LOCKMODE_SELECTED_SERVANT"*/, 0);
    }
    else
    {
      switchInfoList = (MethodInfo *)StringLiteral_1/*""*/;
    }
    gameObject = (__int64)*v270;
    if ( !*v270 )
      goto LABEL_1136;
    goto LABEL_1103;
  }
  if ( modeKind != 3 )
    return;
  if ( item->fields.isEventJoin )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v261 = *v270;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v262 = &StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/;
  }
  else
  {
    if ( !item->fields.isCanNotLock )
    {
      gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, switchInfoList);
      if ( !gameObject )
        goto LABEL_1136;
      if ( !UserServantEntity__IsLeave((UserServantEntity_o *)gameObject, 0) )
      {
        gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, switchInfoList);
        if ( !gameObject )
          goto LABEL_1136;
        if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)gameObject, 0) )
        {
          gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, switchInfoList);
          if ( !gameObject )
            goto LABEL_1136;
          if ( !UserServantEntity__IsStatusUp((UserServantEntity_o *)gameObject, 0) )
          {
            gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, switchInfoList);
            if ( !gameObject )
              goto LABEL_1136;
            if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)gameObject, 0) )
            {
              gameObject = (__int64)*p_maskSprite;
              if ( !*p_maskSprite )
                goto LABEL_1136;
              gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1136;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
              gameObject = (__int64)*v270;
              if ( !*v270 )
                goto LABEL_1136;
              switchInfoList = (MethodInfo *)StringLiteral_1/*""*/;
              goto LABEL_1103;
            }
          }
        }
      }
    }
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v261 = *v270;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v262 = &StringLiteral_8336/*"LOCKMODE_SELECTED_SERVANT"*/;
  }
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v262, 0);
  if ( !v261 )
    goto LABEL_1136;
  switchInfoList = (MethodInfo *)gameObject;
  gameObject = (__int64)v261;
LABEL_1103:
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)switchInfoList, 0);
  gameObject = (__int64)*p_statusTxtLb;
  if ( !*p_statusTxtLb )
    goto LABEL_1136;
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

  if ( (byte_4D2668B & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2668B = 1;
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
    sub_1C942F0(v7, v6);
  }
}