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
  unsigned int type; // w8
  _BOOL4 v14; // w23
  bool CanNotBaseSelect; // w0
  bool v16; // w22
  _BOOL4 v17; // w25
  int v18; // w24
  UnityEngine_Object_o *baseButton; // x23
  bool v20; // w0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  UnityEngine_Component_o *maskSprite; // x0
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
  if ( (byte_4C0149B & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, item);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_9449/*"NONSELECT_UNDER_STATUS_MAX"*/, v8);
    sub_1C2E12C(&StringLiteral_9444/*"NONSELECT_MATERIAL"*/, v9);
    sub_1C2E12C(&StringLiteral_9447/*"NONSELECT_NPUP_BASE"*/, v10);
    sub_1C2E12C(&StringLiteral_9445/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v11);
    byte_4C0149B = 1;
  }
  if ( item )
  {
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
    type = item->fields.type;
    v14 = IsSelect;
    if ( type > 0xC )
    {
      v16 = 0;
    }
    else
    {
      if ( ((1 << type) & 0x1FDD) != 0 )
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL);
      else
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotSelect(item, 0LL);
      v16 = CanNotBaseSelect;
    }
    v17 = !CombineServantListViewItem__get_IsOrganization(item, 0LL);
    v18 = !v14;
  }
  else
  {
    v16 = 0;
    v18 = 1;
    v17 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v20 = UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
  if ( !v16 )
  {
    if ( v20 )
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
    v28 = (UnityEngine_Object_o *)this->fields.baseButton;
    cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
    if ( item->fields.isMaxSelect )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
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
        v30 = 1;
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
      if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
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
    v30 = 0;
LABEL_47:
    v31 = item->fields.type;
    if ( v31 == 5 )
    {
      if ( !(v30 & 1 | item->fields.isMaxNextLv) )
        goto LABEL_80;
    }
    else if ( v31 == 1 )
    {
      if ( ((v18 & ~(v17 || v4) | v30) & 1) == 0 )
        goto LABEL_80;
    }
    else if ( !v30 )
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
    v25 = LocalizationManager_TypeInfo;
    v27 = LocalizationManager_TypeInfo->_2.cctor_finished;
    if ( item->fields.type == 5 )
      goto LABEL_57;
    goto LABEL_75;
  }
  if ( !v20 )
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
          v34 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9449/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v34 )
            goto LABEL_92;
          UILabel__set_text(v34, (System_String_o *)maskSprite, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectSecondStatusUpHp )
          goto LABEL_80;
      }
      else
      {
        if ( atkBase >= 1 && item->fields.isNotSelectStatusUpAtk )
        {
          v35 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9449/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v35 )
            goto LABEL_92;
          UILabel__set_text(v35, (System_String_o *)maskSprite, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectStatusUpHp )
          goto LABEL_80;
      }
      maskLabel = this->fields.maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v32 = &StringLiteral_9449/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_78:
      maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v32, 0LL);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)maskSprite, 0LL);
        goto LABEL_80;
      }
LABEL_92:
      sub_1C2E388(maskSprite, v21);
    }
    maskLabel = this->fields.maskLabel;
    v25 = LocalizationManager_TypeInfo;
    v27 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_75:
    if ( !v27 )
      j_il2cpp_runtime_class_init_0(v25);
    v32 = &StringLiteral_9444/*"NONSELECT_MATERIAL"*/;
    goto LABEL_78;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0LL) )
  {
    v24 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9445/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
    if ( !v24 )
      goto LABEL_92;
    UILabel__set_text(v24, (System_String_o *)maskSprite, 0LL);
    if ( item->fields.type == 5 )
    {
      v25 = LocalizationManager_TypeInfo;
      maskLabel = this->fields.maskLabel;
      v27 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_57:
      if ( !v27 )
        j_il2cpp_runtime_class_init_0(v25);
      v32 = &StringLiteral_9447/*"NONSELECT_NPUP_BASE"*/;
      goto LABEL_78;
    }
  }
