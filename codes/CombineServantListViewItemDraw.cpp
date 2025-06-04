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
  if ( (byte_4B06002 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, item);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_9205/*"NONSELECT_UNDER_STATUS_MAX"*/, v8);
    sub_1BC3008(&StringLiteral_9200/*"NONSELECT_MATERIAL"*/, v9);
    sub_1BC3008(&StringLiteral_9203/*"NONSELECT_NPUP_BASE"*/, v10);
    sub_1BC3008(&StringLiteral_9201/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v11);
    byte_4B06002 = 1;
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
      if ( item->fields.rarity >= 4 )
      {
        if ( atkBase >= 1 && item->fields.isNotSelectSecondStatusUpAtk )
        {
          v35 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9205/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v35 )
            goto LABEL_92;
          UILabel__set_text(v35, (System_String_o *)maskSprite, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectSecondStatusUpHp )
          goto LABEL_80;
      }
      else
      {
        if ( atkBase >= 1 && item->fields.isNotSelectStatusUpAtk )
        {
          v34 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9205/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v34 )
            goto LABEL_92;
          UILabel__set_text(v34, (System_String_o *)maskSprite, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectStatusUpHp )
          goto LABEL_80;
      }
      maskLabel = this->fields.maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v32 = &StringLiteral_9205/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_78:
      maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v32, 0LL);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)maskSprite, 0LL);
        goto LABEL_80;
      }
