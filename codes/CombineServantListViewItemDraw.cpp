void __fastcall CombineServantListViewItemDraw___ctor(CombineServantListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.fortificationInfoRootObjOffsetY = 9.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewItemDraw__SetInput(
        CombineServantListViewItemDraw_o *this,
        CombineServantListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  _BOOL4 v4; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  _BOOL4 IsSelect; // w0
  unsigned int type; // w8
  _BOOL4 v19; // w23
  bool CanNotBaseSelect; // w0
  bool v21; // w22
  _BOOL4 v22; // w25
  int v23; // w24
  UnityEngine_Object_o *baseButton; // x23
  bool v25; // w0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  UnityEngine_Component_o *maskSprite; // x0
  __int64 v29; // x1
  UILabel_o *v30; // x21
  LocalizationManager_c *v31; // x0
  UILabel_o *maskLabel; // x21
  uint32_t v33; // w8
  UnityEngine_Object_o *v34; // x22
  uint32_t cctor_finished; // w8
  int v36; // w22
  int32_t v37; // w8
  __int64 *v38; // x8
  int32_t atkBase; // w8
  UILabel_o *v40; // x21
  UILabel_o *v41; // x21

  v4 = isSelectEnable;
  if ( (byte_4B19DB0 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, isSelectEnable);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_9393/*"NONSELECT_UNDER_STATUS_MAX"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_9388/*"NONSELECT_MATERIAL"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_9391/*"NONSELECT_NPUP_BASE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_9389/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v15, v16);
    byte_4B19DB0 = 1;
  }
  if ( item )
  {
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
    type = item->fields.type;
    v19 = IsSelect;
    if ( type > 0xC )
    {
      v21 = 0;
    }
    else
    {
      if ( ((1 << type) & 0x1FDD) != 0 )
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL);
      else
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotSelect(item, 0LL);
      v21 = CanNotBaseSelect;
    }
    v22 = !CombineServantListViewItem__get_IsOrganization(item, 0LL);
    v23 = !v19;
  }
  else
  {
    v21 = 0;
    v23 = 1;
    v22 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  v25 = UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
  if ( !v21 )
  {
    if ( v25 )
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
    v34 = (UnityEngine_Object_o *)this->fields.baseButton;
    cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
    if ( item->fields.isMaxSelect )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
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
        v36 = 1;
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
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
    v36 = 0;
LABEL_47:
    v37 = item->fields.type;
    if ( v37 == 5 )
    {
      if ( !(v36 & 1 | item->fields.isMaxNextLv) )
        goto LABEL_80;
    }
    else if ( v37 == 1 )
    {
      if ( ((v23 & ~(v22 || v4) | v36) & 1) == 0 )
        goto LABEL_80;
    }
    else if ( !v36 )
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
    v31 = LocalizationManager_TypeInfo;
    v33 = LocalizationManager_TypeInfo->_2.cctor_finished;
    if ( item->fields.type == 5 )
      goto LABEL_57;
    goto LABEL_75;
  }
  if ( !v25 )
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
          v40 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9393/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v40 )
            goto LABEL_92;
          UILabel__set_text(v40, (System_String_o *)maskSprite, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectSecondStatusUpHp )
          goto LABEL_80;
      }
      else
      {
        if ( atkBase >= 1 && item->fields.isNotSelectStatusUpAtk )
        {
          v41 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9393/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v41 )
            goto LABEL_92;
          UILabel__set_text(v41, (System_String_o *)maskSprite, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectStatusUpHp )
          goto LABEL_80;
      }
      maskLabel = this->fields.maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
      v38 = &StringLiteral_9393/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_78:
      maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v38, 0LL);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)maskSprite, 0LL);
        goto LABEL_80;
      }
LABEL_92:
      sub_1BCAA3C(maskSprite, v26);
    }
    maskLabel = this->fields.maskLabel;
    v31 = LocalizationManager_TypeInfo;
    v33 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_75:
    if ( !v33 )
      j_il2cpp_runtime_class_init_0(v31, v26);
    v38 = &StringLiteral_9388/*"NONSELECT_MATERIAL"*/;
    goto LABEL_78;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0LL) )
  {
    v30 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9389/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
    if ( !v30 )
      goto LABEL_92;
    UILabel__set_text(v30, (System_String_o *)maskSprite, 0LL);
    if ( item->fields.type == 5 )
    {
      v31 = LocalizationManager_TypeInfo;
      maskLabel = this->fields.maskLabel;
      v33 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_57:
      if ( !v33 )
        j_il2cpp_runtime_class_init_0(v31, v26);
      v38 = &StringLiteral_9391/*"NONSELECT_NPUP_BASE"*/;
      goto LABEL_78;
    }
  }
LABEL_80:
  CombineServantListViewItemDraw__SetSelectDisp(this, item, v27);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x1
  __int64 v128; // x2
  UnityEngine_Object_o *svtCommandCardList; // x23
  UIWidget_array *switchInfoList; // x1
  __int64 gameObject; // x0
  int32_t type; // w19
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  IconLabelInfo_o *iconLabelInfo1; // x2
  UIIconLabel_o *subIconLabel; // x23
  int32_t rarity; // w24
  int32_t v137; // w25
  UILabel_o **p_statusTxtLb; // x28
  struct UILabel_o **p_maskLabel; // x20
  __int64 v140; // x1
  __int64 v141; // x2
  UnityEngine_GameObject_o *v142; // x23
  UnityEngine_GameObject_o *v143; // x23
  __int64 v144; // x1
  UnityEngine_Object_o *pushImg; // x23
  __int64 v146; // x1
  UnityEngine_Object_o *materialTdSprite; // x23
  UISprite_o *v148; // x23
  const MethodInfo *v149; // x1
  int32_t v150; // w23
  int32_t v151; // w8
  bool CanNotBaseSelect; // w0
  __int64 v153; // x1
  UnityEngine_Object_o *v154; // x23
  bool v155; // w22
  bool v156; // w0
  struct UILabel_o *v157; // x22
  __int64 *v158; // x8
  int32_t v159; // w2
  char v160; // w20
  __int64 v161; // x1
  UILabel_o *v162; // x23
  __int64 v163; // x1
  UILabel_o *v164; // x23
  __int64 v165; // x1
  UILabel_o *v166; // x23
  const MethodInfo *v167; // x2
  __int64 v168; // x1
  UILabel_o *v169; // x23
  __int64 v170; // x1
  UILabel_o *v171; // x23
  __int64 v172; // x1
  UILabel_o *v173; // x23
  __int64 v174; // x1
  UILabel_o *v175; // x23
  __int64 v176; // x1
  UILabel_o *v177; // x23
  __int64 v178; // x1
  UILabel_o *v179; // x23
  _BOOL4 isParty; // w19
  __int64 *v181; // x8
  __int64 v182; // x1
  UILabel_o *v183; // x23
  _BOOL4 v184; // w19
  __int64 *v185; // x8
  __int64 v186; // x1
  UILabel_o *v187; // x23
  __int64 v188; // x1
  __int64 v189; // x2
  UnityEngine_GameObject_o *v190; // x23
  bool CanNotSelect; // w0
  __int64 v192; // x1
  UnityEngine_Object_o *baseButton; // x24
  bool v194; // w23
  bool v195; // w0
  int v196; // w8
  UILabel_o *v197; // x22
  UILabel_o *v198; // x22
  UILabel_o *v199; // x22
  UILabel_o *v200; // x22
  __int64 *v201; // x8
  UnityEngine_Object_o *v202; // x23
  uint32_t cctor_finished; // w8
  int v204; // w19
  __int64 v205; // x2
  __int64 v206; // x3
  __int64 v207; // x2
  __int64 v208; // x3
  __int64 v209; // x1
  UILabel_o *v210; // x22
  System_String_o *v211; // x23
  Il2CppObject *v212; // x0
  __int64 v213; // x1
  UILabel_o *v214; // x22
  __int64 v215; // x1
  UILabel_o *v216; // x23
  UILabel_o *v217; // x22
  UILabel_o *v218; // x22
  UILabel_o *v219; // x22
  System_String_o *v220; // x0
  int32_t v221; // w8
  UILabel_o *v222; // x22
  __int64 v223; // x1
  __int64 v224; // x2
  UnityEngine_GameObject_o *v225; // x22
  System_String_o *v226; // x1
  __int64 v227; // x1
  UILabel_o *fortificationAppointmentLabel; // x22
  float v229; // s0
  float v230; // s2
  float fortificationInfoRootObjOffsetY; // s10
  float v232; // s8
  float v233; // s9
  System_Collections_Generic_List_object__o *v234; // x22
  __int64 v235; // x1
  System_String_o *v236; // x23
  Il2CppObject *v237; // x0
  int64_t v238; // x2
  int32_t v239; // w3
  System_String_o *v240; // x4
  BattleSetupInfo_o *v241; // x5
  FollowerInfo_o *v242; // x6
  PartyListViewItem_o *v243; // x7
  struct System_Object_array *items; // x8
  _QWORD *v245; // x9
  __int64 size; // x10
  int64_t v247; // x1
  Il2CppClass **v248; // x0
  __int64 v249; // x1
  System_String_o *v250; // x23
  Il2CppObject *v251; // x0
  int64_t v252; // x2
  int32_t v253; // w3
  System_String_o *v254; // x4
  BattleSetupInfo_o *v255; // x5
  FollowerInfo_o *v256; // x6
  PartyListViewItem_o *v257; // x7
  struct System_Object_array *v258; // x8
  _QWORD *v259; // x9
  __int64 v260; // x10
  int64_t v261; // x1
  Il2CppClass **v262; // x0
  int64_t v263; // x2
  int32_t v264; // w3
  System_String_o *v265; // x4
  BattleSetupInfo_o *v266; // x5
  FollowerInfo_o *v267; // x6
  PartyListViewItem_o *v268; // x7
  struct System_Object_array *v269; // x8
  _QWORD *v270; // x9
  __int64 v271; // x10
  int64_t v272; // x1
  Il2CppClass **v273; // x0
  __int64 v274; // x1
  UnityEngine_Object_o *v275; // x22
  __int64 v276; // x1
  _BOOL4 isHeroineSvt; // w19
  UILabel_o *v278; // x22
  __int64 *v279; // x8
  bool v280; // w0
  __int64 v281; // x1
  UnityEngine_Object_o *v282; // x23
  bool v283; // w22
  bool v284; // w0
  System_String_o *v285; // x1
  _BOOL4 isSealCombineLimit; // w19
  UnityEngine_Object_o *v287; // x22
  int32_t v288; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  __int64 v290; // x1
  __int64 v291; // x2
  __int64 v292; // x3
  System_Text_StringBuilder_o *v293; // x22
  SkillInfo_array *v294; // x8
  __int64 v295; // x9
  unsigned __int64 v296; // x19
  __int64 v297; // x20
  __int64 v298; // x21
  SkillInfo_o *v299; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v302; // w25
  Il2CppObject *v303; // x24
  __int64 v304; // x1
  bool v305; // w25
  __int64 *v306; // x8
  UILabel_o *skillLvLabel; // x23
  __int64 v308; // x1
  UnityEngine_Object_o *v309; // x22
  __int64 v310; // x1
  UILabel_o *v311; // x22
  UILabel_o *v312; // x22
  __int64 *v313; // x8
  _BOOL4 isSkillUpItemNum; // w19
  UnityEngine_Object_o *v315; // x22
  bool v316; // w0
  __int64 v317; // x1
  UnityEngine_Object_o *v318; // x22
  SvtUseSkillData_o *AppendSkillData; // x0
  System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v321; // x24
  __int64 v322; // x1
  __int64 v323; // x2
  __int64 v324; // x3
  System_Text_StringBuilder_o *v325; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v327; // x9
  unsigned __int64 v328; // x19
  __int64 v329; // x20
  __int64 v330; // x21
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v332; // x0
  int32_t v333; // w26
  int32_t v334; // w0
  int v335; // t1
  Il2CppObject *v336; // x25
  __int64 v337; // x1
  bool v338; // w26
  __int64 *v339; // x8
  UILabel_o *v340; // x24
  __int64 v341; // x1
  UILabel_o *v342; // x22
  UILabel_o *v343; // x22
  UILabel_o *v344; // x22
  __int64 *v345; // x8
  __int64 v346; // x1
  UnityEngine_Object_o *v347; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  Il2CppObject *v351; // x0
  struct ItemIconComponent_o *coinIcon; // x22
  int32_t v353; // w8
  SvtUseSkillData_o *v354; // x23
  __int64 v355; // x1
  __int64 v356; // x2
  __int64 v357; // x3
  System_Text_StringBuilder_o *v358; // x22
  struct System_Int32_array *v359; // x8
  __int64 v360; // x19
  char v361; // w27
  char v362; // w26
  char v363; // w25
  unsigned __int64 v364; // x21
  struct System_Int32_array *v365; // x8
  char *v366; // x0
  int v367; // t1
  int32_t v368; // w9
  int v369; // w8
  unsigned __int64 v370; // x29
  __int64 v371; // x26
  struct System_Int32_array *v372; // x8
  Il2CppObject *v373; // x24
  __int64 *v374; // x8
  char v375; // w26
  UILabel_o *v376; // x23
  __int64 v377; // x1
  UILabel_o *v378; // x22
  UILabel_o *v379; // x22
  __int64 *v380; // x8
  __int64 v381; // x1
  Il2CppObject *Master_object; // x22
  System_String_o *v383; // x23
  Il2CppObject *v384; // x0
  __int64 v385; // x1
  UnityEngine_Object_o *v386; // x22
  int32_t v387; // w2
  __int64 v388; // x1
  UnityEngine_Object_o *v389; // x22
  __int64 v390; // x1
  _BOOL4 v391; // w19
  UILabel_o *v392; // x22
  __int64 *v393; // x8
  UnityEngine_Object_o *v394; // x22
  __int64 v395; // x1
  System_String_o *v396; // x0
  int32_t v397; // w8
  __int64 v398; // x1
  UnityEngine_Object_o *v399; // x22
  __int64 v400; // x1
  UILabel_o *v401; // x22
  __int64 *v402; // x8
  _BOOL4 isLvExceedItemNum; // w19
  UnityEngine_Object_o *v404; // x22
  bool v405; // w0
  __int64 v406; // x1
  System_String_o *v407; // x0
  UnityEngine_Object_o *v408; // x22
  _BOOL4 isEventJoin; // w19
  UnityEngine_Object_o *v410; // x22
  const MethodInfo *v411; // x1
  int32_t v412; // w22
  struct ServantFaceIconComponent_o *v413; // x8
  bool v414; // w0
  __int64 v415; // x1
  UnityEngine_Object_o *v416; // x23
  bool v417; // w22
  bool v418; // w0
  UILabel_o *v419; // x22
  UILabel_o *v420; // x22
  struct UILabel_o *v421; // x22
  System_String_o *v422; // x1
  UnityEngine_Object_o *v423; // x22
  ServantCommandCardListComponent_o *v424; // x22
  __int64 v425; // x1
  UnityEngine_Object_o *v426; // x22
  __int64 v427; // x1
  UILabel_o *v428; // x22
  __int64 *v429; // x8
  _BOOL4 isFriendshipExceedItemNum; // w19
  UnityEngine_Object_o *v431; // x22
  bool v432; // w0
  __int64 v433; // x1
  System_String_o *v434; // x0
  UnityEngine_Object_o *v435; // x22
  _BOOL4 v436; // w19
  __int64 v437; // x1
  __int64 v438; // x1
  struct UILabel_o *v439; // x19
  __int64 v440; // x1
  System_String_o *v441; // x1
  char v442; // [xsp+10h] [xbp-D0h]
  int32_t v443; // [xsp+14h] [xbp-CCh]
  struct UILabel_o **v444; // [xsp+18h] [xbp-C8h]
  CombineServantListViewItemDraw_o *v445; // [xsp+20h] [xbp-C0h]
  CombineServantListViewItem_o *v446; // [xsp+28h] [xbp-B8h]
  struct UISprite_o **p_maskSprite; // [xsp+30h] [xbp-B0h]
  struct UILabel_o **v448; // [xsp+38h] [xbp-A8h]
  int32_t SkillOpenItemNum; // [xsp+44h] [xbp-9Ch] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+48h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-90h] BYREF
  MethodInfo v452; // [xsp+58h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v453; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v454; // 0:s0.4,4:s1.4,8:s2.4

  v9 = item;
  if ( (byte_4B19DAF & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v27, v28);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v33, v34);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v35, v36);
    sub_1BCA7E0(&string_TypeInfo, v37, v38);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v39, v40);
    sub_1BCA7E0(&StringLiteral_12309/*"SKILL_LVDISP_TXT"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_10441/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_9393/*"NONSELECT_UNDER_STATUS_MAX"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_6565/*"FORTIFICATION_APPOINTMENT"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_3680/*"COMBINE_CAN_STATUS_UP_INFO"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_8884/*"MSG_CAMPAIGN_COMBINE_EXP"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_12307/*"SKILL_LVDISP_ENABLE_TXT"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_2104/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_9388/*"NONSELECT_MATERIAL"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_9387/*"NONSELECT_LIMITUP_BASE"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_2105/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_10256/*"PARTY_MEMBER_TXT"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_9391/*"NONSELECT_NPUP_BASE"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_12565/*"SUPPORT_MEMBER"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_8880/*"MSG_ABLED_LIMITUP"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_11657/*"SELECT_PUSH"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_11634/*"SELECT_CANNOT"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_9447/*"NPUP_BASE"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_2106/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_12306/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_9435/*"NO_SELECT_FRIENDSHIP_EXCEED"*/, v85, v86);
    sub_1BCA7E0(&StringLiteral_11557/*"SAME_SERVANT"*/, v87, v88);
    sub_1BCA7E0(&StringLiteral_8879/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, v89, v90);
    sub_1BCA7E0(&StringLiteral_9389/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v91, v92);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v93, v94);
    sub_1BCA7E0(&StringLiteral_12308/*"SKILL_LVDISP_SINGLE_TXT"*/, v95, v96);
    sub_1BCA7E0(&StringLiteral_8881/*"MSG_ABLED_SKILLUP"*/, v97, v98);
    sub_1BCA7E0(&StringLiteral_9390/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, v99, v100);
    sub_1BCA7E0(&StringLiteral_9394/*"NONSKILL_TXT"*/, v101, v102);
    sub_1BCA7E0(&StringLiteral_8416/*"LOCKMODE_SELECTED_SERVANT"*/, v103, v104);
    sub_1BCA7E0(&StringLiteral_6483/*"FAVORITE_SERVANT"*/, v105, v106);
    sub_1BCA7E0(&StringLiteral_3491/*"CHOICE_SERVANT"*/, v107, v108);
    sub_1BCA7E0(&StringLiteral_11152/*"RECOMMEND_SUPPORT_MEMBER"*/, v109, v110);
    sub_1BCA7E0(&StringLiteral_8883/*"MSG_ABLED_TDUP"*/, v111, v112);
    sub_1BCA7E0(&StringLiteral_11628/*"SEAL_COMBINE_LIMIT_THIRD"*/, v113, v114);
    sub_1BCA7E0(&StringLiteral_9386/*"NONSELECT_BASE_ALLMAX"*/, v115, v116);
    sub_1BCA7E0(&StringLiteral_9436/*"NO_SELECT_LVEXCEED"*/, v117, v118);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v119, v120);
    sub_1BCA7E0(&StringLiteral_9392/*"NONSELECT_SKILLUP_BASE"*/, v121, v122);
    sub_1BCA7E0(&StringLiteral_11656/*"SELECT_PROTECTED_EVENT_SVT"*/, v123, v124);
    sub_1BCA7E0(&StringLiteral_8417/*"LOCK_SERVANT"*/, v125, v126);
    sub_1BCA7E0(&StringLiteral_9385/*"NONSEELECT_STATUSUP_MAX"*/, v127, v128);
    byte_4B19DAF = 1;
  }
  v452.invoker_method = 0LL;
  skillInfoList = 0LL;
  v452.methodPointer = 0LL;
  entity = 0LL;
  if ( !v9 || !mode )
    return;
  svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Implicit(svtCommandCardList, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
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
      goto LABEL_1049;
    ServantFaceIconComponent__Set_38931252(
      servantFaceIcon,
      (UserServantEntity_o *)gameObject,
      iconLabelInfo1,
      v9->fields.iconLabelInfo2,
      0LL);
    subIconLabel = this->fields.subIconLabel;
    rarity = v9->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_1049;
    ServantFaceIconComponent__Set_38931252(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0LL, 0LL);
    gameObject = (__int64)v9->fields.iconLabelInfo2;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = IconLabelInfo__IsClear((IconLabelInfo_o *)gameObject, 0LL);
    subIconLabel = this->fields.subIconLabel;
    if ( (gameObject & 1) == 0 )
    {
      if ( !subIconLabel )
        goto LABEL_1049;
      UIIconLabel__Set(this->fields.subIconLabel, v9->fields.iconLabelInfo2, 0LL);
      goto LABEL_22;
    }
    rarity = v9->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
  }
  v137 = *(_DWORD *)(gameObject + 296);
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
  if ( !gameObject || !subIconLabel )
    goto LABEL_1049;
  UIIconLabel__Set_38947284(subIconLabel, 36, rarity, v137, 0, 0LL, 0, 0, *(_DWORD *)(gameObject + 256), 0LL);
