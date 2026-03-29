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
  sub_1C93A78(&this->fields.defaultMaskAtlas, mAtlas);
  v5 = this->fields.maskSprite;
  if ( v5 )
    mSpriteName = v5->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_1C93A78(&this->fields.defaultMaskName, mSpriteName);
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
  if ( (byte_4D2A7DD & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_9341/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_1C93AD4(&StringLiteral_9336/*"NONSELECT_MATERIAL"*/);
    sub_1C93AD4(&StringLiteral_9339/*"NONSELECT_NPUP_BASE"*/);
    sub_1C93AD4(&StringLiteral_9337/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    byte_4D2A7DD = 1;
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
          servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9341/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
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
          servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9341/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
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
      v27 = &StringLiteral_9341/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_79:
      servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)*v27, 0);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)servantEntity, 0);
        goto LABEL_81;
      }
LABEL_93:
      sub_1C93D2C(servantEntity, v8);
    }
    maskLabel = this->fields.maskLabel;
    v20 = LocalizationManager_TypeInfo;
    v22 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_76:
    if ( !v22 )
      j_il2cpp_runtime_class_init_0(v20);
    v27 = &StringLiteral_9336/*"NONSELECT_MATERIAL"*/;
    goto LABEL_79;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, v8) )
  {
    v19 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9337/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0);
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
      v27 = &StringLiteral_9339/*"NONSELECT_NPUP_BASE"*/;
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
  System_String_o *v95; // x1
  System_Collections_Generic_List_object__o *v96; // x22
  System_String_o *v97; // x23
  Il2CppObject *v98; // x0
  struct System_Object_array *items; // x8
  _QWORD *v100; // x9
  __int64 size; // x10
  __int64 v102; // x1
  Il2CppClass **v103; // x0
  System_String_o *v104; // x23
  Il2CppObject *v105; // x0
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  __int64 v109; // x1
  Il2CppClass **v110; // x0
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  __int64 v114; // x1
  Il2CppClass **v115; // x0
  _BOOL4 v116; // w8
  UnityEngine_Object_o *v117; // x22
  _BOOL4 isHeroineSvt; // w19
  UILabel_o *sealedStateLabel; // x22
  __int64 *v120; // x8
  _BOOL4 v121; // w8
  bool v122; // w0
  UnityEngine_Object_o *v123; // x23
  bool v124; // w22
  bool v125; // w0
  UILabel_o *v126; // x22
  __int64 *v127; // x8
  UnityEngine_Object_o *v128; // x22
  System_String_o *v129; // x1
  UnityEngine_Object_o *v130; // x22
  UnityEngine_Object_o *v131; // x22
  int32_t v132; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  System_Text_StringBuilder_o *v134; // x22
  SkillInfo_array *v135; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned __int64 v137; // x19
  __int64 v138; // x20
  __int64 v139; // x21
  SkillInfo_o *v140; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v143; // w25
  Il2CppObject *v144; // x24
  bool v145; // w25
  __int64 *v146; // x8
  UILabel_o *skillLvLabel; // x23
  _BOOL4 v148; // w8
  UnityEngine_Object_o *v149; // x22
  UILabel_o *v150; // x22
  UILabel_o *v151; // x22
  __int64 *v152; // x8
  _BOOL4 isSkillUpItemNum; // w19
  UnityEngine_Object_o *v154; // x22
  bool v155; // w0
  SvtUseSkillData_o *AppendSkillData; // x0
  struct System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v158; // x24
  System_Text_StringBuilder_o *v159; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  il2cpp_array_size_t v161; // x9
  unsigned __int64 v162; // x19
  __int64 v163; // x20
  __int64 v164; // x21
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v166; // x0
  int32_t v167; // w26
  int32_t v168; // w0
  int v169; // t1
  Il2CppObject *v170; // x25
  bool v171; // w26
  __int64 *v172; // x8
  UILabel_o *v173; // x24
  _BOOL4 v174; // w8
  UILabel_o *v175; // x22
  UILabel_o *v176; // x22
  UILabel_o *v177; // x22
  __int64 *v178; // x8
  UnityEngine_Object_o *v179; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  const MethodInfo *v183; // x1
  const MethodInfo *v184; // x1
  Il2CppObject *v185; // x0
  const MethodInfo *v186; // x1
  struct ItemIconComponent_o *coinIcon; // x22
  int32_t v188; // w8
  SvtUseSkillData_o *v189; // x23
  System_Text_StringBuilder_o *v190; // x22
  struct System_Int32_array *v191; // x8
  il2cpp_array_size_t v192; // x19
  char v193; // w27
  char v194; // w26
  char v195; // w25
  unsigned __int64 v196; // x21
  struct System_Int32_array *v197; // x8
  char *v198; // x0
  int v199; // t1
  int32_t v200; // w9
  int v201; // w8
  unsigned __int64 v202; // x29
  __int64 v203; // x26
  struct System_Int32_array *v204; // x8
  Il2CppObject *v205; // x24
  __int64 *v206; // x8
  char v207; // w26
  UILabel_o *v208; // x23
  _BOOL4 v209; // w8
  UILabel_o *v210; // x22
  UILabel_o *v211; // x22
  __int64 *v212; // x8
  Il2CppObject *Master_object; // x22
  System_String_o *v214; // x23
  Il2CppObject *v215; // x0
  UnityEngine_Object_o *v216; // x22
  int32_t v217; // w2
  _BOOL4 v218; // w8
  UnityEngine_Object_o *v219; // x22
  _BOOL4 v220; // w19
  UILabel_o *v221; // x22
  System_String_o **v222; // x8
  UnityEngine_Object_o *v223; // x22
  int32_t v224; // w8
  _BOOL4 v225; // w8
  UnityEngine_Object_o *v226; // x22
  _BOOL4 isEventJoin; // w19
  UILabel_o *v228; // x22
  __int64 *v229; // x8
  _BOOL4 isLvExceedItemNum; // w19
  UnityEngine_Object_o *v231; // x22
  bool v232; // w0
  UnityEngine_Object_o *v233; // x22
  UnityEngine_Object_o *v234; // x22
  const MethodInfo *v235; // x1
  int32_t v236; // w22
  struct ServantFaceIconComponent_o *v237; // x8
  _BOOL4 v238; // w8
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
  const MethodInfo *v249; // x1
  _BOOL4 v250; // w8
  UnityEngine_Object_o *v251; // x22
  _BOOL4 v252; // w19
  UILabel_o *v253; // x22
  __int64 *v254; // x8
  _BOOL4 isFriendshipExceedItemNum; // w19
  UnityEngine_Object_o *v256; // x22
  bool v257; // w0
  UnityEngine_Object_o *v258; // x22
  struct UILabel_o *v259; // x19
  __int64 *v260; // x8
  UnityEngine_Object_o *v261; // x22
  char v262; // [xsp+20h] [xbp-D0h]
  int32_t v263; // [xsp+24h] [xbp-CCh]
  struct UILabel_o **v264; // [xsp+28h] [xbp-C8h]
  CombineServantListViewItemDraw_o *v265; // [xsp+30h] [xbp-C0h]
  CombineServantListViewItem_o *v266; // [xsp+38h] [xbp-B8h]
  struct UISprite_o **p_maskSprite; // [xsp+40h] [xbp-B0h]
  struct UILabel_o **v268; // [xsp+48h] [xbp-A8h]
  int32_t SkillOpenItemNum; // [xsp+54h] [xbp-9Ch] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+58h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+60h] [xbp-90h] BYREF
  MethodInfo v272; // [xsp+68h] [xbp-88h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v274; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v275; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2A7DC & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&CombineServantListViewManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&System_Text_StringBuilder_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    sub_1C93AD4(&StringLiteral_12323/*"SKILL_LVDISP_TXT"*/);
    sub_1C93AD4(&StringLiteral_10355/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/);
    sub_1C93AD4(&StringLiteral_9341/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_1C93AD4(&StringLiteral_6508/*"FORTIFICATION_APPOINTMENT"*/);
    sub_1C93AD4(&StringLiteral_3591/*"COMBINE_CAN_STATUS_UP_INFO"*/);
    sub_1C93AD4(&StringLiteral_8848/*"MSG_CAMPAIGN_COMBINE_EXP"*/);
    sub_1C93AD4(&StringLiteral_12321/*"SKILL_LVDISP_ENABLE_TXT"*/);
    sub_1C93AD4(&StringLiteral_1996/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/);
    sub_1C93AD4(&StringLiteral_9336/*"NONSELECT_MATERIAL"*/);
    sub_1C93AD4(&StringLiteral_23401/*"ribbon_noblephantasmup_01"*/);
    sub_1C93AD4(&StringLiteral_9335/*"NONSELECT_LIMITUP_BASE"*/);
    sub_1C93AD4(&StringLiteral_1997/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/);
    sub_1C93AD4(&StringLiteral_10156/*"PARTY_MEMBER_TXT"*/);
    sub_1C93AD4(&StringLiteral_3307/*"CAN_SELECT_SEALED_SERVANT_BASE"*/);
    sub_1C93AD4(&StringLiteral_9339/*"NONSELECT_NPUP_BASE"*/);
    sub_1C93AD4(&StringLiteral_12607/*"SUPPORT_MEMBER"*/);
    sub_1C93AD4(&StringLiteral_8844/*"MSG_ABLED_LIMITUP"*/);
    sub_1C93AD4(&StringLiteral_11639/*"SELECT_PUSH"*/);
    sub_1C93AD4(&StringLiteral_11608/*"SELECT_CANNOT"*/);
    sub_1C93AD4(&StringLiteral_9401/*"NPUP_BASE"*/);
    sub_1C93AD4(&StringLiteral_1998/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/);
    sub_1C93AD4(&StringLiteral_12320/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/);
    sub_1C93AD4(&StringLiteral_11640/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C93AD4(&StringLiteral_9389/*"NO_SELECT_FRIENDSHIP_EXCEED"*/);
    sub_1C93AD4(&StringLiteral_11531/*"SAME_SERVANT"*/);
    sub_1C93AD4(&StringLiteral_8843/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/);
    sub_1C93AD4(&StringLiteral_9337/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    sub_1C93AD4(&StringLiteral_25376/*"{0:#,0}"*/);
    sub_1C93AD4(&StringLiteral_12322/*"SKILL_LVDISP_SINGLE_TXT"*/);
    sub_1C93AD4(&StringLiteral_8845/*"MSG_ABLED_SKILLUP"*/);
    sub_1C93AD4(&StringLiteral_9338/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/);
    sub_1C93AD4(&StringLiteral_9342/*"NONSKILL_TXT"*/);
    sub_1C93AD4(&StringLiteral_8365/*"LOCKMODE_SELECTED_SERVANT"*/);
    sub_1C93AD4(&StringLiteral_6428/*"FAVORITE_SERVANT"*/);
    sub_1C93AD4(&StringLiteral_3375/*"CHOICE_SERVANT"*/);
    sub_1C93AD4(&StringLiteral_11118/*"RECOMMEND_SUPPORT_MEMBER"*/);
    sub_1C93AD4(&StringLiteral_8847/*"MSG_ABLED_TDUP"*/);
    sub_1C93AD4(&StringLiteral_11602/*"SEAL_COMBINE_LIMIT_THIRD"*/);
    sub_1C93AD4(&StringLiteral_9334/*"NONSELECT_BASE_ALLMAX"*/);
    sub_1C93AD4(&StringLiteral_9390/*"NO_SELECT_LVEXCEED"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_9340/*"NONSELECT_SKILLUP_BASE"*/);
    sub_1C93AD4(&StringLiteral_11638/*"SELECT_PROTECTED_EVENT_SVT"*/);
    sub_1C93AD4(&StringLiteral_7038/*"GRAND_MEMBER"*/);
    sub_1C93AD4(&StringLiteral_8366/*"LOCK_SERVANT"*/);
    sub_1C93AD4(&StringLiteral_9333/*"NONSEELECT_STATUSUP_MAX"*/);
    byte_4D2A7DC = 1;
  }
  v272.invoker_method = 0;
  skillInfoList = 0;
  v272.methodPointer = 0;
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
    ServantFaceIconComponent__Set_41811860(
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
    ServantFaceIconComponent__Set_41811860(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0, 0);
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
  UIIconLabel__Set_41834012(
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
    (int32_t *)&v272.invoker_method + 1,
    (int32_t *)&v272.invoker_method,
    (int32_t *)&v272.methodPointer + 1,
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
  if ( !byte_4D2A13E )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
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
  if ( !byte_4D2A13E )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
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
      AtlasManager__SetEventSprite(v30, (System_String_o *)StringLiteral_23401/*"ribbon_noblephantasmup_01"*/, 0);
      v32 = item->fields.type;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      if ( CombineServantListViewManager__GetSortKind(v32, v31) == 1 )
      {
        gameObject = (__int64)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_1136;
        v274.fields.x = 0.65;
        v274.fields.y = 1.0;
        v274.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v274, 0);
      }
    }
  }
  v33 = item->fields.type;
  v268 = &this->fields.maskLabel;
  switch ( v33 )
  {
    case 5:
      gameObject = (__int64)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_1136;
      v41 = SHIDWORD(v272.invoker_method) <= 0 ? -1 : LODWORD(v272.invoker_method);
      UIIconLabel__Set_41834012((UIIconLabel_o *)gameObject, 33, v41, SHIDWORD(v272.methodPointer), 0, 0, 0, 0, 0, 0, 0);
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
        v83 = *v268;
        v84 = IsNotCombineResourceServant;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v85 = (System_String_o **)(v84 ? &StringLiteral_9336/*"NONSELECT_MATERIAL"*/ : &StringLiteral_11638/*"SELECT_PROTECTED_EVENT_SVT"*/);
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
          v45 = *v268;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10156/*"PARTY_MEMBER_TXT"*/, 0);
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
          v46 = *v268;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6428/*"FAVORITE_SERVANT"*/, 0);
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
          v48 = *v268;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8366/*"LOCK_SERVANT"*/, 0);
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
          v50 = *v268;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3375/*"CHOICE_SERVANT"*/, 0);
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
          v51 = *v268;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11531/*"SAME_SERVANT"*/, 0);
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
          v52 = *v268;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9336/*"NONSELECT_MATERIAL"*/, 0);
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
          v53 = *v268;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9336/*"NONSELECT_MATERIAL"*/, 0);
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
          v54 = *v268;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11640/*"SELECT_SERVANT_EVENT_JOIN"*/, 0);
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
          v55 = *v268;
          isParty = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v57 = &StringLiteral_12607/*"SUPPORT_MEMBER"*/;
          if ( isParty )
            v57 = &StringLiteral_10156/*"PARTY_MEMBER_TXT"*/;
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
          v58 = *v268;
          v59 = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v60 = &StringLiteral_11118/*"RECOMMEND_SUPPORT_MEMBER"*/;
          if ( v59 )
            v60 = &StringLiteral_10156/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v60, 0);
          if ( !v58 )
            goto LABEL_1136;
          UILabel__set_text(v58, (System_String_o *)gameObject, 0);
          if ( !item->fields.isParty )
          {
            gameObject = (__int64)*v268;
            if ( !*v268 )
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
          v61 = *v268;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11639/*"SELECT_PUSH"*/, 0);
          if ( !v61 )
            goto LABEL_1136;
          UILabel__set_text(v61, (System_String_o *)gameObject, 0);
          gameObject = (__int64)*v268;
          if ( !*v268 )
            goto LABEL_1136;
          v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !byte_4D2A13E )
          {
            sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
            byte_4D2A13E = 1;
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
          v63 = *v268;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7038/*"GRAND_MEMBER"*/, 0);
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
                v86 = *v268;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9337/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0);
                if ( !v86 )
                  goto LABEL_1136;
                UILabel__set_text(v86, (System_String_o *)gameObject, 0);
                if ( item->fields.type != 5 )
                  break;
                v72 = *v268;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v87 = (System_String_o *)StringLiteral_9339/*"NONSELECT_NPUP_BASE"*/;
                goto LABEL_351;
              }
              goto LABEL_353;
            }
          }
          else if ( !item->fields.isCanStUp )
          {
            if ( item->fields.isFortification )
            {
              gameObject = (__int64)*v268;
              if ( !*v268 )
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
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6508/*"FORTIFICATION_APPOINTMENT"*/, 0);
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
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1136;
              v275.fields.x = localPosition.fields.x;
              v275.fields.y = fortificationInfoRootObjOffsetY;
              v275.fields.z = localPosition.fields.z;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v275, 0);
              goto LABEL_353;
            }
            if ( (v44 & 1) == 0 )
            {
              v72 = *v268;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v73 = &StringLiteral_9336/*"NONSELECT_MATERIAL"*/;
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
              v91 = *v268;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9401/*"NPUP_BASE"*/, 0);
              if ( !v91 )
                goto LABEL_1136;
              UILabel__set_text(v91, (System_String_o *)gameObject, 0);
              gameObject = (__int64)*v268;
              if ( !*v268 )
                goto LABEL_1136;
              v92 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              if ( !byte_4D2A13E )
              {
                sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
                byte_4D2A13E = 1;
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
                v88 = *v268;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9341/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                if ( !v88 )
                  goto LABEL_1136;
                UILabel__set_text(v88, (System_String_o *)gameObject, 0);
              }
              if ( item->fields.isAtkSecondUpMax || item->fields.isHpSecondUpMax )
              {
                v89 = *v268;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9341/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                if ( !v89 )
                  goto LABEL_1136;
                UILabel__set_text(v89, (System_String_o *)gameObject, 0);
              }
              if ( !item->fields.isNotSelectStatusUpAtk && !item->fields.isNotSelectStatusUpHp )
                goto LABEL_353;
              v72 = *v268;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v73 = &StringLiteral_9341/*"NONSELECT_UNDER_STATUS_MAX"*/;
            }
            else
            {
              if ( item->fields.atkBase >= 1 )
              {
                if ( item->fields.isAtkSecondUpMax || item->fields.isNotSelectSecondStatusUpAtk )
                {
                  v69 = *v268;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9341/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                  if ( !v69 )
                    goto LABEL_1136;
                  UILabel__set_text(v69, (System_String_o *)gameObject, 0);
                }
                if ( !item->fields.isAtkUpMax )
                {
                  v70 = *v268;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9338/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0);
                  if ( !v70 )
                    goto LABEL_1136;
                  UILabel__set_text(v70, (System_String_o *)gameObject, 0);
                }
              }
              if ( item->fields.hpBase < 1 )
                goto LABEL_353;
              if ( item->fields.isHpSecondUpMax || item->fields.isNotSelectSecondStatusUpHp )
              {
                v71 = *v268;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9341/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                if ( !v71 )
                  goto LABEL_1136;
                UILabel__set_text(v71, (System_String_o *)gameObject, 0);
              }
              if ( item->fields.isHpUpMax )
                goto LABEL_353;
              v72 = *v268;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v73 = &StringLiteral_9338/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
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
            v80 = *v268;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9336/*"NONSELECT_MATERIAL"*/, 0);
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
          if ( TutorialFlag__Get_41140656(126, 0) )
          {
            v39 = *v268;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v40 = &StringLiteral_11608/*"SELECT_CANNOT"*/;
LABEL_392:
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v40, 0);
            if ( !v39 )
              goto LABEL_1136;
            v95 = (System_String_o *)gameObject;
            gameObject = (__int64)v39;