LABEL_92:
      sub_1BC3264(maskSprite, v21);
    }
    maskLabel = this->fields.maskLabel;
    v25 = LocalizationManager_TypeInfo;
    v27 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_75:
    if ( !v27 )
      j_il2cpp_runtime_class_init_0(v25);
    v32 = &StringLiteral_9200/*"NONSELECT_MATERIAL"*/;
    goto LABEL_78;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0LL) )
  {
    v24 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9201/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
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
      v32 = &StringLiteral_9203/*"NONSELECT_NPUP_BASE"*/;
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
  __int64 v70; // x1
  __int64 v71; // x1
  UnityEngine_Object_o *svtCommandCardList; // x23
  UIWidget_array *switchInfoList; // x1
  __int64 gameObject; // x0
  int32_t type; // w19
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  IconLabelInfo_o *iconLabelInfo1; // x2
  UIIconLabel_o *subIconLabel; // x23
  int32_t rarity; // w24
  int32_t v80; // w25
  UILabel_o **p_statusTxtLb; // x28
  struct UILabel_o **p_maskLabel; // x20
  __int64 v83; // x1
  UnityEngine_GameObject_o *v84; // x23
  __int64 v85; // x1
  UnityEngine_GameObject_o *v86; // x23
  UnityEngine_GameObject_o *v87; // x23
  UnityEngine_Object_o *pushImg; // x23
  UnityEngine_Object_o *materialTdSprite; // x23
  UISprite_o *v90; // x23
  const MethodInfo *v91; // x1
  int32_t v92; // w23
  int32_t v93; // w8
  bool CanNotBaseSelect; // w0
  UnityEngine_Object_o *v95; // x23
  bool v96; // w22
  bool v97; // w0
  struct UILabel_o *v98; // x22
  __int64 *v99; // x8
  int32_t v100; // w2
  char v101; // w20
  UILabel_o *v102; // x23
  UILabel_o *v103; // x23
  UILabel_o *v104; // x23
  const MethodInfo *v105; // x2
  UILabel_o *v106; // x23
  UILabel_o *v107; // x23
  UILabel_o *v108; // x23
  UILabel_o *v109; // x23
  UILabel_o *v110; // x23
  UILabel_o *v111; // x23
  _BOOL4 isParty; // w19
  __int64 *v113; // x8
  UILabel_o *v114; // x23
  _BOOL4 v115; // w19
  __int64 *v116; // x8
  UILabel_o *v117; // x23
  __int64 v118; // x1
  UnityEngine_GameObject_o *v119; // x23
  UILabel_o *v120; // x23
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x24
  bool v123; // w23
  bool v124; // w0
  UILabel_o *v125; // x22
  UILabel_o *v126; // x22
  UILabel_o *v127; // x22
  UILabel_o *v128; // x22
  __int64 *v129; // x8
  UnityEngine_Object_o *v130; // x23
  uint32_t cctor_finished; // w8
  int v132; // w19
  UILabel_o *v133; // x22
  System_String_o *v134; // x23
  Il2CppObject *v135; // x0
  UILabel_o *v136; // x22
  UILabel_o *v137; // x23
  UILabel_o *v138; // x22
  UILabel_o *v139; // x22
  UILabel_o *v140; // x22
  int32_t v141; // w8
  UILabel_o *v142; // x22
  __int64 v143; // x1
  UnityEngine_GameObject_o *v144; // x22
  System_String_o *v145; // x1
  UILabel_o *fortificationAppointmentLabel; // x22
  float v147; // s0
  float v148; // s2
  float fortificationInfoRootObjOffsetY; // s10
  float v150; // s8
  float v151; // s9
  System_Collections_Generic_List_object__o *v152; // x22
  System_String_o *v153; // x23
  Il2CppObject *v154; // x0
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  struct System_Object_array *items; // x8
  _QWORD *v158; // x9
  __int64 size; // x10
  __int64 v160; // x1
  Il2CppClass **v161; // x0
  System_String_o *v162; // x23
  Il2CppObject *v163; // x0
  int32_t v164; // w2
  const MethodInfo *v165; // x3
  struct System_Object_array *v166; // x8
  _QWORD *v167; // x9
  __int64 v168; // x10
  __int64 v169; // x1
  Il2CppClass **v170; // x0
  int32_t v171; // w2
  const MethodInfo *v172; // x3
  struct System_Object_array *v173; // x8
  _QWORD *v174; // x9
  __int64 v175; // x10
  __int64 v176; // x1
  Il2CppClass **v177; // x0
  UnityEngine_Object_o *v178; // x22
  _BOOL4 isHeroineSvt; // w19
  UILabel_o *sealedStateLabel; // x22
  __int64 *v181; // x8
  bool v182; // w0
  UnityEngine_Object_o *v183; // x23
  bool v184; // w22
  bool v185; // w0
  UILabel_o *v186; // x22
  __int64 *v187; // x8
  UnityEngine_Object_o *v188; // x22
  System_String_o *v189; // x1
  UnityEngine_Object_o *v190; // x22
  UnityEngine_Object_o *v191; // x22
  int32_t v192; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  System_Text_StringBuilder_o *v194; // x22
  __int64 v195; // x2
  SkillInfo_array *v196; // x8
  __int64 v197; // x9
  unsigned __int64 v198; // x19
  __int64 v199; // x20
  __int64 v200; // x21
  SkillInfo_o *v201; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v204; // w25
  Il2CppObject *v205; // x24
  bool v206; // w25
  __int64 *v207; // x8
  UILabel_o *skillLvLabel; // x23
  UnityEngine_Object_o *v209; // x22
  UILabel_o *v210; // x22
  UILabel_o *v211; // x22
  __int64 *v212; // x8
  _BOOL4 isSkillUpItemNum; // w19
  UnityEngine_Object_o *v214; // x22
  bool v215; // w0
  SvtUseSkillData_o *AppendSkillData; // x0
  System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v218; // x24
  System_Text_StringBuilder_o *v219; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v221; // x9
  unsigned __int64 v222; // x19
  __int64 v223; // x20
  __int64 v224; // x21
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v226; // x0
  int32_t v227; // w26
  int32_t v228; // w0
  int v229; // t1
  Il2CppObject *v230; // x25
  bool v231; // w26
  __int64 *v232; // x8
  UILabel_o *v233; // x24
  UILabel_o *v234; // x22
  UILabel_o *v235; // x22
  UILabel_o *v236; // x22
  UnityEngine_Object_o *v237; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  __int64 v241; // x2
  __int64 v242; // x3
  __int64 v243; // x4
  Il2CppObject *v244; // x0
  struct ItemIconComponent_o *coinIcon; // x22
  int32_t v246; // w8
  SvtUseSkillData_o *v247; // x23
  System_Text_StringBuilder_o *v248; // x22
  struct System_Int32_array *v249; // x8
  __int64 v250; // x19
  char v251; // w27
  char v252; // w26
  char v253; // w25
  unsigned __int64 v254; // x21
  struct System_Int32_array *v255; // x8
  char *v256; // x0
  int v257; // t1
  int32_t v258; // w9
  int v259; // w8
  unsigned __int64 v260; // x29
  __int64 v261; // x26
  struct System_Int32_array *v262; // x8
  Il2CppObject *v263; // x24
  __int64 *v264; // x8
  char v265; // w26
  UILabel_o *v266; // x23
  UILabel_o *v267; // x22
  UILabel_o *v268; // x22
  __int64 *v269; // x8
  Il2CppObject *Master_object; // x22
  System_String_o *v271; // x23
  __int64 v272; // x2
  __int64 v273; // x3
  __int64 v274; // x4
  Il2CppObject *v275; // x0
  UnityEngine_Object_o *v276; // x22
  int32_t v277; // w2
  UnityEngine_Object_o *v278; // x22
  _BOOL4 v279; // w19
  UILabel_o *v280; // x22
  __int64 *v281; // x8
  UnityEngine_Object_o *v282; // x22
  System_String_o *v283; // x0
  int32_t v284; // w8
  UnityEngine_Object_o *v285; // x22
  _BOOL4 isEventJoin; // w19
  UILabel_o *v287; // x22
  __int64 *v288; // x8
  _BOOL4 isLvExceedItemNum; // w19
  UnityEngine_Object_o *v290; // x22
  bool v291; // w0
  System_String_o *v292; // x0
  UnityEngine_Object_o *v293; // x22
  UnityEngine_Object_o *v294; // x22
  const MethodInfo *v295; // x1
  int32_t v296; // w22
  struct ServantFaceIconComponent_o *v297; // x8
  bool v298; // w0
  UnityEngine_Object_o *v299; // x23
  bool v300; // w22
  bool v301; // w0
  UILabel_o *v302; // x22
  UILabel_o *v303; // x22
  struct UILabel_o *v304; // x22
  System_String_o *v305; // x1
  UnityEngine_Object_o *v306; // x22
  ServantCommandCardListComponent_o *v307; // x22
  UnityEngine_Object_o *v308; // x22
  _BOOL4 v309; // w19
  UILabel_o *v310; // x22
  __int64 *v311; // x8
  _BOOL4 isFriendshipExceedItemNum; // w19
  UnityEngine_Object_o *v313; // x22
  bool v314; // w0
  System_String_o *v315; // x0
  UnityEngine_Object_o *v316; // x22
  struct UILabel_o *v317; // x19
  System_String_o *v318; // x1
  UnityEngine_Object_o *v319; // x22
  char v320; // [xsp+20h] [xbp-D0h]
  int32_t v321; // [xsp+24h] [xbp-CCh]
  struct UILabel_o **v322; // [xsp+28h] [xbp-C8h]
  CombineServantListViewItemDraw_o *v323; // [xsp+30h] [xbp-C0h]
  CombineServantListViewItem_o *v324; // [xsp+38h] [xbp-B8h]
  struct UISprite_o **p_maskSprite; // [xsp+40h] [xbp-B0h]
  struct UILabel_o **v326; // [xsp+48h] [xbp-A8h]
  int32_t SkillOpenItemNum; // [xsp+54h] [xbp-9Ch] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+58h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+60h] [xbp-90h] BYREF
  MethodInfo v330; // [xsp+68h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v331; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v332; // 0:s0.4,4:s1.4,8:s2.4

  v9 = item;
  if ( (byte_4B06001 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, item);
    sub_1BC3008(&CombineServantListViewManager_TypeInfo, v11);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v12);
    sub_1BC3008(&DataManager_TypeInfo, v13);
    sub_1BC3008(&int_TypeInfo, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v19);
    sub_1BC3008(&LocalizationManager_TypeInfo, v20);
    sub_1BC3008(&NetworkManager_TypeInfo, v21);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v22);
    sub_1BC3008(&System_Text_StringBuilder_TypeInfo, v23);
    sub_1BC3008(&string_TypeInfo, v24);
    sub_1BC3008(&TutorialFlag_TypeInfo, v25);
    sub_1BC3008(&StringLiteral_12120/*"SKILL_LVDISP_TXT"*/, v26);
    sub_1BC3008(&StringLiteral_10202/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, v27);
    sub_1BC3008(&StringLiteral_9205/*"NONSELECT_UNDER_STATUS_MAX"*/, v28);
    sub_1BC3008(&StringLiteral_6424/*"FORTIFICATION_APPOINTMENT"*/, v29);
    sub_1BC3008(&StringLiteral_3533/*"COMBINE_CAN_STATUS_UP_INFO"*/, v30);
    sub_1BC3008(&StringLiteral_8715/*"MSG_CAMPAIGN_COMBINE_EXP"*/, v31);
    sub_1BC3008(&StringLiteral_12118/*"SKILL_LVDISP_ENABLE_TXT"*/, v32);
    sub_1BC3008(&StringLiteral_1974/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/, v33);
    sub_1BC3008(&StringLiteral_9200/*"NONSELECT_MATERIAL"*/, v34);
    sub_1BC3008(&StringLiteral_22883/*"ribbon_noblephantasmup_01"*/, v35);
    sub_1BC3008(&StringLiteral_9199/*"NONSELECT_LIMITUP_BASE"*/, v36);
    sub_1BC3008(&StringLiteral_1975/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/, v37);
    sub_1BC3008(&StringLiteral_10010/*"PARTY_MEMBER_TXT"*/, v38);
    sub_1BC3008(&StringLiteral_3261/*"CAN_SELECT_SEALED_SERVANT_BASE"*/, v39);
    sub_1BC3008(&StringLiteral_9203/*"NONSELECT_NPUP_BASE"*/, v40);
    sub_1BC3008(&StringLiteral_12393/*"SUPPORT_MEMBER"*/, v41);
    sub_1BC3008(&StringLiteral_8711/*"MSG_ABLED_LIMITUP"*/, v42);
    sub_1BC3008(&StringLiteral_11436/*"SELECT_PUSH"*/, v43);
    sub_1BC3008(&StringLiteral_11406/*"SELECT_CANNOT"*/, v44);
    sub_1BC3008(&StringLiteral_9262/*"NPUP_BASE"*/, v45);
    sub_1BC3008(&StringLiteral_1976/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/, v46);
    sub_1BC3008(&StringLiteral_12117/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/, v47);
    sub_1BC3008(&StringLiteral_11437/*"SELECT_SERVANT_EVENT_JOIN"*/, v48);
    sub_1BC3008(&StringLiteral_9250/*"NO_SELECT_FRIENDSHIP_EXCEED"*/, v49);
    sub_1BC3008(&StringLiteral_11330/*"SAME_SERVANT"*/, v50);
    sub_1BC3008(&StringLiteral_8710/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, v51);
    sub_1BC3008(&StringLiteral_9201/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v52);
    sub_1BC3008(&StringLiteral_24811/*"{0:#,0}"*/, v53);
    sub_1BC3008(&StringLiteral_12119/*"SKILL_LVDISP_SINGLE_TXT"*/, v54);
    sub_1BC3008(&StringLiteral_8712/*"MSG_ABLED_SKILLUP"*/, v55);
    sub_1BC3008(&StringLiteral_9202/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, v56);
    sub_1BC3008(&StringLiteral_9206/*"NONSKILL_TXT"*/, v57);
    sub_1BC3008(&StringLiteral_8236/*"LOCKMODE_SELECTED_SERVANT"*/, v58);
    sub_1BC3008(&StringLiteral_6343/*"FAVORITE_SERVANT"*/, v59);
    sub_1BC3008(&StringLiteral_3327/*"CHOICE_SERVANT"*/, v60);
    sub_1BC3008(&StringLiteral_10931/*"RECOMMEND_SUPPORT_MEMBER"*/, v61);
    sub_1BC3008(&StringLiteral_8714/*"MSG_ABLED_TDUP"*/, v62);
    sub_1BC3008(&StringLiteral_11400/*"SEAL_COMBINE_LIMIT_THIRD"*/, v63);
    sub_1BC3008(&StringLiteral_9198/*"NONSELECT_BASE_ALLMAX"*/, v64);
    sub_1BC3008(&StringLiteral_9251/*"NO_SELECT_LVEXCEED"*/, v65);
    sub_1BC3008(&StringLiteral_1/*""*/, v66);
    sub_1BC3008(&StringLiteral_9204/*"NONSELECT_SKILLUP_BASE"*/, v67);
    sub_1BC3008(&StringLiteral_11435/*"SELECT_PROTECTED_EVENT_SVT"*/, v68);
    sub_1BC3008(&StringLiteral_6938/*"GRAND_MEMBER"*/, v69);
    sub_1BC3008(&StringLiteral_8237/*"LOCK_SERVANT"*/, v70);
    sub_1BC3008(&StringLiteral_9197/*"NONSEELECT_STATUSUP_MAX"*/, v71);
    byte_4B06001 = 1;
  }
  v330.invoker_method = 0LL;
  skillInfoList = 0LL;
  v330.methodPointer = 0LL;
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
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
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
      goto LABEL_1096;
    ServantFaceIconComponent__Set_40035864(
      servantFaceIcon,
      (UserServantEntity_o *)gameObject,
      iconLabelInfo1,
      v9->fields.iconLabelInfo2,
      0LL);
    subIconLabel = this->fields.subIconLabel;
    rarity = v9->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_1096;
    ServantFaceIconComponent__Set_40035864(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0LL, 0LL);
    gameObject = (__int64)v9->fields.iconLabelInfo2;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = IconLabelInfo__IsClear((IconLabelInfo_o *)gameObject, 0LL);
    subIconLabel = this->fields.subIconLabel;
    if ( (gameObject & 1) == 0 )
    {
      if ( !subIconLabel )
        goto LABEL_1096;
      UIIconLabel__Set(this->fields.subIconLabel, v9->fields.iconLabelInfo2, 0LL);
      goto LABEL_22;
    }
    rarity = v9->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
  }
  v80 = *(_DWORD *)(gameObject + 296);
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
  if ( !gameObject || !subIconLabel )
    goto LABEL_1096;
  UIIconLabel__Set_40054380(
    subIconLabel,
    36,
    rarity,
    v80,
    0,
    0LL,
    0,
    0,
    *(_DWORD *)(gameObject + 256),
    v9->fields.actualRarity,
    0LL);
