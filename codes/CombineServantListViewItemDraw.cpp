void __fastcall CombineServantListViewItemDraw___ctor(CombineServantListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.fortificationInfoRootObjOffsetY = 9.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineServantListViewItemDraw__SetInput(
        CombineServantListViewItemDraw_o *this,
        CombineServantListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  _BOOL4 v4; // w21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  _BOOL4 IsSelect; // w0
  const MethodInfo *v13; // x1
  unsigned int type; // w8
  _BOOL4 v15; // w23
  bool CanNotBaseSelect; // w0
  bool v17; // w22
  ServantEntity_o *servantEntity; // x0
  _BOOL4 v19; // w25
  int v20; // w24
  UnityEngine_Object_o *baseButton; // x23
  bool v22; // w0
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1
  UILabel_o *v25; // x21
  LocalizationManager_c *v26; // x0
  UILabel_o *maskLabel; // x21
  uint32_t v28; // w8
  UnityEngine_Object_o *v29; // x22
  uint32_t cctor_finished; // w8
  int v31; // w22
  int32_t v32; // w8
  __int64 *v33; // x8
  int32_t atkBase; // w8
  UILabel_o *v35; // x21
  UILabel_o *v36; // x21

  v4 = isSelectEnable;
  if ( (byte_49FFDA3 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, item);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_9220/*"NONSELECT_UNDER_STATUS_MAX"*/, v8);
    sub_1B640C8(&StringLiteral_9215/*"NONSELECT_MATERIAL"*/, v9);
    sub_1B640C8(&StringLiteral_9218/*"NONSELECT_NPUP_BASE"*/, v10);
    sub_1B640C8(&StringLiteral_9216/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v11);
    byte_49FFDA3 = 1;
  }
  if ( item )
  {
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
    type = item->fields.type;
    v15 = IsSelect;
    if ( type > 0xB )
    {
      v17 = 0;
    }
    else
    {
      if ( ((1 << type) & 0xFDD) != 0 )
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, v13);
      else
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotSelect(item, v13);
      v17 = CanNotBaseSelect;
    }
    servantEntity = item->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_93;
    v19 = !ServantEntity__get_IsOrganization(servantEntity, 0LL);
    v20 = !v15;
  }
  else
  {
    v17 = 0;
    v20 = 1;
    v19 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v22 = UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
  if ( !v17 )
  {
    if ( v22 )
    {
      servantEntity = (ServantEntity_o *)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_93;
      ((void (__fastcall *)(ServantEntity_o *, __int64, void *))servantEntity->klass->vtable._5_CreatePrimaryKey.method)(
        servantEntity,
        1LL,
        servantEntity->klass[1]._1.image);
      servantEntity = (ServantEntity_o *)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_93;
      ((void (__fastcall *)(ServantEntity_o *, _QWORD, __int64, void *))servantEntity->klass[1]._1.events)(
        servantEntity,
        0LL,
        1LL,
        servantEntity->klass[1]._1.properties);
      servantEntity = (ServantEntity_o *)this->fields.maskSprite;
      if ( !servantEntity )
        goto LABEL_93;
      servantEntity = (ServantEntity_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)servantEntity,
                                           0LL);
      if ( !servantEntity )
        goto LABEL_93;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
    }
    if ( !item )
      goto LABEL_81;
    v29 = (UnityEngine_Object_o *)this->fields.baseButton;
    cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
    if ( item->fields.isMaxSelect )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
      {
        servantEntity = (ServantEntity_o *)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_93;
        ((void (__fastcall *)(ServantEntity_o *, __int64, void *))servantEntity->klass->vtable._5_CreatePrimaryKey.method)(
          servantEntity,
          1LL,
          servantEntity->klass[1]._1.image);
        servantEntity = (ServantEntity_o *)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_93;
        v31 = 1;
        ((void (__fastcall *)(ServantEntity_o *, _QWORD, __int64, void *))servantEntity->klass[1]._1.events)(
          servantEntity,
          0LL,
          1LL,
          servantEntity->klass[1]._1.properties);
        goto LABEL_48;
      }
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
      {
        servantEntity = (ServantEntity_o *)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_93;
        ((void (__fastcall *)(ServantEntity_o *, __int64, void *))servantEntity->klass->vtable._5_CreatePrimaryKey.method)(
          servantEntity,
          1LL,
          servantEntity->klass[1]._1.image);
        servantEntity = (ServantEntity_o *)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_93;
        ((void (__fastcall *)(ServantEntity_o *, _QWORD, __int64, void *))servantEntity->klass[1]._1.events)(
          servantEntity,
          0LL,
          1LL,
          servantEntity->klass[1]._1.properties);
      }
    }
    v31 = 0;
LABEL_48:
    v32 = item->fields.type;
    if ( v32 == 5 )
    {
      if ( !(v31 & 1 | item->fields.isMaxNextLv) )
        goto LABEL_81;
    }
    else if ( v32 == 1 )
    {
      if ( ((v20 & ~(v19 || v4) | v31) & 1) == 0 )
        goto LABEL_81;
    }
    else if ( !v31 )
    {
      goto LABEL_81;
    }
    servantEntity = (ServantEntity_o *)this->fields.maskSprite;
    if ( !servantEntity )
      goto LABEL_93;
    servantEntity = (ServantEntity_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)servantEntity,
                                         0LL);
    if ( !servantEntity )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    maskLabel = this->fields.maskLabel;
    v26 = LocalizationManager_TypeInfo;
    v28 = LocalizationManager_TypeInfo->_2.cctor_finished;
    if ( item->fields.type == 5 )
      goto LABEL_58;
    goto LABEL_76;
  }
  if ( !v22 )
    goto LABEL_81;
  servantEntity = (ServantEntity_o *)this->fields.baseButton;
  if ( !servantEntity )
    goto LABEL_93;
  ((void (__fastcall *)(ServantEntity_o *, __int64, void *))servantEntity->klass->vtable._5_CreatePrimaryKey.method)(
    servantEntity,
    1LL,
    servantEntity->klass[1]._1.image);
  servantEntity = (ServantEntity_o *)this->fields.baseButton;
  if ( !servantEntity )
    goto LABEL_93;
  ((void (__fastcall *)(ServantEntity_o *, _QWORD, __int64, void *))servantEntity->klass[1]._1.events)(
    servantEntity,
    0LL,
    1LL,
    servantEntity->klass[1]._1.properties);
  servantEntity = (ServantEntity_o *)this->fields.maskSprite;
  if ( !servantEntity )
    goto LABEL_93;
  servantEntity = (ServantEntity_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)servantEntity,
                                       0LL);
  if ( !servantEntity )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  if ( !item )
    goto LABEL_93;
  if ( !item->fields.isMaxNextLv )
  {
    if ( !item->fields.isStatusUpSvt )
      goto LABEL_81;
    if ( item->fields.isCanStUp )
    {
      atkBase = item->fields.atkBase;
      if ( item->fields.rarity == 4 )
      {
        if ( atkBase >= 1 && item->fields.isNotSelectSecondStatusUpAtk )
        {
          v35 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9220/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v35 )
            goto LABEL_93;
          UILabel__set_text(v35, (System_String_o *)servantEntity, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectSecondStatusUpHp )
          goto LABEL_81;
      }
      else
      {
        if ( atkBase >= 1 && item->fields.isNotSelectStatusUpAtk )
        {
          v36 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9220/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v36 )
            goto LABEL_93;
          UILabel__set_text(v36, (System_String_o *)servantEntity, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectStatusUpHp )
          goto LABEL_81;
      }
      maskLabel = this->fields.maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v33 = &StringLiteral_9220/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_79:
      servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)*v33, 0LL);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)servantEntity, 0LL);
        goto LABEL_81;
      }
LABEL_93:
      sub_1B64324(servantEntity);
    }
    maskLabel = this->fields.maskLabel;
    v26 = LocalizationManager_TypeInfo;
    v28 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_76:
    if ( !v28 )
      j_il2cpp_runtime_class_init_0(v26);
    v33 = &StringLiteral_9215/*"NONSELECT_MATERIAL"*/;
    goto LABEL_79;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, v24) )
  {
    v25 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9216/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
    if ( !v25 )
      goto LABEL_93;
    UILabel__set_text(v25, (System_String_o *)servantEntity, 0LL);
    if ( item->fields.type == 5 )
    {
      v26 = LocalizationManager_TypeInfo;
      maskLabel = this->fields.maskLabel;
      v28 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_58:
      if ( !v28 )
        j_il2cpp_runtime_class_init_0(v26);
      v33 = &StringLiteral_9218/*"NONSELECT_NPUP_BASE"*/;
      goto LABEL_79;
    }
  }
