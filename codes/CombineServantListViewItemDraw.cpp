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
  if ( (byte_4BE01FC & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_9455/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_1C21E38(&StringLiteral_9450/*"NONSELECT_MATERIAL"*/);
    sub_1C21E38(&StringLiteral_9453/*"NONSELECT_NPUP_BASE"*/);
    sub_1C21E38(&StringLiteral_9451/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    byte_4BE01FC = 1;
  }
  if ( item )
  {
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
    type = item->fields.type;
    v9 = IsSelect;
    if ( type > 0xC )
    {
      v11 = 0;
    }
    else
    {
      if ( ((1 << type) & 0x1FDD) != 0 )
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL);
      else
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotSelect(item, 0LL);
      v11 = CanNotBaseSelect;
    }
    v12 = !CombineServantListViewItem__get_IsOrganization(item, 0LL);
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
  v15 = UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
  if ( !v11 )
  {
    if ( v15 )
    {
      maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !maskSprite )
        goto LABEL_92;
      ((void (__fastcall *)(UnityEngine_Component_o *, __int64, void *))maskSprite->klass[1]._1.namespaze)(
        maskSprite,
        1LL,
        maskSprite->klass[1]._1.byval_arg.data);
      maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !maskSprite )
        goto LABEL_92;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))maskSprite->klass[1]._1.implementedInterfaces)(
        maskSprite,
        0LL,
        1LL,
        maskSprite->klass[1]._1.interfaceOffsets);
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_92;
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
      if ( !maskSprite )
        goto LABEL_92;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
    }
    if ( !item )
      goto LABEL_80;
    v23 = (UnityEngine_Object_o *)this->fields.baseButton;
    cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
    if ( item->fields.isMaxSelect )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
      {
        maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
        if ( !maskSprite )
          goto LABEL_92;
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, void *))maskSprite->klass[1]._1.namespaze)(
          maskSprite,
          1LL,
          maskSprite->klass[1]._1.byval_arg.data);
        maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
        if ( !maskSprite )
          goto LABEL_92;
        v25 = 1;
        ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))maskSprite->klass[1]._1.implementedInterfaces)(
          maskSprite,
          0LL,
          1LL,
          maskSprite->klass[1]._1.interfaceOffsets);
        goto LABEL_47;
      }
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
      {
        maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
        if ( !maskSprite )
          goto LABEL_92;
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, void *))maskSprite->klass[1]._1.namespaze)(
          maskSprite,
          1LL,
          maskSprite->klass[1]._1.byval_arg.data);
        maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
        if ( !maskSprite )
          goto LABEL_92;
        ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))maskSprite->klass[1]._1.implementedInterfaces)(
          maskSprite,
          0LL,
          1LL,
          maskSprite->klass[1]._1.interfaceOffsets);
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
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
    if ( !maskSprite )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
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
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, void *))maskSprite->klass[1]._1.namespaze)(
    maskSprite,
    1LL,
    maskSprite->klass[1]._1.byval_arg.data);
  maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
  if ( !maskSprite )
    goto LABEL_92;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))maskSprite->klass[1]._1.implementedInterfaces)(
    maskSprite,
    0LL,
    1LL,
    maskSprite->klass[1]._1.interfaceOffsets);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_92;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
  if ( !item )
    goto LABEL_92;
  if ( !item->fields.isMaxNextLv )
  {
    if ( !item->fields.isStatusUpSvt )
      goto LABEL_80;
    if ( item->fields.isCanStUp )
    {
      atkBase = item->fields.atkBase;
      if ( item->fields.rarity == 4 )
      {
        if ( atkBase >= 1 && item->fields.isNotSelectSecondStatusUpAtk )
        {
          v29 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9455/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v29 )
            goto LABEL_92;
          UILabel__set_text(v29, (System_String_o *)maskSprite, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectSecondStatusUpHp )
          goto LABEL_80;
      }
      else
      {
        if ( atkBase >= 1 && item->fields.isNotSelectStatusUpAtk )
        {
          v30 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9455/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v30 )
            goto LABEL_92;
          UILabel__set_text(v30, (System_String_o *)maskSprite, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectStatusUpHp )
          goto LABEL_80;
      }
      maskLabel = this->fields.maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = &StringLiteral_9455/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_78:
      maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v27, 0LL);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)maskSprite, 0LL);
        goto LABEL_80;
      }
LABEL_92:
      sub_1C22094(maskSprite, v16);
    }
    maskLabel = this->fields.maskLabel;
    v20 = LocalizationManager_TypeInfo;
    v22 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_75:
    if ( !v22 )
      j_il2cpp_runtime_class_init_0(v20);
    v27 = &StringLiteral_9450/*"NONSELECT_MATERIAL"*/;
    goto LABEL_78;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0LL) )
  {
    v19 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9451/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
    if ( !v19 )
      goto LABEL_92;
    UILabel__set_text(v19, (System_String_o *)maskSprite, 0LL);
    if ( item->fields.type == 5 )
    {
      v20 = LocalizationManager_TypeInfo;
      maskLabel = this->fields.maskLabel;
      v22 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_57:
      if ( !v22 )
        j_il2cpp_runtime_class_init_0(v20);
      v27 = &StringLiteral_9453/*"NONSELECT_NPUP_BASE"*/;
      goto LABEL_78;
    }
  }