LABEL_22:
  CombineServantListViewItem__GetNpInfo(
    v9,
    (int32_t *)&v330.invoker_method + 1,
    (int32_t *)&v330.invoker_method,
    (int32_t *)&v330.methodPointer + 1,
    0LL);
  gameObject = (__int64)this->fields.lockImg;
  if ( !gameObject )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_statusTxtLb = &this->fields.statusTxtLb;
  gameObject = (__int64)this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.maskSprite;
  p_maskSprite = &this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_maskLabel = &this->fields.maskLabel;
  gameObject = (__int64)this->fields.maskLabel;
  if ( !gameObject )
    goto LABEL_1096;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)*p_maskLabel;
  if ( !*p_maskLabel )
    goto LABEL_1096;
  v84 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !byte_4AFBDB6 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v83);
    byte_4AFBDB6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v84, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1096;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1096;
  v86 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !byte_4AFBDB6 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v85);
    byte_4AFBDB6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v86, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.partyIcon;
  if ( !gameObject )
    goto LABEL_1096;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.removeImg;
  if ( !gameObject )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1096;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.choiceImg;
  if ( !gameObject )
    goto LABEL_1096;
  v87 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = CombineServantListViewItem__get_IsDispChoice(v9, 0LL);
  if ( !v87 )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive(v87, gameObject & 1, 0LL);
  gameObject = (__int64)this->fields.switchInfoComp;
  if ( !gameObject )
    goto LABEL_1096;
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.fortificationRootObj;
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.fortificationNameLabel;
  if ( !gameObject )
    goto LABEL_1096;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)this->fields.fortificationDetailNameLabel;
  if ( !gameObject )
    goto LABEL_1096;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)this->fields.fortificationAppointmentLabel;
  if ( !gameObject )
    goto LABEL_1096;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushImg, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.pushImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9->fields.isPush, 0LL);
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_1096;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)gameObject, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9->fields.isMaterialTdSvt, 0LL);
    if ( v9->fields.isMaterialTdSvt )
    {
      v90 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v90, (System_String_o *)StringLiteral_22883/*"ribbon_noblephantasmup_01"*/, 0LL);
      v92 = v9->fields.type;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      if ( CombineServantListViewManager__GetSortKind(v92, v91) == 1 )
      {
        gameObject = (__int64)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_1096;
        v331.fields.x = 0.65;
        v331.fields.y = 1.0;
        v331.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v331, 0LL);
      }
    }
  }
  v93 = v9->fields.type;
  v326 = &this->fields.maskLabel;
  switch ( v93 )
  {
    case 5:
      gameObject = (__int64)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_1096;
      v100 = SHIDWORD(v330.invoker_method) <= 0 ? -1 : LODWORD(v330.invoker_method);
      UIIconLabel__Set_40054380(
        (UIIconLabel_o *)gameObject,
        33,
        v100,
        SHIDWORD(v330.methodPointer),
        0,
        0LL,
        0,
        0,
        0,
        0,
        0LL);
      gameObject = (__int64)this->fields.npLvInfo;
      if ( !gameObject )
        goto LABEL_1096;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      goto LABEL_106;
    case 1:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1096;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        v9->fields.currentLimitCnt,
        v9->fields.maxLimitCnt,
        0LL);
      if ( CombineServantListViewItem__get_IsProtected(v9, 0LL) && v9->fields.type != 5 )
      {
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1096;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1096;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v137 = *v326;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11435/*"SELECT_PROTECTED_EVENT_SVT"*/, 0LL);
        if ( !v137 )
          goto LABEL_1096;
        UILabel__set_text(v137, (System_String_o *)gameObject, 0LL);
        v101 = 1;
