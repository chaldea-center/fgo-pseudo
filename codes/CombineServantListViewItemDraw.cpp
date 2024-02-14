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
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1
  UILabel_o *v24; // x21
  LocalizationManager_c *v25; // x0
  UILabel_o *maskLabel; // x21
  UnityEngine_Object_o *v27; // x22
  int v28; // w22
  int32_t v29; // w8
  __int64 *v30; // x8
  int32_t atkBase; // w8
  UILabel_o *v32; // x21
  UILabel_o *v33; // x21

  v4 = isSelectEnable;
  if ( (byte_421731A & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, item);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_9344/*"NONSELECT_UNDER_STATUS_MAX"*/, v8);
    sub_B0D8A4(&StringLiteral_9339/*"NONSELECT_MATERIAL"*/, v9);
    sub_B0D8A4(&StringLiteral_9342/*"NONSELECT_NPUP_BASE"*/, v10);
    sub_B0D8A4(&StringLiteral_9340/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v11);
    byte_421731A = 1;
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
      goto LABEL_107;
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
  if ( !v17 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      servantEntity = (ServantEntity_o *)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_107;
      ((void (__fastcall *)(ServantEntity_o *, __int64, void *))servantEntity->klass->vtable._5_CreatePrimaryKey.method)(
        servantEntity,
        1LL,
        servantEntity->klass[1]._1.image);
      servantEntity = (ServantEntity_o *)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_107;
      ((void (__fastcall *)(ServantEntity_o *, _QWORD, __int64, void *))servantEntity->klass[1]._1.events)(
        servantEntity,
        0LL,
        1LL,
        servantEntity->klass[1]._1.properties);
      servantEntity = (ServantEntity_o *)this->fields.maskSprite;
      if ( !servantEntity )
        goto LABEL_107;
      servantEntity = (ServantEntity_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)servantEntity,
                                           0LL);
      if ( !servantEntity )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
    }
    if ( !item )
      goto LABEL_93;
    v27 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( item->fields.isMaxSelect )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
      {
        servantEntity = (ServantEntity_o *)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_107;
        ((void (__fastcall *)(ServantEntity_o *, __int64, void *))servantEntity->klass->vtable._5_CreatePrimaryKey.method)(
          servantEntity,
          1LL,
          servantEntity->klass[1]._1.image);
        servantEntity = (ServantEntity_o *)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_107;
        v28 = 1;
        ((void (__fastcall *)(ServantEntity_o *, _QWORD, __int64, void *))servantEntity->klass[1]._1.events)(
          servantEntity,
          0LL,
          1LL,
          servantEntity->klass[1]._1.properties);
LABEL_56:
        v29 = item->fields.type;
        if ( v29 == 5 )
        {
          if ( !(v28 & 1 | item->fields.isMaxNextLv) )
            goto LABEL_93;
        }
        else if ( v29 == 1 )
        {
          if ( ((v20 & ~(v19 || v4) | v28) & 1) == 0 )
            goto LABEL_93;
        }
        else if ( !v28 )
        {
          goto LABEL_93;
        }
        servantEntity = (ServantEntity_o *)this->fields.maskSprite;
        if ( !servantEntity )
          goto LABEL_107;
        servantEntity = (ServantEntity_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)servantEntity,
                                             0LL);
        if ( !servantEntity )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
        maskLabel = this->fields.maskLabel;
        v25 = LocalizationManager_TypeInfo;
        if ( item->fields.type == 5 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
          {
LABEL_69:
            v30 = &StringLiteral_9342/*"NONSELECT_NPUP_BASE"*/;
            goto LABEL_91;
          }
LABEL_67:
          if ( !v25->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v25);
          goto LABEL_69;
        }
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
          goto LABEL_90;
        goto LABEL_88;
      }
    }
    else
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
      {
        servantEntity = (ServantEntity_o *)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_107;
        ((void (__fastcall *)(ServantEntity_o *, __int64, void *))servantEntity->klass->vtable._5_CreatePrimaryKey.method)(
          servantEntity,
          1LL,
          servantEntity->klass[1]._1.image);
        servantEntity = (ServantEntity_o *)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_107;
        ((void (__fastcall *)(ServantEntity_o *, _QWORD, __int64, void *))servantEntity->klass[1]._1.events)(
          servantEntity,
          0LL,
          1LL,
          servantEntity->klass[1]._1.properties);
      }
    }
    v28 = 0;
    goto LABEL_56;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    goto LABEL_93;
  servantEntity = (ServantEntity_o *)this->fields.baseButton;
  if ( !servantEntity )
    goto LABEL_107;
  ((void (__fastcall *)(ServantEntity_o *, __int64, void *))servantEntity->klass->vtable._5_CreatePrimaryKey.method)(
    servantEntity,
    1LL,
    servantEntity->klass[1]._1.image);
  servantEntity = (ServantEntity_o *)this->fields.baseButton;
  if ( !servantEntity )
    goto LABEL_107;
  ((void (__fastcall *)(ServantEntity_o *, _QWORD, __int64, void *))servantEntity->klass[1]._1.events)(
    servantEntity,
    0LL,
    1LL,
    servantEntity->klass[1]._1.properties);
  servantEntity = (ServantEntity_o *)this->fields.maskSprite;
  if ( !servantEntity )
    goto LABEL_107;
  servantEntity = (ServantEntity_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)servantEntity,
                                       0LL);
  if ( !servantEntity )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  if ( !item )
    goto LABEL_107;
  if ( !item->fields.isMaxNextLv )
  {
    if ( !item->fields.isStatusUpSvt )
      goto LABEL_93;
    if ( item->fields.isCanStUp )
    {
      atkBase = item->fields.atkBase;
      if ( item->fields.rarity == 4 )
      {
        if ( atkBase >= 1 && item->fields.isNotSelectSecondStatusUpAtk )
        {
          v32 = this->fields.maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9344/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v32 )
            goto LABEL_107;
          UILabel__set_text(v32, (System_String_o *)servantEntity, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectSecondStatusUpHp )
          goto LABEL_93;
      }
      else
      {
        if ( atkBase >= 1 && item->fields.isNotSelectStatusUpAtk )
        {
          v33 = this->fields.maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9344/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v33 )
            goto LABEL_107;
          UILabel__set_text(v33, (System_String_o *)servantEntity, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectStatusUpHp )
          goto LABEL_93;
      }
      maskLabel = this->fields.maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v30 = &StringLiteral_9344/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_91:
      servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)*v30, 0LL);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)servantEntity, 0LL);
        goto LABEL_93;
      }
LABEL_107:
      sub_B0D97C(servantEntity);
    }
    maskLabel = this->fields.maskLabel;
    v25 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
    {
LABEL_90:
      v30 = &StringLiteral_9339/*"NONSELECT_MATERIAL"*/;
      goto LABEL_91;
    }
LABEL_88:
    if ( !v25->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v25);
    goto LABEL_90;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, v23) )
  {
    v24 = this->fields.maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9340/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
    if ( !v24 )
      goto LABEL_107;
    UILabel__set_text(v24, (System_String_o *)servantEntity, 0LL);
    if ( item->fields.type == 5 )
    {
      v25 = LocalizationManager_TypeInfo;
      maskLabel = this->fields.maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_69;
      goto LABEL_67;
    }
  }