LABEL_80:
  CombineServantListViewItemDraw__SetSelectDisp(this, item, v17);
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
  UnityEngine_Object_o *pushImg; // x23
  UnityEngine_Object_o *materialTdSprite; // x23
  UISprite_o *v26; // x23
  const MethodInfo *v27; // x1
  int32_t v28; // w23
  int32_t v29; // w8
  bool CanNotBaseSelect; // w0
  UnityEngine_Object_o *v31; // x23
  bool v32; // w22
  bool v33; // w0
  struct UILabel_o *v34; // x22
  __int64 *v35; // x8
  int32_t v36; // w2
  char v37; // w20
  UILabel_o *v38; // x23
  UILabel_o *v39; // x23
  UILabel_o *v40; // x23
  const MethodInfo *v41; // x2
  UILabel_o *v42; // x23
  UILabel_o *v43; // x23
  UILabel_o *v44; // x23
  UILabel_o *v45; // x23
  UILabel_o *v46; // x23
  UILabel_o *v47; // x23
  _BOOL4 isParty; // w19
  __int64 *v49; // x8
  UILabel_o *v50; // x23
  _BOOL4 v51; // w19
  __int64 *v52; // x8
  UILabel_o *v53; // x23
  UnityEngine_GameObject_o *v54; // x23
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x24
  bool v57; // w23
  bool v58; // w0
  int32_t v59; // w8
  UILabel_o *v60; // x22
  UILabel_o *v61; // x22
  UILabel_o *v62; // x22
  UILabel_o *v63; // x22
  __int64 *v64; // x8
  UnityEngine_Object_o *v65; // x23
  uint32_t cctor_finished; // w8
  int v67; // w19
  UILabel_o *v68; // x22
  System_String_o *v69; // x23
  Il2CppObject *v70; // x0
  UILabel_o *v71; // x22
  UILabel_o *v72; // x23
  UILabel_o *v73; // x22
  UILabel_o *v74; // x22
  UILabel_o *v75; // x22
  System_String_o *v76; // x0
  int32_t v77; // w8
  UILabel_o *v78; // x22
  UnityEngine_GameObject_o *v79; // x22
  System_String_o *v80; // x1
  UILabel_o *fortificationAppointmentLabel; // x22
  float v82; // s0
  float v83; // s2
  float fortificationInfoRootObjOffsetY; // s10
  float v85; // s8
  float v86; // s9
  System_Collections_Generic_List_object__o *v87; // x22
  System_String_o *v88; // x23
  Il2CppObject *v89; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  struct System_Object_array *items; // x8
  _QWORD *v97; // x9
  __int64 size; // x10
  int64_t v99; // x1
  Il2CppClass **v100; // x0
  System_String_o *v101; // x23
  Il2CppObject *v102; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  struct System_Object_array *v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  int64_t v112; // x1
  Il2CppClass **v113; // x0
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  struct System_Object_array *v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  int64_t v123; // x1
  Il2CppClass **v124; // x0
  UnityEngine_Object_o *v125; // x22
  _BOOL4 isHeroineSvt; // w19
  UILabel_o *v127; // x22
  __int64 *v128; // x8
  bool v129; // w0
  UnityEngine_Object_o *v130; // x23
  bool v131; // w22
  bool v132; // w0
  System_String_o *v133; // x1
  _BOOL4 isSealCombineLimit; // w19
  UnityEngine_Object_o *v135; // x22
  int32_t v136; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  System_Text_StringBuilder_o *v138; // x22
  SkillInfo_array *v139; // x8
  __int64 v140; // x9
  unsigned __int64 v141; // x19
  __int64 v142; // x20
  __int64 v143; // x21
  SkillInfo_o *v144; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v147; // w25
  Il2CppObject *v148; // x24
  bool v149; // w25
  __int64 *v150; // x8
  UILabel_o *skillLvLabel; // x23
  UnityEngine_Object_o *v152; // x22
  UILabel_o *v153; // x22
  UILabel_o *v154; // x22
  __int64 *v155; // x8
  _BOOL4 isSkillUpItemNum; // w19
  UnityEngine_Object_o *v157; // x22
  bool v158; // w0
  UnityEngine_Object_o *v159; // x22
  SvtUseSkillData_o *AppendSkillData; // x0
  struct System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v162; // x24
  System_Text_StringBuilder_o *v163; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v165; // x9
  unsigned __int64 v166; // x19
  __int64 v167; // x20
  __int64 v168; // x21
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v170; // x0
  int32_t v171; // w26
  int32_t v172; // w0
  int v173; // t1
  Il2CppObject *v174; // x25
  bool v175; // w26
  __int64 *v176; // x8
  UILabel_o *v177; // x24
  UILabel_o *v178; // x22
  UILabel_o *v179; // x22
  UILabel_o *v180; // x22
  __int64 *v181; // x8
  UnityEngine_Object_o *v182; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  __int64 v186; // x2
  __int64 v187; // x3
  __int64 v188; // x4
  Il2CppObject *v189; // x0
  struct ItemIconComponent_o *coinIcon; // x22
  int32_t v191; // w8
  SvtUseSkillData_o *v192; // x23
  System_Text_StringBuilder_o *v193; // x22
  struct System_Int32_array *v194; // x8
  __int64 v195; // x19
  char v196; // w27
  char v197; // w26
  char v198; // w25
  unsigned __int64 v199; // x21
  struct System_Int32_array *v200; // x8
  char *v201; // x0
  int v202; // t1
  int32_t v203; // w9
  int v204; // w8
  unsigned __int64 v205; // x29
  __int64 v206; // x26
  struct System_Int32_array *v207; // x8
  Il2CppObject *v208; // x24
  __int64 *v209; // x8
  char v210; // w26
  UILabel_o *v211; // x23
  UILabel_o *v212; // x22
  UILabel_o *v213; // x22
  __int64 *v214; // x8
  Il2CppObject *Master_object; // x22
  System_String_o *v216; // x23
  __int64 v217; // x2
  __int64 v218; // x3
  __int64 v219; // x4
  Il2CppObject *v220; // x0
  UnityEngine_Object_o *v221; // x22
  int32_t v222; // w2
  UnityEngine_Object_o *v223; // x22
  _BOOL4 v224; // w19
  UILabel_o *v225; // x22
  __int64 *v226; // x8
  UnityEngine_Object_o *v227; // x22
  System_String_o *v228; // x0
  int32_t v229; // w8
  UnityEngine_Object_o *v230; // x22
  UILabel_o *v231; // x22
  __int64 *v232; // x8
  _BOOL4 isLvExceedItemNum; // w19
  UnityEngine_Object_o *v234; // x22
  bool v235; // w0
  System_String_o *v236; // x0
  UnityEngine_Object_o *v237; // x22
  _BOOL4 isEventJoin; // w19
  UnityEngine_Object_o *v239; // x22
  const MethodInfo *v240; // x1
  int32_t v241; // w22
  struct ServantFaceIconComponent_o *v242; // x8
  bool v243; // w0
  UnityEngine_Object_o *v244; // x23
  bool v245; // w22
  bool v246; // w0
  UILabel_o *v247; // x22
  UILabel_o *v248; // x22
  struct UILabel_o *v249; // x22
  System_String_o *v250; // x1
  UnityEngine_Object_o *v251; // x22
  ServantCommandCardListComponent_o *v252; // x22
  UnityEngine_Object_o *v253; // x22
  UILabel_o *v254; // x22
  __int64 *v255; // x8
  _BOOL4 isFriendshipExceedItemNum; // w19
  UnityEngine_Object_o *v257; // x22
  bool v258; // w0
  System_String_o *v259; // x0
  UnityEngine_Object_o *v260; // x22
  _BOOL4 v261; // w19
  struct UILabel_o *v262; // x19
  System_String_o *v263; // x1
  char v264; // [xsp+10h] [xbp-D0h]
  int32_t v265; // [xsp+14h] [xbp-CCh]
  struct UILabel_o **v266; // [xsp+18h] [xbp-C8h]
  CombineServantListViewItemDraw_o *v267; // [xsp+20h] [xbp-C0h]
  CombineServantListViewItem_o *v268; // [xsp+28h] [xbp-B8h]
  struct UISprite_o **p_maskSprite; // [xsp+30h] [xbp-B0h]
  struct UILabel_o **v270; // [xsp+38h] [xbp-A8h]
  int32_t SkillOpenItemNum; // [xsp+44h] [xbp-9Ch] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+48h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-90h] BYREF
  MethodInfo v274; // [xsp+58h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v275; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v276; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BE01FB & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&CombineServantListViewManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&StringLiteral_12391/*"SKILL_LVDISP_TXT"*/);
    sub_1C21E38(&StringLiteral_10511/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/);
    sub_1C21E38(&StringLiteral_9455/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_1C21E38(&StringLiteral_6613/*"FORTIFICATION_APPOINTMENT"*/);
    sub_1C21E38(&StringLiteral_3704/*"COMBINE_CAN_STATUS_UP_INFO"*/);
    sub_1C21E38(&StringLiteral_8944/*"MSG_CAMPAIGN_COMBINE_EXP"*/);
    sub_1C21E38(&StringLiteral_12389/*"SKILL_LVDISP_ENABLE_TXT"*/);
    sub_1C21E38(&StringLiteral_2119/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/);
    sub_1C21E38(&StringLiteral_9450/*"NONSELECT_MATERIAL"*/);
    sub_1C21E38(&StringLiteral_23355/*"ribbon_noblephantasmup_01"*/);
    sub_1C21E38(&StringLiteral_9449/*"NONSELECT_LIMITUP_BASE"*/);
    sub_1C21E38(&StringLiteral_2120/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/);
    sub_1C21E38(&StringLiteral_10321/*"PARTY_MEMBER_TXT"*/);
    sub_1C21E38(&StringLiteral_9453/*"NONSELECT_NPUP_BASE"*/);
    sub_1C21E38(&StringLiteral_12653/*"SUPPORT_MEMBER"*/);
    sub_1C21E38(&StringLiteral_8940/*"MSG_ABLED_LIMITUP"*/);
    sub_1C21E38(&StringLiteral_11737/*"SELECT_PUSH"*/);
    sub_1C21E38(&StringLiteral_11714/*"SELECT_CANNOT"*/);
    sub_1C21E38(&StringLiteral_9509/*"NPUP_BASE"*/);
    sub_1C21E38(&StringLiteral_2121/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/);
    sub_1C21E38(&StringLiteral_12388/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/);
    sub_1C21E38(&StringLiteral_11738/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C21E38(&StringLiteral_9497/*"NO_SELECT_FRIENDSHIP_EXCEED"*/);
    sub_1C21E38(&StringLiteral_11637/*"SAME_SERVANT"*/);
    sub_1C21E38(&StringLiteral_8939/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/);
    sub_1C21E38(&StringLiteral_9451/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    sub_1C21E38(&StringLiteral_25376/*"{0:#,0}"*/);
    sub_1C21E38(&StringLiteral_12390/*"SKILL_LVDISP_SINGLE_TXT"*/);
    sub_1C21E38(&StringLiteral_8941/*"MSG_ABLED_SKILLUP"*/);
    sub_1C21E38(&StringLiteral_9452/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/);
    sub_1C21E38(&StringLiteral_9456/*"NONSKILL_TXT"*/);
    sub_1C21E38(&StringLiteral_8469/*"LOCKMODE_SELECTED_SERVANT"*/);
    sub_1C21E38(&StringLiteral_6531/*"FAVORITE_SERVANT"*/);
    sub_1C21E38(&StringLiteral_3515/*"CHOICE_SERVANT"*/);
    sub_1C21E38(&StringLiteral_11229/*"RECOMMEND_SUPPORT_MEMBER"*/);
    sub_1C21E38(&StringLiteral_8943/*"MSG_ABLED_TDUP"*/);
    sub_1C21E38(&StringLiteral_11708/*"SEAL_COMBINE_LIMIT_THIRD"*/);
    sub_1C21E38(&StringLiteral_9448/*"NONSELECT_BASE_ALLMAX"*/);
    sub_1C21E38(&StringLiteral_9498/*"NO_SELECT_LVEXCEED"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_9454/*"NONSELECT_SKILLUP_BASE"*/);
    sub_1C21E38(&StringLiteral_11736/*"SELECT_PROTECTED_EVENT_SVT"*/);
    sub_1C21E38(&StringLiteral_8470/*"LOCK_SERVANT"*/);
    sub_1C21E38(&StringLiteral_9447/*"NONSEELECT_STATUSUP_MAX"*/);
    byte_4BE01FB = 1;
  }
  v274.invoker_method = 0LL;
  skillInfoList = 0LL;
  v274.methodPointer = 0LL;
  entity = 0LL;
  if ( !item || !mode )
    return;
  svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(svtCommandCardList, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  type = item->fields.type;
  servantFaceIcon = this->fields.servantFaceIcon;
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
  iconLabelInfo1 = item->fields.iconLabelInfo1;
  switchInfoList = (UIWidget_array *)gameObject;
  if ( type )
  {
    if ( !servantFaceIcon )
      goto LABEL_1053;
    ServantFaceIconComponent__Set_39464008(
      servantFaceIcon,
      (UserServantEntity_o *)gameObject,
      iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
    subIconLabel = this->fields.subIconLabel;
    rarity = item->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_1053;
    ServantFaceIconComponent__Set_39464008(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0LL, 0LL);
    gameObject = (__int64)item->fields.iconLabelInfo2;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = IconLabelInfo__IsClear((IconLabelInfo_o *)gameObject, 0LL);
    subIconLabel = this->fields.subIconLabel;
    if ( (gameObject & 1) == 0 )
    {
      if ( !subIconLabel )
        goto LABEL_1053;
      UIIconLabel__Set(this->fields.subIconLabel, item->fields.iconLabelInfo2, 0LL);
      goto LABEL_22;
    }
    rarity = item->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
  }
  v19 = *(_DWORD *)(gameObject + 296);
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
  if ( !gameObject || !subIconLabel )
    goto LABEL_1053;
  UIIconLabel__Set_39480396(subIconLabel, 36, rarity, v19, 0, 0LL, 0, 0, *(_DWORD *)(gameObject + 256), 0LL);
LABEL_22:
  CombineServantListViewItem__GetNpInfo(
    item,
    (int32_t *)&v274.invoker_method + 1,
    (int32_t *)&v274.invoker_method,
    (int32_t *)&v274.methodPointer + 1,
    0LL);
  gameObject = (__int64)this->fields.lockImg;
  if ( !gameObject )
    goto LABEL_1053;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_statusTxtLb = &this->fields.statusTxtLb;
  gameObject = (__int64)this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1053;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.maskSprite;
  p_maskSprite = &this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_1053;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_maskLabel = &this->fields.maskLabel;
  gameObject = (__int64)this->fields.maskLabel;
  if ( !gameObject )
    goto LABEL_1053;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)*p_maskLabel;
  if ( !*p_maskLabel )
    goto LABEL_1053;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !byte_4BD6BB6 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1053;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.partyIcon;
  if ( !gameObject )
    goto LABEL_1053;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.removeImg;
  if ( !gameObject )
    goto LABEL_1053;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1053;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.choiceImg;
  if ( !gameObject )
    goto LABEL_1053;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = CombineServantListViewItem__get_IsDispChoice(item, 0LL);
  if ( !v23 )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive(v23, gameObject & 1, 0LL);
  gameObject = (__int64)this->fields.switchInfoComp;
  if ( !gameObject )
    goto LABEL_1053;
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.fortificationRootObj;
  if ( !gameObject )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.fortificationNameLabel;
  if ( !gameObject )
    goto LABEL_1053;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)this->fields.fortificationDetailNameLabel;
  if ( !gameObject )
    goto LABEL_1053;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)this->fields.fortificationAppointmentLabel;
  if ( !gameObject )
    goto LABEL_1053;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushImg, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.pushImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isPush, 0LL);
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_1053;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)gameObject, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isMaterialTdSvt, 0LL);
    if ( item->fields.isMaterialTdSvt )
    {
      v26 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v26, (System_String_o *)StringLiteral_23355/*"ribbon_noblephantasmup_01"*/, 0LL);
      v28 = item->fields.type;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      if ( CombineServantListViewManager__GetSortKind(v28, v27) == 1 )
      {
        gameObject = (__int64)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_1053;
        v275.fields.x = 0.65;
        v275.fields.y = 1.0;
        v275.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v275, 0LL);
      }
    }
  }
  v29 = item->fields.type;
  v270 = &this->fields.maskLabel;
  switch ( v29 )
  {
    case 5:
      gameObject = (__int64)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_1053;
      v36 = SHIDWORD(v274.invoker_method) <= 0 ? -1 : LODWORD(v274.invoker_method);
      UIIconLabel__Set_39480396(
        (UIIconLabel_o *)gameObject,
        33,
        v36,
        SHIDWORD(v274.methodPointer),
        0,
        0LL,
        0,
        0,
        0,
        0LL);
      gameObject = (__int64)this->fields.npLvInfo;
      if ( !gameObject )
        goto LABEL_1053;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      goto LABEL_100;
    case 1:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1053;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0LL);
      if ( CombineServantListViewItem__get_IsProtected(item, 0LL) && item->fields.type != 5 )
      {
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1053;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1053;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v72 = *v270;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11736/*"SELECT_PROTECTED_EVENT_SVT"*/, 0LL);
        if ( !v72 )
          goto LABEL_1053;
        UILabel__set_text(v72, (System_String_o *)gameObject, 0LL);
        v37 = 1;