LABEL_22:
  CombineServantListViewItem__GetNpInfo(
    v9,
    (int32_t *)&v452.invoker_method + 1,
    (int32_t *)&v452.invoker_method,
    (int32_t *)&v452.methodPointer + 1,
    0LL);
  gameObject = (__int64)this->fields.lockImg;
  if ( !gameObject )
    goto LABEL_1049;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1049;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_statusTxtLb = &this->fields.statusTxtLb;
  gameObject = (__int64)this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1049;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1049;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.maskSprite;
  p_maskSprite = &this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_1049;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1049;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_maskLabel = &this->fields.maskLabel;
  gameObject = (__int64)this->fields.maskLabel;
  if ( !gameObject )
    goto LABEL_1049;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)*p_maskLabel;
  if ( !*p_maskLabel )
    goto LABEL_1049;
  v142 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v140, v141);
    byte_4B109C6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v142, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1049;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1049;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.partyIcon;
  if ( !gameObject )
    goto LABEL_1049;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.removeImg;
  if ( !gameObject )
    goto LABEL_1049;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1049;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1049;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1049;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.choiceImg;
  if ( !gameObject )
    goto LABEL_1049;
  v143 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = CombineServantListViewItem__get_IsDispChoice(v9, 0LL);
  if ( !v143 )
    goto LABEL_1049;
  UnityEngine_GameObject__SetActive(v143, gameObject & 1, 0LL);
  gameObject = (__int64)this->fields.switchInfoComp;
  if ( !gameObject )
    goto LABEL_1049;
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.fortificationRootObj;
  if ( !gameObject )
    goto LABEL_1049;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.fortificationNameLabel;
  if ( !gameObject )
    goto LABEL_1049;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)this->fields.fortificationDetailNameLabel;
  if ( !gameObject )
    goto LABEL_1049;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)this->fields.fortificationAppointmentLabel;
  if ( !gameObject )
    goto LABEL_1049;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v144);
  if ( UnityEngine_Object__op_Inequality(pushImg, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.pushImg;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9->fields.isPush, 0LL);
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_1049;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)gameObject, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v146);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9->fields.isMaterialTdSvt, 0LL);
    if ( v9->fields.isMaterialTdSvt )
    {
      v148 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, switchInfoList);
      AtlasManager__SetEventSprite(v148, (System_String_o *)StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, 0LL);
      v150 = v9->fields.type;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v149);
      if ( CombineServantListViewManager__GetSortKind(v150, v149) == 1 )
      {
        gameObject = (__int64)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_1049;
        v453.fields.x = 0.65;
        v453.fields.y = 1.0;
        v453.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v453, 0LL);
      }
    }
  }
  v151 = v9->fields.type;
  v448 = &this->fields.maskLabel;
  switch ( v151 )
  {
    case 5:
      gameObject = (__int64)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_1049;
      v159 = SHIDWORD(v452.invoker_method) <= 0 ? -1 : LODWORD(v452.invoker_method);
      UIIconLabel__Set_38947284(
        (UIIconLabel_o *)gameObject,
        33,
        v159,
        SHIDWORD(v452.methodPointer),
        0,
        0LL,
        0,
        0,
        0,
        0LL);
      gameObject = (__int64)this->fields.npLvInfo;
      if ( !gameObject )
        goto LABEL_1049;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      goto LABEL_100;
    case 1:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1049;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        v9->fields.currentLimitCnt,
        v9->fields.maxLimitCnt,
        0LL);
      if ( CombineServantListViewItem__get_IsProtected(v9, 0LL) && v9->fields.type != 5 )
      {
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1049;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1049;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v216 = *v448;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v215);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11656/*"SELECT_PROTECTED_EVENT_SVT"*/, 0LL);
        if ( !v216 )
          goto LABEL_1049;
        UILabel__set_text(v216, (System_String_o *)gameObject, 0LL);
        v160 = 1;
