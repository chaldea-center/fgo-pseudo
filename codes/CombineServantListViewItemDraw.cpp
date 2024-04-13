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
  _BOOL4 IsSelect; // w0
  const MethodInfo *v23; // x1
  unsigned int type; // w8
  _BOOL4 v25; // w23
  bool CanNotBaseSelect; // w0
  bool v27; // w22
  ServantEntity_o *servantEntity; // x0
  _BOOL4 v29; // w25
  int v30; // w24
  UnityEngine_Object_o *baseButton; // x23
  const MethodInfo *v32; // x2
  UILabel_o *v33; // x21
  LocalizationManager_c *v34; // x0
  UILabel_o *maskLabel; // x21
  UnityEngine_Object_o *v36; // x22
  int v37; // w22
  int32_t v38; // w8
  __int64 *v39; // x8
  int32_t atkBase; // w8
  UILabel_o *v41; // x21
  UILabel_o *v42; // x21

  v4 = isSelectEnable;
  if ( (byte_42EB57C & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, isSelectEnable, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_9416/*"NONSELECT_UNDER_STATUS_MAX"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_9411/*"NONSELECT_MATERIAL"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_9414/*"NONSELECT_NPUP_BASE"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_9412/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v19, v20, v21);
    byte_42EB57C = 1;
  }
  if ( item )
  {
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
    type = item->fields.type;
    v25 = IsSelect;
    if ( type > 0xB )
    {
      v27 = 0;
    }
    else
    {
      if ( ((1 << type) & 0xFDD) != 0 )
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, v23);
      else
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotSelect(item, v23);
      v27 = CanNotBaseSelect;
    }
    servantEntity = item->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_107;
    v29 = !ServantEntity__get_IsOrganization(servantEntity, 0LL);
    v30 = !v25;
  }
  else
  {
    v27 = 0;
    v30 = 1;
    v29 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !v27 )
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
    v36 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( item->fields.isMaxSelect )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
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
        v37 = 1;
        ((void (__fastcall *)(ServantEntity_o *, _QWORD, __int64, void *))servantEntity->klass[1]._1.events)(
          servantEntity,
          0LL,
          1LL,
          servantEntity->klass[1]._1.properties);
LABEL_56:
        v38 = item->fields.type;
        if ( v38 == 5 )
        {
          if ( !(v37 & 1 | item->fields.isMaxNextLv) )
            goto LABEL_93;
        }
        else if ( v38 == 1 )
        {
          if ( ((v30 & ~(v29 || v4) | v37) & 1) == 0 )
            goto LABEL_93;
        }
        else if ( !v37 )
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
        v34 = LocalizationManager_TypeInfo;
        if ( item->fields.type == 5 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
          {
LABEL_69:
            v39 = &StringLiteral_9414/*"NONSELECT_NPUP_BASE"*/;
            goto LABEL_91;
          }
LABEL_67:
          if ( !v34->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v34);
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
      if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
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
    v37 = 0;
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
          v41 = this->fields.maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9416/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v41 )
            goto LABEL_107;
          UILabel__set_text(v41, (System_String_o *)servantEntity, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectSecondStatusUpHp )
          goto LABEL_93;
      }
      else
      {
        if ( atkBase >= 1 && item->fields.isNotSelectStatusUpAtk )
        {
          v42 = this->fields.maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9416/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v42 )
            goto LABEL_107;
          UILabel__set_text(v42, (System_String_o *)servantEntity, 0LL);
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
      v39 = &StringLiteral_9416/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_91:
      servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)*v39, 0LL);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)servantEntity, 0LL);
        goto LABEL_93;
      }
LABEL_107:
      sub_B5D69C(servantEntity, v23);
    }
    maskLabel = this->fields.maskLabel;
    v34 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
    {
LABEL_90:
      v39 = &StringLiteral_9411/*"NONSELECT_MATERIAL"*/;
      goto LABEL_91;
    }
LABEL_88:
    if ( !v34->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v34);
    goto LABEL_90;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, v23) )
  {
    v33 = this->fields.maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9412/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
    if ( !v33 )
      goto LABEL_107;
    UILabel__set_text(v33, (System_String_o *)servantEntity, 0LL);
    if ( item->fields.type == 5 )
    {
      v34 = LocalizationManager_TypeInfo;
      maskLabel = this->fields.maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_69;
      goto LABEL_67;
    }
  }