LABEL_101:
        if ( item->fields.isParty )
        {
          gameObject = (__int64)this->fields.partyIcon;
          if ( !gameObject )
            goto LABEL_1053;
          FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v38 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10321/*"PARTY_MEMBER_TXT"*/, 0LL);
          if ( !v38 )
            goto LABEL_1053;
          UILabel__set_text(v38, (System_String_o *)gameObject, 0LL);
          v37 = 1;
        }
        if ( item->fields.isFavorite )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v39 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6531/*"FAVORITE_SERVANT"*/, 0LL);
          if ( !v39 )
            goto LABEL_1053;
          UILabel__set_text(v39, (System_String_o *)gameObject, 0LL);
          v37 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
        {
          gameObject = (__int64)this->fields.lockImg;
          if ( !gameObject )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v40 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8470/*"LOCK_SERVANT"*/, 0LL);
          if ( !v40 )
            goto LABEL_1053;
          UILabel__set_text(v40, (System_String_o *)gameObject, 0LL);
          v37 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispChoice(item, 0LL) )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v42 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3515/*"CHOICE_SERVANT"*/, 0LL);
          if ( !v42 )
            goto LABEL_1053;
          UILabel__set_text(v42, (System_String_o *)gameObject, 0LL);
          v37 = 1;
        }
        if ( item->fields.isLimitCntTarget )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v43 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11637/*"SAME_SERVANT"*/, 0LL);
          if ( !v43 )
            goto LABEL_1053;
          UILabel__set_text(v43, (System_String_o *)gameObject, 0LL);
          v37 = 1;
        }
        if ( item->fields.isHeroineSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v44 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9450/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v44 )
            goto LABEL_1053;
          UILabel__set_text(v44, (System_String_o *)gameObject, 0LL);
          v37 = 1;
        }
        if ( item->fields.isStatusUpSvt && !item->fields.isCanStUp )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v45 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9450/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v45 )
            goto LABEL_1053;
          UILabel__set_text(v45, (System_String_o *)gameObject, 0LL);
          v37 = 1;
        }
        if ( item->fields.isEventJoin )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v46 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11738/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
          if ( !v46 )
            goto LABEL_1053;
          UILabel__set_text(v46, (System_String_o *)gameObject, 0LL);
          v37 = 1;
        }
        if ( item->fields.isUseSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v47 = *v270;
          isParty = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v49 = &StringLiteral_12653/*"SUPPORT_MEMBER"*/;
          if ( isParty )
            v49 = &StringLiteral_10321/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v49, 0LL);
          if ( !v47 )
            goto LABEL_1053;
          UILabel__set_text(v47, (System_String_o *)gameObject, 0LL);
          v37 = 1;
        }
        if ( item->fields.isUseRecommendSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v50 = *v270;
          v51 = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v52 = &StringLiteral_11229/*"RECOMMEND_SUPPORT_MEMBER"*/;
          if ( v51 )
            v52 = &StringLiteral_10321/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v52, 0LL);
          if ( !v50 )
            goto LABEL_1053;
          UILabel__set_text(v50, (System_String_o *)gameObject, 0LL);
          if ( !item->fields.isParty )
          {
            gameObject = (__int64)*v270;
            if ( !*v270 )
              goto LABEL_1053;
            UILabel__SetCondensedScale((UILabel_o *)gameObject, 106, 0, 0LL);
          }
          v37 = 1;
        }
        if ( item->fields.isPush )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v53 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11737/*"SELECT_PUSH"*/, 0LL);
          if ( !v53 )
            goto LABEL_1053;
          UILabel__set_text(v53, (System_String_o *)gameObject, 0LL);
          gameObject = (__int64)*v270;
          if ( !*v270 )
            goto LABEL_1053;
          v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !byte_4BD6BB6 )
          {
            sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
            byte_4BD6BB6 = 1;
          }
          GameObjectExtensions__SetLocalScale(v54, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          v37 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, item, v41);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(item, 0LL);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        v57 = CanNotSelect;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v58 = UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
        if ( v57 )
        {
          if ( !v58 )
            break;
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1053;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1053;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          if ( item->fields.isMaxNextLv || item->fields.isBaseLvMax )
          {
            if ( !item->fields.isCanStUp )
            {
              if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0LL) )
              {
                v73 = *v270;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9451/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
                if ( !v73 )
                  goto LABEL_1053;
                UILabel__set_text(v73, (System_String_o *)gameObject, 0LL);
                if ( item->fields.type != 5 )
                  break;
                v63 = *v270;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v64 = &StringLiteral_9453/*"NONSELECT_NPUP_BASE"*/;
LABEL_312:
                v76 = (System_String_o *)*v64;
LABEL_313:
                gameObject = (__int64)LocalizationManager__Get(v76, 0LL);
                if ( !v63 )
                  goto LABEL_1053;
                UILabel__set_text(v63, (System_String_o *)gameObject, 0LL);
              }
LABEL_315:
              v77 = item->fields.type;
              if ( v77 != 5 )
                goto LABEL_398;
              if ( item->fields.isBaseSvt )
              {
                v78 = *v270;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9509/*"NPUP_BASE"*/, 0LL);
                if ( !v78 )
                  goto LABEL_1053;
                UILabel__set_text(v78, (System_String_o *)gameObject, 0LL);
                gameObject = (__int64)*v270;
                if ( !*v270 )
                  goto LABEL_1053;
                v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !byte_4BD6BB6 )
                {
                  sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                  byte_4BD6BB6 = 1;
                }
                GameObjectExtensions__SetLocalScale(v79, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
              }
              break;
            }
          }
          else if ( !item->fields.isCanStUp )
          {
            if ( item->fields.isFortification )
            {
              gameObject = (__int64)*v270;
              if ( !*v270 )
                goto LABEL_1053;
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1053;
              gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_1053;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1053;
              UILabel__set_text((UILabel_o *)gameObject, item->fields.fortificationName, 0LL);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1053;
              UILabel__set_text((UILabel_o *)gameObject, item->fields.fortificationDetailName, 0LL);
              fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6613/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
              if ( !fortificationAppointmentLabel )
                goto LABEL_1053;
              UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)gameObject, 0LL);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1053;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1053;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL);
              if ( item->fields.type != 5 )
                break;
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1053;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_1053;
              *(UnityEngine_Vector3_o *)&v82 = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)gameObject,
                                                 0LL);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1053;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              v85 = v82;
              v86 = v83;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_1053;
              v276.fields.x = v85;
              v276.fields.y = fortificationInfoRootObjOffsetY;
              v276.fields.z = v86;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v276, 0LL);
              goto LABEL_315;
            }
            if ( (v37 & 1) == 0 )
            {
              v63 = *v270;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v76 = (System_String_o *)StringLiteral_9450/*"NONSELECT_MATERIAL"*/;
              goto LABEL_313;
            }
            goto LABEL_315;
          }
          if ( item->fields.isStatusUpSvt )
          {
            v59 = item->fields.rarity;
            if ( v59 <= 3 )
            {
              if ( item->fields.isAtkUpMax || item->fields.isHpUpMax )
              {
                v74 = *v270;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9455/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v74 )
                  goto LABEL_1053;
                UILabel__set_text(v74, (System_String_o *)gameObject, 0LL);
              }
              if ( item->fields.isAtkSecondUpMax || item->fields.isHpSecondUpMax )
              {
                v75 = *v270;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9455/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v75 )
                  goto LABEL_1053;
                UILabel__set_text(v75, (System_String_o *)gameObject, 0LL);
              }
              if ( !item->fields.isNotSelectStatusUpAtk && !item->fields.isNotSelectStatusUpHp )
                goto LABEL_315;
              v63 = *v270;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v64 = &StringLiteral_9455/*"NONSELECT_UNDER_STATUS_MAX"*/;
            }
            else
            {
              if ( v59 != 4 )
                goto LABEL_315;
              if ( item->fields.atkBase >= 1 )
              {
                if ( item->fields.isAtkSecondUpMax || item->fields.isNotSelectSecondStatusUpAtk )
                {
                  v60 = *v270;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9455/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                  if ( !v60 )
                    goto LABEL_1053;
                  UILabel__set_text(v60, (System_String_o *)gameObject, 0LL);
                }
                if ( !item->fields.isAtkUpMax )
                {
                  v61 = *v270;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9452/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0LL);
                  if ( !v61 )
                    goto LABEL_1053;
                  UILabel__set_text(v61, (System_String_o *)gameObject, 0LL);
                }
              }
              if ( item->fields.hpBase < 1 )
                goto LABEL_315;
              if ( item->fields.isHpSecondUpMax || item->fields.isNotSelectSecondStatusUpHp )
              {
                v62 = *v270;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9455/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v62 )
                  goto LABEL_1053;
                UILabel__set_text(v62, (System_String_o *)gameObject, 0LL);
              }
              if ( item->fields.isHpUpMax )
                goto LABEL_315;
              v63 = *v270;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v64 = &StringLiteral_9452/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
            }
            goto LABEL_312;
          }
          goto LABEL_315;
        }
        if ( v58 )
        {
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1053;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1053;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        v65 = (UnityEngine_Object_o *)this->fields.baseButton;
        cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
        if ( item->fields.isMaxSelect )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v65, 0LL, 0LL) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1053;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1053;
            v67 = 1;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