LABEL_80:
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
  CombineServantListViewItem_o *v9; // x29
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
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  UnityEngine_Object_o *svtCommandCardList; // x23
  UIWidget_array *switchInfoList; // x1
  __int64 gameObject; // x0
  int32_t type; // w19
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  IconLabelInfo_o *iconLabelInfo1; // x2
  UIIconLabel_o *subIconLabel; // x23
  int32_t rarity; // w24
  int32_t v78; // w25
  UILabel_o **p_statusTxtLb; // x28
  struct UILabel_o **p_maskLabel; // x20
  __int64 v81; // x1
  UnityEngine_GameObject_o *v82; // x23
  UnityEngine_GameObject_o *v83; // x23
  UnityEngine_Object_o *pushImg; // x23
  UnityEngine_Object_o *materialTdSprite; // x23
  UISprite_o *v86; // x23
  const MethodInfo *v87; // x1
  int32_t v88; // w23
  int32_t v89; // w8
  bool CanNotBaseSelect; // w0
  UnityEngine_Object_o *v91; // x23
  bool v92; // w22
  bool v93; // w0
  struct UILabel_o *v94; // x22
  __int64 *v95; // x8
  int32_t v96; // w2
  char v97; // w20
  UILabel_o *v98; // x23
  UILabel_o *v99; // x23
  UILabel_o *v100; // x23
  const MethodInfo *v101; // x2
  UILabel_o *v102; // x23
  UILabel_o *v103; // x23
  UILabel_o *v104; // x23
  UILabel_o *v105; // x23
  UILabel_o *v106; // x23
  UILabel_o *v107; // x23
  _BOOL4 isParty; // w19
  __int64 *v109; // x8
  UILabel_o *v110; // x23
  _BOOL4 v111; // w19
  __int64 *v112; // x8
  UILabel_o *v113; // x23
  __int64 v114; // x1
  UnityEngine_GameObject_o *v115; // x23
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x24
  bool v118; // w23
  bool v119; // w0
  int v120; // w8
  UILabel_o *v121; // x22
  UILabel_o *v122; // x22
  UILabel_o *v123; // x22
  UILabel_o *v124; // x22
  __int64 *v125; // x8
  UnityEngine_Object_o *v126; // x23
  uint32_t cctor_finished; // w8
  int v128; // w19
  UILabel_o *v129; // x22
  System_String_o *v130; // x23
  Il2CppObject *v131; // x0
  UILabel_o *v132; // x22
  UILabel_o *v133; // x23
  UILabel_o *v134; // x22
  UILabel_o *v135; // x22
  UILabel_o *v136; // x22
  System_String_o *v137; // x0
  int32_t v138; // w8
  UILabel_o *v139; // x22
  __int64 v140; // x1
  UnityEngine_GameObject_o *v141; // x22
  System_String_o *v142; // x1
  UILabel_o *fortificationAppointmentLabel; // x22
  float v144; // s0
  float v145; // s2
  float fortificationInfoRootObjOffsetY; // s10
  float v147; // s8
  float v148; // s9
  System_Collections_Generic_List_object__o *v149; // x22
  System_String_o *v150; // x23
  Il2CppObject *v151; // x0
  int64_t v152; // x2
  int32_t v153; // w3
  System_String_o *v154; // x4
  BattleSetupInfo_o *v155; // x5
  FollowerInfo_o *v156; // x6
  PartyListViewItem_o *v157; // x7
  struct System_Object_array *items; // x8
  _QWORD *v159; // x9
  __int64 size; // x10
  int64_t v161; // x1
  Il2CppClass **v162; // x0
  System_String_o *v163; // x23
  Il2CppObject *v164; // x0
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  struct System_Object_array *v171; // x8
  _QWORD *v172; // x9
  __int64 v173; // x10
  int64_t v174; // x1
  Il2CppClass **v175; // x0
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  struct System_Object_array *v182; // x8
  _QWORD *v183; // x9
  __int64 v184; // x10
  int64_t v185; // x1
  Il2CppClass **v186; // x0
  UnityEngine_Object_o *v187; // x22
  _BOOL4 isHeroineSvt; // w19
  UILabel_o *v189; // x22
  __int64 *v190; // x8
  bool v191; // w0
  UnityEngine_Object_o *v192; // x23
  bool v193; // w22
  bool v194; // w0
  System_String_o *v195; // x1
  _BOOL4 isSealCombineLimit; // w19
  UnityEngine_Object_o *v197; // x22
  int32_t v198; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  System_Text_StringBuilder_o *v200; // x22
  SkillInfo_array *v201; // x8
  __int64 v202; // x9
  unsigned __int64 v203; // x19
  __int64 v204; // x20
  __int64 v205; // x21
  SkillInfo_o *v206; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v209; // w25
  Il2CppObject *v210; // x24
  bool v211; // w25
  __int64 *v212; // x8
  UILabel_o *skillLvLabel; // x23
  UnityEngine_Object_o *v214; // x22
  UILabel_o *v215; // x22
  UILabel_o *v216; // x22
  __int64 *v217; // x8
  _BOOL4 isSkillUpItemNum; // w19
  UnityEngine_Object_o *v219; // x22
  bool v220; // w0
  UnityEngine_Object_o *v221; // x22
  SvtUseSkillData_o *AppendSkillData; // x0
  System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v224; // x24
  System_Text_StringBuilder_o *v225; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v227; // x9
  unsigned __int64 v228; // x19
  __int64 v229; // x20
  __int64 v230; // x21
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v232; // x0
  int32_t v233; // w26
  int32_t v234; // w0
  int v235; // t1
  Il2CppObject *v236; // x25
  bool v237; // w26
  __int64 *v238; // x8
  UILabel_o *v239; // x24
  UILabel_o *v240; // x22
  UILabel_o *v241; // x22
  UILabel_o *v242; // x22
  __int64 *v243; // x8
  UnityEngine_Object_o *v244; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  __int64 v248; // x2
  __int64 v249; // x3
  __int64 v250; // x4
  Il2CppObject *v251; // x0
  struct ItemIconComponent_o *coinIcon; // x22
  int32_t v253; // w8
  SvtUseSkillData_o *v254; // x23
  System_Text_StringBuilder_o *v255; // x22
  struct System_Int32_array *v256; // x8
  __int64 v257; // x19
  char v258; // w27
  char v259; // w26
  char v260; // w25
  unsigned __int64 v261; // x21
  struct System_Int32_array *v262; // x8
  char *v263; // x0
  int v264; // t1
  int32_t v265; // w9
  int v266; // w8
  unsigned __int64 v267; // x29
  __int64 v268; // x26
  struct System_Int32_array *v269; // x8
  Il2CppObject *v270; // x24
  __int64 *v271; // x8
  char v272; // w26
  UILabel_o *v273; // x23
  UILabel_o *v274; // x22
  UILabel_o *v275; // x22
  __int64 *v276; // x8
  Il2CppObject *Master_object; // x22
  System_String_o *v278; // x23
  __int64 v279; // x2
  __int64 v280; // x3
  __int64 v281; // x4
  Il2CppObject *v282; // x0
  UnityEngine_Object_o *v283; // x22
  int32_t v284; // w2
  UnityEngine_Object_o *v285; // x22
  _BOOL4 v286; // w19
  UILabel_o *v287; // x22
  __int64 *v288; // x8
  UnityEngine_Object_o *v289; // x22
  System_String_o *v290; // x0
  int32_t v291; // w8
  UnityEngine_Object_o *v292; // x22
  UILabel_o *v293; // x22
  __int64 *v294; // x8
  _BOOL4 isLvExceedItemNum; // w19
  UnityEngine_Object_o *v296; // x22
  bool v297; // w0
  System_String_o *v298; // x0
  UnityEngine_Object_o *v299; // x22
  _BOOL4 isEventJoin; // w19
  UnityEngine_Object_o *v301; // x22
  const MethodInfo *v302; // x1
  int32_t v303; // w22
  struct ServantFaceIconComponent_o *v304; // x8
  bool v305; // w0
  UnityEngine_Object_o *v306; // x23
  bool v307; // w22
  bool v308; // w0
  UILabel_o *v309; // x22
  UILabel_o *v310; // x22
  struct UILabel_o *v311; // x22
  System_String_o *v312; // x1
  UnityEngine_Object_o *v313; // x22
  ServantCommandCardListComponent_o *v314; // x22
  UnityEngine_Object_o *v315; // x22
  UILabel_o *v316; // x22
  __int64 *v317; // x8
  _BOOL4 isFriendshipExceedItemNum; // w19
  UnityEngine_Object_o *v319; // x22
  bool v320; // w0
  System_String_o *v321; // x0
  UnityEngine_Object_o *v322; // x22
  _BOOL4 v323; // w19
  struct UILabel_o *v324; // x19
  System_String_o *v325; // x1
  char v326; // [xsp+10h] [xbp-D0h]
  int32_t v327; // [xsp+14h] [xbp-CCh]
  struct UILabel_o **v328; // [xsp+18h] [xbp-C8h]
  CombineServantListViewItemDraw_o *v329; // [xsp+20h] [xbp-C0h]
  CombineServantListViewItem_o *v330; // [xsp+28h] [xbp-B8h]
  struct UISprite_o **p_maskSprite; // [xsp+30h] [xbp-B0h]
  struct UILabel_o **v332; // [xsp+38h] [xbp-A8h]
  int32_t SkillOpenItemNum; // [xsp+44h] [xbp-9Ch] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+48h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-90h] BYREF
  MethodInfo v336; // [xsp+58h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v337; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v338; // 0:s0.4,4:s1.4,8:s2.4

  v9 = item;
  if ( (byte_4C0149A & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, item);
    sub_1C2E12C(&CombineServantListViewManager_TypeInfo, v11);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v12);
    sub_1C2E12C(&DataManager_TypeInfo, v13);
    sub_1C2E12C(&int_TypeInfo, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__Add__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string___ctor__, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_1C2E12C(&System_Collections_Generic_List_string__TypeInfo, v19);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v20);
    sub_1C2E12C(&NetworkManager_TypeInfo, v21);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v22);
    sub_1C2E12C(&System_Text_StringBuilder_TypeInfo, v23);
    sub_1C2E12C(&string_TypeInfo, v24);
    sub_1C2E12C(&TutorialFlag_TypeInfo, v25);
    sub_1C2E12C(&StringLiteral_12400/*"SKILL_LVDISP_TXT"*/, v26);
    sub_1C2E12C(&StringLiteral_10505/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, v27);
    sub_1C2E12C(&StringLiteral_9449/*"NONSELECT_UNDER_STATUS_MAX"*/, v28);
    sub_1C2E12C(&StringLiteral_6604/*"FORTIFICATION_APPOINTMENT"*/, v29);
    sub_1C2E12C(&StringLiteral_3692/*"COMBINE_CAN_STATUS_UP_INFO"*/, v30);
    sub_1C2E12C(&StringLiteral_8938/*"MSG_CAMPAIGN_COMBINE_EXP"*/, v31);
    sub_1C2E12C(&StringLiteral_12398/*"SKILL_LVDISP_ENABLE_TXT"*/, v32);
    sub_1C2E12C(&StringLiteral_2094/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/, v33);
    sub_1C2E12C(&StringLiteral_9444/*"NONSELECT_MATERIAL"*/, v34);
    sub_1C2E12C(&StringLiteral_23375/*"ribbon_noblephantasmup_01"*/, v35);
    sub_1C2E12C(&StringLiteral_9443/*"NONSELECT_LIMITUP_BASE"*/, v36);
    sub_1C2E12C(&StringLiteral_2095/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/, v37);
    sub_1C2E12C(&StringLiteral_10315/*"PARTY_MEMBER_TXT"*/, v38);
    sub_1C2E12C(&StringLiteral_9447/*"NONSELECT_NPUP_BASE"*/, v39);
    sub_1C2E12C(&StringLiteral_12662/*"SUPPORT_MEMBER"*/, v40);
    sub_1C2E12C(&StringLiteral_8934/*"MSG_ABLED_LIMITUP"*/, v41);
    sub_1C2E12C(&StringLiteral_11731/*"SELECT_PUSH"*/, v42);
    sub_1C2E12C(&StringLiteral_11708/*"SELECT_CANNOT"*/, v43);
    sub_1C2E12C(&StringLiteral_9503/*"NPUP_BASE"*/, v44);
    sub_1C2E12C(&StringLiteral_2096/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/, v45);
    sub_1C2E12C(&StringLiteral_12397/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/, v46);
    sub_1C2E12C(&StringLiteral_11732/*"SELECT_SERVANT_EVENT_JOIN"*/, v47);
    sub_1C2E12C(&StringLiteral_9491/*"NO_SELECT_FRIENDSHIP_EXCEED"*/, v48);
    sub_1C2E12C(&StringLiteral_11631/*"SAME_SERVANT"*/, v49);
    sub_1C2E12C(&StringLiteral_8933/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, v50);
    sub_1C2E12C(&StringLiteral_9445/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v51);
    sub_1C2E12C(&StringLiteral_25402/*"{0:#,0}"*/, v52);
    sub_1C2E12C(&StringLiteral_12399/*"SKILL_LVDISP_SINGLE_TXT"*/, v53);
    sub_1C2E12C(&StringLiteral_8935/*"MSG_ABLED_SKILLUP"*/, v54);
    sub_1C2E12C(&StringLiteral_9446/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, v55);
    sub_1C2E12C(&StringLiteral_9450/*"NONSKILL_TXT"*/, v56);
    sub_1C2E12C(&StringLiteral_8460/*"LOCKMODE_SELECTED_SERVANT"*/, v57);
    sub_1C2E12C(&StringLiteral_6522/*"FAVORITE_SERVANT"*/, v58);
    sub_1C2E12C(&StringLiteral_3503/*"CHOICE_SERVANT"*/, v59);
    sub_1C2E12C(&StringLiteral_11223/*"RECOMMEND_SUPPORT_MEMBER"*/, v60);
    sub_1C2E12C(&StringLiteral_8937/*"MSG_ABLED_TDUP"*/, v61);
    sub_1C2E12C(&StringLiteral_11702/*"SEAL_COMBINE_LIMIT_THIRD"*/, v62);
    sub_1C2E12C(&StringLiteral_9442/*"NONSELECT_BASE_ALLMAX"*/, v63);
    sub_1C2E12C(&StringLiteral_9492/*"NO_SELECT_LVEXCEED"*/, v64);
    sub_1C2E12C(&StringLiteral_1/*""*/, v65);
    sub_1C2E12C(&StringLiteral_9448/*"NONSELECT_SKILLUP_BASE"*/, v66);
    sub_1C2E12C(&StringLiteral_11730/*"SELECT_PROTECTED_EVENT_SVT"*/, v67);
    sub_1C2E12C(&StringLiteral_8461/*"LOCK_SERVANT"*/, v68);
    sub_1C2E12C(&StringLiteral_9441/*"NONSEELECT_STATUSUP_MAX"*/, v69);
    byte_4C0149A = 1;
  }
  v336.invoker_method = 0LL;
  skillInfoList = 0LL;
  v336.methodPointer = 0LL;
  entity = 0LL;
  if ( !v9 || !mode )
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
  type = v9->fields.type;
  servantFaceIcon = this->fields.servantFaceIcon;
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
  iconLabelInfo1 = v9->fields.iconLabelInfo1;
  switchInfoList = (UIWidget_array *)gameObject;
  if ( type )
  {
    if ( !servantFaceIcon )
      goto LABEL_1053;
    ServantFaceIconComponent__Set_39534600(
      servantFaceIcon,
      (UserServantEntity_o *)gameObject,
      iconLabelInfo1,
      v9->fields.iconLabelInfo2,
      0LL);
    subIconLabel = this->fields.subIconLabel;
    rarity = v9->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_1053;
    ServantFaceIconComponent__Set_39534600(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0LL, 0LL);
    gameObject = (__int64)v9->fields.iconLabelInfo2;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = IconLabelInfo__IsClear((IconLabelInfo_o *)gameObject, 0LL);
    subIconLabel = this->fields.subIconLabel;
    if ( (gameObject & 1) == 0 )
    {
      if ( !subIconLabel )
        goto LABEL_1053;
      UIIconLabel__Set(this->fields.subIconLabel, v9->fields.iconLabelInfo2, 0LL);
      goto LABEL_22;
    }
    rarity = v9->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
  }
  v78 = *(_DWORD *)(gameObject + 296);
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
  if ( !gameObject || !subIconLabel )
    goto LABEL_1053;
  UIIconLabel__Set_39550988(subIconLabel, 36, rarity, v78, 0, 0LL, 0, 0, *(_DWORD *)(gameObject + 256), 0LL);