LABEL_93:
  CombineServantListViewItemDraw__SetSelectDisp(this, item, v22);
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
  UnityEngine_Object_o *svtCommandCardList; // x23
  const MethodInfo *v63; // x1
  UILabel_o *gameObject; // x0
  int32_t type; // w19
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  IconLabelInfo_o *iconLabelInfo1; // x2
  UIIconLabel_o *subIconLabel; // x23
  int32_t rarity; // w24
  const MethodInfo *v70; // x1
  const MethodInfo *v71; // x1
  const MethodInfo *v72; // x1
  int32_t m12_low; // w25
  const MethodInfo *v74; // x4
  UILabel_o **p_statusTxtLb; // x20
  struct UISprite_o **p_maskSprite; // x28
  struct UILabel_o **p_maskLabel; // x25
  UnityEngine_Object_o *pushImg; // x23
  UnityEngine_Object_o *materialTdSprite; // x23
  MethodInfo *switchInfoList; // x1
  const MethodInfo *v81; // x2
  UISprite_o *v82; // x23
  const MethodInfo *v83; // x1
  int32_t v84; // w23
  int32_t v85; // w8
  const MethodInfo *v86; // x1
  bool CanNotBaseSelect; // w0
  UnityEngine_Object_o *v88; // x22
  UILabel_o *v89; // x22
  __int64 *v90; // x8
  int32_t v91; // w2
  const MethodInfo *v92; // x2
  UserServantEntity_o *userSvtEntity; // x0
  char v94; // w19
  UILabel_o *v95; // x23
  UILabel_o *v96; // x23
  UILabel_o *v97; // x23
  UILabel_o *v98; // x23
  UILabel_o *v99; // x23
  UILabel_o *v100; // x23
  UILabel_o *v101; // x23
  UILabel_o *v102; // x23
  UILabel_o *v103; // x23
  __int64 *v104; // x8
  __int64 v105; // x1
  __int64 v106; // x2
  UILabel_o *v107; // x22
  System_String_o *v108; // x23
  float v109; // s0
  Il2CppObject *v110; // x0
  UILabel_o *v111; // x23
  const MethodInfo *v112; // x1
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x23
  int32_t v115; // w8
  UILabel_o *v116; // x22
  UILabel_o *v117; // x22
  UILabel_o *v118; // x22
  UILabel_o *v119; // x22
  __int64 *v120; // x8
  __int64 servantEntity; // x0
  UnityEngine_Object_o *v122; // x23
  int v123; // w19
  UILabel_o *v124; // x22
  __int64 *v125; // x8
  UILabel_o *v126; // x22
  UILabel_o *v127; // x23
  UILabel_o *v128; // x22
  UILabel_o *v129; // x22
  int32_t v130; // w8
  System_String_o *v131; // x1
  UILabel_o *fortificationAppointmentLabel; // x22
  float v133; // s0
  float v134; // s2
  float fortificationInfoRootObjOffsetY; // s10
  float v136; // s8
  float v137; // s9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v138; // x22
  System_String_o *v139; // x23
  float v140; // s0
  Il2CppObject *v141; // x0
  System_String_o *v142; // x0
  const MethodInfo *v143; // x1
  UnityEngine_Object_o *v144; // x22
  UILabel_o *v145; // x22
  LocalizationManager_c *v146; // x0
  const MethodInfo *v147; // x1
  bool v148; // w0
  UnityEngine_Object_o *v149; // x22
  __int64 *v150; // x8
  UnityEngine_Object_c *v151; // x0
  System_String_o *v152; // x1
  UnityEngine_Object_o *v153; // x22
  int32_t v154; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  __int64 v156; // x1
  __int64 v157; // x2
  System_Text_StringBuilder_o *v158; // x22
  SkillInfo_array *v159; // x8
  __int64 v160; // x9
  unsigned __int64 v161; // x26
  __int64 v162; // x27
  signed __int64 v163; // x20
  SkillInfo_o *v164; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v167; // w25
  Il2CppObject *v168; // x24
  bool v169; // w0
  __int64 *v170; // x10
  UILabel_o *skillLvLabel; // x23
  const MethodInfo *v172; // x1
  UnityEngine_Object_o *v173; // x22
  UILabel_o *v174; // x22
  UILabel_o *v175; // x22
  __int64 *v176; // x8
  UnityEngine_Object_o *v177; // x22
  SvtUseSkillData_o *AppendSkillData; // x0
  struct System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v180; // x24
  __int64 v181; // x1
  __int64 v182; // x2
  System_Text_StringBuilder_o *v183; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v185; // x9
  unsigned __int64 v186; // x27
  __int64 v187; // x20
  signed __int64 v188; // x28
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v190; // x0
  int32_t v191; // w26
  int32_t v192; // w0
  int v193; // t1
  Il2CppObject *v194; // x25
  bool v195; // w0
  __int64 *v196; // x10
  UILabel_o *v197; // x24
  const MethodInfo *v198; // x1
  UILabel_o *v199; // x22
  UILabel_o *v200; // x22
  UILabel_o *v201; // x22
  __int64 *v202; // x8
  UnityEngine_Object_o *v203; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  const MethodInfo *v207; // x1
  const MethodInfo *v208; // x1
  Il2CppObject *v209; // x0
  System_String_o *v210; // x1
  const MethodInfo *v211; // x1
  const MethodInfo *v212; // x1
  ItemIconComponent_o *coinIcon; // x22
  int32_t v214; // w8
  int32_t v215; // w2
  const MethodInfo *v216; // x1
  UnityEngine_Object_o *v217; // x22
  UILabel_o *v218; // x22
  __int64 *v219; // x8
  UnityEngine_Object_o *v220; // x22
  const MethodInfo *v221; // x1
  UnityEngine_Object_o *v222; // x22
  UILabel_o *v223; // x22
  __int64 *v224; // x8
  UnityEngine_Object_o *v225; // x22
  UnityEngine_Object_o *v226; // x22
  UnityEngine_Object_o *v227; // x22
  int32_t v228; // w8
  const MethodInfo *v229; // x1
  int32_t v230; // w22
  struct ServantFaceIconComponent_o *v231; // x8
  const MethodInfo *v232; // x1
  bool v233; // w0
  UnityEngine_Object_o *v234; // x22
  UILabel_o *v235; // x22
  UILabel_o *v236; // x22
  struct UILabel_o *v237; // x22
  System_String_o *v238; // x1
  UnityEngine_Object_o *v239; // x22
  ServantCommandCardListComponent_o *v240; // x22
  const MethodInfo *v241; // x1
  UnityEngine_Object_o *v242; // x22
  UILabel_o *v243; // x22
  __int64 *v244; // x8
  UnityEngine_Object_o *v245; // x22
  UnityEngine_Object_o *v246; // x22
  System_String_o *v247; // x1
  struct UILabel_o *v248; // x19
  const MethodInfo *v249; // x1
  const MethodInfo *v250; // x1
  const MethodInfo *v251; // x1
  System_String_o *v252; // x1
  __int64 v253; // x0
  struct UISprite_o **v254; // [xsp+18h] [xbp-B8h]
  struct UILabel_o **v255; // [xsp+20h] [xbp-B0h]
  struct UILabel_o **v256; // [xsp+28h] [xbp-A8h]
  CombineServantListViewItemDraw_o *v257; // [xsp+30h] [xbp-A0h]
  int32_t v258; // [xsp+3Ch] [xbp-94h]
  int32_t SkillOpenItemNum; // [xsp+4Ch] [xbp-84h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-80h] BYREF
  MethodInfo v261; // [xsp+58h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v262; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v263; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4217319 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&CombineServantListViewManager_TypeInfo, v11);
    sub_B0D8A4(&int_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v18);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v19);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v20);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v21);
    sub_B0D8A4(&StringLiteral_12294/*"SKILL_LVDISP_TXT"*/, v22);
    sub_B0D8A4(&StringLiteral_10411/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, v23);
    sub_B0D8A4(&StringLiteral_9344/*"NONSELECT_UNDER_STATUS_MAX"*/, v24);
    sub_B0D8A4(&StringLiteral_6430/*"FORTIFICATION_APPOINTMENT"*/, v25);
    sub_B0D8A4(&StringLiteral_3168/*"COMBINE_CAN_STATUS_UP_INFO"*/, v26);
    sub_B0D8A4(&StringLiteral_8855/*"MSG_CAMPAIGN_COMBINE_EXP"*/, v27);
    sub_B0D8A4(&StringLiteral_12292/*"SKILL_LVDISP_ENABLE_TXT"*/, v28);
    sub_B0D8A4(&StringLiteral_9339/*"NONSELECT_MATERIAL"*/, v29);
    sub_B0D8A4(&StringLiteral_21899/*"ribbon_noblephantasmup_01"*/, v30);
    sub_B0D8A4(&StringLiteral_9338/*"NONSELECT_LIMITUP_BASE"*/, v31);
    sub_B0D8A4(&StringLiteral_10230/*"PARTY_MEMBER_TXT"*/, v32);
    sub_B0D8A4(&StringLiteral_9342/*"NONSELECT_NPUP_BASE"*/, v33);
    sub_B0D8A4(&StringLiteral_12540/*"SUPPORT_MEMBER"*/, v34);
    sub_B0D8A4(&StringLiteral_8851/*"MSG_ABLED_LIMITUP"*/, v35);
    sub_B0D8A4(&StringLiteral_11669/*"SELECT_PUSH"*/, v36);
    sub_B0D8A4(&StringLiteral_11647/*"SELECT_CANNOT"*/, v37);
    sub_B0D8A4(&StringLiteral_9392/*"NPUP_BASE"*/, v38);
    sub_B0D8A4(&StringLiteral_12291/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/, v39);
    sub_B0D8A4(&StringLiteral_11670/*"SELECT_SERVANT_EVENT_JOIN"*/, v40);
    sub_B0D8A4(&StringLiteral_9382/*"NO_SELECT_FRIENDSHIP_EXCEED"*/, v41);
    sub_B0D8A4(&StringLiteral_11576/*"SAME_SERVANT"*/, v42);
    sub_B0D8A4(&StringLiteral_8850/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, v43);
    sub_B0D8A4(&StringLiteral_9340/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v44);
    sub_B0D8A4(&StringLiteral_23567/*"{0:#,0}"*/, v45);
    sub_B0D8A4(&StringLiteral_12293/*"SKILL_LVDISP_SINGLE_TXT"*/, v46);
    sub_B0D8A4(&StringLiteral_8852/*"MSG_ABLED_SKILLUP"*/, v47);
    sub_B0D8A4(&StringLiteral_9341/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, v48);
    sub_B0D8A4(&StringLiteral_9345/*"NONSKILL_TXT"*/, v49);
    sub_B0D8A4(&StringLiteral_8452/*"LOCKMODE_SELECTED_SERVANT"*/, v50);
    sub_B0D8A4(&StringLiteral_6346/*"FAVORITE_SERVANT"*/, v51);
    sub_B0D8A4(&StringLiteral_2993/*"CHOICE_SERVANT"*/, v52);
    sub_B0D8A4(&StringLiteral_8854/*"MSG_ABLED_TDUP"*/, v53);
    sub_B0D8A4(&StringLiteral_11642/*"SEAL_COMBINE_LIMIT_THIRD"*/, v54);
    sub_B0D8A4(&StringLiteral_9337/*"NONSELECT_BASE_ALLMAX"*/, v55);
    sub_B0D8A4(&StringLiteral_9383/*"NO_SELECT_LVEXCEED"*/, v56);
    sub_B0D8A4(&StringLiteral_1/*""*/, v57);
    sub_B0D8A4(&StringLiteral_9343/*"NONSELECT_SKILLUP_BASE"*/, v58);
    sub_B0D8A4(&StringLiteral_11668/*"SELECT_PROTECTED_EVENT_SVT"*/, v59);
    sub_B0D8A4(&StringLiteral_8453/*"LOCK_SERVANT"*/, v60);
    sub_B0D8A4(&StringLiteral_9336/*"NONSEELECT_STATUSUP_MAX"*/, v61);
    byte_4217319 = 1;
  }
  v261.name = 0LL;
  skillInfoList = 0LL;
  v261.methodPointer = 0LL;
  if ( !item || !mode )
    return;
  svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Implicit(svtCommandCardList, 0LL) )
  {
    gameObject = (UILabel_o *)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1055;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1055;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  type = item->fields.type;
  servantFaceIcon = this->fields.servantFaceIcon;
  gameObject = (UILabel_o *)CombineServantListViewItem__get_UserSvtEntity(item, v63);
  iconLabelInfo1 = item->fields.iconLabelInfo1;
  if ( type )
  {
    if ( !servantFaceIcon )
      goto LABEL_1055;
    ServantFaceIconComponent__Set_29552540(
      servantFaceIcon,
      (UserServantEntity_o *)gameObject,
      iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
    subIconLabel = this->fields.subIconLabel;
    rarity = item->fields.rarity;
    gameObject = (UILabel_o *)CombineServantListViewItem__get_UserSvtEntity(item, v70);
    if ( !gameObject )
      goto LABEL_1055;
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_1055;
    ServantFaceIconComponent__Set_29552540(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0LL, 0LL);
    gameObject = (UILabel_o *)item->fields.iconLabelInfo2;
    if ( !gameObject )
      goto LABEL_1055;
    gameObject = (UILabel_o *)IconLabelInfo__IsClear((IconLabelInfo_o *)gameObject, 0LL);
    subIconLabel = this->fields.subIconLabel;
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      if ( !subIconLabel )
        goto LABEL_1055;
      UIIconLabel__Set(this->fields.subIconLabel, item->fields.iconLabelInfo2, 0LL);
      goto LABEL_23;
    }
    rarity = item->fields.rarity;
    gameObject = (UILabel_o *)CombineServantListViewItem__get_UserSvtEntity(item, v72);
    if ( !gameObject )
      goto LABEL_1055;
  }
  m12_low = LODWORD(gameObject->fields.mLocalToPanel.fields.m12);
  gameObject = (UILabel_o *)CombineServantListViewItem__get_UserSvtEntity(item, v71);
  if ( !gameObject || !subIconLabel )
    goto LABEL_1055;
  UIIconLabel__Set_41076120(
    subIconLabel,
    36,
    rarity,
    m12_low,
    0,
    0LL,
    0,
    0,
    LODWORD(gameObject->fields.mDrawRegion.fields.w),
    0LL);
LABEL_23:
  CombineServantListViewItem__GetNpInfo(
    item,
    (int32_t *)&v261.name + 1,
    (int32_t *)&v261.name,
    (int32_t *)&v261.methodPointer + 1,
    v74);
  gameObject = (UILabel_o *)this->fields.lockImg;
  if ( !gameObject )
    goto LABEL_1055;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_statusTxtLb = &this->fields.statusTxtLb;
  gameObject = this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1055;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_maskSprite = &this->fields.maskSprite;
  gameObject = (UILabel_o *)this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_1055;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_maskLabel = &this->fields.maskLabel;
  gameObject = this->fields.maskLabel;
  if ( !gameObject )
    goto LABEL_1055;
  UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1055;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (UILabel_o *)this->fields.partyIcon;
  if ( !gameObject )
    goto LABEL_1055;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
  gameObject = (UILabel_o *)this->fields.removeImg;
  if ( !gameObject )
    goto LABEL_1055;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (UILabel_o *)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (UILabel_o *)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1055;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (UILabel_o *)this->fields.choiceImg;
  if ( !gameObject )
    goto LABEL_1055;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)gameObject,
    item->fields.isSwapChoice != item->fields.isChoice,
    0LL);
  gameObject = (UILabel_o *)this->fields.switchInfoComp;
  if ( !gameObject )
    goto LABEL_1055;
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)gameObject, 0LL);
  gameObject = (UILabel_o *)this->fields.fortificationRootObj;
  if ( !gameObject )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = this->fields.fortificationNameLabel;
  if ( !gameObject )
    goto LABEL_1055;
  UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = this->fields.fortificationDetailNameLabel;
  if ( !gameObject )
    goto LABEL_1055;
  UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = this->fields.fortificationAppointmentLabel;
  if ( !gameObject )
    goto LABEL_1055;
  UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pushImg, 0LL, 0LL) )
  {
    gameObject = (UILabel_o *)this->fields.pushImg;
    if ( !gameObject )
      goto LABEL_1055;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1055;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isPush, 0LL);
  }
  gameObject = (UILabel_o *)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_1055;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)gameObject, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (UILabel_o *)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_1055;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1055;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isMaterialTdSvt, 0LL);
    if ( item->fields.isMaterialTdSvt )
    {
      v82 = this->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v82, (System_String_o *)StringLiteral_21899/*"ribbon_noblephantasmup_01"*/, 0LL);
      v84 = item->fields.type;
      if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      }
      if ( CombineServantListViewManager__GetSortKind(v84, v83) == 1 )
      {
        gameObject = (UILabel_o *)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_1055;
        v262.fields.x = 0.65;
        v262.fields.y = 1.0;
        v262.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v262, 0LL);
      }
    }
  }
  v85 = item->fields.type;
  switch ( v85 )
  {
    case 5:
      gameObject = (UILabel_o *)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_1055;
      v91 = SHIDWORD(v261.name) <= 0 ? -1 : LODWORD(v261.name);
      UIIconLabel__Set_41076120(
        (UIIconLabel_o *)gameObject,
        33,
        v91,
        SHIDWORD(v261.methodPointer),
        0,
        0LL,
        0,
        0,
        0,
        0LL);
      gameObject = (UILabel_o *)this->fields.npLvInfo;
      if ( !gameObject )
        goto LABEL_1055;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      goto LABEL_105;
    case 1:
      gameObject = (UILabel_o *)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1055;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( userSvtEntity && UserServantEntity__IsProtectedEventServant(userSvtEntity, 0LL) && item->fields.type != 5 )
      {
        gameObject = (UILabel_o *)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1055;
        gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1055;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v127 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11668/*"SELECT_PROTECTED_EVENT_SVT"*/, 0LL);
        if ( !v127 )
          goto LABEL_1055;
        UILabel__set_text(v127, (System_String_o *)gameObject, 0LL);
        v94 = 1;
LABEL_106:
        if ( item->fields.isParty )
        {
          gameObject = (UILabel_o *)this->fields.partyIcon;
          if ( !gameObject )
            goto LABEL_1055;
          FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v95 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10230/*"PARTY_MEMBER_TXT"*/, 0LL);
          if ( !v95 )
            goto LABEL_1055;
          UILabel__set_text(v95, (System_String_o *)gameObject, 0LL);
          v94 = 1;
        }
        if ( item->fields.isFavorite )
        {
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v96 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6346/*"FAVORITE_SERVANT"*/, 0LL);
          if ( !v96 )
            goto LABEL_1055;
          UILabel__set_text(v96, (System_String_o *)gameObject, 0LL);
          v94 = 1;
        }
        if ( item->fields.isSwapLock != item->fields.isLock )
        {
          gameObject = (UILabel_o *)this->fields.lockImg;
          if ( !gameObject )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v97 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8453/*"LOCK_SERVANT"*/, 0LL);
          if ( !v97 )
            goto LABEL_1055;
          UILabel__set_text(v97, (System_String_o *)gameObject, 0LL);
          v94 = 1;
        }
        if ( item->fields.isSwapChoice != item->fields.isChoice )
        {
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v98 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2993/*"CHOICE_SERVANT"*/, 0LL);
          if ( !v98 )
            goto LABEL_1055;
          UILabel__set_text(v98, (System_String_o *)gameObject, 0LL);
          v94 = 1;
        }
        if ( item->fields.isLimitCntTarget )
        {
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v99 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11576/*"SAME_SERVANT"*/, 0LL);
          if ( !v99 )
            goto LABEL_1055;
          UILabel__set_text(v99, (System_String_o *)gameObject, 0LL);
          v94 = 1;
        }
        if ( item->fields.isHeroineSvt )
        {
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v100 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9339/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v100 )
            goto LABEL_1055;
          UILabel__set_text(v100, (System_String_o *)gameObject, 0LL);
          v94 = 1;
        }
        if ( item->fields.isStatusUpSvt && !item->fields.isCanStUp )
        {
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v101 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9339/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v101 )
            goto LABEL_1055;
          UILabel__set_text(v101, (System_String_o *)gameObject, 0LL);
          v94 = 1;
        }
        if ( item->fields.isEventJoin )
        {
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v102 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11670/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
          if ( !v102 )
            goto LABEL_1055;
          UILabel__set_text(v102, (System_String_o *)gameObject, 0LL);
          v94 = 1;
        }
        if ( item->fields.isUseSupport )
        {
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v103 = *p_maskLabel;
          if ( item->fields.isParty )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v104 = &StringLiteral_10230/*"PARTY_MEMBER_TXT"*/;
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v104 = &StringLiteral_12540/*"SUPPORT_MEMBER"*/;
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)*v104, 0LL);
          if ( !v103 )
            goto LABEL_1055;
          UILabel__set_text(v103, (System_String_o *)gameObject, 0LL);
          v94 = 1;
        }
        if ( item->fields.isPush )
        {
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v111 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11669/*"SELECT_PUSH"*/, 0LL);
          if ( !v111 )
            goto LABEL_1055;
          UILabel__set_text(v111, (System_String_o *)gameObject, 0LL);
          v94 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, item, v92);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(item, v112);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( CanNotSelect )
        {
          if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
            break;
          gameObject = (UILabel_o *)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1055;
          ((void (__fastcall *)(UILabel_o *, __int64, Il2CppMethodPointer))gameObject->klass->vtable._5_get_isAnchoredVertically.method)(
            gameObject,
            1LL,
            gameObject->klass->vtable._6_get_canBeAnchored.methodPtr);
          gameObject = (UILabel_o *)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1055;
          ((void (__fastcall *)(UILabel_o *, _QWORD, __int64, Il2CppMethodPointer))gameObject->klass->vtable._14_OnEnable.method)(
            gameObject,
            0LL,
            1LL,
            gameObject->klass->vtable._15_OnInit.methodPtr);
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          if ( item->fields.isMaxNextLv || item->fields.isBaseLvMax )
          {
            if ( item->fields.isCanStUp )
              goto LABEL_236;
            if ( CombineServantListViewItem__get_IsCanNotSelectMaterial(item, switchInfoList) )
              goto LABEL_343;
            v126 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9340/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
            if ( !v126 )
              goto LABEL_1055;
            UILabel__set_text(v126, (System_String_o *)gameObject, 0LL);
            if ( item->fields.type != 5 )
              break;
            v119 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v120 = &StringLiteral_9342/*"NONSELECT_NPUP_BASE"*/;
          }
          else
          {
            if ( item->fields.isCanStUp )
            {
LABEL_236:
              if ( item->fields.isStatusUpSvt )
              {
                v115 = item->fields.rarity;
                if ( v115 <= 3 )
                {
                  if ( item->fields.isAtkUpMax || item->fields.isHpUpMax )
                  {
                    v128 = *p_maskLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9344/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                    if ( !v128 )
                      goto LABEL_1055;
                    UILabel__set_text(v128, (System_String_o *)gameObject, 0LL);
                  }
                  if ( item->fields.isAtkSecondUpMax || item->fields.isHpSecondUpMax )
                  {
                    v129 = *p_maskLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9344/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                    if ( !v129 )
                      goto LABEL_1055;
                    UILabel__set_text(v129, (System_String_o *)gameObject, 0LL);
                  }
                  if ( !item->fields.isNotSelectStatusUpAtk && !item->fields.isNotSelectStatusUpHp )
                    goto LABEL_343;
                  v119 = *p_maskLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v120 = &StringLiteral_9344/*"NONSELECT_UNDER_STATUS_MAX"*/;
                }
                else
                {
                  if ( v115 != 4 )
                    goto LABEL_343;
                  if ( item->fields.atkBase >= 1 )
                  {
                    if ( item->fields.isAtkSecondUpMax || item->fields.isNotSelectSecondStatusUpAtk )
                    {
                      v116 = *p_maskLabel;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9344/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                      if ( !v116 )
                        goto LABEL_1055;
                      UILabel__set_text(v116, (System_String_o *)gameObject, 0LL);
                    }
                    if ( !item->fields.isAtkUpMax )
                    {
                      v117 = *p_maskLabel;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9341/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0LL);
                      if ( !v117 )
                        goto LABEL_1055;
                      UILabel__set_text(v117, (System_String_o *)gameObject, 0LL);
                    }
                  }
                  if ( item->fields.hpBase < 1 )
                    goto LABEL_343;
                  if ( item->fields.isHpSecondUpMax || item->fields.isNotSelectSecondStatusUpHp )
                  {
                    v118 = *p_maskLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9344/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                    if ( !v118 )
                      goto LABEL_1055;
                    UILabel__set_text(v118, (System_String_o *)gameObject, 0LL);
                  }
                  if ( item->fields.isHpUpMax )
                    goto LABEL_343;
                  v119 = *p_maskLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v120 = &StringLiteral_9341/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
                }
                goto LABEL_341;
              }
LABEL_343:
              v130 = item->fields.type;
              if ( v130 != 5 )
                goto LABEL_402;
              if ( !item->fields.isBaseSvt )
                break;
              v124 = *p_maskLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v125 = &StringLiteral_9392/*"NPUP_BASE"*/;
LABEL_349:
              servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v125, 0LL);
              if ( !v124 )
                goto LABEL_624;
              UILabel__set_text(v124, (System_String_o *)servantEntity, 0LL);
              break;
            }
            if ( item->fields.isFortification )
            {
              gameObject = *p_maskLabel;
              if ( !*p_maskLabel )
                goto LABEL_1055;
              UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              gameObject = (UILabel_o *)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1055;
              gameObject = (UILabel_o *)UnityEngine_GameObject__get_gameObject(
                                          (UnityEngine_GameObject_o *)gameObject,
                                          0LL);
              if ( !gameObject )
                goto LABEL_1055;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              gameObject = this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1055;
              UILabel__set_text(gameObject, item->fields.fortificationName, 0LL);
              gameObject = this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1055;
              UILabel__set_text(gameObject, item->fields.fortificationDetailName, 0LL);
              fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6430/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
              if ( !fortificationAppointmentLabel )
                goto LABEL_1055;
              UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)gameObject, 0LL);
              gameObject = this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1055;
              UILabel__UpdateCondensedScaleComponent(gameObject, 0LL);
              gameObject = this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1055;
              UILabel__UpdateCondensedScaleComponent(gameObject, 0LL);
              if ( item->fields.type != 5 )
                break;
              gameObject = (UILabel_o *)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1055;
              gameObject = (UILabel_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)gameObject,
                                          0LL);
              if ( !gameObject )
                goto LABEL_1055;
              *(UnityEngine_Vector3_o *)&v133 = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)gameObject,
                                                  0LL);
              gameObject = (UILabel_o *)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1055;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              v136 = v133;
              v137 = v134;
              gameObject = (UILabel_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)gameObject,
                                          0LL);
              if ( !gameObject )
                goto LABEL_1055;
              v263.fields.x = v136;
              v263.fields.y = fortificationInfoRootObjOffsetY;
              v263.fields.z = v137;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v263, 0LL);
              goto LABEL_343;
            }
            if ( (v94 & 1) != 0 )
              goto LABEL_343;
            v119 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v120 = &StringLiteral_9339/*"NONSELECT_MATERIAL"*/;
          }
