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
  UILabel_o *v23; // x21
  LocalizationManager_c *v24; // x0
  UILabel_o *maskLabel; // x21
  UnityEngine_Object_o *v26; // x22
  int v27; // w22
  int32_t v28; // w8
  __int64 *v29; // x8
  int32_t atkBase; // w8
  UILabel_o *v31; // x21
  UILabel_o *v32; // x21

  v4 = isSelectEnable;
  if ( (byte_418A5F2 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_9321/*"NONSELECT_UNDER_STATUS_MAX"*/, v8);
    sub_B2C35C(&StringLiteral_9316/*"NONSELECT_MATERIAL"*/, v9);
    sub_B2C35C(&StringLiteral_9319/*"NONSELECT_NPUP_BASE"*/, v10);
    sub_B2C35C(&StringLiteral_9317/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v11);
    byte_418A5F2 = 1;
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
    v26 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( item->fields.isMaxSelect )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
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
        v27 = 1;
        ((void (__fastcall *)(ServantEntity_o *, _QWORD, __int64, void *))servantEntity->klass[1]._1.events)(
          servantEntity,
          0LL,
          1LL,
          servantEntity->klass[1]._1.properties);
LABEL_56:
        v28 = item->fields.type;
        if ( v28 == 5 )
        {
          if ( !(v27 & 1 | item->fields.isMaxNextLv) )
            goto LABEL_93;
        }
        else if ( v28 == 1 )
        {
          if ( ((v20 & ~(v19 || v4) | v27) & 1) == 0 )
            goto LABEL_93;
        }
        else if ( !v27 )
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
        v24 = LocalizationManager_TypeInfo;
        if ( item->fields.type == 5 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
          {
LABEL_69:
            v29 = &StringLiteral_9319/*"NONSELECT_NPUP_BASE"*/;
            goto LABEL_91;
          }
LABEL_67:
          if ( !v24->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v24);
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
      if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
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
    v27 = 0;
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
          v31 = this->fields.maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9321/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v31 )
            goto LABEL_107;
          UILabel__set_text(v31, (System_String_o *)servantEntity, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectSecondStatusUpHp )
          goto LABEL_93;
      }
      else
      {
        if ( atkBase >= 1 && item->fields.isNotSelectStatusUpAtk )
        {
          v32 = this->fields.maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9321/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v32 )
            goto LABEL_107;
          UILabel__set_text(v32, (System_String_o *)servantEntity, 0LL);
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
      v29 = &StringLiteral_9321/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_91:
      servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)*v29, 0LL);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)servantEntity, 0LL);
        goto LABEL_93;
      }
LABEL_107:
      sub_B2C434(servantEntity, v13);
    }
    maskLabel = this->fields.maskLabel;
    v24 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
    {
LABEL_90:
      v29 = &StringLiteral_9316/*"NONSELECT_MATERIAL"*/;
      goto LABEL_91;
    }