LABEL_269:
            if ( item->fields.type == 1 && CombineServantListViewItem__get_IsOrganization(item, 0LL) && !isSelectEnable )
            {
              if ( !(v67 & 1 | !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL)) )
                break;
            }
            else if ( !v67 )
            {
              break;
            }
            gameObject = (__int64)*p_maskSprite;
            if ( !*p_maskSprite )
              goto LABEL_1053;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_1053;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            v71 = *v270;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9450/*"NONSELECT_MATERIAL"*/, 0LL);
            if ( !v71 )
              goto LABEL_1053;
            UILabel__set_text(v71, (System_String_o *)gameObject, 0LL);
            break;
          }
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v65, 0LL, 0LL) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1053;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1053;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          }
        }
        v67 = 0;
        goto LABEL_269;
      }
LABEL_100:
      v37 = 0;
      goto LABEL_101;
    case 0:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1053;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0LL);
      if ( item->fields.isParty )
      {
        gameObject = (__int64)this->fields.partyIcon;
        if ( !gameObject )
          goto LABEL_1053;
        FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
      }
      if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
      {
        gameObject = (__int64)this->fields.lockImg;
        if ( !gameObject )
          goto LABEL_1053;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1053;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      }
      CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL);
      v31 = (UnityEngine_Object_o *)this->fields.baseButton;
      v32 = CanNotBaseSelect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v33 = UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
      if ( v32 )
      {
        if ( !v33 )
          goto LABEL_393;
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1053;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1053;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1053;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1053;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        if ( item->fields.isLvMax )
        {
          if ( item->fields.isStatusUpSvt )
            goto LABEL_326;
          if ( !item->fields.isExpUpSvt )
          {
            v34 = *v270;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v35 = &StringLiteral_9448/*"NONSELECT_BASE_ALLMAX"*/;
            goto LABEL_329;
          }
        }
        else if ( item->fields.isStatusUpSvt )
        {
          goto LABEL_326;
        }
        if ( !item->fields.isExpUpSvt )
        {
          if ( !item->fields.isHeroineSvt )
          {
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1053;
            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            gameObject = (__int64)*v270;
            if ( !*v270 )
              goto LABEL_1053;
            v80 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_331;
          }
          v34 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v35 = &StringLiteral_11714/*"SELECT_CANNOT"*/;
LABEL_329:
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v35, 0LL);
          if ( !v34 )
            goto LABEL_1053;
          v80 = (System_String_o *)gameObject;
          gameObject = (__int64)v34;
LABEL_331:
          UILabel__set_text((UILabel_o *)gameObject, v80, 0LL);
          gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
          if ( !gameObject )
            goto LABEL_1053;
          CombineServantListViewNoticeTween__RemoveTarget(
            (CombineServantListViewNoticeTween_o *)gameObject,
            *p_statusTxtLb,
            0LL);
LABEL_393:
          if ( item->fields.isBaseSvt )
          {
            gameObject = (__int64)this->fields.removeImg;
            if ( !gameObject )
              goto LABEL_1053;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_1053;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          }
          break;
        }