LABEL_341:
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)*v120, 0LL);
          if ( !v119 )
            goto LABEL_1055;
          UILabel__set_text(v119, (System_String_o *)gameObject, 0LL);
          goto LABEL_343;
        }
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
        {
          servantEntity = (__int64)this->fields.baseButton;
          if ( !servantEntity )
            goto LABEL_624;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
            servantEntity,
            1LL,
            *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
          servantEntity = (__int64)this->fields.baseButton;
          if ( !servantEntity )
            goto LABEL_624;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
            servantEntity,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
          servantEntity = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_624;
          servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
          if ( !servantEntity )
            goto LABEL_624;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
        }
        v122 = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( item->fields.isMaxSelect )
        {
          if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v122, 0LL, 0LL) )
          {
            servantEntity = (__int64)this->fields.baseButton;
            if ( !servantEntity )
              goto LABEL_624;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
              servantEntity,
              1LL,
              *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
            servantEntity = (__int64)this->fields.baseButton;
            if ( !servantEntity )
              goto LABEL_624;
            v123 = 1;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
              servantEntity,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
            goto LABEL_291;
          }
        }
        else
        {
          if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v122, 0LL, 0LL) )
          {
            servantEntity = (__int64)this->fields.baseButton;
            if ( !servantEntity )
              goto LABEL_624;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
              servantEntity,
              1LL,
              *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
            servantEntity = (__int64)this->fields.baseButton;
            if ( !servantEntity )
              goto LABEL_624;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
              servantEntity,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
          }
        }
        v123 = 0;
        if ( item->fields.type != 1 )
          goto LABEL_297;