LABEL_22:
  CombineServantListViewItem__GetNpInfo(
    v9,
    (int32_t *)&v336.invoker_method + 1,
    (int32_t *)&v336.invoker_method,
    (int32_t *)&v336.methodPointer + 1,
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
  v82 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !byte_4BF7D96 )
  {
    sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v81);
    byte_4BF7D96 = 1;
  }
  GameObjectExtensions__SetLocalScale(v82, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
  v83 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = CombineServantListViewItem__get_IsDispChoice(v9, 0LL);
  if ( !v83 )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive(v83, gameObject & 1, 0LL);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9->fields.isPush, 0LL);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9->fields.isMaterialTdSvt, 0LL);
    if ( v9->fields.isMaterialTdSvt )
    {
      v86 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v86, (System_String_o *)StringLiteral_23375/*"ribbon_noblephantasmup_01"*/, 0LL);
      v88 = v9->fields.type;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      if ( CombineServantListViewManager__GetSortKind(v88, v87) == 1 )
      {
        gameObject = (__int64)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_1053;
        v337.fields.x = 0.65;
        v337.fields.y = 1.0;
        v337.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v337, 0LL);
      }
    }
  }
  v89 = v9->fields.type;
  v332 = &this->fields.maskLabel;
  switch ( v89 )
  {
    case 5:
      gameObject = (__int64)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_1053;
      v96 = SHIDWORD(v336.invoker_method) <= 0 ? -1 : LODWORD(v336.invoker_method);
      UIIconLabel__Set_39550988(
        (UIIconLabel_o *)gameObject,
        33,
        v96,
        SHIDWORD(v336.methodPointer),
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
        v9->fields.currentLimitCnt,
        v9->fields.maxLimitCnt,
        0LL);
      if ( CombineServantListViewItem__get_IsProtected(v9, 0LL) && v9->fields.type != 5 )
      {
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1053;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1053;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v133 = *v332;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11730/*"SELECT_PROTECTED_EVENT_SVT"*/, 0LL);
        if ( !v133 )
          goto LABEL_1053;
        UILabel__set_text(v133, (System_String_o *)gameObject, 0LL);
        v97 = 1;
LABEL_101:
        if ( v9->fields.isParty )
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
          v98 = *v332;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10315/*"PARTY_MEMBER_TXT"*/, 0LL);
          if ( !v98 )
            goto LABEL_1053;
          UILabel__set_text(v98, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        if ( v9->fields.isFavorite )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v99 = *v332;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6522/*"FAVORITE_SERVANT"*/, 0LL);
          if ( !v99 )
            goto LABEL_1053;
          UILabel__set_text(v99, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
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
          v100 = *v332;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8461/*"LOCK_SERVANT"*/, 0LL);
          if ( !v100 )
            goto LABEL_1053;
          UILabel__set_text(v100, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispChoice(v9, 0LL) )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v102 = *v332;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3503/*"CHOICE_SERVANT"*/, 0LL);
          if ( !v102 )
            goto LABEL_1053;
          UILabel__set_text(v102, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        if ( v9->fields.isLimitCntTarget )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v103 = *v332;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11631/*"SAME_SERVANT"*/, 0LL);
          if ( !v103 )
            goto LABEL_1053;
          UILabel__set_text(v103, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        if ( v9->fields.isHeroineSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v104 = *v332;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9444/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v104 )
            goto LABEL_1053;
          UILabel__set_text(v104, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        if ( v9->fields.isStatusUpSvt && !v9->fields.isCanStUp )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v105 = *v332;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9444/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v105 )
            goto LABEL_1053;
          UILabel__set_text(v105, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        if ( v9->fields.isEventJoin )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v106 = *v332;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11732/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
          if ( !v106 )
            goto LABEL_1053;
          UILabel__set_text(v106, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        if ( v9->fields.isUseSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v107 = *v332;
          isParty = v9->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v109 = &StringLiteral_12662/*"SUPPORT_MEMBER"*/;
          if ( isParty )
            v109 = &StringLiteral_10315/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v109, 0LL);
          if ( !v107 )
            goto LABEL_1053;
          UILabel__set_text(v107, (System_String_o *)gameObject, 0LL);
          v97 = 1;
        }
        if ( v9->fields.isUseRecommendSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v110 = *v332;
          v111 = v9->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v112 = &StringLiteral_11223/*"RECOMMEND_SUPPORT_MEMBER"*/;
          if ( v111 )
            v112 = &StringLiteral_10315/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v112, 0LL);
          if ( !v110 )
            goto LABEL_1053;
          UILabel__set_text(v110, (System_String_o *)gameObject, 0LL);
          if ( !v9->fields.isParty )
          {
            gameObject = (__int64)*v332;
            if ( !*v332 )
              goto LABEL_1053;
            UILabel__SetCondensedScale((UILabel_o *)gameObject, 106, 0, 0LL);
          }
          v97 = 1;
        }
        if ( v9->fields.isPush )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1053;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v113 = *v332;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11731/*"SELECT_PUSH"*/, 0LL);
          if ( !v113 )
            goto LABEL_1053;
          UILabel__set_text(v113, (System_String_o *)gameObject, 0LL);
          gameObject = (__int64)*v332;
          if ( !*v332 )
            goto LABEL_1053;
          v115 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !byte_4BF7D96 )
          {
            sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v114);
            byte_4BF7D96 = 1;
          }
          GameObjectExtensions__SetLocalScale(v115, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          v97 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, v9, v101);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(v9, 0LL);
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
          if ( v9->fields.isMaxNextLv || v9->fields.isBaseLvMax )
          {
            if ( !v9->fields.isCanStUp )
            {
              if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(v9, 0LL) )
              {
                v134 = *v332;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9445/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
                if ( !v134 )
                  goto LABEL_1053;
                UILabel__set_text(v134, (System_String_o *)gameObject, 0LL);
                if ( v9->fields.type != 5 )
                  break;
                v124 = *v332;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v125 = &StringLiteral_9447/*"NONSELECT_NPUP_BASE"*/;
LABEL_312:
                v137 = (System_String_o *)*v125;
LABEL_313:
                gameObject = (__int64)LocalizationManager__Get(v137, 0LL);
                if ( !v124 )
                  goto LABEL_1053;
                UILabel__set_text(v124, (System_String_o *)gameObject, 0LL);
              }
LABEL_315:
              v138 = v9->fields.type;
              if ( v138 != 5 )
                goto LABEL_398;
              if ( v9->fields.isBaseSvt )
              {
                v139 = *v332;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9503/*"NPUP_BASE"*/, 0LL);
                if ( !v139 )
                  goto LABEL_1053;
                UILabel__set_text(v139, (System_String_o *)gameObject, 0LL);
                gameObject = (__int64)*v332;
                if ( !*v332 )
                  goto LABEL_1053;
                v141 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !byte_4BF7D96 )
                {
                  sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v140);
                  byte_4BF7D96 = 1;
                }
                GameObjectExtensions__SetLocalScale(v141, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
              }
              break;
            }
          }
          else if ( !v9->fields.isCanStUp )
          {
            if ( v9->fields.isFortification )
            {
              gameObject = (__int64)*v332;
              if ( !*v332 )
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
              UILabel__set_text((UILabel_o *)gameObject, v9->fields.fortificationName, 0LL);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1053;
              UILabel__set_text((UILabel_o *)gameObject, v9->fields.fortificationDetailName, 0LL);
              fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6604/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
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
              if ( v9->fields.type != 5 )
                break;
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1053;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_1053;
              *(UnityEngine_Vector3_o *)&v144 = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)gameObject,
                                                  0LL);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1053;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              v147 = v144;
              v148 = v145;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_1053;
              v338.fields.x = v147;
              v338.fields.y = fortificationInfoRootObjOffsetY;
              v338.fields.z = v148;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v338, 0LL);
              goto LABEL_315;
            }
            if ( (v97 & 1) == 0 )
            {
              v124 = *v332;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v137 = (System_String_o *)StringLiteral_9444/*"NONSELECT_MATERIAL"*/;
              goto LABEL_313;
            }
            goto LABEL_315;
          }
          if ( v9->fields.isStatusUpSvt )
          {
            v120 = v9->fields.rarity;
            if ( v120 <= 3 )
            {
              if ( v9->fields.isAtkUpMax || v9->fields.isHpUpMax )
              {
                v135 = *v332;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9449/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v135 )
                  goto LABEL_1053;
                UILabel__set_text(v135, (System_String_o *)gameObject, 0LL);
              }
              if ( v9->fields.isAtkSecondUpMax || v9->fields.isHpSecondUpMax )
              {
                v136 = *v332;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9449/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v136 )
                  goto LABEL_1053;
                UILabel__set_text(v136, (System_String_o *)gameObject, 0LL);
              }
              if ( !v9->fields.isNotSelectStatusUpAtk && !v9->fields.isNotSelectStatusUpHp )
                goto LABEL_315;
              v124 = *v332;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v125 = &StringLiteral_9449/*"NONSELECT_UNDER_STATUS_MAX"*/;
            }
            else
            {
              if ( v120 != 4 )
                goto LABEL_315;
              if ( v9->fields.atkBase >= 1 )
              {
                if ( v9->fields.isAtkSecondUpMax || v9->fields.isNotSelectSecondStatusUpAtk )
                {
                  v121 = *v332;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9449/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                  if ( !v121 )
                    goto LABEL_1053;
                  UILabel__set_text(v121, (System_String_o *)gameObject, 0LL);
                }
                if ( !v9->fields.isAtkUpMax )
                {
                  v122 = *v332;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9446/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0LL);
                  if ( !v122 )
                    goto LABEL_1053;
                  UILabel__set_text(v122, (System_String_o *)gameObject, 0LL);
                }
              }
              if ( v9->fields.hpBase < 1 )
                goto LABEL_315;
              if ( v9->fields.isHpSecondUpMax || v9->fields.isNotSelectSecondStatusUpHp )
              {
                v123 = *v332;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9449/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v123 )
                  goto LABEL_1053;
                UILabel__set_text(v123, (System_String_o *)gameObject, 0LL);
              }
              if ( v9->fields.isHpUpMax )
                goto LABEL_315;
              v124 = *v332;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v125 = &StringLiteral_9446/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
            }
            goto LABEL_312;
          }
          goto LABEL_315;
        }
        if ( v119 )
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
        v126 = (UnityEngine_Object_o *)this->fields.baseButton;
        cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
        if ( v9->fields.isMaxSelect )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v126, 0LL, 0LL) )
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
            v128 = 1;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