LABEL_88:
    if ( !v24->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v24);
    goto LABEL_90;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, v13) )
  {
    v23 = this->fields.maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9317/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
    if ( !v23 )
      goto LABEL_107;
    UILabel__set_text(v23, (System_String_o *)servantEntity, 0LL);
    if ( item->fields.type == 5 )
    {
      v24 = LocalizationManager_TypeInfo;
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
  System_String_o *switchInfoList; // x1
  UILabel_o *gameObject; // x0
  int32_t type; // w19
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  IconLabelInfo_o *iconLabelInfo1; // x2
  UIIconLabel_o *subIconLabel; // x23
  int32_t rarity; // w24
  const MethodInfo *v70; // x1
  int32_t m12_low; // w25
  const MethodInfo *v72; // x4
  UILabel_o **p_statusTxtLb; // x20
  struct UISprite_o **p_maskSprite; // x28
  struct UILabel_o **p_maskLabel; // x25
  UnityEngine_Object_o *pushImg; // x23
  UnityEngine_Object_o *materialTdSprite; // x23
  const MethodInfo *v78; // x2
  UISprite_o *v79; // x23
  const MethodInfo *v80; // x1
  int32_t v81; // w23
  int32_t v82; // w8
  bool CanNotBaseSelect; // w0
  UnityEngine_Object_o *v84; // x22
  UILabel_o *v85; // x22
  __int64 *v86; // x8
  int32_t v87; // w2
  const MethodInfo *v88; // x2
  UserServantEntity_o *userSvtEntity; // x0
  char v90; // w19
  UILabel_o *v91; // x23
  UILabel_o *v92; // x23
  UILabel_o *v93; // x23
  UILabel_o *v94; // x23
  UILabel_o *v95; // x23
  UILabel_o *v96; // x23
  UILabel_o *v97; // x23
  UILabel_o *v98; // x23
  UILabel_o *v99; // x23
  __int64 *v100; // x8
  UILabel_o *v101; // x22
  System_String_o *v102; // x23
  float v103; // s0
  Il2CppObject *v104; // x0
  UILabel_o *v105; // x23
  const MethodInfo *v106; // x1
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x23
  int32_t v109; // w8
  UILabel_o *v110; // x22
  UILabel_o *v111; // x22
  UILabel_o *v112; // x22
  UILabel_o *v113; // x22
  __int64 *v114; // x8
  __int64 servantEntity; // x0
  UnityEngine_Object_o *v116; // x23
  int v117; // w19
  UILabel_o *v118; // x22
  __int64 *v119; // x8
  UILabel_o *v120; // x22
  UILabel_o *v121; // x23
  UILabel_o *v122; // x22
  UILabel_o *v123; // x22
  int32_t v124; // w8
  System_String_o *v125; // x1
  UILabel_o *fortificationAppointmentLabel; // x22
  float v127; // s0
  float v128; // s2
  float fortificationInfoRootObjOffsetY; // s10
  float v130; // s8
  float v131; // s9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v132; // x22
  System_String_o *v133; // x23
  float v134; // s0
  Il2CppObject *v135; // x0
  System_String_o *v136; // x0
  UnityEngine_Object_o *v137; // x22
  UILabel_o *v138; // x22
  LocalizationManager_c *v139; // x0
  bool v140; // w0
  UnityEngine_Object_o *v141; // x22
  __int64 *v142; // x8
  UnityEngine_Object_c *v143; // x0
  System_String_o *v144; // x1
  UnityEngine_Object_o *v145; // x22
  int32_t v146; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  System_Text_StringBuilder_o *v148; // x22
  SkillInfo_array *v149; // x8
  __int64 v150; // x9
  unsigned __int64 v151; // x26
  __int64 v152; // x27
  signed __int64 v153; // x20
  SkillInfo_o *v154; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v157; // w25
  Il2CppObject *v158; // x24
  bool v159; // w0
  __int64 *v160; // x10
  UILabel_o *skillLvLabel; // x23
  UnityEngine_Object_o *v162; // x22
  UILabel_o *v163; // x22
  UILabel_o *v164; // x22
  __int64 *v165; // x8
  UnityEngine_Object_o *v166; // x22
  SvtUseSkillData_o *AppendSkillData; // x0
  struct System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v169; // x24
  System_Text_StringBuilder_o *v170; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v172; // x9
  unsigned __int64 v173; // x27
  __int64 v174; // x20
  signed __int64 v175; // x28
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v177; // x0
  int32_t v178; // w26
  int32_t v179; // w0
  int v180; // t1
  Il2CppObject *v181; // x25
  bool v182; // w0
  __int64 *v183; // x10
  UILabel_o *v184; // x24
  UILabel_o *v185; // x22
  UILabel_o *v186; // x22
  UILabel_o *v187; // x22
  __int64 *v188; // x8
  UnityEngine_Object_o *v189; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  const MethodInfo *v193; // x1
  const MethodInfo *v194; // x1
  Il2CppObject *v195; // x0
  const MethodInfo *v196; // x1
  ItemIconComponent_o *coinIcon; // x22
  int32_t v198; // w8
  int32_t v199; // w2
  UnityEngine_Object_o *v200; // x22
  UILabel_o *v201; // x22
  __int64 *v202; // x8
  UnityEngine_Object_o *v203; // x22
  UnityEngine_Object_o *v204; // x22
  UILabel_o *v205; // x22
  __int64 *v206; // x8
  UnityEngine_Object_o *v207; // x22
  UnityEngine_Object_o *v208; // x22
  UnityEngine_Object_o *v209; // x22
  int32_t v210; // w8
  const MethodInfo *v211; // x1
  int32_t v212; // w22
  struct ServantFaceIconComponent_o *v213; // x8
  bool v214; // w0
  UnityEngine_Object_o *v215; // x22
  UILabel_o *v216; // x22
  UILabel_o *v217; // x22
  struct UILabel_o *v218; // x22
  System_String_o *v219; // x1
  UnityEngine_Object_o *v220; // x22
  ServantCommandCardListComponent_o *v221; // x22
  const MethodInfo *v222; // x1
  UnityEngine_Object_o *v223; // x22
  UILabel_o *v224; // x22
  __int64 *v225; // x8
  UnityEngine_Object_o *v226; // x22
  UnityEngine_Object_o *v227; // x22
  struct UILabel_o *v228; // x19
  System_String_o *v229; // x1
  __int64 v230; // x0
  struct UISprite_o **v231; // [xsp+18h] [xbp-B8h]
  struct UILabel_o **v232; // [xsp+20h] [xbp-B0h]
  struct UILabel_o **v233; // [xsp+28h] [xbp-A8h]
  CombineServantListViewItemDraw_o *v234; // [xsp+30h] [xbp-A0h]
  int32_t v235; // [xsp+3Ch] [xbp-94h]
  int32_t SkillOpenItemNum; // [xsp+4Ch] [xbp-84h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-80h] BYREF
  MethodInfo v238; // [xsp+58h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v239; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v240; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A5F1 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&CombineServantListViewManager_TypeInfo, v11);
    sub_B2C35C(&int_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v20);
    sub_B2C35C(&TutorialFlag_TypeInfo, v21);
    sub_B2C35C(&StringLiteral_12256/*"SKILL_LVDISP_TXT"*/, v22);
    sub_B2C35C(&StringLiteral_10387/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, v23);
    sub_B2C35C(&StringLiteral_9321/*"NONSELECT_UNDER_STATUS_MAX"*/, v24);
    sub_B2C35C(&StringLiteral_6413/*"FORTIFICATION_APPOINTMENT"*/, v25);
    sub_B2C35C(&StringLiteral_3156/*"COMBINE_CAN_STATUS_UP_INFO"*/, v26);
    sub_B2C35C(&StringLiteral_8832/*"MSG_CAMPAIGN_COMBINE_EXP"*/, v27);
    sub_B2C35C(&StringLiteral_12254/*"SKILL_LVDISP_ENABLE_TXT"*/, v28);
    sub_B2C35C(&StringLiteral_9316/*"NONSELECT_MATERIAL"*/, v29);
    sub_B2C35C(&StringLiteral_21828/*"ribbon_noblephantasmup_01"*/, v30);
    sub_B2C35C(&StringLiteral_9315/*"NONSELECT_LIMITUP_BASE"*/, v31);
    sub_B2C35C(&StringLiteral_10206/*"PARTY_MEMBER_TXT"*/, v32);
    sub_B2C35C(&StringLiteral_9319/*"NONSELECT_NPUP_BASE"*/, v33);
    sub_B2C35C(&StringLiteral_12502/*"SUPPORT_MEMBER"*/, v34);
    sub_B2C35C(&StringLiteral_8828/*"MSG_ABLED_LIMITUP"*/, v35);
    sub_B2C35C(&StringLiteral_11642/*"SELECT_PUSH"*/, v36);
    sub_B2C35C(&StringLiteral_11620/*"SELECT_CANNOT"*/, v37);
    sub_B2C35C(&StringLiteral_9369/*"NPUP_BASE"*/, v38);
    sub_B2C35C(&StringLiteral_12253/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/, v39);
    sub_B2C35C(&StringLiteral_11643/*"SELECT_SERVANT_EVENT_JOIN"*/, v40);
    sub_B2C35C(&StringLiteral_9359/*"NO_SELECT_FRIENDSHIP_EXCEED"*/, v41);
    sub_B2C35C(&StringLiteral_11549/*"SAME_SERVANT"*/, v42);
    sub_B2C35C(&StringLiteral_8827/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, v43);
    sub_B2C35C(&StringLiteral_9317/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v44);
    sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v45);
    sub_B2C35C(&StringLiteral_12255/*"SKILL_LVDISP_SINGLE_TXT"*/, v46);
    sub_B2C35C(&StringLiteral_8829/*"MSG_ABLED_SKILLUP"*/, v47);
    sub_B2C35C(&StringLiteral_9318/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, v48);
    sub_B2C35C(&StringLiteral_9322/*"NONSKILL_TXT"*/, v49);
    sub_B2C35C(&StringLiteral_8431/*"LOCKMODE_SELECTED_SERVANT"*/, v50);
    sub_B2C35C(&StringLiteral_6329/*"FAVORITE_SERVANT"*/, v51);
    sub_B2C35C(&StringLiteral_2981/*"CHOICE_SERVANT"*/, v52);
    sub_B2C35C(&StringLiteral_8831/*"MSG_ABLED_TDUP"*/, v53);
    sub_B2C35C(&StringLiteral_11615/*"SEAL_COMBINE_LIMIT_THIRD"*/, v54);
    sub_B2C35C(&StringLiteral_9314/*"NONSELECT_BASE_ALLMAX"*/, v55);
    sub_B2C35C(&StringLiteral_9360/*"NO_SELECT_LVEXCEED"*/, v56);
    sub_B2C35C(&StringLiteral_1/*""*/, v57);
    sub_B2C35C(&StringLiteral_9320/*"NONSELECT_SKILLUP_BASE"*/, v58);
    sub_B2C35C(&StringLiteral_11641/*"SELECT_PROTECTED_EVENT_SVT"*/, v59);
    sub_B2C35C(&StringLiteral_8432/*"LOCK_SERVANT"*/, v60);
    sub_B2C35C(&StringLiteral_9313/*"NONSEELECT_STATUSUP_MAX"*/, v61);
    byte_418A5F1 = 1;
  }
  v238.name = 0LL;
  skillInfoList = 0LL;
  v238.methodPointer = 0LL;
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
    ServantFaceIconComponent__Set_30719352(
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
    ServantFaceIconComponent__Set_30719352(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0LL, 0LL);
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
  UIIconLabel__Set_41609428(
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
    (int32_t *)&v238.name + 1,
    (int32_t *)&v238.name,
    (int32_t *)&v238.methodPointer + 1,
    v72);
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
      v79 = this->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v79, (System_String_o *)StringLiteral_21828/*"ribbon_noblephantasmup_01"*/, 0LL);
      v81 = item->fields.type;
      if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      }
      if ( CombineServantListViewManager__GetSortKind(v81, v80) == 1 )
      {
        gameObject = (UILabel_o *)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_1055;
        v239.fields.x = 0.65;
        v239.fields.y = 1.0;
        v239.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v239, 0LL);
      }
    }
  }
  v82 = item->fields.type;
  switch ( v82 )
  {
    case 5:
      gameObject = (UILabel_o *)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_1055;
      v87 = SHIDWORD(v238.name) <= 0 ? -1 : LODWORD(v238.name);
      UIIconLabel__Set_41609428(
        (UIIconLabel_o *)gameObject,
        33,
        v87,
        SHIDWORD(v238.methodPointer),
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
        v121 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11641/*"SELECT_PROTECTED_EVENT_SVT"*/, 0LL);
        if ( !v121 )
          goto LABEL_1055;
        UILabel__set_text(v121, (System_String_o *)gameObject, 0LL);
        v90 = 1;
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
          v91 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10206/*"PARTY_MEMBER_TXT"*/, 0LL);
          if ( !v91 )
            goto LABEL_1055;
          UILabel__set_text(v91, (System_String_o *)gameObject, 0LL);
          v90 = 1;
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
          v92 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6329/*"FAVORITE_SERVANT"*/, 0LL);
          if ( !v92 )
            goto LABEL_1055;
          UILabel__set_text(v92, (System_String_o *)gameObject, 0LL);
          v90 = 1;
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
          v93 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8432/*"LOCK_SERVANT"*/, 0LL);
          if ( !v93 )
            goto LABEL_1055;
          UILabel__set_text(v93, (System_String_o *)gameObject, 0LL);
          v90 = 1;
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
          v94 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2981/*"CHOICE_SERVANT"*/, 0LL);
          if ( !v94 )
            goto LABEL_1055;
          UILabel__set_text(v94, (System_String_o *)gameObject, 0LL);
          v90 = 1;
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
          v95 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11549/*"SAME_SERVANT"*/, 0LL);
          if ( !v95 )
            goto LABEL_1055;
          UILabel__set_text(v95, (System_String_o *)gameObject, 0LL);
          v90 = 1;
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
          v96 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9316/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v96 )
            goto LABEL_1055;
          UILabel__set_text(v96, (System_String_o *)gameObject, 0LL);
          v90 = 1;
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
          v97 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9316/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v97 )
            goto LABEL_1055;
          UILabel__set_text(v97, (System_String_o *)gameObject, 0LL);
          v90 = 1;
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
          v98 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11643/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
          if ( !v98 )
            goto LABEL_1055;
          UILabel__set_text(v98, (System_String_o *)gameObject, 0LL);
          v90 = 1;
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
          v99 = *p_maskLabel;
          if ( item->fields.isParty )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v100 = &StringLiteral_10206/*"PARTY_MEMBER_TXT"*/;
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v100 = &StringLiteral_12502/*"SUPPORT_MEMBER"*/;
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)*v100, 0LL);
          if ( !v99 )
            goto LABEL_1055;
          UILabel__set_text(v99, (System_String_o *)gameObject, 0LL);
          v90 = 1;
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
          v105 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11642/*"SELECT_PUSH"*/, 0LL);
          if ( !v105 )
            goto LABEL_1055;
          UILabel__set_text(v105, (System_String_o *)gameObject, 0LL);
          v90 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, item, v88);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(item, v106);
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
            v120 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9317/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
            if ( !v120 )
              goto LABEL_1055;
            UILabel__set_text(v120, (System_String_o *)gameObject, 0LL);
            if ( item->fields.type != 5 )
              break;
            v113 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v114 = &StringLiteral_9319/*"NONSELECT_NPUP_BASE"*/;
          }
          else
          {
            if ( item->fields.isCanStUp )
            {
LABEL_236:
              if ( item->fields.isStatusUpSvt )
              {
                v109 = item->fields.rarity;
                if ( v109 <= 3 )
                {
                  if ( item->fields.isAtkUpMax || item->fields.isHpUpMax )
                  {
                    v122 = *p_maskLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9321/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                    if ( !v122 )
                      goto LABEL_1055;
                    UILabel__set_text(v122, (System_String_o *)gameObject, 0LL);
                  }
                  if ( item->fields.isAtkSecondUpMax || item->fields.isHpSecondUpMax )
                  {
                    v123 = *p_maskLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9321/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                    if ( !v123 )
                      goto LABEL_1055;
                    UILabel__set_text(v123, (System_String_o *)gameObject, 0LL);
                  }
                  if ( !item->fields.isNotSelectStatusUpAtk && !item->fields.isNotSelectStatusUpHp )
                    goto LABEL_343;
                  v113 = *p_maskLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v114 = &StringLiteral_9321/*"NONSELECT_UNDER_STATUS_MAX"*/;
                }
                else
                {
                  if ( v109 != 4 )
                    goto LABEL_343;
                  if ( item->fields.atkBase >= 1 )
                  {
                    if ( item->fields.isAtkSecondUpMax || item->fields.isNotSelectSecondStatusUpAtk )
                    {
                      v110 = *p_maskLabel;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9321/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                      if ( !v110 )
                        goto LABEL_1055;
                      UILabel__set_text(v110, (System_String_o *)gameObject, 0LL);
                    }
                    if ( !item->fields.isAtkUpMax )
                    {
                      v111 = *p_maskLabel;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9318/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0LL);
                      if ( !v111 )
                        goto LABEL_1055;
                      UILabel__set_text(v111, (System_String_o *)gameObject, 0LL);
                    }
                  }
                  if ( item->fields.hpBase < 1 )
                    goto LABEL_343;
                  if ( item->fields.isHpSecondUpMax || item->fields.isNotSelectSecondStatusUpHp )
                  {
                    v112 = *p_maskLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9321/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                    if ( !v112 )
                      goto LABEL_1055;
                    UILabel__set_text(v112, (System_String_o *)gameObject, 0LL);
                  }
                  if ( item->fields.isHpUpMax )
                    goto LABEL_343;
                  v113 = *p_maskLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v114 = &StringLiteral_9318/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
                }
                goto LABEL_341;
              }
LABEL_343:
              v124 = item->fields.type;
              if ( v124 != 5 )
                goto LABEL_402;
              if ( !item->fields.isBaseSvt )
                break;
              v118 = *p_maskLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v119 = &StringLiteral_9369/*"NPUP_BASE"*/;
LABEL_349:
              servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v119, 0LL);
              if ( !v118 )
                goto LABEL_624;
              UILabel__set_text(v118, (System_String_o *)servantEntity, 0LL);
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
              gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6413/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
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
              *(UnityEngine_Vector3_o *)&v127 = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)gameObject,
                                                  0LL);
              gameObject = (UILabel_o *)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1055;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              v130 = v127;
              v131 = v128;
              gameObject = (UILabel_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)gameObject,
                                          0LL);
              if ( !gameObject )
                goto LABEL_1055;
              v240.fields.x = v130;
              v240.fields.y = fortificationInfoRootObjOffsetY;
              v240.fields.z = v131;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v240, 0LL);
              goto LABEL_343;
            }
            if ( (v90 & 1) != 0 )
              goto LABEL_343;
            v113 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v114 = &StringLiteral_9316/*"NONSELECT_MATERIAL"*/;
          }