LABEL_101:
        if ( v9->fields.isParty )
        {
          gameObject = (__int64)this->fields.partyIcon;
          if ( !gameObject )
            goto LABEL_1049;
          FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1049;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1049;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v162 = *v448;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v161);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10256/*"PARTY_MEMBER_TXT"*/, 0LL);
          if ( !v162 )
            goto LABEL_1049;
          UILabel__set_text(v162, (System_String_o *)gameObject, 0LL);
          v160 = 1;
        }
        if ( v9->fields.isFavorite )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1049;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1049;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v164 = *v448;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v163);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6483/*"FAVORITE_SERVANT"*/, 0LL);
          if ( !v164 )
            goto LABEL_1049;
          UILabel__set_text(v164, (System_String_o *)gameObject, 0LL);
          v160 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
        {
          gameObject = (__int64)this->fields.lockImg;
          if ( !gameObject )
            goto LABEL_1049;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1049;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1049;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1049;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v166 = *v448;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v165);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8417/*"LOCK_SERVANT"*/, 0LL);
          if ( !v166 )
            goto LABEL_1049;
          UILabel__set_text(v166, (System_String_o *)gameObject, 0LL);
          v160 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispChoice(v9, 0LL) )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1049;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1049;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v169 = *v448;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v168);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3491/*"CHOICE_SERVANT"*/, 0LL);
          if ( !v169 )
            goto LABEL_1049;
          UILabel__set_text(v169, (System_String_o *)gameObject, 0LL);
          v160 = 1;
        }
        if ( v9->fields.isLimitCntTarget )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1049;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1049;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v171 = *v448;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v170);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11557/*"SAME_SERVANT"*/, 0LL);
          if ( !v171 )
            goto LABEL_1049;
          UILabel__set_text(v171, (System_String_o *)gameObject, 0LL);
          v160 = 1;
        }
        if ( v9->fields.isHeroineSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1049;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1049;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v173 = *v448;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v172);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9388/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v173 )
            goto LABEL_1049;
          UILabel__set_text(v173, (System_String_o *)gameObject, 0LL);
          v160 = 1;
        }
        if ( v9->fields.isStatusUpSvt && !v9->fields.isCanStUp )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1049;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1049;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v175 = *v448;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v174);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9388/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v175 )
            goto LABEL_1049;
          UILabel__set_text(v175, (System_String_o *)gameObject, 0LL);
          v160 = 1;
        }
        if ( v9->fields.isEventJoin )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1049;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1049;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v177 = *v448;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v176);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
          if ( !v177 )
            goto LABEL_1049;
          UILabel__set_text(v177, (System_String_o *)gameObject, 0LL);
          v160 = 1;
        }
        if ( v9->fields.isUseSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1049;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1049;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v179 = *v448;
          isParty = v9->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v178);
          v181 = &StringLiteral_12565/*"SUPPORT_MEMBER"*/;
          if ( isParty )
            v181 = &StringLiteral_10256/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v181, 0LL);
          if ( !v179 )
            goto LABEL_1049;
          UILabel__set_text(v179, (System_String_o *)gameObject, 0LL);
          v160 = 1;
        }
        if ( v9->fields.isUseRecommendSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1049;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1049;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v183 = *v448;
          v184 = v9->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v182);
          v185 = &StringLiteral_11152/*"RECOMMEND_SUPPORT_MEMBER"*/;
          if ( v184 )
            v185 = &StringLiteral_10256/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v185, 0LL);
          if ( !v183 )
            goto LABEL_1049;
          UILabel__set_text(v183, (System_String_o *)gameObject, 0LL);
          if ( !v9->fields.isParty )
          {
            gameObject = (__int64)*v448;
            if ( !*v448 )
              goto LABEL_1049;
            UILabel__SetCondensedScale((UILabel_o *)gameObject, 106, 0LL);
          }
          v160 = 1;
        }
        if ( v9->fields.isPush )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1049;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1049;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v187 = *v448;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v186);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11657/*"SELECT_PUSH"*/, 0LL);
          if ( !v187 )
            goto LABEL_1049;
          UILabel__set_text(v187, (System_String_o *)gameObject, 0LL);
          gameObject = (__int64)*v448;
          if ( !*v448 )
            goto LABEL_1049;
          v190 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !byte_4B109C6 )
          {
            sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v188, v189);
            byte_4B109C6 = 1;
          }
          GameObjectExtensions__SetLocalScale(v190, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          v160 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, v9, v167);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(v9, 0LL);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        v194 = CanNotSelect;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v192);
        v195 = UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
        if ( v194 )
        {
          if ( !v195 )
            break;
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1049;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1049;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1049;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1049;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          if ( v9->fields.isMaxNextLv || v9->fields.isBaseLvMax )
          {
            if ( !v9->fields.isCanStUp )
            {
              if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(v9, 0LL) )
              {
                v217 = *v448;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9389/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
                if ( !v217 )
                  goto LABEL_1049;
                UILabel__set_text(v217, (System_String_o *)gameObject, 0LL);
                if ( v9->fields.type != 5 )
                  break;
                v200 = *v448;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
                v201 = &StringLiteral_9391/*"NONSELECT_NPUP_BASE"*/;
LABEL_312:
                v220 = (System_String_o *)*v201;
LABEL_313:
                gameObject = (__int64)LocalizationManager__Get(v220, 0LL);
                if ( !v200 )
                  goto LABEL_1049;
                UILabel__set_text(v200, (System_String_o *)gameObject, 0LL);
              }
LABEL_315:
              v221 = v9->fields.type;
              if ( v221 != 5 )
                goto LABEL_398;
              if ( v9->fields.isBaseSvt )
              {
                v222 = *v448;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9447/*"NPUP_BASE"*/, 0LL);
                if ( !v222 )
                  goto LABEL_1049;
                UILabel__set_text(v222, (System_String_o *)gameObject, 0LL);
                gameObject = (__int64)*v448;
                if ( !*v448 )
                  goto LABEL_1049;
                v225 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !byte_4B109C6 )
                {
                  sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v223, v224);
                  byte_4B109C6 = 1;
                }
                GameObjectExtensions__SetLocalScale(v225, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
              }
              break;
            }
          }
          else if ( !v9->fields.isCanStUp )
          {
            if ( v9->fields.isFortification )
            {
              gameObject = (__int64)*v448;
              if ( !*v448 )
                goto LABEL_1049;
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1049;
              gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_1049;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1049;
              UILabel__set_text((UILabel_o *)gameObject, v9->fields.fortificationName, 0LL);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1049;
              UILabel__set_text((UILabel_o *)gameObject, v9->fields.fortificationDetailName, 0LL);
              fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v227);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6565/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
              if ( !fortificationAppointmentLabel )
                goto LABEL_1049;
              UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)gameObject, 0LL);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1049;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1049;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL);
              if ( v9->fields.type != 5 )
                break;
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1049;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_1049;
              *(UnityEngine_Vector3_o *)&v229 = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)gameObject,
                                                  0LL);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1049;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              v232 = v229;
              v233 = v230;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_1049;
              v454.fields.x = v232;
              v454.fields.y = fortificationInfoRootObjOffsetY;
              v454.fields.z = v233;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v454, 0LL);
              goto LABEL_315;
            }
            if ( (v160 & 1) == 0 )
            {
              v200 = *v448;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
              v220 = (System_String_o *)StringLiteral_9388/*"NONSELECT_MATERIAL"*/;
              goto LABEL_313;
            }
            goto LABEL_315;
          }
          if ( v9->fields.isStatusUpSvt )
          {
            v196 = v9->fields.rarity;
            if ( v196 <= 3 )
            {
              if ( v9->fields.isAtkUpMax || v9->fields.isHpUpMax )
              {
                v218 = *v448;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9393/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v218 )
                  goto LABEL_1049;
                UILabel__set_text(v218, (System_String_o *)gameObject, 0LL);
              }
              if ( v9->fields.isAtkSecondUpMax || v9->fields.isHpSecondUpMax )
              {
                v219 = *v448;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9393/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v219 )
                  goto LABEL_1049;
                UILabel__set_text(v219, (System_String_o *)gameObject, 0LL);
              }
              if ( !v9->fields.isNotSelectStatusUpAtk && !v9->fields.isNotSelectStatusUpHp )
                goto LABEL_315;
              v200 = *v448;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
              v201 = &StringLiteral_9393/*"NONSELECT_UNDER_STATUS_MAX"*/;
            }
            else
            {
              if ( v196 != 4 )
                goto LABEL_315;
              if ( v9->fields.atkBase >= 1 )
              {
                if ( v9->fields.isAtkSecondUpMax || v9->fields.isNotSelectSecondStatusUpAtk )
                {
                  v197 = *v448;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9393/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                  if ( !v197 )
                    goto LABEL_1049;
                  UILabel__set_text(v197, (System_String_o *)gameObject, 0LL);
                }
                if ( !v9->fields.isAtkUpMax )
                {
                  v198 = *v448;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9390/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0LL);
                  if ( !v198 )
                    goto LABEL_1049;
                  UILabel__set_text(v198, (System_String_o *)gameObject, 0LL);
                }
              }
              if ( v9->fields.hpBase < 1 )
                goto LABEL_315;
              if ( v9->fields.isHpSecondUpMax || v9->fields.isNotSelectSecondStatusUpHp )
              {
                v199 = *v448;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9393/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v199 )
                  goto LABEL_1049;
                UILabel__set_text(v199, (System_String_o *)gameObject, 0LL);
              }
              if ( v9->fields.isHpUpMax )
                goto LABEL_315;
              v200 = *v448;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
              v201 = &StringLiteral_9390/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
            }
            goto LABEL_312;
          }
          goto LABEL_315;
        }
        if ( v195 )
        {
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1049;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1049;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1049;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1049;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        v202 = (UnityEngine_Object_o *)this->fields.baseButton;
        cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
        if ( v9->fields.isMaxSelect )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, switchInfoList);
          if ( UnityEngine_Object__op_Inequality(v202, 0LL, 0LL) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1049;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1049;
            v204 = 1;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
LABEL_269:
            if ( v9->fields.type == 1 && CombineServantListViewItem__get_IsOrganization(v9, 0LL) && !isSelectEnable )
            {
              if ( !(v204 & 1 | !ListViewItem__get_IsSelect((ListViewItem_o *)v9, 0LL)) )
                break;
            }
            else if ( !v204 )
            {
              break;
            }
            gameObject = (__int64)*p_maskSprite;
            if ( !*p_maskSprite )
              goto LABEL_1049;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_1049;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            v214 = *v448;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v213);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9388/*"NONSELECT_MATERIAL"*/, 0LL);
            if ( !v214 )
              goto LABEL_1049;
            UILabel__set_text(v214, (System_String_o *)gameObject, 0LL);
            break;
          }
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, switchInfoList);
          if ( UnityEngine_Object__op_Inequality(v202, 0LL, 0LL) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1049;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1049;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          }
        }
        v204 = 0;
        goto LABEL_269;
      }