LABEL_394:
            UILabel__set_text((UILabel_o *)gameObject, v95, 0);
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
              v39 = *v268;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_9334/*"NONSELECT_BASE_ALLMAX"*/;
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
            gameObject = (__int64)*v268;
            if ( !*v268 )
              goto LABEL_1136;
            v95 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_394;
          }
        }
        v39 = *v268;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_9336/*"NONSELECT_MATERIAL"*/;
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
      gameObject = (__int64)*v268;
      if ( !*v268 )
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
          v96 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v96,
            (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v97 = LocalizationManager__Get((System_String_o *)StringLiteral_8848/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
          *(float *)&v272.methodPointer = item->fields.combineExpCampaignValue;
          v98 = (Il2CppObject *)System_Single__ToString(*(float *)&v272.methodPointer, &v272);
          gameObject = (__int64)System_String__Format(v97, v98, 0);
          if ( !v96 )
            goto LABEL_1136;
          items = v96->fields._items;
          v100 = Method_System_Collections_Generic_List_string__Add__;
          ++v96->fields._version;
          if ( !items )
            goto LABEL_1136;
          size = v96->fields._size;
          v102 = gameObject;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v96,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
          }
          else
          {
            v103 = &items->obj.klass + size;
            v96->fields._size = size + 1;
            v103[4] = (Il2CppClass *)v102;
            sub_1C93A78(v103 + 4, v102);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3591/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0);
          v111 = v96->fields._items;
          v112 = Method_System_Collections_Generic_List_string__Add__;
          ++v96->fields._version;
          if ( !v111 )
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
            v78 = LocalizationManager__Get((System_String_o *)StringLiteral_8848/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
            *(float *)&v272.methodPointer = item->fields.combineExpCampaignValue;
            v79 = (Il2CppObject *)System_Single__ToString(*(float *)&v272.methodPointer, &v272);
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
          v96 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v96,
            (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v104 = LocalizationManager__Get((System_String_o *)StringLiteral_8848/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
          *(float *)&v272.methodPointer = item->fields.combineExpCampaignValue;
          v105 = (Il2CppObject *)System_Single__ToString(*(float *)&v272.methodPointer, &v272);
          gameObject = (__int64)System_String__Format(v104, v105, 0);
          if ( !v96 )
            goto LABEL_1136;
          v106 = v96->fields._items;
          v107 = Method_System_Collections_Generic_List_string__Add__;
          ++v96->fields._version;
          if ( !v106 )
            goto LABEL_1136;
          v108 = v96->fields._size;
          v109 = gameObject;
          if ( (unsigned int)v108 >= LODWORD(v106->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v96,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
          }
          else
          {
            v110 = &v106->obj.klass + v108;
            v96->fields._size = v108 + 1;
            v110[4] = (Il2CppClass *)v109;
            sub_1C93A78(v110 + 4, v109);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3591/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0);
          v111 = v96->fields._items;
          v112 = Method_System_Collections_Generic_List_string__Add__;
          ++v96->fields._version;
          if ( !v111 )
            goto LABEL_1136;
        }
        v113 = v96->fields._size;
        v114 = gameObject;
        if ( (unsigned int)v113 >= LODWORD(v111->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v96,
            (Il2CppObject *)gameObject,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
        }
        else
        {
          v115 = &v111->obj.klass + v113;
          v96->fields._size = v113 + 1;
          v115[4] = (Il2CppClass *)v114;
          sub_1C93A78(v115 + 4, v114);
        }
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1136;
        CombineServantListViewNoticeTween__AddTarget(
          (CombineServantListViewNoticeTween_o *)gameObject,
          *p_statusTxtLb,
          (System_Collections_Generic_List_string__o *)v96,
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
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3591/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0);
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
    v121 = !item->fields.isLock;
    if ( !item->fields.isSwapLock )
      v121 = item->fields.isLock;
    if ( v121 )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_1136;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1136;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    }
    v122 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList);
    v123 = (UnityEngine_Object_o *)this->fields.baseButton;
    v124 = v122;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v125 = UnityEngine_Object__op_Inequality(v123, 0, 0);
    if ( !v124 )
    {
      if ( !v125 )
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
      gameObject = (__int64)*v268;
      if ( !*v268 )
        goto LABEL_1136;
      v129 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_531;
    }
    if ( !v125 )
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
      v126 = *v268;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v127 = &StringLiteral_9336/*"NONSELECT_MATERIAL"*/;
    }
    else if ( item->fields.isLimitCntMax )
    {
      v126 = *v268;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v127 = &StringLiteral_9335/*"NONSELECT_LIMITUP_BASE"*/;
    }
    else
    {
      if ( !item->fields.isSealCombineLimit )
        goto LABEL_532;
      v126 = *v268;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v127 = &StringLiteral_11602/*"SEAL_COMBINE_LIMIT_THIRD"*/;
    }
LABEL_529:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v127, 0);
    if ( !v126 )
      goto LABEL_1136;
    v129 = (System_String_o *)gameObject;
    gameObject = (__int64)v126;
LABEL_531:
    UILabel__set_text((UILabel_o *)gameObject, v129, 0);
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
  v116 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v116 = item->fields.isLock;
  if ( v116 )
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
    v117 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v117, 0, 0) )
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
    sealedStateLabel = *v268;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isHeroineSvt )
      v120 = &StringLiteral_9336/*"NONSELECT_MATERIAL"*/;
    else
      v120 = &StringLiteral_9335/*"NONSELECT_LIMITUP_BASE"*/;