LABEL_341:
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)*v114, 0LL);
          if ( !v113 )
            goto LABEL_1055;
          UILabel__set_text(v113, (System_String_o *)gameObject, 0LL);
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
        v116 = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( item->fields.isMaxSelect )
        {
          if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v116, 0LL, 0LL) )
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
            v117 = 1;
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
          if ( UnityEngine_Object__op_Inequality(v116, 0LL, 0LL) )
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
        v117 = 0;
        if ( item->fields.type != 1 )
          goto LABEL_297;
LABEL_291:
        servantEntity = (__int64)item->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_624;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)servantEntity, 0LL) && !isSelectEnable )
        {
          if ( !(v117 & 1 | !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL)) )
            break;
        }
        else
        {
LABEL_297:
          if ( !v117 )
            break;
        }
        servantEntity = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_624;
        servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
        if ( !servantEntity )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
        v118 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v119 = &StringLiteral_9316/*"NONSELECT_MATERIAL"*/;
        goto LABEL_349;
      }
LABEL_105:
      v90 = 0;
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
      v84 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( CanNotBaseSelect )
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v84, 0LL, 0LL) )
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
            v85 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v86 = &StringLiteral_9314/*"NONSELECT_BASE_ALLMAX"*/;
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
            v125 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_359;
          }
          v85 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v86 = &StringLiteral_11620/*"SELECT_CANNOT"*/;