LABEL_326:
        v34 = *v270;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v35 = &StringLiteral_9450/*"NONSELECT_MATERIAL"*/;
        goto LABEL_329;
      }
      if ( !v33 )
        goto LABEL_393;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1053;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1053;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1053;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1053;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)*v270;
      if ( !*v270 )
        goto LABEL_1053;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( item->fields.isCombineExpCampaignTarget )
      {
        if ( item->fields.isDispAtkStatusUpInfo
          && CombineServantListViewItem__get_IsAtkAdjustMax(item, 0LL)
          && !CombineServantListViewItem__get_IsSecondAtkAdjustMax(item, 0LL) )
        {
          v87 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v87,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v88 = LocalizationManager__Get((System_String_o *)StringLiteral_8944/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v274.methodPointer = item->fields.combineExpCampaignValue;
          v89 = (Il2CppObject *)System_Single__ToString(*(float *)&v274.methodPointer, &v274);
          gameObject = (__int64)System_String__Format(v88, v89, 0LL);
          if ( !v87 )
            goto LABEL_1053;
          items = v87->fields._items;
          v97 = Method_System_Collections_Generic_List_string__Add__;
          ++v87->fields._version;
          if ( !items )
            goto LABEL_1053;
          size = v87->fields._size;
          v99 = gameObject;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v87,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
          }
          else
          {
            v100 = &items->obj.klass + size;
            v87->fields._size = size + 1;
            v100[4] = (Il2CppClass *)v99;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v100 + 4), v99, v90, v91, v92, v93, v94, v95);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3704/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v120 = v87->fields._items;
          v121 = Method_System_Collections_Generic_List_string__Add__;
          ++v87->fields._version;
          if ( !v120 )
            goto LABEL_1053;
        }
        else
        {
          if ( !item->fields.isDispHpStatusUpInfo
            || !CombineServantListViewItem__get_IsHpAdjustMax(item, 0LL)
            || CombineServantListViewItem__get_IsSecondHpAdjustMax(item, 0LL) )
          {
            gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
            if ( !gameObject )
              goto LABEL_1053;
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              *p_statusTxtLb,
              0LL);
            v68 = *p_statusTxtLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v69 = LocalizationManager__Get((System_String_o *)StringLiteral_8944/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
            *(float *)&v274.methodPointer = item->fields.combineExpCampaignValue;
            v70 = (Il2CppObject *)System_Single__ToString(*(float *)&v274.methodPointer, &v274);
            gameObject = (__int64)System_String__Format(v69, v70, 0LL);
            if ( !v68 )
              goto LABEL_1053;
LABEL_261:
            UILabel__set_text(v68, (System_String_o *)gameObject, 0LL);
LABEL_390:
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1053;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_1053;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            goto LABEL_393;
          }
          v87 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v87,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v101 = LocalizationManager__Get((System_String_o *)StringLiteral_8944/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v274.methodPointer = item->fields.combineExpCampaignValue;
          v102 = (Il2CppObject *)System_Single__ToString(*(float *)&v274.methodPointer, &v274);
          gameObject = (__int64)System_String__Format(v101, v102, 0LL);
          if ( !v87 )
            goto LABEL_1053;
          v109 = v87->fields._items;
          v110 = Method_System_Collections_Generic_List_string__Add__;
          ++v87->fields._version;
          if ( !v109 )
            goto LABEL_1053;
          v111 = v87->fields._size;
          v112 = gameObject;
          if ( (unsigned int)v111 >= v109->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v87,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
          }
          else
          {
            v113 = &v109->obj.klass + v111;
            v87->fields._size = v111 + 1;
            v113[4] = (Il2CppClass *)v112;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v113 + 4), v112, v103, v104, v105, v106, v107, v108);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3704/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v120 = v87->fields._items;
          v121 = Method_System_Collections_Generic_List_string__Add__;
          ++v87->fields._version;
          if ( !v120 )
            goto LABEL_1053;
        }
        v122 = v87->fields._size;
        v123 = gameObject;
        if ( (unsigned int)v122 >= v120->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v87,
            (Il2CppObject *)gameObject,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
        }
        else
        {
          v124 = &v120->obj.klass + v122;
          v87->fields._size = v122 + 1;
          v124[4] = (Il2CppClass *)v123;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v124 + 4), v123, v114, v115, v116, v117, v118, v119);
        }
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1053;
        CombineServantListViewNoticeTween__AddTarget(
          (CombineServantListViewNoticeTween_o *)gameObject,
          *p_statusTxtLb,
          (System_Collections_Generic_List_string__o *)v87,
          0LL);
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1053;
        CombineServantListViewNoticeTween__SetTexts((CombineServantListViewNoticeTween_o *)gameObject, 0, 0LL);
        goto LABEL_390;
      }
      gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
      if ( !gameObject )
        goto LABEL_1053;
      CombineServantListViewNoticeTween__RemoveTarget(
        (CombineServantListViewNoticeTween_o *)gameObject,
        *p_statusTxtLb,
        0LL);
      if ( item->fields.isDispAtkStatusUpInfo )
      {
        if ( !CombineServantListViewItem__get_IsAtkAdjustMax(item, 0LL)
          || CombineServantListViewItem__get_IsSecondAtkAdjustMax(item, 0LL) )
        {
          goto LABEL_393;
        }
      }
      else if ( !item->fields.isDispHpStatusUpInfo
             || !CombineServantListViewItem__get_IsHpAdjustMax(item, 0LL)
             || CombineServantListViewItem__get_IsSecondHpAdjustMax(item, 0LL) )
      {
        goto LABEL_393;
      }
      v68 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3704/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
      if ( !v68 )
        goto LABEL_1053;
      goto LABEL_261;
  }
  v77 = item->fields.type;
LABEL_398:
  if ( v77 != 9 )
  {
    if ( v77 != 2 )
      goto LABEL_461;
    gameObject = (__int64)this->fields.limitCountIcon;
    if ( !gameObject )
      goto LABEL_1053;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)gameObject,
      item->fields.currentLimitCnt,
      item->fields.maxLimitCnt,
      0LL);
    if ( item->fields.isParty )
    {
      gameObject = (__int64)this->fields.partyIcon;
      if ( !gameObject )
        goto LABEL_1053;
      FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
    }
    if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_1053;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1053;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    }
    if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL) )
    {
      v125 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v125, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1053;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1053;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1053;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1053;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        isHeroineSvt = item->fields.isHeroineSvt;
        v127 = *v270;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !isHeroineSvt )
          goto LABEL_419;
LABEL_441:
        v128 = &StringLiteral_9450/*"NONSELECT_MATERIAL"*/;
        goto LABEL_442;
      }
      goto LABEL_457;
    }
    if ( !item->fields.isLvMax || !item->fields.isLimitUpItemNum )
    {
      v159 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v159, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1053;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1053;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      }
      goto LABEL_457;
    }
    isSealCombineLimit = item->fields.isSealCombineLimit;
    v135 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v132 = UnityEngine_Object__op_Inequality(v135, 0LL, 0LL);
    if ( !isSealCombineLimit )
    {
      if ( v132 )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1053;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1053;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1053;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1053;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = (__int64)*v270;
        if ( !*v270 )
          goto LABEL_1053;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        gameObject = (__int64)*p_statusTxtLb;
        if ( !*p_statusTxtLb )
          goto LABEL_1053;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1053;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v127 = *p_statusTxtLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v128 = &StringLiteral_8940/*"MSG_ABLED_LIMITUP"*/;
        goto LABEL_442;
      }
      goto LABEL_457;
    }
LABEL_449:
    if ( !v132 )
      goto LABEL_457;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)*v270;
    if ( !*v270 )
      goto LABEL_1053;
    v133 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_456;
  }
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1053;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0LL);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1053;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v129 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL);
  v130 = (UnityEngine_Object_o *)this->fields.baseButton;
  v131 = v129;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v132 = UnityEngine_Object__op_Inequality(v130, 0LL, 0LL);
  if ( !v131 )
    goto LABEL_449;
  if ( !v132 )
    goto LABEL_457;
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_1053;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
    gameObject,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_1053;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
    gameObject,
    0LL,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  gameObject = (__int64)*p_maskSprite;
  if ( !*p_maskSprite )
    goto LABEL_1053;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  if ( item->fields.isHeroineSvt || item->fields.isEventJoin || item->fields.isIgnoreCombineLimitSpecial )
  {
    v127 = *v270;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    goto LABEL_441;
  }
  if ( item->fields.isLimitCntMax )
  {
    v127 = *v270;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
LABEL_419:
    v128 = &StringLiteral_9449/*"NONSELECT_LIMITUP_BASE"*/;
LABEL_442:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v128, 0LL);
    if ( !v127 )
      goto LABEL_1053;
    v133 = (System_String_o *)gameObject;
    gameObject = (__int64)v127;