LABEL_516:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v120, 0);
    if ( !sealedStateLabel )
      goto LABEL_1136;
    UILabel__set_text(sealedStateLabel, (System_String_o *)gameObject, 0);
    goto LABEL_518;
  }
  if ( item->fields.isSealedLimitCount && item->fields.isLimitCntMax )
  {
    v128 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v128, 0, 0) )
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
    v120 = &StringLiteral_3307/*"CAN_SELECT_SEALED_SERVANT_BASE"*/;
    goto LABEL_516;
  }
  if ( item->fields.isLvMax && item->fields.isLimitUpItemNum && !item->fields.isSealCombineLimit )
  {
    if ( !item->fields.isLimitCntMax )
    {
      v261 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v261, 0, 0) )
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
        gameObject = (__int64)*v268;
        if ( !*v268 )
          goto LABEL_1136;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
        gameObject = (__int64)*p_statusTxtLb;
        if ( !*p_statusTxtLb )
          goto LABEL_1136;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1136;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v126 = *p_statusTxtLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v127 = &StringLiteral_8844/*"MSG_ABLED_LIMITUP"*/;
        goto LABEL_529;
      }
    }
  }
  else
  {
    v130 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v130, 0, 0) )
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
    v131 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v131, 0, 0) )
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
      v126 = this->fields.sealedStateLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v127 = &StringLiteral_3307/*"CAN_SELECT_SEALED_SERVANT_BASE"*/;
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
  v132 = item->fields.type;
  v265 = this;
  v266 = item;
  v263 = modeKind;
  v264 = &this->fields.statusTxtLb;
  if ( v132 != 3 )
    goto LABEL_614;
  CombineServantListViewItem__GetSkillInfo(item, &skillInfoList, v29);
  enableSkillUp = item->fields.enableSkillUp;
  v134 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v134, 0);
  v135 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_1136;
  max_length = skillInfoList->max_length;
  if ( (int)max_length >= 1 )
  {
    v137 = 0;
    v138 = (unsigned int)(max_length - 1);
    v139 = (unsigned int)skillInfoList->max_length;
    while ( 1 )
    {
      if ( v137 >= LODWORD(v135->max_length) )
        goto LABEL_1137;
      v140 = v135->m_Items[v137];
      if ( v140 )
      {
        lv = v140->fields.lv;
        p_lv = &v140->fields.lv;
        v143 = *(p_lv - 1);
        if ( lv > 0 )
        {
          gameObject = (__int64)System_Int32__ToString((int32_t)p_lv, 0);
          goto LABEL_548;
        }
      }
      else
      {
        v143 = -1;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NONSKILL_TXT"*/, 0);
LABEL_548:
      v144 = (Il2CppObject *)gameObject;
      if ( enableSkillUp )
      {
        v145 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v143,
                 (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v138 == v137 )
        {
          v146 = &StringLiteral_12320/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v145 )
            v146 = &StringLiteral_12322/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v146 = &StringLiteral_12321/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v145 )
            v146 = &StringLiteral_12323/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v146, 0);
        if ( v134 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v134, (System_String_o *)gameObject, v144, 0);
          if ( v139 == ++v137 )
            goto LABEL_562;
          v135 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_1136;
    }
  }
  if ( !v134 )
    goto LABEL_1136;