LABEL_357:
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)*v86, 0LL);
          if ( !v85 )
            goto LABEL_1055;
          v125 = (System_String_o *)gameObject;
          gameObject = v85;
LABEL_359:
          UILabel__set_text(gameObject, v125, 0LL);
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
        v85 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v86 = &StringLiteral_9316/*"NONSELECT_MATERIAL"*/;
        goto LABEL_357;
      }
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v84, 0LL, 0LL) )
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
          v132 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v132,
            (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v133 = LocalizationManager__Get((System_String_o *)StringLiteral_8832/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v238.methodPointer = item->fields.combineExpCampaignValue;
          v135 = (Il2CppObject *)System_Single__ToString(v134, &v238);
          gameObject = (UILabel_o *)System_String__Format(v133, v135, 0LL);
          if ( v132 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v132,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
            v136 = LocalizationManager__Get((System_String_o *)StringLiteral_3156/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v132,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v136,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
            gameObject = (UILabel_o *)item->fields._NoticeTween_k__BackingField;
            if ( gameObject )
            {
              CombineServantListViewNoticeTween__AddTarget(
                (CombineServantListViewNoticeTween_o *)gameObject,
                *p_statusTxtLb,
                (System_Collections_Generic_List_string__o *)v132,
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
            v101 = *p_statusTxtLb;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v102 = LocalizationManager__Get((System_String_o *)StringLiteral_8832/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
            *(float *)&v238.methodPointer = item->fields.combineExpCampaignValue;
            v104 = (Il2CppObject *)System_Single__ToString(v103, &v238);
            gameObject = (UILabel_o *)System_String__Format(v102, v104, 0LL);
            if ( v101 )
            {
LABEL_209:
              UILabel__set_text(v101, (System_String_o *)gameObject, 0LL);
              goto LABEL_394;
            }
          }
        }
LABEL_1055:
        sub_B2C434(gameObject, switchInfoList);
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
            v101 = *p_statusTxtLb;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3156/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
            if ( v101 )
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
  v124 = item->fields.type;
LABEL_402:
  if ( v124 != 9 )
  {
    if ( v124 != 2 )
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
      v137 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v137, 0LL, 0LL) )
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
        v138 = *p_maskLabel;
        v139 = LocalizationManager_TypeInfo;
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
      v145 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v145, 0LL, 0LL) )
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
    v143 = UnityEngine_Object_TypeInfo;
    v141 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !item->fields.isSealCombineLimit )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v141, 0LL, 0LL) )
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
        v138 = *p_statusTxtLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v142 = &StringLiteral_8828/*"MSG_ABLED_LIMITUP"*/;
        goto LABEL_491;
      }
      goto LABEL_494;
    }
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
      || UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