LABEL_456:
    UILabel__set_text((UILabel_o *)gameObject, v133, 0LL);
    goto LABEL_457;
  }
  if ( item->fields.isSealCombineLimit )
  {
    v127 = *v270;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v128 = &StringLiteral_11708/*"SEAL_COMBINE_LIMIT_THIRD"*/;
    goto LABEL_442;
  }
LABEL_457:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_461:
  v136 = item->fields.type;
  v267 = this;
  v268 = item;
  v265 = modeKind;
  v266 = &this->fields.statusTxtLb;
  if ( v136 != 3 )
    goto LABEL_543;
  CombineServantListViewItem__GetSkillInfo(item, &skillInfoList, 0LL);
  enableSkillUp = item->fields.enableSkillUp;
  v138 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v138, 0LL);
  v139 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_1053;
  v140 = *(_QWORD *)&skillInfoList->max_length;
  if ( (int)v140 >= 1 )
  {
    v141 = 0LL;
    v142 = (unsigned int)(v140 - 1);
    v143 = (unsigned int)*(_QWORD *)&skillInfoList->max_length;
    while ( 1 )
    {
      if ( v141 >= v139->max_length )
        goto LABEL_1054;
      v144 = v139->m_Items[v141];
      if ( v144 )
      {
        lv = v144->fields.lv;
        p_lv = &v144->fields.lv;
        v147 = *(p_lv - 1);
        if ( lv > 0 )
        {
          gameObject = (__int64)System_Int32__ToString((int32_t)p_lv, 0LL);
          goto LABEL_473;
        }
      }
      else
      {
        v147 = -1;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9456/*"NONSKILL_TXT"*/, 0LL);
LABEL_473:
      v148 = (Il2CppObject *)gameObject;
      if ( enableSkillUp )
      {
        v149 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v147,
                 (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v142 == v141 )
        {
          v150 = &StringLiteral_12388/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v149 )
            v150 = &StringLiteral_12390/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v150 = &StringLiteral_12389/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v149 )
            v150 = &StringLiteral_12391/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v150, 0LL);
        if ( v138 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v138, (System_String_o *)gameObject, v148, 0LL);
          if ( v143 == ++v141 )
            goto LABEL_487;
          v139 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_1053;
    }
  }
  if ( !v138 )
    goto LABEL_1053;
LABEL_487:
  skillLvLabel = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v138->klass->vtable._3_ToString.method)(
                 v138,
                 v138->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !skillLvLabel )
    goto LABEL_1053;
  UILabel__set_text(skillLvLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1053;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  modeKind = v265;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1053;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL) )
  {
    v152 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v152, 0LL, 0LL) )
      goto LABEL_538;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v153 = *v270;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9454/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v153 )
      goto LABEL_1053;
    UILabel__set_text(v153, (System_String_o *)gameObject, 0LL);
    if ( !item->fields.isHeroineSvt )
      goto LABEL_538;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_38930984(126, 0LL) )
      goto LABEL_538;
    v154 = *v270;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v155 = &StringLiteral_11714/*"SELECT_CANNOT"*/;
    goto LABEL_526;
  }
  isSkillUpItemNum = item->fields.isSkillUpItemNum;
  v157 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v158 = UnityEngine_Object__op_Inequality(v157, 0LL, 0LL);
  if ( !isSkillUpItemNum )
  {
    if ( v158 )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1053;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1053;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_538;
  }
  if ( v158 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*v266;
    if ( !*v266 )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v154 = *v266;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v155 = &StringLiteral_8941/*"MSG_ABLED_SKILLUP"*/;
LABEL_526:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v155, 0LL);
    if ( !v154 )
      goto LABEL_1053;
    UILabel__set_text(v154, (System_String_o *)gameObject, 0LL);
  }
LABEL_538:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v136 = item->fields.type;
LABEL_543:
  if ( v136 != 11 )
    goto LABEL_638;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(item, 0LL);
  enableAppendSkillUp = item->fields.enableAppendSkillUp;
  v162 = AppendSkillData;
  v163 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v163, 0LL);
  if ( !v162 )
    goto LABEL_1053;
  svtUseSkillIdList = v162->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_1053;
  v165 = *(_QWORD *)&svtUseSkillIdList->max_length;
  if ( (int)v165 >= 1 )
  {
    v166 = 0LL;
    v167 = (unsigned int)(v165 - 1);
    v168 = (unsigned int)*(_QWORD *)&svtUseSkillIdList->max_length;
    while ( v166 < svtUseSkillIdList->max_length )
    {
      svtSkillLvList = v162->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_1053;
      if ( v166 >= svtSkillLvList->max_length )
        break;
      v170 = (__int64)svtSkillLvList + 4 * v166;
      v171 = svtUseSkillIdList->m_Items[v166 + 1];
      v173 = *(_DWORD *)(v170 + 32);
      v172 = v170 + 32;
      if ( v173 <= 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9456/*"NONSKILL_TXT"*/, 0LL);
      }
      else
      {
        gameObject = (__int64)System_Int32__ToString(v172, 0LL);
      }
      v174 = (Il2CppObject *)gameObject;
      if ( enableAppendSkillUp )
      {
        v175 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v171,
                 (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v166 == v167 )
        {
          v176 = &StringLiteral_12388/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v175 )
            v176 = &StringLiteral_12390/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v176 = &StringLiteral_12389/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v175 )
            v176 = &StringLiteral_12391/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v176, 0LL);
        if ( v163 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v163, (System_String_o *)gameObject, v174, 0LL);
          if ( ++v166 == v168 )
            goto LABEL_570;
          svtUseSkillIdList = v162->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_1053;
    }
LABEL_1054:
    sub_1C2209C(gameObject, switchInfoList);
  }
  if ( !v163 )
    goto LABEL_1053;
LABEL_570:
  v177 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v163->klass->vtable._3_ToString.method)(
                 v163,
                 v163->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v177 )
    goto LABEL_1053;
  UILabel__set_text(v177, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1053;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  modeKind = v265;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1053;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  gameObject = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v178 = *v270;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9454/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v178 )
      goto LABEL_1053;
    UILabel__set_text(v178, (System_String_o *)gameObject, 0LL);
    if ( item->fields.isEventJoin )
    {
      v179 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10511/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v179 )
        goto LABEL_1053;
      UILabel__set_text(v179, (System_String_o *)gameObject, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_608;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_38930984(126, 0LL) )
      goto LABEL_608;
    v180 = *v270;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v181 = &StringLiteral_11714/*"SELECT_CANNOT"*/;
    goto LABEL_606;
  }
  if ( !enableAppendSkillUp )
    goto LABEL_1053;
  if ( enableAppendSkillUp->fields._size > 0 || item->fields.isAppendSkillOpenItemNum )
  {
    gameObject = (__int64)*v266;
    if ( !*v266 )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v180 = *v266;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v181 = &StringLiteral_8941/*"MSG_ABLED_SKILLUP"*/;
LABEL_606:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v181, 0LL);
    if ( !v180 )
      goto LABEL_1053;
    UILabel__set_text(v180, (System_String_o *)gameObject, 0LL);
  }