LABEL_291:
        servantEntity = (__int64)item->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_624;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)servantEntity, 0LL) && !isSelectEnable )
        {
          if ( !(v123 & 1 | !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL)) )
            break;
        }
        else
        {
LABEL_297:
          if ( !v123 )
            break;
        }
        servantEntity = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_624;
        servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
        if ( !servantEntity )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
        v124 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v125 = &StringLiteral_9339/*"NONSELECT_MATERIAL"*/;
        goto LABEL_349;
      }
LABEL_105:
      v94 = 0;
      goto LABEL_106;
    case 0:
      gameObject = (UILabel_o *)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1055;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0LL);
      if ( item->fields.isParty )
      {
        gameObject = (UILabel_o *)this->fields.partyIcon;
        if ( !gameObject )
          goto LABEL_1055;
        FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
      }
      if ( item->fields.isSwapLock != item->fields.isLock )
      {
        gameObject = (UILabel_o *)this->fields.lockImg;
        if ( !gameObject )
          goto LABEL_1055;
        gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1055;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      }
      CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, v86);
      v88 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( CanNotBaseSelect )
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v88, 0LL, 0LL) )
          goto LABEL_397;
        gameObject = (UILabel_o *)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1055;
        ((void (__fastcall *)(UILabel_o *, __int64, Il2CppMethodPointer))gameObject->klass->vtable._5_get_isAnchoredVertically.method)(
          gameObject,
          1LL,
          gameObject->klass->vtable._6_get_canBeAnchored.methodPtr);
        gameObject = (UILabel_o *)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1055;
        ((void (__fastcall *)(UILabel_o *, _QWORD, __int64, Il2CppMethodPointer))gameObject->klass->vtable._14_OnEnable.method)(
          gameObject,
          0LL,
          1LL,
          gameObject->klass->vtable._15_OnInit.methodPtr);
        gameObject = (UILabel_o *)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1055;
        gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1055;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        if ( item->fields.isLvMax )
        {
          if ( item->fields.isStatusUpSvt )
            goto LABEL_353;
          if ( !item->fields.isExpUpSvt )
          {
            v89 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v90 = &StringLiteral_9337/*"NONSELECT_BASE_ALLMAX"*/;
            goto LABEL_357;
          }
        }
        else if ( item->fields.isStatusUpSvt )
        {
          goto LABEL_353;
        }
        if ( !item->fields.isExpUpSvt )
        {
          if ( !item->fields.isHeroineSvt )
          {
            gameObject = *p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1055;
            UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            gameObject = *p_maskLabel;
            if ( !*p_maskLabel )
              goto LABEL_1055;
            v131 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_359;
          }
          v89 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v90 = &StringLiteral_11647/*"SELECT_CANNOT"*/;
LABEL_357:
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)*v90, 0LL);
          if ( !v89 )
            goto LABEL_1055;
          v131 = (System_String_o *)gameObject;
          gameObject = v89;