LABEL_100:
      v160 = 0;
      goto LABEL_101;
    case 0:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1049;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        v9->fields.currentLimitCnt,
        v9->fields.maxLimitCnt,
        0LL);
      if ( v9->fields.isParty )
      {
        gameObject = (__int64)this->fields.partyIcon;
        if ( !gameObject )
          goto LABEL_1049;
        FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
      }
      if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
      {
        gameObject = (__int64)this->fields.lockImg;
        if ( !gameObject )
          goto LABEL_1049;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1049;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      }
      CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL);
      v154 = (UnityEngine_Object_o *)this->fields.baseButton;
      v155 = CanNotBaseSelect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v153);
      v156 = UnityEngine_Object__op_Inequality(v154, 0LL, 0LL);
      if ( v155 )
      {
        if ( !v156 )
          goto LABEL_393;
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1049;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1049;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1049;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1049;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        if ( v9->fields.isLvMax )
        {
          if ( v9->fields.isStatusUpSvt )
            goto LABEL_326;
          if ( !v9->fields.isExpUpSvt )
          {
            v157 = *v448;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
            v158 = &StringLiteral_9386/*"NONSELECT_BASE_ALLMAX"*/;
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
              goto LABEL_1049;
            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            gameObject = (__int64)*v448;
            if ( !*v448 )
              goto LABEL_1049;
            v226 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_331;
          }
          v157 = *v448;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
          v158 = &StringLiteral_11634/*"SELECT_CANNOT"*/;
LABEL_329:
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v158, 0LL);
          if ( !v157 )
            goto LABEL_1049;
          v226 = (System_String_o *)gameObject;
          gameObject = (__int64)v157;
LABEL_331:
          UILabel__set_text((UILabel_o *)gameObject, v226, 0LL);
          gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
          if ( !gameObject )
            goto LABEL_1049;
          CombineServantListViewNoticeTween__RemoveTarget(
            (CombineServantListViewNoticeTween_o *)gameObject,
            *p_statusTxtLb,
            0LL);
LABEL_393:
          if ( v9->fields.isBaseSvt )
          {
            gameObject = (__int64)this->fields.removeImg;
            if ( !gameObject )
              goto LABEL_1049;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_1049;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          }
          break;
        }