LABEL_93:
  CombineServantListViewItemDraw__SetSelectDisp(this, item, v32);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  int v110; // w1
  int v111; // w2
  __int64 v112; // x3
  int v113; // w1
  int v114; // w2
  __int64 v115; // x3
  int v116; // w1
  int v117; // w2
  __int64 v118; // x3
  int v119; // w1
  int v120; // w2
  __int64 v121; // x3
  int v122; // w1
  int v123; // w2
  __int64 v124; // x3
  int v125; // w1
  int v126; // w2
  __int64 v127; // x3
  int v128; // w1
  int v129; // w2
  __int64 v130; // x3
  int v131; // w1
  int v132; // w2
  __int64 v133; // x3
  int v134; // w1
  int v135; // w2
  __int64 v136; // x3
  int v137; // w1
  int v138; // w2
  __int64 v139; // x3
  int v140; // w1
  int v141; // w2
  __int64 v142; // x3
  int v143; // w1
  int v144; // w2
  __int64 v145; // x3
  int v146; // w1
  int v147; // w2
  __int64 v148; // x3
  int v149; // w1
  int v150; // w2
  __int64 v151; // x3
  int v152; // w1
  int v153; // w2
  __int64 v154; // x3
  int v155; // w1
  int v156; // w2
  __int64 v157; // x3
  int v158; // w1
  int v159; // w2
  __int64 v160; // x3
  int v161; // w1
  int v162; // w2
  __int64 v163; // x3
  UnityEngine_Object_o *svtCommandCardList; // x23
  System_String_o *switchInfoList; // x1
  UILabel_o *gameObject; // x0
  int32_t type; // w19
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  IconLabelInfo_o *iconLabelInfo1; // x2
  UIIconLabel_o *subIconLabel; // x23
  int32_t rarity; // w24
  const MethodInfo *v172; // x1
  int32_t m12_low; // w25
  const MethodInfo *v174; // x4
  UILabel_o **p_statusTxtLb; // x20
  struct UISprite_o **p_maskSprite; // x28
  struct UILabel_o **p_maskLabel; // x25
  UnityEngine_Object_o *pushImg; // x23
  UnityEngine_Object_o *materialTdSprite; // x23
  const MethodInfo *v180; // x2
  UISprite_o *v181; // x23
  const MethodInfo *v182; // x1
  int32_t v183; // w23
  int32_t v184; // w8
  bool CanNotBaseSelect; // w0
  UnityEngine_Object_o *v186; // x22
  UILabel_o *v187; // x22
  __int64 *v188; // x8
  int32_t v189; // w2
  const MethodInfo *v190; // x2
  UserServantEntity_o *userSvtEntity; // x0
  char v192; // w19
  UILabel_o *v193; // x23
  UILabel_o *v194; // x23
  UILabel_o *v195; // x23
  UILabel_o *v196; // x23
  UILabel_o *v197; // x23
  UILabel_o *v198; // x23
  UILabel_o *v199; // x23
  UILabel_o *v200; // x23
  UILabel_o *v201; // x23
  __int64 *v202; // x8
  UILabel_o *v203; // x22
  System_String_o *v204; // x23
  float v205; // s0
  Il2CppObject *v206; // x0
  UILabel_o *v207; // x23
  const MethodInfo *v208; // x1
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x23
  int32_t v211; // w8
  UILabel_o *v212; // x22
  UILabel_o *v213; // x22
  UILabel_o *v214; // x22
  UILabel_o *v215; // x22
  __int64 *v216; // x8
  __int64 servantEntity; // x0
  UnityEngine_Object_o *v218; // x23
  int v219; // w19
  UILabel_o *v220; // x22
  __int64 *v221; // x8
  UILabel_o *v222; // x22
  UILabel_o *v223; // x23
  UILabel_o *v224; // x22
  UILabel_o *v225; // x22
  int32_t v226; // w8
  System_String_o *v227; // x1
  UILabel_o *fortificationAppointmentLabel; // x22
  float v229; // s0
  float v230; // s2
  float fortificationInfoRootObjOffsetY; // s10
  float v232; // s8
  float v233; // s9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v234; // x22
  System_String_o *v235; // x23
  float v236; // s0
  Il2CppObject *v237; // x0
  System_String_o *v238; // x0
  UnityEngine_Object_o *v239; // x22
  UILabel_o *v240; // x22
  LocalizationManager_c *v241; // x0
  bool v242; // w0
  UnityEngine_Object_o *v243; // x22
  __int64 *v244; // x8
  UnityEngine_Object_c *v245; // x0
  System_String_o *v246; // x1
  UnityEngine_Object_o *v247; // x22
  int32_t v248; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  System_Text_StringBuilder_o *v250; // x22
  SkillInfo_array *v251; // x8
  __int64 v252; // x9
  unsigned __int64 v253; // x26
  __int64 v254; // x27
  signed __int64 v255; // x20
  SkillInfo_o *v256; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v259; // w25
  Il2CppObject *v260; // x24
  bool v261; // w0
  __int64 *v262; // x10
  UILabel_o *skillLvLabel; // x23
  UnityEngine_Object_o *v264; // x22
  UILabel_o *v265; // x22
  UILabel_o *v266; // x22
  __int64 *v267; // x8
  UnityEngine_Object_o *v268; // x22
  SvtUseSkillData_o *AppendSkillData; // x0
  struct System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v271; // x24
  System_Text_StringBuilder_o *v272; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v274; // x9
  unsigned __int64 v275; // x27
  __int64 v276; // x20
  signed __int64 v277; // x28
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v279; // x0
  int32_t v280; // w26
  int32_t v281; // w0
  int v282; // t1
  Il2CppObject *v283; // x25
  bool v284; // w0
  __int64 *v285; // x10
  UILabel_o *v286; // x24
  UILabel_o *v287; // x22
  UILabel_o *v288; // x22
  UILabel_o *v289; // x22
  __int64 *v290; // x8
  UnityEngine_Object_o *v291; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  const MethodInfo *v295; // x1
  const MethodInfo *v296; // x1
  Il2CppObject *v297; // x0
  const MethodInfo *v298; // x1
  ItemIconComponent_o *coinIcon; // x22
  int32_t v300; // w8
  int32_t v301; // w2
  UnityEngine_Object_o *v302; // x22
  UILabel_o *v303; // x22
  __int64 *v304; // x8
  UnityEngine_Object_o *v305; // x22
  UnityEngine_Object_o *v306; // x22
  UILabel_o *v307; // x22
  __int64 *v308; // x8
  UnityEngine_Object_o *v309; // x22
  UnityEngine_Object_o *v310; // x22
  UnityEngine_Object_o *v311; // x22
  int32_t v312; // w8
  const MethodInfo *v313; // x1
  int32_t v314; // w22
  struct ServantFaceIconComponent_o *v315; // x8
  bool v316; // w0
  UnityEngine_Object_o *v317; // x22
  UILabel_o *v318; // x22
  UILabel_o *v319; // x22
  struct UILabel_o *v320; // x22
  System_String_o *v321; // x1
  UnityEngine_Object_o *v322; // x22
  ServantCommandCardListComponent_o *v323; // x22
  const MethodInfo *v324; // x1
  UnityEngine_Object_o *v325; // x22
  UILabel_o *v326; // x22
  __int64 *v327; // x8
  UnityEngine_Object_o *v328; // x22
  UnityEngine_Object_o *v329; // x22
  struct UILabel_o *v330; // x19
  System_String_o *v331; // x1
  __int64 v332; // x0
  struct UISprite_o **v333; // [xsp+18h] [xbp-B8h]
  struct UILabel_o **v334; // [xsp+20h] [xbp-B0h]
  struct UILabel_o **v335; // [xsp+28h] [xbp-A8h]
  CombineServantListViewItemDraw_o *v336; // [xsp+30h] [xbp-A0h]
  int32_t v337; // [xsp+3Ch] [xbp-94h]
  int32_t SkillOpenItemNum; // [xsp+4Ch] [xbp-84h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-80h] BYREF
  MethodInfo v340; // [xsp+58h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v341; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v342; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EB57B & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, isSelectEnable);
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&int_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_12403/*"SKILL_LVDISP_TXT"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_10495/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_9416/*"NONSELECT_UNDER_STATUS_MAX"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_6492/*"FORTIFICATION_APPOINTMENT"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_3221/*"COMBINE_CAN_STATUS_UP_INFO"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_8923/*"MSG_CAMPAIGN_COMBINE_EXP"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_12401/*"SKILL_LVDISP_ENABLE_TXT"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_9411/*"NONSELECT_MATERIAL"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_22124/*"ribbon_noblephantasmup_01"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_9410/*"NONSELECT_LIMITUP_BASE"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_10312/*"PARTY_MEMBER_TXT"*/, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_9414/*"NONSELECT_NPUP_BASE"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_12650/*"SUPPORT_MEMBER"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_8919/*"MSG_ABLED_LIMITUP"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_11775/*"SELECT_PUSH"*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_11753/*"SELECT_CANNOT"*/, v89, v90, v91);
    sub_B5D5C4(&StringLiteral_9465/*"NPUP_BASE"*/, v92, v93, v94);
    sub_B5D5C4(&StringLiteral_12400/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/, v95, v96, v97);
    sub_B5D5C4(&StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/, v98, v99, v100);
    sub_B5D5C4(&StringLiteral_9455/*"NO_SELECT_FRIENDSHIP_EXCEED"*/, v101, v102, v103);
    sub_B5D5C4(&StringLiteral_11682/*"SAME_SERVANT"*/, v104, v105, v106);
    sub_B5D5C4(&StringLiteral_8918/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, v107, v108, v109);
    sub_B5D5C4(&StringLiteral_9412/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v110, v111, v112);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v113, v114, v115);
    sub_B5D5C4(&StringLiteral_12402/*"SKILL_LVDISP_SINGLE_TXT"*/, v116, v117, v118);
    sub_B5D5C4(&StringLiteral_8920/*"MSG_ABLED_SKILLUP"*/, v119, v120, v121);
    sub_B5D5C4(&StringLiteral_9413/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, v122, v123, v124);
    sub_B5D5C4(&StringLiteral_9417/*"NONSKILL_TXT"*/, v125, v126, v127);
    sub_B5D5C4(&StringLiteral_8515/*"LOCKMODE_SELECTED_SERVANT"*/, v128, v129, v130);
    sub_B5D5C4(&StringLiteral_6408/*"FAVORITE_SERVANT"*/, v131, v132, v133);
    sub_B5D5C4(&StringLiteral_3040/*"CHOICE_SERVANT"*/, v134, v135, v136);
    sub_B5D5C4(&StringLiteral_8922/*"MSG_ABLED_TDUP"*/, v137, v138, v139);
    sub_B5D5C4(&StringLiteral_11748/*"SEAL_COMBINE_LIMIT_THIRD"*/, v140, v141, v142);
    sub_B5D5C4(&StringLiteral_9409/*"NONSELECT_BASE_ALLMAX"*/, v143, v144, v145);
    sub_B5D5C4(&StringLiteral_9456/*"NO_SELECT_LVEXCEED"*/, v146, v147, v148);
    sub_B5D5C4(&StringLiteral_1/*""*/, v149, v150, v151);
    sub_B5D5C4(&StringLiteral_9415/*"NONSELECT_SKILLUP_BASE"*/, v152, v153, v154);
    sub_B5D5C4(&StringLiteral_11774/*"SELECT_PROTECTED_EVENT_SVT"*/, v155, v156, v157);
    sub_B5D5C4(&StringLiteral_8516/*"LOCK_SERVANT"*/, v158, v159, v160);
    sub_B5D5C4(&StringLiteral_9408/*"NONSEELECT_STATUSUP_MAX"*/, v161, v162, v163);
    byte_42EB57B = 1;
  }
  v340.name = 0LL;
  skillInfoList = 0LL;
  v340.methodPointer = 0LL;
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
  gameObject = (UILabel_o *)CombineServantListViewItem__get_UserSvtEntity(item, (const MethodInfo *)switchInfoList);
  iconLabelInfo1 = item->fields.iconLabelInfo1;
  switchInfoList = (System_String_o *)gameObject;
  if ( type )
  {
    if ( !servantFaceIcon )
      goto LABEL_1055;
    ServantFaceIconComponent__Set_30775392(
      servantFaceIcon,
      (UserServantEntity_o *)gameObject,
      iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
    subIconLabel = this->fields.subIconLabel;
    rarity = item->fields.rarity;
    gameObject = (UILabel_o *)CombineServantListViewItem__get_UserSvtEntity(item, v172);
    if ( !gameObject )
      goto LABEL_1055;
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_1055;
    ServantFaceIconComponent__Set_30775392(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0LL, 0LL);
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
    gameObject = (UILabel_o *)CombineServantListViewItem__get_UserSvtEntity(item, (const MethodInfo *)switchInfoList);
    if ( !gameObject )
      goto LABEL_1055;
  }
  m12_low = LODWORD(gameObject->fields.mLocalToPanel.fields.m12);
  gameObject = (UILabel_o *)CombineServantListViewItem__get_UserSvtEntity(item, (const MethodInfo *)switchInfoList);
  if ( !gameObject || !subIconLabel )
    goto LABEL_1055;
  UIIconLabel__Set_41886452(
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
    (int32_t *)&v340.name + 1,
    (int32_t *)&v340.name,
    (int32_t *)&v340.methodPointer + 1,
    v174);
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
      v181 = this->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v181, (System_String_o *)StringLiteral_22124/*"ribbon_noblephantasmup_01"*/, 0LL);
      v183 = item->fields.type;
      if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      }
      if ( CombineServantListViewManager__GetSortKind(v183, v182) == 1 )
      {
        gameObject = (UILabel_o *)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_1055;
        v341.fields.x = 0.65;
        v341.fields.y = 1.0;
        v341.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v341, 0LL);
      }
    }
  }
  v184 = item->fields.type;
  switch ( v184 )
  {
    case 5:
      gameObject = (UILabel_o *)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_1055;
      v189 = SHIDWORD(v340.name) <= 0 ? -1 : LODWORD(v340.name);
      UIIconLabel__Set_41886452(
        (UIIconLabel_o *)gameObject,
        33,
        v189,
        SHIDWORD(v340.methodPointer),
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
        v223 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11774/*"SELECT_PROTECTED_EVENT_SVT"*/, 0LL);
        if ( !v223 )
          goto LABEL_1055;
        UILabel__set_text(v223, (System_String_o *)gameObject, 0LL);
        v192 = 1;
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
          v193 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10312/*"PARTY_MEMBER_TXT"*/, 0LL);
          if ( !v193 )
            goto LABEL_1055;
          UILabel__set_text(v193, (System_String_o *)gameObject, 0LL);
          v192 = 1;
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
          v194 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6408/*"FAVORITE_SERVANT"*/, 0LL);
          if ( !v194 )
            goto LABEL_1055;
          UILabel__set_text(v194, (System_String_o *)gameObject, 0LL);
          v192 = 1;
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
          v195 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8516/*"LOCK_SERVANT"*/, 0LL);
          if ( !v195 )
            goto LABEL_1055;
          UILabel__set_text(v195, (System_String_o *)gameObject, 0LL);
          v192 = 1;
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
          v196 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3040/*"CHOICE_SERVANT"*/, 0LL);
          if ( !v196 )
            goto LABEL_1055;
          UILabel__set_text(v196, (System_String_o *)gameObject, 0LL);
          v192 = 1;
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
          v197 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11682/*"SAME_SERVANT"*/, 0LL);
          if ( !v197 )
            goto LABEL_1055;
          UILabel__set_text(v197, (System_String_o *)gameObject, 0LL);
          v192 = 1;
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
          v198 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9411/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v198 )
            goto LABEL_1055;
          UILabel__set_text(v198, (System_String_o *)gameObject, 0LL);
          v192 = 1;
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
          v199 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9411/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v199 )
            goto LABEL_1055;
          UILabel__set_text(v199, (System_String_o *)gameObject, 0LL);
          v192 = 1;
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
          v200 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
          if ( !v200 )
            goto LABEL_1055;
          UILabel__set_text(v200, (System_String_o *)gameObject, 0LL);
          v192 = 1;
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
          v201 = *p_maskLabel;
          if ( item->fields.isParty )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v202 = &StringLiteral_10312/*"PARTY_MEMBER_TXT"*/;
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v202 = &StringLiteral_12650/*"SUPPORT_MEMBER"*/;
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)*v202, 0LL);
          if ( !v201 )
            goto LABEL_1055;
          UILabel__set_text(v201, (System_String_o *)gameObject, 0LL);
          v192 = 1;
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
          v207 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11775/*"SELECT_PUSH"*/, 0LL);
          if ( !v207 )
            goto LABEL_1055;
          UILabel__set_text(v207, (System_String_o *)gameObject, 0LL);
          v192 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, item, v190);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(item, v208);
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
            if ( CombineServantListViewItem__get_IsCanNotSelectMaterial(item, (const MethodInfo *)switchInfoList) )
              goto LABEL_343;
            v222 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9412/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
            if ( !v222 )
              goto LABEL_1055;
            UILabel__set_text(v222, (System_String_o *)gameObject, 0LL);
            if ( item->fields.type != 5 )
              break;
            v215 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v216 = &StringLiteral_9414/*"NONSELECT_NPUP_BASE"*/;
          }
          else
          {
            if ( item->fields.isCanStUp )
            {
LABEL_236:
              if ( item->fields.isStatusUpSvt )
              {
                v211 = item->fields.rarity;
                if ( v211 <= 3 )
                {
                  if ( item->fields.isAtkUpMax || item->fields.isHpUpMax )
                  {
                    v224 = *p_maskLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9416/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                    if ( !v224 )
                      goto LABEL_1055;
                    UILabel__set_text(v224, (System_String_o *)gameObject, 0LL);
                  }
                  if ( item->fields.isAtkSecondUpMax || item->fields.isHpSecondUpMax )
                  {
                    v225 = *p_maskLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9416/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                    if ( !v225 )
                      goto LABEL_1055;
                    UILabel__set_text(v225, (System_String_o *)gameObject, 0LL);
                  }
                  if ( !item->fields.isNotSelectStatusUpAtk && !item->fields.isNotSelectStatusUpHp )
                    goto LABEL_343;
                  v215 = *p_maskLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v216 = &StringLiteral_9416/*"NONSELECT_UNDER_STATUS_MAX"*/;
                }
                else
                {
                  if ( v211 != 4 )
                    goto LABEL_343;
                  if ( item->fields.atkBase >= 1 )
                  {
                    if ( item->fields.isAtkSecondUpMax || item->fields.isNotSelectSecondStatusUpAtk )
                    {
                      v212 = *p_maskLabel;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9416/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                      if ( !v212 )
                        goto LABEL_1055;
                      UILabel__set_text(v212, (System_String_o *)gameObject, 0LL);
                    }
                    if ( !item->fields.isAtkUpMax )
                    {
                      v213 = *p_maskLabel;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9413/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0LL);
                      if ( !v213 )
                        goto LABEL_1055;
                      UILabel__set_text(v213, (System_String_o *)gameObject, 0LL);
                    }
                  }
                  if ( item->fields.hpBase < 1 )
                    goto LABEL_343;
                  if ( item->fields.isHpSecondUpMax || item->fields.isNotSelectSecondStatusUpHp )
                  {
                    v214 = *p_maskLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9416/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                    if ( !v214 )
                      goto LABEL_1055;
                    UILabel__set_text(v214, (System_String_o *)gameObject, 0LL);
                  }
                  if ( item->fields.isHpUpMax )
                    goto LABEL_343;
                  v215 = *p_maskLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v216 = &StringLiteral_9413/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
                }
                goto LABEL_341;
              }
LABEL_343:
              v226 = item->fields.type;
              if ( v226 != 5 )
                goto LABEL_402;
              if ( !item->fields.isBaseSvt )
                break;
              v220 = *p_maskLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v221 = &StringLiteral_9465/*"NPUP_BASE"*/;
LABEL_349:
              servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v221, 0LL);
              if ( !v220 )
                goto LABEL_624;
              UILabel__set_text(v220, (System_String_o *)servantEntity, 0LL);
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
              gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6492/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
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
              *(UnityEngine_Vector3_o *)&v229 = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)gameObject,
                                                  0LL);
              gameObject = (UILabel_o *)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1055;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              v232 = v229;
              v233 = v230;
              gameObject = (UILabel_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)gameObject,
                                          0LL);
              if ( !gameObject )
                goto LABEL_1055;
              v342.fields.x = v232;
              v342.fields.y = fortificationInfoRootObjOffsetY;
              v342.fields.z = v233;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v342, 0LL);
              goto LABEL_343;
            }
            if ( (v192 & 1) != 0 )
              goto LABEL_343;
            v215 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v216 = &StringLiteral_9411/*"NONSELECT_MATERIAL"*/;
          }