LABEL_359:
          UILabel__set_text(gameObject, v131, 0LL);
          gameObject = (UILabel_o *)item->fields._NoticeTween_k__BackingField;
          if ( !gameObject )
            goto LABEL_1055;
          CombineServantListViewNoticeTween__RemoveTarget(
            (CombineServantListViewNoticeTween_o *)gameObject,
            *p_statusTxtLb,
            0LL);
          goto LABEL_397;
        }
LABEL_353:
        v89 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v90 = &StringLiteral_9339/*"NONSELECT_MATERIAL"*/;
        goto LABEL_357;
      }
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v88, 0LL, 0LL) )
        goto LABEL_397;
      gameObject = (UILabel_o *)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1055;
      ((void (__fastcall *)(UILabel_o *, __int64, Il2CppMethodPointer))gameObject->klass->vtable._5_get_isAnchoredVertically.method)(
        gameObject,
        1LL,
        gameObject->klass->vtable._6_get_canBeAnchored.methodPtr);
      gameObject = (UILabel_o *)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1055;
      ((void (__fastcall *)(UILabel_o *, _QWORD, __int64, Il2CppMethodPointer))gameObject->klass->vtable._14_OnEnable.method)(
        gameObject,
        0LL,
        1LL,
        gameObject->klass->vtable._15_OnInit.methodPtr);
      gameObject = (UILabel_o *)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1055;
      gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1055;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = *p_maskLabel;
      if ( !*p_maskLabel )
        goto LABEL_1055;
      UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( item->fields.isCombineExpCampaignTarget )
      {
        if ( item->fields.isDispAtkStatusUpInfo )
        {
          gameObject = (UILabel_o *)item->fields.userSvtEntity;
          if ( !gameObject )
            goto LABEL_1055;
          if ( UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)gameObject, 0LL) )
          {
            gameObject = (UILabel_o *)item->fields.userSvtEntity;
            if ( !gameObject )
              goto LABEL_1055;
            if ( !UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)gameObject, 0LL) )
              goto LABEL_387;
          }
        }
        if ( !item->fields.isDispHpStatusUpInfo )
          goto LABEL_204;
        gameObject = (UILabel_o *)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_1055;
        if ( !UserServantEntity__isAdjustHpMax((UserServantEntity_o *)gameObject, 0LL) )
          goto LABEL_204;
        gameObject = (UILabel_o *)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_1055;
        if ( !UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)gameObject, 0LL) )
        {
LABEL_387:
          v138 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_string__TypeInfo, v105, v106);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v138,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v139 = LocalizationManager__Get((System_String_o *)StringLiteral_8855/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v261.methodPointer = item->fields.combineExpCampaignValue;
          v141 = (Il2CppObject *)System_Single__ToString(v140, &v261);
          gameObject = (UILabel_o *)System_String__Format(v139, v141, 0LL);
          if ( v138 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v138,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
            v142 = LocalizationManager__Get((System_String_o *)StringLiteral_3168/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v138,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v142,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
            gameObject = (UILabel_o *)item->fields._NoticeTween_k__BackingField;
            if ( gameObject )
            {
              CombineServantListViewNoticeTween__AddTarget(
                (CombineServantListViewNoticeTween_o *)gameObject,
                *p_statusTxtLb,
                (System_Collections_Generic_List_string__o *)v138,
                0LL);
              gameObject = (UILabel_o *)item->fields._NoticeTween_k__BackingField;
              if ( gameObject )
              {
                CombineServantListViewNoticeTween__SetTexts((CombineServantListViewNoticeTween_o *)gameObject, 0, 0LL);
LABEL_394:
                gameObject = *p_statusTxtLb;
                if ( !*p_statusTxtLb )
                  goto LABEL_1055;
                gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)gameObject,
                                            0LL);
                if ( !gameObject )
                  goto LABEL_1055;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                goto LABEL_397;
              }
            }
          }
        }
        else
        {
LABEL_204:
          gameObject = (UILabel_o *)item->fields._NoticeTween_k__BackingField;
          if ( gameObject )
          {
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              *p_statusTxtLb,
              0LL);
            v107 = *p_statusTxtLb;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v108 = LocalizationManager__Get((System_String_o *)StringLiteral_8855/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
            *(float *)&v261.methodPointer = item->fields.combineExpCampaignValue;
            v110 = (Il2CppObject *)System_Single__ToString(v109, &v261);
            gameObject = (UILabel_o *)System_String__Format(v108, v110, 0LL);
            if ( v107 )
            {
LABEL_209:
              UILabel__set_text(v107, (System_String_o *)gameObject, 0LL);
              goto LABEL_394;
            }
          }
        }
LABEL_1055:
        sub_B0D97C(gameObject);
      }
      gameObject = (UILabel_o *)item->fields._NoticeTween_k__BackingField;
      if ( !gameObject )
        goto LABEL_1055;
      CombineServantListViewNoticeTween__RemoveTarget(
        (CombineServantListViewNoticeTween_o *)gameObject,
        *p_statusTxtLb,
        0LL);
      if ( item->fields.isDispAtkStatusUpInfo )
      {
        gameObject = (UILabel_o *)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_1055;
        if ( UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)gameObject, 0LL) )
        {
          gameObject = (UILabel_o *)item->fields.userSvtEntity;
          if ( !gameObject )
            goto LABEL_1055;
          if ( !UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)gameObject, 0LL) )
            goto LABEL_1025;
        }
      }
      else if ( item->fields.isDispHpStatusUpInfo )
      {
        gameObject = (UILabel_o *)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_1055;
        if ( UserServantEntity__isAdjustHpMax((UserServantEntity_o *)gameObject, 0LL) )
        {
          gameObject = (UILabel_o *)item->fields.userSvtEntity;
          if ( !gameObject )
            goto LABEL_1055;
          if ( !UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)gameObject, 0LL) )
          {
LABEL_1025:
            v107 = *p_statusTxtLb;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3168/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
            if ( v107 )
              goto LABEL_209;
            goto LABEL_1055;
          }
        }
      }
LABEL_397:
      if ( item->fields.isBaseSvt )
      {
        gameObject = (UILabel_o *)this->fields.removeImg;
        if ( !gameObject )
          goto LABEL_1055;
        gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1055;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      }
      break;
  }
  v130 = item->fields.type;
LABEL_402:
  if ( v130 != 9 )
  {
    if ( v130 != 2 )
      goto LABEL_498;
    servantEntity = (__int64)this->fields.limitCountIcon;
    if ( !servantEntity )
      goto LABEL_624;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)servantEntity,
      item->fields.currentLimitCnt,
      item->fields.maxLimitCnt,
      0LL);
    if ( item->fields.isParty )
    {
      servantEntity = (__int64)this->fields.partyIcon;
      if ( !servantEntity )
        goto LABEL_624;
      FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
    }
    if ( item->fields.isSwapLock != item->fields.isLock )
    {
      servantEntity = (__int64)this->fields.lockImg;
      if ( !servantEntity )
        goto LABEL_624;
      servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
      if ( !servantEntity )
        goto LABEL_624;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    }
    if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, v143) )
    {
      v144 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v144, 0LL, 0LL) )
      {
        servantEntity = (__int64)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_624;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
          servantEntity,
          1LL,
          *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
        servantEntity = (__int64)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_624;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
          servantEntity,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
        servantEntity = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_624;
        servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
        if ( !servantEntity )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
        v145 = *p_maskLabel;
        v146 = LocalizationManager_TypeInfo;
        if ( item->fields.isHeroineSvt )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
            goto LABEL_447;
          goto LABEL_445;
        }
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          goto LABEL_473;
        goto LABEL_475;
      }
      goto LABEL_494;
    }
    if ( !item->fields.isLvMax || !item->fields.isLimitUpItemNum )
    {
      v153 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v153, 0LL, 0LL) )
      {
        servantEntity = (__int64)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_624;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
          servantEntity,
          1LL,
          *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
        servantEntity = (__int64)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_624;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
          servantEntity,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
      }
      goto LABEL_494;
    }
    v151 = UnityEngine_Object_TypeInfo;
    v149 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !item->fields.isSealCombineLimit )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v149, 0LL, 0LL) )
      {
        servantEntity = (__int64)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_624;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
          servantEntity,
          1LL,
          *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
        servantEntity = (__int64)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_624;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
          servantEntity,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
        servantEntity = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_624;
        servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
        if ( !servantEntity )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
        servantEntity = (__int64)*p_maskLabel;
        if ( !*p_maskLabel )
          goto LABEL_624;
        UILabel__set_text((UILabel_o *)servantEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        servantEntity = (__int64)*p_statusTxtLb;
        if ( !*p_statusTxtLb )
          goto LABEL_624;
        servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
        if ( !servantEntity )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
        v145 = *p_statusTxtLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v150 = &StringLiteral_8851/*"MSG_ABLED_LIMITUP"*/;
        goto LABEL_491;
      }
      goto LABEL_494;
    }
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
      || UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
LABEL_458:
      if ( !UnityEngine_Object__op_Inequality(v149, 0LL, 0LL) )
        goto LABEL_494;
      servantEntity = (__int64)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_624;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
        servantEntity,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
      servantEntity = (__int64)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_624;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
        servantEntity,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
      servantEntity = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_624;
      servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
      if ( !servantEntity )
        goto LABEL_624;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
      servantEntity = (__int64)*p_maskLabel;
      if ( !*p_maskLabel )
        goto LABEL_624;
      v152 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_493;
    }