LABEL_107:
        if ( v9->fields.isParty )
        {
          gameObject = (__int64)this->fields.partyIcon;
          if ( !gameObject )
            goto LABEL_1096;
          FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v102 = *v326;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10010/*"PARTY_MEMBER_TXT"*/, 0LL);
          if ( !v102 )
            goto LABEL_1096;
          UILabel__set_text(v102, (System_String_o *)gameObject, 0LL);
          v101 = 1;
        }
        if ( v9->fields.isFavorite )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v103 = *v326;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6343/*"FAVORITE_SERVANT"*/, 0LL);
          if ( !v103 )
            goto LABEL_1096;
          UILabel__set_text(v103, (System_String_o *)gameObject, 0LL);
          v101 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
        {
          gameObject = (__int64)this->fields.lockImg;
          if ( !gameObject )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v104 = *v326;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8237/*"LOCK_SERVANT"*/, 0LL);
          if ( !v104 )
            goto LABEL_1096;
          UILabel__set_text(v104, (System_String_o *)gameObject, 0LL);
          v101 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispChoice(v9, 0LL) )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v106 = *v326;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"CHOICE_SERVANT"*/, 0LL);
          if ( !v106 )
            goto LABEL_1096;
          UILabel__set_text(v106, (System_String_o *)gameObject, 0LL);
          v101 = 1;
        }
        if ( v9->fields.isLimitCntTarget )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v107 = *v326;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11330/*"SAME_SERVANT"*/, 0LL);
          if ( !v107 )
            goto LABEL_1096;
          UILabel__set_text(v107, (System_String_o *)gameObject, 0LL);
          v101 = 1;
        }
        if ( v9->fields.isHeroineSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v108 = *v326;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9200/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v108 )
            goto LABEL_1096;
          UILabel__set_text(v108, (System_String_o *)gameObject, 0LL);
          v101 = 1;
        }
        if ( v9->fields.isStatusUpSvt && !v9->fields.isCanStUp )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v109 = *v326;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9200/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v109 )
            goto LABEL_1096;
          UILabel__set_text(v109, (System_String_o *)gameObject, 0LL);
          v101 = 1;
        }
        if ( v9->fields.isEventJoin )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v110 = *v326;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11437/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
          if ( !v110 )
            goto LABEL_1096;
          UILabel__set_text(v110, (System_String_o *)gameObject, 0LL);
          v101 = 1;
        }
        if ( v9->fields.isUseSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v111 = *v326;
          isParty = v9->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v113 = &StringLiteral_12393/*"SUPPORT_MEMBER"*/;
          if ( isParty )
            v113 = &StringLiteral_10010/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v113, 0LL);
          if ( !v111 )
            goto LABEL_1096;
          UILabel__set_text(v111, (System_String_o *)gameObject, 0LL);
          v101 = 1;
        }
        if ( v9->fields.isUseRecommendSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v114 = *v326;
          v115 = v9->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v116 = &StringLiteral_10931/*"RECOMMEND_SUPPORT_MEMBER"*/;
          if ( v115 )
            v116 = &StringLiteral_10010/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v116, 0LL);
          if ( !v114 )
            goto LABEL_1096;
          UILabel__set_text(v114, (System_String_o *)gameObject, 0LL);
          if ( !v9->fields.isParty )
          {
            gameObject = (__int64)*v326;
            if ( !*v326 )
              goto LABEL_1096;
            UILabel__SetCondensedScale((UILabel_o *)gameObject, 106, 0, 0LL);
          }
          v101 = 1;
        }
        if ( v9->fields.isPush )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v117 = *v326;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11436/*"SELECT_PUSH"*/, 0LL);
          if ( !v117 )
            goto LABEL_1096;
          UILabel__set_text(v117, (System_String_o *)gameObject, 0LL);
          gameObject = (__int64)*v326;
          if ( !*v326 )
            goto LABEL_1096;
          v119 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !byte_4AFBDB6 )
          {
            sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v118);
            byte_4AFBDB6 = 1;
          }
          GameObjectExtensions__SetLocalScale(v119, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          v101 = 1;
        }
        if ( v9->fields.isGrandSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v120 = *v326;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6938/*"GRAND_MEMBER"*/, 0LL);
          if ( !v120 )
            goto LABEL_1096;
          UILabel__set_text(v120, (System_String_o *)gameObject, 0LL);
          v101 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, v9, v105);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(v9, 0LL);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        v123 = CanNotSelect;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v124 = UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
        if ( v123 )
        {
          if ( !v124 )
            break;
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1096;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1096;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          if ( v9->fields.isMaxNextLv || v9->fields.isBaseLvMax )
          {
            if ( !v9->fields.isCanStUp )
            {
              if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(v9, 0LL) )
              {
                v138 = *v326;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9201/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
                if ( !v138 )
                  goto LABEL_1096;
                UILabel__set_text(v138, (System_String_o *)gameObject, 0LL);
                if ( v9->fields.type != 5 )
                  break;
                v128 = *v326;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v129 = &StringLiteral_9203/*"NONSELECT_NPUP_BASE"*/;
LABEL_324:
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v129, 0LL);
                if ( !v128 )
                  goto LABEL_1096;
LABEL_325:
                UILabel__set_text(v128, (System_String_o *)gameObject, 0LL);
              }
LABEL_326:
              v141 = v9->fields.type;
              if ( v141 != 5 )
                goto LABEL_409;
              if ( v9->fields.isBaseSvt )
              {
                v142 = *v326;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9262/*"NPUP_BASE"*/, 0LL);
                if ( !v142 )
                  goto LABEL_1096;
                UILabel__set_text(v142, (System_String_o *)gameObject, 0LL);
                gameObject = (__int64)*v326;
                if ( !*v326 )
                  goto LABEL_1096;
                v144 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !byte_4AFBDB6 )
                {
                  sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v143);
                  byte_4AFBDB6 = 1;
                }
                GameObjectExtensions__SetLocalScale(v144, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
              }
              break;
            }
          }
          else if ( !v9->fields.isCanStUp )
          {
            if ( v9->fields.isFortification )
            {
              gameObject = (__int64)*v326;
              if ( !*v326 )
                goto LABEL_1096;
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1096;
              gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_1096;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1096;
              UILabel__set_text((UILabel_o *)gameObject, v9->fields.fortificationName, 0LL);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1096;
              UILabel__set_text((UILabel_o *)gameObject, v9->fields.fortificationDetailName, 0LL);
              fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6424/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
              if ( !fortificationAppointmentLabel )
                goto LABEL_1096;
              UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)gameObject, 0LL);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1096;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1096;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL);
              if ( v9->fields.type != 5 )
                break;
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1096;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_1096;
              *(UnityEngine_Vector3_o *)&v147 = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)gameObject,
                                                  0LL);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1096;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              v150 = v147;
              v151 = v148;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_1096;
              v332.fields.x = v150;
              v332.fields.y = fortificationInfoRootObjOffsetY;
              v332.fields.z = v151;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v332, 0LL);
              goto LABEL_326;
            }
            if ( (v101 & 1) == 0 )
            {
              v128 = *v326;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9200/*"NONSELECT_MATERIAL"*/, 0LL);
              if ( !v128 )
                goto LABEL_1096;
              goto LABEL_325;
            }
            goto LABEL_326;
          }
          if ( v9->fields.isStatusUpSvt )
          {
            if ( v9->fields.rarity <= 3 )
            {
              if ( v9->fields.isAtkUpMax || v9->fields.isHpUpMax )
              {
                v139 = *v326;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9205/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v139 )
                  goto LABEL_1096;
                UILabel__set_text(v139, (System_String_o *)gameObject, 0LL);
              }
              if ( v9->fields.isAtkSecondUpMax || v9->fields.isHpSecondUpMax )
              {
                v140 = *v326;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9205/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v140 )
                  goto LABEL_1096;
                UILabel__set_text(v140, (System_String_o *)gameObject, 0LL);
              }
              if ( !v9->fields.isNotSelectStatusUpAtk && !v9->fields.isNotSelectStatusUpHp )
                goto LABEL_326;
              v128 = *v326;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v129 = &StringLiteral_9205/*"NONSELECT_UNDER_STATUS_MAX"*/;
            }
            else
            {
              if ( v9->fields.atkBase >= 1 )
              {
                if ( v9->fields.isAtkSecondUpMax || v9->fields.isNotSelectSecondStatusUpAtk )
                {
                  v125 = *v326;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9205/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                  if ( !v125 )
                    goto LABEL_1096;
                  UILabel__set_text(v125, (System_String_o *)gameObject, 0LL);
                }
                if ( !v9->fields.isAtkUpMax )
                {
                  v126 = *v326;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9202/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0LL);
                  if ( !v126 )
                    goto LABEL_1096;
                  UILabel__set_text(v126, (System_String_o *)gameObject, 0LL);
                }
              }
              if ( v9->fields.hpBase < 1 )
                goto LABEL_326;
              if ( v9->fields.isHpSecondUpMax || v9->fields.isNotSelectSecondStatusUpHp )
              {
                v127 = *v326;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9205/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v127 )
                  goto LABEL_1096;
                UILabel__set_text(v127, (System_String_o *)gameObject, 0LL);
              }
              if ( v9->fields.isHpUpMax )
                goto LABEL_326;
              v128 = *v326;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v129 = &StringLiteral_9202/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
            }
            goto LABEL_324;
          }
          goto LABEL_326;
        }
        if ( v124 )
        {
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1096;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1096;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        v130 = (UnityEngine_Object_o *)this->fields.baseButton;
        cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
        if ( v9->fields.isMaxSelect )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v130, 0LL, 0LL) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1096;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1096;
            v132 = 1;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
LABEL_281:
            if ( v9->fields.type == 1 && CombineServantListViewItem__get_IsOrganization(v9, 0LL) && !isSelectEnable )
            {
              if ( !(v132 & 1 | !ListViewItem__get_IsSelect((ListViewItem_o *)v9, 0LL)) )
                break;
            }
            else if ( !v132 )
            {
              break;
            }
            gameObject = (__int64)*p_maskSprite;
            if ( !*p_maskSprite )
              goto LABEL_1096;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_1096;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            v136 = *v326;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9200/*"NONSELECT_MATERIAL"*/, 0LL);
            if ( !v136 )
              goto LABEL_1096;
            UILabel__set_text(v136, (System_String_o *)gameObject, 0LL);
            break;
          }
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v130, 0LL, 0LL) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1096;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1096;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          }
        }
        v132 = 0;
        goto LABEL_281;
      }
LABEL_106:
      v101 = 0;
      goto LABEL_107;
    case 0:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1096;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        v9->fields.currentLimitCnt,
        v9->fields.maxLimitCnt,
        0LL);
      if ( v9->fields.isParty )
      {
        gameObject = (__int64)this->fields.partyIcon;
        if ( !gameObject )
          goto LABEL_1096;
        FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
      }
      if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
      {
        gameObject = (__int64)this->fields.lockImg;
        if ( !gameObject )
          goto LABEL_1096;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1096;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      }
      CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL);
      v95 = (UnityEngine_Object_o *)this->fields.baseButton;
      v96 = CanNotBaseSelect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v97 = UnityEngine_Object__op_Inequality(v95, 0LL, 0LL);
      if ( v96 )
      {
        if ( !v97 )
          goto LABEL_404;
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1096;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1096;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1096;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1096;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        if ( v9->fields.isLvMax )
        {
          if ( v9->fields.isStatusUpSvt )
            goto LABEL_337;
          if ( !v9->fields.isExpUpSvt )
          {
            v98 = *v326;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v99 = &StringLiteral_9198/*"NONSELECT_BASE_ALLMAX"*/;
            goto LABEL_340;
          }
        }
        else if ( v9->fields.isStatusUpSvt )
        {
          goto LABEL_337;
        }
        if ( !v9->fields.isExpUpSvt )
        {
          if ( !v9->fields.isHeroineSvt )
          {
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1096;
            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            gameObject = (__int64)*v326;
            if ( !*v326 )
              goto LABEL_1096;
            v145 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_342;
          }
          v98 = *v326;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v99 = &StringLiteral_11406/*"SELECT_CANNOT"*/;
LABEL_340:
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v99, 0LL);
          if ( !v98 )
            goto LABEL_1096;
          v145 = (System_String_o *)gameObject;
          gameObject = (__int64)v98;
LABEL_342:
          UILabel__set_text((UILabel_o *)gameObject, v145, 0LL);
          gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
          if ( !gameObject )
            goto LABEL_1096;
          CombineServantListViewNoticeTween__RemoveTarget(
            (CombineServantListViewNoticeTween_o *)gameObject,
            *p_statusTxtLb,
            0LL);
LABEL_404:
          if ( v9->fields.isBaseSvt )
          {
            gameObject = (__int64)this->fields.removeImg;
            if ( !gameObject )
              goto LABEL_1096;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_1096;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          }
          break;
        }
