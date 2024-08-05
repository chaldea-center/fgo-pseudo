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
  UILabel_o *v24; // x21
  LocalizationManager_c *v25; // x0
  UILabel_o *maskLabel; // x21
  uint32_t v27; // w8
  UnityEngine_Object_o *v28; // x22
  uint32_t cctor_finished; // w8
  int v30; // w22
  int32_t v31; // w8
  __int64 *v32; // x8
  int32_t atkBase; // w8
  UILabel_o *v34; // x21
  UILabel_o *v35; // x21

  v4 = isSelectEnable;
  if ( (byte_4A01EA5 & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, item);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64870(&StringLiteral_9222/*"NONSELECT_UNDER_STATUS_MAX"*/, v8);
    sub_1B64870(&StringLiteral_9217/*"NONSELECT_MATERIAL"*/, v9);
    sub_1B64870(&StringLiteral_9220/*"NONSELECT_NPUP_BASE"*/, v10);
    sub_1B64870(&StringLiteral_9218/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v11);
    byte_4A01EA5 = 1;
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
    v28 = (UnityEngine_Object_o *)this->fields.baseButton;
    cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
    if ( item->fields.isMaxSelect )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
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
        v30 = 1;
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
      if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
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
    v30 = 0;
LABEL_48:
    v31 = item->fields.type;
    if ( v31 == 5 )
    {
      if ( !(v30 & 1 | item->fields.isMaxNextLv) )
        goto LABEL_81;
    }
    else if ( v31 == 1 )
    {
      if ( ((v20 & ~(v19 || v4) | v30) & 1) == 0 )
        goto LABEL_81;
    }
    else if ( !v30 )
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
    v25 = LocalizationManager_TypeInfo;
    v27 = LocalizationManager_TypeInfo->_2.cctor_finished;
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
          v34 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9222/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v34 )
            goto LABEL_93;
          UILabel__set_text(v34, (System_String_o *)servantEntity, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectSecondStatusUpHp )
          goto LABEL_81;
      }
      else
      {
        if ( atkBase >= 1 && item->fields.isNotSelectStatusUpAtk )
        {
          v35 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9222/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v35 )
            goto LABEL_93;
          UILabel__set_text(v35, (System_String_o *)servantEntity, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectStatusUpHp )
          goto LABEL_81;
      }
      maskLabel = this->fields.maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v32 = &StringLiteral_9222/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_79:
      servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)*v32, 0LL);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)servantEntity, 0LL);
        goto LABEL_81;
      }