LABEL_562:
  skillLvLabel = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v134->klass->vtable._3_ToString.methodPtr)(
                 v134,
                 v134->klass->vtable._3_ToString.method);
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
  modeKind = v263;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1136;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  v148 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v148 = item->fields.isLock;
  if ( v148 )
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
    v149 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v149, 0, 0) )
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
    v150 = *v268;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9340/*"NONSELECT_SKILLUP_BASE"*/, 0);
    if ( !v150 )
      goto LABEL_1136;
    UILabel__set_text(v150, (System_String_o *)gameObject, 0);
    if ( !item->fields.isHeroineSvt )
      goto LABEL_609;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_41140656(126, 0) )
      goto LABEL_609;
    v151 = *v268;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v152 = &StringLiteral_11608/*"SELECT_CANNOT"*/;
    goto LABEL_603;
  }
  isSkillUpItemNum = item->fields.isSkillUpItemNum;
  v154 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v155 = UnityEngine_Object__op_Inequality(v154, 0, 0);
  if ( !isSkillUpItemNum )
  {
    if ( v155 )
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
  if ( v155 )
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
    gameObject = (__int64)*v264;
    if ( !*v264 )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v151 = *v264;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v152 = &StringLiteral_8845/*"MSG_ABLED_SKILLUP"*/;
LABEL_603:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v152, 0);
    if ( !v151 )
      goto LABEL_1136;
    UILabel__set_text(v151, (System_String_o *)gameObject, 0);
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
  v132 = item->fields.type;