LABEL_341:
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)*v216, 0LL);
          if ( !v215 )
            goto LABEL_1055;
          UILabel__set_text(v215, (System_String_o *)gameObject, 0LL);
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
        v218 = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( item->fields.isMaxSelect )
        {
          if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v218, 0LL, 0LL) )
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
            v219 = 1;
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
          if ( UnityEngine_Object__op_Inequality(v218, 0LL, 0LL) )
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
        v219 = 0;
        if ( item->fields.type != 1 )
          goto LABEL_297;
LABEL_291:
        servantEntity = (__int64)item->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_624;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)servantEntity, 0LL) && !isSelectEnable )
        {
          if ( !(v219 & 1 | !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL)) )
            break;
        }
        else
        {
LABEL_297:
          if ( !v219 )
            break;
        }
        servantEntity = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_624;
        servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
        if ( !servantEntity )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
        v220 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v221 = &StringLiteral_9411/*"NONSELECT_MATERIAL"*/;
        goto LABEL_349;
      }
LABEL_105:
      v192 = 0;
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
      CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList);
      v186 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( CanNotBaseSelect )
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v186, 0LL, 0LL) )
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
            v187 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v188 = &StringLiteral_9409/*"NONSELECT_BASE_ALLMAX"*/;
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
            v227 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_359;
          }
          v187 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v188 = &StringLiteral_11753/*"SELECT_CANNOT"*/;