LABEL_93:
      sub_1B64ACC(servantEntity, v13);
    }
    maskLabel = this->fields.maskLabel;
    v25 = LocalizationManager_TypeInfo;
    v27 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_76:
    if ( !v27 )
      j_il2cpp_runtime_class_init_0(v25);
    v32 = &StringLiteral_9217/*"NONSELECT_MATERIAL"*/;
    goto LABEL_79;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, v13) )
  {
    v24 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9218/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
    if ( !v24 )
      goto LABEL_93;
    UILabel__set_text(v24, (System_String_o *)servantEntity, 0LL);
    if ( item->fields.type == 5 )
    {
      v25 = LocalizationManager_TypeInfo;
      maskLabel = this->fields.maskLabel;
      v27 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_58:
      if ( !v27 )
        j_il2cpp_runtime_class_init_0(v25);
      v32 = &StringLiteral_9220/*"NONSELECT_NPUP_BASE"*/;
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
  System_String_o *switchInfoList; // x1
  __int64 gameObject; // x0
  int32_t type; // w19
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  IconLabelInfo_o *iconLabelInfo1; // x2
  UIIconLabel_o *subIconLabel; // x23
  int32_t rarity; // w24
  const MethodInfo *v71; // x1
  int32_t v72; // w25
  const MethodInfo *v73; // x4
  UILabel_o **p_statusTxtLb; // x20
  struct UILabel_o **p_maskLabel; // x29
  bool v76; // w1
  UnityEngine_Object_o *pushImg; // x23
  UnityEngine_Object_o *materialTdSprite; // x23
  const MethodInfo *v79; // x2
  UISprite_o *v80; // x23
  int32_t v81; // w23
  int32_t v82; // w8
  _BOOL4 v83; // w8
  bool CanNotBaseSelect; // w0
  UnityEngine_Object_o *v85; // x23
  bool v86; // w22
  bool v87; // w0
  struct UILabel_o *v88; // x22
  __int64 *v89; // x8
  int32_t v90; // w2
  const MethodInfo *v91; // x2
  UserServantEntity_o *userSvtEntity; // x0
  char v93; // w25
  UILabel_o *v94; // x23
  UILabel_o *v95; // x23
  _BOOL4 isLock; // w8
  UILabel_o *v97; // x23
  _BOOL4 isChoice; // w8
  UILabel_o *v99; // x23
  UILabel_o *v100; // x23
  UILabel_o *v101; // x23
  UILabel_o *v102; // x23
  UILabel_o *v103; // x23
  UILabel_o *v104; // x23
  _BOOL4 isParty; // w19
  __int64 *v106; // x8
  UILabel_o *v107; // x23
  _BOOL4 v108; // w19
  __int64 *v109; // x8
  UILabel_o *v110; // x23
  const MethodInfo *v111; // x1
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x24
  bool v114; // w23
  bool v115; // w0
  int32_t v116; // w8
  UILabel_o *v117; // x22
  UILabel_o *v118; // x22
  UILabel_o *v119; // x22
  UILabel_o *v120; // x22
  __int64 *v121; // x8
  UnityEngine_Object_o *v122; // x23
  uint32_t cctor_finished; // w8
  int v124; // w19
  UILabel_o *v125; // x22
  System_String_o *v126; // x23
  Il2CppObject *v127; // x0
  UILabel_o *v128; // x22
  __int64 *v129; // x8
  UILabel_o *v130; // x22
  UILabel_o *v131; // x23
  UILabel_o *v132; // x22
  UILabel_o *v133; // x22
  int32_t v134; // w8
  System_String_o *v135; // x1
  UILabel_o *fortificationAppointmentLabel; // x22
  float v137; // s0
  float v138; // s2
  float fortificationInfoRootObjOffsetY; // s10
  float v140; // s8
  float v141; // s9
  System_Collections_Generic_List_object__o *v142; // x22
  System_String_o *v143; // x23
  Il2CppObject *v144; // x0
  int32_t v145; // w2
  int32_t v146; // w3
  struct System_Object_array *items; // x8
  _QWORD *v148; // x9
  __int64 size; // x10
  __int64 v150; // x1
  Il2CppClass **v151; // x0
  System_String_o *v152; // x23
  Il2CppObject *v153; // x0
  int32_t v154; // w2
  int32_t v155; // w3
  struct System_Object_array *v156; // x8
  _QWORD *v157; // x9
  __int64 v158; // x10
  __int64 v159; // x1
  Il2CppClass **v160; // x0
  int32_t v161; // w2
  int32_t v162; // w3
  struct System_Object_array *v163; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
  __int64 v166; // x1
  Il2CppClass **v167; // x0
  _BOOL4 v168; // w8
  UnityEngine_Object_o *v169; // x22
  _BOOL4 isHeroineSvt; // w19
  UILabel_o *v171; // x22
  __int64 *v172; // x8
  _BOOL4 v173; // w8
  bool v174; // w0
  UnityEngine_Object_o *v175; // x23
  bool v176; // w22
  bool v177; // w0
  System_String_o *v178; // x1
  _BOOL4 isSealCombineLimit; // w19
  UnityEngine_Object_o *v180; // x22
  int32_t v181; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  System_Text_StringBuilder_o *v183; // x22
  SkillInfo_array *v184; // x8
  __int64 v185; // x9
  unsigned __int64 v186; // x26
  __int64 v187; // x27
  __int64 v188; // x20
  SkillInfo_o *v189; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v192; // w25
  Il2CppObject *v193; // x24
  bool v194; // w25
  System_String_o **v195; // x8
  UILabel_o *skillLvLabel; // x23
  _BOOL4 v197; // w8
  UnityEngine_Object_o *v198; // x22
  UILabel_o *v199; // x22
  UILabel_o *v200; // x22
  __int64 *v201; // x8
  _BOOL4 isSkillUpItemNum; // w19
  UnityEngine_Object_o *v203; // x22
  bool v204; // w0
  UnityEngine_Object_o *v205; // x22
  SvtUseSkillData_o *AppendSkillData; // x0
  struct System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v208; // x24
  System_Text_StringBuilder_o *v209; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v211; // x9
  unsigned __int64 v212; // x27
  __int64 v213; // x20
  __int64 v214; // x28
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v216; // x0
  int32_t v217; // w26
  int32_t v218; // w0
  int v219; // t1
  Il2CppObject *v220; // x25
  bool v221; // w26
  System_String_o **v222; // x8
  UILabel_o *v223; // x24
  _BOOL4 v224; // w8
  UILabel_o *v225; // x22
  UILabel_o *v226; // x22
  UILabel_o *v227; // x22
  __int64 *v228; // x8
  UnityEngine_Object_o *v229; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  const MethodInfo *v233; // x1
  const MethodInfo *v234; // x1
  __int64 v235; // x2
  __int64 v236; // x3
  __int64 v237; // x4
  Il2CppObject *v238; // x0
  const MethodInfo *v239; // x1
  ItemIconComponent_o *coinIcon; // x22
  int32_t v241; // w8
  int32_t v242; // w2
  _BOOL4 v243; // w8
  UnityEngine_Object_o *v244; // x22
  _BOOL4 v245; // w19
  UILabel_o *v246; // x22
  __int64 *v247; // x8
  UnityEngine_Object_o *v248; // x22
  System_String_o *v249; // x0
  _BOOL4 v250; // w8
  UnityEngine_Object_o *v251; // x22
  UILabel_o *v252; // x22
  __int64 *v253; // x8
  _BOOL4 isLvExceedItemNum; // w19
  UnityEngine_Object_o *v255; // x22
  bool v256; // w0
  System_String_o *v257; // x0
  UnityEngine_Object_o *v258; // x22
  _BOOL4 isEventJoin; // w19
  UnityEngine_Object_o *v260; // x22
  int32_t v261; // w8
  int32_t v262; // w22
  struct ServantFaceIconComponent_o *v263; // x8
  _BOOL4 v264; // w8
  bool v265; // w0
  UnityEngine_Object_o *v266; // x23
  bool v267; // w22
  bool v268; // w0
  UILabel_o *v269; // x22
  UILabel_o *v270; // x22
  struct UILabel_o *v271; // x22
  System_String_o *v272; // x1
  UnityEngine_Object_o *v273; // x22
  ServantCommandCardListComponent_o *v274; // x22
  const MethodInfo *v275; // x1
  _BOOL4 v276; // w8
  UnityEngine_Object_o *v277; // x22
  UILabel_o *v278; // x22
  __int64 *v279; // x8
  _BOOL4 isFriendshipExceedItemNum; // w19
  UnityEngine_Object_o *v281; // x22
  bool v282; // w0
  System_String_o *v283; // x0
  UnityEngine_Object_o *v284; // x22
  _BOOL4 v285; // w19
  struct UILabel_o *v286; // x19
  System_String_o *v287; // x1
  int32_t v288; // [xsp+1Ch] [xbp-C4h]
  struct UILabel_o **v289; // [xsp+20h] [xbp-C0h]
  struct UILabel_o **v290; // [xsp+28h] [xbp-B8h]
  CombineServantListViewItemDraw_o *v291; // [xsp+38h] [xbp-A8h]
  struct UISprite_o **p_maskSprite; // [xsp+40h] [xbp-A0h]
  int32_t SkillOpenItemNum; // [xsp+4Ch] [xbp-94h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-90h] BYREF
  MethodInfo v295; // [xsp+58h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v296; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v297; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A01EA4 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, item);
    sub_1B64870(&CombineServantListViewManager_TypeInfo, v11);
    sub_1B64870(&int_TypeInfo, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_string__Add__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_1B64870(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_1B64870(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1B64870(&LocalizationManager_TypeInfo, v18);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v19);
    sub_1B64870(&System_Text_StringBuilder_TypeInfo, v20);
    sub_1B64870(&TutorialFlag_TypeInfo, v21);
    sub_1B64870(&StringLiteral_12101/*"SKILL_LVDISP_TXT"*/, v22);
    sub_1B64870(&StringLiteral_10260/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, v23);
    sub_1B64870(&StringLiteral_9222/*"NONSELECT_UNDER_STATUS_MAX"*/, v24);
    sub_1B64870(&StringLiteral_6418/*"FORTIFICATION_APPOINTMENT"*/, v25);
    sub_1B64870(&StringLiteral_3626/*"COMBINE_CAN_STATUS_UP_INFO"*/, v26);
    sub_1B64870(&StringLiteral_8716/*"MSG_CAMPAIGN_COMBINE_EXP"*/, v27);
    sub_1B64870(&StringLiteral_12099/*"SKILL_LVDISP_ENABLE_TXT"*/, v28);
    sub_1B64870(&StringLiteral_9217/*"NONSELECT_MATERIAL"*/, v29);
    sub_1B64870(&StringLiteral_22844/*"ribbon_noblephantasmup_01"*/, v30);
    sub_1B64870(&StringLiteral_9216/*"NONSELECT_LIMITUP_BASE"*/, v31);
    sub_1B64870(&StringLiteral_10075/*"PARTY_MEMBER_TXT"*/, v32);
    sub_1B64870(&StringLiteral_9220/*"NONSELECT_NPUP_BASE"*/, v33);
    sub_1B64870(&StringLiteral_12357/*"SUPPORT_MEMBER"*/, v34);
    sub_1B64870(&StringLiteral_8712/*"MSG_ABLED_LIMITUP"*/, v35);
    sub_1B64870(&StringLiteral_11467/*"SELECT_PUSH"*/, v36);
    sub_1B64870(&StringLiteral_11444/*"SELECT_CANNOT"*/, v37);
    sub_1B64870(&StringLiteral_9275/*"NPUP_BASE"*/, v38);
    sub_1B64870(&StringLiteral_12098/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/, v39);
    sub_1B64870(&StringLiteral_11468/*"SELECT_SERVANT_EVENT_JOIN"*/, v40);
    sub_1B64870(&StringLiteral_9263/*"NO_SELECT_FRIENDSHIP_EXCEED"*/, v41);
    sub_1B64870(&StringLiteral_11369/*"SAME_SERVANT"*/, v42);
    sub_1B64870(&StringLiteral_8711/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, v43);
    sub_1B64870(&StringLiteral_9218/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v44);
    sub_1B64870(&StringLiteral_24838/*"{0:#,0}"*/, v45);
    sub_1B64870(&StringLiteral_12100/*"SKILL_LVDISP_SINGLE_TXT"*/, v46);
    sub_1B64870(&StringLiteral_8713/*"MSG_ABLED_SKILLUP"*/, v47);
    sub_1B64870(&StringLiteral_9219/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, v48);
    sub_1B64870(&StringLiteral_9223/*"NONSKILL_TXT"*/, v49);
    sub_1B64870(&StringLiteral_8253/*"LOCKMODE_SELECTED_SERVANT"*/, v50);
    sub_1B64870(&StringLiteral_6332/*"FAVORITE_SERVANT"*/, v51);
    sub_1B64870(&StringLiteral_3442/*"CHOICE_SERVANT"*/, v52);
    sub_1B64870(&StringLiteral_10966/*"RECOMMEND_SUPPORT_MEMBER"*/, v53);
    sub_1B64870(&StringLiteral_8715/*"MSG_ABLED_TDUP"*/, v54);
    sub_1B64870(&StringLiteral_11438/*"SEAL_COMBINE_LIMIT_THIRD"*/, v55);
    sub_1B64870(&StringLiteral_9215/*"NONSELECT_BASE_ALLMAX"*/, v56);
    sub_1B64870(&StringLiteral_9264/*"NO_SELECT_LVEXCEED"*/, v57);
    sub_1B64870(&StringLiteral_1/*""*/, v58);
    sub_1B64870(&StringLiteral_9221/*"NONSELECT_SKILLUP_BASE"*/, v59);
    sub_1B64870(&StringLiteral_11466/*"SELECT_PROTECTED_EVENT_SVT"*/, v60);
    sub_1B64870(&StringLiteral_8254/*"LOCK_SERVANT"*/, v61);
    sub_1B64870(&StringLiteral_9214/*"NONSEELECT_STATUSUP_MAX"*/, v62);
    byte_4A01EA4 = 1;
  }
  v295.invoker_method = 0LL;
  skillInfoList = 0LL;
  v295.methodPointer = 0LL;
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
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, (const MethodInfo *)switchInfoList);
  iconLabelInfo1 = item->fields.iconLabelInfo1;
  switchInfoList = (System_String_o *)gameObject;
  if ( type )
  {
    if ( !servantFaceIcon )
      goto LABEL_966;
    ServantFaceIconComponent__Set_37909280(
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
    ServantFaceIconComponent__Set_37909280(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0LL, 0LL);
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
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, (const MethodInfo *)switchInfoList);
    if ( !gameObject )
      goto LABEL_966;
  }
  v72 = *(_DWORD *)(gameObject + 296);
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, (const MethodInfo *)switchInfoList);
  if ( !gameObject || !subIconLabel )
    goto LABEL_966;
  UIIconLabel__Set_37925528(subIconLabel, 36, rarity, v72, 0, 0LL, 0, 0, *(_DWORD *)(gameObject + 256), 0LL);
LABEL_22:
  CombineServantListViewItem__GetNpInfo(
    item,
    (int32_t *)&v295.invoker_method + 1,
    (int32_t *)&v295.invoker_method,
    (int32_t *)&v295.methodPointer + 1,
    v73);
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
  v76 = item->fields.isSwapChoice ? !item->fields.isChoice : item->fields.isChoice;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v76, 0LL);
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
      v80 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v80, (System_String_o *)StringLiteral_22844/*"ribbon_noblephantasmup_01"*/, 0LL);
      v81 = item->fields.type;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      if ( CombineServantListViewManager__GetSortKind(v81, 0LL) == 1 )
      {
        gameObject = (__int64)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_966;
        v296.fields.x = 0.65;
        v296.fields.y = 1.0;
        v296.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v296, 0LL);
      }
    }
  }
  v82 = item->fields.type;
  switch ( v82 )
  {
    case 5:
      gameObject = (__int64)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_966;
      v90 = SHIDWORD(v295.invoker_method) <= 0 ? -1 : LODWORD(v295.invoker_method);
      UIIconLabel__Set_37925528(
        (UIIconLabel_o *)gameObject,
        33,
        v90,
        SHIDWORD(v295.methodPointer),
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
        v131 = *p_maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11466/*"SELECT_PROTECTED_EVENT_SVT"*/, 0LL);
        if ( !v131 )
          goto LABEL_966;
        UILabel__set_text(v131, (System_String_o *)gameObject, 0LL);
        v93 = 1;
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
          v94 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10075/*"PARTY_MEMBER_TXT"*/, 0LL);
          if ( !v94 )
            goto LABEL_966;
          UILabel__set_text(v94, (System_String_o *)gameObject, 0LL);
          v93 = 1;
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
          v95 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6332/*"FAVORITE_SERVANT"*/, 0LL);
          if ( !v95 )
            goto LABEL_966;
          UILabel__set_text(v95, (System_String_o *)gameObject, 0LL);
          v93 = 1;
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
          v97 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8254/*"LOCK_SERVANT"*/, 0LL);
          if ( !v97 )
            goto LABEL_966;
          UILabel__set_text(v97, (System_String_o *)gameObject, 0LL);
          v93 = 1;
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
          v99 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3442/*"CHOICE_SERVANT"*/, 0LL);
          if ( !v99 )
            goto LABEL_966;
          UILabel__set_text(v99, (System_String_o *)gameObject, 0LL);
          v93 = 1;
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
          v100 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11369/*"SAME_SERVANT"*/, 0LL);
          if ( !v100 )
            goto LABEL_966;
          UILabel__set_text(v100, (System_String_o *)gameObject, 0LL);
          v93 = 1;
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
          v101 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9217/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v101 )
            goto LABEL_966;
          UILabel__set_text(v101, (System_String_o *)gameObject, 0LL);
          v93 = 1;
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
          v102 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9217/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v102 )
            goto LABEL_966;
          UILabel__set_text(v102, (System_String_o *)gameObject, 0LL);
          v93 = 1;
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
          v103 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11468/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
          if ( !v103 )
            goto LABEL_966;
          UILabel__set_text(v103, (System_String_o *)gameObject, 0LL);
          v93 = 1;
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
          v104 = *p_maskLabel;
          isParty = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v106 = &StringLiteral_12357/*"SUPPORT_MEMBER"*/;
          if ( isParty )
            v106 = &StringLiteral_10075/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v106, 0LL);
          if ( !v104 )
            goto LABEL_966;
          UILabel__set_text(v104, (System_String_o *)gameObject, 0LL);
          v93 = 1;
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
          v107 = *p_maskLabel;
          v108 = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v109 = &StringLiteral_10966/*"RECOMMEND_SUPPORT_MEMBER"*/;
          if ( v108 )
            v109 = &StringLiteral_10075/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v109, 0LL);
          if ( !v107 )
            goto LABEL_966;
          UILabel__set_text(v107, (System_String_o *)gameObject, 0LL);
          if ( !item->fields.isParty )
          {
            gameObject = (__int64)*p_maskLabel;
            if ( !*p_maskLabel )
              goto LABEL_966;
            UILabel__SetCondensedScale((UILabel_o *)gameObject, 106, 0LL);
          }
          v93 = 1;
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
          v110 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11467/*"SELECT_PUSH"*/, 0LL);
          if ( !v110 )
            goto LABEL_966;
          UILabel__set_text(v110, (System_String_o *)gameObject, 0LL);
          v93 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, item, v91);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(item, v111);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        v114 = CanNotSelect;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v115 = UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
        if ( v114 )
        {
          if ( !v115 )
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
              if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, (const MethodInfo *)switchInfoList) )
              {
                v130 = *p_maskLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9218/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
                if ( !v130 )
                  goto LABEL_966;
                UILabel__set_text(v130, (System_String_o *)gameObject, 0LL);
                if ( item->fields.type != 5 )
                  break;
                v120 = *p_maskLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v121 = &StringLiteral_9220/*"NONSELECT_NPUP_BASE"*/;
LABEL_320:
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v121, 0LL);
                if ( !v120 )
                  goto LABEL_966;
