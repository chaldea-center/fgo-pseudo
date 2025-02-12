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
  if ( (byte_4BB8346 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, item);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_9439/*"NONSELECT_LIMITUP_BASE"*/, v8);
    sub_1C13D24(&StringLiteral_9434/*"NONE"*/, v9);
    sub_1C13D24(&StringLiteral_9437/*"NONSEELECT_STATUSUP_MAX"*/, v10);
    sub_1C13D24(&StringLiteral_9435/*"NONE_DISPLAY_FREE_QUEST_MATERIAL"*/, v11);
    byte_4BB8346 = 1;
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
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NONSELECT_LIMITUP_BASE"*/, 0LL);
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
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NONSELECT_LIMITUP_BASE"*/, 0LL);
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
      v32 = &StringLiteral_9439/*"NONSELECT_LIMITUP_BASE"*/;
LABEL_78:
      maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v32, 0LL);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)maskSprite, 0LL);
        goto LABEL_80;
      }
LABEL_92:
      sub_1C13F80(maskSprite, v21);
    }
    maskLabel = this->fields.maskLabel;
    v25 = LocalizationManager_TypeInfo;
    v27 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_75:
    if ( !v27 )
      j_il2cpp_runtime_class_init_0(v25);
    v32 = &StringLiteral_9434/*"NONE"*/;
    goto LABEL_78;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0LL) )
  {
    v24 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9435/*"NONE_DISPLAY_FREE_QUEST_MATERIAL"*/, 0LL);
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
      v32 = &StringLiteral_9437/*"NONSEELECT_STATUSUP_MAX"*/;
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
  char v271; // w26
  UILabel_o *v272; // x23
  UILabel_o *v273; // x22
  UILabel_o *v274; // x22
  __int64 *v275; // x8
  Il2CppObject *Master_object; // x22
  System_String_o *v277; // x23
  __int64 v278; // x2
  __int64 v279; // x3
  __int64 v280; // x4
  Il2CppObject *v281; // x0
  UnityEngine_Object_o *v282; // x22
  int32_t v283; // w2
  UnityEngine_Object_o *v284; // x22
  _BOOL4 v285; // w19
  UILabel_o *v286; // x22
  __int64 *v287; // x8
  UnityEngine_Object_o *v288; // x22
  System_String_o *v289; // x0
  int32_t v290; // w8
  UnityEngine_Object_o *v291; // x22
  UILabel_o *v292; // x22
  __int64 *v293; // x8
  _BOOL4 isLvExceedItemNum; // w19
  UnityEngine_Object_o *v295; // x22
  bool v296; // w0
  System_String_o *v297; // x0
  UnityEngine_Object_o *v298; // x22
  _BOOL4 isEventJoin; // w19
  UnityEngine_Object_o *v300; // x22
  const MethodInfo *v301; // x1
  int32_t v302; // w22
  struct ServantFaceIconComponent_o *v303; // x8
  bool v304; // w0
  UnityEngine_Object_o *v305; // x23
  bool v306; // w22
  bool v307; // w0
  UILabel_o *v308; // x22
  UILabel_o *v309; // x22
  struct UILabel_o *v310; // x22
  System_String_o *v311; // x1
  UnityEngine_Object_o *v312; // x22
  ServantCommandCardListComponent_o *v313; // x22
  UnityEngine_Object_o *v314; // x22
  UILabel_o *v315; // x22
  __int64 *v316; // x8
  _BOOL4 isFriendshipExceedItemNum; // w19
  UnityEngine_Object_o *v318; // x22
  bool v319; // w0
  System_String_o *v320; // x0
  UnityEngine_Object_o *v321; // x22
  _BOOL4 v322; // w19
  struct UILabel_o *v323; // x19
  System_String_o *v324; // x1
  __int64 *v325; // x8
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
  if ( (byte_4BB8345 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, item);
    sub_1C13D24(&CombineServantListViewManager_TypeInfo, v11);
    sub_1C13D24(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v12);
    sub_1C13D24(&DataManager_TypeInfo, v13);
    sub_1C13D24(&int_TypeInfo, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Add__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_string___ctor__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_1C13D24(&System_Collections_Generic_List_string__TypeInfo, v19);
    sub_1C13D24(&LocalizationManager_TypeInfo, v20);
    sub_1C13D24(&NetworkManager_TypeInfo, v21);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v22);
    sub_1C13D24(&System_Text_StringBuilder_TypeInfo, v23);
    sub_1C13D24(&string_TypeInfo, v24);
    sub_1C13D24(&TutorialFlag_TypeInfo, v25);
    sub_1C13D24(&StringLiteral_12369/*"SIZE "*/, v26);
    sub_1C13D24(&StringLiteral_10493/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/, v27);
    sub_1C13D24(&StringLiteral_9439/*"NONSELECT_LIMITUP_BASE"*/, v28);
    sub_1C13D24(&StringLiteral_6600/*"FOLLOW_REMOVE_DECIDE"*/, v29);
    sub_1C13D24(&StringLiteral_3692/*"COLLISION STAY"*/, v30);
    sub_1C13D24(&StringLiteral_8928/*"MSG_ABLED_COMMAND_CARD_EXCEED"*/, v31);
    sub_1C13D24(&StringLiteral_12367/*"SIGNUP_INPUT_OK"*/, v32);
    sub_1C13D24(&StringLiteral_2112/*"APPEND_SKILL_EXCHANGE_INFO"*/, v33);
    sub_1C13D24(&StringLiteral_9434/*"NONE"*/, v34);
    sub_1C13D24(&StringLiteral_23315/*"return"*/, v35);
    sub_1C13D24(&StringLiteral_9433/*"NOBLE_DAMAGE_VOICE_RANDOM"*/, v36);
    sub_1C13D24(&StringLiteral_2113/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/, v37);
    sub_1C13D24(&StringLiteral_10305/*"P1W"*/, v38);
    sub_1C13D24(&StringLiteral_9437/*"NONSEELECT_STATUSUP_MAX"*/, v39);
    sub_1C13D24(&StringLiteral_12631/*"SUPPORT_INFO_HELP"*/, v40);
    sub_1C13D24(&StringLiteral_8924/*"MOVE_NEXTBATTLE"*/, v41);
    sub_1C13D24(&StringLiteral_11716/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v42);
    sub_1C13D24(&StringLiteral_11693/*"SDK_INT"*/, v43);
    sub_1C13D24(&StringLiteral_9493/*"NPButton"*/, v44);
    sub_1C13D24(&StringLiteral_2114/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/, v45);
    sub_1C13D24(&StringLiteral_12366/*"SIGNUP_ENTRY_OK"*/, v46);
    sub_1C13D24(&StringLiteral_11717/*"SELECT_NO_SORTIE_FATIGURE"*/, v47);
    sub_1C13D24(&StringLiteral_9481/*"NO_CHANGE_EQUIP"*/, v48);
    sub_1C13D24(&StringLiteral_11616/*"Runtime cursors other than the default cursor need to be defined using a texture."*/, v49);
    sub_1C13D24(&StringLiteral_8923/*"MOVE"*/, v50);
    sub_1C13D24(&StringLiteral_9435/*"NONE_DISPLAY_FREE_QUEST_MATERIAL"*/, v51);
    sub_1C13D24(&StringLiteral_25332/*"zoom"*/, v52);
    sub_1C13D24(&StringLiteral_12368/*"SIZE"*/, v53);
    sub_1C13D24(&StringLiteral_8925/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/, v54);
    sub_1C13D24(&StringLiteral_9436/*"NONITEM_NOTICE"*/, v55);
    sub_1C13D24(&StringLiteral_9440/*"NONSELECT_MATERIAL"*/, v56);
    sub_1C13D24(&StringLiteral_8456/*"LOCATION_GIFT_DLG_TITLE"*/, v57);
    sub_1C13D24(&StringLiteral_6518/*"FAILED TO CONNECT TO MASTER SERVER"*/, v58);
    sub_1C13D24(&StringLiteral_3503/*"CHECK_SERVANT_FRAME"*/, v59);
    sub_1C13D24(&StringLiteral_11208/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_TITLE"*/, v60);
    sub_1C13D24(&StringLiteral_8927/*"MS"*/, v61);
    sub_1C13D24(&StringLiteral_11687/*"SCRIPT_ACTION_SKIP_CONFIRM_DETAIL"*/, v62);
    sub_1C13D24(&StringLiteral_9432/*"NOBLE_ANIM_PLAYER"*/, v63);
    sub_1C13D24(&StringLiteral_9482/*"NO_ENTRY_NAME"*/, v64);
    sub_1C13D24(&StringLiteral_1/*""*/, v65);
    sub_1C13D24(&StringLiteral_9438/*"NONSELECT_BASE_ALLMAX"*/, v66);
    sub_1C13D24(&StringLiteral_11715/*"SELECT_NO_SORTIE"*/, v67);
    sub_1C13D24(&StringLiteral_8457/*"LOCATION_REWARD_DLG_COLUMN"*/, v68);
    sub_1C13D24(&StringLiteral_9431/*"NOBLE_ANIM"*/, v69);
    byte_4BB8345 = 1;
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
    ServantFaceIconComponent__Set_39363980(
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
    ServantFaceIconComponent__Set_39363980(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0LL, 0LL);
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
  UIIconLabel__Set_39380320(subIconLabel, 36, rarity, v78, 0, 0LL, 0, 0, *(_DWORD *)(gameObject + 256), 0LL);
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
  if ( !byte_4BAEDA6 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v81);
    byte_4BAEDA6 = 1;
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
      AtlasManager__SetEventSprite(v86, (System_String_o *)StringLiteral_23315/*"return"*/, 0LL);
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
      UIIconLabel__Set_39380320(
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
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11715/*"SELECT_NO_SORTIE"*/, 0LL);
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
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10305/*"P1W"*/, 0LL);
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
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6518/*"FAILED TO CONNECT TO MASTER SERVER"*/, 0LL);
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
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8457/*"LOCATION_REWARD_DLG_COLUMN"*/, 0LL);
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
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3503/*"CHECK_SERVANT_FRAME"*/, 0LL);
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
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11616/*"Runtime cursors other than the default cursor need to be defined using a texture."*/, 0LL);
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
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9434/*"NONE"*/, 0LL);
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
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9434/*"NONE"*/, 0LL);
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
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11717/*"SELECT_NO_SORTIE_FATIGURE"*/, 0LL);
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
          v109 = &StringLiteral_12631/*"SUPPORT_INFO_HELP"*/;
          if ( isParty )
            v109 = &StringLiteral_10305/*"P1W"*/;
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
          v112 = &StringLiteral_11208/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_TITLE"*/;
          if ( v111 )
            v112 = &StringLiteral_10305/*"P1W"*/;
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
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11716/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, 0LL);
          if ( !v113 )
            goto LABEL_1053;
          UILabel__set_text(v113, (System_String_o *)gameObject, 0LL);
          gameObject = (__int64)*v332;
          if ( !*v332 )
            goto LABEL_1053;
          v115 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !byte_4BAEDA6 )
          {
            sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v114);
            byte_4BAEDA6 = 1;
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
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9435/*"NONE_DISPLAY_FREE_QUEST_MATERIAL"*/, 0LL);
                if ( !v134 )
                  goto LABEL_1053;
                UILabel__set_text(v134, (System_String_o *)gameObject, 0LL);
                if ( v9->fields.type != 5 )
                  break;
                v124 = *v332;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v125 = &StringLiteral_9437/*"NONSEELECT_STATUSUP_MAX"*/;
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
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9493/*"NPButton"*/, 0LL);
                if ( !v139 )
                  goto LABEL_1053;
                UILabel__set_text(v139, (System_String_o *)gameObject, 0LL);
                gameObject = (__int64)*v332;
                if ( !*v332 )
                  goto LABEL_1053;
                v141 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !byte_4BAEDA6 )
                {
                  sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v140);
                  byte_4BAEDA6 = 1;
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
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6600/*"FOLLOW_REMOVE_DECIDE"*/, 0LL);
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
              v137 = (System_String_o *)StringLiteral_9434/*"NONE"*/;
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
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NONSELECT_LIMITUP_BASE"*/, 0LL);
                if ( !v135 )
                  goto LABEL_1053;
                UILabel__set_text(v135, (System_String_o *)gameObject, 0LL);
              }
              if ( v9->fields.isAtkSecondUpMax || v9->fields.isHpSecondUpMax )
              {
                v136 = *v332;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NONSELECT_LIMITUP_BASE"*/, 0LL);
                if ( !v136 )
                  goto LABEL_1053;
                UILabel__set_text(v136, (System_String_o *)gameObject, 0LL);
              }
              if ( !v9->fields.isNotSelectStatusUpAtk && !v9->fields.isNotSelectStatusUpHp )
                goto LABEL_315;
              v124 = *v332;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v125 = &StringLiteral_9439/*"NONSELECT_LIMITUP_BASE"*/;
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
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NONSELECT_LIMITUP_BASE"*/, 0LL);
                  if ( !v121 )
                    goto LABEL_1053;
                  UILabel__set_text(v121, (System_String_o *)gameObject, 0LL);
                }
                if ( !v9->fields.isAtkUpMax )
                {
                  v122 = *v332;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9436/*"NONITEM_NOTICE"*/, 0LL);
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
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NONSELECT_LIMITUP_BASE"*/, 0LL);
                if ( !v123 )
                  goto LABEL_1053;
                UILabel__set_text(v123, (System_String_o *)gameObject, 0LL);
              }
              if ( v9->fields.isHpUpMax )
                goto LABEL_315;
              v124 = *v332;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v125 = &StringLiteral_9436/*"NONITEM_NOTICE"*/;
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
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9434/*"NONE"*/, 0LL);
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
            v95 = &StringLiteral_9432/*"NOBLE_ANIM_PLAYER"*/;
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
          v95 = &StringLiteral_11693/*"SDK_INT"*/;
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
        v95 = &StringLiteral_9434/*"NONE"*/;
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
          v149 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v149,
            (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v150 = LocalizationManager__Get((System_String_o *)StringLiteral_8928/*"MSG_ABLED_COMMAND_CARD_EXCEED"*/, 0LL);
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
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
          }
          else
          {
            v162 = &items->obj.klass + size;
            v149->fields._size = size + 1;
            v162[4] = (Il2CppClass *)v161;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v162 + 4), v161, v152, v153, v154, v155, v156, v157);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COLLISION STAY"*/, 0LL);
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
            v130 = LocalizationManager__Get((System_String_o *)StringLiteral_8928/*"MSG_ABLED_COMMAND_CARD_EXCEED"*/, 0LL);
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
          v149 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v149,
            (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v163 = LocalizationManager__Get((System_String_o *)StringLiteral_8928/*"MSG_ABLED_COMMAND_CARD_EXCEED"*/, 0LL);
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
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
          }
          else
          {
            v175 = &v171->obj.klass + v173;
            v149->fields._size = v173 + 1;
            v175[4] = (Il2CppClass *)v174;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v175 + 4), v174, v165, v166, v167, v168, v169, v170);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COLLISION STAY"*/, 0LL);
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
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
        }
        else
        {
          v186 = &v182->obj.klass + v184;
          v149->fields._size = v184 + 1;
          v186[4] = (Il2CppClass *)v185;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v186 + 4), v185, v176, v177, v178, v179, v180, v181);
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
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COLLISION STAY"*/, 0LL);
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
        v190 = &StringLiteral_9434/*"NONE"*/;
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
        v190 = &StringLiteral_8924/*"MOVE_NEXTBATTLE"*/;
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
    v190 = &StringLiteral_9433/*"NOBLE_DAMAGE_VOICE_RANDOM"*/;
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
    v190 = &StringLiteral_11687/*"SCRIPT_ACTION_SKIP_CONFIRM_DETAIL"*/;
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
  v200 = (System_Text_StringBuilder_o *)sub_1C13F70(System_Text_StringBuilder_TypeInfo);
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
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9440/*"NONSELECT_MATERIAL"*/, 0LL);
LABEL_473:
      v210 = (Il2CppObject *)gameObject;
      if ( enableSkillUp )
      {
        v211 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v209,
                 (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v204 == v203 )
        {
          v212 = &StringLiteral_12366/*"SIGNUP_ENTRY_OK"*/;
          if ( !v211 )
            v212 = &StringLiteral_12368/*"SIZE"*/;
        }
        else
        {
          v212 = &StringLiteral_12367/*"SIGNUP_INPUT_OK"*/;
          if ( !v211 )
            v212 = &StringLiteral_12369/*"SIZE "*/;
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
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9438/*"NONSELECT_BASE_ALLMAX"*/, 0LL);
    if ( !v215 )
      goto LABEL_1053;
    UILabel__set_text(v215, (System_String_o *)gameObject, 0LL);
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_538;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_38831432(126, 0LL) )
      goto LABEL_538;
    v216 = *v332;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v217 = &StringLiteral_11693/*"SDK_INT"*/;
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
    v217 = &StringLiteral_8925/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/;
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
  v225 = (System_Text_StringBuilder_o *)sub_1C13F70(System_Text_StringBuilder_TypeInfo);
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
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9440/*"NONSELECT_MATERIAL"*/, 0LL);
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
                 (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v228 == v229 )
        {
          v238 = &StringLiteral_12366/*"SIGNUP_ENTRY_OK"*/;
          if ( !v237 )
            v238 = &StringLiteral_12368/*"SIZE"*/;
        }
        else
        {
          v238 = &StringLiteral_12367/*"SIGNUP_INPUT_OK"*/;
          if ( !v237 )
            v238 = &StringLiteral_12369/*"SIZE "*/;
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
    sub_1C13F88(gameObject, switchInfoList);
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
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9438/*"NONSELECT_BASE_ALLMAX"*/, 0LL);
    if ( !v240 )
      goto LABEL_1053;
    UILabel__set_text(v240, (System_String_o *)gameObject, 0LL);
    if ( v9->fields.isEventJoin )
    {
      v241 = *v332;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10493/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/, 0LL);
      if ( !v241 )
        goto LABEL_1053;
      UILabel__set_text(v241, (System_String_o *)gameObject, 0LL);
    }
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_608;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_38831432(126, 0LL) )
      goto LABEL_608;
    v242 = *v332;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v243 = &StringLiteral_11693/*"SDK_INT"*/;
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
    v243 = &StringLiteral_8925/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/;
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
          gameObject = (__int64)System_String__Format((System_String_o *)StringLiteral_25332/*"zoom"*/, v251, 0LL);
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
  v255 = (System_Text_StringBuilder_o *)sub_1C13F70(System_Text_StringBuilder_TypeInfo);
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
    v271 = 0;
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
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9440/*"NONSELECT_MATERIAL"*/, 0LL);
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
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9440/*"NONSELECT_MATERIAL"*/, 0LL);
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
        if ( TutorialFlag__Get_38831432(126, 0LL) )
        {
LABEL_668:
          v325 = &StringLiteral_12368/*"SIZE"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v325 = &StringLiteral_12368/*"SIZE"*/;
          }
        }
        else
        {
LABEL_677:
          v325 = &StringLiteral_12366/*"SIGNUP_ENTRY_OK"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v325 = &StringLiteral_12366/*"SIGNUP_ENTRY_OK"*/;
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
        if ( TutorialFlag__Get_38831432(126, 0LL) )
        {
LABEL_675:
          v325 = &StringLiteral_12369/*"SIZE "*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v325 = &StringLiteral_12369/*"SIZE "*/;
          }
        }
        else
        {
LABEL_679:
          v325 = &StringLiteral_12367/*"SIGNUP_INPUT_OK"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v325 = &StringLiteral_12367/*"SIGNUP_INPUT_OK"*/;
          }
        }
      }
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v325, 0LL);
      if ( !v255 )
        goto LABEL_1053;
      System_Text_StringBuilder__AppendFormat(v255, (System_String_o *)gameObject, v270, 0LL);
      ++v267;
      v268 += 4LL;
    }
    while ( (unsigned int)v257 != v267 );
    this = v329;
    v9 = v330;
    v271 = v326;
    modeKind = v327;
    p_statusTxtLb = v328;
  }
  v272 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v255->klass->vtable._3_ToString.method)(
                 v255,
                 v255->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v272 )
    goto LABEL_1053;
  UILabel__set_text(v272, (System_String_o *)gameObject, 0LL);
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
      v273 = *v332;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10493/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/, 0LL);
      if ( !v273 )
        goto LABEL_1053;
      UILabel__set_text(v273, (System_String_o *)gameObject, 0LL);
    }
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_1057;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_38831432(126, 0LL) )
    {
      v274 = *v332;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v275 = &StringLiteral_11693/*"SDK_INT"*/;
    }
    else
    {
LABEL_1057:
      if ( v9->fields.isEventJoin )
      {
        v274 = *v332;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v275 = &StringLiteral_11717/*"SELECT_NO_SORTIE_FATIGURE"*/;
      }
      else if ( (v271 & 1) != 0 )
      {
        if ( (v260 & 1) != 0 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BAF1E5 )
          {
            sub_1C13D24(&NetworkManager_TypeInfo, switchInfoList);
            byte_4BAF1E5 = 1;
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
          v274 = *v332;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2114/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/, 0LL);
          if ( !entity )
            goto LABEL_1053;
          v277 = (System_String_o *)gameObject;
          SkillOpenItemNum = UserServantAppendPassiveSkillEntity__GetRemainingExchangeNum(entity, 0LL);
          v281 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum, v278, v279, v280);
          gameObject = (__int64)System_String__Format(v277, v281, 0LL);
          if ( !v274 )
            goto LABEL_1053;
          goto LABEL_751;
        }
        v274 = *v332;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v275 = &StringLiteral_2113/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/;
      }
      else
      {
        v274 = *v332;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v275 = &StringLiteral_2112/*"APPEND_SKILL_EXCHANGE_INFO"*/;
      }
    }
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v275, 0LL);
    if ( !v274 )
      goto LABEL_1053;