LABEL_614:
  if ( v132 != 11 )
    goto LABEL_711;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(item, switchInfoList);
  enableAppendSkillUp = item->fields.enableAppendSkillUp;
  v158 = AppendSkillData;
  v159 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v159, 0);
  if ( !v158 )
    goto LABEL_1136;
  svtUseSkillIdList = v158->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_1136;
  v161 = svtUseSkillIdList->max_length;
  if ( (int)v161 >= 1 )
  {
    v162 = 0;
    v163 = (unsigned int)(v161 - 1);
    v164 = (unsigned int)svtUseSkillIdList->max_length;
    while ( v162 < LODWORD(svtUseSkillIdList->max_length) )
    {
      svtSkillLvList = v158->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_1136;
      if ( v162 >= LODWORD(svtSkillLvList->max_length) )
        break;
      v166 = (__int64)svtSkillLvList + 4 * v162;
      v167 = svtUseSkillIdList->m_Items[v162];
      v169 = *(_DWORD *)(v166 + 32);
      v168 = v166 + 32;
      if ( v169 <= 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NONSKILL_TXT"*/, 0);
      }
      else
      {
        gameObject = (__int64)System_Int32__ToString(v168, 0);
      }
      v170 = (Il2CppObject *)gameObject;
      if ( enableAppendSkillUp )
      {
        v171 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v167,
                 (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v162 == v163 )
        {
          v172 = &StringLiteral_12320/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v171 )
            v172 = &StringLiteral_12322/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v172 = &StringLiteral_12321/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v171 )
            v172 = &StringLiteral_12323/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v172, 0);
        if ( v159 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v159, (System_String_o *)gameObject, v170, 0);
          if ( ++v162 == v164 )
            goto LABEL_641;
          svtUseSkillIdList = v158->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_1136;
    }