LABEL_321:
                UILabel__set_text(v120, (System_String_o *)gameObject, 0LL);
              }
LABEL_322:
              v134 = item->fields.type;
              if ( v134 != 5 )
                goto LABEL_407;
              if ( !item->fields.isBaseSvt )
                break;
              v128 = *p_maskLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v129 = &StringLiteral_9275/*"NPUP_BASE"*/;
LABEL_327:
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v129, 0LL);
              if ( !v128 )
                goto LABEL_966;
              UILabel__set_text(v128, (System_String_o *)gameObject, 0LL);
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
              *(UnityEngine_Vector3_o *)&v137 = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)gameObject,
                                                  0LL);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_966;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              v140 = v137;
              v141 = v138;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_966;
              v297.fields.x = v140;
              v297.fields.y = fortificationInfoRootObjOffsetY;
              v297.fields.z = v141;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v297, 0LL);
              goto LABEL_322;
            }
            if ( (v93 & 1) == 0 )
            {
              v120 = *p_maskLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9217/*"NONSELECT_MATERIAL"*/, 0LL);
              if ( !v120 )
                goto LABEL_966;
              goto LABEL_321;
            }
            goto LABEL_322;
          }
          if ( item->fields.isStatusUpSvt )
          {
            v116 = item->fields.rarity;
            if ( v116 <= 3 )
            {
              if ( item->fields.isAtkUpMax || item->fields.isHpUpMax )
              {
                v132 = *p_maskLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9222/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v132 )
                  goto LABEL_966;
                UILabel__set_text(v132, (System_String_o *)gameObject, 0LL);
              }
              if ( item->fields.isAtkSecondUpMax || item->fields.isHpSecondUpMax )
              {
                v133 = *p_maskLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9222/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v133 )
                  goto LABEL_966;
                UILabel__set_text(v133, (System_String_o *)gameObject, 0LL);
              }
              if ( !item->fields.isNotSelectStatusUpAtk && !item->fields.isNotSelectStatusUpHp )
                goto LABEL_322;
              v120 = *p_maskLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v121 = &StringLiteral_9222/*"NONSELECT_UNDER_STATUS_MAX"*/;
            }
            else
            {
              if ( v116 != 4 )
                goto LABEL_322;
              if ( item->fields.atkBase >= 1 )
              {
                if ( item->fields.isAtkSecondUpMax || item->fields.isNotSelectSecondStatusUpAtk )
                {
                  v117 = *p_maskLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9222/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                  if ( !v117 )
                    goto LABEL_966;
                  UILabel__set_text(v117, (System_String_o *)gameObject, 0LL);
                }
                if ( !item->fields.isAtkUpMax )
                {
                  v118 = *p_maskLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9219/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0LL);
                  if ( !v118 )
                    goto LABEL_966;
                  UILabel__set_text(v118, (System_String_o *)gameObject, 0LL);
                }
              }
              if ( item->fields.hpBase < 1 )
                goto LABEL_322;
              if ( item->fields.isHpSecondUpMax || item->fields.isNotSelectSecondStatusUpHp )
              {
                v119 = *p_maskLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9222/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v119 )
                  goto LABEL_966;
                UILabel__set_text(v119, (System_String_o *)gameObject, 0LL);
              }
              if ( item->fields.isHpUpMax )
                goto LABEL_322;
              v120 = *p_maskLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v121 = &StringLiteral_9219/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
            }
            goto LABEL_320;
          }
          goto LABEL_322;
        }
        if ( v115 )
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
        v122 = (UnityEngine_Object_o *)this->fields.baseButton;
        cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
        if ( item->fields.isMaxSelect )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v122, 0LL, 0LL) )
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
            v124 = 1;
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
          if ( UnityEngine_Object__op_Inequality(v122, 0LL, 0LL) )
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
        v124 = 0;
        if ( item->fields.type != 1 )
          goto LABEL_283;