LABEL_337:
        v98 = *v326;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v99 = &StringLiteral_9200/*"NONSELECT_MATERIAL"*/;
        goto LABEL_340;
      }
      if ( !v97 )
        goto LABEL_404;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1096;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1096;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)*v326;
      if ( !*v326 )
        goto LABEL_1096;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( v9->fields.isCombineExpCampaignTarget )
      {
        if ( v9->fields.isDispAtkStatusUpInfo
          && CombineServantListViewItem__get_IsAtkAdjustMax(v9, 0LL)
          && !CombineServantListViewItem__get_IsSecondAtkAdjustMax(v9, 0LL) )
        {
          v152 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v152,
            (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v153 = LocalizationManager__Get((System_String_o *)StringLiteral_8715/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v330.methodPointer = v9->fields.combineExpCampaignValue;
          v154 = (Il2CppObject *)System_Single__ToString(*(float *)&v330.methodPointer, &v330);
          gameObject = (__int64)System_String__Format(v153, v154, 0LL);
          if ( !v152 )
            goto LABEL_1096;
          items = v152->fields._items;
          v158 = Method_System_Collections_Generic_List_string__Add__;
          ++v152->fields._version;
          if ( !items )
            goto LABEL_1096;
          size = v152->fields._size;
          v160 = gameObject;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v152,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
          }
          else
          {
            v161 = &items->obj.klass + size;
            v152->fields._size = size + 1;
            v161[4] = (Il2CppClass *)v160;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v161 + 4), v160, v155, v156);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3533/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v173 = v152->fields._items;
          v174 = Method_System_Collections_Generic_List_string__Add__;
          ++v152->fields._version;
          if ( !v173 )
            goto LABEL_1096;
        }
        else
        {
          if ( !v9->fields.isDispHpStatusUpInfo
            || !CombineServantListViewItem__get_IsHpAdjustMax(v9, 0LL)
            || CombineServantListViewItem__get_IsSecondHpAdjustMax(v9, 0LL) )
          {
            gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
            if ( !gameObject )
              goto LABEL_1096;
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              *p_statusTxtLb,
              0LL);
            v133 = *p_statusTxtLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v134 = LocalizationManager__Get((System_String_o *)StringLiteral_8715/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
            *(float *)&v330.methodPointer = v9->fields.combineExpCampaignValue;
            v135 = (Il2CppObject *)System_Single__ToString(*(float *)&v330.methodPointer, &v330);
            gameObject = (__int64)System_String__Format(v134, v135, 0LL);
            if ( !v133 )
              goto LABEL_1096;
LABEL_273:
            UILabel__set_text(v133, (System_String_o *)gameObject, 0LL);
LABEL_401:
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1096;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_1096;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            goto LABEL_404;
          }
          v152 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v152,
            (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v162 = LocalizationManager__Get((System_String_o *)StringLiteral_8715/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v330.methodPointer = v9->fields.combineExpCampaignValue;
          v163 = (Il2CppObject *)System_Single__ToString(*(float *)&v330.methodPointer, &v330);
          gameObject = (__int64)System_String__Format(v162, v163, 0LL);
          if ( !v152 )
            goto LABEL_1096;
          v166 = v152->fields._items;
          v167 = Method_System_Collections_Generic_List_string__Add__;
          ++v152->fields._version;
          if ( !v166 )
            goto LABEL_1096;
          v168 = v152->fields._size;
          v169 = gameObject;
          if ( (unsigned int)v168 >= v166->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v152,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v167[4] + 192LL) + 112LL));
          }
          else
          {
            v170 = &v166->obj.klass + v168;
            v152->fields._size = v168 + 1;
            v170[4] = (Il2CppClass *)v169;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v170 + 4), v169, v164, v165);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3533/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v173 = v152->fields._items;
          v174 = Method_System_Collections_Generic_List_string__Add__;
          ++v152->fields._version;
          if ( !v173 )
            goto LABEL_1096;
        }
        v175 = v152->fields._size;
        v176 = gameObject;
        if ( (unsigned int)v175 >= v173->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v152,
            (Il2CppObject *)gameObject,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v174[4] + 192LL) + 112LL));
        }
        else
        {
          v177 = &v173->obj.klass + v175;
          v152->fields._size = v175 + 1;
          v177[4] = (Il2CppClass *)v176;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v177 + 4), v176, v171, v172);
        }
        gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1096;
        CombineServantListViewNoticeTween__AddTarget(
          (CombineServantListViewNoticeTween_o *)gameObject,
          *p_statusTxtLb,
          (System_Collections_Generic_List_string__o *)v152,
          0LL);
        gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1096;
        CombineServantListViewNoticeTween__SetTexts((CombineServantListViewNoticeTween_o *)gameObject, 0, 0LL);
        goto LABEL_401;
      }
      gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
      if ( !gameObject )
        goto LABEL_1096;
      CombineServantListViewNoticeTween__RemoveTarget(
        (CombineServantListViewNoticeTween_o *)gameObject,
        *p_statusTxtLb,
        0LL);
      if ( v9->fields.isDispAtkStatusUpInfo )
      {
        if ( !CombineServantListViewItem__get_IsAtkAdjustMax(v9, 0LL)
          || CombineServantListViewItem__get_IsSecondAtkAdjustMax(v9, 0LL) )
        {
          goto LABEL_404;
        }
      }
      else if ( !v9->fields.isDispHpStatusUpInfo
             || !CombineServantListViewItem__get_IsHpAdjustMax(v9, 0LL)
             || CombineServantListViewItem__get_IsSecondHpAdjustMax(v9, 0LL) )
      {
        goto LABEL_404;
      }
      v133 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3533/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
      if ( !v133 )
        goto LABEL_1096;
      goto LABEL_273;
  }
  v141 = v9->fields.type;
LABEL_409:
  if ( v141 == 9 )
  {
    gameObject = (__int64)this->fields.limitCountIcon;
    if ( !gameObject )
      goto LABEL_1096;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)gameObject,
      v9->fields.currentLimitCnt,
      v9->fields.maxLimitCnt,
      0LL);
    if ( v9->fields.isParty )
    {
      gameObject = (__int64)this->fields.partyIcon;
      if ( !gameObject )
        goto LABEL_1096;
      FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
    }
    if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_1096;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1096;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    }
    v182 = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL);
    v183 = (UnityEngine_Object_o *)this->fields.baseButton;
    v184 = v182;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v185 = UnityEngine_Object__op_Inequality(v183, 0LL, 0LL);
    if ( !v184 )
    {
      if ( !v185 )
        goto LABEL_498;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1096;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1096;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)*v326;
      if ( !*v326 )
        goto LABEL_1096;
      v189 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_497;
    }
    if ( !v185 )
      goto LABEL_498;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( v9->fields.isHeroineSvt || v9->fields.isEventJoin || v9->fields.isIgnoreCombineLimitSpecial )
    {
      v186 = *v326;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v187 = &StringLiteral_9200/*"NONSELECT_MATERIAL"*/;
    }
    else if ( v9->fields.isLimitCntMax )
    {
      v186 = *v326;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v187 = &StringLiteral_9199/*"NONSELECT_LIMITUP_BASE"*/;
    }
    else
    {
      if ( !v9->fields.isSealCombineLimit )
        goto LABEL_498;
      v186 = *v326;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v187 = &StringLiteral_11400/*"SEAL_COMBINE_LIMIT_THIRD"*/;
    }
LABEL_495:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v187, 0LL);
    if ( !v186 )
      goto LABEL_1096;
    v189 = (System_String_o *)gameObject;
    gameObject = (__int64)v186;
LABEL_497:
    UILabel__set_text((UILabel_o *)gameObject, v189, 0LL);
    goto LABEL_498;
  }
  if ( v141 != 2 )
    goto LABEL_502;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1096;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    v9->fields.currentLimitCnt,
    v9->fields.maxLimitCnt,
    0LL);
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1096;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    v178 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v178, 0LL, 0LL) )
      goto LABEL_484;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    isHeroineSvt = v9->fields.isHeroineSvt;
    sealedStateLabel = *v326;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isHeroineSvt )
      v181 = &StringLiteral_9200/*"NONSELECT_MATERIAL"*/;
    else
      v181 = &StringLiteral_9199/*"NONSELECT_LIMITUP_BASE"*/;
LABEL_482:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v181, 0LL);
    if ( !sealedStateLabel )
      goto LABEL_1096;
    UILabel__set_text(sealedStateLabel, (System_String_o *)gameObject, 0LL);
    goto LABEL_484;
  }
  if ( v9->fields.isSealedLimitCount && v9->fields.isLimitCntMax )
  {
    v188 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v188, 0LL, 0LL) )
      goto LABEL_484;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)this->fields.sealedStateLabel;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    sealedStateLabel = this->fields.sealedStateLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v181 = &StringLiteral_3261/*"CAN_SELECT_SEALED_SERVANT_BASE"*/;
    goto LABEL_482;
  }
  if ( v9->fields.isLvMax && v9->fields.isLimitUpItemNum && !v9->fields.isSealCombineLimit )
  {
    if ( !v9->fields.isLimitCntMax )
    {
      v319 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v319, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1096;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1096;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1096;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1096;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = (__int64)*v326;
        if ( !*v326 )
          goto LABEL_1096;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        gameObject = (__int64)*p_statusTxtLb;
        if ( !*p_statusTxtLb )
          goto LABEL_1096;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1096;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v186 = *p_statusTxtLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v187 = &StringLiteral_8711/*"MSG_ABLED_LIMITUP"*/;
        goto LABEL_495;
      }
    }
  }
  else
  {
    v190 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v190, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
  }