LABEL_458:
      if ( !UnityEngine_Object__op_Inequality(v141, 0LL, 0LL) )
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
      v144 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_493;
    }
LABEL_457:
    j_il2cpp_runtime_class_init_0(v143);
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
  v140 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList);
  v141 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !v140 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
      || UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_458;
    }
    v143 = UnityEngine_Object_TypeInfo;
    goto LABEL_457;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v141, 0LL, 0LL) )
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
      v138 = *p_maskLabel;
      v139 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_447:
        v142 = &StringLiteral_9316/*"NONSELECT_MATERIAL"*/;
LABEL_491:
        servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v142, 0LL);
        if ( !v138 )
          goto LABEL_624;
        v144 = (System_String_o *)servantEntity;
        servantEntity = (__int64)v138;
LABEL_493:
        UILabel__set_text((UILabel_o *)servantEntity, v144, 0LL);
        goto LABEL_494;
      }
LABEL_445:
      if ( !v139->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v139);
      goto LABEL_447;
    }
    if ( item->fields.isLimitCntMax )
    {
      v138 = *p_maskLabel;
      v139 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
LABEL_473:
        if ( !v139->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v139);
      }
LABEL_475:
      v142 = &StringLiteral_9315/*"NONSELECT_LIMITUP_BASE"*/;
      goto LABEL_491;
    }
    if ( item->fields.isSealCombineLimit )
    {
      v138 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v142 = &StringLiteral_11615/*"SEAL_COMBINE_LIMIT_THIRD"*/;
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
  v146 = item->fields.type;
  v235 = modeKind;
  v233 = &this->fields.statusTxtLb;
  v234 = this;
  v231 = &this->fields.maskSprite;
  v232 = &this->fields.maskLabel;
  if ( v146 != 3 )
    goto LABEL_591;
  CombineServantListViewItem__GetSkillInfo(item, &skillInfoList, v78);
  enableSkillUp = item->fields.enableSkillUp;
  v148 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v148, 0LL);
  v149 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_624;
  v150 = *(_QWORD *)&skillInfoList->max_length;
  if ( (int)v150 >= 1 )
  {
    v151 = 0LL;
    v152 = (unsigned int)(v150 - 1);
    v153 = (int)v150;
    while ( 1 )
    {
      if ( v151 >= v149->max_length )
        goto LABEL_1056;
      v154 = v149->m_Items[v151];
      if ( v154 )
      {
        lv = v154->fields.lv;
        p_lv = &v154->fields.lv;
        v157 = *(p_lv - 1);
        if ( lv > 0 )
        {
          servantEntity = (__int64)System_Int32__ToString((int32_t)p_lv, 0LL);
          goto LABEL_511;
        }
      }
      else
      {
        v157 = -1;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9322/*"NONSKILL_TXT"*/, 0LL);
LABEL_511:
      v158 = (Il2CppObject *)servantEntity;
      if ( enableSkillUp )
      {
        v159 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v157,
                 (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v152 == v151 )
        {
          if ( v159 )
          {
            v160 = &StringLiteral_12253/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v160 = &StringLiteral_12253/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v160 = &StringLiteral_12253/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              }
            }
          }
          else
          {
            v160 = &StringLiteral_12255/*"SKILL_LVDISP_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v160 = &StringLiteral_12255/*"SKILL_LVDISP_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v160 = &StringLiteral_12255/*"SKILL_LVDISP_SINGLE_TXT"*/;
              }
            }
          }
        }
        else if ( v159 )
        {
          v160 = &StringLiteral_12254/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v160 = &StringLiteral_12254/*"SKILL_LVDISP_ENABLE_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v160 = &StringLiteral_12254/*"SKILL_LVDISP_ENABLE_TXT"*/;
            }
          }
        }
        else
        {
          v160 = &StringLiteral_12256/*"SKILL_LVDISP_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v160 = &StringLiteral_12256/*"SKILL_LVDISP_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v160 = &StringLiteral_12256/*"SKILL_LVDISP_TXT"*/;
            }
          }
        }
        servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v160, 0LL);
        if ( v148 )
        {
          servantEntity = (__int64)System_Text_StringBuilder__AppendFormat(
                                     v148,
                                     (System_String_o *)servantEntity,
                                     v158,
                                     0LL);
          if ( (__int64)++v151 >= v153 )
            goto LABEL_532;
          v149 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_624;
    }
  }
  if ( !v148 )
    goto LABEL_624;