LABEL_326:
        v157 = *v448;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
        v158 = &StringLiteral_9388/*"NONSELECT_MATERIAL"*/;
        goto LABEL_329;
      }
      if ( !v156 )
        goto LABEL_393;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1049;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1049;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1049;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1049;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)*v448;
      if ( !*v448 )
        goto LABEL_1049;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( v9->fields.isCombineExpCampaignTarget )
      {
        if ( v9->fields.isDispAtkStatusUpInfo
          && CombineServantListViewItem__get_IsAtkAdjustMax(v9, 0LL)
          && !CombineServantListViewItem__get_IsSecondAtkAdjustMax(v9, 0LL) )
        {
          v234 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_string__TypeInfo,
                                                                switchInfoList,
                                                                v205,
                                                                v206);
          System_Collections_Generic_List_object____ctor(
            v234,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v235);
          v236 = LocalizationManager__Get((System_String_o *)StringLiteral_8884/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v452.methodPointer = v9->fields.combineExpCampaignValue;
          v237 = (Il2CppObject *)System_Single__ToString(*(float *)&v452.methodPointer, &v452);
          gameObject = (__int64)System_String__Format(v236, v237, 0LL);
          if ( !v234 )
            goto LABEL_1049;
          items = v234->fields._items;
          v245 = Method_System_Collections_Generic_List_string__Add__;
          ++v234->fields._version;
          if ( !items )
            goto LABEL_1049;
          size = v234->fields._size;
          v247 = gameObject;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v234,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v245[4] + 192LL) + 112LL));
          }
          else
          {
            v248 = &items->obj.klass + size;
            v234->fields._size = size + 1;
            v248[4] = (Il2CppClass *)v247;
            sub_1BCA784((PartyOrganizationUtility_o *)(v248 + 4), v247, v238, v239, v240, v241, v242, v243);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v269 = v234->fields._items;
          v270 = Method_System_Collections_Generic_List_string__Add__;
          ++v234->fields._version;
          if ( !v269 )
            goto LABEL_1049;
        }
        else
        {
          if ( !v9->fields.isDispHpStatusUpInfo
            || !CombineServantListViewItem__get_IsHpAdjustMax(v9, 0LL)
            || CombineServantListViewItem__get_IsSecondHpAdjustMax(v9, 0LL) )
          {
            gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
            if ( !gameObject )
              goto LABEL_1049;
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              *p_statusTxtLb,
              0LL);
            v210 = *p_statusTxtLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v209);
            v211 = LocalizationManager__Get((System_String_o *)StringLiteral_8884/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
            *(float *)&v452.methodPointer = v9->fields.combineExpCampaignValue;
            v212 = (Il2CppObject *)System_Single__ToString(*(float *)&v452.methodPointer, &v452);
            gameObject = (__int64)System_String__Format(v211, v212, 0LL);
            if ( !v210 )
              goto LABEL_1049;
LABEL_261:
            UILabel__set_text(v210, (System_String_o *)gameObject, 0LL);
LABEL_390:
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1049;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_1049;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            goto LABEL_393;
          }
          v234 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_string__TypeInfo,
                                                                switchInfoList,
                                                                v207,
                                                                v208);
          System_Collections_Generic_List_object____ctor(
            v234,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v249);
          v250 = LocalizationManager__Get((System_String_o *)StringLiteral_8884/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v452.methodPointer = v9->fields.combineExpCampaignValue;
          v251 = (Il2CppObject *)System_Single__ToString(*(float *)&v452.methodPointer, &v452);
          gameObject = (__int64)System_String__Format(v250, v251, 0LL);
          if ( !v234 )
            goto LABEL_1049;
          v258 = v234->fields._items;
          v259 = Method_System_Collections_Generic_List_string__Add__;
          ++v234->fields._version;
          if ( !v258 )
            goto LABEL_1049;
          v260 = v234->fields._size;
          v261 = gameObject;
          if ( (unsigned int)v260 >= v258->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v234,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v259[4] + 192LL) + 112LL));
          }
          else
          {
            v262 = &v258->obj.klass + v260;
            v234->fields._size = v260 + 1;
            v262[4] = (Il2CppClass *)v261;
            sub_1BCA784((PartyOrganizationUtility_o *)(v262 + 4), v261, v252, v253, v254, v255, v256, v257);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v269 = v234->fields._items;
          v270 = Method_System_Collections_Generic_List_string__Add__;
          ++v234->fields._version;
          if ( !v269 )
            goto LABEL_1049;
        }
        v271 = v234->fields._size;
        v272 = gameObject;
        if ( (unsigned int)v271 >= v269->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v234,
            (Il2CppObject *)gameObject,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v270[4] + 192LL) + 112LL));
        }
        else
        {
          v273 = &v269->obj.klass + v271;
          v234->fields._size = v271 + 1;
          v273[4] = (Il2CppClass *)v272;
          sub_1BCA784((PartyOrganizationUtility_o *)(v273 + 4), v272, v263, v264, v265, v266, v267, v268);
        }
        gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1049;
        CombineServantListViewNoticeTween__AddTarget(
          (CombineServantListViewNoticeTween_o *)gameObject,
          *p_statusTxtLb,
          (System_Collections_Generic_List_string__o *)v234,
          0LL);
        gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1049;
        CombineServantListViewNoticeTween__SetTexts((CombineServantListViewNoticeTween_o *)gameObject, 0, 0LL);
        goto LABEL_390;
      }
      gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
      if ( !gameObject )
        goto LABEL_1049;
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
      v210 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
      if ( !v210 )
        goto LABEL_1049;
      goto LABEL_261;
  }
  v221 = v9->fields.type;
LABEL_398:
  if ( v221 != 9 )
  {
    if ( v221 != 2 )
      goto LABEL_461;
    gameObject = (__int64)this->fields.limitCountIcon;
    if ( !gameObject )
      goto LABEL_1049;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)gameObject,
      v9->fields.currentLimitCnt,
      v9->fields.maxLimitCnt,
      0LL);
    if ( v9->fields.isParty )
    {
      gameObject = (__int64)this->fields.partyIcon;
      if ( !gameObject )
        goto LABEL_1049;
      FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
    }
    if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_1049;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1049;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    }
    if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
    {
      v275 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v274);
      if ( UnityEngine_Object__op_Inequality(v275, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1049;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1049;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1049;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1049;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        isHeroineSvt = v9->fields.isHeroineSvt;
        v278 = *v448;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v276);
        if ( !isHeroineSvt )
          goto LABEL_419;
LABEL_441:
        v279 = &StringLiteral_9388/*"NONSELECT_MATERIAL"*/;
        goto LABEL_442;
      }
      goto LABEL_457;
    }
    if ( !v9->fields.isLvMax || !v9->fields.isLimitUpItemNum )
    {
      v318 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v274);
      if ( UnityEngine_Object__op_Inequality(v318, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1049;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1049;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      }
      goto LABEL_457;
    }
    isSealCombineLimit = v9->fields.isSealCombineLimit;
    v287 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v274);
    v284 = UnityEngine_Object__op_Inequality(v287, 0LL, 0LL);
    if ( !isSealCombineLimit )
    {
      if ( v284 )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1049;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1049;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1049;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1049;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = (__int64)*v448;
        if ( !*v448 )
          goto LABEL_1049;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        gameObject = (__int64)*p_statusTxtLb;
        if ( !*p_statusTxtLb )
          goto LABEL_1049;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1049;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v278 = *p_statusTxtLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v385);
        v279 = &StringLiteral_8880/*"MSG_ABLED_LIMITUP"*/;
        goto LABEL_442;
      }
      goto LABEL_457;
    }
LABEL_449:
    if ( !v284 )
      goto LABEL_457;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)*v448;
    if ( !*v448 )
      goto LABEL_1049;
    v285 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_456;
  }
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1049;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    v9->fields.currentLimitCnt,
    v9->fields.maxLimitCnt,
    0LL);
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1049;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v280 = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL);
  v282 = (UnityEngine_Object_o *)this->fields.baseButton;
  v283 = v280;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v281);
  v284 = UnityEngine_Object__op_Inequality(v282, 0LL, 0LL);
  if ( !v283 )
    goto LABEL_449;
  if ( !v284 )
    goto LABEL_457;
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_1049;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
    gameObject,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_1049;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
    gameObject,
    0LL,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  gameObject = (__int64)*p_maskSprite;
  if ( !*p_maskSprite )
    goto LABEL_1049;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1049;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  if ( v9->fields.isHeroineSvt || v9->fields.isEventJoin || v9->fields.isIgnoreCombineLimitSpecial )
  {
    v278 = *v448;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
    goto LABEL_441;
  }
  if ( v9->fields.isLimitCntMax )
  {
    v278 = *v448;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
LABEL_419:
    v279 = &StringLiteral_9387/*"NONSELECT_LIMITUP_BASE"*/;
LABEL_442:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v279, 0LL);
    if ( !v278 )
      goto LABEL_1049;
    v285 = (System_String_o *)gameObject;
    gameObject = (__int64)v278;