LABEL_457:
    j_il2cpp_runtime_class_init_0(v151);
    goto LABEL_458;
  }
  servantEntity = (__int64)this->fields.limitCountIcon;
  if ( !servantEntity )
    goto LABEL_624;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)servantEntity,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0LL);
  if ( item->fields.isParty )
  {
    servantEntity = (__int64)this->fields.partyIcon;
    if ( !servantEntity )
      goto LABEL_624;
    FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    servantEntity = (__int64)this->fields.lockImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  v148 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, v147);
  v149 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !v148 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
      || UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_458;
    }
    v151 = UnityEngine_Object_TypeInfo;
    goto LABEL_457;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v149, 0LL, 0LL) )
  {
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    if ( item->fields.isHeroineSvt || item->fields.isEventJoin || item->fields.isIgnoreCombineLimitSpecial )
    {
      v145 = *p_maskLabel;
      v146 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_447:
        v150 = &StringLiteral_9339/*"NONSELECT_MATERIAL"*/;
LABEL_491:
        servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v150, 0LL);
        if ( !v145 )
          goto LABEL_624;
        v152 = (System_String_o *)servantEntity;
        servantEntity = (__int64)v145;
LABEL_493:
        UILabel__set_text((UILabel_o *)servantEntity, v152, 0LL);
        goto LABEL_494;
      }
LABEL_445:
      if ( !v146->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v146);
      goto LABEL_447;
    }
    if ( item->fields.isLimitCntMax )
    {
      v145 = *p_maskLabel;
      v146 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
LABEL_473:
        if ( !v146->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v146);
      }
LABEL_475:
      v150 = &StringLiteral_9338/*"NONSELECT_LIMITUP_BASE"*/;
      goto LABEL_491;
    }
    if ( item->fields.isSealCombineLimit )
    {
      v145 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v150 = &StringLiteral_11642/*"SEAL_COMBINE_LIMIT_THIRD"*/;
      goto LABEL_491;
    }
  }
LABEL_494:
  if ( item->fields.isBaseSvt )
  {
    servantEntity = (__int64)this->fields.removeImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
LABEL_498:
  v154 = item->fields.type;
  v258 = modeKind;
  v256 = &this->fields.statusTxtLb;
  v257 = this;
  v254 = &this->fields.maskSprite;
  v255 = &this->fields.maskLabel;
  if ( v154 != 3 )
    goto LABEL_591;
  CombineServantListViewItem__GetSkillInfo(item, &skillInfoList, v81);
  enableSkillUp = item->fields.enableSkillUp;
  v158 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v156, v157);
  System_Text_StringBuilder___ctor(v158, 0LL);
  v159 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_624;
  v160 = *(_QWORD *)&skillInfoList->max_length;
  if ( (int)v160 >= 1 )
  {
    v161 = 0LL;
    v162 = (unsigned int)(v160 - 1);
    v163 = (int)v160;
    while ( 1 )
    {
      if ( v161 >= v159->max_length )
        goto LABEL_1056;
      v164 = v159->m_Items[v161];
      if ( v164 )
      {
        lv = v164->fields.lv;
        p_lv = &v164->fields.lv;
        v167 = *(p_lv - 1);
        if ( lv > 0 )
        {
          servantEntity = (__int64)System_Int32__ToString((int32_t)p_lv, 0LL);
          goto LABEL_511;
        }
      }
      else
      {
        v167 = -1;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9345/*"NONSKILL_TXT"*/, 0LL);
LABEL_511:
      v168 = (Il2CppObject *)servantEntity;
      if ( enableSkillUp )
      {
        v169 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v167,
                 (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v162 == v161 )
        {
          if ( v169 )
          {
            v170 = &StringLiteral_12291/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v170 = &StringLiteral_12291/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v170 = &StringLiteral_12291/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              }
            }
          }
          else
          {
            v170 = &StringLiteral_12293/*"SKILL_LVDISP_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v170 = &StringLiteral_12293/*"SKILL_LVDISP_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v170 = &StringLiteral_12293/*"SKILL_LVDISP_SINGLE_TXT"*/;
              }
            }
          }
        }
        else if ( v169 )
        {
          v170 = &StringLiteral_12292/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v170 = &StringLiteral_12292/*"SKILL_LVDISP_ENABLE_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v170 = &StringLiteral_12292/*"SKILL_LVDISP_ENABLE_TXT"*/;
            }
          }
        }
        else
        {
          v170 = &StringLiteral_12294/*"SKILL_LVDISP_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v170 = &StringLiteral_12294/*"SKILL_LVDISP_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v170 = &StringLiteral_12294/*"SKILL_LVDISP_TXT"*/;
            }
          }
        }
        servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v170, 0LL);
        if ( v158 )
        {
          servantEntity = (__int64)System_Text_StringBuilder__AppendFormat(
                                     v158,
                                     (System_String_o *)servantEntity,
                                     v168,
                                     0LL);
          if ( (__int64)++v161 >= v163 )
            goto LABEL_532;
          v159 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_624;
    }
  }
  if ( !v158 )
    goto LABEL_624;
LABEL_532:
  this = v257;
  skillLvLabel = v257->fields.skillLvLabel;
  servantEntity = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v158->klass->vtable._3_ToString.method)(
                    v158,
                    v158->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !skillLvLabel )
    goto LABEL_624;
  UILabel__set_text(skillLvLabel, (System_String_o *)servantEntity, 0LL);
  servantEntity = (__int64)v257->fields.skillLvLabel;
  if ( !servantEntity )
    goto LABEL_624;
  servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
  p_maskLabel = v255;
  p_statusTxtLb = v256;
  p_maskSprite = v254;
  if ( !servantEntity )
    goto LABEL_624;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  modeKind = v258;
  if ( item->fields.isParty )
  {
    servantEntity = (__int64)v257->fields.partyIcon;
    if ( !servantEntity )
      goto LABEL_624;
    FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    servantEntity = (__int64)v257->fields.lockImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, v172) )
  {
    v173 = (UnityEngine_Object_o *)v257->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v173, 0LL, 0LL) )
      goto LABEL_586;
    servantEntity = (__int64)v257->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)v257->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*v254;
    if ( !*v254 )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v174 = *v255;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9343/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v174 )
      goto LABEL_624;
    UILabel__set_text(v174, (System_String_o *)servantEntity, 0LL);
    if ( !item->fields.isHeroineSvt )
      goto LABEL_586;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28088484(126, 0LL) )
      goto LABEL_586;
    v175 = *v255;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v176 = &StringLiteral_11647/*"SELECT_CANNOT"*/;
    goto LABEL_577;
  }
  v177 = (UnityEngine_Object_o *)v257->fields.baseButton;
  if ( !item->fields.isSkillUpItemNum )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v177, 0LL, 0LL) )
    {
      servantEntity = (__int64)v257->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_624;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
        servantEntity,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
      servantEntity = (__int64)v257->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_624;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
        servantEntity,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    }
    goto LABEL_586;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v177, 0LL, 0LL) )
  {
    servantEntity = (__int64)v257->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)v257->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*v256;
    if ( !*v256 )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v175 = *v256;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v176 = &StringLiteral_8852/*"MSG_ABLED_SKILLUP"*/;
LABEL_577:
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v176, 0LL);
    if ( !v175 )
      goto LABEL_624;
    UILabel__set_text(v175, (System_String_o *)servantEntity, 0LL);
  }
LABEL_586:
  if ( item->fields.isBaseSvt )
  {
    servantEntity = (__int64)v257->fields.removeImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  v154 = item->fields.type;
LABEL_591:
  if ( v154 != 11 )
    goto LABEL_702;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(item, switchInfoList);
  enableAppendSkillUp = item->fields.enableAppendSkillUp;
  v180 = AppendSkillData;
  v183 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v181, v182);
  System_Text_StringBuilder___ctor(v183, 0LL);
  if ( !v180 )
    goto LABEL_624;
  svtUseSkillIdList = v180->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_624;
  v185 = *(_QWORD *)&svtUseSkillIdList->max_length;
  if ( (int)v185 >= 1 )
  {
    v186 = 0LL;
    v187 = (unsigned int)(v185 - 1);
    v188 = (int)v185;
    while ( v186 < svtUseSkillIdList->max_length )
    {
      svtSkillLvList = v180->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_624;
      if ( v186 >= svtSkillLvList->max_length )
        break;
      v190 = (__int64)svtSkillLvList + 4 * v186;
      v191 = svtUseSkillIdList->m_Items[v186 + 1];
      v193 = *(_DWORD *)(v190 + 32);
      v192 = v190 + 32;
      if ( v193 <= 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9345/*"NONSKILL_TXT"*/, 0LL);
      }
      else
      {
        servantEntity = (__int64)System_Int32__ToString(v192, 0LL);
      }
      v194 = (Il2CppObject *)servantEntity;
      if ( enableAppendSkillUp )
      {
        v195 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v191,
                 (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v186 == v187 )
        {
          if ( v195 )
          {
            v196 = &StringLiteral_12291/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v196 = &StringLiteral_12291/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v196 = &StringLiteral_12291/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              }
            }
          }
          else
          {
            v196 = &StringLiteral_12293/*"SKILL_LVDISP_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v196 = &StringLiteral_12293/*"SKILL_LVDISP_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v196 = &StringLiteral_12293/*"SKILL_LVDISP_SINGLE_TXT"*/;
              }
            }
          }
        }
        else if ( v195 )
        {
          v196 = &StringLiteral_12292/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v196 = &StringLiteral_12292/*"SKILL_LVDISP_ENABLE_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v196 = &StringLiteral_12292/*"SKILL_LVDISP_ENABLE_TXT"*/;
            }
          }
        }
        else
        {
          v196 = &StringLiteral_12294/*"SKILL_LVDISP_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v196 = &StringLiteral_12294/*"SKILL_LVDISP_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v196 = &StringLiteral_12294/*"SKILL_LVDISP_TXT"*/;
            }
          }
        }
        servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v196, 0LL);
        if ( v183 )
        {
          servantEntity = (__int64)System_Text_StringBuilder__AppendFormat(
                                     v183,
                                     (System_String_o *)servantEntity,
                                     v194,
                                     0LL);
          if ( (__int64)++v186 >= v188 )
            goto LABEL_626;
          svtUseSkillIdList = v180->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_624;
    }