LABEL_277:
        gameObject = (__int64)item->fields.servantEntity;
        if ( !gameObject )
          goto LABEL_966;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)gameObject, 0LL) && !isSelectEnable )
        {
          if ( !(v124 & 1 | !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL)) )
            break;
        }
        else
        {
LABEL_283:
          if ( !v124 )
            break;
        }
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_966;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_966;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v128 = *p_maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v129 = &StringLiteral_9217/*"NONSELECT_MATERIAL"*/;
        goto LABEL_327;
      }
LABEL_103:
      v93 = 0;
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
      v83 = !item->fields.isLock;
      if ( !item->fields.isSwapLock )
        v83 = item->fields.isLock;
      if ( v83 )
      {
        gameObject = (__int64)this->fields.lockImg;
        if ( !gameObject )
          goto LABEL_966;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_966;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      }
      CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList);
      v85 = (UnityEngine_Object_o *)this->fields.baseButton;
      v86 = CanNotBaseSelect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v87 = UnityEngine_Object__op_Inequality(v85, 0LL, 0LL);
      if ( v86 )
      {
        if ( !v87 )
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
            v88 = *p_maskLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v89 = &StringLiteral_9215/*"NONSELECT_BASE_ALLMAX"*/;
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
            v135 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_336;
          }
          v88 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v89 = &StringLiteral_11444/*"SELECT_CANNOT"*/;