LABEL_456:
    UILabel__set_text((UILabel_o *)gameObject, v285, 0LL);
    goto LABEL_457;
  }
  if ( v9->fields.isSealCombineLimit )
  {
    v278 = *v448;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
    v279 = &StringLiteral_11628/*"SEAL_COMBINE_LIMIT_THIRD"*/;
    goto LABEL_442;
  }
LABEL_457:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_461:
  v288 = v9->fields.type;
  v445 = this;
  v446 = v9;
  v443 = modeKind;
  v444 = &this->fields.statusTxtLb;
  if ( v288 != 3 )
    goto LABEL_543;
  CombineServantListViewItem__GetSkillInfo(v9, &skillInfoList, 0LL);
  enableSkillUp = v9->fields.enableSkillUp;
  v293 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v290, v291, v292);
  System_Text_StringBuilder___ctor(v293, 0LL);
  v294 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_1049;
  v295 = *(_QWORD *)&skillInfoList->max_length;
  if ( (int)v295 >= 1 )
  {
    v296 = 0LL;
    v297 = (unsigned int)(v295 - 1);
    v298 = (unsigned int)*(_QWORD *)&skillInfoList->max_length;
    while ( 1 )
    {
      if ( v296 >= v294->max_length )
        goto LABEL_1050;
      v299 = v294->m_Items[v296];
      if ( v299 )
      {
        lv = v299->fields.lv;
        p_lv = &v299->fields.lv;
        v302 = *(p_lv - 1);
        if ( lv > 0 )
        {
          gameObject = (__int64)System_Int32__ToString((int32_t)p_lv, 0LL);
          goto LABEL_473;
        }
      }
      else
      {
        v302 = -1;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9394/*"NONSKILL_TXT"*/, 0LL);
LABEL_473:
      v303 = (Il2CppObject *)gameObject;
      if ( enableSkillUp )
      {
        v305 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v302,
                 (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v304);
        if ( v297 == v296 )
        {
          v306 = &StringLiteral_12306/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v305 )
            v306 = &StringLiteral_12308/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v306 = &StringLiteral_12307/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v305 )
            v306 = &StringLiteral_12309/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v306, 0LL);
        if ( v293 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v293, (System_String_o *)gameObject, v303, 0LL);
          if ( v298 == ++v296 )
            goto LABEL_487;
          v294 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_1049;
    }
  }
  if ( !v293 )
    goto LABEL_1049;
LABEL_487:
  skillLvLabel = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v293->klass->vtable._3_ToString.method)(
                 v293,
                 v293->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !skillLvLabel )
    goto LABEL_1049;
  UILabel__set_text(skillLvLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1049;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1049;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  modeKind = v443;
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1049;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    v309 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v308);
    if ( !UnityEngine_Object__op_Inequality(v309, 0LL, 0LL) )
      goto LABEL_538;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v311 = *v448;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v310);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9392/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v311 )
      goto LABEL_1049;
    UILabel__set_text(v311, (System_String_o *)gameObject, 0LL);
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_538;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, switchInfoList);
    if ( !TutorialFlag__Get_38402052(126, 0LL) )
      goto LABEL_538;
    v312 = *v448;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
    v313 = &StringLiteral_11634/*"SELECT_CANNOT"*/;
    goto LABEL_526;
  }
  isSkillUpItemNum = v9->fields.isSkillUpItemNum;
  v315 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v308);
  v316 = UnityEngine_Object__op_Inequality(v315, 0LL, 0LL);
  if ( !isSkillUpItemNum )
  {
    if ( v316 )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1049;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1049;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_538;
  }
  if ( v316 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*v444;
    if ( !*v444 )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v312 = *v444;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v317);
    v313 = &StringLiteral_8881/*"MSG_ABLED_SKILLUP"*/;
LABEL_526:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v313, 0LL);
    if ( !v312 )
      goto LABEL_1049;
    UILabel__set_text(v312, (System_String_o *)gameObject, 0LL);
  }
LABEL_538:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v288 = v9->fields.type;
LABEL_543:
  if ( v288 != 11 )
    goto LABEL_638;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(v9, 0LL);
  enableAppendSkillUp = v9->fields.enableAppendSkillUp;
  v321 = AppendSkillData;
  v325 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v322, v323, v324);
  System_Text_StringBuilder___ctor(v325, 0LL);
  if ( !v321 )
    goto LABEL_1049;
  svtUseSkillIdList = v321->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_1049;
  v327 = *(_QWORD *)&svtUseSkillIdList->max_length;
  if ( (int)v327 >= 1 )
  {
    v328 = 0LL;
    v329 = (unsigned int)(v327 - 1);
    v330 = (unsigned int)*(_QWORD *)&svtUseSkillIdList->max_length;
    while ( v328 < svtUseSkillIdList->max_length )
    {
      svtSkillLvList = v321->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_1049;
      if ( v328 >= svtSkillLvList->max_length )
        break;
      v332 = (__int64)svtSkillLvList + 4 * v328;
      v333 = svtUseSkillIdList->m_Items[v328 + 1];
      v335 = *(_DWORD *)(v332 + 32);
      v334 = v332 + 32;
      if ( v335 <= 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9394/*"NONSKILL_TXT"*/, 0LL);
      }
      else
      {
        gameObject = (__int64)System_Int32__ToString(v334, 0LL);
      }
      v336 = (Il2CppObject *)gameObject;
      if ( enableAppendSkillUp )
      {
        v338 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v333,
                 (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v337);
        if ( v328 == v329 )
        {
          v339 = &StringLiteral_12306/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v338 )
            v339 = &StringLiteral_12308/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v339 = &StringLiteral_12307/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v338 )
            v339 = &StringLiteral_12309/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v339, 0LL);
        if ( v325 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v325, (System_String_o *)gameObject, v336, 0LL);
          if ( ++v328 == v330 )
            goto LABEL_570;
          svtUseSkillIdList = v321->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_1049;
    }
LABEL_1050:
    sub_1BCAA44(gameObject, switchInfoList);
  }
  if ( !v325 )
    goto LABEL_1049;
LABEL_570:
  v340 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v325->klass->vtable._3_ToString.method)(
                 v325,
                 v325->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v340 )
    goto LABEL_1049;
  UILabel__set_text(v340, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1049;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1049;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  modeKind = v443;
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1049;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  gameObject = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v342 = *v448;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v341);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9392/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v342 )
      goto LABEL_1049;
    UILabel__set_text(v342, (System_String_o *)gameObject, 0LL);
    if ( v9->fields.isEventJoin )
    {
      v343 = *v448;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10441/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v343 )
        goto LABEL_1049;
      UILabel__set_text(v343, (System_String_o *)gameObject, 0LL);
    }
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_608;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, switchInfoList);
    if ( !TutorialFlag__Get_38402052(126, 0LL) )
      goto LABEL_608;
    v344 = *v448;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
    v345 = &StringLiteral_11634/*"SELECT_CANNOT"*/;
    goto LABEL_606;
  }
  if ( !enableAppendSkillUp )
    goto LABEL_1049;
  if ( enableAppendSkillUp->fields._size > 0 || v9->fields.isAppendSkillOpenItemNum )
  {
    gameObject = (__int64)*v444;
    if ( !*v444 )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v344 = *v444;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v346);
    v345 = &StringLiteral_8881/*"MSG_ABLED_SKILLUP"*/;
LABEL_606:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v345, 0LL);
    if ( !v344 )
      goto LABEL_1049;
    UILabel__set_text(v344, (System_String_o *)gameObject, 0LL);
  }