LABEL_484:
  if ( v9->fields.isSealedLimitCount )
  {
    v191 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v191, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)this->fields.sealedStateLabel;
      if ( !gameObject )
        goto LABEL_1096;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1096;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v186 = this->fields.sealedStateLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v187 = &StringLiteral_3261/*"CAN_SELECT_SEALED_SERVANT_BASE"*/;
      goto LABEL_495;
    }
  }
LABEL_498:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_502:
  v192 = v9->fields.type;
  v323 = this;
  v324 = v9;
  v321 = modeKind;
  v322 = &this->fields.statusTxtLb;
  if ( v192 != 3 )
    goto LABEL_578;
  CombineServantListViewItem__GetSkillInfo(v9, &skillInfoList, 0LL);
  enableSkillUp = v9->fields.enableSkillUp;
  v194 = (System_Text_StringBuilder_o *)sub_1BC3254(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v194, 0LL);
  v196 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_1096;
  v197 = *(_QWORD *)&skillInfoList->max_length;
  if ( (int)v197 >= 1 )
  {
    v198 = 0LL;
    v199 = (unsigned int)(v197 - 1);
    v200 = (unsigned int)*(_QWORD *)&skillInfoList->max_length;
    while ( 1 )
    {
      if ( v198 >= v196->max_length )
        goto LABEL_1097;
      v201 = v196->m_Items[v198];
      if ( v201 )
      {
        lv = v201->fields.lv;
        p_lv = &v201->fields.lv;
        v204 = *(p_lv - 1);
        if ( lv > 0 )
        {
          gameObject = (__int64)System_Int32__ToString((int32_t)p_lv, 0LL);
          goto LABEL_514;
        }
      }
      else
      {
        v204 = -1;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9206/*"NONSKILL_TXT"*/, 0LL);
LABEL_514:
      v205 = (Il2CppObject *)gameObject;
      if ( enableSkillUp )
      {
        v206 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v204,
                 (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v199 == v198 )
        {
          v207 = &StringLiteral_12117/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v206 )
            v207 = &StringLiteral_12119/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v207 = &StringLiteral_12118/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v206 )
            v207 = &StringLiteral_12120/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v207, 0LL);
        if ( v194 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v194, (System_String_o *)gameObject, v205, 0LL);
          if ( v200 == ++v198 )
            goto LABEL_528;
          v196 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_1096;
    }
  }
  if ( !v194 )
    goto LABEL_1096;
LABEL_528:
  skillLvLabel = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v194->klass->vtable._3_ToString.method)(
                 v194,
                 v194->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !skillLvLabel )
    goto LABEL_1096;
  UILabel__set_text(skillLvLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  modeKind = v321;
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1096;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    v209 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v209, 0LL, 0LL) )
      goto LABEL_573;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v210 = *v326;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9204/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v210 )
      goto LABEL_1096;
    UILabel__set_text(v210, (System_String_o *)gameObject, 0LL);
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_573;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_39466584(126, 0LL) )
      goto LABEL_573;
    v211 = *v326;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v212 = &StringLiteral_11406/*"SELECT_CANNOT"*/;
    goto LABEL_567;
  }
  isSkillUpItemNum = v9->fields.isSkillUpItemNum;
  v214 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v215 = UnityEngine_Object__op_Inequality(v214, 0LL, 0LL);
  if ( !isSkillUpItemNum )
  {
    if ( v215 )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_573;
  }
  if ( v215 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*v322;
    if ( !*v322 )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v211 = *v322;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v212 = &StringLiteral_8712/*"MSG_ABLED_SKILLUP"*/;
LABEL_567:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v212, 0LL);
    if ( !v211 )
      goto LABEL_1096;
    UILabel__set_text(v211, (System_String_o *)gameObject, 0LL);
  }
LABEL_573:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v192 = v9->fields.type;
LABEL_578:
  if ( v192 != 11 )
    goto LABEL_673;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(v9, 0LL);
  enableAppendSkillUp = v9->fields.enableAppendSkillUp;
  v218 = AppendSkillData;
  v219 = (System_Text_StringBuilder_o *)sub_1BC3254(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v219, 0LL);
  if ( !v218 )
    goto LABEL_1096;
  svtUseSkillIdList = v218->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_1096;
  v221 = *(_QWORD *)&svtUseSkillIdList->max_length;
  if ( (int)v221 >= 1 )
  {
    v222 = 0LL;
    v223 = (unsigned int)(v221 - 1);
    v224 = (unsigned int)*(_QWORD *)&svtUseSkillIdList->max_length;
    while ( v222 < svtUseSkillIdList->max_length )
    {
      svtSkillLvList = v218->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_1096;
      if ( v222 >= svtSkillLvList->max_length )
        break;
      v226 = (__int64)svtSkillLvList + 4 * v222;
      v227 = svtUseSkillIdList->m_Items[v222 + 1];
      v229 = *(_DWORD *)(v226 + 32);
      v228 = v226 + 32;
      if ( v229 <= 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9206/*"NONSKILL_TXT"*/, 0LL);
      }
      else
      {
        gameObject = (__int64)System_Int32__ToString(v228, 0LL);
      }
      v230 = (Il2CppObject *)gameObject;
      if ( enableAppendSkillUp )
      {
        v231 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v227,
                 (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v222 == v223 )
        {
          v232 = &StringLiteral_12117/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v231 )
            v232 = &StringLiteral_12119/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v232 = &StringLiteral_12118/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v231 )
            v232 = &StringLiteral_12120/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v232, 0LL);
        if ( v219 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v219, (System_String_o *)gameObject, v230, 0LL);
          if ( ++v222 == v224 )
            goto LABEL_605;
          svtUseSkillIdList = v218->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_1096;
    }
LABEL_1097:
    sub_1BC326C(gameObject, switchInfoList, v195);
  }
  if ( !v219 )
    goto LABEL_1096;
LABEL_605:
  v233 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v219->klass->vtable._3_ToString.method)(
                 v219,
                 v219->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v233 )
    goto LABEL_1096;
  UILabel__set_text(v233, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  modeKind = v321;
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1096;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  gameObject = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v234 = *v326;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9204/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v234 )
      goto LABEL_1096;
    UILabel__set_text(v234, (System_String_o *)gameObject, 0LL);
    if ( v9->fields.isEventJoin )
    {
      v235 = *v326;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10202/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v235 )
        goto LABEL_1096;
      UILabel__set_text(v235, (System_String_o *)gameObject, 0LL);
    }
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_643;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_39466584(126, 0LL) )
      goto LABEL_643;
    v236 = *v326;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11406/*"SELECT_CANNOT"*/, 0LL);
    if ( !v236 )
      goto LABEL_1096;
  }
  else
  {
    if ( !enableAppendSkillUp )
      goto LABEL_1096;
    if ( enableAppendSkillUp->fields._size <= 0 && !v9->fields.isAppendSkillOpenItemNum )
      goto LABEL_643;
    gameObject = (__int64)*v322;
    if ( !*v322 )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v236 = *v322;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8712/*"MSG_ABLED_SKILLUP"*/, 0LL);
    if ( !v236 )
      goto LABEL_1096;
  }
  UILabel__set_text(v236, (System_String_o *)gameObject, 0LL);