LABEL_357:
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)*v188, 0LL);
          if ( !v187 )
            goto LABEL_1055;
          v227 = (System_String_o *)gameObject;
          gameObject = v187;
LABEL_359:
          UILabel__set_text(gameObject, v227, 0LL);
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
        v187 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v188 = &StringLiteral_9411/*"NONSELECT_MATERIAL"*/;
        goto LABEL_357;
      }
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v186, 0LL, 0LL) )
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
          v234 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v234,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v235 = LocalizationManager__Get((System_String_o *)StringLiteral_8923/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v340.methodPointer = item->fields.combineExpCampaignValue;
          v237 = (Il2CppObject *)System_Single__ToString(v236, &v340);
          gameObject = (UILabel_o *)System_String__Format(v235, v237, 0LL);
          if ( v234 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v234,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
            v238 = LocalizationManager__Get((System_String_o *)StringLiteral_3221/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v234,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v238,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
            gameObject = (UILabel_o *)item->fields._NoticeTween_k__BackingField;
            if ( gameObject )
            {
              CombineServantListViewNoticeTween__AddTarget(
                (CombineServantListViewNoticeTween_o *)gameObject,
                *p_statusTxtLb,
                (System_Collections_Generic_List_string__o *)v234,
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
            v203 = *p_statusTxtLb;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v204 = LocalizationManager__Get((System_String_o *)StringLiteral_8923/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
            *(float *)&v340.methodPointer = item->fields.combineExpCampaignValue;
            v206 = (Il2CppObject *)System_Single__ToString(v205, &v340);
            gameObject = (UILabel_o *)System_String__Format(v204, v206, 0LL);
            if ( v203 )
            {
LABEL_209:
              UILabel__set_text(v203, (System_String_o *)gameObject, 0LL);
              goto LABEL_394;
            }
          }
        }
LABEL_1055:
        sub_B5D69C(gameObject, switchInfoList);
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
            v203 = *p_statusTxtLb;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3221/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
            if ( v203 )
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
  v226 = item->fields.type;
LABEL_402:
  if ( v226 != 9 )
  {
    if ( v226 != 2 )
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
    if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList) )
    {
      v239 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v239, 0LL, 0LL) )
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
        v240 = *p_maskLabel;
        v241 = LocalizationManager_TypeInfo;
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
      v247 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v247, 0LL, 0LL) )
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
    v245 = UnityEngine_Object_TypeInfo;
    v243 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !item->fields.isSealCombineLimit )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v243, 0LL, 0LL) )
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
        v240 = *p_statusTxtLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v244 = &StringLiteral_8919/*"MSG_ABLED_LIMITUP"*/;
        goto LABEL_491;
      }
      goto LABEL_494;
    }
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
      || UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