LABEL_269:
            if ( v9->fields.type == 1 && CombineServantListViewItem__get_IsOrganization(v9, 0LL) && !isSelectEnable )
            {
              if ( !(v128 & 1 | !ListViewItem__get_IsSelect((ListViewItem_o *)v9, 0LL)) )
                break;
            }
            else if ( !v128 )
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
            v132 = *v332;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9444/*"NONSELECT_MATERIAL"*/, 0LL);
            if ( !v132 )
              goto LABEL_1053;
            UILabel__set_text(v132, (System_String_o *)gameObject, 0LL);
            break;
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
        v128 = 0;
        goto LABEL_269;
      }
LABEL_100:
      v97 = 0;
      goto LABEL_101;
    case 0:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1053;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        v9->fields.currentLimitCnt,
        v9->fields.maxLimitCnt,
        0LL);
      if ( v9->fields.isParty )
      {
        gameObject = (__int64)this->fields.partyIcon;
        if ( !gameObject )
          goto LABEL_1053;
        FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
      }
      if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
      {
        gameObject = (__int64)this->fields.lockImg;
        if ( !gameObject )
          goto LABEL_1053;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1053;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      }
      CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL);
      v91 = (UnityEngine_Object_o *)this->fields.baseButton;
      v92 = CanNotBaseSelect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v93 = UnityEngine_Object__op_Inequality(v91, 0LL, 0LL);
      if ( v92 )
      {
        if ( !v93 )
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
        if ( v9->fields.isLvMax )
        {
          if ( v9->fields.isStatusUpSvt )
            goto LABEL_326;
          if ( !v9->fields.isExpUpSvt )
          {
            v94 = *v332;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v95 = &StringLiteral_9442/*"NONSELECT_BASE_ALLMAX"*/;
            goto LABEL_329;
          }
        }
        else if ( v9->fields.isStatusUpSvt )
        {
          goto LABEL_326;
        }
        if ( !v9->fields.isExpUpSvt )
        {
          if ( !v9->fields.isHeroineSvt )
          {
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1053;
            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            gameObject = (__int64)*v332;
            if ( !*v332 )
              goto LABEL_1053;
            v142 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_331;
          }
          v94 = *v332;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v95 = &StringLiteral_11708/*"SELECT_CANNOT"*/;
LABEL_329:
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v95, 0LL);
          if ( !v94 )
            goto LABEL_1053;
          v142 = (System_String_o *)gameObject;
          gameObject = (__int64)v94;
LABEL_331:
          UILabel__set_text((UILabel_o *)gameObject, v142, 0LL);
          gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
          if ( !gameObject )
            goto LABEL_1053;
          CombineServantListViewNoticeTween__RemoveTarget(
            (CombineServantListViewNoticeTween_o *)gameObject,
            *p_statusTxtLb,
            0LL);
LABEL_393:
          if ( v9->fields.isBaseSvt )
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
        v94 = *v332;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v95 = &StringLiteral_9444/*"NONSELECT_MATERIAL"*/;
        goto LABEL_329;
      }
      if ( !v93 )
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
      gameObject = (__int64)*v332;
      if ( !*v332 )
        goto LABEL_1053;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( v9->fields.isCombineExpCampaignTarget )
      {
        if ( v9->fields.isDispAtkStatusUpInfo
          && CombineServantListViewItem__get_IsAtkAdjustMax(v9, 0LL)
          && !CombineServantListViewItem__get_IsSecondAtkAdjustMax(v9, 0LL) )
        {
          v149 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v149,
            (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v150 = LocalizationManager__Get((System_String_o *)StringLiteral_8938/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v336.methodPointer = v9->fields.combineExpCampaignValue;
          v151 = (Il2CppObject *)System_Single__ToString(*(float *)&v336.methodPointer, &v336);
          gameObject = (__int64)System_String__Format(v150, v151, 0LL);
          if ( !v149 )
            goto LABEL_1053;
          items = v149->fields._items;
          v159 = Method_System_Collections_Generic_List_string__Add__;
          ++v149->fields._version;
          if ( !items )
            goto LABEL_1053;
          size = v149->fields._size;
          v161 = gameObject;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v149,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
          }
          else
          {
            v162 = &items->obj.klass + size;
            v149->fields._size = size + 1;
            v162[4] = (Il2CppClass *)v161;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v162 + 4), v161, v152, v153, v154, v155, v156, v157);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v182 = v149->fields._items;
          v183 = Method_System_Collections_Generic_List_string__Add__;
          ++v149->fields._version;
          if ( !v182 )
            goto LABEL_1053;
        }
        else
        {
          if ( !v9->fields.isDispHpStatusUpInfo
            || !CombineServantListViewItem__get_IsHpAdjustMax(v9, 0LL)
            || CombineServantListViewItem__get_IsSecondHpAdjustMax(v9, 0LL) )
          {
            gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
            if ( !gameObject )
              goto LABEL_1053;
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              *p_statusTxtLb,
              0LL);
            v129 = *p_statusTxtLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v130 = LocalizationManager__Get((System_String_o *)StringLiteral_8938/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
            *(float *)&v336.methodPointer = v9->fields.combineExpCampaignValue;
            v131 = (Il2CppObject *)System_Single__ToString(*(float *)&v336.methodPointer, &v336);
            gameObject = (__int64)System_String__Format(v130, v131, 0LL);
            if ( !v129 )
              goto LABEL_1053;
LABEL_261:
            UILabel__set_text(v129, (System_String_o *)gameObject, 0LL);
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
          v149 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v149,
            (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v163 = LocalizationManager__Get((System_String_o *)StringLiteral_8938/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v336.methodPointer = v9->fields.combineExpCampaignValue;
          v164 = (Il2CppObject *)System_Single__ToString(*(float *)&v336.methodPointer, &v336);
          gameObject = (__int64)System_String__Format(v163, v164, 0LL);
          if ( !v149 )
            goto LABEL_1053;
          v171 = v149->fields._items;
          v172 = Method_System_Collections_Generic_List_string__Add__;
          ++v149->fields._version;
          if ( !v171 )
            goto LABEL_1053;
          v173 = v149->fields._size;
          v174 = gameObject;
          if ( (unsigned int)v173 >= v171->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v149,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
          }
          else
          {
            v175 = &v171->obj.klass + v173;
            v149->fields._size = v173 + 1;
            v175[4] = (Il2CppClass *)v174;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v175 + 4), v174, v165, v166, v167, v168, v169, v170);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v182 = v149->fields._items;
          v183 = Method_System_Collections_Generic_List_string__Add__;
          ++v149->fields._version;
          if ( !v182 )
            goto LABEL_1053;
        }
        v184 = v149->fields._size;
        v185 = gameObject;
        if ( (unsigned int)v184 >= v182->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v149,
            (Il2CppObject *)gameObject,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
        }
        else
        {
          v186 = &v182->obj.klass + v184;
          v149->fields._size = v184 + 1;
          v186[4] = (Il2CppClass *)v185;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v186 + 4), v185, v176, v177, v178, v179, v180, v181);
        }
        gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1053;
        CombineServantListViewNoticeTween__AddTarget(
          (CombineServantListViewNoticeTween_o *)gameObject,
          *p_statusTxtLb,
          (System_Collections_Generic_List_string__o *)v149,
          0LL);
        gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1053;
        CombineServantListViewNoticeTween__SetTexts((CombineServantListViewNoticeTween_o *)gameObject, 0, 0LL);
        goto LABEL_390;
      }
      gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
      if ( !gameObject )
        goto LABEL_1053;
      CombineServantListViewNoticeTween__RemoveTarget(
        (CombineServantListViewNoticeTween_o *)gameObject,
        *p_statusTxtLb,
        0LL);
      if ( v9->fields.isDispAtkStatusUpInfo )
      {
        if ( !CombineServantListViewItem__get_IsAtkAdjustMax(v9, 0LL)
          || CombineServantListViewItem__get_IsSecondAtkAdjustMax(v9, 0LL) )
        {
          goto LABEL_393;
        }
      }
      else if ( !v9->fields.isDispHpStatusUpInfo
             || !CombineServantListViewItem__get_IsHpAdjustMax(v9, 0LL)
             || CombineServantListViewItem__get_IsSecondHpAdjustMax(v9, 0LL) )
      {
        goto LABEL_393;
      }
      v129 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
      if ( !v129 )
        goto LABEL_1053;
      goto LABEL_261;
  }
  v138 = v9->fields.type;