LABEL_532:
  this = v234;
  skillLvLabel = v234->fields.skillLvLabel;
  servantEntity = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v148->klass->vtable._3_ToString.method)(
                    v148,
                    v148->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !skillLvLabel )
    goto LABEL_624;
  UILabel__set_text(skillLvLabel, (System_String_o *)servantEntity, 0LL);
  servantEntity = (__int64)v234->fields.skillLvLabel;
  if ( !servantEntity )
    goto LABEL_624;
  servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
  p_maskLabel = v232;
  p_statusTxtLb = v233;
  p_maskSprite = v231;
  if ( !servantEntity )
    goto LABEL_624;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  modeKind = v235;
  if ( item->fields.isParty )
  {
    servantEntity = (__int64)v234->fields.partyIcon;
    if ( !servantEntity )
      goto LABEL_624;
    FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    servantEntity = (__int64)v234->fields.lockImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList) )
  {
    v162 = (UnityEngine_Object_o *)v234->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v162, 0LL, 0LL) )
      goto LABEL_586;
    servantEntity = (__int64)v234->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)v234->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*v231;
    if ( !*v231 )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v163 = *v232;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9320/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v163 )
      goto LABEL_624;
    UILabel__set_text(v163, (System_String_o *)servantEntity, 0LL);
    if ( !item->fields.isHeroineSvt )
      goto LABEL_586;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28617756(126, 0LL) )
      goto LABEL_586;
    v164 = *v232;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v165 = &StringLiteral_11620/*"SELECT_CANNOT"*/;
    goto LABEL_577;
  }
  v166 = (UnityEngine_Object_o *)v234->fields.baseButton;
  if ( !item->fields.isSkillUpItemNum )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v166, 0LL, 0LL) )
    {
      servantEntity = (__int64)v234->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_624;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
        servantEntity,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
      servantEntity = (__int64)v234->fields.baseButton;
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
  if ( UnityEngine_Object__op_Inequality(v166, 0LL, 0LL) )
  {
    servantEntity = (__int64)v234->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)v234->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*v233;
    if ( !*v233 )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v164 = *v233;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v165 = &StringLiteral_8829/*"MSG_ABLED_SKILLUP"*/;
LABEL_577:
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v165, 0LL);
    if ( !v164 )
      goto LABEL_624;
    UILabel__set_text(v164, (System_String_o *)servantEntity, 0LL);
  }
LABEL_586:
  if ( item->fields.isBaseSvt )
  {
    servantEntity = (__int64)v234->fields.removeImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  v146 = item->fields.type;
LABEL_591:
  if ( v146 != 11 )
    goto LABEL_702;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(item, (const MethodInfo *)switchInfoList);
  enableAppendSkillUp = item->fields.enableAppendSkillUp;
  v169 = AppendSkillData;
  v170 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v170, 0LL);
  if ( !v169 )
    goto LABEL_624;
  svtUseSkillIdList = v169->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_624;
  v172 = *(_QWORD *)&svtUseSkillIdList->max_length;
  if ( (int)v172 >= 1 )
  {
    v173 = 0LL;
    v174 = (unsigned int)(v172 - 1);
    v175 = (int)v172;
    while ( v173 < svtUseSkillIdList->max_length )
    {
      svtSkillLvList = v169->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_624;
      if ( v173 >= svtSkillLvList->max_length )
        break;
      v177 = (__int64)svtSkillLvList + 4 * v173;
      v178 = svtUseSkillIdList->m_Items[v173 + 1];
      v180 = *(_DWORD *)(v177 + 32);
      v179 = v177 + 32;
      if ( v180 <= 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9322/*"NONSKILL_TXT"*/, 0LL);
      }
      else
      {
        servantEntity = (__int64)System_Int32__ToString(v179, 0LL);
      }
      v181 = (Il2CppObject *)servantEntity;
      if ( enableAppendSkillUp )
      {
        v182 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v178,
                 (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v173 == v174 )
        {
          if ( v182 )
          {
            v183 = &StringLiteral_12253/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v183 = &StringLiteral_12253/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v183 = &StringLiteral_12253/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              }
            }
          }
          else
          {
            v183 = &StringLiteral_12255/*"SKILL_LVDISP_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v183 = &StringLiteral_12255/*"SKILL_LVDISP_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v183 = &StringLiteral_12255/*"SKILL_LVDISP_SINGLE_TXT"*/;
              }
            }
          }
        }
        else if ( v182 )
        {
          v183 = &StringLiteral_12254/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v183 = &StringLiteral_12254/*"SKILL_LVDISP_ENABLE_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v183 = &StringLiteral_12254/*"SKILL_LVDISP_ENABLE_TXT"*/;
            }
          }
        }
        else
        {
          v183 = &StringLiteral_12256/*"SKILL_LVDISP_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v183 = &StringLiteral_12256/*"SKILL_LVDISP_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v183 = &StringLiteral_12256/*"SKILL_LVDISP_TXT"*/;
            }
          }
        }
        servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v183, 0LL);
        if ( v170 )
        {
          servantEntity = (__int64)System_Text_StringBuilder__AppendFormat(
                                     v170,
                                     (System_String_o *)servantEntity,
                                     v181,
                                     0LL);
          if ( (__int64)++v173 >= v175 )
            goto LABEL_626;
          svtUseSkillIdList = v169->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_624;
    }