LABEL_334:
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v89, 0LL);
          if ( !v88 )
            goto LABEL_966;
          v135 = (System_String_o *)gameObject;
          gameObject = (__int64)v88;
LABEL_336:
          UILabel__set_text((UILabel_o *)gameObject, v135, 0LL);
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
        v88 = *p_maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v89 = &StringLiteral_9217/*"NONSELECT_MATERIAL"*/;
        goto LABEL_334;
      }
      if ( !v87 )
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
          v142 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v142,
            (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v143 = LocalizationManager__Get((System_String_o *)StringLiteral_8716/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v295.methodPointer = item->fields.combineExpCampaignValue;
          v144 = (Il2CppObject *)System_Single__ToString(*(float *)&v295.methodPointer, &v295);
          gameObject = (__int64)System_String__Format(v143, v144, 0LL);
          if ( !v142 )
            goto LABEL_966;
          items = v142->fields._items;
          v148 = Method_System_Collections_Generic_List_string__Add__;
          ++v142->fields._version;
          if ( !items )
            goto LABEL_966;
          size = v142->fields._size;
          v150 = gameObject;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v142,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
          }
          else
          {
            v151 = &items->obj.klass + size;
            v142->fields._size = size + 1;
            v151[4] = (Il2CppClass *)v150;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v151 + 4), v150, v145, v146);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3626/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v163 = v142->fields._items;
          v164 = Method_System_Collections_Generic_List_string__Add__;
          ++v142->fields._version;
          if ( !v163 )
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
            v125 = *p_statusTxtLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v126 = LocalizationManager__Get((System_String_o *)StringLiteral_8716/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
            *(float *)&v295.methodPointer = item->fields.combineExpCampaignValue;
            v127 = (Il2CppObject *)System_Single__ToString(*(float *)&v295.methodPointer, &v295);
            gameObject = (__int64)System_String__Format(v126, v127, 0LL);
            if ( !v125 )
              goto LABEL_966;
LABEL_269:
            UILabel__set_text(v125, (System_String_o *)gameObject, 0LL);
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
          v142 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v142,
            (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v152 = LocalizationManager__Get((System_String_o *)StringLiteral_8716/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v295.methodPointer = item->fields.combineExpCampaignValue;
          v153 = (Il2CppObject *)System_Single__ToString(*(float *)&v295.methodPointer, &v295);
          gameObject = (__int64)System_String__Format(v152, v153, 0LL);
          if ( !v142 )
            goto LABEL_966;
          v156 = v142->fields._items;
          v157 = Method_System_Collections_Generic_List_string__Add__;
          ++v142->fields._version;
          if ( !v156 )
            goto LABEL_966;
          v158 = v142->fields._size;
          v159 = gameObject;
          if ( (unsigned int)v158 >= v156->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v142,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v157[4] + 192LL) + 112LL));
          }
          else
          {
            v160 = &v156->obj.klass + v158;
            v142->fields._size = v158 + 1;
            v160[4] = (Il2CppClass *)v159;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v160 + 4), v159, v154, v155);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3626/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v163 = v142->fields._items;
          v164 = Method_System_Collections_Generic_List_string__Add__;
          ++v142->fields._version;
          if ( !v163 )
            goto LABEL_966;
        }
        v165 = v142->fields._size;
        v166 = gameObject;
        if ( (unsigned int)v165 >= v163->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v142,
            (Il2CppObject *)gameObject,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
        }
        else
        {
          v167 = &v163->obj.klass + v165;
          v142->fields._size = v165 + 1;
          v167[4] = (Il2CppClass *)v166;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v167 + 4), v166, v161, v162);
        }
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_966;
        CombineServantListViewNoticeTween__AddTarget(
          (CombineServantListViewNoticeTween_o *)gameObject,
          *p_statusTxtLb,
          (System_Collections_Generic_List_string__o *)v142,
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
            v125 = *p_statusTxtLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3626/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
            if ( !v125 )
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
  v134 = item->fields.type;
LABEL_407:
  if ( v134 != 9 )
  {
    if ( v134 != 2 )
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
    v168 = !item->fields.isLock;
    if ( !item->fields.isSwapLock )
      v168 = item->fields.isLock;
    if ( v168 )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_966;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_966;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    }
    if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList) )
    {
      v169 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v169, 0LL, 0LL) )
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
        v171 = *p_maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !isHeroineSvt )
          goto LABEL_430;
LABEL_454:
        v172 = &StringLiteral_9217/*"NONSELECT_MATERIAL"*/;
        goto LABEL_455;
      }
      goto LABEL_470;
    }
    if ( !item->fields.isLvMax || !item->fields.isLimitUpItemNum )
    {
      v205 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v205, 0LL, 0LL) )
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
    v180 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v177 = UnityEngine_Object__op_Inequality(v180, 0LL, 0LL);
    if ( !isSealCombineLimit )
    {
      if ( v177 )
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
        v171 = *p_statusTxtLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v172 = &StringLiteral_8712/*"MSG_ABLED_LIMITUP"*/;
        goto LABEL_455;
      }
      goto LABEL_470;
    }