LABEL_398:
  if ( v138 != 9 )
  {
    if ( v138 != 2 )
      goto LABEL_461;
    gameObject = (__int64)this->fields.limitCountIcon;
    if ( !gameObject )
      goto LABEL_1053;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)gameObject,
      v9->fields.currentLimitCnt,
      v9->fields.maxLimitCnt,
      0LL);
    if ( v9->fields.isParty )
    {
      gameObject = (__int64)this->fields.partyIcon;
      if ( !gameObject )
        goto LABEL_1053;
      FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
    }
    if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_1053;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1053;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    }
    if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
    {
      v187 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v187, 0LL, 0LL) )
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
        isHeroineSvt = v9->fields.isHeroineSvt;
        v189 = *v332;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !isHeroineSvt )
          goto LABEL_419;
LABEL_441:
        v190 = &StringLiteral_9444/*"NONSELECT_MATERIAL"*/;
        goto LABEL_442;
      }
      goto LABEL_457;
    }
    if ( !v9->fields.isLvMax || !v9->fields.isLimitUpItemNum )
    {
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
      goto LABEL_457;
    }
    isSealCombineLimit = v9->fields.isSealCombineLimit;
    v197 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v194 = UnityEngine_Object__op_Inequality(v197, 0LL, 0LL);
    if ( !isSealCombineLimit )
    {
      if ( v194 )
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
        gameObject = (__int64)*v332;
        if ( !*v332 )
          goto LABEL_1053;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        gameObject = (__int64)*p_statusTxtLb;
        if ( !*p_statusTxtLb )
          goto LABEL_1053;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1053;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v189 = *p_statusTxtLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v190 = &StringLiteral_8934/*"MSG_ABLED_LIMITUP"*/;
        goto LABEL_442;
      }
      goto LABEL_457;
    }