LABEL_608:
  v182 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v182, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  coinInfo = (UnityEngine_Object_o *)this->fields.coinInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(coinInfo, 0LL, 0LL) )
  {
    switchInfoComp = (UnityEngine_Object_o *)this->fields.switchInfoComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchInfoComp, 0LL, 0LL) )
    {
      switchInfoList = this->fields.switchInfoList;
      if ( switchInfoList )
      {
        gameObject = (__int64)this->fields.switchInfoComp;
        if ( !gameObject )
          goto LABEL_1053;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)gameObject, switchInfoList, 0LL);
        gameObject = (__int64)this->fields.coinInfo;
        if ( !gameObject )
          goto LABEL_1053;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        coinNumLabel = this->fields.coinNumLabel;
        gameObject = CombineServantListViewItem__get_SkillOpenItemNum(item, 0LL);
        if ( (gameObject & 0x80000000) != 0 )
        {
          switchInfoList = (UIWidget_array *)StringLiteral_1/*""*/;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(item, 0LL);
          v189 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum, v186, v187, v188);
          gameObject = (__int64)System_String__Format((System_String_o *)StringLiteral_25376/*"{0:#,0}"*/, v189, 0LL);
          switchInfoList = (UIWidget_array *)gameObject;
        }
        if ( !coinNumLabel )
          goto LABEL_1053;
        UILabel__set_text(coinNumLabel, (System_String_o *)switchInfoList, 0LL);
        gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, 0LL);
        coinIcon = this->fields.coinIcon;
        if ( (int)gameObject < 1 )
        {
          if ( !coinIcon )
            goto LABEL_1053;
          gameObject = (__int64)coinIcon->fields.iconSprite;
          if ( !gameObject )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, 0LL);
          if ( !coinIcon )
            goto LABEL_1053;
          ItemIconComponent__SetItem(coinIcon, gameObject, -1, 1, 0LL);
        }
      }
    }
  }
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_638:
  v191 = item->fields.type;
  if ( v191 != 12 )
    goto LABEL_763;
  v192 = CombineServantListViewItem__GetAppendSkillData(item, 0LL);
  v193 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v193, 0LL);
  if ( !v192 )
    goto LABEL_1053;
  v194 = v192->fields.svtUseSkillIdList;
  if ( !v194 )
    goto LABEL_1053;
  v195 = *(_QWORD *)&v194->max_length;
  if ( (int)v195 < 1 )
  {
    v198 = 0;
    v210 = 0;
    if ( !v193 )
      goto LABEL_1053;
  }
  else
  {
    v196 = 0;
    v197 = 0;
    v198 = 0;
    v199 = 0LL;
    while ( 1 )
    {
      if ( v199 >= v194->max_length )
        goto LABEL_1054;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9456/*"NONSKILL_TXT"*/, 0LL);
      v200 = v192->fields.svtSkillLvList;
      if ( !v200 )
        goto LABEL_1053;
      if ( v199 >= v200->max_length )
        goto LABEL_1054;
      v201 = (char *)v200 + 4 * v199;
      v202 = *((_DWORD *)v201 + 8);
      gameObject = (__int64)(v201 + 32);
      if ( v202 >= 1 )
      {
        gameObject = (__int64)System_Int32__ToString(gameObject, 0LL);
        v200 = v192->fields.svtSkillLvList;
        if ( !v200 )
          goto LABEL_1053;
        v197 = 1;
      }
      if ( v199 >= v200->max_length )
        goto LABEL_1054;
      v203 = v200->m_Items[1];
      v204 = v200->m_Items[++v199];
      v198 |= v204 < 10;
      v196 |= v203 != v204;
      if ( v199 == (unsigned int)v195 )
        break;
      v194 = v192->fields.svtUseSkillIdList;
      if ( !v194 )
        goto LABEL_1053;
    }
    v264 = v197;
    v205 = 0LL;
    v206 = 32LL;
    do
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9456/*"NONSKILL_TXT"*/, 0LL);
      v207 = v192->fields.svtSkillLvList;
      if ( !v207 )
        goto LABEL_1053;
      if ( v205 >= v207->max_length )
        goto LABEL_1054;
      v208 = (Il2CppObject *)gameObject;
      if ( *(int *)((char *)&v207->obj.klass + v206) >= 1 )
        v208 = (Il2CppObject *)System_Int32__ToString((int)v207 + (int)v206, 0LL);
      if ( (_DWORD)v195 - 1 == v205 )
      {
        if ( (v196 & 1) == 0 )
          goto LABEL_668;
        if ( !v268->fields.isHeroineSvt )
          goto LABEL_677;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_38930984(126, 0LL) )
        {
LABEL_668:
          v209 = &StringLiteral_12390/*"SKILL_LVDISP_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v209 = &StringLiteral_12390/*"SKILL_LVDISP_SINGLE_TXT"*/;
          }
        }
        else
        {
LABEL_677:
          v209 = &StringLiteral_12388/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v209 = &StringLiteral_12388/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          }
        }
      }
      else
      {
        if ( (v196 & 1) == 0 )
          goto LABEL_675;
        if ( !v268->fields.isHeroineSvt )
          goto LABEL_679;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_38930984(126, 0LL) )
        {
LABEL_675:
          v209 = &StringLiteral_12391/*"SKILL_LVDISP_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v209 = &StringLiteral_12391/*"SKILL_LVDISP_TXT"*/;
          }
        }
        else
        {
LABEL_679:
          v209 = &StringLiteral_12389/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v209 = &StringLiteral_12389/*"SKILL_LVDISP_ENABLE_TXT"*/;
          }
        }
      }
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v209, 0LL);
      if ( !v193 )
        goto LABEL_1053;
      System_Text_StringBuilder__AppendFormat(v193, (System_String_o *)gameObject, v208, 0LL);
      ++v205;
      v206 += 4LL;
    }
    while ( (unsigned int)v195 != v205 );
    this = v267;
    item = v268;
    v210 = v264;
    modeKind = v265;
    p_statusTxtLb = v266;
  }
  v211 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v193->klass->vtable._3_ToString.method)(
                 v193,
                 v193->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v211 )
    goto LABEL_1053;
  UILabel__set_text(v211, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1053;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1053;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL) )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)*v270;
    if ( !*v270 )
      goto LABEL_1053;
    UILabel__set_text((UILabel_o *)gameObject, string_TypeInfo->static_fields->Empty, 0LL);
    if ( item->fields.isEventJoin )
    {
      v212 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10511/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v212 )
        goto LABEL_1053;
      UILabel__set_text(v212, (System_String_o *)gameObject, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_1057;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_38930984(126, 0LL) )
    {
      v213 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v214 = &StringLiteral_11714/*"SELECT_CANNOT"*/;
    }
    else
    {
LABEL_1057:
      if ( item->fields.isEventJoin )
      {
        v213 = *v270;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v214 = &StringLiteral_11738/*"SELECT_SERVANT_EVENT_JOIN"*/;
      }
      else if ( (v210 & 1) != 0 )
      {
        if ( (v198 & 1) != 0 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BD6FF5 )
          {
            sub_1C21E38(&NetworkManager_TypeInfo);
            byte_4BD6FF5 = 1;
          }
          gameObject = (__int64)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            gameObject = (__int64)NetworkManager_TypeInfo;
          }
          if ( !Master_object )
            goto LABEL_1053;
          if ( !UserServantAppendPassiveSkillMaster__TryGetEntity(
                  (UserServantAppendPassiveSkillMaster_o *)Master_object,
                  &entity,
                  *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                  item->fields.svtId,
                  0LL)
            || !UserServantAppendPassiveSkillMaster__IsExchangeLimited(0LL) )
          {
            goto LABEL_752;
          }
          v213 = *v270;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2121/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/, 0LL);
          if ( !entity )
            goto LABEL_1053;
          v216 = (System_String_o *)gameObject;
          SkillOpenItemNum = UserServantAppendPassiveSkillEntity__GetRemainingExchangeNum(entity, 0LL);
          v220 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum, v217, v218, v219);
          gameObject = (__int64)System_String__Format(v216, v220, 0LL);
          if ( !v213 )
            goto LABEL_1053;
          goto LABEL_751;
        }
        v213 = *v270;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v214 = &StringLiteral_2120/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/;
      }
      else
      {
        v213 = *v270;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v214 = &StringLiteral_2119/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/;
      }
    }
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v214, 0LL);
    if ( !v213 )
      goto LABEL_1053;
LABEL_751:
    UILabel__set_text(v213, (System_String_o *)gameObject, 0LL);
  }
LABEL_752:
  v221 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v221, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v191 = item->fields.type;
LABEL_763:
  if ( v191 != 4 )
    goto LABEL_809;
  gameObject = (__int64)this->fields.npIconLabel;
  if ( !gameObject )
    goto LABEL_1053;
  v222 = SHIDWORD(v274.invoker_method) <= 0 ? -1 : LODWORD(v274.invoker_method);
  UIIconLabel__Set_39480396((UIIconLabel_o *)gameObject, 33, v222, SHIDWORD(v274.methodPointer), 0, 0LL, 0, 0, 0, 0LL);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1053;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL) )
  {
    v223 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v223, 0LL, 0LL) )
      goto LABEL_805;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v224 = item->fields.isHeroineSvt;
    v225 = *v270;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v224 )
      v226 = &StringLiteral_9450/*"NONSELECT_MATERIAL"*/;
    else
      v226 = &StringLiteral_9453/*"NONSELECT_NPUP_BASE"*/;
    v228 = (System_String_o *)*v226;
    goto LABEL_803;
  }
  if ( !item->fields.isSameSvt && !item->fields.isBaseSvt )
  {
    v239 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v239, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1053;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1053;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_805;
  }
  v227 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v227, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    if ( item->fields.isSameSvt )
    {
      gameObject = (__int64)*p_statusTxtLb;
      if ( !*p_statusTxtLb )
        goto LABEL_1053;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1053;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v225 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v228 = (System_String_o *)StringLiteral_8943/*"MSG_ABLED_TDUP"*/;
LABEL_803:
      gameObject = (__int64)LocalizationManager__Get(v228, 0LL);
      if ( !v225 )
        goto LABEL_1053;
      UILabel__set_text(v225, (System_String_o *)gameObject, 0LL);
    }
  }