LABEL_81:
  CombineServantListViewItemDraw__SetSelectDisp(this, item, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewItemDraw__SetItem(
        CombineServantListViewItemDraw_o *this,
        CombineServantListViewItem_o *item,
        int32_t mode,
        bool isSelectEnable,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  UnityEngine_Object_o *svtCommandCardList; // x23
  const MethodInfo *v64; // x1
  __int64 gameObject; // x0
  int32_t type; // w19
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  IconLabelInfo_o *iconLabelInfo1; // x2
  UIIconLabel_o *subIconLabel; // x23
  int32_t rarity; // w24
  const MethodInfo *v71; // x1
  const MethodInfo *v72; // x1
  const MethodInfo *v73; // x1
  int32_t v74; // w25
  const MethodInfo *v75; // x4
  UILabel_o **p_statusTxtLb; // x20
  struct UILabel_o **p_maskLabel; // x29
  bool v78; // w1
  UnityEngine_Object_o *pushImg; // x23
  UnityEngine_Object_o *materialTdSprite; // x23
  MethodInfo *switchInfoList; // x1
  const MethodInfo *v82; // x2
  UISprite_o *v83; // x23
  int32_t v84; // w23
  int32_t v85; // w8
  const MethodInfo *v86; // x1
  _BOOL4 v87; // w8
  bool CanNotBaseSelect; // w0
  UnityEngine_Object_o *v89; // x23
  bool v90; // w22
  bool v91; // w0
  struct UILabel_o *v92; // x22
  __int64 *v93; // x8
  int32_t v94; // w2
  const MethodInfo *v95; // x2
  UserServantEntity_o *userSvtEntity; // x0
  char v97; // w25
  UILabel_o *v98; // x23
  UILabel_o *v99; // x23
  _BOOL4 isLock; // w8
  UILabel_o *v101; // x23
  _BOOL4 isChoice; // w8
  UILabel_o *v103; // x23
  UILabel_o *v104; // x23
  UILabel_o *v105; // x23
  UILabel_o *v106; // x23
  UILabel_o *v107; // x23
  UILabel_o *v108; // x23
  _BOOL4 isParty; // w19
  __int64 *v110; // x8
  UILabel_o *v111; // x23
  _BOOL4 v112; // w19
  __int64 *v113; // x8
  UILabel_o *v114; // x23
  const MethodInfo *v115; // x1
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x24
  bool v118; // w23
  bool v119; // w0
  int32_t v120; // w8
  UILabel_o *v121; // x22
  UILabel_o *v122; // x22
  UILabel_o *v123; // x22
  UILabel_o *v124; // x22
  __int64 *v125; // x8
  UnityEngine_Object_o *v126; // x23
  uint32_t cctor_finished; // w8
  int v128; // w19
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x1
  __int64 v132; // x2
  UILabel_o *v133; // x22
  System_String_o *v134; // x23
  Il2CppObject *v135; // x0
  UILabel_o *v136; // x22
  __int64 *v137; // x8
  UILabel_o *v138; // x22
  UILabel_o *v139; // x23
  UILabel_o *v140; // x22
  UILabel_o *v141; // x22
  int32_t v142; // w8
  System_String_o *v143; // x1
  UILabel_o *fortificationAppointmentLabel; // x22
  float v145; // s0
  float v146; // s2
  float fortificationInfoRootObjOffsetY; // s10
  float v148; // s8
  float v149; // s9
  System_Collections_Generic_List_object__o *v150; // x22
  System_String_o *v151; // x23
  Il2CppObject *v152; // x0
  int32_t v153; // w2
  int32_t v154; // w3
  struct System_Object_array *items; // x8
  _QWORD *v156; // x9
  __int64 size; // x10
  __int64 v158; // x1
  Il2CppClass **v159; // x0
  System_String_o *v160; // x23
  Il2CppObject *v161; // x0
  int32_t v162; // w2
  int32_t v163; // w3
  struct System_Object_array *v164; // x8
  _QWORD *v165; // x9
  __int64 v166; // x10
  __int64 v167; // x1
  Il2CppClass **v168; // x0
  int32_t v169; // w2
  int32_t v170; // w3
  struct System_Object_array *v171; // x8
  _QWORD *v172; // x9
  __int64 v173; // x10
  __int64 v174; // x1
  Il2CppClass **v175; // x0
  const MethodInfo *v176; // x1
  _BOOL4 v177; // w8
  UnityEngine_Object_o *v178; // x22
  _BOOL4 isHeroineSvt; // w19
  UILabel_o *v180; // x22
  __int64 *v181; // x8
  const MethodInfo *v182; // x1
  _BOOL4 v183; // w8
  bool v184; // w0
  UnityEngine_Object_o *v185; // x23
  bool v186; // w22
  bool v187; // w0
  System_String_o *v188; // x1
  _BOOL4 isSealCombineLimit; // w19
  UnityEngine_Object_o *v190; // x22
  int32_t v191; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  __int64 v193; // x1
  __int64 v194; // x2
  System_Text_StringBuilder_o *v195; // x22
  __int64 v196; // x1
  SkillInfo_array *v197; // x8
  __int64 v198; // x9
  unsigned __int64 v199; // x26
  __int64 v200; // x27
  __int64 v201; // x20
  SkillInfo_o *v202; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v205; // w25
  Il2CppObject *v206; // x24
  bool v207; // w25
  System_String_o **v208; // x8
  UILabel_o *skillLvLabel; // x23
  const MethodInfo *v210; // x1
  _BOOL4 v211; // w8
  UnityEngine_Object_o *v212; // x22
  UILabel_o *v213; // x22
  UILabel_o *v214; // x22
  __int64 *v215; // x8
  _BOOL4 isSkillUpItemNum; // w19
  UnityEngine_Object_o *v217; // x22
  bool v218; // w0
  UnityEngine_Object_o *v219; // x22
  SvtUseSkillData_o *AppendSkillData; // x0
  struct System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v222; // x24
  __int64 v223; // x1
  __int64 v224; // x2
  System_Text_StringBuilder_o *v225; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v227; // x9
  unsigned __int64 v228; // x27
  __int64 v229; // x20
  __int64 v230; // x28
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v232; // x0
  int32_t v233; // w26
  int32_t v234; // w0
  int v235; // t1
  Il2CppObject *v236; // x25
  bool v237; // w26
  System_String_o **v238; // x8
  UILabel_o *v239; // x24
  const MethodInfo *v240; // x1
  _BOOL4 v241; // w8
  UILabel_o *v242; // x22
  UILabel_o *v243; // x22
  UILabel_o *v244; // x22
  __int64 *v245; // x8
  UnityEngine_Object_o *v246; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  const MethodInfo *v250; // x1
  const MethodInfo *v251; // x1
  Il2CppObject *v252; // x0
  System_String_o *v253; // x1
  const MethodInfo *v254; // x1
  const MethodInfo *v255; // x1
  ItemIconComponent_o *coinIcon; // x22
  int32_t v257; // w8
  int32_t v258; // w2
  const MethodInfo *v259; // x1
  _BOOL4 v260; // w8
  UnityEngine_Object_o *v261; // x22
  _BOOL4 v262; // w19
  UILabel_o *v263; // x22
  __int64 *v264; // x8
  UnityEngine_Object_o *v265; // x22
  System_String_o *v266; // x0
  const MethodInfo *v267; // x1
  _BOOL4 v268; // w8
  UnityEngine_Object_o *v269; // x22
  UILabel_o *v270; // x22
  __int64 *v271; // x8
  _BOOL4 isLvExceedItemNum; // w19
  UnityEngine_Object_o *v273; // x22
  bool v274; // w0
  System_String_o *v275; // x0
  UnityEngine_Object_o *v276; // x22
  _BOOL4 isEventJoin; // w19
  UnityEngine_Object_o *v278; // x22
  int32_t v279; // w8
  int32_t v280; // w22
  struct ServantFaceIconComponent_o *v281; // x8
  const MethodInfo *v282; // x1
  _BOOL4 v283; // w8
  bool v284; // w0
  UnityEngine_Object_o *v285; // x23
  bool v286; // w22
  bool v287; // w0
  UILabel_o *v288; // x22
  UILabel_o *v289; // x22
  struct UILabel_o *v290; // x22
  System_String_o *v291; // x1
  UnityEngine_Object_o *v292; // x22
  ServantCommandCardListComponent_o *v293; // x22
  const MethodInfo *v294; // x1
  _BOOL4 v295; // w8
  UnityEngine_Object_o *v296; // x22
  UILabel_o *v297; // x22
  __int64 *v298; // x8
  _BOOL4 isFriendshipExceedItemNum; // w19
  UnityEngine_Object_o *v300; // x22
  bool v301; // w0
  System_String_o *v302; // x0
  UnityEngine_Object_o *v303; // x22
  _BOOL4 v304; // w19
  System_String_o *v305; // x1
  struct UILabel_o *v306; // x19
  const MethodInfo *v307; // x1
  const MethodInfo *v308; // x1
  const MethodInfo *v309; // x1
  System_String_o *v310; // x1
  int32_t v311; // [xsp+1Ch] [xbp-C4h]
  struct UILabel_o **v312; // [xsp+20h] [xbp-C0h]
  struct UILabel_o **v313; // [xsp+28h] [xbp-B8h]
  CombineServantListViewItemDraw_o *v314; // [xsp+38h] [xbp-A8h]
  struct UISprite_o **p_maskSprite; // [xsp+40h] [xbp-A0h]
  int32_t SkillOpenItemNum; // [xsp+4Ch] [xbp-94h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-90h] BYREF
  MethodInfo v318; // [xsp+58h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v319; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v320; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFDA2 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&CombineServantListViewManager_TypeInfo, v11);
    sub_1B640C8(&int_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1B640C8(&LocalizationManager_TypeInfo, v18);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v19);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v20);
    sub_1B640C8(&TutorialFlag_TypeInfo, v21);
    sub_1B640C8(&StringLiteral_12098/*"SKILL_LVDISP_TXT"*/, v22);
    sub_1B640C8(&StringLiteral_10259/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, v23);
    sub_1B640C8(&StringLiteral_9220/*"NONSELECT_UNDER_STATUS_MAX"*/, v24);
    sub_1B640C8(&StringLiteral_6418/*"FORTIFICATION_APPOINTMENT"*/, v25);
    sub_1B640C8(&StringLiteral_3627/*"COMBINE_CAN_STATUS_UP_INFO"*/, v26);
    sub_1B640C8(&StringLiteral_8714/*"MSG_CAMPAIGN_COMBINE_EXP"*/, v27);
    sub_1B640C8(&StringLiteral_12096/*"SKILL_LVDISP_ENABLE_TXT"*/, v28);
    sub_1B640C8(&StringLiteral_9215/*"NONSELECT_MATERIAL"*/, v29);
    sub_1B640C8(&StringLiteral_22841/*"ribbon_noblephantasmup_01"*/, v30);
    sub_1B640C8(&StringLiteral_9214/*"NONSELECT_LIMITUP_BASE"*/, v31);
    sub_1B640C8(&StringLiteral_10074/*"PARTY_MEMBER_TXT"*/, v32);
    sub_1B640C8(&StringLiteral_9218/*"NONSELECT_NPUP_BASE"*/, v33);
    sub_1B640C8(&StringLiteral_12354/*"SUPPORT_MEMBER"*/, v34);
    sub_1B640C8(&StringLiteral_8710/*"MSG_ABLED_LIMITUP"*/, v35);
    sub_1B640C8(&StringLiteral_11464/*"SELECT_PUSH"*/, v36);
    sub_1B640C8(&StringLiteral_11441/*"SELECT_CANNOT"*/, v37);
    sub_1B640C8(&StringLiteral_9273/*"NPUP_BASE"*/, v38);
    sub_1B640C8(&StringLiteral_12095/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/, v39);
    sub_1B640C8(&StringLiteral_11465/*"SELECT_SERVANT_EVENT_JOIN"*/, v40);
    sub_1B640C8(&StringLiteral_9261/*"NO_SELECT_FRIENDSHIP_EXCEED"*/, v41);
    sub_1B640C8(&StringLiteral_11366/*"SAME_SERVANT"*/, v42);
    sub_1B640C8(&StringLiteral_8709/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, v43);
    sub_1B640C8(&StringLiteral_9216/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v44);
    sub_1B640C8(&StringLiteral_24834/*"{0:#,0}"*/, v45);
    sub_1B640C8(&StringLiteral_12097/*"SKILL_LVDISP_SINGLE_TXT"*/, v46);
    sub_1B640C8(&StringLiteral_8711/*"MSG_ABLED_SKILLUP"*/, v47);
    sub_1B640C8(&StringLiteral_9217/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, v48);
    sub_1B640C8(&StringLiteral_9221/*"NONSKILL_TXT"*/, v49);
    sub_1B640C8(&StringLiteral_8252/*"LOCKMODE_SELECTED_SERVANT"*/, v50);
    sub_1B640C8(&StringLiteral_6332/*"FAVORITE_SERVANT"*/, v51);
    sub_1B640C8(&StringLiteral_3443/*"CHOICE_SERVANT"*/, v52);
    sub_1B640C8(&StringLiteral_10965/*"RECOMMEND_SUPPORT_MEMBER"*/, v53);
    sub_1B640C8(&StringLiteral_8713/*"MSG_ABLED_TDUP"*/, v54);
    sub_1B640C8(&StringLiteral_11435/*"SEAL_COMBINE_LIMIT_THIRD"*/, v55);
    sub_1B640C8(&StringLiteral_9213/*"NONSELECT_BASE_ALLMAX"*/, v56);
    sub_1B640C8(&StringLiteral_9262/*"NO_SELECT_LVEXCEED"*/, v57);
    sub_1B640C8(&StringLiteral_1/*""*/, v58);
    sub_1B640C8(&StringLiteral_9219/*"NONSELECT_SKILLUP_BASE"*/, v59);
    sub_1B640C8(&StringLiteral_11463/*"SELECT_PROTECTED_EVENT_SVT"*/, v60);
    sub_1B640C8(&StringLiteral_8253/*"LOCK_SERVANT"*/, v61);
    sub_1B640C8(&StringLiteral_9212/*"NONSEELECT_STATUSUP_MAX"*/, v62);
    byte_49FFDA2 = 1;
  }
  v318.invoker_method = 0LL;
  skillInfoList = 0LL;
  v318.methodPointer = 0LL;
  if ( !item || !mode )
    return;
  svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(svtCommandCardList, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  type = item->fields.type;
  servantFaceIcon = this->fields.servantFaceIcon;
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, v64);
  iconLabelInfo1 = item->fields.iconLabelInfo1;
  if ( type )
  {
    if ( !servantFaceIcon )
      goto LABEL_966;
    ServantFaceIconComponent__Set_37904900(
      servantFaceIcon,
      (UserServantEntity_o *)gameObject,
      iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
    subIconLabel = this->fields.subIconLabel;
    rarity = item->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, v71);
    if ( !gameObject )
      goto LABEL_966;
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_966;
    ServantFaceIconComponent__Set_37904900(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0LL, 0LL);
    gameObject = (__int64)item->fields.iconLabelInfo2;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = IconLabelInfo__IsClear((IconLabelInfo_o *)gameObject, 0LL);
    subIconLabel = this->fields.subIconLabel;
    if ( (gameObject & 1) == 0 )
    {
      if ( !subIconLabel )
        goto LABEL_966;
      UIIconLabel__Set(this->fields.subIconLabel, item->fields.iconLabelInfo2, 0LL);
      goto LABEL_22;
    }
    rarity = item->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, v73);
    if ( !gameObject )
      goto LABEL_966;
  }
  v74 = *(_DWORD *)(gameObject + 296);
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, v72);
  if ( !gameObject || !subIconLabel )
    goto LABEL_966;
  UIIconLabel__Set_37921148(subIconLabel, 36, rarity, v74, 0, 0LL, 0, 0, *(_DWORD *)(gameObject + 256), 0LL);