LABEL_458:
      if ( !UnityEngine_Object__op_Inequality(v243, 0LL, 0LL) )
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
      v246 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_493;
    }
LABEL_457:
    j_il2cpp_runtime_class_init_0(v245);
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
  v242 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList);
  v243 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !v242 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
      || UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_458;
    }
    v245 = UnityEngine_Object_TypeInfo;
    goto LABEL_457;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v243, 0LL, 0LL) )
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
      v240 = *p_maskLabel;
      v241 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_447:
        v244 = &StringLiteral_9411/*"NONSELECT_MATERIAL"*/;
LABEL_491:
        servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v244, 0LL);
        if ( !v240 )
          goto LABEL_624;
        v246 = (System_String_o *)servantEntity;
        servantEntity = (__int64)v240;
LABEL_493:
        UILabel__set_text((UILabel_o *)servantEntity, v246, 0LL);
        goto LABEL_494;
      }
LABEL_445:
      if ( !v241->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v241);
      goto LABEL_447;
    }
    if ( item->fields.isLimitCntMax )
    {
      v240 = *p_maskLabel;
      v241 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
LABEL_473:
        if ( !v241->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v241);
      }
LABEL_475:
      v244 = &StringLiteral_9410/*"NONSELECT_LIMITUP_BASE"*/;
      goto LABEL_491;
    }
    if ( item->fields.isSealCombineLimit )
    {
      v240 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v244 = &StringLiteral_11748/*"SEAL_COMBINE_LIMIT_THIRD"*/;
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
  v248 = item->fields.type;
  v337 = modeKind;
  v335 = &this->fields.statusTxtLb;
  v336 = this;
  v333 = &this->fields.maskSprite;
  v334 = &this->fields.maskLabel;
  if ( v248 != 3 )
    goto LABEL_591;
  CombineServantListViewItem__GetSkillInfo(item, &skillInfoList, v180);
  enableSkillUp = item->fields.enableSkillUp;
  v250 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v250, 0LL);
  v251 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_624;
  v252 = *(_QWORD *)&skillInfoList->max_length;
  if ( (int)v252 >= 1 )
  {
    v253 = 0LL;
    v254 = (unsigned int)(v252 - 1);
    v255 = (int)v252;
    while ( 1 )
    {
      if ( v253 >= v251->max_length )
        goto LABEL_1056;
      v256 = v251->m_Items[v253];
      if ( v256 )
      {
        lv = v256->fields.lv;
        p_lv = &v256->fields.lv;
        v259 = *(p_lv - 1);
        if ( lv > 0 )
        {
          servantEntity = (__int64)System_Int32__ToString((int32_t)p_lv, 0LL);
          goto LABEL_511;
        }
      }
      else
      {
        v259 = -1;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9417/*"NONSKILL_TXT"*/, 0LL);
LABEL_511:
      v260 = (Il2CppObject *)servantEntity;
      if ( enableSkillUp )
      {
        v261 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v259,
                 (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v254 == v253 )
        {
          if ( v261 )
          {
            v262 = &StringLiteral_12400/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v262 = &StringLiteral_12400/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v262 = &StringLiteral_12400/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              }
            }
          }
          else
          {
            v262 = &StringLiteral_12402/*"SKILL_LVDISP_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v262 = &StringLiteral_12402/*"SKILL_LVDISP_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v262 = &StringLiteral_12402/*"SKILL_LVDISP_SINGLE_TXT"*/;
              }
            }
          }
        }
        else if ( v261 )
        {
          v262 = &StringLiteral_12401/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v262 = &StringLiteral_12401/*"SKILL_LVDISP_ENABLE_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v262 = &StringLiteral_12401/*"SKILL_LVDISP_ENABLE_TXT"*/;
            }
          }
        }
        else
        {
          v262 = &StringLiteral_12403/*"SKILL_LVDISP_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v262 = &StringLiteral_12403/*"SKILL_LVDISP_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v262 = &StringLiteral_12403/*"SKILL_LVDISP_TXT"*/;
            }
          }
        }
        servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v262, 0LL);
        if ( v250 )
        {
          servantEntity = (__int64)System_Text_StringBuilder__AppendFormat(
                                     v250,
                                     (System_String_o *)servantEntity,
                                     v260,
                                     0LL);
          if ( (__int64)++v253 >= v255 )
            goto LABEL_532;
          v251 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_624;
    }
  }
  if ( !v250 )
    goto LABEL_624;