LABEL_1056:
    v253 = sub_B0D9A8(servantEntity);
    sub_B0D948(v253, 0LL);
  }
  if ( !v183 )
    goto LABEL_624;
LABEL_626:
  this = v257;
  v197 = v257->fields.skillLvLabel;
  servantEntity = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v183->klass->vtable._3_ToString.method)(
                    v183,
                    v183->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v197 )
    goto LABEL_624;
  UILabel__set_text(v197, (System_String_o *)servantEntity, 0LL);
  servantEntity = (__int64)v257->fields.skillLvLabel;
  p_maskLabel = v255;
  p_statusTxtLb = v256;
  p_maskSprite = v254;
  if ( !servantEntity )
    goto LABEL_624;
  servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
  if ( !servantEntity )
    goto LABEL_624;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  modeKind = v258;
  if ( item->fields.isParty )
  {
    servantEntity = (__int64)v257->fields.partyIcon;
    if ( !servantEntity )
      goto LABEL_624;
    FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    servantEntity = (__int64)v257->fields.lockImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  servantEntity = CombineServantListViewItem__get_IsCanNotBaseSelect(item, v198);
  if ( (servantEntity & 1) != 0 )
  {
    servantEntity = (__int64)*v254;
    if ( !*v254 )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v199 = *v255;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9343/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v199 )
      goto LABEL_624;
    UILabel__set_text(v199, (System_String_o *)servantEntity, 0LL);
    if ( item->fields.isEventJoin )
    {
      v200 = *v255;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10411/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v200 )
        goto LABEL_624;
      UILabel__set_text(v200, (System_String_o *)servantEntity, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_669;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28088484(126, 0LL) )
      goto LABEL_669;
    v201 = *v255;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v202 = &StringLiteral_11647/*"SELECT_CANNOT"*/;
    goto LABEL_667;
  }
  if ( !enableAppendSkillUp )
    goto LABEL_624;
  if ( enableAppendSkillUp->fields._size > 0 || item->fields.isAppendSkillOpenItemNum )
  {
    servantEntity = (__int64)*v256;
    if ( !*v256 )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v201 = *v256;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v202 = &StringLiteral_8852/*"MSG_ABLED_SKILLUP"*/;
LABEL_667:
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v202, 0LL);
    if ( !v201 )
      goto LABEL_624;
    UILabel__set_text(v201, (System_String_o *)servantEntity, 0LL);
  }
LABEL_669:
  v203 = (UnityEngine_Object_o *)v257->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v203, 0LL, 0LL) )
  {
    servantEntity = (__int64)v257->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)v257->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
  }
  coinInfo = (UnityEngine_Object_o *)v257->fields.coinInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(coinInfo, 0LL, 0LL) )
  {
    switchInfoComp = (UnityEngine_Object_o *)v257->fields.switchInfoComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(switchInfoComp, 0LL, 0LL) )
    {
      switchInfoList = (MethodInfo *)v257->fields.switchInfoList;
      if ( switchInfoList )
      {
        servantEntity = (__int64)v257->fields.switchInfoComp;
        if ( !servantEntity )
          goto LABEL_624;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)servantEntity, (UIWidget_array *)switchInfoList, 0LL);
        servantEntity = (__int64)v257->fields.coinInfo;
        if ( !servantEntity )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
        coinNumLabel = v257->fields.coinNumLabel;
        servantEntity = CombineServantListViewItem__get_SkillOpenItemNum(item, v207);
        if ( (servantEntity & 0x80000000) != 0 )
        {
          v210 = (System_String_o *)StringLiteral_1/*""*/;
          if ( !coinNumLabel )
            goto LABEL_624;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(item, v208);
          v209 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum);
          servantEntity = (__int64)System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v209, 0LL);
          v210 = (System_String_o *)servantEntity;
          if ( !coinNumLabel )
            goto LABEL_624;
        }
        UILabel__set_text(coinNumLabel, v210, 0LL);
        servantEntity = CombineServantListViewItem__get_SkillOpenItemId(item, v211);
        coinIcon = v257->fields.coinIcon;
        if ( (int)servantEntity < 1 )
        {
          if ( !coinIcon )
            goto LABEL_624;
          servantEntity = (__int64)coinIcon->fields.iconSprite;
          if ( !servantEntity )
            goto LABEL_624;
          servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
          if ( !servantEntity )
            goto LABEL_624;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
        }
        else
        {
          servantEntity = CombineServantListViewItem__get_SkillOpenItemId(item, v212);
          if ( !coinIcon )
            goto LABEL_624;
          ItemIconComponent__SetItem(coinIcon, servantEntity, -1, 0LL);
        }
      }
    }
  }
  if ( item->fields.isBaseSvt )
  {
    servantEntity = (__int64)v257->fields.removeImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
LABEL_702:
  v214 = item->fields.type;
  if ( v214 != 4 )
    goto LABEL_756;
  servantEntity = (__int64)this->fields.npIconLabel;
  if ( !servantEntity )
    goto LABEL_624;
  v215 = SHIDWORD(v261.name) <= 0 ? -1 : LODWORD(v261.name);
  UIIconLabel__Set_41076120(
    (UIIconLabel_o *)servantEntity,
    33,
    v215,
    SHIDWORD(v261.methodPointer),
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  servantEntity = (__int64)this->fields.npLvInfo;
  if ( !servantEntity )
    goto LABEL_624;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  if ( item->fields.isParty )
  {
    servantEntity = (__int64)this->fields.partyIcon;
    if ( !servantEntity )
      goto LABEL_624;
    FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    servantEntity = (__int64)this->fields.lockImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, v216) )
  {
    v217 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v217, 0LL, 0LL) )
      goto LABEL_751;
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v218 = *p_maskLabel;
    if ( item->fields.isHeroineSvt )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v219 = &StringLiteral_9339/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v219 = &StringLiteral_9342/*"NONSELECT_NPUP_BASE"*/;
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v219, 0LL);
    if ( !v218 )
      goto LABEL_624;
    goto LABEL_750;
  }
  if ( !item->fields.isSameSvt && !item->fields.isBaseSvt )
  {
    v227 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v227, 0LL, 0LL) )
    {
      servantEntity = (__int64)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_624;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
        servantEntity,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
      servantEntity = (__int64)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_624;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
        servantEntity,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    }
    goto LABEL_751;
  }
  v220 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v220, 0LL, 0LL) )
  {
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    if ( item->fields.isSameSvt )
    {
      servantEntity = (__int64)*p_statusTxtLb;
      if ( !*p_statusTxtLb )
        goto LABEL_1057;
      servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
      if ( !servantEntity )
        goto LABEL_1057;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
      v218 = *p_statusTxtLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8854/*"MSG_ABLED_TDUP"*/, 0LL);
      if ( !v218 )
        goto LABEL_1057;
LABEL_750:
      UILabel__set_text(v218, (System_String_o *)servantEntity, 0LL);
    }
  }
LABEL_751:
  if ( item->fields.isBaseSvt )
  {
    servantEntity = (__int64)this->fields.removeImg;
    if ( !servantEntity )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  v214 = item->fields.type;
LABEL_756:
  if ( v214 != 6 )
    goto LABEL_834;
  servantEntity = (__int64)this->fields.limitCountIcon;
  if ( !servantEntity )
    goto LABEL_1057;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)servantEntity,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0LL);
  if ( item->fields.isParty )
  {
    servantEntity = (__int64)this->fields.partyIcon;
    if ( !servantEntity )
      goto LABEL_1057;
    FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    servantEntity = (__int64)this->fields.lockImg;
    if ( !servantEntity )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, v221) )
  {
    v222 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v222, 0LL, 0LL) )
    {
      servantEntity = (__int64)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_1057;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
        servantEntity,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
      servantEntity = (__int64)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_1057;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
        servantEntity,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
      servantEntity = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1057;
      servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
      if ( !servantEntity )
        goto LABEL_1057;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
      if ( item->fields.isHeroineSvt )
      {
        v223 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v224 = &StringLiteral_9339/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        v223 = *p_maskLabel;
        if ( item->fields.isEventJoin )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v224 = &StringLiteral_11670/*"SELECT_SERVANT_EVENT_JOIN"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v224 = &StringLiteral_9383/*"NO_SELECT_LVEXCEED"*/;
        }
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v224, 0LL);
      if ( !v223 )
        goto LABEL_624;
      goto LABEL_829;
    }
    goto LABEL_830;
  }
  if ( !item->fields.isLvMax || !item->fields.isLimitCntMax )
  {
    v226 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v226, 0LL, 0LL) )
      goto LABEL_830;
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
LABEL_804:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    goto LABEL_830;
  }
  v225 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !item->fields.isLvExceedItemNum )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v225, 0LL, 0LL) )
      goto LABEL_830;
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    goto LABEL_804;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v225, 0LL, 0LL) )
  {
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
    servantEntity = (__int64)*p_maskLabel;
    if ( !*p_maskLabel )
      goto LABEL_1057;
    UILabel__set_text((UILabel_o *)servantEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    servantEntity = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v223 = *p_statusTxtLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8851/*"MSG_ABLED_LIMITUP"*/, 0LL);
    if ( !v223 )
      goto LABEL_1057;
LABEL_829:
    UILabel__set_text(v223, (System_String_o *)servantEntity, 0LL);
  }