LABEL_1056:
    v230 = sub_B2C460(servantEntity);
    sub_B2C400(v230, 0LL);
  }
  if ( !v170 )
    goto LABEL_624;
LABEL_626:
  this = v234;
  v184 = v234->fields.skillLvLabel;
  servantEntity = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v170->klass->vtable._3_ToString.method)(
                    v170,
                    v170->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v184 )
    goto LABEL_624;
  UILabel__set_text(v184, (System_String_o *)servantEntity, 0LL);
  servantEntity = (__int64)v234->fields.skillLvLabel;
  p_maskLabel = v232;
  p_statusTxtLb = v233;
  p_maskSprite = v231;
  if ( !servantEntity )
    goto LABEL_624;
  servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
  if ( !servantEntity )
    goto LABEL_624;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  modeKind = v235;
  if ( item->fields.isParty )
  {
    servantEntity = (__int64)v234->fields.partyIcon;
    if ( !servantEntity )
      goto LABEL_624;
    FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    servantEntity = (__int64)v234->fields.lockImg;
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
    servantEntity = (__int64)*v231;
    if ( !*v231 )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v185 = *v232;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9320/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v185 )
      goto LABEL_624;
    UILabel__set_text(v185, (System_String_o *)servantEntity, 0LL);
    if ( item->fields.isEventJoin )
    {
      v186 = *v232;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10387/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v186 )
        goto LABEL_624;
      UILabel__set_text(v186, (System_String_o *)servantEntity, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_669;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28617756(126, 0LL) )
      goto LABEL_669;
    v187 = *v232;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v188 = &StringLiteral_11620/*"SELECT_CANNOT"*/;
    goto LABEL_667;
  }
  if ( !enableAppendSkillUp )
    goto LABEL_624;
  if ( enableAppendSkillUp->fields._size > 0 || item->fields.isAppendSkillOpenItemNum )
  {
    servantEntity = (__int64)*v233;
    if ( !*v233 )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v187 = *v233;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v188 = &StringLiteral_8829/*"MSG_ABLED_SKILLUP"*/;
LABEL_667:
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v188, 0LL);
    if ( !v187 )
      goto LABEL_624;
    UILabel__set_text(v187, (System_String_o *)servantEntity, 0LL);
  }
LABEL_669:
  v189 = (UnityEngine_Object_o *)v234->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v189, 0LL, 0LL) )
  {
    servantEntity = (__int64)v234->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)v234->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
  }
  coinInfo = (UnityEngine_Object_o *)v234->fields.coinInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(coinInfo, 0LL, 0LL) )
  {
    switchInfoComp = (UnityEngine_Object_o *)v234->fields.switchInfoComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(switchInfoComp, 0LL, 0LL) )
    {
      switchInfoList = (System_String_o *)v234->fields.switchInfoList;
      if ( switchInfoList )
      {
        servantEntity = (__int64)v234->fields.switchInfoComp;
        if ( !servantEntity )
          goto LABEL_624;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)servantEntity, (UIWidget_array *)switchInfoList, 0LL);
        servantEntity = (__int64)v234->fields.coinInfo;
        if ( !servantEntity )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
        coinNumLabel = v234->fields.coinNumLabel;
        servantEntity = CombineServantListViewItem__get_SkillOpenItemNum(item, v193);
        if ( (servantEntity & 0x80000000) != 0 )
        {
          switchInfoList = (System_String_o *)StringLiteral_1/*""*/;
          if ( !coinNumLabel )
            goto LABEL_624;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(item, v194);
          v195 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum);
          servantEntity = (__int64)System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v195, 0LL);
          switchInfoList = (System_String_o *)servantEntity;
          if ( !coinNumLabel )
            goto LABEL_624;
        }
        UILabel__set_text(coinNumLabel, switchInfoList, 0LL);
        servantEntity = CombineServantListViewItem__get_SkillOpenItemId(item, v196);
        coinIcon = v234->fields.coinIcon;
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
    servantEntity = (__int64)v234->fields.removeImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
LABEL_702:
  v198 = item->fields.type;
  if ( v198 != 4 )
    goto LABEL_756;
  servantEntity = (__int64)this->fields.npIconLabel;
  if ( !servantEntity )
    goto LABEL_624;
  v199 = SHIDWORD(v238.name) <= 0 ? -1 : LODWORD(v238.name);
  UIIconLabel__Set_41609428(
    (UIIconLabel_o *)servantEntity,
    33,
    v199,
    SHIDWORD(v238.methodPointer),
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
    v200 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v200, 0LL, 0LL) )
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
    v201 = *p_maskLabel;
    if ( item->fields.isHeroineSvt )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v202 = &StringLiteral_9316/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v202 = &StringLiteral_9319/*"NONSELECT_NPUP_BASE"*/;
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v202, 0LL);
    if ( !v201 )
      goto LABEL_624;
    goto LABEL_750;
  }
  if ( !item->fields.isSameSvt && !item->fields.isBaseSvt )
  {
    v209 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v209, 0LL, 0LL) )
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
  v203 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v203, 0LL, 0LL) )
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
      v201 = *p_statusTxtLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8831/*"MSG_ABLED_TDUP"*/, 0LL);
      if ( !v201 )
        goto LABEL_1057;
LABEL_750:
      UILabel__set_text(v201, (System_String_o *)servantEntity, 0LL);
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
  v198 = item->fields.type;