LABEL_462:
    if ( !v177 )
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
    v178 = (System_String_o *)StringLiteral_1/*""*/;
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
  v173 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v173 = item->fields.isLock;
  if ( v173 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v174 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList);
  v175 = (UnityEngine_Object_o *)this->fields.baseButton;
  v176 = v174;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v177 = UnityEngine_Object__op_Inequality(v175, 0LL, 0LL);
  if ( !v176 )
    goto LABEL_462;
  if ( !v177 )
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
    v171 = *p_maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    goto LABEL_454;
  }
  if ( item->fields.isLimitCntMax )
  {
    v171 = *p_maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
LABEL_430:
    v172 = &StringLiteral_9216/*"NONSELECT_LIMITUP_BASE"*/;
LABEL_455:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v172, 0LL);
    if ( !v171 )
      goto LABEL_966;
    v178 = (System_String_o *)gameObject;
    gameObject = (__int64)v171;
LABEL_469:
    UILabel__set_text((UILabel_o *)gameObject, v178, 0LL);
    goto LABEL_470;
  }
  if ( item->fields.isSealCombineLimit )
  {
    v171 = *p_maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v172 = &StringLiteral_11438/*"SEAL_COMBINE_LIMIT_THIRD"*/;
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
  v181 = item->fields.type;
  v291 = this;
  v288 = modeKind;
  v289 = &this->fields.maskLabel;
  v290 = &this->fields.statusTxtLb;
  if ( v181 != 3 )
    goto LABEL_558;
  CombineServantListViewItem__GetSkillInfo(item, &skillInfoList, v79);
  enableSkillUp = item->fields.enableSkillUp;
  v183 = (System_Text_StringBuilder_o *)sub_1B64ABC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v183, 0LL);
  v184 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_966;
  v185 = *(_QWORD *)&skillInfoList->max_length;
  if ( (int)v185 >= 1 )
  {
    v186 = 0LL;
    v187 = (unsigned int)(v185 - 1);
    v188 = (unsigned int)*(_QWORD *)&skillInfoList->max_length;
    while ( 1 )
    {
      if ( v186 >= v184->max_length )
        goto LABEL_967;
      v189 = v184->m_Items[v186];
      if ( v189 )
      {
        lv = v189->fields.lv;
        p_lv = &v189->fields.lv;
        v192 = *(p_lv - 1);
        if ( lv > 0 )
        {
          gameObject = (__int64)System_Int32__ToString((int32_t)p_lv, 0LL);
          goto LABEL_486;
        }
      }
      else
      {
        v192 = -1;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9223/*"NONSKILL_TXT"*/, 0LL);
LABEL_486:
      v193 = (Il2CppObject *)gameObject;
      if ( enableSkillUp )
      {
        v194 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v192,
                 (const MethodInfo_3492530 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v187 == v186 )
        {
          v195 = (System_String_o **)&StringLiteral_12098/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v194 )
            v195 = (System_String_o **)&StringLiteral_12100/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v195 = (System_String_o **)&StringLiteral_12099/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v194 )
            v195 = (System_String_o **)&StringLiteral_12101/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get(*v195, 0LL);
        if ( v183 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v183, (System_String_o *)gameObject, v193, 0LL);
          if ( v188 == ++v186 )
            goto LABEL_500;
          v184 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_966;
    }
  }
  if ( !v183 )
    goto LABEL_966;
LABEL_500:
  this = v291;
  skillLvLabel = v291->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v183->klass->vtable._3_ToString.method)(
                 v183,
                 v183->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !skillLvLabel )
    goto LABEL_966;
  UILabel__set_text(skillLvLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)v291->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_966;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  p_maskLabel = v289;
  p_statusTxtLb = v290;
  if ( !gameObject )
    goto LABEL_966;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  modeKind = v288;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)v291->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_966;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  v197 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v197 = item->fields.isLock;
  if ( v197 )
  {
    gameObject = (__int64)v291->fields.lockImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList) )
  {
    v198 = (UnityEngine_Object_o *)v291->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v198, 0LL, 0LL) )
      goto LABEL_553;
    gameObject = (__int64)v291->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)v291->fields.baseButton;
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
    v199 = *v289;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9221/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v199 )
      goto LABEL_966;
    UILabel__set_text(v199, (System_String_o *)gameObject, 0LL);
    if ( !item->fields.isHeroineSvt )
      goto LABEL_553;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_37381212(126, 0LL) )
      goto LABEL_553;
    v200 = *v289;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v201 = &StringLiteral_11444/*"SELECT_CANNOT"*/;
    goto LABEL_541;
  }
  isSkillUpItemNum = item->fields.isSkillUpItemNum;
  v203 = (UnityEngine_Object_o *)v291->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v204 = UnityEngine_Object__op_Inequality(v203, 0LL, 0LL);
  if ( !isSkillUpItemNum )
  {
    if ( v204 )
    {
      gameObject = (__int64)v291->fields.baseButton;
      if ( !gameObject )
        goto LABEL_966;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)v291->fields.baseButton;
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
  if ( v204 )
  {
    gameObject = (__int64)v291->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)v291->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*v290;
    if ( !*v290 )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v200 = *v290;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v201 = &StringLiteral_8713/*"MSG_ABLED_SKILLUP"*/;
LABEL_541:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v201, 0LL);
    if ( !v200 )
      goto LABEL_966;
    UILabel__set_text(v200, (System_String_o *)gameObject, 0LL);
  }
LABEL_553:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)v291->fields.removeImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v181 = item->fields.type;
LABEL_558:
  if ( v181 != 11 )
    goto LABEL_655;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(item, (const MethodInfo *)switchInfoList);
  enableAppendSkillUp = item->fields.enableAppendSkillUp;
  v208 = AppendSkillData;
  v209 = (System_Text_StringBuilder_o *)sub_1B64ABC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v209, 0LL);
  if ( !v208 )
    goto LABEL_966;
  svtUseSkillIdList = v208->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_966;
  v211 = *(_QWORD *)&svtUseSkillIdList->max_length;
  if ( (int)v211 >= 1 )
  {
    v212 = 0LL;
    v213 = (unsigned int)(v211 - 1);
    v214 = (unsigned int)*(_QWORD *)&svtUseSkillIdList->max_length;
    while ( v212 < svtUseSkillIdList->max_length )
    {
      svtSkillLvList = v208->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_966;
      if ( v212 >= svtSkillLvList->max_length )
        break;
      v216 = (__int64)svtSkillLvList + 4 * v212;
      v217 = svtUseSkillIdList->m_Items[v212 + 1];
      v219 = *(_DWORD *)(v216 + 32);
      v218 = v216 + 32;
      if ( v219 <= 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9223/*"NONSKILL_TXT"*/, 0LL);
      }
      else
      {
        gameObject = (__int64)System_Int32__ToString(v218, 0LL);
      }
      v220 = (Il2CppObject *)gameObject;
      if ( enableAppendSkillUp )
      {
        v221 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v217,
                 (const MethodInfo_3492530 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v212 == v213 )
        {
          v222 = (System_String_o **)&StringLiteral_12098/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v221 )
            v222 = (System_String_o **)&StringLiteral_12100/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v222 = (System_String_o **)&StringLiteral_12099/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v221 )
            v222 = (System_String_o **)&StringLiteral_12101/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get(*v222, 0LL);
        if ( v209 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v209, (System_String_o *)gameObject, v220, 0LL);
          if ( ++v212 == v214 )
            goto LABEL_585;
          svtUseSkillIdList = v208->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_966;
    }