LABEL_22:
  CombineServantListViewItem__GetNpInfo(
    item,
    (int32_t *)&v318.invoker_method + 1,
    (int32_t *)&v318.invoker_method,
    (int32_t *)&v318.methodPointer + 1,
    v75);
  gameObject = (__int64)this->fields.lockImg;
  if ( !gameObject )
    goto LABEL_966;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_966;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_statusTxtLb = &this->fields.statusTxtLb;
  gameObject = (__int64)this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_966;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_966;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.maskSprite;
  p_maskSprite = &this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_966;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_966;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_maskLabel = &this->fields.maskLabel;
  gameObject = (__int64)this->fields.maskLabel;
  if ( !gameObject )
    goto LABEL_966;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_966;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_966;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.partyIcon;
  if ( !gameObject )
    goto LABEL_966;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.removeImg;
  if ( !gameObject )
    goto LABEL_966;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_966;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_966;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_966;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.choiceImg;
  if ( !gameObject )
    goto LABEL_966;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_966;
  v78 = item->fields.isSwapChoice ? !item->fields.isChoice : item->fields.isChoice;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v78, 0LL);
  gameObject = (__int64)this->fields.switchInfoComp;
  if ( !gameObject )
    goto LABEL_966;
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.fortificationRootObj;
  if ( !gameObject )
    goto LABEL_966;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.fortificationNameLabel;
  if ( !gameObject )
    goto LABEL_966;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)this->fields.fortificationDetailNameLabel;
  if ( !gameObject )
    goto LABEL_966;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)this->fields.fortificationAppointmentLabel;
  if ( !gameObject )
    goto LABEL_966;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushImg, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.pushImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isPush, 0LL);
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_966;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)gameObject, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isMaterialTdSvt, 0LL);
    if ( item->fields.isMaterialTdSvt )
    {
      v83 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v83, (System_String_o *)StringLiteral_22841/*"ribbon_noblephantasmup_01"*/, 0LL);
      v84 = item->fields.type;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      if ( CombineServantListViewManager__GetSortKind(v84, 0LL) == 1 )
      {
        gameObject = (__int64)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_966;
        v319.fields.x = 0.65;
        v319.fields.y = 1.0;
        v319.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v319, 0LL);
      }
    }
  }
  v85 = item->fields.type;
  switch ( v85 )
  {
    case 5:
      gameObject = (__int64)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_966;
      v94 = SHIDWORD(v318.invoker_method) <= 0 ? -1 : LODWORD(v318.invoker_method);
      UIIconLabel__Set_37921148(
        (UIIconLabel_o *)gameObject,
        33,
        v94,
        SHIDWORD(v318.methodPointer),
        0,
        0LL,
        0,
        0,
        0,
        0LL);
      gameObject = (__int64)this->fields.npLvInfo;
      if ( !gameObject )
        goto LABEL_966;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      goto LABEL_103;
    case 1:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_966;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( userSvtEntity && UserServantEntity__IsProtectedEventServant(userSvtEntity, 0LL) && item->fields.type != 5 )
      {
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_966;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_966;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v139 = *p_maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11463/*"SELECT_PROTECTED_EVENT_SVT"*/, 0LL);
        if ( !v139 )
          goto LABEL_966;
        UILabel__set_text(v139, (System_String_o *)gameObject, 0LL);
        v97 = 1;
LABEL_104:
        if ( item->fields.isParty )
        {
          gameObject = (__int64)this->fields.partyIcon;
          if ( !gameObject )
            goto LABEL_966;
          FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_966;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_966;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v98 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10074/*"PARTY_MEMBER_TXT"*/, 0LL);
          if ( !v98 )
            goto LABEL_966;
          UILabel__set_text(v98, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        if ( item->fields.isFavorite )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_966;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_966;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v99 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6332/*"FAVORITE_SERVANT"*/, 0LL);
          if ( !v99 )
            goto LABEL_966;
          UILabel__set_text(v99, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        isLock = !item->fields.isLock;
        if ( !item->fields.isSwapLock )
          isLock = item->fields.isLock;
        if ( isLock )
        {
          gameObject = (__int64)this->fields.lockImg;
          if ( !gameObject )
            goto LABEL_966;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_966;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_966;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_966;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v101 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8253/*"LOCK_SERVANT"*/, 0LL);
          if ( !v101 )
            goto LABEL_966;
          UILabel__set_text(v101, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        isChoice = !item->fields.isChoice;
        if ( !item->fields.isSwapChoice )
          isChoice = item->fields.isChoice;
        if ( isChoice )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_966;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_966;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v103 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3443/*"CHOICE_SERVANT"*/, 0LL);
          if ( !v103 )
            goto LABEL_966;
          UILabel__set_text(v103, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        if ( item->fields.isLimitCntTarget )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_966;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_966;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v104 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11366/*"SAME_SERVANT"*/, 0LL);
          if ( !v104 )
            goto LABEL_966;
          UILabel__set_text(v104, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        if ( item->fields.isHeroineSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_966;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_966;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v105 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9215/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v105 )
            goto LABEL_966;
          UILabel__set_text(v105, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        if ( item->fields.isStatusUpSvt && !item->fields.isCanStUp )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_966;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_966;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v106 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9215/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v106 )
            goto LABEL_966;
          UILabel__set_text(v106, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        if ( item->fields.isEventJoin )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_966;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_966;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v107 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11465/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
          if ( !v107 )
            goto LABEL_966;
          UILabel__set_text(v107, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        if ( item->fields.isUseSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_966;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_966;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v108 = *p_maskLabel;
          isParty = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v110 = &StringLiteral_12354/*"SUPPORT_MEMBER"*/;
          if ( isParty )
            v110 = &StringLiteral_10074/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v110, 0LL);
          if ( !v108 )
            goto LABEL_966;
          UILabel__set_text(v108, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        if ( item->fields.isUseRecommendSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_966;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_966;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v111 = *p_maskLabel;
          v112 = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v113 = &StringLiteral_10965/*"RECOMMEND_SUPPORT_MEMBER"*/;
          if ( v112 )
            v113 = &StringLiteral_10074/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v113, 0LL);
          if ( !v111 )
            goto LABEL_966;
          UILabel__set_text(v111, (System_String_o *)gameObject, 0LL);
          if ( !item->fields.isParty )
          {
            gameObject = (__int64)*p_maskLabel;
            if ( !*p_maskLabel )
              goto LABEL_966;
            UILabel__SetCondensedScale((UILabel_o *)gameObject, 106, 0LL);
          }
          v97 = 1;
        }
        if ( item->fields.isPush )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_966;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_966;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v114 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11464/*"SELECT_PUSH"*/, 0LL);
          if ( !v114 )
            goto LABEL_966;
          UILabel__set_text(v114, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, item, v95);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(item, v115);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        v118 = CanNotSelect;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v119 = UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
        if ( v118 )
        {
          if ( !v119 )
            break;
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_966;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_966;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_966;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_966;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          if ( item->fields.isMaxNextLv || item->fields.isBaseLvMax )
          {
            if ( !item->fields.isCanStUp )
            {
              if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, switchInfoList) )
              {
                v138 = *p_maskLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9216/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
                if ( !v138 )
                  goto LABEL_966;
                UILabel__set_text(v138, (System_String_o *)gameObject, 0LL);
                if ( item->fields.type != 5 )
                  break;
                v124 = *p_maskLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v125 = &StringLiteral_9218/*"NONSELECT_NPUP_BASE"*/;
LABEL_320:
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v125, 0LL);
                if ( !v124 )
                  goto LABEL_966;
LABEL_321:
                UILabel__set_text(v124, (System_String_o *)gameObject, 0LL);
              }
LABEL_322:
              v142 = item->fields.type;
              if ( v142 != 5 )
                goto LABEL_407;
              if ( !item->fields.isBaseSvt )
                break;
              v136 = *p_maskLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v137 = &StringLiteral_9273/*"NPUP_BASE"*/;
LABEL_327:
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v137, 0LL);
              if ( !v136 )
                goto LABEL_966;
              UILabel__set_text(v136, (System_String_o *)gameObject, 0LL);
              break;
            }
          }
          else if ( !item->fields.isCanStUp )
          {
            if ( item->fields.isFortification )
            {
              gameObject = (__int64)*p_maskLabel;
              if ( !*p_maskLabel )
                goto LABEL_966;
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_966;
              gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_966;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_966;
              UILabel__set_text((UILabel_o *)gameObject, item->fields.fortificationName, 0LL);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_966;
              UILabel__set_text((UILabel_o *)gameObject, item->fields.fortificationDetailName, 0LL);
              fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6418/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
              if ( !fortificationAppointmentLabel )
                goto LABEL_966;
              UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)gameObject, 0LL);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_966;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_966;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL);
              if ( item->fields.type != 5 )
                break;
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_966;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_966;
              *(UnityEngine_Vector3_o *)&v145 = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)gameObject,
                                                  0LL);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_966;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              v148 = v145;
              v149 = v146;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_966;
              v320.fields.x = v148;
              v320.fields.y = fortificationInfoRootObjOffsetY;
              v320.fields.z = v149;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v320, 0LL);
              goto LABEL_322;
            }
            if ( (v97 & 1) == 0 )
            {
              v124 = *p_maskLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9215/*"NONSELECT_MATERIAL"*/, 0LL);
              if ( !v124 )
                goto LABEL_966;
              goto LABEL_321;
            }
            goto LABEL_322;
          }
          if ( item->fields.isStatusUpSvt )
          {
            v120 = item->fields.rarity;
            if ( v120 <= 3 )
            {
              if ( item->fields.isAtkUpMax || item->fields.isHpUpMax )
              {
                v140 = *p_maskLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9220/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v140 )
                  goto LABEL_966;
                UILabel__set_text(v140, (System_String_o *)gameObject, 0LL);
              }
              if ( item->fields.isAtkSecondUpMax || item->fields.isHpSecondUpMax )
              {
                v141 = *p_maskLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9220/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v141 )
                  goto LABEL_966;
                UILabel__set_text(v141, (System_String_o *)gameObject, 0LL);
              }
              if ( !item->fields.isNotSelectStatusUpAtk && !item->fields.isNotSelectStatusUpHp )
                goto LABEL_322;
              v124 = *p_maskLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v125 = &StringLiteral_9220/*"NONSELECT_UNDER_STATUS_MAX"*/;
            }
            else
            {
              if ( v120 != 4 )
                goto LABEL_322;
              if ( item->fields.atkBase >= 1 )
              {
                if ( item->fields.isAtkSecondUpMax || item->fields.isNotSelectSecondStatusUpAtk )
                {
                  v121 = *p_maskLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9220/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                  if ( !v121 )
                    goto LABEL_966;
                  UILabel__set_text(v121, (System_String_o *)gameObject, 0LL);
                }
                if ( !item->fields.isAtkUpMax )
                {
                  v122 = *p_maskLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9217/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0LL);
                  if ( !v122 )
                    goto LABEL_966;
                  UILabel__set_text(v122, (System_String_o *)gameObject, 0LL);
                }
              }
              if ( item->fields.hpBase < 1 )
                goto LABEL_322;
              if ( item->fields.isHpSecondUpMax || item->fields.isNotSelectSecondStatusUpHp )
              {
                v123 = *p_maskLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9220/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v123 )
                  goto LABEL_966;
                UILabel__set_text(v123, (System_String_o *)gameObject, 0LL);
              }
              if ( item->fields.isHpUpMax )
                goto LABEL_322;
              v124 = *p_maskLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v125 = &StringLiteral_9217/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
            }
            goto LABEL_320;
          }
          goto LABEL_322;
        }
        if ( v119 )
        {
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_966;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_966;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_966;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_966;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        v126 = (UnityEngine_Object_o *)this->fields.baseButton;
        cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
        if ( item->fields.isMaxSelect )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v126, 0LL, 0LL) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_966;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_966;
            v128 = 1;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
            goto LABEL_277;
          }
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v126, 0LL, 0LL) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_966;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_966;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          }
        }
        v128 = 0;
        if ( item->fields.type != 1 )
          goto LABEL_283;