LABEL_1137:
    sub_1C93D34(gameObject);
  }
  if ( !v159 )
    goto LABEL_1136;
LABEL_641:
  v173 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v159->klass->vtable._3_ToString.methodPtr)(
                 v159,
                 v159->klass->vtable._3_ToString.method);
  if ( !v173 )
    goto LABEL_1136;
  UILabel__set_text(v173, (System_String_o *)gameObject, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1136;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1136;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  modeKind = v263;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1136;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  v174 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v174 = item->fields.isLock;
  if ( v174 )
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
    v175 = *v268;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9340/*"NONSELECT_SKILLUP_BASE"*/, 0);
    if ( !v175 )
      goto LABEL_1136;
    UILabel__set_text(v175, (System_String_o *)gameObject, 0);
    if ( item->fields.isEventJoin )
    {
      v176 = *v268;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10355/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v176 )
        goto LABEL_1136;
      UILabel__set_text(v176, (System_String_o *)gameObject, 0);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_681;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_41140656(126, 0) )
      goto LABEL_681;
    v177 = *v268;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v178 = &StringLiteral_11608/*"SELECT_CANNOT"*/;
    goto LABEL_679;
  }
  if ( !enableAppendSkillUp )
    goto LABEL_1136;
  if ( enableAppendSkillUp->fields._size > 0 || item->fields.isAppendSkillOpenItemNum )
  {
    gameObject = (__int64)*v264;
    if ( !*v264 )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v177 = *v264;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v178 = &StringLiteral_8845/*"MSG_ABLED_SKILLUP"*/;
LABEL_679:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v178, 0);
    if ( !v177 )
      goto LABEL_1136;
    UILabel__set_text(v177, (System_String_o *)gameObject, 0);
  }