LABEL_532:
  this = v336;
  skillLvLabel = v336->fields.skillLvLabel;
  servantEntity = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v250->klass->vtable._3_ToString.method)(
                    v250,
                    v250->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !skillLvLabel )
    goto LABEL_624;
  UILabel__set_text(skillLvLabel, (System_String_o *)servantEntity, 0LL);
  servantEntity = (__int64)v336->fields.skillLvLabel;
  if ( !servantEntity )
    goto LABEL_624;
  servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
  p_maskLabel = v334;
  p_statusTxtLb = v335;
  p_maskSprite = v333;
  if ( !servantEntity )
    goto LABEL_624;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  modeKind = v337;
  if ( item->fields.isParty )
  {
    servantEntity = (__int64)v336->fields.partyIcon;
    if ( !servantEntity )
      goto LABEL_624;
    FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    servantEntity = (__int64)v336->fields.lockImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList) )
  {
    v264 = (UnityEngine_Object_o *)v336->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v264, 0LL, 0LL) )
      goto LABEL_586;
    servantEntity = (__int64)v336->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)v336->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*v333;
    if ( !*v333 )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v265 = *v334;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9415/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v265 )
      goto LABEL_624;
    UILabel__set_text(v265, (System_String_o *)servantEntity, 0LL);
    if ( !item->fields.isHeroineSvt )
      goto LABEL_586;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_29295864(126, 0LL) )
      goto LABEL_586;
    v266 = *v334;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v267 = &StringLiteral_11753/*"SELECT_CANNOT"*/;
    goto LABEL_577;
  }
  v268 = (UnityEngine_Object_o *)v336->fields.baseButton;
  if ( !item->fields.isSkillUpItemNum )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v268, 0LL, 0LL) )
    {
      servantEntity = (__int64)v336->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_624;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
        servantEntity,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
      servantEntity = (__int64)v336->fields.baseButton;
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
  if ( UnityEngine_Object__op_Inequality(v268, 0LL, 0LL) )
  {
    servantEntity = (__int64)v336->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)v336->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*v335;
    if ( !*v335 )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v266 = *v335;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v267 = &StringLiteral_8920/*"MSG_ABLED_SKILLUP"*/;
LABEL_577:
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v267, 0LL);
    if ( !v266 )
      goto LABEL_624;
    UILabel__set_text(v266, (System_String_o *)servantEntity, 0LL);
  }
LABEL_586:
  if ( item->fields.isBaseSvt )
  {
    servantEntity = (__int64)v336->fields.removeImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  v248 = item->fields.type;
LABEL_591:
  if ( v248 != 11 )
    goto LABEL_702;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(item, (const MethodInfo *)switchInfoList);
  enableAppendSkillUp = item->fields.enableAppendSkillUp;
  v271 = AppendSkillData;
  v272 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v272, 0LL);
  if ( !v271 )
    goto LABEL_624;
  svtUseSkillIdList = v271->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_624;
  v274 = *(_QWORD *)&svtUseSkillIdList->max_length;
  if ( (int)v274 >= 1 )
  {
    v275 = 0LL;
    v276 = (unsigned int)(v274 - 1);
    v277 = (int)v274;
    while ( v275 < svtUseSkillIdList->max_length )
    {
      svtSkillLvList = v271->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_624;
      if ( v275 >= svtSkillLvList->max_length )
        break;
      v279 = (__int64)svtSkillLvList + 4 * v275;
      v280 = svtUseSkillIdList->m_Items[v275 + 1];
      v282 = *(_DWORD *)(v279 + 32);
      v281 = v279 + 32;
      if ( v282 <= 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9417/*"NONSKILL_TXT"*/, 0LL);
      }
      else
      {
        servantEntity = (__int64)System_Int32__ToString(v281, 0LL);
      }
      v283 = (Il2CppObject *)servantEntity;
      if ( enableAppendSkillUp )
      {
        v284 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v280,
                 (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v275 == v276 )
        {
          if ( v284 )
          {
            v285 = &StringLiteral_12400/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v285 = &StringLiteral_12400/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v285 = &StringLiteral_12400/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              }
            }
          }
          else
          {
            v285 = &StringLiteral_12402/*"SKILL_LVDISP_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v285 = &StringLiteral_12402/*"SKILL_LVDISP_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v285 = &StringLiteral_12402/*"SKILL_LVDISP_SINGLE_TXT"*/;
              }
            }
          }
        }
        else if ( v284 )
        {
          v285 = &StringLiteral_12401/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v285 = &StringLiteral_12401/*"SKILL_LVDISP_ENABLE_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v285 = &StringLiteral_12401/*"SKILL_LVDISP_ENABLE_TXT"*/;
            }
          }
        }
        else
        {
          v285 = &StringLiteral_12403/*"SKILL_LVDISP_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v285 = &StringLiteral_12403/*"SKILL_LVDISP_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v285 = &StringLiteral_12403/*"SKILL_LVDISP_TXT"*/;
            }
          }
        }
        servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v285, 0LL);
        if ( v272 )
        {
          servantEntity = (__int64)System_Text_StringBuilder__AppendFormat(
                                     v272,
                                     (System_String_o *)servantEntity,
                                     v283,
                                     0LL);
          if ( (__int64)++v275 >= v277 )
            goto LABEL_626;
          svtUseSkillIdList = v271->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_624;
    }
LABEL_1056:
    v332 = sub_B5D6C8(servantEntity);
    sub_B5D668(v332, 0LL);
  }
  if ( !v272 )
    goto LABEL_624;