LABEL_277:
        gameObject = (__int64)item->fields.servantEntity;
        if ( !gameObject )
          goto LABEL_966;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)gameObject, 0LL) && !isSelectEnable )
        {
          if ( !(v128 & 1 | !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL)) )
            break;
        }
        else
        {
LABEL_283:
          if ( !v128 )
            break;
        }
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_966;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_966;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v136 = *p_maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v137 = &StringLiteral_9215/*"NONSELECT_MATERIAL"*/;
        goto LABEL_327;
      }
LABEL_103:
      v97 = 0;
      goto LABEL_104;
    case 0:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_966;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0LL);
      if ( item->fields.isParty )
      {
        gameObject = (__int64)this->fields.partyIcon;
        if ( !gameObject )
          goto LABEL_966;
        FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
      }
      v87 = !item->fields.isLock;
      if ( !item->fields.isSwapLock )
        v87 = item->fields.isLock;
      if ( v87 )
      {
        gameObject = (__int64)this->fields.lockImg;
        if ( !gameObject )
          goto LABEL_966;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_966;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      }
      CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, v86);
      v89 = (UnityEngine_Object_o *)this->fields.baseButton;
      v90 = CanNotBaseSelect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v91 = UnityEngine_Object__op_Inequality(v89, 0LL, 0LL);
      if ( v90 )
      {
        if ( !v91 )
          goto LABEL_402;
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_966;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_966;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_966;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_966;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        if ( item->fields.isLvMax )
        {
          if ( item->fields.isStatusUpSvt )
            goto LABEL_331;
          if ( !item->fields.isExpUpSvt )
          {
            v92 = *p_maskLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v93 = &StringLiteral_9213/*"NONSELECT_BASE_ALLMAX"*/;
            goto LABEL_334;
          }
        }
        else if ( item->fields.isStatusUpSvt )
        {
          goto LABEL_331;
        }
        if ( !item->fields.isExpUpSvt )
        {
          if ( !item->fields.isHeroineSvt )
          {
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_966;
            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            gameObject = (__int64)*p_maskLabel;
            if ( !*p_maskLabel )
              goto LABEL_966;
            v143 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_336;
          }
          v92 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v93 = &StringLiteral_11441/*"SELECT_CANNOT"*/;
LABEL_334:
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v93, 0LL);
          if ( !v92 )
            goto LABEL_966;
          v143 = (System_String_o *)gameObject;
          gameObject = (__int64)v92;
LABEL_336:
          UILabel__set_text((UILabel_o *)gameObject, v143, 0LL);
          gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
          if ( !gameObject )
            goto LABEL_966;
          CombineServantListViewNoticeTween__RemoveTarget(
            (CombineServantListViewNoticeTween_o *)gameObject,
            *p_statusTxtLb,
            0LL);
          goto LABEL_402;
        }