LABEL_608:
  v347 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, switchInfoList);
  if ( UnityEngine_Object__op_Inequality(v347, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  coinInfo = (UnityEngine_Object_o *)this->fields.coinInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, switchInfoList);
  if ( UnityEngine_Object__op_Inequality(coinInfo, 0LL, 0LL) )
  {
    switchInfoComp = (UnityEngine_Object_o *)this->fields.switchInfoComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, switchInfoList);
    if ( UnityEngine_Object__op_Inequality(switchInfoComp, 0LL, 0LL) )
    {
      switchInfoList = this->fields.switchInfoList;
      if ( switchInfoList )
      {
        gameObject = (__int64)this->fields.switchInfoComp;
        if ( !gameObject )
          goto LABEL_1049;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)gameObject, switchInfoList, 0LL);
        gameObject = (__int64)this->fields.coinInfo;
        if ( !gameObject )
          goto LABEL_1049;
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
          v351 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum);
          gameObject = (__int64)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v351, 0LL);
          switchInfoList = (UIWidget_array *)gameObject;
        }
        if ( !coinNumLabel )
          goto LABEL_1049;
        UILabel__set_text(coinNumLabel, (System_String_o *)switchInfoList, 0LL);
        gameObject = CombineServantListViewItem__get_SkillOpenItemId(v9, 0LL);
        coinIcon = this->fields.coinIcon;
        if ( (int)gameObject < 1 )
        {
          if ( !coinIcon )
            goto LABEL_1049;
          gameObject = (__int64)coinIcon->fields.iconSprite;
          if ( !gameObject )
            goto LABEL_1049;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1049;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          gameObject = CombineServantListViewItem__get_SkillOpenItemId(v9, 0LL);
          if ( !coinIcon )
            goto LABEL_1049;
          ItemIconComponent__SetItem(coinIcon, gameObject, -1, 0LL);
        }
      }
    }
  }
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_638:
  v353 = v9->fields.type;
  if ( v353 != 12 )
    goto LABEL_759;
  v354 = CombineServantListViewItem__GetAppendSkillData(v9, 0LL);
  v358 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v355, v356, v357);
  System_Text_StringBuilder___ctor(v358, 0LL);
  if ( !v354 )
    goto LABEL_1049;
  v359 = v354->fields.svtUseSkillIdList;
  if ( !v359 )
    goto LABEL_1049;
  v360 = *(_QWORD *)&v359->max_length;
  if ( (int)v360 < 1 )
  {
    v363 = 0;
    v375 = 0;
    if ( !v358 )
      goto LABEL_1049;
  }
  else
  {
    v361 = 0;
    v362 = 0;
    v363 = 0;
    v364 = 0LL;
    while ( 1 )
    {
      if ( v364 >= v359->max_length )
        goto LABEL_1050;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9394/*"NONSKILL_TXT"*/, 0LL);
      v365 = v354->fields.svtSkillLvList;
      if ( !v365 )
        goto LABEL_1049;
      if ( v364 >= v365->max_length )
        goto LABEL_1050;
      v366 = (char *)v365 + 4 * v364;
      v367 = *((_DWORD *)v366 + 8);
      gameObject = (__int64)(v366 + 32);
      if ( v367 >= 1 )
      {
        gameObject = (__int64)System_Int32__ToString(gameObject, 0LL);
        v365 = v354->fields.svtSkillLvList;
        if ( !v365 )
          goto LABEL_1049;
        v362 = 1;
      }
      if ( v364 >= v365->max_length )
        goto LABEL_1050;
      v368 = v365->m_Items[1];
      v369 = v365->m_Items[++v364];
      v363 |= v369 < 10;
      v361 |= v368 != v369;
      if ( v364 == (unsigned int)v360 )
        break;
      v359 = v354->fields.svtUseSkillIdList;
      if ( !v359 )
        goto LABEL_1049;
    }
    v442 = v362;
    v370 = 0LL;
    v371 = 32LL;
    do
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9394/*"NONSKILL_TXT"*/, 0LL);
      v372 = v354->fields.svtSkillLvList;
      if ( !v372 )
        goto LABEL_1049;
      if ( v370 >= v372->max_length )
        goto LABEL_1050;
      v373 = (Il2CppObject *)gameObject;
      if ( *(int *)((char *)&v372->obj.klass + v371) >= 1 )
        v373 = (Il2CppObject *)System_Int32__ToString((int)v372 + (int)v371, 0LL);
      if ( (_DWORD)v360 - 1 == v370 )
      {
        if ( (v361 & 1) == 0 )
          goto LABEL_668;
        if ( !v446->fields.isHeroineSvt )
          goto LABEL_677;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, switchInfoList);
        if ( TutorialFlag__Get_38402052(126, 0LL) )
        {
LABEL_668:
          v374 = &StringLiteral_12308/*"SKILL_LVDISP_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
            v374 = &StringLiteral_12308/*"SKILL_LVDISP_SINGLE_TXT"*/;
          }
        }
        else
        {
LABEL_677:
          v374 = &StringLiteral_12306/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
            v374 = &StringLiteral_12306/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          }
        }
      }
      else
      {
        if ( (v361 & 1) == 0 )
          goto LABEL_675;
        if ( !v446->fields.isHeroineSvt )
          goto LABEL_679;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, switchInfoList);
        if ( TutorialFlag__Get_38402052(126, 0LL) )
        {
LABEL_675:
          v374 = &StringLiteral_12309/*"SKILL_LVDISP_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
            v374 = &StringLiteral_12309/*"SKILL_LVDISP_TXT"*/;
          }
        }
        else
        {
LABEL_679:
          v374 = &StringLiteral_12307/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
            v374 = &StringLiteral_12307/*"SKILL_LVDISP_ENABLE_TXT"*/;
          }
        }
      }
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v374, 0LL);
      if ( !v358 )
        goto LABEL_1049;
      System_Text_StringBuilder__AppendFormat(v358, (System_String_o *)gameObject, v373, 0LL);
      ++v370;
      v371 += 4LL;
    }
    while ( (unsigned int)v360 != v370 );
    this = v445;
    v9 = v446;
    v375 = v442;
    modeKind = v443;
    p_statusTxtLb = v444;
  }
  v376 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v358->klass->vtable._3_ToString.method)(
                 v358,
                 v358->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v376 )
    goto LABEL_1049;
  UILabel__set_text(v376, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1049;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1049;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1049;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)*v448;
    if ( !*v448 )
      goto LABEL_1049;
    UILabel__set_text((UILabel_o *)gameObject, string_TypeInfo->static_fields->Empty, 0LL);
    if ( v9->fields.isEventJoin )
    {
      v378 = *v448;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v377);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10441/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v378 )
        goto LABEL_1049;
      UILabel__set_text(v378, (System_String_o *)gameObject, 0LL);
    }
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_1053;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v377);
    if ( TutorialFlag__Get_38402052(126, 0LL) )
    {
      v379 = *v448;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v377);
      v380 = &StringLiteral_11634/*"SELECT_CANNOT"*/;
    }
    else
    {
LABEL_1053:
      if ( v9->fields.isEventJoin )
      {
        v379 = *v448;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v377);
        v380 = &StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/;
      }
      else if ( (v375 & 1) != 0 )
      {
        if ( (v363 & 1) != 0 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v377);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v381);
          gameObject = NetworkManager__get_UserId(0LL);
          if ( !Master_object )
            goto LABEL_1049;
          if ( !UserServantAppendPassiveSkillMaster__TryGetEntity(
                  (UserServantAppendPassiveSkillMaster_o *)Master_object,
                  &entity,
                  gameObject,
                  v9->fields.svtId,
                  0LL)
            || !UserServantAppendPassiveSkillMaster__IsExchangeLimited(0LL) )
          {
            goto LABEL_748;
          }
          v379 = *v448;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2106/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/, 0LL);
          if ( !entity )
            goto LABEL_1049;
          v383 = (System_String_o *)gameObject;
          SkillOpenItemNum = UserServantAppendPassiveSkillEntity__GetRemainingExchangeNum(entity, 0LL);
          v384 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum);
          gameObject = (__int64)System_String__Format(v383, v384, 0LL);
          if ( !v379 )
            goto LABEL_1049;
          goto LABEL_747;
        }
        v379 = *v448;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v377);
        v380 = &StringLiteral_2105/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/;
      }
      else
      {
        v379 = *v448;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v377);
        v380 = &StringLiteral_2104/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/;
      }
    }
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v380, 0LL);
    if ( !v379 )
      goto LABEL_1049;
LABEL_747:
    UILabel__set_text(v379, (System_String_o *)gameObject, 0LL);
  }
LABEL_748:
  v386 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, switchInfoList);
  if ( UnityEngine_Object__op_Inequality(v386, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
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
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v353 = v9->fields.type;
LABEL_759:
  if ( v353 != 4 )
    goto LABEL_805;
  gameObject = (__int64)this->fields.npIconLabel;
  if ( !gameObject )
    goto LABEL_1049;
  v387 = SHIDWORD(v452.invoker_method) <= 0 ? -1 : LODWORD(v452.invoker_method);
  UIIconLabel__Set_38947284((UIIconLabel_o *)gameObject, 33, v387, SHIDWORD(v452.methodPointer), 0, 0LL, 0, 0, 0, 0LL);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1049;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1049;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    v389 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v388);
    if ( !UnityEngine_Object__op_Inequality(v389, 0LL, 0LL) )
      goto LABEL_801;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v391 = v9->fields.isHeroineSvt;
    v392 = *v448;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v390);
    if ( v391 )
      v393 = &StringLiteral_9388/*"NONSELECT_MATERIAL"*/;
    else
      v393 = &StringLiteral_9391/*"NONSELECT_NPUP_BASE"*/;
    v396 = (System_String_o *)*v393;
    goto LABEL_799;
  }
  if ( !v9->fields.isSameSvt && !v9->fields.isBaseSvt )
  {
    v410 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v388);
    if ( UnityEngine_Object__op_Inequality(v410, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1049;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1049;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_801;
  }
  v394 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v388);
  if ( UnityEngine_Object__op_Inequality(v394, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    if ( v9->fields.isSameSvt )
    {
      gameObject = (__int64)*p_statusTxtLb;
      if ( !*p_statusTxtLb )
        goto LABEL_1049;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1049;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v392 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v395);
      v396 = (System_String_o *)StringLiteral_8883/*"MSG_ABLED_TDUP"*/;
LABEL_799:
      gameObject = (__int64)LocalizationManager__Get(v396, 0LL);
      if ( !v392 )
        goto LABEL_1049;
      UILabel__set_text(v392, (System_String_o *)gameObject, 0LL);
    }
  }