LABEL_756:
  if ( v198 != 6 )
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
    v204 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v204, 0LL, 0LL) )
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
        v205 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v206 = &StringLiteral_9316/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        v205 = *p_maskLabel;
        if ( item->fields.isEventJoin )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v206 = &StringLiteral_11643/*"SELECT_SERVANT_EVENT_JOIN"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v206 = &StringLiteral_9360/*"NO_SELECT_LVEXCEED"*/;
        }
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v206, 0LL);
      if ( !v205 )
        goto LABEL_624;
      goto LABEL_829;
    }
    goto LABEL_830;
  }
  if ( !item->fields.isLvMax || !item->fields.isLimitCntMax )
  {
    v208 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v208, 0LL, 0LL) )
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
  v207 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !item->fields.isLvExceedItemNum )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v207, 0LL, 0LL) )
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
  if ( UnityEngine_Object__op_Inequality(v207, 0LL, 0LL) )
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
    v205 = *p_statusTxtLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8828/*"MSG_ABLED_LIMITUP"*/, 0LL);
    if ( !v205 )
      goto LABEL_1057;
LABEL_829:
    UILabel__set_text(v205, (System_String_o *)servantEntity, 0LL);
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
  v210 = item->fields.type;
  if ( v210 != 10 && v210 != 7 )
    goto LABEL_906;
  servantEntity = (__int64)this->fields.limitCountIcon;
  if ( !servantEntity )
    goto LABEL_1057;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)servantEntity, 0LL);
  servantEntity = (__int64)this->fields.subIconLabel;
  if ( !servantEntity )
    goto LABEL_1057;
  UIIconLabel__Clear((UIIconLabel_o *)servantEntity, 0LL);
  v212 = item->fields.type;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  }
  servantEntity = CombineServantListViewManager__GetSortKind(v212, v211);
  v213 = this->fields.servantFaceIcon;
  if ( !v213 )
    goto LABEL_1057;
  if ( (_DWORD)servantEntity == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *, __int64, Il2CppMethodPointer))v213->klass->vtable._4_ParameterChange.method)(
      this->fields.servantFaceIcon,
      1LL,
      v213->klass->vtable._5_UpdateAlpha.methodPtr);
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
  v214 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList);
  v215 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( v214 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v215, 0LL, 0LL) )
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
      v216 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9313/*"NONSEELECT_STATUSUP_MAX"*/, 0LL);
      if ( !v216 )
        goto LABEL_1057;
      UILabel__set_text(v216, (System_String_o *)servantEntity, 0LL);
    }
    if ( item->fields.isEventJoin )
    {
      v217 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11643/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v217 )
        goto LABEL_1057;
      UILabel__set_text(v217, (System_String_o *)servantEntity, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_893;
    v218 = *p_maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11620/*"SELECT_CANNOT"*/, 0LL);
    if ( !v218 )
      goto LABEL_1057;
    v219 = (System_String_o *)servantEntity;
    servantEntity = (__int64)v218;
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v215, 0LL, 0LL) )
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
    v219 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)servantEntity, v219, 0LL);
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
  v220 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Implicit(v220, 0LL) )
  {
    servantEntity = (__int64)this->fields.svtCommandCardList;
    if ( !servantEntity )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v221 = this->fields.svtCommandCardList;
    servantEntity = CombineServantListViewItem__get_UserSvtId(item, v222);
    if ( !v221 )
      goto LABEL_1057;
    ServantCommandCardListComponent__Set(v221, servantEntity, 1, 1, 0LL);
  }
  v210 = item->fields.type;
LABEL_906:
  if ( v210 != 8 )
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
    v223 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v223, 0LL, 0LL) )
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
        v224 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v225 = &StringLiteral_9316/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        v224 = *p_maskLabel;
        if ( item->fields.isEventJoin )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v225 = &StringLiteral_11643/*"SELECT_SERVANT_EVENT_JOIN"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v225 = &StringLiteral_9359/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
        }
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v225, 0LL);
      if ( !v224 )
        goto LABEL_624;
      goto LABEL_970;
    }
    goto LABEL_971;
  }
  if ( !item->fields.isFriendshipRankMax )
  {
    v227 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v227, 0LL, 0LL) )
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
  v226 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !item->fields.isFriendshipExceedItemNum )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v226, 0LL, 0LL) )
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
  if ( UnityEngine_Object__op_Inequality(v226, 0LL, 0LL) )
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
    v224 = *p_statusTxtLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8827/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, 0LL);
    if ( !v224 )
      goto LABEL_1057;
LABEL_970:
    UILabel__set_text(v224, (System_String_o *)servantEntity, 0LL);
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
      v228 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11643/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v228 )
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
              v229 = (System_String_o *)StringLiteral_1/*""*/;
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
    v228 = *p_maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8431/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
    if ( v228 )
    {
LABEL_1016:
      v229 = (System_String_o *)servantEntity;
      servantEntity = (__int64)v228;
LABEL_1017:
      UILabel__set_text((UILabel_o *)servantEntity, v229, 0LL);
      servantEntity = (__int64)*p_statusTxtLb;
      if ( *p_statusTxtLb )
      {
LABEL_1018:
        UILabel__set_text((UILabel_o *)servantEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        return;
      }
LABEL_1057:
      sub_B2C434(servantEntity, switchInfoList);
    }
LABEL_624:
    sub_B2C434(servantEntity, switchInfoList);
  }
  if ( !item->fields.isHeroineSvt )
    goto LABEL_981;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_28617756(126, 0LL) )
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
          switchInfoList = LocalizationManager__Get((System_String_o *)StringLiteral_8431/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
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
  UnityEngine_Object_o *dragSelect; // x21
  __int64 v6; // x1
  DragSelectComponent_o *v7; // x0
  int32_t dragSelectNum; // w2
  int32_t selectNum; // w1

  if ( (byte_418A5F3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, item);
    byte_418A5F3 = 1;
  }
  dragSelect = (UnityEngine_Object_o *)this->fields.dragSelect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(dragSelect, 0LL, 0LL) )
  {
    v7 = this->fields.dragSelect;
    if ( item )
    {
      if ( v7 )
      {
        dragSelectNum = item->fields.dragSelectNum;
        selectNum = item->fields.selectNum;
LABEL_12:
        DragSelectComponent__Set(v7, selectNum, dragSelectNum, 0LL);
        return;
      }
    }
    else if ( v7 )
    {
      selectNum = -1;
      dragSelectNum = -1;
      goto LABEL_12;
    }
    sub_B2C434(v7, v6);
  }
}