LABEL_331:
        v92 = *p_maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v93 = &StringLiteral_9215/*"NONSELECT_MATERIAL"*/;
        goto LABEL_334;
      }
      if ( !v91 )
        goto LABEL_402;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_966;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_966;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_966;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_966;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)*p_maskLabel;
      if ( !*p_maskLabel )
        goto LABEL_966;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( item->fields.isCombineExpCampaignTarget )
      {
        if ( !item->fields.isDispAtkStatusUpInfo )
          goto LABEL_264;
        gameObject = (__int64)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_966;
        if ( !UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)gameObject, 0LL) )
          goto LABEL_264;
        gameObject = (__int64)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_966;
        if ( !UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)gameObject, 0LL) )
        {
          v150 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                System_Collections_Generic_List_string__TypeInfo,
                                                                v129,
                                                                v130);
          System_Collections_Generic_List_object____ctor(
            v150,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v151 = LocalizationManager__Get((System_String_o *)StringLiteral_8714/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v318.methodPointer = item->fields.combineExpCampaignValue;
          v152 = (Il2CppObject *)System_Single__ToString(*(float *)&v318.methodPointer, &v318);
          gameObject = (__int64)System_String__Format(v151, v152, 0LL);
          if ( !v150 )
            goto LABEL_966;
          items = v150->fields._items;
          v156 = Method_System_Collections_Generic_List_string__Add__;
          ++v150->fields._version;
          if ( !items )
            goto LABEL_966;
          size = v150->fields._size;
          v158 = gameObject;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v150,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
          }
          else
          {
            v159 = &items->obj.klass + size;
            v150->fields._size = size + 1;
            v159[4] = (Il2CppClass *)v158;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v159 + 4), v158, v153, v154);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3627/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v171 = v150->fields._items;
          v172 = Method_System_Collections_Generic_List_string__Add__;
          ++v150->fields._version;
          if ( !v171 )
            goto LABEL_966;
        }
        else
        {
LABEL_264:
          if ( !item->fields.isDispHpStatusUpInfo )
            goto LABEL_265;
          gameObject = (__int64)item->fields.userSvtEntity;
          if ( !gameObject )
            goto LABEL_966;
          if ( !UserServantEntity__isAdjustHpMax((UserServantEntity_o *)gameObject, 0LL) )
            goto LABEL_265;
          gameObject = (__int64)item->fields.userSvtEntity;
          if ( !gameObject )
            goto LABEL_966;
          if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)gameObject, 0LL) )
          {
LABEL_265:
            gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
            if ( !gameObject )
              goto LABEL_966;
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              *p_statusTxtLb,
              0LL);
            v133 = *p_statusTxtLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v134 = LocalizationManager__Get((System_String_o *)StringLiteral_8714/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
            *(float *)&v318.methodPointer = item->fields.combineExpCampaignValue;
            v135 = (Il2CppObject *)System_Single__ToString(*(float *)&v318.methodPointer, &v318);
            gameObject = (__int64)System_String__Format(v134, v135, 0LL);
            if ( !v133 )
              goto LABEL_966;
LABEL_269:
            UILabel__set_text(v133, (System_String_o *)gameObject, 0LL);
LABEL_399:
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_966;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_966;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            goto LABEL_402;
          }
          v150 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                System_Collections_Generic_List_string__TypeInfo,
                                                                v131,
                                                                v132);
          System_Collections_Generic_List_object____ctor(
            v150,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v160 = LocalizationManager__Get((System_String_o *)StringLiteral_8714/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v318.methodPointer = item->fields.combineExpCampaignValue;
          v161 = (Il2CppObject *)System_Single__ToString(*(float *)&v318.methodPointer, &v318);
          gameObject = (__int64)System_String__Format(v160, v161, 0LL);
          if ( !v150 )
            goto LABEL_966;
          v164 = v150->fields._items;
          v165 = Method_System_Collections_Generic_List_string__Add__;
          ++v150->fields._version;
          if ( !v164 )
            goto LABEL_966;
          v166 = v150->fields._size;
          v167 = gameObject;
          if ( (unsigned int)v166 >= v164->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v150,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
          }
          else
          {
            v168 = &v164->obj.klass + v166;
            v150->fields._size = v166 + 1;
            v168[4] = (Il2CppClass *)v167;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v168 + 4), v167, v162, v163);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3627/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v171 = v150->fields._items;
          v172 = Method_System_Collections_Generic_List_string__Add__;
          ++v150->fields._version;
          if ( !v171 )
            goto LABEL_966;
        }
        v173 = v150->fields._size;
        v174 = gameObject;
        if ( (unsigned int)v173 >= v171->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v150,
            (Il2CppObject *)gameObject,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
        }
        else
        {
          v175 = &v171->obj.klass + v173;
          v150->fields._size = v173 + 1;
          v175[4] = (Il2CppClass *)v174;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v175 + 4), v174, v169, v170);
        }
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_966;
        CombineServantListViewNoticeTween__AddTarget(
          (CombineServantListViewNoticeTween_o *)gameObject,
          *p_statusTxtLb,
          (System_Collections_Generic_List_string__o *)v150,
          0LL);
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_966;
        CombineServantListViewNoticeTween__SetTexts((CombineServantListViewNoticeTween_o *)gameObject, 0, 0LL);
        goto LABEL_399;
      }
      gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
      if ( !gameObject )
        goto LABEL_966;
      CombineServantListViewNoticeTween__RemoveTarget(
        (CombineServantListViewNoticeTween_o *)gameObject,
        *p_statusTxtLb,
        0LL);
      if ( item->fields.isDispAtkStatusUpInfo )
      {
        gameObject = (__int64)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_966;
        if ( UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)gameObject, 0LL) )
        {
          gameObject = (__int64)item->fields.userSvtEntity;
          if ( !gameObject )
            goto LABEL_966;
          if ( !UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)gameObject, 0LL) )
            goto LABEL_368;
        }
      }
      else if ( item->fields.isDispHpStatusUpInfo )
      {
        gameObject = (__int64)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_966;
        if ( UserServantEntity__isAdjustHpMax((UserServantEntity_o *)gameObject, 0LL) )
        {
          gameObject = (__int64)item->fields.userSvtEntity;
          if ( !gameObject )
            goto LABEL_966;
          if ( !UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)gameObject, 0LL) )
          {
LABEL_368:
            v133 = *p_statusTxtLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3627/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
            if ( !v133 )
              goto LABEL_966;
            goto LABEL_269;
          }
        }
      }