LABEL_626:
  this = v336;
  v286 = v336->fields.skillLvLabel;
  servantEntity = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v272->klass->vtable._3_ToString.method)(
                    v272,
                    v272->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v286 )
    goto LABEL_624;
  UILabel__set_text(v286, (System_String_o *)servantEntity, 0LL);
  servantEntity = (__int64)v336->fields.skillLvLabel;
  p_maskLabel = v334;
  p_statusTxtLb = v335;
  p_maskSprite = v333;
  if ( !servantEntity )
    goto LABEL_624;
  servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
  if ( !servantEntity )
    goto LABEL_624;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  modeKind = v337;
  if ( item->fields.isParty )
  {
    servantEntity = (__int64)v336->fields.partyIcon;
    if ( !servantEntity )
      goto LABEL_624;
    FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    servantEntity = (__int64)v336->fields.lockImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  servantEntity = CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList);
  if ( (servantEntity & 1) != 0 )
  {
    servantEntity = (__int64)*v333;
    if ( !*v333 )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v287 = *v334;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9415/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v287 )
      goto LABEL_624;
    UILabel__set_text(v287, (System_String_o *)servantEntity, 0LL);
    if ( item->fields.isEventJoin )
    {
      v288 = *v334;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10495/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v288 )
        goto LABEL_624;
      UILabel__set_text(v288, (System_String_o *)servantEntity, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_669;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_29295864(126, 0LL) )
      goto LABEL_669;
    v289 = *v334;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v290 = &StringLiteral_11753/*"SELECT_CANNOT"*/;
    goto LABEL_667;
  }
  if ( !enableAppendSkillUp )
    goto LABEL_624;
  if ( enableAppendSkillUp->fields._size > 0 || item->fields.isAppendSkillOpenItemNum )
  {
    servantEntity = (__int64)*v335;
    if ( !*v335 )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v289 = *v335;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v290 = &StringLiteral_8920/*"MSG_ABLED_SKILLUP"*/;
LABEL_667:
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v290, 0LL);
    if ( !v289 )
      goto LABEL_624;
    UILabel__set_text(v289, (System_String_o *)servantEntity, 0LL);
  }
LABEL_669:
  v291 = (UnityEngine_Object_o *)v336->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v291, 0LL, 0LL) )
  {
    servantEntity = (__int64)v336->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)v336->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
  }
  coinInfo = (UnityEngine_Object_o *)v336->fields.coinInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(coinInfo, 0LL, 0LL) )
  {
    switchInfoComp = (UnityEngine_Object_o *)v336->fields.switchInfoComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(switchInfoComp, 0LL, 0LL) )
    {
      switchInfoList = (System_String_o *)v336->fields.switchInfoList;
      if ( switchInfoList )
      {
        servantEntity = (__int64)v336->fields.switchInfoComp;
        if ( !servantEntity )
          goto LABEL_624;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)servantEntity, (UIWidget_array *)switchInfoList, 0LL);
        servantEntity = (__int64)v336->fields.coinInfo;
        if ( !servantEntity )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
        coinNumLabel = v336->fields.coinNumLabel;
        servantEntity = CombineServantListViewItem__get_SkillOpenItemNum(item, v295);
        if ( (servantEntity & 0x80000000) != 0 )
        {
          switchInfoList = (System_String_o *)StringLiteral_1/*""*/;
          if ( !coinNumLabel )
            goto LABEL_624;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(item, v296);
          v297 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum);
          servantEntity = (__int64)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v297, 0LL);
          switchInfoList = (System_String_o *)servantEntity;
          if ( !coinNumLabel )
            goto LABEL_624;
        }
        UILabel__set_text(coinNumLabel, switchInfoList, 0LL);
        servantEntity = CombineServantListViewItem__get_SkillOpenItemId(item, v298);
        coinIcon = v336->fields.coinIcon;
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
          servantEntity = CombineServantListViewItem__get_SkillOpenItemId(item, (const MethodInfo *)switchInfoList);
          if ( !coinIcon )
            goto LABEL_624;
          ItemIconComponent__SetItem(coinIcon, servantEntity, -1, 0LL);
        }
      }
    }
  }
  if ( item->fields.isBaseSvt )
  {
    servantEntity = (__int64)v336->fields.removeImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
LABEL_702:
  v300 = item->fields.type;
  if ( v300 != 4 )
    goto LABEL_756;
  servantEntity = (__int64)this->fields.npIconLabel;
  if ( !servantEntity )
    goto LABEL_624;
  v301 = SHIDWORD(v340.name) <= 0 ? -1 : LODWORD(v340.name);
  UIIconLabel__Set_41886452(
    (UIIconLabel_o *)servantEntity,
    33,
    v301,
    SHIDWORD(v340.methodPointer),
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
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList) )
  {
    v302 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v302, 0LL, 0LL) )
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
    v303 = *p_maskLabel;
    if ( item->fields.isHeroineSvt )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v304 = &StringLiteral_9411/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v304 = &StringLiteral_9414/*"NONSELECT_NPUP_BASE"*/;
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v304, 0LL);
    if ( !v303 )
      goto LABEL_624;
    goto LABEL_750;
  }
  if ( !item->fields.isSameSvt && !item->fields.isBaseSvt )
  {
    v311 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v311, 0LL, 0LL) )
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
  v305 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v305, 0LL, 0LL) )
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
      v303 = *p_statusTxtLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8922/*"MSG_ABLED_TDUP"*/, 0LL);
      if ( !v303 )
        goto LABEL_1057;
LABEL_750:
      UILabel__set_text(v303, (System_String_o *)servantEntity, 0LL);
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
  v300 = item->fields.type;
LABEL_756:
  if ( v300 != 6 )
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
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList) )
  {
    v306 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v306, 0LL, 0LL) )
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
        v307 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v308 = &StringLiteral_9411/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        v307 = *p_maskLabel;
        if ( item->fields.isEventJoin )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v308 = &StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v308 = &StringLiteral_9456/*"NO_SELECT_LVEXCEED"*/;
        }
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v308, 0LL);
      if ( !v307 )
        goto LABEL_624;
      goto LABEL_829;
    }
    goto LABEL_830;
  }
  if ( !item->fields.isLvMax || !item->fields.isLimitCntMax )
  {
    v310 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v310, 0LL, 0LL) )
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
  v309 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !item->fields.isLvExceedItemNum )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v309, 0LL, 0LL) )
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
  if ( UnityEngine_Object__op_Inequality(v309, 0LL, 0LL) )
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
    v307 = *p_statusTxtLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8919/*"MSG_ABLED_LIMITUP"*/, 0LL);
    if ( !v307 )
      goto LABEL_1057;