LABEL_801:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_805:
  v397 = v9->fields.type;
  if ( v397 != 6 )
    goto LABEL_871;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1049;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    v9->fields.currentLimitCnt,
    v9->fields.maxLimitCnt,
    0LL);
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1049;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    v399 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v398);
    if ( UnityEngine_Object__op_Inequality(v399, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1049;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1049;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1049;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1049;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      if ( v9->fields.isHeroineSvt )
      {
        v401 = *v448;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v400);
        v402 = &StringLiteral_9388/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        isEventJoin = v9->fields.isEventJoin;
        v401 = *v448;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v400);
        if ( isEventJoin )
          v402 = &StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/;
        else
          v402 = &StringLiteral_9436/*"NO_SELECT_LVEXCEED"*/;
      }
      v407 = (System_String_o *)*v402;
LABEL_864:
      gameObject = (__int64)LocalizationManager__Get(v407, 0LL);
      if ( !v401 )
        goto LABEL_1049;
      UILabel__set_text(v401, (System_String_o *)gameObject, 0LL);
      goto LABEL_866;
    }
    goto LABEL_866;
  }
  if ( !v9->fields.isLvMax || !v9->fields.isLimitCntMax )
  {
    v408 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v398);
    if ( !UnityEngine_Object__op_Inequality(v408, 0LL, 0LL) )
      goto LABEL_866;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
LABEL_847:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_866;
  }
  isLvExceedItemNum = v9->fields.isLvExceedItemNum;
  v404 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v398);
  v405 = UnityEngine_Object__op_Inequality(v404, 0LL, 0LL);
  if ( !isLvExceedItemNum )
  {
    if ( !v405 )
      goto LABEL_866;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    goto LABEL_847;
  }
  if ( v405 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)*v448;
    if ( !*v448 )
      goto LABEL_1049;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v401 = *p_statusTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v406);
    v407 = (System_String_o *)StringLiteral_8880/*"MSG_ABLED_LIMITUP"*/;
    goto LABEL_864;
  }
LABEL_866:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v397 = v9->fields.type;
LABEL_871:
  if ( v397 != 10 && v397 != 7 )
    goto LABEL_933;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1049;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.subIconLabel;
  if ( !gameObject )
    goto LABEL_1049;
  UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0LL);
  v412 = v9->fields.type;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v411);
  gameObject = CombineServantListViewManager__GetSortKind(v412, v411);
  v413 = this->fields.servantFaceIcon;
  if ( !v413 )
    goto LABEL_1049;
  if ( (_DWORD)gameObject == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *, __int64, Il2CppMethodPointer))v413->klass->vtable._4_ParameterChange.method)(
      this->fields.servantFaceIcon,
      1LL,
      v413->klass->vtable._5_UpdateAlpha.methodPtr);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_1049;
    ServantFaceIconComponent__ResetIconLabelPos((ServantFaceIconComponent_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_1049;
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
      goto LABEL_1049;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v414 = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL);
  v416 = (UnityEngine_Object_o *)this->fields.baseButton;
  v417 = v414;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v415);
  v418 = UnityEngine_Object__op_Inequality(v416, 0LL, 0LL);
  if ( v417 )
  {
    if ( !v418 )
      goto LABEL_922;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( v9->fields.type == 10 && v9->fields.isCommandCardExceedMax )
    {
      v419 = *v448;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9385/*"NONSEELECT_STATUSUP_MAX"*/, 0LL);
      if ( !v419 )
        goto LABEL_1049;
      UILabel__set_text(v419, (System_String_o *)gameObject, 0LL);
    }
    if ( v9->fields.isEventJoin )
    {
      v420 = *v448;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v420 )
        goto LABEL_1049;
      UILabel__set_text(v420, (System_String_o *)gameObject, 0LL);
    }
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_922;
    v421 = *v448;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, switchInfoList);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11634/*"SELECT_CANNOT"*/, 0LL);
    if ( !v421 )
      goto LABEL_1049;
    v422 = (System_String_o *)gameObject;
    gameObject = (__int64)v421;
    goto LABEL_921;
  }
  if ( v418 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)*v448;
    if ( !*v448 )
      goto LABEL_1049;
    v422 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_921:
    UILabel__set_text((UILabel_o *)gameObject, v422, 0LL);
  }
LABEL_922:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v423 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, switchInfoList);
  if ( UnityEngine_Object__op_Implicit(v423, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v424 = this->fields.svtCommandCardList;
    gameObject = CombineServantListViewItem__get_UserSvtId(v9, 0LL);
    if ( !v424 )
      goto LABEL_1049;
    ServantCommandCardListComponent__Set(v424, gameObject, 1, 1, 0LL);
  }
LABEL_933:
  if ( v9->fields.type != 8 )
    goto LABEL_990;
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1049;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    v426 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v425);
    if ( !UnityEngine_Object__op_Inequality(v426, 0LL, 0LL) )
      goto LABEL_986;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( v9->fields.isHeroineSvt )
    {
      v428 = *v448;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v427);
      v429 = &StringLiteral_9388/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      v436 = v9->fields.isEventJoin;
      v428 = *v448;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v427);
      if ( v436 )
        v429 = &StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/;
      else
        v429 = &StringLiteral_9435/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
    }
    v434 = (System_String_o *)*v429;
    goto LABEL_984;
  }
  if ( !v9->fields.isFriendshipRankMax )
  {
    v435 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v425);
    if ( !UnityEngine_Object__op_Inequality(v435, 0LL, 0LL) )
      goto LABEL_986;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
LABEL_977:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_986;
  }
  isFriendshipExceedItemNum = v9->fields.isFriendshipExceedItemNum;
  v431 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v425);
  v432 = UnityEngine_Object__op_Inequality(v431, 0LL, 0LL);
  if ( !isFriendshipExceedItemNum )
  {
    if ( !v432 )
      goto LABEL_986;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1049;
    goto LABEL_977;
  }
  if ( !v432 )
    goto LABEL_986;
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_1049;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
    gameObject,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_1049;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
    gameObject,
    0LL,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  gameObject = (__int64)*p_maskSprite;
  if ( !*p_maskSprite )
    goto LABEL_1049;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1049;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)*v448;
  if ( !*v448 )
    goto LABEL_1049;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)*p_statusTxtLb;
  if ( !*p_statusTxtLb )
    goto LABEL_1049;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1049;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v428 = *p_statusTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v433);
  v434 = (System_String_o *)StringLiteral_8879/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/;
LABEL_984:
  gameObject = (__int64)LocalizationManager__Get(v434, 0LL);
  if ( !v428 )
    goto LABEL_1049;
  UILabel__set_text(v428, (System_String_o *)gameObject, 0LL);
LABEL_986:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_990:
  if ( (unsigned int)(modeKind - 1) > 1 )
  {
    if ( modeKind != 3 )
      return;
    if ( v9->fields.isEventJoin )
    {
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1049;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1049;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v439 = *v448;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v438);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v439 )
        goto LABEL_1049;
      goto LABEL_1027;
    }
    if ( !v9->fields.isCanNotLock )
    {
      gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
      if ( !gameObject )
        goto LABEL_1049;
      if ( !UserServantEntity__IsLeave((UserServantEntity_o *)gameObject, 0LL) )
      {
        gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
        if ( !gameObject )
          goto LABEL_1049;
        if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)gameObject, 0LL) )
        {
          gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
          if ( !gameObject )
            goto LABEL_1049;
          if ( !UserServantEntity__IsStatusUp((UserServantEntity_o *)gameObject, 0LL) )
          {
            gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
            if ( !gameObject )
              goto LABEL_1049;
            if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)gameObject, 0LL) )
            {
              gameObject = (__int64)*p_maskSprite;
              if ( !*p_maskSprite )
                goto LABEL_1049;
              gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_1049;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
              gameObject = (__int64)*v448;
              if ( !*v448 )
                goto LABEL_1049;
              v441 = (System_String_o *)StringLiteral_1/*""*/;
              goto LABEL_1028;
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
        v439 = *v448;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v440);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8416/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
        if ( v439 )
        {
LABEL_1027:
          v441 = (System_String_o *)gameObject;
          gameObject = (__int64)v439;
LABEL_1028:
          UILabel__set_text((UILabel_o *)gameObject, v441, 0LL);
          gameObject = (__int64)*p_statusTxtLb;
          if ( !*p_statusTxtLb )
            goto LABEL_1049;
LABEL_1029:
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
LABEL_1049:
    sub_1BCAA3C(gameObject, switchInfoList);
  }
  if ( !v9->fields.isHeroineSvt )
    goto LABEL_995;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, switchInfoList);
  if ( !TutorialFlag__Get_38402052(126, 0LL) )
  {
LABEL_995:
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1049;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1049;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9->fields.isCanNotLock, 0LL);
    if ( v9->fields.isCanNotLock )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v437);
      switchInfoList = (UIWidget_array *)LocalizationManager__Get((System_String_o *)StringLiteral_8416/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
    }
    else
    {
      switchInfoList = (UIWidget_array *)StringLiteral_1/*""*/;
    }
    gameObject = (__int64)*v448;
    if ( !*v448 )
      goto LABEL_1049;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)switchInfoList, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1049;
    goto LABEL_1029;
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

  if ( (byte_4B19DB1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, method);
    byte_4B19DB1 = 1;
  }
  dragSelect = (UnityEngine_Object_o *)this->fields.dragSelect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
    sub_1BCAA3C(v7, v6);
  }
}