LABEL_681:
  v179 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v179, 0, 0) )
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
        gameObject = CombineServantListViewItem__get_SkillOpenItemNum(item, v183);
        if ( (gameObject & 0x80000000) != 0 )
        {
          switchInfoList = (MethodInfo *)StringLiteral_1/*""*/;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(item, v184);
          v185 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum);
          gameObject = (__int64)System_String__Format((System_String_o *)StringLiteral_25376/*"{0:#,0}"*/, v185, 0);
          switchInfoList = (MethodInfo *)gameObject;
        }
        if ( !coinNumLabel )
          goto LABEL_1136;
        UILabel__set_text(coinNumLabel, (System_String_o *)switchInfoList, 0);
        gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, v186);
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
  v188 = item->fields.type;
  if ( v188 != 12 )
    goto LABEL_827;
  v189 = CombineServantListViewItem__GetAppendSkillData(item, switchInfoList);
  v190 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v190, 0);
  if ( !v189 )
    goto LABEL_1136;
  v191 = v189->fields.svtUseSkillIdList;
  if ( !v191 )
    goto LABEL_1136;
  v192 = v191->max_length;
  if ( (int)v192 < 1 )
  {
    v195 = 0;
    v207 = 0;
    if ( !v190 )
      goto LABEL_1136;
  }
  else
  {
    v193 = 0;
    v194 = 0;
    v195 = 0;
    v196 = 0;
    while ( 1 )
    {
      if ( v196 >= LODWORD(v191->max_length) )
        goto LABEL_1137;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NONSKILL_TXT"*/, 0);
      v197 = v189->fields.svtSkillLvList;
      if ( !v197 )
        goto LABEL_1136;
      if ( v196 >= LODWORD(v197->max_length) )
        goto LABEL_1137;
      v198 = (char *)v197 + 4 * v196;
      v199 = *((_DWORD *)v198 + 8);
      gameObject = (__int64)(v198 + 32);
      if ( v199 >= 1 )
      {
        gameObject = (__int64)System_Int32__ToString(gameObject, 0);
        v197 = v189->fields.svtSkillLvList;
        if ( !v197 )
          goto LABEL_1136;
        v194 = 1;
      }
      if ( v196 >= LODWORD(v197->max_length) )
        goto LABEL_1137;
      v200 = v197->m_Items[0];
      v201 = v197->m_Items[v196++];
      v195 |= v201 < 10;
      v193 |= v200 != v201;
      if ( v196 == (unsigned int)v192 )
        break;
      v191 = v189->fields.svtUseSkillIdList;
      if ( !v191 )
        goto LABEL_1136;
    }
    v262 = v194;
    v202 = 0;
    v203 = 32;
    do
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NONSKILL_TXT"*/, 0);
      v204 = v189->fields.svtSkillLvList;
      if ( !v204 )
        goto LABEL_1136;
      if ( v202 >= LODWORD(v204->max_length) )
        goto LABEL_1137;
      v205 = (Il2CppObject *)gameObject;
      if ( *(int *)((char *)&v204->obj.klass + v203) >= 1 )
        v205 = (Il2CppObject *)System_Int32__ToString((int)v204 + (int)v203, 0);
      if ( (_DWORD)v192 - 1 == v202 )
      {
        if ( (v193 & 1) == 0 )
          goto LABEL_741;
        if ( !v266->fields.isHeroineSvt )
          goto LABEL_750;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_41140656(126, 0) )
        {
LABEL_741:
          v206 = &StringLiteral_12322/*"SKILL_LVDISP_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v206 = &StringLiteral_12322/*"SKILL_LVDISP_SINGLE_TXT"*/;
          }
        }
        else
        {
LABEL_750:
          v206 = &StringLiteral_12320/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v206 = &StringLiteral_12320/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          }
        }
      }
      else
      {
        if ( (v193 & 1) == 0 )
          goto LABEL_748;
        if ( !v266->fields.isHeroineSvt )
          goto LABEL_752;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_41140656(126, 0) )
        {
LABEL_748:
          v206 = &StringLiteral_12323/*"SKILL_LVDISP_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v206 = &StringLiteral_12323/*"SKILL_LVDISP_TXT"*/;
          }
        }
        else
        {
LABEL_752:
          v206 = &StringLiteral_12321/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v206 = &StringLiteral_12321/*"SKILL_LVDISP_ENABLE_TXT"*/;
          }
        }
      }
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v206, 0);
      if ( !v190 )
        goto LABEL_1136;
      System_Text_StringBuilder__AppendFormat(v190, (System_String_o *)gameObject, v205, 0);
      ++v202;
      v203 += 4;
    }
    while ( (unsigned int)v192 != v202 );
    this = v265;
    item = v266;
    v207 = v262;
    modeKind = v263;
    p_statusTxtLb = v264;
  }
  v208 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v190->klass->vtable._3_ToString.methodPtr)(
                 v190,
                 v190->klass->vtable._3_ToString.method);
  if ( !v208 )
    goto LABEL_1136;
  UILabel__set_text(v208, (System_String_o *)gameObject, 0);
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
  v209 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v209 = item->fields.isLock;
  if ( v209 )
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
    gameObject = (__int64)*v268;
    if ( !*v268 )
      goto LABEL_1136;
    UILabel__set_text((UILabel_o *)gameObject, string_TypeInfo->static_fields->Empty, 0);
    if ( item->fields.isEventJoin )
    {
      v210 = *v268;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10355/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v210 )
        goto LABEL_1136;
      UILabel__set_text(v210, (System_String_o *)gameObject, 0);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_1140;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_41140656(126, 0) )
    {
      v211 = *v268;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v212 = &StringLiteral_11608/*"SELECT_CANNOT"*/;
    }
    else
    {
LABEL_1140:
      if ( item->fields.isEventJoin )
      {
        v211 = *v268;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v212 = &StringLiteral_11640/*"SELECT_SERVANT_EVENT_JOIN"*/;
      }
      else if ( (v207 & 1) != 0 )
      {
        if ( (v195 & 1) != 0 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4D2A55B )
          {
            sub_1C93AD4(&NetworkManager_TypeInfo);
            byte_4D2A55B = 1;
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
          v211 = *v268;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1998/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/, 0);
          if ( !entity )
            goto LABEL_1136;
          v214 = (System_String_o *)gameObject;
          SkillOpenItemNum = UserServantAppendPassiveSkillEntity__GetRemainingExchangeNum(entity, 0);
          v215 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum);
          gameObject = (__int64)System_String__Format(v214, v215, 0);
          if ( !v211 )
            goto LABEL_1136;
          goto LABEL_815;
        }
        v211 = *v268;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v212 = &StringLiteral_1997/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/;
      }
      else
      {
        v211 = *v268;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v212 = &StringLiteral_1996/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/;
      }
    }
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v212, 0);
    if ( !v211 )
      goto LABEL_1136;
LABEL_815:
    UILabel__set_text(v211, (System_String_o *)gameObject, 0);
  }
LABEL_816:
  v216 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v216, 0, 0) )
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
  v188 = item->fields.type;
LABEL_827:
  if ( v188 != 4 )
    goto LABEL_875;
  gameObject = (__int64)this->fields.npIconLabel;
  if ( !gameObject )
    goto LABEL_1136;
  v217 = SHIDWORD(v272.invoker_method) <= 0 ? -1 : LODWORD(v272.invoker_method);
  UIIconLabel__Set_41834012((UIIconLabel_o *)gameObject, 33, v217, SHIDWORD(v272.methodPointer), 0, 0, 0, 0, 0, 0, 0);
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
  v218 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v218 = item->fields.isLock;
  if ( v218 )
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
    v219 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v219, 0, 0) )
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
      v220 = item->fields.isHeroineSvt;
      v221 = *v268;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v222 = (System_String_o **)(v220 ? &StringLiteral_9336/*"NONSELECT_MATERIAL"*/ : &StringLiteral_9339/*"NONSELECT_NPUP_BASE"*/);
      gameObject = (__int64)LocalizationManager__Get(*v222, 0);
      if ( !v221 )
        goto LABEL_1136;