LABEL_830:
  if ( item->fields.isBaseSvt )
  {
    servantEntity = (__int64)this->fields.removeImg;
    if ( !servantEntity )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
LABEL_834:
  v228 = item->fields.type;
  if ( v228 != 10 && v228 != 7 )
    goto LABEL_906;
  servantEntity = (__int64)this->fields.limitCountIcon;
  if ( !servantEntity )
    goto LABEL_1057;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)servantEntity, 0LL);
  servantEntity = (__int64)this->fields.subIconLabel;
  if ( !servantEntity )
    goto LABEL_1057;
  UIIconLabel__Clear((UIIconLabel_o *)servantEntity, 0LL);
  v230 = item->fields.type;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  }
  servantEntity = CombineServantListViewManager__GetSortKind(v230, v229);
  v231 = this->fields.servantFaceIcon;
  if ( !v231 )
    goto LABEL_1057;
  if ( (_DWORD)servantEntity == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *, __int64, Il2CppMethodPointer))v231->klass->vtable._4_ParameterChange.method)(
      this->fields.servantFaceIcon,
      1LL,
      v231->klass->vtable._5_UpdateAlpha.methodPtr);
    servantEntity = (__int64)this->fields.servantFaceIcon;
    if ( !servantEntity )
      goto LABEL_1057;
    ServantFaceIconComponent__ResetIconLabelPos((ServantFaceIconComponent_o *)servantEntity, 0LL);
    servantEntity = (__int64)this->fields.servantFaceIcon;
    if ( !servantEntity )
      goto LABEL_1057;
    ServantFaceIconComponent__AdjustIconLabelPos((ServantFaceIconComponent_o *)servantEntity, 1.0, -1.0, 0LL);
  }
  else
  {
    ServantFaceIconComponent__ResetIconLabelPos(this->fields.servantFaceIcon, 0LL);
  }
  if ( item->fields.isParty )
  {
    servantEntity = (__int64)this->fields.partyIcon;
    if ( !servantEntity )
      goto LABEL_1057;
    FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    servantEntity = (__int64)this->fields.lockImg;
    if ( !servantEntity )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  v233 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, v232);
  v234 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( v233 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v234, 0LL, 0LL) )
      goto LABEL_893;
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    if ( item->fields.type == 10 && item->fields.isCommandCardExceedMax )
    {
      v235 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9336/*"NONSEELECT_STATUSUP_MAX"*/, 0LL);
      if ( !v235 )
        goto LABEL_1057;
      UILabel__set_text(v235, (System_String_o *)servantEntity, 0LL);
    }
    if ( item->fields.isEventJoin )
    {
      v236 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11670/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v236 )
        goto LABEL_1057;
      UILabel__set_text(v236, (System_String_o *)servantEntity, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_893;
    v237 = *p_maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11647/*"SELECT_CANNOT"*/, 0LL);
    if ( !v237 )
      goto LABEL_1057;
    v238 = (System_String_o *)servantEntity;
    servantEntity = (__int64)v237;
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v234, 0LL, 0LL) )
      goto LABEL_893;
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
    servantEntity = (__int64)*p_maskLabel;
    if ( !*p_maskLabel )
      goto LABEL_1057;
    v238 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)servantEntity, v238, 0LL);
LABEL_893:
  if ( item->fields.isBaseSvt )
  {
    servantEntity = (__int64)this->fields.removeImg;
    if ( !servantEntity )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  v239 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Implicit(v239, 0LL) )
  {
    servantEntity = (__int64)this->fields.svtCommandCardList;
    if ( !servantEntity )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v240 = this->fields.svtCommandCardList;
    servantEntity = CombineServantListViewItem__get_UserSvtId(item, v241);
    if ( !v240 )
      goto LABEL_1057;
    ServantCommandCardListComponent__Set(v240, servantEntity, 1, 1, 0LL);
  }
  v228 = item->fields.type;
LABEL_906:
  if ( v228 != 8 )
    goto LABEL_975;
  if ( item->fields.isParty )
  {
    servantEntity = (__int64)this->fields.partyIcon;
    if ( !servantEntity )
      goto LABEL_1057;
    FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    servantEntity = (__int64)this->fields.lockImg;
    if ( !servantEntity )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList) )
  {
    v242 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v242, 0LL, 0LL) )
    {
      servantEntity = (__int64)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_1057;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
        servantEntity,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
      servantEntity = (__int64)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_1057;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
        servantEntity,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
      servantEntity = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1057;
      servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
      if ( !servantEntity )
        goto LABEL_1057;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
      if ( item->fields.isHeroineSvt )
      {
        v243 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v244 = &StringLiteral_9339/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        v243 = *p_maskLabel;
        if ( item->fields.isEventJoin )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v244 = &StringLiteral_11670/*"SELECT_SERVANT_EVENT_JOIN"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v244 = &StringLiteral_9382/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
        }
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v244, 0LL);
      if ( !v243 )
        goto LABEL_624;
      goto LABEL_970;
    }
    goto LABEL_971;
  }
  if ( !item->fields.isFriendshipRankMax )
  {
    v246 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v246, 0LL, 0LL) )
      goto LABEL_971;
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
LABEL_959:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    goto LABEL_971;
  }
  v245 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !item->fields.isFriendshipExceedItemNum )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v245, 0LL, 0LL) )
      goto LABEL_971;
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    goto LABEL_959;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v245, 0LL, 0LL) )
  {
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
    servantEntity = (__int64)*p_maskLabel;
    if ( !*p_maskLabel )
      goto LABEL_1057;
    UILabel__set_text((UILabel_o *)servantEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    servantEntity = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v243 = *p_statusTxtLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8850/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, 0LL);
    if ( !v243 )
      goto LABEL_1057;
LABEL_970:
    UILabel__set_text(v243, (System_String_o *)servantEntity, 0LL);
  }
LABEL_971:
  if ( item->fields.isBaseSvt )
  {
    servantEntity = (__int64)this->fields.removeImg;
    if ( !servantEntity )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
LABEL_975:
  if ( (unsigned int)(modeKind - 1) > 1 )
  {
    if ( modeKind != 3 )
      return;
    if ( item->fields.isEventJoin )
    {
      servantEntity = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1057;
      servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
      if ( !servantEntity )
        goto LABEL_1057;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
      v248 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11670/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v248 )
        goto LABEL_1057;
      goto LABEL_1016;
    }
    if ( !item->fields.isCanNotLock )
    {
      servantEntity = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, switchInfoList);
      if ( !servantEntity )
        goto LABEL_1057;
      if ( !UserServantEntity__IsLeave((UserServantEntity_o *)servantEntity, 0LL) )
      {
        servantEntity = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, v249);
        if ( !servantEntity )
          goto LABEL_1057;
        if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)servantEntity, 0LL) )
        {
          servantEntity = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, v250);
          if ( !servantEntity )
            goto LABEL_1057;
          if ( !UserServantEntity__IsStatusUp((UserServantEntity_o *)servantEntity, 0LL) )
          {
            servantEntity = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, v251);
            if ( !servantEntity )
              goto LABEL_1057;
            if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)servantEntity, 0LL) )
            {
              servantEntity = (__int64)*p_maskSprite;
              if ( !*p_maskSprite )
                goto LABEL_1057;
              servantEntity = (__int64)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)servantEntity,
                                         0LL);
              if ( !servantEntity )
                goto LABEL_1057;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
              servantEntity = (__int64)*p_maskLabel;
              if ( !*p_maskLabel )
                goto LABEL_1057;
              v252 = (System_String_o *)StringLiteral_1/*""*/;
              goto LABEL_1017;
            }
          }
        }
      }
    }
    servantEntity = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v248 = *p_maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8452/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
    if ( v248 )
    {
LABEL_1016:
      v252 = (System_String_o *)servantEntity;
      servantEntity = (__int64)v248;
LABEL_1017:
      UILabel__set_text((UILabel_o *)servantEntity, v252, 0LL);
      servantEntity = (__int64)*p_statusTxtLb;
      if ( *p_statusTxtLb )
      {
LABEL_1018:
        UILabel__set_text((UILabel_o *)servantEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        return;
      }
LABEL_1057:
      sub_B0D97C(servantEntity);
    }
LABEL_624:
    sub_B0D97C(servantEntity);
  }
  if ( !item->fields.isHeroineSvt )
    goto LABEL_981;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_28088484(126, 0LL) )
  {
LABEL_981:
    servantEntity = (__int64)*p_maskSprite;
    if ( *p_maskSprite )
    {
      servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
      if ( servantEntity )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, item->fields.isCanNotLock, 0LL);
        if ( item->fields.isCanNotLock )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v247 = LocalizationManager__Get((System_String_o *)StringLiteral_8452/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
        }
        else
        {
          v247 = (System_String_o *)StringLiteral_1/*""*/;
        }
        servantEntity = (__int64)*p_maskLabel;
        if ( *p_maskLabel )
        {
          UILabel__set_text((UILabel_o *)servantEntity, v247, 0LL);
          servantEntity = (__int64)*p_statusTxtLb;
          if ( !*p_statusTxtLb )
            goto LABEL_624;
          goto LABEL_1018;
        }
      }
    }
    goto LABEL_1057;
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

  if ( (byte_421731B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, item);
    byte_421731B = 1;
  }
  dragSelect = (UnityEngine_Object_o *)this->fields.dragSelect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(dragSelect, 0LL, 0LL) )
  {
    v6 = this->fields.dragSelect;
    if ( item )
    {
      if ( v6 )
      {
        dragSelectNum = item->fields.dragSelectNum;
        selectNum = item->fields.selectNum;
LABEL_12:
        DragSelectComponent__Set(v6, selectNum, dragSelectNum, 0LL);
        return;
      }
    }
    else if ( v6 )
    {
      selectNum = -1;
      dragSelectNum = -1;
      goto LABEL_12;
    }
    sub_B0D97C(v6);
  }
}