LABEL_643:
  v237 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v237, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
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
          goto LABEL_1096;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)gameObject, switchInfoList, 0, 0LL);
        gameObject = (__int64)this->fields.coinInfo;
        if ( !gameObject )
          goto LABEL_1096;
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
          v244 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum, v241, v242, v243);
          gameObject = (__int64)System_String__Format((System_String_o *)StringLiteral_24811/*"{0:#,0}"*/, v244, 0LL);
          switchInfoList = (UIWidget_array *)gameObject;
        }
        if ( !coinNumLabel )
          goto LABEL_1096;
        UILabel__set_text(coinNumLabel, (System_String_o *)switchInfoList, 0LL);
        gameObject = CombineServantListViewItem__get_SkillOpenItemId(v9, 0LL);
        coinIcon = this->fields.coinIcon;
        if ( (int)gameObject < 1 )
        {
          if ( !coinIcon )
            goto LABEL_1096;
          gameObject = (__int64)coinIcon->fields.iconSprite;
          if ( !gameObject )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          gameObject = CombineServantListViewItem__get_SkillOpenItemId(v9, 0LL);
          if ( !coinIcon )
            goto LABEL_1096;
          ItemIconComponent__SetItem(coinIcon, gameObject, -1, 1, 0LL);
        }
      }
    }
  }
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_673:
  v246 = v9->fields.type;
  if ( v246 != 12 )
    goto LABEL_787;
  v247 = CombineServantListViewItem__GetAppendSkillData(v9, 0LL);
  v248 = (System_Text_StringBuilder_o *)sub_1BC3254(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v248, 0LL);
  if ( !v247 )
    goto LABEL_1096;
  v249 = v247->fields.svtUseSkillIdList;
  if ( !v249 )
    goto LABEL_1096;
  v250 = *(_QWORD *)&v249->max_length;
  if ( (int)v250 < 1 )
  {
    v253 = 0;
    v265 = 0;
    if ( !v248 )
      goto LABEL_1096;
  }
  else
  {
    v251 = 0;
    v252 = 0;
    v253 = 0;
    v254 = 0LL;
    while ( 1 )
    {
      if ( v254 >= v249->max_length )
        goto LABEL_1097;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9206/*"NONSKILL_TXT"*/, 0LL);
      v255 = v247->fields.svtSkillLvList;
      if ( !v255 )
        goto LABEL_1096;
      if ( v254 >= v255->max_length )
        goto LABEL_1097;
      v256 = (char *)v255 + 4 * v254;
      v257 = *((_DWORD *)v256 + 8);
      gameObject = (__int64)(v256 + 32);
      if ( v257 >= 1 )
      {
        gameObject = (__int64)System_Int32__ToString(gameObject, 0LL);
        v255 = v247->fields.svtSkillLvList;
        if ( !v255 )
          goto LABEL_1096;
        v252 = 1;
      }
      if ( v254 >= v255->max_length )
        goto LABEL_1097;
      v258 = v255->m_Items[1];
      v259 = v255->m_Items[++v254];
      v253 |= v259 < 10;
      v251 |= v258 != v259;
      if ( v254 == (unsigned int)v250 )
        break;
      v249 = v247->fields.svtUseSkillIdList;
      if ( !v249 )
        goto LABEL_1096;
    }
    v320 = v252;
    v260 = 0LL;
    v261 = 32LL;
    do
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9206/*"NONSKILL_TXT"*/, 0LL);
      v262 = v247->fields.svtSkillLvList;
      if ( !v262 )
        goto LABEL_1096;
      if ( v260 >= v262->max_length )
        goto LABEL_1097;
      v263 = (Il2CppObject *)gameObject;
      if ( *(int *)((char *)&v262->obj.klass + v261) >= 1 )
        v263 = (Il2CppObject *)System_Int32__ToString((int)v262 + (int)v261, 0LL);
      if ( (_DWORD)v250 - 1 == v260 )
      {
        if ( (v251 & 1) == 0 )
          goto LABEL_703;
        if ( !v324->fields.isHeroineSvt )
          goto LABEL_712;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_39466584(126, 0LL) )
        {
LABEL_703:
          v264 = &StringLiteral_12119/*"SKILL_LVDISP_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v264 = &StringLiteral_12119/*"SKILL_LVDISP_SINGLE_TXT"*/;
          }
        }
        else
        {
LABEL_712:
          v264 = &StringLiteral_12117/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v264 = &StringLiteral_12117/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          }
        }
      }
      else
      {
        if ( (v251 & 1) == 0 )
          goto LABEL_710;
        if ( !v324->fields.isHeroineSvt )
          goto LABEL_714;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_39466584(126, 0LL) )
        {
LABEL_710:
          v264 = &StringLiteral_12120/*"SKILL_LVDISP_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v264 = &StringLiteral_12120/*"SKILL_LVDISP_TXT"*/;
          }
        }
        else
        {
LABEL_714:
          v264 = &StringLiteral_12118/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v264 = &StringLiteral_12118/*"SKILL_LVDISP_ENABLE_TXT"*/;
          }
        }
      }
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v264, 0LL);
      if ( !v248 )
        goto LABEL_1096;
      System_Text_StringBuilder__AppendFormat(v248, (System_String_o *)gameObject, v263, 0LL);
      ++v260;
      v261 += 4LL;
    }
    while ( (unsigned int)v250 != v260 );
    this = v323;
    v9 = v324;
    v265 = v320;
    modeKind = v321;
    p_statusTxtLb = v322;
  }
  v266 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v248->klass->vtable._3_ToString.method)(
                 v248,
                 v248->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v266
    || (UILabel__set_text(v266, (System_String_o *)gameObject, 0LL),
        (gameObject = (__int64)this->fields.skillLvLabel) == 0)
    || (gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0 )
  {
LABEL_1096:
    sub_1BC3264(gameObject, switchInfoList);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1096;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
    goto LABEL_776;
  gameObject = (__int64)*p_maskSprite;
  if ( !*p_maskSprite )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)*v326;
  if ( !*v326 )
    goto LABEL_1096;
  UILabel__set_text((UILabel_o *)gameObject, string_TypeInfo->static_fields->Empty, 0LL);
  if ( v9->fields.isEventJoin )
  {
    v267 = *v326;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10202/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
    if ( !v267 )
      goto LABEL_1096;
    UILabel__set_text(v267, (System_String_o *)gameObject, 0LL);
  }
  if ( !v9->fields.isHeroineSvt )
    goto LABEL_1100;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_39466584(126, 0LL) )
  {
    v268 = *v326;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v269 = &StringLiteral_11406/*"SELECT_CANNOT"*/;
  }
  else
  {
LABEL_1100:
    if ( v9->fields.isEventJoin )
    {
      v268 = *v326;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v269 = &StringLiteral_11437/*"SELECT_SERVANT_EVENT_JOIN"*/;
    }
    else if ( (v265 & 1) != 0 )
    {
      if ( (v253 & 1) != 0 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4AFC1F1 )
        {
          sub_1BC3008(&NetworkManager_TypeInfo, switchInfoList);
          byte_4AFC1F1 = 1;
        }
        gameObject = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          gameObject = (__int64)NetworkManager_TypeInfo;
        }
        if ( !Master_object )
          goto LABEL_1096;
        if ( !UserServantAppendPassiveSkillMaster__TryGetEntity(
                (UserServantAppendPassiveSkillMaster_o *)Master_object,
                &entity,
                *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                v9->fields.svtId,
                0LL)
          || !UserServantAppendPassiveSkillMaster__IsExchangeLimited(0LL) )
        {
          goto LABEL_776;
        }
        v268 = *v326;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1976/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/, 0LL);
        if ( !entity )
          goto LABEL_1096;
        v271 = (System_String_o *)gameObject;
        SkillOpenItemNum = UserServantAppendPassiveSkillEntity__GetRemainingExchangeNum(entity, 0LL);
        v275 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum, v272, v273, v274);
        gameObject = (__int64)System_String__Format(v271, v275, 0LL);
        if ( !v268 )
          goto LABEL_1096;
        goto LABEL_775;
      }
      v268 = *v326;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v269 = &StringLiteral_1975/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/;
    }
    else
    {
      v268 = *v326;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v269 = &StringLiteral_1974/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/;
    }
  }
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v269, 0LL);
  if ( !v268 )
    goto LABEL_1096;
LABEL_775:
  UILabel__set_text(v268, (System_String_o *)gameObject, 0LL);
LABEL_776:
  v276 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v276, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
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
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v246 = v9->fields.type;
LABEL_787:
  if ( v246 != 4 )
    goto LABEL_833;
  gameObject = (__int64)this->fields.npIconLabel;
  if ( !gameObject )
    goto LABEL_1096;
  v277 = SHIDWORD(v330.invoker_method) <= 0 ? -1 : LODWORD(v330.invoker_method);
  UIIconLabel__Set_40054380(
    (UIIconLabel_o *)gameObject,
    33,
    v277,
    SHIDWORD(v330.methodPointer),
    0,
    0LL,
    0,
    0,
    0,
    0,
    0LL);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1096;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    v278 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v278, 0LL, 0LL) )
      goto LABEL_829;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v279 = v9->fields.isHeroineSvt;
    v280 = *v326;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v279 )
      v281 = &StringLiteral_9200/*"NONSELECT_MATERIAL"*/;
    else
      v281 = &StringLiteral_9203/*"NONSELECT_NPUP_BASE"*/;
    v283 = (System_String_o *)*v281;
    goto LABEL_827;
  }
  if ( !v9->fields.isSameSvt && !v9->fields.isBaseSvt )
  {
    v294 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v294, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_829;
  }
  v282 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v282, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    if ( v9->fields.isSameSvt )
    {
      gameObject = (__int64)*p_statusTxtLb;
      if ( !*p_statusTxtLb )
        goto LABEL_1096;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1096;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v280 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v283 = (System_String_o *)StringLiteral_8714/*"MSG_ABLED_TDUP"*/;
LABEL_827:
      gameObject = (__int64)LocalizationManager__Get(v283, 0LL);
      if ( !v280 )
        goto LABEL_1096;
      UILabel__set_text(v280, (System_String_o *)gameObject, 0LL);
    }
  }