LABEL_829:
    UILabel__set_text(v307, (System_String_o *)servantEntity, 0LL);
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
  v312 = item->fields.type;
  if ( v312 != 10 && v312 != 7 )
    goto LABEL_906;
  servantEntity = (__int64)this->fields.limitCountIcon;
  if ( !servantEntity )
    goto LABEL_1057;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)servantEntity, 0LL);
  servantEntity = (__int64)this->fields.subIconLabel;
  if ( !servantEntity )
    goto LABEL_1057;
  UIIconLabel__Clear((UIIconLabel_o *)servantEntity, 0LL);
  v314 = item->fields.type;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  }
  servantEntity = CombineServantListViewManager__GetSortKind(v314, v313);
  v315 = this->fields.servantFaceIcon;
  if ( !v315 )
    goto LABEL_1057;
  if ( (_DWORD)servantEntity == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *, __int64, Il2CppMethodPointer))v315->klass->vtable._4_ParameterChange.method)(
      this->fields.servantFaceIcon,
      1LL,
      v315->klass->vtable._5_UpdateAlpha.methodPtr);
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
  v316 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList);
  v317 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( v316 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v317, 0LL, 0LL) )
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
      v318 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9408/*"NONSEELECT_STATUSUP_MAX"*/, 0LL);
      if ( !v318 )
        goto LABEL_1057;
      UILabel__set_text(v318, (System_String_o *)servantEntity, 0LL);
    }
    if ( item->fields.isEventJoin )
    {
      v319 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v319 )
        goto LABEL_1057;
      UILabel__set_text(v319, (System_String_o *)servantEntity, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_893;
    v320 = *p_maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11753/*"SELECT_CANNOT"*/, 0LL);
    if ( !v320 )
      goto LABEL_1057;
    v321 = (System_String_o *)servantEntity;
    servantEntity = (__int64)v320;
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v317, 0LL, 0LL) )
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
    v321 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)servantEntity, v321, 0LL);
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
  v322 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Implicit(v322, 0LL) )
  {
    servantEntity = (__int64)this->fields.svtCommandCardList;
    if ( !servantEntity )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v323 = this->fields.svtCommandCardList;
    servantEntity = CombineServantListViewItem__get_UserSvtId(item, v324);
    if ( !v323 )
      goto LABEL_1057;
    ServantCommandCardListComponent__Set(v323, servantEntity, 1, 1, 0LL);
  }
  v312 = item->fields.type;
LABEL_906:
  if ( v312 != 8 )
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
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList) )
  {
    v325 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v325, 0LL, 0LL) )
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
        v326 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v327 = &StringLiteral_9411/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        v326 = *p_maskLabel;
        if ( item->fields.isEventJoin )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v327 = &StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v327 = &StringLiteral_9455/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
        }
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v327, 0LL);
      if ( !v326 )
        goto LABEL_624;
      goto LABEL_970;
    }
    goto LABEL_971;
  }
  if ( !item->fields.isFriendshipRankMax )
  {
    v329 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v329, 0LL, 0LL) )
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
  v328 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !item->fields.isFriendshipExceedItemNum )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v328, 0LL, 0LL) )
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
  if ( UnityEngine_Object__op_Inequality(v328, 0LL, 0LL) )
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
    v326 = *p_statusTxtLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8918/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, 0LL);
    if ( !v326 )
      goto LABEL_1057;
LABEL_970:
    UILabel__set_text(v326, (System_String_o *)servantEntity, 0LL);
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
      v330 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v330 )
        goto LABEL_1057;
      goto LABEL_1016;
    }
    if ( !item->fields.isCanNotLock )
    {
      servantEntity = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, (const MethodInfo *)switchInfoList);
      if ( !servantEntity )
        goto LABEL_1057;
      if ( !UserServantEntity__IsLeave((UserServantEntity_o *)servantEntity, 0LL) )
      {
        servantEntity = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, (const MethodInfo *)switchInfoList);
        if ( !servantEntity )
          goto LABEL_1057;
        if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)servantEntity, 0LL) )
        {
          servantEntity = (__int64)CombineServantListViewItem__get_UserSvtEntity(
                                     item,
                                     (const MethodInfo *)switchInfoList);
          if ( !servantEntity )
            goto LABEL_1057;
          if ( !UserServantEntity__IsStatusUp((UserServantEntity_o *)servantEntity, 0LL) )
          {
            servantEntity = (__int64)CombineServantListViewItem__get_UserSvtEntity(
                                       item,
                                       (const MethodInfo *)switchInfoList);
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
              v331 = (System_String_o *)StringLiteral_1/*""*/;
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
    v330 = *p_maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8515/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
    if ( v330 )
    {
LABEL_1016:
      v331 = (System_String_o *)servantEntity;
      servantEntity = (__int64)v330;
LABEL_1017:
      UILabel__set_text((UILabel_o *)servantEntity, v331, 0LL);
      servantEntity = (__int64)*p_statusTxtLb;
      if ( *p_statusTxtLb )
      {
LABEL_1018:
        UILabel__set_text((UILabel_o *)servantEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        return;
      }
LABEL_1057:
      sub_B5D69C(servantEntity, switchInfoList);
    }
LABEL_624:
    sub_B5D69C(servantEntity, switchInfoList);
  }
  if ( !item->fields.isHeroineSvt )
    goto LABEL_981;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_29295864(126, 0LL) )
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
          switchInfoList = LocalizationManager__Get((System_String_o *)StringLiteral_8515/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
        }
        else
        {
          switchInfoList = (System_String_o *)StringLiteral_1/*""*/;
        }
        servantEntity = (__int64)*p_maskLabel;
        if ( *p_maskLabel )
        {
          UILabel__set_text((UILabel_o *)servantEntity, switchInfoList, 0LL);
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
  __int64 v3; // x3
  UnityEngine_Object_o *dragSelect; // x21
  __int64 v7; // x1
  DragSelectComponent_o *v8; // x0
  int32_t dragSelectNum; // w2
  int32_t selectNum; // w1

  if ( (byte_42EB57D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42EB57D = 1;
  }
  dragSelect = (UnityEngine_Object_o *)this->fields.dragSelect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(dragSelect, 0LL, 0LL) )
  {
    v8 = this->fields.dragSelect;
    if ( item )
    {
      if ( v8 )
      {
        dragSelectNum = item->fields.dragSelectNum;
        selectNum = item->fields.selectNum;
LABEL_12:
        DragSelectComponent__Set(v8, selectNum, dragSelectNum, 0LL);
        return;
      }
    }
    else if ( v8 )
    {
      selectNum = -1;
      dragSelectNum = -1;
      goto LABEL_12;
    }
    sub_B5D69C(v8, v7);
  }
}