LABEL_751:
    UILabel__set_text(v274, (System_String_o *)gameObject, 0LL);
  }
LABEL_752:
  v282 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v282, 0LL, 0LL) )
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
  v283 = SHIDWORD(v336.invoker_method) <= 0 ? -1 : LODWORD(v336.invoker_method);
  UIIconLabel__Set_39380320((UIIconLabel_o *)gameObject, 33, v283, SHIDWORD(v336.methodPointer), 0, 0LL, 0, 0, 0, 0LL);
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
    v284 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v284, 0LL, 0LL) )
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
    v285 = v9->fields.isHeroineSvt;
    v286 = *v332;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v285 )
      v287 = &StringLiteral_9434/*"NONE"*/;
    else
      v287 = &StringLiteral_9437/*"NONSEELECT_STATUSUP_MAX"*/;
    v289 = (System_String_o *)*v287;
    goto LABEL_803;
  }
  if ( !v9->fields.isSameSvt && !v9->fields.isBaseSvt )
  {
    v300 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v300, 0LL, 0LL) )
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
  v288 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v288, 0LL, 0LL) )
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
      v286 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v289 = (System_String_o *)StringLiteral_8927/*"MS"*/;
LABEL_803:
      gameObject = (__int64)LocalizationManager__Get(v289, 0LL);
      if ( !v286 )
        goto LABEL_1053;
      UILabel__set_text(v286, (System_String_o *)gameObject, 0LL);
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
  v290 = v9->fields.type;
  if ( v290 != 6 )
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
    v291 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v291, 0LL, 0LL) )
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
        v292 = *v332;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v293 = &StringLiteral_9434/*"NONE"*/;
      }
      else
      {
        isEventJoin = v9->fields.isEventJoin;
        v292 = *v332;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( isEventJoin )
          v293 = &StringLiteral_11717/*"SELECT_NO_SORTIE_FATIGURE"*/;
        else
          v293 = &StringLiteral_9482/*"NO_ENTRY_NAME"*/;
      }
      v297 = (System_String_o *)*v293;