LABEL_967:
    sub_1B64AD4(gameObject, switchInfoList);
  }
  if ( !v209 )
    goto LABEL_966;
LABEL_585:
  this = v291;
  v223 = v291->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v209->klass->vtable._3_ToString.method)(
                 v209,
                 v209->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v223 )
    goto LABEL_966;
  UILabel__set_text(v223, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)v291->fields.skillLvLabel;
  p_statusTxtLb = v290;
  p_maskLabel = v289;
  if ( !gameObject )
    goto LABEL_966;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_966;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  modeKind = v288;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)v291->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_966;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  v224 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v224 = item->fields.isLock;
  if ( v224 )
  {
    gameObject = (__int64)v291->fields.lockImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  gameObject = CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v225 = *v289;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9221/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v225 )
      goto LABEL_966;
    UILabel__set_text(v225, (System_String_o *)gameObject, 0LL);
    if ( item->fields.isEventJoin )
    {
      v226 = *v289;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10260/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v226 )
        goto LABEL_966;
      UILabel__set_text(v226, (System_String_o *)gameObject, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_625;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_37381212(126, 0LL) )
      goto LABEL_625;
    v227 = *v289;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v228 = &StringLiteral_11444/*"SELECT_CANNOT"*/;
    goto LABEL_623;
  }
  if ( !enableAppendSkillUp )
    goto LABEL_966;
  if ( enableAppendSkillUp->fields._size > 0 || item->fields.isAppendSkillOpenItemNum )
  {
    gameObject = (__int64)*v290;
    if ( !*v290 )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v227 = *v290;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v228 = &StringLiteral_8713/*"MSG_ABLED_SKILLUP"*/;
LABEL_623:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v228, 0LL);
    if ( !v227 )
      goto LABEL_966;
    UILabel__set_text(v227, (System_String_o *)gameObject, 0LL);
  }
LABEL_625:
  v229 = (UnityEngine_Object_o *)v291->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v229, 0LL, 0LL) )
  {
    gameObject = (__int64)v291->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)v291->fields.baseButton;
    if ( !gameObject )
      goto LABEL_966;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  coinInfo = (UnityEngine_Object_o *)v291->fields.coinInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(coinInfo, 0LL, 0LL) )
  {
    switchInfoComp = (UnityEngine_Object_o *)v291->fields.switchInfoComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchInfoComp, 0LL, 0LL) )
    {
      switchInfoList = (System_String_o *)v291->fields.switchInfoList;
      if ( switchInfoList )
      {
        gameObject = (__int64)v291->fields.switchInfoComp;
        if ( !gameObject )
          goto LABEL_966;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)gameObject, (UIWidget_array *)switchInfoList, 0LL);
        gameObject = (__int64)v291->fields.coinInfo;
        if ( !gameObject )
          goto LABEL_966;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        coinNumLabel = v291->fields.coinNumLabel;
        gameObject = CombineServantListViewItem__get_SkillOpenItemNum(item, v233);
        if ( (gameObject & 0x80000000) != 0 )
        {
          switchInfoList = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(item, v234);
          v238 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum, v235, v236, v237);
          gameObject = (__int64)System_String__Format((System_String_o *)StringLiteral_24838/*"{0:#,0}"*/, v238, 0LL);
          switchInfoList = (System_String_o *)gameObject;
        }
        if ( !coinNumLabel )
          goto LABEL_966;
        UILabel__set_text(coinNumLabel, switchInfoList, 0LL);
        gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, v239);
        coinIcon = v291->fields.coinIcon;
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
          gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, (const MethodInfo *)switchInfoList);
          if ( !coinIcon )
            goto LABEL_966;
          ItemIconComponent__SetItem(coinIcon, gameObject, -1, 0LL);
        }
      }
    }
  }
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)v291->fields.removeImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_655:
  v241 = item->fields.type;
  if ( v241 != 4 )
    goto LABEL_704;
  gameObject = (__int64)this->fields.npIconLabel;
  if ( !gameObject )
    goto LABEL_966;
  v242 = SHIDWORD(v295.invoker_method) <= 0 ? -1 : LODWORD(v295.invoker_method);
  UIIconLabel__Set_37925528((UIIconLabel_o *)gameObject, 33, v242, SHIDWORD(v295.methodPointer), 0, 0LL, 0, 0, 0, 0LL);
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
  v243 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v243 = item->fields.isLock;
  if ( v243 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList) )
  {
    v244 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v244, 0LL, 0LL) )
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
      v245 = item->fields.isHeroineSvt;
      v246 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v245 )
        v247 = &StringLiteral_9217/*"NONSELECT_MATERIAL"*/;
      else
        v247 = &StringLiteral_9220/*"NONSELECT_NPUP_BASE"*/;
      v249 = (System_String_o *)*v247;
LABEL_697:
      gameObject = (__int64)LocalizationManager__Get(v249, 0LL);
      if ( !v246 )
        goto LABEL_966;
      UILabel__set_text(v246, (System_String_o *)gameObject, 0LL);
    }
  }
  else
  {
    if ( !item->fields.isSameSvt && !item->fields.isBaseSvt )
    {
      v260 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v260, 0LL, 0LL) )
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
    v248 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v248, 0LL, 0LL) )
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
        v246 = *p_statusTxtLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v249 = (System_String_o *)StringLiteral_8715/*"MSG_ABLED_TDUP"*/;
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
  v241 = item->fields.type;