LABEL_870:
      UILabel__set_text(v221, (System_String_o *)gameObject, 0);
    }
  }
  else
  {
    if ( !item->fields.isSameSvt && !item->fields.isBaseSvt )
    {
      v234 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v234, 0, 0) )
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
    v223 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v223, 0, 0) )
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
        v221 = *p_statusTxtLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8847/*"MSG_ABLED_TDUP"*/, 0);
        if ( !v221 )
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
  v224 = item->fields.type;
  if ( v224 != 6 )
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
  v225 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v225 = item->fields.isLock;
  if ( v225 )
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
    v226 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v226, 0, 0) )
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
      v228 = *v268;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v229 = &StringLiteral_9336/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      isEventJoin = item->fields.isEventJoin;
      v228 = *v268;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v229 = isEventJoin ? &StringLiteral_11640/*"SELECT_SERVANT_EVENT_JOIN"*/ : &StringLiteral_9390/*"NO_SELECT_LVEXCEED"*/;
    }
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v229, 0);
    if ( !v228 )
      goto LABEL_1136;
    goto LABEL_936;
  }
  if ( !item->fields.isLvMax || !item->fields.isLimitCntMax )
  {
    v233 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v233, 0, 0) )
      goto LABEL_937;
    goto LABEL_920;
  }
  isLvExceedItemNum = item->fields.isLvExceedItemNum;
  v231 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v232 = UnityEngine_Object__op_Inequality(v231, 0, 0);
  if ( !isLvExceedItemNum )
  {
    if ( !v232 )
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
  if ( v232 )
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
    gameObject = (__int64)*v268;
    if ( !*v268 )
      goto LABEL_1136;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v228 = *p_statusTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8844/*"MSG_ABLED_LIMITUP"*/, 0);
    if ( !v228 )
      goto LABEL_1136;
LABEL_936:
    UILabel__set_text(v228, (System_String_o *)gameObject, 0);
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
  v224 = item->fields.type;
LABEL_942:
  if ( v224 != 10 && v224 != 7 )
    goto LABEL_1009;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1136;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.subIconLabel;
  if ( !gameObject )
    goto LABEL_1136;
  UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0);
  v236 = item->fields.type;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  gameObject = CombineServantListViewManager__GetSortKind(v236, v235);
  v237 = this->fields.servantFaceIcon;
  if ( !v237 )
    goto LABEL_1136;
  if ( (_DWORD)gameObject == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *__return_ptr, struct ServantFaceIconComponent_o *, __int64, const MethodInfo *))v237->klass->vtable._4_ParameterChange.methodPtr)(
      v237,
      this->fields.servantFaceIcon,
      1,
      v237->klass->vtable._4_ParameterChange.method);
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
  v238 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v238 = item->fields.isLock;
  if ( v238 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v239 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList);
  v240 = (UnityEngine_Object_o *)this->fields.baseButton;
  v241 = v239;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v242 = UnityEngine_Object__op_Inequality(v240, 0, 0);
  if ( v241 )
  {
    if ( !v242 )
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
      v243 = *v268;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9333/*"NONSEELECT_STATUSUP_MAX"*/, 0);
      if ( !v243 )
        goto LABEL_1136;
      UILabel__set_text(v243, (System_String_o *)gameObject, 0);
    }
    if ( item->fields.isEventJoin )
    {
      v244 = *v268;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11640/*"SELECT_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v244 )
        goto LABEL_1136;
      UILabel__set_text(v244, (System_String_o *)gameObject, 0);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_998;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_41140656(126, 0) )
      goto LABEL_998;
    v245 = *v268;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11608/*"SELECT_CANNOT"*/, 0);
    if ( !v245 )
      goto LABEL_1136;
    v246 = (System_String_o *)gameObject;
    gameObject = (__int64)v245;
    goto LABEL_997;
  }
  if ( v242 )
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
    gameObject = (__int64)*v268;
    if ( !*v268 )
      goto LABEL_1136;
    v246 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_997:
    UILabel__set_text((UILabel_o *)gameObject, v246, 0);
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
  v247 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v247, 0) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1136;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v248 = this->fields.svtCommandCardList;
    gameObject = CombineServantListViewItem__get_UserSvtId(item, v249);
    if ( !v248 )
      goto LABEL_1136;
    ServantCommandCardListComponent__Set(v248, gameObject, 1, 1, 0);
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
  v250 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v250 = item->fields.isLock;
  if ( v250 )
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
      v256 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v257 = UnityEngine_Object__op_Inequality(v256, 0, 0);
      if ( isFriendshipExceedItemNum )
      {
        if ( !v257 )
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
                gameObject = (__int64)*v268;
                if ( *v268 )
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
                      v253 = *p_statusTxtLb;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8843/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, 0);
                      if ( v253 )
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
      v258 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v257 = UnityEngine_Object__op_Inequality(v258, 0, 0);
    }
    if ( v257 )
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
  v251 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v251, 0, 0) )
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
              v253 = *v268;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v254 = &StringLiteral_9336/*"NONSELECT_MATERIAL"*/;
            }
            else
            {
              v252 = item->fields.isEventJoin;
              v253 = *v268;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v254 = v252 ? &StringLiteral_11640/*"SELECT_SERVANT_EVENT_JOIN"*/ : &StringLiteral_9389/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
            }
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v254, 0);
            if ( v253 )
            {
LABEL_1061:
              UILabel__set_text(v253, (System_String_o *)gameObject, 0);
              goto LABEL_1062;
            }
          }
        }
      }
    }
LABEL_1136:
    sub_1C93D2C(gameObject, switchInfoList);
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
      if ( TutorialFlag__Get_41140656(126, 0) )
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
      switchInfoList = (MethodInfo *)LocalizationManager__Get((System_String_o *)StringLiteral_8365/*"LOCKMODE_SELECTED_SERVANT"*/, 0);
    }
    else
    {
      switchInfoList = (MethodInfo *)StringLiteral_1/*""*/;
    }
    gameObject = (__int64)*v268;
    if ( !*v268 )
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
    v259 = *v268;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v260 = &StringLiteral_11640/*"SELECT_SERVANT_EVENT_JOIN"*/;
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
              gameObject = (__int64)*v268;
              if ( !*v268 )
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
    v259 = *v268;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v260 = &StringLiteral_8365/*"LOCKMODE_SELECTED_SERVANT"*/;
  }
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v260, 0);
  if ( !v259 )
    goto LABEL_1136;
  switchInfoList = (MethodInfo *)gameObject;
  gameObject = (__int64)v259;
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

  if ( (byte_4D2A7DE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A7DE = 1;
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
    sub_1C93D2C(v7, v6);
  }
}