LABEL_868:
      gameObject = (__int64)LocalizationManager__Get(v297, 0LL);
      if ( !v292 )
        goto LABEL_1053;
      UILabel__set_text(v292, (System_String_o *)gameObject, 0LL);
      goto LABEL_870;
    }
    goto LABEL_870;
  }
  if ( !v9->fields.isLvMax || !v9->fields.isLimitCntMax )
  {
    v298 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v298, 0LL, 0LL) )
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
  v295 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v296 = UnityEngine_Object__op_Inequality(v295, 0LL, 0LL);
  if ( !isLvExceedItemNum )
  {
    if ( !v296 )
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
  if ( v296 )
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
    v292 = *p_statusTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v297 = (System_String_o *)StringLiteral_8924/*"MOVE_NEXTBATTLE"*/;
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
  v290 = v9->fields.type;
LABEL_875:
  if ( v290 != 10 && v290 != 7 )
    goto LABEL_937;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1053;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.subIconLabel;
  if ( !gameObject )
    goto LABEL_1053;
  UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0LL);
  v302 = v9->fields.type;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  gameObject = CombineServantListViewManager__GetSortKind(v302, v301);
  v303 = this->fields.servantFaceIcon;
  if ( !v303 )
    goto LABEL_1053;
  if ( (_DWORD)gameObject == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *, __int64, Il2CppMethodPointer))v303->klass->vtable._4_ParameterChange.method)(
      this->fields.servantFaceIcon,
      1LL,
      v303->klass->vtable._5_UpdateAlpha.methodPtr);
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
  v304 = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL);
  v305 = (UnityEngine_Object_o *)this->fields.baseButton;
  v306 = v304;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v307 = UnityEngine_Object__op_Inequality(v305, 0LL, 0LL);
  if ( v306 )
  {
    if ( !v307 )
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
      v308 = *v332;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9431/*"NOBLE_ANIM"*/, 0LL);
      if ( !v308 )
        goto LABEL_1053;
      UILabel__set_text(v308, (System_String_o *)gameObject, 0LL);
    }
    if ( v9->fields.isEventJoin )
    {
      v309 = *v332;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11717/*"SELECT_NO_SORTIE_FATIGURE"*/, 0LL);
      if ( !v309 )
        goto LABEL_1053;
      UILabel__set_text(v309, (System_String_o *)gameObject, 0LL);
    }
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_926;
    v310 = *v332;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11693/*"SDK_INT"*/, 0LL);
    if ( !v310 )
      goto LABEL_1053;
    v311 = (System_String_o *)gameObject;
    gameObject = (__int64)v310;
    goto LABEL_925;
  }
  if ( v307 )
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
    v311 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_925:
    UILabel__set_text((UILabel_o *)gameObject, v311, 0LL);
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
  v312 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v312, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1053;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1053;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v313 = this->fields.svtCommandCardList;
    gameObject = CombineServantListViewItem__get_UserSvtId(v9, 0LL);
    if ( !v313 )
      goto LABEL_1053;
    ServantCommandCardListComponent__Set(v313, gameObject, 1, 1, 0LL);
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
    v314 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v314, 0LL, 0LL) )
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
      v315 = *v332;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v316 = &StringLiteral_9434/*"NONE"*/;
    }
    else
    {
      v322 = v9->fields.isEventJoin;
      v315 = *v332;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v322 )
        v316 = &StringLiteral_11717/*"SELECT_NO_SORTIE_FATIGURE"*/;
      else
        v316 = &StringLiteral_9481/*"NO_CHANGE_EQUIP"*/;
    }
    v320 = (System_String_o *)*v316;
    goto LABEL_988;
  }
  if ( !v9->fields.isFriendshipRankMax )
  {
    v321 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v321, 0LL, 0LL) )
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
  v318 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v319 = UnityEngine_Object__op_Inequality(v318, 0LL, 0LL);
  if ( !isFriendshipExceedItemNum )
  {
    if ( !v319 )
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
  if ( !v319 )
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
  v315 = *p_statusTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v320 = (System_String_o *)StringLiteral_8923/*"MOVE"*/;
LABEL_988:
  gameObject = (__int64)LocalizationManager__Get(v320, 0LL);
  if ( !v315 )
    goto LABEL_1053;
  UILabel__set_text(v315, (System_String_o *)gameObject, 0LL);
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
      v323 = *v332;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11717/*"SELECT_NO_SORTIE_FATIGURE"*/, 0LL);
      if ( !v323 )
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
              v324 = (System_String_o *)StringLiteral_1/*""*/;
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
        v323 = *v332;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8456/*"LOCATION_GIFT_DLG_TITLE"*/, 0LL);
        if ( v323 )
        {
LABEL_1031:
          v324 = (System_String_o *)gameObject;
          gameObject = (__int64)v323;
LABEL_1032:
          UILabel__set_text((UILabel_o *)gameObject, v324, 0LL);
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
    sub_1C13F80(gameObject, switchInfoList);
  }
  if ( !v9->fields.isHeroineSvt )
    goto LABEL_999;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_38831432(126, 0LL) )
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
      switchInfoList = (UIWidget_array *)LocalizationManager__Get((System_String_o *)StringLiteral_8456/*"LOCATION_GIFT_DLG_TITLE"*/, 0LL);
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

  if ( (byte_4BB8347 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, item);
    byte_4BB8347 = 1;
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
    sub_1C13F80(v7, v6);
  }
}