LABEL_805:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_809:
  v229 = item->fields.type;
  if ( v229 != 6 )
    goto LABEL_875;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1053;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0LL);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1053;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL) )
  {
    v230 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v230, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1053;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1053;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1053;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1053;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      if ( item->fields.isHeroineSvt )
      {
        v231 = *v270;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v232 = &StringLiteral_9450/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        isEventJoin = item->fields.isEventJoin;
        v231 = *v270;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( isEventJoin )
          v232 = &StringLiteral_11738/*"SELECT_SERVANT_EVENT_JOIN"*/;
        else
          v232 = &StringLiteral_9498/*"NO_SELECT_LVEXCEED"*/;
      }
      v236 = (System_String_o *)*v232;
LABEL_868:
      gameObject = (__int64)LocalizationManager__Get(v236, 0LL);
      if ( !v231 )
        goto LABEL_1053;
      UILabel__set_text(v231, (System_String_o *)gameObject, 0LL);
      goto LABEL_870;
    }
    goto LABEL_870;
  }
  if ( !item->fields.isLvMax || !item->fields.isLimitCntMax )
  {
    v237 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v237, 0LL, 0LL) )
      goto LABEL_870;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
LABEL_851:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_870;
  }
  isLvExceedItemNum = item->fields.isLvExceedItemNum;
  v234 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v235 = UnityEngine_Object__op_Inequality(v234, 0LL, 0LL);
  if ( !isLvExceedItemNum )
  {
    if ( !v235 )
      goto LABEL_870;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    goto LABEL_851;
  }
  if ( v235 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)*v270;
    if ( !*v270 )
      goto LABEL_1053;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v231 = *p_statusTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v236 = (System_String_o *)StringLiteral_8940/*"MSG_ABLED_LIMITUP"*/;
    goto LABEL_868;
  }
LABEL_870:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v229 = item->fields.type;
LABEL_875:
  if ( v229 != 10 && v229 != 7 )
    goto LABEL_937;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1053;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.subIconLabel;
  if ( !gameObject )
    goto LABEL_1053;
  UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0LL);
  v241 = item->fields.type;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  gameObject = CombineServantListViewManager__GetSortKind(v241, v240);
  v242 = this->fields.servantFaceIcon;
  if ( !v242 )
    goto LABEL_1053;
  if ( (_DWORD)gameObject == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *, __int64, Il2CppMethodPointer))v242->klass->vtable._4_ParameterChange.method)(
      this->fields.servantFaceIcon,
      1LL,
      v242->klass->vtable._5_UpdateAlpha.methodPtr);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_1053;
    ServantFaceIconComponent__ResetIconLabelPos((ServantFaceIconComponent_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_1053;
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
      goto LABEL_1053;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v243 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL);
  v244 = (UnityEngine_Object_o *)this->fields.baseButton;
  v245 = v243;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v246 = UnityEngine_Object__op_Inequality(v244, 0LL, 0LL);
  if ( v245 )
  {
    if ( !v246 )
      goto LABEL_926;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( item->fields.type == 10 && item->fields.isCommandCardExceedMax )
    {
      v247 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9447/*"NONSEELECT_STATUSUP_MAX"*/, 0LL);
      if ( !v247 )
        goto LABEL_1053;
      UILabel__set_text(v247, (System_String_o *)gameObject, 0LL);
    }
    if ( item->fields.isEventJoin )
    {
      v248 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11738/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v248 )
        goto LABEL_1053;
      UILabel__set_text(v248, (System_String_o *)gameObject, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_926;
    v249 = *v270;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11714/*"SELECT_CANNOT"*/, 0LL);
    if ( !v249 )
      goto LABEL_1053;
    v250 = (System_String_o *)gameObject;
    gameObject = (__int64)v249;
    goto LABEL_925;
  }
  if ( v246 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)*v270;
    if ( !*v270 )
      goto LABEL_1053;
    v250 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_925:
    UILabel__set_text((UILabel_o *)gameObject, v250, 0LL);
  }
LABEL_926:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v251 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v251, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v252 = this->fields.svtCommandCardList;
    gameObject = CombineServantListViewItem__get_UserSvtId(item, 0LL);
    if ( !v252 )
      goto LABEL_1053;
    ServantCommandCardListComponent__Set(v252, gameObject, 1, 1, 0LL);
  }
LABEL_937:
  if ( item->fields.type != 8 )
    goto LABEL_994;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1053;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL) )
  {
    v253 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v253, 0LL, 0LL) )
      goto LABEL_990;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( item->fields.isHeroineSvt )
    {
      v254 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v255 = &StringLiteral_9450/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      v261 = item->fields.isEventJoin;
      v254 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v261 )
        v255 = &StringLiteral_11738/*"SELECT_SERVANT_EVENT_JOIN"*/;
      else
        v255 = &StringLiteral_9497/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
    }
    v259 = (System_String_o *)*v255;
    goto LABEL_988;
  }
  if ( !item->fields.isFriendshipRankMax )
  {
    v260 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v260, 0LL, 0LL) )
      goto LABEL_990;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
LABEL_981:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_990;
  }
  isFriendshipExceedItemNum = item->fields.isFriendshipExceedItemNum;
  v257 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v258 = UnityEngine_Object__op_Inequality(v257, 0LL, 0LL);
  if ( !isFriendshipExceedItemNum )
  {
    if ( !v258 )
      goto LABEL_990;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1053;
    goto LABEL_981;
  }
  if ( !v258 )
    goto LABEL_990;
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_1053;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
    gameObject,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_1053;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
    gameObject,
    0LL,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  gameObject = (__int64)*p_maskSprite;
  if ( !*p_maskSprite )
    goto LABEL_1053;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)*v270;
  if ( !*v270 )
    goto LABEL_1053;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)*p_statusTxtLb;
  if ( !*p_statusTxtLb )
    goto LABEL_1053;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v254 = *p_statusTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v259 = (System_String_o *)StringLiteral_8939/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/;
LABEL_988:
  gameObject = (__int64)LocalizationManager__Get(v259, 0LL);
  if ( !v254 )
    goto LABEL_1053;
  UILabel__set_text(v254, (System_String_o *)gameObject, 0LL);
LABEL_990:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_994:
  if ( (unsigned int)(modeKind - 1) > 1 )
  {
    if ( modeKind != 3 )
      return;
    if ( item->fields.isEventJoin )
    {
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1053;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1053;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v262 = *v270;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11738/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v262 )
        goto LABEL_1053;
      goto LABEL_1031;
    }
    if ( !item->fields.isCanNotLock )
    {
      gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
      if ( !gameObject )
        goto LABEL_1053;
      if ( !UserServantEntity__IsLeave((UserServantEntity_o *)gameObject, 0LL) )
      {
        gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
        if ( !gameObject )
          goto LABEL_1053;
        if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)gameObject, 0LL) )
        {
          gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          if ( !UserServantEntity__IsStatusUp((UserServantEntity_o *)gameObject, 0LL) )
          {
            gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
            if ( !gameObject )
              goto LABEL_1053;
            if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)gameObject, 0LL) )
            {
              gameObject = (__int64)*p_maskSprite;
              if ( !*p_maskSprite )
                goto LABEL_1053;
              gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_1053;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
              gameObject = (__int64)*v270;
              if ( !*v270 )
                goto LABEL_1053;
              v263 = (System_String_o *)StringLiteral_1/*""*/;
              goto LABEL_1032;
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
        v262 = *v270;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8469/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
        if ( v262 )
        {
LABEL_1031:
          v263 = (System_String_o *)gameObject;
          gameObject = (__int64)v262;
LABEL_1032:
          UILabel__set_text((UILabel_o *)gameObject, v263, 0LL);
          gameObject = (__int64)*p_statusTxtLb;
          if ( !*p_statusTxtLb )
            goto LABEL_1053;
LABEL_1033:
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
LABEL_1053:
    sub_1C22094(gameObject, switchInfoList);
  }
  if ( !item->fields.isHeroineSvt )
    goto LABEL_999;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_38930984(126, 0LL) )
  {
LABEL_999:
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isCanNotLock, 0LL);
    if ( item->fields.isCanNotLock )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      switchInfoList = (UIWidget_array *)LocalizationManager__Get((System_String_o *)StringLiteral_8469/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
    }
    else
    {
      switchInfoList = (UIWidget_array *)StringLiteral_1/*""*/;
    }
    gameObject = (__int64)*v270;
    if ( !*v270 )
      goto LABEL_1053;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)switchInfoList, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1053;
    goto LABEL_1033;
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

  if ( (byte_4BE01FD & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE01FD = 1;
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
    sub_1C22094(v7, v6);
  }
}