LABEL_402:
      if ( item->fields.isBaseSvt )
      {
        gameObject = (__int64)this->fields.removeImg;
        if ( !gameObject )
          goto LABEL_966;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_966;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      }
      break;
  }
  v142 = item->fields.type;
LABEL_407:
  if ( v142 != 9 )
  {
    if ( v142 != 2 )
      goto LABEL_474;
    gameObject = (__int64)this->fields.limitCountIcon;
    if ( !gameObject )
      goto LABEL_966;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)gameObject,
      item->fields.currentLimitCnt,
      item->fields.maxLimitCnt,
      0LL);
    if ( item->fields.isParty )
    {
      gameObject = (__int64)this->fields.partyIcon;
      if ( !gameObject )
        goto LABEL_966;
      FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
    }
    v177 = !item->fields.isLock;
    if ( !item->fields.isSwapLock )
      v177 = item->fields.isLock;
    if ( v177 )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_966;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_966;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    }
    if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, v176) )
    {
      v178 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v178, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_966;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_966;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_966;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_966;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        isHeroineSvt = item->fields.isHeroineSvt;
        v180 = *p_maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !isHeroineSvt )
          goto LABEL_430;
LABEL_454:
        v181 = &StringLiteral_9215/*"NONSELECT_MATERIAL"*/;
        goto LABEL_455;
      }
      goto LABEL_470;
    }
    if ( !item->fields.isLvMax || !item->fields.isLimitUpItemNum )
    {
      v219 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v219, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_966;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_966;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      }
      goto LABEL_470;
    }
    isSealCombineLimit = item->fields.isSealCombineLimit;
    v190 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v187 = UnityEngine_Object__op_Inequality(v190, 0LL, 0LL);
    if ( !isSealCombineLimit )
    {
      if ( v187 )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_966;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_966;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_966;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_966;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = (__int64)*p_maskLabel;
        if ( !*p_maskLabel )
          goto LABEL_966;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        gameObject = (__int64)*p_statusTxtLb;
        if ( !*p_statusTxtLb )
          goto LABEL_966;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_966;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v180 = *p_statusTxtLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v181 = &StringLiteral_8710/*"MSG_ABLED_LIMITUP"*/;
        goto LABEL_455;
      }
      goto LABEL_470;
    }
LABEL_462:
    if ( !v187 )
      goto LABEL_470;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)*p_maskLabel;
    if ( !*p_maskLabel )
      goto LABEL_966;
    v188 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_469;
  }
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_966;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0LL);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_966;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  v183 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v183 = item->fields.isLock;
  if ( v183 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v184 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, v182);
  v185 = (UnityEngine_Object_o *)this->fields.baseButton;
  v186 = v184;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v187 = UnityEngine_Object__op_Inequality(v185, 0LL, 0LL);
  if ( !v186 )
    goto LABEL_462;
  if ( !v187 )
    goto LABEL_470;
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_966;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
    gameObject,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_966;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
    gameObject,
    0LL,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  gameObject = (__int64)*p_maskSprite;
  if ( !*p_maskSprite )
    goto LABEL_966;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_966;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  if ( item->fields.isHeroineSvt || item->fields.isEventJoin || item->fields.isIgnoreCombineLimitSpecial )
  {
    v180 = *p_maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    goto LABEL_454;
  }
  if ( item->fields.isLimitCntMax )
  {
    v180 = *p_maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
LABEL_430:
    v181 = &StringLiteral_9214/*"NONSELECT_LIMITUP_BASE"*/;
LABEL_455:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v181, 0LL);
    if ( !v180 )
      goto LABEL_966;
    v188 = (System_String_o *)gameObject;
    gameObject = (__int64)v180;
LABEL_469:
    UILabel__set_text((UILabel_o *)gameObject, v188, 0LL);
    goto LABEL_470;
  }
  if ( item->fields.isSealCombineLimit )
  {
    v180 = *p_maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v181 = &StringLiteral_11435/*"SEAL_COMBINE_LIMIT_THIRD"*/;
    goto LABEL_455;
  }
LABEL_470:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_474:
  v191 = item->fields.type;
  v314 = this;
  v311 = modeKind;
  v312 = &this->fields.maskLabel;
  v313 = &this->fields.statusTxtLb;
  if ( v191 != 3 )
    goto LABEL_558;
  CombineServantListViewItem__GetSkillInfo(item, &skillInfoList, v82);
  enableSkillUp = item->fields.enableSkillUp;
  v195 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v193, v194);
  System_Text_StringBuilder___ctor(v195, 0LL);
  v197 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_966;
  v198 = *(_QWORD *)&skillInfoList->max_length;
  if ( (int)v198 >= 1 )
  {
    v199 = 0LL;
    v200 = (unsigned int)(v198 - 1);
    v201 = (unsigned int)*(_QWORD *)&skillInfoList->max_length;
    while ( 1 )
    {
      if ( v199 >= v197->max_length )
        goto LABEL_967;
      v202 = v197->m_Items[v199];
      if ( v202 )
      {
        lv = v202->fields.lv;
        p_lv = &v202->fields.lv;
        v205 = *(p_lv - 1);
        if ( lv > 0 )
        {
          gameObject = (__int64)System_Int32__ToString((int32_t)p_lv, 0LL);
          goto LABEL_486;
        }
      }
      else
      {
        v205 = -1;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9221/*"NONSKILL_TXT"*/, 0LL);
LABEL_486:
      v206 = (Il2CppObject *)gameObject;
      if ( enableSkillUp )
      {
        v207 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v205,
                 (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v200 == v199 )
        {
          v208 = (System_String_o **)&StringLiteral_12095/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v207 )
            v208 = (System_String_o **)&StringLiteral_12097/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v208 = (System_String_o **)&StringLiteral_12096/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v207 )
            v208 = (System_String_o **)&StringLiteral_12098/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get(*v208, 0LL);
        if ( v195 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v195, (System_String_o *)gameObject, v206, 0LL);
          if ( v201 == ++v199 )
            goto LABEL_500;
          v197 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_966;
    }
  }
  if ( !v195 )
    goto LABEL_966;
LABEL_500:
  this = v314;
  skillLvLabel = v314->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v195->klass->vtable._3_ToString.method)(
                 v195,
                 v195->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !skillLvLabel )
    goto LABEL_966;
  UILabel__set_text(skillLvLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)v314->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_966;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  p_maskLabel = v312;
  p_statusTxtLb = v313;
  if ( !gameObject )
    goto LABEL_966;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  modeKind = v311;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)v314->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_966;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  v211 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v211 = item->fields.isLock;
  if ( v211 )
  {
    gameObject = (__int64)v314->fields.lockImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, v210) )
  {
    v212 = (UnityEngine_Object_o *)v314->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v212, 0LL, 0LL) )
      goto LABEL_553;
    gameObject = (__int64)v314->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)v314->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v213 = *v312;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9219/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v213 )
      goto LABEL_966;
    UILabel__set_text(v213, (System_String_o *)gameObject, 0LL);
    if ( !item->fields.isHeroineSvt )
      goto LABEL_553;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_37376848(126, 0LL) )
      goto LABEL_553;
    v214 = *v312;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v215 = &StringLiteral_11441/*"SELECT_CANNOT"*/;
    goto LABEL_541;
  }
  isSkillUpItemNum = item->fields.isSkillUpItemNum;
  v217 = (UnityEngine_Object_o *)v314->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v218 = UnityEngine_Object__op_Inequality(v217, 0LL, 0LL);
  if ( !isSkillUpItemNum )
  {
    if ( v218 )
    {
      gameObject = (__int64)v314->fields.baseButton;
      if ( !gameObject )
        goto LABEL_966;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)v314->fields.baseButton;
      if ( !gameObject )
        goto LABEL_966;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_553;
  }
  if ( v218 )
  {
    gameObject = (__int64)v314->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)v314->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*v313;
    if ( !*v313 )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v214 = *v313;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v215 = &StringLiteral_8711/*"MSG_ABLED_SKILLUP"*/;
LABEL_541:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v215, 0LL);
    if ( !v214 )
      goto LABEL_966;
    UILabel__set_text(v214, (System_String_o *)gameObject, 0LL);
  }