LABEL_704:
  if ( v241 != 6 )
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
  v250 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v250 = item->fields.isLock;
  if ( v250 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList) )
  {
    v251 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v251, 0LL, 0LL) )
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
      v252 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v253 = &StringLiteral_9217/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      isEventJoin = item->fields.isEventJoin;
      v252 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isEventJoin )
        v253 = &StringLiteral_11468/*"SELECT_SERVANT_EVENT_JOIN"*/;
      else
        v253 = &StringLiteral_9264/*"NO_SELECT_LVEXCEED"*/;
    }
    v257 = (System_String_o *)*v253;
    goto LABEL_776;
  }
  if ( !item->fields.isLvMax || !item->fields.isLimitCntMax )
  {
    v258 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v258, 0LL, 0LL) )
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
  v255 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v256 = UnityEngine_Object__op_Inequality(v255, 0LL, 0LL);
  if ( !isLvExceedItemNum )
  {
    if ( !v256 )
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
  if ( !v256 )
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
  v252 = *p_statusTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v257 = (System_String_o *)StringLiteral_8712/*"MSG_ABLED_LIMITUP"*/;
LABEL_776:
  gameObject = (__int64)LocalizationManager__Get(v257, 0LL);
  if ( !v252 )
    goto LABEL_966;
  UILabel__set_text(v252, (System_String_o *)gameObject, 0LL);
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
  v261 = item->fields.type;
  if ( v261 != 10 && v261 != 7 )
    goto LABEL_847;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_966;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.subIconLabel;
  if ( !gameObject )
    goto LABEL_966;
  UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0LL);
  v262 = item->fields.type;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  gameObject = CombineServantListViewManager__GetSortKind(v262, 0LL);
  v263 = this->fields.servantFaceIcon;
  if ( !v263 )
    goto LABEL_966;
  if ( (_DWORD)gameObject == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *, __int64, Il2CppMethodPointer))v263->klass->vtable._4_ParameterChange.method)(
      this->fields.servantFaceIcon,
      1LL,
      v263->klass->vtable._5_UpdateAlpha.methodPtr);
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
  v264 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v264 = item->fields.isLock;
  if ( v264 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v265 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList);
  v266 = (UnityEngine_Object_o *)this->fields.baseButton;
  v267 = v265;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v268 = UnityEngine_Object__op_Inequality(v266, 0LL, 0LL);
  if ( v267 )
  {
    if ( !v268 )
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
      v269 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9214/*"NONSEELECT_STATUSUP_MAX"*/, 0LL);
      if ( !v269 )
        goto LABEL_966;
      UILabel__set_text(v269, (System_String_o *)gameObject, 0LL);
    }
    if ( item->fields.isEventJoin )
    {
      v270 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11468/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v270 )
        goto LABEL_966;
      UILabel__set_text(v270, (System_String_o *)gameObject, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_835;
    v271 = *p_maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11444/*"SELECT_CANNOT"*/, 0LL);
    if ( !v271 )
      goto LABEL_966;
    v272 = (System_String_o *)gameObject;
    gameObject = (__int64)v271;
    goto LABEL_834;
  }
  if ( v268 )
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
    v272 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_834:
    UILabel__set_text((UILabel_o *)gameObject, v272, 0LL);
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
  v273 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v273, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v274 = this->fields.svtCommandCardList;
    gameObject = CombineServantListViewItem__get_UserSvtId(item, v275);
    if ( !v274 )
      goto LABEL_966;
    ServantCommandCardListComponent__Set(v274, gameObject, 1, 1, 0LL);
  }
  v261 = item->fields.type;
LABEL_847:
  if ( v261 != 8 )
    goto LABEL_906;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_966;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  v276 = !item->fields.isLock;
  if ( !item->fields.isSwapLock )
    v276 = item->fields.isLock;
  if ( v276 )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_966;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_966;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList) )
  {
    v277 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v277, 0LL, 0LL) )
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
      v278 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v279 = &StringLiteral_9217/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      v285 = item->fields.isEventJoin;
      v278 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v285 )
        v279 = &StringLiteral_11468/*"SELECT_SERVANT_EVENT_JOIN"*/;
      else
        v279 = &StringLiteral_9263/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
    }
    v283 = (System_String_o *)*v279;
    goto LABEL_900;
  }
  if ( !item->fields.isFriendshipRankMax )
  {
    v284 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v284, 0LL, 0LL) )
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
  v281 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v282 = UnityEngine_Object__op_Inequality(v281, 0LL, 0LL);
  if ( !isFriendshipExceedItemNum )
  {
    if ( !v282 )
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
  if ( !v282 )
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
  v278 = *p_statusTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v283 = (System_String_o *)StringLiteral_8711/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/;
LABEL_900:
  gameObject = (__int64)LocalizationManager__Get(v283, 0LL);
  if ( !v278 )
    goto LABEL_966;
  UILabel__set_text(v278, (System_String_o *)gameObject, 0LL);
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
      v286 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11468/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v286 )
        goto LABEL_966;
      goto LABEL_943;
    }
    if ( !item->fields.isCanNotLock )
    {
      gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, (const MethodInfo *)switchInfoList);
      if ( !gameObject )
        goto LABEL_966;
      if ( !UserServantEntity__IsLeave((UserServantEntity_o *)gameObject, 0LL) )
      {
        gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, (const MethodInfo *)switchInfoList);
        if ( !gameObject )
          goto LABEL_966;
        if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)gameObject, 0LL) )
        {
          gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, (const MethodInfo *)switchInfoList);
          if ( !gameObject )
            goto LABEL_966;
          if ( !UserServantEntity__IsStatusUp((UserServantEntity_o *)gameObject, 0LL) )
          {
            gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(
                                    item,
                                    (const MethodInfo *)switchInfoList);
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
              v287 = (System_String_o *)StringLiteral_1/*""*/;
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
        v286 = *p_maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8253/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
        if ( v286 )
        {
LABEL_943:
          v287 = (System_String_o *)gameObject;
          gameObject = (__int64)v286;
LABEL_944:
          UILabel__set_text((UILabel_o *)gameObject, v287, 0LL);
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
    sub_1B64ACC(gameObject, switchInfoList);
  }
  if ( !item->fields.isHeroineSvt )
    goto LABEL_911;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_37381212(126, 0LL) )
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
      switchInfoList = LocalizationManager__Get((System_String_o *)StringLiteral_8253/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
    }
    else
    {
      switchInfoList = (System_String_o *)StringLiteral_1/*""*/;
    }
    gameObject = (__int64)*p_maskLabel;
    if ( !*p_maskLabel )
      goto LABEL_966;
    UILabel__set_text((UILabel_o *)gameObject, switchInfoList, 0LL);
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
  __int64 v6; // x1
  DragSelectComponent_o *v7; // x0
  int32_t dragSelectNum; // w2
  int32_t selectNum; // w1

  if ( (byte_4A01EA6 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, item);
    byte_4A01EA6 = 1;
  }
  dragSelect = (UnityEngine_Object_o *)this->fields.dragSelect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(dragSelect, 0LL, 0LL) )
  {
    v7 = this->fields.dragSelect;
    if ( item )
    {
      if ( v7 )
      {
        dragSelectNum = item->fields.dragSelectNum;
        selectNum = item->fields.selectNum;
LABEL_11:
        DragSelectComponent__Set(v7, selectNum, dragSelectNum, 0LL);
        return;
      }
    }
    else if ( v7 )
    {
      selectNum = -1;
      dragSelectNum = -1;
      goto LABEL_11;
    }
    sub_1B64ACC(v7, v6);
  }
}