LABEL_449:
    if ( !v194 )
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
    gameObject = (__int64)*v332;
    if ( !*v332 )
      goto LABEL_1053;
    v195 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_456;
  }
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1053;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    v9->fields.currentLimitCnt,
    v9->fields.maxLimitCnt,
    0LL);
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1053;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v191 = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL);
  v192 = (UnityEngine_Object_o *)this->fields.baseButton;
  v193 = v191;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v194 = UnityEngine_Object__op_Inequality(v192, 0LL, 0LL);
  if ( !v193 )
    goto LABEL_449;
  if ( !v194 )
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
  if ( v9->fields.isHeroineSvt || v9->fields.isEventJoin || v9->fields.isIgnoreCombineLimitSpecial )
  {
    v189 = *v332;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    goto LABEL_441;
  }
  if ( v9->fields.isLimitCntMax )
  {
    v189 = *v332;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
LABEL_419:
    v190 = &StringLiteral_9443/*"NONSELECT_LIMITUP_BASE"*/;
LABEL_442:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v190, 0LL);
    if ( !v189 )
      goto LABEL_1053;
    v195 = (System_String_o *)gameObject;
    gameObject = (__int64)v189;
LABEL_456:
    UILabel__set_text((UILabel_o *)gameObject, v195, 0LL);
    goto LABEL_457;
  }
  if ( v9->fields.isSealCombineLimit )
  {
    v189 = *v332;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v190 = &StringLiteral_11702/*"SEAL_COMBINE_LIMIT_THIRD"*/;
    goto LABEL_442;
  }
LABEL_457:
  if ( v9->fields.isBaseSvt )
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
  v198 = v9->fields.type;
  v329 = this;
  v330 = v9;
  v327 = modeKind;
  v328 = &this->fields.statusTxtLb;
  if ( v198 != 3 )
    goto LABEL_543;
  CombineServantListViewItem__GetSkillInfo(v9, &skillInfoList, 0LL);
  enableSkillUp = v9->fields.enableSkillUp;
  v200 = (System_Text_StringBuilder_o *)sub_1C2E378(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v200, 0LL);
  v201 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_1053;
  v202 = *(_QWORD *)&skillInfoList->max_length;
  if ( (int)v202 >= 1 )
  {
    v203 = 0LL;
    v204 = (unsigned int)(v202 - 1);
    v205 = (unsigned int)*(_QWORD *)&skillInfoList->max_length;
    while ( 1 )
    {
      if ( v203 >= v201->max_length )
        goto LABEL_1054;
      v206 = v201->m_Items[v203];
      if ( v206 )
      {
        lv = v206->fields.lv;
        p_lv = &v206->fields.lv;
        v209 = *(p_lv - 1);
        if ( lv > 0 )
        {
          gameObject = (__int64)System_Int32__ToString((int32_t)p_lv, 0LL);
          goto LABEL_473;
        }
      }
      else
      {
        v209 = -1;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9450/*"NONSKILL_TXT"*/, 0LL);
LABEL_473:
      v210 = (Il2CppObject *)gameObject;
      if ( enableSkillUp )
      {
        v211 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v209,
                 (const MethodInfo_364EC00 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v204 == v203 )
        {
          v212 = &StringLiteral_12397/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v211 )
            v212 = &StringLiteral_12399/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v212 = &StringLiteral_12398/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v211 )
            v212 = &StringLiteral_12400/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v212, 0LL);
        if ( v200 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v200, (System_String_o *)gameObject, v210, 0LL);
          if ( v205 == ++v203 )
            goto LABEL_487;
          v201 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_1053;
    }
  }
  if ( !v200 )
    goto LABEL_1053;
LABEL_487:
  skillLvLabel = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v200->klass->vtable._3_ToString.method)(
                 v200,
                 v200->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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
  modeKind = v327;
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1053;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    v214 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v214, 0LL, 0LL) )
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
    v215 = *v332;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9448/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v215 )
      goto LABEL_1053;
    UILabel__set_text(v215, (System_String_o *)gameObject, 0LL);
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_538;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_39000124(126, 0LL) )
      goto LABEL_538;
    v216 = *v332;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v217 = &StringLiteral_11708/*"SELECT_CANNOT"*/;
    goto LABEL_526;
  }
  isSkillUpItemNum = v9->fields.isSkillUpItemNum;
  v219 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v220 = UnityEngine_Object__op_Inequality(v219, 0LL, 0LL);
  if ( !isSkillUpItemNum )
  {
    if ( v220 )
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
  if ( v220 )
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
    gameObject = (__int64)*v328;
    if ( !*v328 )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v216 = *v328;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v217 = &StringLiteral_8935/*"MSG_ABLED_SKILLUP"*/;
LABEL_526:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v217, 0LL);
    if ( !v216 )
      goto LABEL_1053;
    UILabel__set_text(v216, (System_String_o *)gameObject, 0LL);
  }
LABEL_538:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v198 = v9->fields.type;
LABEL_543:
  if ( v198 != 11 )
    goto LABEL_638;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(v9, 0LL);
  enableAppendSkillUp = v9->fields.enableAppendSkillUp;
  v224 = AppendSkillData;
  v225 = (System_Text_StringBuilder_o *)sub_1C2E378(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v225, 0LL);
  if ( !v224 )
    goto LABEL_1053;
  svtUseSkillIdList = v224->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_1053;
  v227 = *(_QWORD *)&svtUseSkillIdList->max_length;
  if ( (int)v227 >= 1 )
  {
    v228 = 0LL;
    v229 = (unsigned int)(v227 - 1);
    v230 = (unsigned int)*(_QWORD *)&svtUseSkillIdList->max_length;
    while ( v228 < svtUseSkillIdList->max_length )
    {
      svtSkillLvList = v224->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_1053;
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
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9450/*"NONSKILL_TXT"*/, 0LL);
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
                 (const MethodInfo_364EC00 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v228 == v229 )
        {
          v238 = &StringLiteral_12397/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v237 )
            v238 = &StringLiteral_12399/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v238 = &StringLiteral_12398/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v237 )
            v238 = &StringLiteral_12400/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v238, 0LL);
        if ( v225 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v225, (System_String_o *)gameObject, v236, 0LL);
          if ( ++v228 == v230 )
            goto LABEL_570;
          svtUseSkillIdList = v224->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_1053;
    }
LABEL_1054:
    sub_1C2E390(gameObject, switchInfoList);
  }
  if ( !v225 )
    goto LABEL_1053;
LABEL_570:
  v239 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v225->klass->vtable._3_ToString.method)(
                 v225,
                 v225->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v239 )
    goto LABEL_1053;
  UILabel__set_text(v239, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1053;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  modeKind = v327;
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1053;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  gameObject = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v240 = *v332;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9448/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v240 )
      goto LABEL_1053;
    UILabel__set_text(v240, (System_String_o *)gameObject, 0LL);
    if ( v9->fields.isEventJoin )
    {
      v241 = *v332;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10505/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v241 )
        goto LABEL_1053;
      UILabel__set_text(v241, (System_String_o *)gameObject, 0LL);
    }
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_608;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_39000124(126, 0LL) )
      goto LABEL_608;
    v242 = *v332;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v243 = &StringLiteral_11708/*"SELECT_CANNOT"*/;
    goto LABEL_606;
  }
  if ( !enableAppendSkillUp )
    goto LABEL_1053;
  if ( enableAppendSkillUp->fields._size > 0 || v9->fields.isAppendSkillOpenItemNum )
  {
    gameObject = (__int64)*v328;
    if ( !*v328 )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v242 = *v328;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v243 = &StringLiteral_8935/*"MSG_ABLED_SKILLUP"*/;
LABEL_606:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v243, 0LL);
    if ( !v242 )
      goto LABEL_1053;
    UILabel__set_text(v242, (System_String_o *)gameObject, 0LL);
  }