LABEL_553:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)v314->fields.removeImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v191 = item->fields.type;
LABEL_558:
  if ( v191 != 11 )
    goto LABEL_655;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(item, switchInfoList);
  enableAppendSkillUp = item->fields.enableAppendSkillUp;
  v222 = AppendSkillData;
  v225 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v223, v224);
  System_Text_StringBuilder___ctor(v225, 0LL);
  if ( !v222 )
    goto LABEL_966;
  svtUseSkillIdList = v222->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_966;
  v227 = *(_QWORD *)&svtUseSkillIdList->max_length;
  if ( (int)v227 >= 1 )
  {
    v228 = 0LL;
    v229 = (unsigned int)(v227 - 1);
    v230 = (unsigned int)*(_QWORD *)&svtUseSkillIdList->max_length;
    while ( v228 < svtUseSkillIdList->max_length )
    {
      svtSkillLvList = v222->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_966;
      if ( v228 >= svtSkillLvList->max_length )
        break;
      v232 = (__int64)svtSkillLvList + 4 * v228;
      v233 = svtUseSkillIdList->m_Items[v228 + 1];
      v235 = *(_DWORD *)(v232 + 32);
      v234 = v232 + 32;
      if ( v235 <= 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9221/*"NONSKILL_TXT"*/, 0LL);
      }
      else
      {
        gameObject = (__int64)System_Int32__ToString(v234, 0LL);
      }
      v236 = (Il2CppObject *)gameObject;
      if ( enableAppendSkillUp )
      {
        v237 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v233,
                 (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v228 == v229 )
        {
          v238 = (System_String_o **)&StringLiteral_12095/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v237 )
            v238 = (System_String_o **)&StringLiteral_12097/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v238 = (System_String_o **)&StringLiteral_12096/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v237 )
            v238 = (System_String_o **)&StringLiteral_12098/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get(*v238, 0LL);
        if ( v225 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v225, (System_String_o *)gameObject, v236, 0LL);
          if ( ++v228 == v230 )
            goto LABEL_585;
          svtUseSkillIdList = v222->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_966;
    }
LABEL_967:
    sub_1B6432C(gameObject, v196);
  }
  if ( !v225 )
    goto LABEL_966;
LABEL_585:
  this = v314;
  v239 = v314->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v225->klass->vtable._3_ToString.method)(
                 v225,
                 v225->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v239 )
    goto LABEL_966;
  UILabel__set_text(v239, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)v314->fields.skillLvLabel;
  p_statusTxtLb = v313;
  p_maskLabel = v312;
  if ( !gameObject )
    goto LABEL_966;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_966;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  modeKind = v311;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)v314->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_966;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  v241 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v241 = item->fields.isLock;
  if ( v241 )
  {
    gameObject = (__int64)v314->fields.lockImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  gameObject = CombineServantListViewItem__get_IsCanNotBaseSelect(item, v240);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v242 = *v312;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9219/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v242 )
      goto LABEL_966;
    UILabel__set_text(v242, (System_String_o *)gameObject, 0LL);
    if ( item->fields.isEventJoin )
    {
      v243 = *v312;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10259/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v243 )
        goto LABEL_966;
      UILabel__set_text(v243, (System_String_o *)gameObject, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_625;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_37376848(126, 0LL) )
      goto LABEL_625;
    v244 = *v312;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v245 = &StringLiteral_11441/*"SELECT_CANNOT"*/;
    goto LABEL_623;
  }
  if ( !enableAppendSkillUp )
    goto LABEL_966;
  if ( enableAppendSkillUp->fields._size > 0 || item->fields.isAppendSkillOpenItemNum )
  {
    gameObject = (__int64)*v313;
    if ( !*v313 )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v244 = *v313;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v245 = &StringLiteral_8711/*"MSG_ABLED_SKILLUP"*/;
LABEL_623:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v245, 0LL);
    if ( !v244 )
      goto LABEL_966;
    UILabel__set_text(v244, (System_String_o *)gameObject, 0LL);
  }
LABEL_625:
  v246 = (UnityEngine_Object_o *)v314->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v246, 0LL, 0LL) )
  {
    gameObject = (__int64)v314->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)v314->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  coinInfo = (UnityEngine_Object_o *)v314->fields.coinInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(coinInfo, 0LL, 0LL) )
  {
    switchInfoComp = (UnityEngine_Object_o *)v314->fields.switchInfoComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchInfoComp, 0LL, 0LL) )
    {
      switchInfoList = (MethodInfo *)v314->fields.switchInfoList;
      if ( switchInfoList )
      {
        gameObject = (__int64)v314->fields.switchInfoComp;
        if ( !gameObject )
          goto LABEL_966;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)gameObject, (UIWidget_array *)switchInfoList, 0LL);
        gameObject = (__int64)v314->fields.coinInfo;
        if ( !gameObject )
          goto LABEL_966;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        coinNumLabel = v314->fields.coinNumLabel;
        gameObject = CombineServantListViewItem__get_SkillOpenItemNum(item, v250);
        if ( (gameObject & 0x80000000) != 0 )
        {
          v253 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(item, v251);
          v252 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum);
          gameObject = (__int64)System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v252, 0LL);
          v253 = (System_String_o *)gameObject;
        }
        if ( !coinNumLabel )
          goto LABEL_966;
        UILabel__set_text(coinNumLabel, v253, 0LL);
        gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, v254);
        coinIcon = v314->fields.coinIcon;
        if ( (int)gameObject < 1 )
        {
          if ( !coinIcon )
            goto LABEL_966;
          gameObject = (__int64)coinIcon->fields.iconSprite;
          if ( !gameObject )
            goto LABEL_966;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_966;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, v255);
          if ( !coinIcon )
            goto LABEL_966;
          ItemIconComponent__SetItem(coinIcon, gameObject, -1, 0LL);
        }
      }
    }
  }
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)v314->fields.removeImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_655:
  v257 = item->fields.type;
  if ( v257 != 4 )
    goto LABEL_704;
  gameObject = (__int64)this->fields.npIconLabel;
  if ( !gameObject )
    goto LABEL_966;
  v258 = SHIDWORD(v318.invoker_method) <= 0 ? -1 : LODWORD(v318.invoker_method);
  UIIconLabel__Set_37921148((UIIconLabel_o *)gameObject, 33, v258, SHIDWORD(v318.methodPointer), 0, 0LL, 0, 0, 0, 0LL);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_966;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_966;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  v260 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v260 = item->fields.isLock;
  if ( v260 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, v259) )
  {
    v261 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v261, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_966;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_966;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_966;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_966;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v262 = item->fields.isHeroineSvt;
      v263 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v262 )
        v264 = &StringLiteral_9215/*"NONSELECT_MATERIAL"*/;
      else
        v264 = &StringLiteral_9218/*"NONSELECT_NPUP_BASE"*/;
      v266 = (System_String_o *)*v264;
LABEL_697:
      gameObject = (__int64)LocalizationManager__Get(v266, 0LL);
      if ( !v263 )
        goto LABEL_966;
      UILabel__set_text(v263, (System_String_o *)gameObject, 0LL);
    }
  }
  else
  {
    if ( !item->fields.isSameSvt && !item->fields.isBaseSvt )
    {
      v278 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v278, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_966;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_966;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      }
      goto LABEL_699;
    }
    v265 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v265, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_966;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_966;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      if ( item->fields.isSameSvt )
      {
        gameObject = (__int64)*p_statusTxtLb;
        if ( !*p_statusTxtLb )
          goto LABEL_966;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_966;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v263 = *p_statusTxtLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v266 = (System_String_o *)StringLiteral_8713/*"MSG_ABLED_TDUP"*/;
        goto LABEL_697;
      }
    }
  }
LABEL_699:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v257 = item->fields.type;
LABEL_704:
  if ( v257 != 6 )
    goto LABEL_782;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_966;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0LL);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_966;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  v268 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v268 = item->fields.isLock;
  if ( v268 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, v267) )
  {
    v269 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v269, 0LL, 0LL) )
      goto LABEL_778;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( item->fields.isHeroineSvt )
    {
      v270 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v271 = &StringLiteral_9215/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      isEventJoin = item->fields.isEventJoin;
      v270 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isEventJoin )
        v271 = &StringLiteral_11465/*"SELECT_SERVANT_EVENT_JOIN"*/;
      else
        v271 = &StringLiteral_9262/*"NO_SELECT_LVEXCEED"*/;
    }
    v275 = (System_String_o *)*v271;
    goto LABEL_776;
  }
  if ( !item->fields.isLvMax || !item->fields.isLimitCntMax )
  {
    v276 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v276, 0LL, 0LL) )
      goto LABEL_778;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
LABEL_748:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_778;
  }
  isLvExceedItemNum = item->fields.isLvExceedItemNum;
  v273 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v274 = UnityEngine_Object__op_Inequality(v273, 0LL, 0LL);
  if ( !isLvExceedItemNum )
  {
    if ( !v274 )
      goto LABEL_778;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    goto LABEL_748;
  }
  if ( !v274 )
    goto LABEL_778;
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_966;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
    gameObject,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_966;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
    gameObject,
    0LL,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  gameObject = (__int64)*p_maskSprite;
  if ( !*p_maskSprite )
    goto LABEL_966;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_966;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)*p_maskLabel;
  if ( !*p_maskLabel )
    goto LABEL_966;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)*p_statusTxtLb;
  if ( !*p_statusTxtLb )
    goto LABEL_966;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_966;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v270 = *p_statusTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v275 = (System_String_o *)StringLiteral_8710/*"MSG_ABLED_LIMITUP"*/;