LABEL_829:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_833:
  v284 = v9->fields.type;
  if ( v284 != 6 )
    goto LABEL_900;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1096;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    v9->fields.currentLimitCnt,
    v9->fields.maxLimitCnt,
    0LL);
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1096;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    v285 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v285, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1096;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1096;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      if ( v9->fields.isHeroineSvt && !v9->fields.isLvExceedMax )
      {
        v287 = *v326;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v288 = &StringLiteral_9200/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        isEventJoin = v9->fields.isEventJoin;
        v287 = *v326;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( isEventJoin )
          v288 = &StringLiteral_11437/*"SELECT_SERVANT_EVENT_JOIN"*/;
        else
          v288 = &StringLiteral_9251/*"NO_SELECT_LVEXCEED"*/;
      }
      v292 = (System_String_o *)*v288;
LABEL_893:
      gameObject = (__int64)LocalizationManager__Get(v292, 0LL);
      if ( !v287 )
        goto LABEL_1096;
      UILabel__set_text(v287, (System_String_o *)gameObject, 0LL);
      goto LABEL_895;
    }
    goto LABEL_895;
  }
  if ( !v9->fields.isLvMax || !v9->fields.isLimitCntMax )
  {
    v293 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v293, 0LL, 0LL) )
      goto LABEL_895;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
LABEL_877:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_895;
  }
  isLvExceedItemNum = v9->fields.isLvExceedItemNum;
  v290 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v291 = UnityEngine_Object__op_Inequality(v290, 0LL, 0LL);
  if ( !isLvExceedItemNum )
  {
    if ( !v291 )
      goto LABEL_895;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    goto LABEL_877;
  }
  if ( v291 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)*v326;
    if ( !*v326 )
      goto LABEL_1096;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v287 = *p_statusTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v292 = (System_String_o *)StringLiteral_8711/*"MSG_ABLED_LIMITUP"*/;
    goto LABEL_893;
  }
LABEL_895:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v284 = v9->fields.type;
LABEL_900:
  if ( v284 != 10 && v284 != 7 )
    goto LABEL_962;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1096;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.subIconLabel;
  if ( !gameObject )
    goto LABEL_1096;
  UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0LL);
  v296 = v9->fields.type;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  gameObject = CombineServantListViewManager__GetSortKind(v296, v295);
  v297 = this->fields.servantFaceIcon;
  if ( !v297 )
    goto LABEL_1096;
  if ( (_DWORD)gameObject == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *, __int64, Il2CppMethodPointer))v297->klass->vtable._4_ParameterChange.method)(
      this->fields.servantFaceIcon,
      1LL,
      v297->klass->vtable._5_UpdateAlpha.methodPtr);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_1096;
    ServantFaceIconComponent__ResetIconLabelPos((ServantFaceIconComponent_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_1096;
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
      goto LABEL_1096;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v298 = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL);
  v299 = (UnityEngine_Object_o *)this->fields.baseButton;
  v300 = v298;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v301 = UnityEngine_Object__op_Inequality(v299, 0LL, 0LL);
  if ( v300 )
  {
    if ( !v301 )
      goto LABEL_951;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( v9->fields.type == 10 && v9->fields.isCommandCardExceedMax )
    {
      v302 = *v326;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9197/*"NONSEELECT_STATUSUP_MAX"*/, 0LL);
      if ( !v302 )
        goto LABEL_1096;
      UILabel__set_text(v302, (System_String_o *)gameObject, 0LL);
    }
    if ( v9->fields.isEventJoin )
    {
      v303 = *v326;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11437/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v303 )
        goto LABEL_1096;
      UILabel__set_text(v303, (System_String_o *)gameObject, 0LL);
    }
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_951;
    v304 = *v326;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11406/*"SELECT_CANNOT"*/, 0LL);
    if ( !v304 )
      goto LABEL_1096;
    v305 = (System_String_o *)gameObject;
    gameObject = (__int64)v304;
    goto LABEL_950;
  }
  if ( v301 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)*v326;
    if ( !*v326 )
      goto LABEL_1096;
    v305 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_950:
    UILabel__set_text((UILabel_o *)gameObject, v305, 0LL);
  }
LABEL_951:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v306 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v306, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v307 = this->fields.svtCommandCardList;
    gameObject = CombineServantListViewItem__get_UserSvtId(v9, 0LL);
    if ( !v307 )
      goto LABEL_1096;
    ServantCommandCardListComponent__Set(v307, gameObject, 1, 1, 0LL);
  }
LABEL_962:
  if ( v9->fields.type != 8 )
    goto LABEL_1021;
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1096;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    v308 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v308, 0LL, 0LL) )
      goto LABEL_1017;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( !v9->fields.isHeroineSvt || v9->fields.isFriendshipExceedMax && ConstantMaster__IsFLAG20250430(0LL) )
    {
      v309 = v9->fields.isEventJoin;
      v310 = *v326;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v309 )
        v311 = &StringLiteral_11437/*"SELECT_SERVANT_EVENT_JOIN"*/;
      else
        v311 = &StringLiteral_9250/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
    }
    else
    {
      v310 = *v326;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v311 = &StringLiteral_9200/*"NONSELECT_MATERIAL"*/;
    }
    v315 = (System_String_o *)*v311;
    goto LABEL_1015;
  }
  if ( !v9->fields.isFriendshipRankMax )
  {
    v316 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v316, 0LL, 0LL) )
      goto LABEL_1017;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
LABEL_1009:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_1017;
  }
  isFriendshipExceedItemNum = v9->fields.isFriendshipExceedItemNum;
  v313 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v314 = UnityEngine_Object__op_Inequality(v313, 0LL, 0LL);
  if ( !isFriendshipExceedItemNum )
  {
    if ( !v314 )
      goto LABEL_1017;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    goto LABEL_1009;
  }
  if ( !v314 )
    goto LABEL_1017;
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_1096;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
    gameObject,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_1096;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
    gameObject,
    0LL,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  gameObject = (__int64)*p_maskSprite;
  if ( !*p_maskSprite )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)*v326;
  if ( !*v326 )
    goto LABEL_1096;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)*p_statusTxtLb;
  if ( !*p_statusTxtLb )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v310 = *p_statusTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v315 = (System_String_o *)StringLiteral_8710/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/;
LABEL_1015:
  gameObject = (__int64)LocalizationManager__Get(v315, 0LL);
  if ( !v310 )
    goto LABEL_1096;
  UILabel__set_text(v310, (System_String_o *)gameObject, 0LL);
LABEL_1017:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_1021:
  if ( (unsigned int)(modeKind - 1) > 1 )
  {
    if ( modeKind != 3 )
      return;
    if ( v9->fields.isEventJoin )
    {
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1096;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1096;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v317 = *v326;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11437/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v317 )
        goto LABEL_1096;
    }
    else
    {
      if ( !v9->fields.isCanNotLock )
      {
        gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
        if ( !gameObject )
          goto LABEL_1096;
        if ( !UserServantEntity__IsLeave((UserServantEntity_o *)gameObject, 0LL) )
        {
          gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
          if ( !gameObject )
            goto LABEL_1096;
          if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)gameObject, 0LL) )
          {
            gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
            if ( !gameObject )
              goto LABEL_1096;
            if ( !UserServantEntity__IsStatusUp((UserServantEntity_o *)gameObject, 0LL) )
            {
              gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
              if ( !gameObject )
                goto LABEL_1096;
              if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)gameObject, 0LL) )
              {
                gameObject = (__int64)*p_maskSprite;
                if ( !*p_maskSprite )
                  goto LABEL_1096;
                gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_1096;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                gameObject = (__int64)*v326;
                if ( !*v326 )
                  goto LABEL_1096;
                v318 = (System_String_o *)StringLiteral_1/*""*/;
                goto LABEL_1059;
              }
            }
          }
        }
      }
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1096;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1096;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v317 = *v326;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8236/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
      if ( !v317 )
        goto LABEL_1096;
    }
    v318 = (System_String_o *)gameObject;
    gameObject = (__int64)v317;
LABEL_1059:
    UILabel__set_text((UILabel_o *)gameObject, v318, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1096;
LABEL_1060:
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    return;
  }
  if ( !v9->fields.isHeroineSvt )
    goto LABEL_1026;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_39466584(126, 0LL) )
  {
LABEL_1026:
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9->fields.isCanNotLock, 0LL);
    if ( v9->fields.isCanNotLock )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      switchInfoList = (UIWidget_array *)LocalizationManager__Get((System_String_o *)StringLiteral_8236/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
    }
    else
    {
      switchInfoList = (UIWidget_array *)StringLiteral_1/*""*/;
    }
    gameObject = (__int64)*v326;
    if ( !*v326 )
      goto LABEL_1096;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)switchInfoList, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1096;
    goto LABEL_1060;
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

  if ( (byte_4B06003 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, item);
    byte_4B06003 = 1;
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
    sub_1BC3264(v7, v6);
  }
}