LABEL_608:
  v244 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v244, 0LL, 0LL) )
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
        gameObject = CombineServantListViewItem__get_SkillOpenItemNum(v9, 0LL);
        if ( (gameObject & 0x80000000) != 0 )
        {
          switchInfoList = (UIWidget_array *)StringLiteral_1/*""*/;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(v9, 0LL);
          v251 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum, v248, v249, v250);
          gameObject = (__int64)System_String__Format((System_String_o *)StringLiteral_25402/*"{0:#,0}"*/, v251, 0LL);
          switchInfoList = (UIWidget_array *)gameObject;
        }
        if ( !coinNumLabel )
          goto LABEL_1053;
        UILabel__set_text(coinNumLabel, (System_String_o *)switchInfoList, 0LL);
        gameObject = CombineServantListViewItem__get_SkillOpenItemId(v9, 0LL);
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
          gameObject = CombineServantListViewItem__get_SkillOpenItemId(v9, 0LL);
          if ( !coinIcon )
            goto LABEL_1053;
          ItemIconComponent__SetItem(coinIcon, gameObject, -1, 1, 0LL);
        }
      }
    }
  }
  if ( v9->fields.isBaseSvt )
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
  v253 = v9->fields.type;
  if ( v253 != 12 )
    goto LABEL_763;
  v254 = CombineServantListViewItem__GetAppendSkillData(v9, 0LL);
  v255 = (System_Text_StringBuilder_o *)sub_1C2E378(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v255, 0LL);
  if ( !v254 )
    goto LABEL_1053;
  v256 = v254->fields.svtUseSkillIdList;
  if ( !v256 )
    goto LABEL_1053;
  v257 = *(_QWORD *)&v256->max_length;
  if ( (int)v257 < 1 )
  {
    v260 = 0;
    v272 = 0;
    if ( !v255 )
      goto LABEL_1053;
  }
  else
  {
    v258 = 0;
    v259 = 0;
    v260 = 0;
    v261 = 0LL;
    while ( 1 )
    {
      if ( v261 >= v256->max_length )
        goto LABEL_1054;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9450/*"NONSKILL_TXT"*/, 0LL);
      v262 = v254->fields.svtSkillLvList;
      if ( !v262 )
        goto LABEL_1053;
      if ( v261 >= v262->max_length )
        goto LABEL_1054;
      v263 = (char *)v262 + 4 * v261;
      v264 = *((_DWORD *)v263 + 8);
      gameObject = (__int64)(v263 + 32);
      if ( v264 >= 1 )
      {
        gameObject = (__int64)System_Int32__ToString(gameObject, 0LL);
        v262 = v254->fields.svtSkillLvList;
        if ( !v262 )
          goto LABEL_1053;
        v259 = 1;
      }
      if ( v261 >= v262->max_length )
        goto LABEL_1054;
      v265 = v262->m_Items[1];
      v266 = v262->m_Items[++v261];
      v260 |= v266 < 10;
      v258 |= v265 != v266;
      if ( v261 == (unsigned int)v257 )
        break;
      v256 = v254->fields.svtUseSkillIdList;
      if ( !v256 )
        goto LABEL_1053;
    }
    v326 = v259;
    v267 = 0LL;
    v268 = 32LL;
    do
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9450/*"NONSKILL_TXT"*/, 0LL);
      v269 = v254->fields.svtSkillLvList;
      if ( !v269 )
        goto LABEL_1053;
      if ( v267 >= v269->max_length )
        goto LABEL_1054;
      v270 = (Il2CppObject *)gameObject;
      if ( *(int *)((char *)&v269->obj.klass + v268) >= 1 )
        v270 = (Il2CppObject *)System_Int32__ToString((int)v269 + (int)v268, 0LL);
      if ( (_DWORD)v257 - 1 == v267 )
      {
        if ( (v258 & 1) == 0 )
          goto LABEL_668;
        if ( !v330->fields.isHeroineSvt )
          goto LABEL_677;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_39000124(126, 0LL) )
        {
LABEL_668:
          v271 = &StringLiteral_12399/*"SKILL_LVDISP_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v271 = &StringLiteral_12399/*"SKILL_LVDISP_SINGLE_TXT"*/;
          }
        }
        else
        {
LABEL_677:
          v271 = &StringLiteral_12397/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v271 = &StringLiteral_12397/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          }
        }
      }
      else
      {
        if ( (v258 & 1) == 0 )
          goto LABEL_675;
        if ( !v330->fields.isHeroineSvt )
          goto LABEL_679;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_39000124(126, 0LL) )
        {
LABEL_675:
          v271 = &StringLiteral_12400/*"SKILL_LVDISP_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v271 = &StringLiteral_12400/*"SKILL_LVDISP_TXT"*/;
          }
        }
        else
        {
LABEL_679:
          v271 = &StringLiteral_12398/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v271 = &StringLiteral_12398/*"SKILL_LVDISP_ENABLE_TXT"*/;
          }
        }
      }
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v271, 0LL);
      if ( !v255 )
        goto LABEL_1053;
      System_Text_StringBuilder__AppendFormat(v255, (System_String_o *)gameObject, v270, 0LL);
      ++v267;
      v268 += 4LL;
    }
    while ( (unsigned int)v257 != v267 );
    this = v329;
    v9 = v330;
    v272 = v326;
    modeKind = v327;
    p_statusTxtLb = v328;
  }
  v273 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v255->klass->vtable._3_ToString.method)(
                 v255,
                 v255->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v273 )
    goto LABEL_1053;
  UILabel__set_text(v273, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1053;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1053;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)*v332;
    if ( !*v332 )
      goto LABEL_1053;
    UILabel__set_text((UILabel_o *)gameObject, string_TypeInfo->static_fields->Empty, 0LL);
    if ( v9->fields.isEventJoin )
    {
      v274 = *v332;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10505/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v274 )
        goto LABEL_1053;
      UILabel__set_text(v274, (System_String_o *)gameObject, 0LL);
    }
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_1057;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_39000124(126, 0LL) )
    {
      v275 = *v332;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v276 = &StringLiteral_11708/*"SELECT_CANNOT"*/;
    }
    else
    {
LABEL_1057:
      if ( v9->fields.isEventJoin )
      {
        v275 = *v332;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v276 = &StringLiteral_11732/*"SELECT_SERVANT_EVENT_JOIN"*/;
      }
      else if ( (v272 & 1) != 0 )
      {
        if ( (v260 & 1) != 0 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BF81D5 )
          {
            sub_1C2E12C(&NetworkManager_TypeInfo, switchInfoList);
            byte_4BF81D5 = 1;
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
                  v9->fields.svtId,
                  0LL)
            || !UserServantAppendPassiveSkillMaster__IsExchangeLimited(0LL) )
          {
            goto LABEL_752;
          }
          v275 = *v332;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2096/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/, 0LL);
          if ( !entity )
            goto LABEL_1053;
          v278 = (System_String_o *)gameObject;
          SkillOpenItemNum = UserServantAppendPassiveSkillEntity__GetRemainingExchangeNum(entity, 0LL);
          v282 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum, v279, v280, v281);
          gameObject = (__int64)System_String__Format(v278, v282, 0LL);
          if ( !v275 )
            goto LABEL_1053;
          goto LABEL_751;
        }
        v275 = *v332;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v276 = &StringLiteral_2095/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/;
      }
      else
      {
        v275 = *v332;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v276 = &StringLiteral_2094/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/;
      }
    }
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v276, 0LL);
    if ( !v275 )
      goto LABEL_1053;
LABEL_751:
    UILabel__set_text(v275, (System_String_o *)gameObject, 0LL);
  }
LABEL_752:
  v283 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v283, 0LL, 0LL) )
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
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v253 = v9->fields.type;
LABEL_763:
  if ( v253 != 4 )
    goto LABEL_809;
  gameObject = (__int64)this->fields.npIconLabel;
  if ( !gameObject )
    goto LABEL_1053;
  v284 = SHIDWORD(v336.invoker_method) <= 0 ? -1 : LODWORD(v336.invoker_method);
  UIIconLabel__Set_39550988((UIIconLabel_o *)gameObject, 33, v284, SHIDWORD(v336.methodPointer), 0, 0LL, 0, 0, 0, 0LL);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1053;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    v285 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v285, 0LL, 0LL) )
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
    v286 = v9->fields.isHeroineSvt;
    v287 = *v332;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v286 )
      v288 = &StringLiteral_9444/*"NONSELECT_MATERIAL"*/;
    else
      v288 = &StringLiteral_9447/*"NONSELECT_NPUP_BASE"*/;
    v290 = (System_String_o *)*v288;
    goto LABEL_803;
  }
  if ( !v9->fields.isSameSvt && !v9->fields.isBaseSvt )
  {
    v301 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v301, 0LL, 0LL) )
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
  v289 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v289, 0LL, 0LL) )
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
    if ( v9->fields.isSameSvt )
    {
      gameObject = (__int64)*p_statusTxtLb;
      if ( !*p_statusTxtLb )
        goto LABEL_1053;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1053;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v287 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v290 = (System_String_o *)StringLiteral_8937/*"MSG_ABLED_TDUP"*/;
LABEL_803:
      gameObject = (__int64)LocalizationManager__Get(v290, 0LL);
      if ( !v287 )
        goto LABEL_1053;
      UILabel__set_text(v287, (System_String_o *)gameObject, 0LL);
    }
  }