LABEL_776:
  gameObject = (__int64)LocalizationManager__Get(v275, 0LL);
  if ( !v270 )
    goto LABEL_966;
  UILabel__set_text(v270, (System_String_o *)gameObject, 0LL);
LABEL_778:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_782:
  v279 = item->fields.type;
  if ( v279 != 10 && v279 != 7 )
    goto LABEL_847;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_966;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.subIconLabel;
  if ( !gameObject )
    goto LABEL_966;
  UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0LL);
  v280 = item->fields.type;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  gameObject = CombineServantListViewManager__GetSortKind(v280, 0LL);
  v281 = this->fields.servantFaceIcon;
  if ( !v281 )
    goto LABEL_966;
  if ( (_DWORD)gameObject == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *, __int64, Il2CppMethodPointer))v281->klass->vtable._4_ParameterChange.method)(
      this->fields.servantFaceIcon,
      1LL,
      v281->klass->vtable._5_UpdateAlpha.methodPtr);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_966;
    ServantFaceIconComponent__ResetIconLabelPos((ServantFaceIconComponent_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_966;
    ServantFaceIconComponent__AdjustIconLabelPos((ServantFaceIconComponent_o *)gameObject, 1.0, -1.0, 0LL);
  }
  else
  {
    ServantFaceIconComponent__ResetIconLabelPos(this->fields.servantFaceIcon, 0LL);
  }
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_966;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  v283 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v283 = item->fields.isLock;
  if ( v283 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v284 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, v282);
  v285 = (UnityEngine_Object_o *)this->fields.baseButton;
  v286 = v284;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v287 = UnityEngine_Object__op_Inequality(v285, 0LL, 0LL);
  if ( v286 )
  {
    if ( !v287 )
      goto LABEL_835;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( item->fields.type == 10 && item->fields.isCommandCardExceedMax )
    {
      v288 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9212/*"NONSEELECT_STATUSUP_MAX"*/, 0LL);
      if ( !v288 )
        goto LABEL_966;
      UILabel__set_text(v288, (System_String_o *)gameObject, 0LL);
    }
    if ( item->fields.isEventJoin )
    {
      v289 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11465/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v289 )
        goto LABEL_966;
      UILabel__set_text(v289, (System_String_o *)gameObject, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_835;
    v290 = *p_maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11441/*"SELECT_CANNOT"*/, 0LL);
    if ( !v290 )
      goto LABEL_966;
    v291 = (System_String_o *)gameObject;
    gameObject = (__int64)v290;
    goto LABEL_834;
  }
  if ( v287 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)*p_maskLabel;
    if ( !*p_maskLabel )
      goto LABEL_966;
    v291 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_834:
    UILabel__set_text((UILabel_o *)gameObject, v291, 0LL);
  }
LABEL_835:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v292 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v292, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v293 = this->fields.svtCommandCardList;
    gameObject = CombineServantListViewItem__get_UserSvtId(item, v294);
    if ( !v293 )
      goto LABEL_966;
    ServantCommandCardListComponent__Set(v293, gameObject, 1, 1, 0LL);
  }
  v279 = item->fields.type;
LABEL_847:
  if ( v279 != 8 )
    goto LABEL_906;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_966;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  v295 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v295 = item->fields.isLock;
  if ( v295 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList) )
  {
    v296 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v296, 0LL, 0LL) )
      goto LABEL_902;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( item->fields.isHeroineSvt )
    {
      v297 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v298 = &StringLiteral_9215/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      v304 = item->fields.isEventJoin;
      v297 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v304 )
        v298 = &StringLiteral_11465/*"SELECT_SERVANT_EVENT_JOIN"*/;
      else
        v298 = &StringLiteral_9261/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
    }
    v302 = (System_String_o *)*v298;
    goto LABEL_900;
  }
  if ( !item->fields.isFriendshipRankMax )
  {
    v303 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v303, 0LL, 0LL) )
      goto LABEL_902;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
LABEL_893:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_902;
  }
  isFriendshipExceedItemNum = item->fields.isFriendshipExceedItemNum;
  v300 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v301 = UnityEngine_Object__op_Inequality(v300, 0LL, 0LL);
  if ( !isFriendshipExceedItemNum )
  {
    if ( !v301 )
      goto LABEL_902;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    goto LABEL_893;
  }
  if ( !v301 )
    goto LABEL_902;
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_966;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
    gameObject,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_966;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
    gameObject,
    0LL,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  gameObject = (__int64)*p_maskSprite;
  if ( !*p_maskSprite )
    goto LABEL_966;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_966;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)*p_maskLabel;
  if ( !*p_maskLabel )
    goto LABEL_966;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)*p_statusTxtLb;
  if ( !*p_statusTxtLb )
    goto LABEL_966;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_966;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v297 = *p_statusTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v302 = (System_String_o *)StringLiteral_8709/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/;
LABEL_900:
  gameObject = (__int64)LocalizationManager__Get(v302, 0LL);
  if ( !v297 )
    goto LABEL_966;
  UILabel__set_text(v297, (System_String_o *)gameObject, 0LL);
LABEL_902:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_906:
  if ( (unsigned int)(modeKind - 1) > 1 )
  {
    if ( modeKind != 3 )
      return;
    if ( item->fields.isEventJoin )
    {
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_966;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_966;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v306 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11465/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v306 )
        goto LABEL_966;
      goto LABEL_943;
    }
    if ( !item->fields.isCanNotLock )
    {
      gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, switchInfoList);
      if ( !gameObject )
        goto LABEL_966;
      if ( !UserServantEntity__IsLeave((UserServantEntity_o *)gameObject, 0LL) )
      {
        gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, v307);
        if ( !gameObject )
          goto LABEL_966;
        if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)gameObject, 0LL) )
        {
          gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, v308);
          if ( !gameObject )
            goto LABEL_966;
          if ( !UserServantEntity__IsStatusUp((UserServantEntity_o *)gameObject, 0LL) )
          {
            gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, v309);
            if ( !gameObject )
              goto LABEL_966;
            if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)gameObject, 0LL) )
            {
              gameObject = (__int64)*p_maskSprite;
              if ( !*p_maskSprite )
                goto LABEL_966;
              gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_966;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
              gameObject = (__int64)*p_maskLabel;
              if ( !*p_maskLabel )
                goto LABEL_966;
              v310 = (System_String_o *)StringLiteral_1/*""*/;
              goto LABEL_944;
            }
          }
        }
      }
    }
    gameObject = (__int64)*p_maskSprite;
    if ( *p_maskSprite )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v306 = *p_maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8252/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
        if ( v306 )
        {
LABEL_943:
          v310 = (System_String_o *)gameObject;
          gameObject = (__int64)v306;
LABEL_944:
          UILabel__set_text((UILabel_o *)gameObject, v310, 0LL);
          gameObject = (__int64)*p_statusTxtLb;
          if ( !*p_statusTxtLb )
            goto LABEL_966;
LABEL_945:
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
LABEL_966:
    sub_1B64324(gameObject);
  }
  if ( !item->fields.isHeroineSvt )
    goto LABEL_911;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_37376848(126, 0LL) )
  {
LABEL_911:
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isCanNotLock, 0LL);
    if ( item->fields.isCanNotLock )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v305 = LocalizationManager__Get((System_String_o *)StringLiteral_8252/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
    }
    else
    {
      v305 = (System_String_o *)StringLiteral_1/*""*/;
    }
    gameObject = (__int64)*p_maskLabel;
    if ( !*p_maskLabel )
      goto LABEL_966;
    UILabel__set_text((UILabel_o *)gameObject, v305, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_966;
    goto LABEL_945;
  }
}


void __fastcall CombineServantListViewItemDraw__SetSelectDisp(
        CombineServantListViewItemDraw_o *this,
        CombineServantListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSelect; // x21
  DragSelectComponent_o *v6; // x0
  int32_t dragSelectNum; // w2
  int32_t selectNum; // w1

  if ( (byte_49FFDA4 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, item);
    byte_49FFDA4 = 1;
  }
  dragSelect = (UnityEngine_Object_o *)this->fields.dragSelect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(dragSelect, 0LL, 0LL) )
  {
    v6 = this->fields.dragSelect;
    if ( item )
    {
      if ( v6 )
      {
        dragSelectNum = item->fields.dragSelectNum;
        selectNum = item->fields.selectNum;
LABEL_11:
        DragSelectComponent__Set(v6, selectNum, dragSelectNum, 0LL);
        return;
      }
    }
    else if ( v6 )
    {
      selectNum = -1;
      dragSelectNum = -1;
      goto LABEL_11;
    }
    sub_1B64324(v6);
  }
}