LABEL_805:
  if ( v9->fields.isBaseSvt )
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
  v291 = v9->fields.type;
  if ( v291 != 6 )
    goto LABEL_875;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1053;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    v9->fields.currentLimitCnt,
    v9->fields.maxLimitCnt,
    0LL);
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1053;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    v292 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v292, 0LL, 0LL) )
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
      if ( v9->fields.isHeroineSvt )
      {
        v293 = *v332;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v294 = &StringLiteral_9444/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        isEventJoin = v9->fields.isEventJoin;
        v293 = *v332;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( isEventJoin )
          v294 = &StringLiteral_11732/*"SELECT_SERVANT_EVENT_JOIN"*/;
        else
          v294 = &StringLiteral_9492/*"NO_SELECT_LVEXCEED"*/;
      }
      v298 = (System_String_o *)*v294;
LABEL_868:
      gameObject = (__int64)LocalizationManager__Get(v298, 0LL);
      if ( !v293 )
        goto LABEL_1053;
      UILabel__set_text(v293, (System_String_o *)gameObject, 0LL);
      goto LABEL_870;
    }
    goto LABEL_870;
  }
  if ( !v9->fields.isLvMax || !v9->fields.isLimitCntMax )
  {
    v299 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v299, 0LL, 0LL) )
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
  isLvExceedItemNum = v9->fields.isLvExceedItemNum;
  v296 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v297 = UnityEngine_Object__op_Inequality(v296, 0LL, 0LL);
  if ( !isLvExceedItemNum )
  {
    if ( !v297 )
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
  if ( v297 )
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
    gameObject = (__int64)*v332;
    if ( !*v332 )
      goto LABEL_1053;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v293 = *p_statusTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v298 = (System_String_o *)StringLiteral_8934/*"MSG_ABLED_LIMITUP"*/;
    goto LABEL_868;
  }
LABEL_870:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v291 = v9->fields.type;
LABEL_875:
  if ( v291 != 10 && v291 != 7 )
    goto LABEL_937;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1053;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.subIconLabel;
  if ( !gameObject )
    goto LABEL_1053;
  UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0LL);
  v303 = v9->fields.type;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  gameObject = CombineServantListViewManager__GetSortKind(v303, v302);
  v304 = this->fields.servantFaceIcon;
  if ( !v304 )
    goto LABEL_1053;
  if ( (_DWORD)gameObject == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *, __int64, Il2CppMethodPointer))v304->klass->vtable._4_ParameterChange.method)(
      this->fields.servantFaceIcon,
      1LL,
      v304->klass->vtable._5_UpdateAlpha.methodPtr);
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
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1053;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v305 = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL);
  v306 = (UnityEngine_Object_o *)this->fields.baseButton;
  v307 = v305;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v308 = UnityEngine_Object__op_Inequality(v306, 0LL, 0LL);
  if ( v307 )
  {
    if ( !v308 )
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
    if ( v9->fields.type == 10 && v9->fields.isCommandCardExceedMax )
    {
      v309 = *v332;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9441/*"NONSEELECT_STATUSUP_MAX"*/, 0LL);
      if ( !v309 )
        goto LABEL_1053;
      UILabel__set_text(v309, (System_String_o *)gameObject, 0LL);
    }
    if ( v9->fields.isEventJoin )
    {
      v310 = *v332;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11732/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v310 )
        goto LABEL_1053;
      UILabel__set_text(v310, (System_String_o *)gameObject, 0LL);
    }
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_926;
    v311 = *v332;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11708/*"SELECT_CANNOT"*/, 0LL);
    if ( !v311 )
      goto LABEL_1053;
    v312 = (System_String_o *)gameObject;
    gameObject = (__int64)v311;
    goto LABEL_925;
  }
  if ( v308 )
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
    gameObject = (__int64)*v332;
    if ( !*v332 )
      goto LABEL_1053;
    v312 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_925:
    UILabel__set_text((UILabel_o *)gameObject, v312, 0LL);
  }
LABEL_926:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v313 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v313, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v314 = this->fields.svtCommandCardList;
    gameObject = CombineServantListViewItem__get_UserSvtId(v9, 0LL);
    if ( !v314 )
      goto LABEL_1053;
    ServantCommandCardListComponent__Set(v314, gameObject, 1, 1, 0LL);
  }
LABEL_937:
  if ( v9->fields.type != 8 )
    goto LABEL_994;
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1053;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    v315 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v315, 0LL, 0LL) )
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
    if ( v9->fields.isHeroineSvt )
    {
      v316 = *v332;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v317 = &StringLiteral_9444/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      v323 = v9->fields.isEventJoin;
      v316 = *v332;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v323 )
        v317 = &StringLiteral_11732/*"SELECT_SERVANT_EVENT_JOIN"*/;
      else
        v317 = &StringLiteral_9491/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
    }
    v321 = (System_String_o *)*v317;
    goto LABEL_988;
  }
  if ( !v9->fields.isFriendshipRankMax )
  {
    v322 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v322, 0LL, 0LL) )
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
  isFriendshipExceedItemNum = v9->fields.isFriendshipExceedItemNum;
  v319 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v320 = UnityEngine_Object__op_Inequality(v319, 0LL, 0LL);
  if ( !isFriendshipExceedItemNum )
  {
    if ( !v320 )
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
  if ( !v320 )
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
  gameObject = (__int64)*v332;
  if ( !*v332 )
    goto LABEL_1053;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)*p_statusTxtLb;
  if ( !*p_statusTxtLb )
    goto LABEL_1053;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1053;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v316 = *p_statusTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v321 = (System_String_o *)StringLiteral_8933/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/;
LABEL_988:
  gameObject = (__int64)LocalizationManager__Get(v321, 0LL);
  if ( !v316 )
    goto LABEL_1053;
  UILabel__set_text(v316, (System_String_o *)gameObject, 0LL);
LABEL_990:
  if ( v9->fields.isBaseSvt )
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
    if ( v9->fields.isEventJoin )
    {
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1053;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1053;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v324 = *v332;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11732/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v324 )
        goto LABEL_1053;
      goto LABEL_1031;
    }
    if ( !v9->fields.isCanNotLock )
    {
      gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
      if ( !gameObject )
        goto LABEL_1053;
      if ( !UserServantEntity__IsLeave((UserServantEntity_o *)gameObject, 0LL) )
      {
        gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
        if ( !gameObject )
          goto LABEL_1053;
        if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)gameObject, 0LL) )
        {
          gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
          if ( !gameObject )
            goto LABEL_1053;
          if ( !UserServantEntity__IsStatusUp((UserServantEntity_o *)gameObject, 0LL) )
          {
            gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
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
              gameObject = (__int64)*v332;
              if ( !*v332 )
                goto LABEL_1053;
              v325 = (System_String_o *)StringLiteral_1/*""*/;
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
        v324 = *v332;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8460/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
        if ( v324 )
        {
LABEL_1031:
          v325 = (System_String_o *)gameObject;
          gameObject = (__int64)v324;
LABEL_1032:
          UILabel__set_text((UILabel_o *)gameObject, v325, 0LL);
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
    sub_1C2E388(gameObject, switchInfoList);
  }
  if ( !v9->fields.isHeroineSvt )
    goto LABEL_999;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_39000124(126, 0LL) )
  {
LABEL_999:
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9->fields.isCanNotLock, 0LL);
    if ( v9->fields.isCanNotLock )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      switchInfoList = (UIWidget_array *)LocalizationManager__Get((System_String_o *)StringLiteral_8460/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
    }
    else
    {
      switchInfoList = (UIWidget_array *)StringLiteral_1/*""*/;
    }
    gameObject = (__int64)*v332;
    if ( !*v332 )
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

  if ( (byte_4C0149C & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, item);
    byte_4C0149C = 1;
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
    sub_1C2E388(v7, v6);
  }
}