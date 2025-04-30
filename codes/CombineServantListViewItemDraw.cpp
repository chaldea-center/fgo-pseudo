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
  if ( (byte_4A52343 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, item);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_9139/*"NONSELECT_UNDER_STATUS_MAX"*/, v8);
    sub_1B863B8(&StringLiteral_9134/*"NONSELECT_MATERIAL"*/, v9);
    sub_1B863B8(&StringLiteral_9137/*"NONSELECT_NPUP_BASE"*/, v10);
    sub_1B863B8(&StringLiteral_9135/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v11);
    byte_4A52343 = 1;
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
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9139/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
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
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9139/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
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
      v32 = &StringLiteral_9139/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_78:
      maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v32, 0LL);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)maskSprite, 0LL);
        goto LABEL_80;
      }
LABEL_92:
      sub_1B86614(maskSprite, v21);
    }
    maskLabel = this->fields.maskLabel;
    v25 = LocalizationManager_TypeInfo;
    v27 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_75:
    if ( !v27 )
      j_il2cpp_runtime_class_init_0(v25);
    v32 = &StringLiteral_9134/*"NONSELECT_MATERIAL"*/;
    goto LABEL_78;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0LL) )
  {
    v24 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9135/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
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
      v32 = &StringLiteral_9137/*"NONSELECT_NPUP_BASE"*/;
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
  UnityEngine_Object_o *svtCommandCardList; // x23
  UIWidget_array *switchInfoList; // x1
  __int64 gameObject; // x0
  int32_t type; // w19
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  IconLabelInfo_o *iconLabelInfo1; // x2
  UIIconLabel_o *subIconLabel; // x23
  int32_t rarity; // w24
  int32_t v79; // w25
  UILabel_o **p_statusTxtLb; // x28
  struct UILabel_o **p_maskLabel; // x20
  __int64 v82; // x1
  UnityEngine_GameObject_o *v83; // x23
  __int64 v84; // x1
  UnityEngine_GameObject_o *v85; // x23
  UnityEngine_GameObject_o *v86; // x23
  UnityEngine_Object_o *pushImg; // x23
  UnityEngine_Object_o *materialTdSprite; // x23
  UISprite_o *v89; // x23
  const MethodInfo *v90; // x1
  int32_t v91; // w23
  int32_t v92; // w8
  bool CanNotBaseSelect; // w0
  UnityEngine_Object_o *v94; // x23
  bool v95; // w22
  bool v96; // w0
  struct UILabel_o *v97; // x22
  __int64 *v98; // x8
  int32_t v99; // w2
  char v100; // w20
  UILabel_o *v101; // x23
  UILabel_o *v102; // x23
  UILabel_o *v103; // x23
  const MethodInfo *v104; // x2
  UILabel_o *v105; // x23
  UILabel_o *v106; // x23
  UILabel_o *v107; // x23
  UILabel_o *v108; // x23
  UILabel_o *v109; // x23
  UILabel_o *v110; // x23
  _BOOL4 isParty; // w19
  __int64 *v112; // x8
  UILabel_o *v113; // x23
  _BOOL4 v114; // w19
  __int64 *v115; // x8
  UILabel_o *v116; // x23
  __int64 v117; // x1
  UnityEngine_GameObject_o *v118; // x23
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x24
  bool v121; // w23
  bool v122; // w0
  int v123; // w8
  UILabel_o *v124; // x22
  UILabel_o *v125; // x22
  UILabel_o *v126; // x22
  UILabel_o *v127; // x22
  __int64 *v128; // x8
  UnityEngine_Object_o *v129; // x23
  uint32_t cctor_finished; // w8
  int v131; // w19
  UILabel_o *v132; // x22
  System_String_o *v133; // x23
  Il2CppObject *v134; // x0
  UILabel_o *v135; // x22
  UILabel_o *v136; // x23
  UILabel_o *v137; // x22
  UILabel_o *v138; // x22
  UILabel_o *v139; // x22
  int32_t v140; // w8
  UILabel_o *v141; // x22
  __int64 v142; // x1
  UnityEngine_GameObject_o *v143; // x22
  System_String_o *v144; // x1
  UILabel_o *fortificationAppointmentLabel; // x22
  float v146; // s0
  float v147; // s2
  float fortificationInfoRootObjOffsetY; // s10
  float v149; // s8
  float v150; // s9
  System_Collections_Generic_List_object__o *v151; // x22
  System_String_o *v152; // x23
  Il2CppObject *v153; // x0
  int32_t v154; // w2
  const MethodInfo *v155; // x3
  struct System_Object_array *items; // x8
  _QWORD *v157; // x9
  __int64 size; // x10
  __int64 v159; // x1
  Il2CppClass **v160; // x0
  System_String_o *v161; // x23
  Il2CppObject *v162; // x0
  int32_t v163; // w2
  const MethodInfo *v164; // x3
  struct System_Object_array *v165; // x8
  _QWORD *v166; // x9
  __int64 v167; // x10
  __int64 v168; // x1
  Il2CppClass **v169; // x0
  int32_t v170; // w2
  const MethodInfo *v171; // x3
  struct System_Object_array *v172; // x8
  _QWORD *v173; // x9
  __int64 v174; // x10
  __int64 v175; // x1
  Il2CppClass **v176; // x0
  UnityEngine_Object_o *v177; // x22
  _BOOL4 isHeroineSvt; // w19
  UILabel_o *sealedStateLabel; // x22
  __int64 *v180; // x8
  bool v181; // w0
  UnityEngine_Object_o *v182; // x23
  bool v183; // w22
  bool v184; // w0
  UILabel_o *v185; // x22
  __int64 *v186; // x8
  UnityEngine_Object_o *v187; // x22
  System_String_o *v188; // x1
  UnityEngine_Object_o *v189; // x22
  UnityEngine_Object_o *v190; // x22
  int32_t v191; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  System_Text_StringBuilder_o *v193; // x22
  SkillInfo_array *v194; // x8
  __int64 v195; // x9
  unsigned __int64 v196; // x19
  __int64 v197; // x20
  __int64 v198; // x21
  SkillInfo_o *v199; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v202; // w25
  Il2CppObject *v203; // x24
  bool v204; // w25
  __int64 *v205; // x8
  UILabel_o *skillLvLabel; // x23
  UnityEngine_Object_o *v207; // x22
  UILabel_o *v208; // x22
  UILabel_o *v209; // x22
  __int64 *v210; // x8
  _BOOL4 isSkillUpItemNum; // w19
  UnityEngine_Object_o *v212; // x22
  bool v213; // w0
  SvtUseSkillData_o *AppendSkillData; // x0
  System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v216; // x24
  System_Text_StringBuilder_o *v217; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v219; // x9
  unsigned __int64 v220; // x19
  __int64 v221; // x20
  __int64 v222; // x21
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v224; // x0
  int32_t v225; // w26
  int32_t v226; // w0
  int v227; // t1
  Il2CppObject *v228; // x25
  bool v229; // w26
  __int64 *v230; // x8
  UILabel_o *v231; // x24
  UILabel_o *v232; // x22
  UILabel_o *v233; // x22
  UILabel_o *v234; // x22
  __int64 *v235; // x8
  UnityEngine_Object_o *v236; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  __int64 v240; // x2
  __int64 v241; // x3
  __int64 v242; // x4
  Il2CppObject *v243; // x0
  struct ItemIconComponent_o *coinIcon; // x22
  int32_t v245; // w8
  SvtUseSkillData_o *v246; // x23
  System_Text_StringBuilder_o *v247; // x22
  struct System_Int32_array *v248; // x8
  __int64 v249; // x19
  char v250; // w27
  char v251; // w26
  char v252; // w25
  unsigned __int64 v253; // x21
  struct System_Int32_array *v254; // x8
  char *v255; // x0
  int v256; // t1
  int32_t v257; // w9
  int v258; // w8
  unsigned __int64 v259; // x29
  __int64 v260; // x26
  struct System_Int32_array *v261; // x8
  Il2CppObject *v262; // x24
  __int64 *v263; // x8
  char v264; // w26
  UILabel_o *v265; // x23
  UILabel_o *v266; // x22
  UILabel_o *v267; // x22
  __int64 *v268; // x8
  Il2CppObject *Master_object; // x22
  System_String_o *v270; // x23
  __int64 v271; // x2
  __int64 v272; // x3
  __int64 v273; // x4
  Il2CppObject *v274; // x0
  UnityEngine_Object_o *v275; // x22
  int32_t v276; // w2
  UnityEngine_Object_o *v277; // x22
  _BOOL4 v278; // w19
  UILabel_o *v279; // x22
  __int64 *v280; // x8
  UnityEngine_Object_o *v281; // x22
  System_String_o *v282; // x0
  int32_t v283; // w8
  UnityEngine_Object_o *v284; // x22
  _BOOL4 isEventJoin; // w19
  UILabel_o *v286; // x22
  __int64 *v287; // x8
  _BOOL4 isLvExceedItemNum; // w19
  UnityEngine_Object_o *v289; // x22
  bool v290; // w0
  System_String_o *v291; // x0
  UnityEngine_Object_o *v292; // x22
  UnityEngine_Object_o *v293; // x22
  const MethodInfo *v294; // x1
  int32_t v295; // w22
  struct ServantFaceIconComponent_o *v296; // x8
  bool v297; // w0
  UnityEngine_Object_o *v298; // x23
  bool v299; // w22
  bool v300; // w0
  UILabel_o *v301; // x22
  UILabel_o *v302; // x22
  struct UILabel_o *v303; // x22
  System_String_o *v304; // x1
  UnityEngine_Object_o *v305; // x22
  ServantCommandCardListComponent_o *v306; // x22
  UnityEngine_Object_o *v307; // x22
  _BOOL4 v308; // w19
  UILabel_o *v309; // x22
  __int64 *v310; // x8
  _BOOL4 isFriendshipExceedItemNum; // w19
  UnityEngine_Object_o *v312; // x22
  bool v313; // w0
  System_String_o *v314; // x0
  UnityEngine_Object_o *v315; // x22
  struct UILabel_o *v316; // x19
  System_String_o *v317; // x1
  UnityEngine_Object_o *v318; // x22
  char v319; // [xsp+20h] [xbp-D0h]
  int32_t v320; // [xsp+24h] [xbp-CCh]
  struct UILabel_o **v321; // [xsp+28h] [xbp-C8h]
  CombineServantListViewItemDraw_o *v322; // [xsp+30h] [xbp-C0h]
  CombineServantListViewItem_o *v323; // [xsp+38h] [xbp-B8h]
  struct UISprite_o **p_maskSprite; // [xsp+40h] [xbp-B0h]
  struct UILabel_o **v325; // [xsp+48h] [xbp-A8h]
  int32_t SkillOpenItemNum; // [xsp+54h] [xbp-9Ch] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+58h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+60h] [xbp-90h] BYREF
  MethodInfo v329; // [xsp+68h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v330; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v331; // 0:s0.4,4:s1.4,8:s2.4

  v9 = item;
  if ( (byte_4A52342 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, item);
    sub_1B863B8(&CombineServantListViewManager_TypeInfo, v11);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v12);
    sub_1B863B8(&DataManager_TypeInfo, v13);
    sub_1B863B8(&int_TypeInfo, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v19);
    sub_1B863B8(&LocalizationManager_TypeInfo, v20);
    sub_1B863B8(&NetworkManager_TypeInfo, v21);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v22);
    sub_1B863B8(&System_Text_StringBuilder_TypeInfo, v23);
    sub_1B863B8(&string_TypeInfo, v24);
    sub_1B863B8(&TutorialFlag_TypeInfo, v25);
    sub_1B863B8(&StringLiteral_12024/*"SKILL_LVDISP_TXT"*/, v26);
    sub_1B863B8(&StringLiteral_10139/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, v27);
    sub_1B863B8(&StringLiteral_9139/*"NONSELECT_UNDER_STATUS_MAX"*/, v28);
    sub_1B863B8(&StringLiteral_6410/*"FORTIFICATION_APPOINTMENT"*/, v29);
    sub_1B863B8(&StringLiteral_3567/*"COMBINE_CAN_STATUS_UP_INFO"*/, v30);
    sub_1B863B8(&StringLiteral_8643/*"MSG_CAMPAIGN_COMBINE_EXP"*/, v31);
    sub_1B863B8(&StringLiteral_12022/*"SKILL_LVDISP_ENABLE_TXT"*/, v32);
    sub_1B863B8(&StringLiteral_2000/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/, v33);
    sub_1B863B8(&StringLiteral_9134/*"NONSELECT_MATERIAL"*/, v34);
    sub_1B863B8(&StringLiteral_22784/*"ribbon_noblephantasmup_01"*/, v35);
    sub_1B863B8(&StringLiteral_9133/*"NONSELECT_LIMITUP_BASE"*/, v36);
    sub_1B863B8(&StringLiteral_2001/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/, v37);
    sub_1B863B8(&StringLiteral_9947/*"PARTY_MEMBER_TXT"*/, v38);
    sub_1B863B8(&StringLiteral_3312/*"CAN_SELECT_SEALED_SERVANT_BASE"*/, v39);
    sub_1B863B8(&StringLiteral_9137/*"NONSELECT_NPUP_BASE"*/, v40);
    sub_1B863B8(&StringLiteral_12289/*"SUPPORT_MEMBER"*/, v41);
    sub_1B863B8(&StringLiteral_8639/*"MSG_ABLED_LIMITUP"*/, v42);
    sub_1B863B8(&StringLiteral_11347/*"SELECT_PUSH"*/, v43);
    sub_1B863B8(&StringLiteral_11324/*"SELECT_CANNOT"*/, v44);
    sub_1B863B8(&StringLiteral_9193/*"NPUP_BASE"*/, v45);
    sub_1B863B8(&StringLiteral_2002/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/, v46);
    sub_1B863B8(&StringLiteral_12021/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/, v47);
    sub_1B863B8(&StringLiteral_11348/*"SELECT_SERVANT_EVENT_JOIN"*/, v48);
    sub_1B863B8(&StringLiteral_9181/*"NO_SELECT_FRIENDSHIP_EXCEED"*/, v49);
    sub_1B863B8(&StringLiteral_11248/*"SAME_SERVANT"*/, v50);
    sub_1B863B8(&StringLiteral_8638/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, v51);
    sub_1B863B8(&StringLiteral_9135/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v52);
    sub_1B863B8(&StringLiteral_24769/*"{0:#,0}"*/, v53);
    sub_1B863B8(&StringLiteral_12023/*"SKILL_LVDISP_SINGLE_TXT"*/, v54);
    sub_1B863B8(&StringLiteral_8640/*"MSG_ABLED_SKILLUP"*/, v55);
    sub_1B863B8(&StringLiteral_9136/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, v56);
    sub_1B863B8(&StringLiteral_9140/*"NONSKILL_TXT"*/, v57);
    sub_1B863B8(&StringLiteral_8164/*"LOCKMODE_SELECTED_SERVANT"*/, v58);
    sub_1B863B8(&StringLiteral_6329/*"FAVORITE_SERVANT"*/, v59);
    sub_1B863B8(&StringLiteral_3376/*"CHOICE_SERVANT"*/, v60);
    sub_1B863B8(&StringLiteral_10860/*"RECOMMEND_SUPPORT_MEMBER"*/, v61);
    sub_1B863B8(&StringLiteral_8642/*"MSG_ABLED_TDUP"*/, v62);
    sub_1B863B8(&StringLiteral_11318/*"SEAL_COMBINE_LIMIT_THIRD"*/, v63);
    sub_1B863B8(&StringLiteral_9132/*"NONSELECT_BASE_ALLMAX"*/, v64);
    sub_1B863B8(&StringLiteral_9182/*"NO_SELECT_LVEXCEED"*/, v65);
    sub_1B863B8(&StringLiteral_1/*""*/, v66);
    sub_1B863B8(&StringLiteral_9138/*"NONSELECT_SKILLUP_BASE"*/, v67);
    sub_1B863B8(&StringLiteral_11346/*"SELECT_PROTECTED_EVENT_SVT"*/, v68);
    sub_1B863B8(&StringLiteral_8165/*"LOCK_SERVANT"*/, v69);
    sub_1B863B8(&StringLiteral_9131/*"NONSEELECT_STATUSUP_MAX"*/, v70);
    byte_4A52342 = 1;
  }
  v329.invoker_method = 0LL;
  skillInfoList = 0LL;
  v329.methodPointer = 0LL;
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
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
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
      goto LABEL_1090;
    ServantFaceIconComponent__Set_39177000(
      servantFaceIcon,
      (UserServantEntity_o *)gameObject,
      iconLabelInfo1,
      v9->fields.iconLabelInfo2,
      0LL);
    subIconLabel = this->fields.subIconLabel;
    rarity = v9->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_1090;
    ServantFaceIconComponent__Set_39177000(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0LL, 0LL);
    gameObject = (__int64)v9->fields.iconLabelInfo2;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = IconLabelInfo__IsClear((IconLabelInfo_o *)gameObject, 0LL);
    subIconLabel = this->fields.subIconLabel;
    if ( (gameObject & 1) == 0 )
    {
      if ( !subIconLabel )
        goto LABEL_1090;
      UIIconLabel__Set(this->fields.subIconLabel, v9->fields.iconLabelInfo2, 0LL);
      goto LABEL_22;
    }
    rarity = v9->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
  }
  v79 = *(_DWORD *)(gameObject + 296);
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
  if ( !gameObject || !subIconLabel )
    goto LABEL_1090;
  UIIconLabel__Set_39193520(
    subIconLabel,
    36,
    rarity,
    v79,
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
    (int32_t *)&v329.invoker_method + 1,
    (int32_t *)&v329.invoker_method,
    (int32_t *)&v329.methodPointer + 1,
    0LL);
  gameObject = (__int64)this->fields.lockImg;
  if ( !gameObject )
    goto LABEL_1090;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1090;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_statusTxtLb = &this->fields.statusTxtLb;
  gameObject = (__int64)this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1090;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1090;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.maskSprite;
  p_maskSprite = &this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_1090;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1090;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_maskLabel = &this->fields.maskLabel;
  gameObject = (__int64)this->fields.maskLabel;
  if ( !gameObject )
    goto LABEL_1090;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)*p_maskLabel;
  if ( !*p_maskLabel )
    goto LABEL_1090;
  v83 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !byte_4A487E6 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v82);
    byte_4A487E6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v83, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1090;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1090;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1090;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1090;
  v85 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !byte_4A487E6 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v84);
    byte_4A487E6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v85, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1090;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1090;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.partyIcon;
  if ( !gameObject )
    goto LABEL_1090;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.removeImg;
  if ( !gameObject )
    goto LABEL_1090;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1090;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1090;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1090;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.choiceImg;
  if ( !gameObject )
    goto LABEL_1090;
  v86 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = CombineServantListViewItem__get_IsDispChoice(v9, 0LL);
  if ( !v86 )
    goto LABEL_1090;
  UnityEngine_GameObject__SetActive(v86, gameObject & 1, 0LL);
  gameObject = (__int64)this->fields.switchInfoComp;
  if ( !gameObject )
    goto LABEL_1090;
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.fortificationRootObj;
  if ( !gameObject )
    goto LABEL_1090;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.fortificationNameLabel;
  if ( !gameObject )
    goto LABEL_1090;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)this->fields.fortificationDetailNameLabel;
  if ( !gameObject )
    goto LABEL_1090;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)this->fields.fortificationAppointmentLabel;
  if ( !gameObject )
    goto LABEL_1090;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushImg, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.pushImg;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9->fields.isPush, 0LL);
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_1090;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)gameObject, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9->fields.isMaterialTdSvt, 0LL);
    if ( v9->fields.isMaterialTdSvt )
    {
      v89 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v89, (System_String_o *)StringLiteral_22784/*"ribbon_noblephantasmup_01"*/, 0LL);
      v91 = v9->fields.type;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      if ( CombineServantListViewManager__GetSortKind(v91, v90) == 1 )
      {
        gameObject = (__int64)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_1090;
        v330.fields.x = 0.65;
        v330.fields.y = 1.0;
        v330.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v330, 0LL);
      }
    }
  }
  v92 = v9->fields.type;
  v325 = &this->fields.maskLabel;
  switch ( v92 )
  {
    case 5:
      gameObject = (__int64)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_1090;
      v99 = SHIDWORD(v329.invoker_method) <= 0 ? -1 : LODWORD(v329.invoker_method);
      UIIconLabel__Set_39193520(
        (UIIconLabel_o *)gameObject,
        33,
        v99,
        SHIDWORD(v329.methodPointer),
        0,
        0LL,
        0,
        0,
        0,
        0,
        0LL);
      gameObject = (__int64)this->fields.npLvInfo;
      if ( !gameObject )
        goto LABEL_1090;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      goto LABEL_106;
    case 1:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1090;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        v9->fields.currentLimitCnt,
        v9->fields.maxLimitCnt,
        0LL);
      if ( CombineServantListViewItem__get_IsProtected(v9, 0LL) && v9->fields.type != 5 )
      {
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1090;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1090;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v136 = *v325;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11346/*"SELECT_PROTECTED_EVENT_SVT"*/, 0LL);
        if ( !v136 )
          goto LABEL_1090;
        UILabel__set_text(v136, (System_String_o *)gameObject, 0LL);
        v100 = 1;
LABEL_107:
        if ( v9->fields.isParty )
        {
          gameObject = (__int64)this->fields.partyIcon;
          if ( !gameObject )
            goto LABEL_1090;
          FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1090;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1090;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v101 = *v325;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9947/*"PARTY_MEMBER_TXT"*/, 0LL);
          if ( !v101 )
            goto LABEL_1090;
          UILabel__set_text(v101, (System_String_o *)gameObject, 0LL);
          v100 = 1;
        }
        if ( v9->fields.isFavorite )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1090;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1090;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v102 = *v325;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6329/*"FAVORITE_SERVANT"*/, 0LL);
          if ( !v102 )
            goto LABEL_1090;
          UILabel__set_text(v102, (System_String_o *)gameObject, 0LL);
          v100 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
        {
          gameObject = (__int64)this->fields.lockImg;
          if ( !gameObject )
            goto LABEL_1090;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1090;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1090;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1090;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v103 = *v325;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8165/*"LOCK_SERVANT"*/, 0LL);
          if ( !v103 )
            goto LABEL_1090;
          UILabel__set_text(v103, (System_String_o *)gameObject, 0LL);
          v100 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispChoice(v9, 0LL) )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1090;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1090;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v105 = *v325;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3376/*"CHOICE_SERVANT"*/, 0LL);
          if ( !v105 )
            goto LABEL_1090;
          UILabel__set_text(v105, (System_String_o *)gameObject, 0LL);
          v100 = 1;
        }
        if ( v9->fields.isLimitCntTarget )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1090;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1090;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v106 = *v325;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11248/*"SAME_SERVANT"*/, 0LL);
          if ( !v106 )
            goto LABEL_1090;
          UILabel__set_text(v106, (System_String_o *)gameObject, 0LL);
          v100 = 1;
        }
        if ( v9->fields.isHeroineSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1090;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1090;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v107 = *v325;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9134/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v107 )
            goto LABEL_1090;
          UILabel__set_text(v107, (System_String_o *)gameObject, 0LL);
          v100 = 1;
        }
        if ( v9->fields.isStatusUpSvt && !v9->fields.isCanStUp )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1090;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1090;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v108 = *v325;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9134/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v108 )
            goto LABEL_1090;
          UILabel__set_text(v108, (System_String_o *)gameObject, 0LL);
          v100 = 1;
        }
        if ( v9->fields.isEventJoin )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1090;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1090;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v109 = *v325;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11348/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
          if ( !v109 )
            goto LABEL_1090;
          UILabel__set_text(v109, (System_String_o *)gameObject, 0LL);
          v100 = 1;
        }
        if ( v9->fields.isUseSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1090;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1090;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v110 = *v325;
          isParty = v9->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v112 = &StringLiteral_12289/*"SUPPORT_MEMBER"*/;
          if ( isParty )
            v112 = &StringLiteral_9947/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v112, 0LL);
          if ( !v110 )
            goto LABEL_1090;
          UILabel__set_text(v110, (System_String_o *)gameObject, 0LL);
          v100 = 1;
        }
        if ( v9->fields.isUseRecommendSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1090;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1090;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v113 = *v325;
          v114 = v9->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v115 = &StringLiteral_10860/*"RECOMMEND_SUPPORT_MEMBER"*/;
          if ( v114 )
            v115 = &StringLiteral_9947/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v115, 0LL);
          if ( !v113 )
            goto LABEL_1090;
          UILabel__set_text(v113, (System_String_o *)gameObject, 0LL);
          if ( !v9->fields.isParty )
          {
            gameObject = (__int64)*v325;
            if ( !*v325 )
              goto LABEL_1090;
            UILabel__SetCondensedScale((UILabel_o *)gameObject, 106, 0, 0LL);
          }
          v100 = 1;
        }
        if ( v9->fields.isPush )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1090;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1090;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v116 = *v325;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11347/*"SELECT_PUSH"*/, 0LL);
          if ( !v116 )
            goto LABEL_1090;
          UILabel__set_text(v116, (System_String_o *)gameObject, 0LL);
          gameObject = (__int64)*v325;
          if ( !*v325 )
            goto LABEL_1090;
          v118 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !byte_4A487E6 )
          {
            sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v117);
            byte_4A487E6 = 1;
          }
          GameObjectExtensions__SetLocalScale(v118, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          v100 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, v9, v104);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(v9, 0LL);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        v121 = CanNotSelect;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v122 = UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
        if ( v121 )
        {
          if ( !v122 )
            break;
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1090;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1090;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1090;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1090;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          if ( v9->fields.isMaxNextLv || v9->fields.isBaseLvMax )
          {
            if ( !v9->fields.isCanStUp )
            {
              if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(v9, 0LL) )
              {
                v137 = *v325;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9135/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
                if ( !v137 )
                  goto LABEL_1090;
                UILabel__set_text(v137, (System_String_o *)gameObject, 0LL);
                if ( v9->fields.type != 5 )
                  break;
                v127 = *v325;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v128 = &StringLiteral_9137/*"NONSELECT_NPUP_BASE"*/;
LABEL_318:
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v128, 0LL);
                if ( !v127 )
                  goto LABEL_1090;
LABEL_319:
                UILabel__set_text(v127, (System_String_o *)gameObject, 0LL);
              }
LABEL_320:
              v140 = v9->fields.type;
              if ( v140 != 5 )
                goto LABEL_403;
              if ( v9->fields.isBaseSvt )
              {
                v141 = *v325;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9193/*"NPUP_BASE"*/, 0LL);
                if ( !v141 )
                  goto LABEL_1090;
                UILabel__set_text(v141, (System_String_o *)gameObject, 0LL);
                gameObject = (__int64)*v325;
                if ( !*v325 )
                  goto LABEL_1090;
                v143 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !byte_4A487E6 )
                {
                  sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v142);
                  byte_4A487E6 = 1;
                }
                GameObjectExtensions__SetLocalScale(v143, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
              }
              break;
            }
          }
          else if ( !v9->fields.isCanStUp )
          {
            if ( v9->fields.isFortification )
            {
              gameObject = (__int64)*v325;
              if ( !*v325 )
                goto LABEL_1090;
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1090;
              gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_1090;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1090;
              UILabel__set_text((UILabel_o *)gameObject, v9->fields.fortificationName, 0LL);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1090;
              UILabel__set_text((UILabel_o *)gameObject, v9->fields.fortificationDetailName, 0LL);
              fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6410/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
              if ( !fortificationAppointmentLabel )
                goto LABEL_1090;
              UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)gameObject, 0LL);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1090;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1090;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL);
              if ( v9->fields.type != 5 )
                break;
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1090;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_1090;
              *(UnityEngine_Vector3_o *)&v146 = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)gameObject,
                                                  0LL);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1090;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              v149 = v146;
              v150 = v147;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_1090;
              v331.fields.x = v149;
              v331.fields.y = fortificationInfoRootObjOffsetY;
              v331.fields.z = v150;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v331, 0LL);
              goto LABEL_320;
            }
            if ( (v100 & 1) == 0 )
            {
              v127 = *v325;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9134/*"NONSELECT_MATERIAL"*/, 0LL);
              if ( !v127 )
                goto LABEL_1090;
              goto LABEL_319;
            }
            goto LABEL_320;
          }
          if ( v9->fields.isStatusUpSvt )
          {
            v123 = v9->fields.rarity;
            if ( v123 <= 3 )
            {
              if ( v9->fields.isAtkUpMax || v9->fields.isHpUpMax )
              {
                v138 = *v325;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9139/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v138 )
                  goto LABEL_1090;
                UILabel__set_text(v138, (System_String_o *)gameObject, 0LL);
              }
              if ( v9->fields.isAtkSecondUpMax || v9->fields.isHpSecondUpMax )
              {
                v139 = *v325;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9139/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v139 )
                  goto LABEL_1090;
                UILabel__set_text(v139, (System_String_o *)gameObject, 0LL);
              }
              if ( !v9->fields.isNotSelectStatusUpAtk && !v9->fields.isNotSelectStatusUpHp )
                goto LABEL_320;
              v127 = *v325;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v128 = &StringLiteral_9139/*"NONSELECT_UNDER_STATUS_MAX"*/;
            }
            else
            {
              if ( v123 != 4 )
                goto LABEL_320;
              if ( v9->fields.atkBase >= 1 )
              {
                if ( v9->fields.isAtkSecondUpMax || v9->fields.isNotSelectSecondStatusUpAtk )
                {
                  v124 = *v325;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9139/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                  if ( !v124 )
                    goto LABEL_1090;
                  UILabel__set_text(v124, (System_String_o *)gameObject, 0LL);
                }
                if ( !v9->fields.isAtkUpMax )
                {
                  v125 = *v325;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9136/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0LL);
                  if ( !v125 )
                    goto LABEL_1090;
                  UILabel__set_text(v125, (System_String_o *)gameObject, 0LL);
                }
              }
              if ( v9->fields.hpBase < 1 )
                goto LABEL_320;
              if ( v9->fields.isHpSecondUpMax || v9->fields.isNotSelectSecondStatusUpHp )
              {
                v126 = *v325;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9139/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v126 )
                  goto LABEL_1090;
                UILabel__set_text(v126, (System_String_o *)gameObject, 0LL);
              }
              if ( v9->fields.isHpUpMax )
                goto LABEL_320;
              v127 = *v325;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v128 = &StringLiteral_9136/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
            }
            goto LABEL_318;
          }
          goto LABEL_320;
        }
        if ( v122 )
        {
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1090;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1090;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1090;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1090;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        v129 = (UnityEngine_Object_o *)this->fields.baseButton;
        cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
        if ( v9->fields.isMaxSelect )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v129, 0LL, 0LL) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1090;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1090;
            v131 = 1;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
LABEL_275:
            if ( v9->fields.type == 1 && CombineServantListViewItem__get_IsOrganization(v9, 0LL) && !isSelectEnable )
            {
              if ( !(v131 & 1 | !ListViewItem__get_IsSelect((ListViewItem_o *)v9, 0LL)) )
                break;
            }
            else if ( !v131 )
            {
              break;
            }
            gameObject = (__int64)*p_maskSprite;
            if ( !*p_maskSprite )
              goto LABEL_1090;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_1090;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            v135 = *v325;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9134/*"NONSELECT_MATERIAL"*/, 0LL);
            if ( !v135 )
              goto LABEL_1090;
            UILabel__set_text(v135, (System_String_o *)gameObject, 0LL);
            break;
          }
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v129, 0LL, 0LL) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1090;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1090;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          }
        }
        v131 = 0;
        goto LABEL_275;
      }
LABEL_106:
      v100 = 0;
      goto LABEL_107;
    case 0:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1090;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        v9->fields.currentLimitCnt,
        v9->fields.maxLimitCnt,
        0LL);
      if ( v9->fields.isParty )
      {
        gameObject = (__int64)this->fields.partyIcon;
        if ( !gameObject )
          goto LABEL_1090;
        FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
      }
      if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
      {
        gameObject = (__int64)this->fields.lockImg;
        if ( !gameObject )
          goto LABEL_1090;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1090;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      }
      CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL);
      v94 = (UnityEngine_Object_o *)this->fields.baseButton;
      v95 = CanNotBaseSelect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v96 = UnityEngine_Object__op_Inequality(v94, 0LL, 0LL);
      if ( v95 )
      {
        if ( !v96 )
          goto LABEL_398;
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1090;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1090;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1090;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1090;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        if ( v9->fields.isLvMax )
        {
          if ( v9->fields.isStatusUpSvt )
            goto LABEL_331;
          if ( !v9->fields.isExpUpSvt )
          {
            v97 = *v325;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v98 = &StringLiteral_9132/*"NONSELECT_BASE_ALLMAX"*/;
            goto LABEL_334;
          }
        }
        else if ( v9->fields.isStatusUpSvt )
        {
          goto LABEL_331;
        }
        if ( !v9->fields.isExpUpSvt )
        {
          if ( !v9->fields.isHeroineSvt )
          {
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1090;
            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            gameObject = (__int64)*v325;
            if ( !*v325 )
              goto LABEL_1090;
            v144 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_336;
          }
          v97 = *v325;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v98 = &StringLiteral_11324/*"SELECT_CANNOT"*/;
LABEL_334:
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v98, 0LL);
          if ( !v97 )
            goto LABEL_1090;
          v144 = (System_String_o *)gameObject;
          gameObject = (__int64)v97;
LABEL_336:
          UILabel__set_text((UILabel_o *)gameObject, v144, 0LL);
          gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
          if ( !gameObject )
            goto LABEL_1090;
          CombineServantListViewNoticeTween__RemoveTarget(
            (CombineServantListViewNoticeTween_o *)gameObject,
            *p_statusTxtLb,
            0LL);
LABEL_398:
          if ( v9->fields.isBaseSvt )
          {
            gameObject = (__int64)this->fields.removeImg;
            if ( !gameObject )
              goto LABEL_1090;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_1090;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          }
          break;
        }
LABEL_331:
        v97 = *v325;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v98 = &StringLiteral_9134/*"NONSELECT_MATERIAL"*/;
        goto LABEL_334;
      }
      if ( !v96 )
        goto LABEL_398;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1090;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1090;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1090;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1090;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)*v325;
      if ( !*v325 )
        goto LABEL_1090;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( v9->fields.isCombineExpCampaignTarget )
      {
        if ( v9->fields.isDispAtkStatusUpInfo
          && CombineServantListViewItem__get_IsAtkAdjustMax(v9, 0LL)
          && !CombineServantListViewItem__get_IsSecondAtkAdjustMax(v9, 0LL) )
        {
          v151 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v151,
            (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v152 = LocalizationManager__Get((System_String_o *)StringLiteral_8643/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v329.methodPointer = v9->fields.combineExpCampaignValue;
          v153 = (Il2CppObject *)System_Single__ToString(*(float *)&v329.methodPointer, &v329);
          gameObject = (__int64)System_String__Format(v152, v153, 0LL);
          if ( !v151 )
            goto LABEL_1090;
          items = v151->fields._items;
          v157 = Method_System_Collections_Generic_List_string__Add__;
          ++v151->fields._version;
          if ( !items )
            goto LABEL_1090;
          size = v151->fields._size;
          v159 = gameObject;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v151,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v157[4] + 192LL) + 112LL));
          }
          else
          {
            v160 = &items->obj.klass + size;
            v151->fields._size = size + 1;
            v160[4] = (Il2CppClass *)v159;
            sub_1B8635C((CGThumbnailListItem_o *)(v160 + 4), v159, v154, v155);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3567/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v172 = v151->fields._items;
          v173 = Method_System_Collections_Generic_List_string__Add__;
          ++v151->fields._version;
          if ( !v172 )
            goto LABEL_1090;
        }
        else
        {
          if ( !v9->fields.isDispHpStatusUpInfo
            || !CombineServantListViewItem__get_IsHpAdjustMax(v9, 0LL)
            || CombineServantListViewItem__get_IsSecondHpAdjustMax(v9, 0LL) )
          {
            gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
            if ( !gameObject )
              goto LABEL_1090;
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              *p_statusTxtLb,
              0LL);
            v132 = *p_statusTxtLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v133 = LocalizationManager__Get((System_String_o *)StringLiteral_8643/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
            *(float *)&v329.methodPointer = v9->fields.combineExpCampaignValue;
            v134 = (Il2CppObject *)System_Single__ToString(*(float *)&v329.methodPointer, &v329);
            gameObject = (__int64)System_String__Format(v133, v134, 0LL);
            if ( !v132 )
              goto LABEL_1090;
LABEL_267:
            UILabel__set_text(v132, (System_String_o *)gameObject, 0LL);
LABEL_395:
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1090;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_1090;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            goto LABEL_398;
          }
          v151 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v151,
            (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v161 = LocalizationManager__Get((System_String_o *)StringLiteral_8643/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v329.methodPointer = v9->fields.combineExpCampaignValue;
          v162 = (Il2CppObject *)System_Single__ToString(*(float *)&v329.methodPointer, &v329);
          gameObject = (__int64)System_String__Format(v161, v162, 0LL);
          if ( !v151 )
            goto LABEL_1090;
          v165 = v151->fields._items;
          v166 = Method_System_Collections_Generic_List_string__Add__;
          ++v151->fields._version;
          if ( !v165 )
            goto LABEL_1090;
          v167 = v151->fields._size;
          v168 = gameObject;
          if ( (unsigned int)v167 >= v165->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v151,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v166[4] + 192LL) + 112LL));
          }
          else
          {
            v169 = &v165->obj.klass + v167;
            v151->fields._size = v167 + 1;
            v169[4] = (Il2CppClass *)v168;
            sub_1B8635C((CGThumbnailListItem_o *)(v169 + 4), v168, v163, v164);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3567/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v172 = v151->fields._items;
          v173 = Method_System_Collections_Generic_List_string__Add__;
          ++v151->fields._version;
          if ( !v172 )
            goto LABEL_1090;
        }
        v174 = v151->fields._size;
        v175 = gameObject;
        if ( (unsigned int)v174 >= v172->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v151,
            (Il2CppObject *)gameObject,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v173[4] + 192LL) + 112LL));
        }
        else
        {
          v176 = &v172->obj.klass + v174;
          v151->fields._size = v174 + 1;
          v176[4] = (Il2CppClass *)v175;
          sub_1B8635C((CGThumbnailListItem_o *)(v176 + 4), v175, v170, v171);
        }
        gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1090;
        CombineServantListViewNoticeTween__AddTarget(
          (CombineServantListViewNoticeTween_o *)gameObject,
          *p_statusTxtLb,
          (System_Collections_Generic_List_string__o *)v151,
          0LL);
        gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1090;
        CombineServantListViewNoticeTween__SetTexts((CombineServantListViewNoticeTween_o *)gameObject, 0, 0LL);
        goto LABEL_395;
      }
      gameObject = (__int64)v9->fields._NoticeTween_k__BackingField;
      if ( !gameObject )
        goto LABEL_1090;
      CombineServantListViewNoticeTween__RemoveTarget(
        (CombineServantListViewNoticeTween_o *)gameObject,
        *p_statusTxtLb,
        0LL);
      if ( v9->fields.isDispAtkStatusUpInfo )
      {
        if ( !CombineServantListViewItem__get_IsAtkAdjustMax(v9, 0LL)
          || CombineServantListViewItem__get_IsSecondAtkAdjustMax(v9, 0LL) )
        {
          goto LABEL_398;
        }
      }
      else if ( !v9->fields.isDispHpStatusUpInfo
             || !CombineServantListViewItem__get_IsHpAdjustMax(v9, 0LL)
             || CombineServantListViewItem__get_IsSecondHpAdjustMax(v9, 0LL) )
      {
        goto LABEL_398;
      }
      v132 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3567/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
      if ( !v132 )
        goto LABEL_1090;
      goto LABEL_267;
  }
  v140 = v9->fields.type;
LABEL_403:
  if ( v140 == 9 )
  {
    gameObject = (__int64)this->fields.limitCountIcon;
    if ( !gameObject )
      goto LABEL_1090;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)gameObject,
      v9->fields.currentLimitCnt,
      v9->fields.maxLimitCnt,
      0LL);
    if ( v9->fields.isParty )
    {
      gameObject = (__int64)this->fields.partyIcon;
      if ( !gameObject )
        goto LABEL_1090;
      FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
    }
    if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_1090;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1090;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    }
    v181 = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL);
    v182 = (UnityEngine_Object_o *)this->fields.baseButton;
    v183 = v181;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v184 = UnityEngine_Object__op_Inequality(v182, 0LL, 0LL);
    if ( !v183 )
    {
      if ( !v184 )
        goto LABEL_492;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1090;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1090;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1090;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1090;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)*v325;
      if ( !*v325 )
        goto LABEL_1090;
      v188 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_491;
    }
    if ( !v184 )
      goto LABEL_492;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( v9->fields.isHeroineSvt || v9->fields.isEventJoin || v9->fields.isIgnoreCombineLimitSpecial )
    {
      v185 = *v325;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v186 = &StringLiteral_9134/*"NONSELECT_MATERIAL"*/;
    }
    else if ( v9->fields.isLimitCntMax )
    {
      v185 = *v325;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v186 = &StringLiteral_9133/*"NONSELECT_LIMITUP_BASE"*/;
    }
    else
    {
      if ( !v9->fields.isSealCombineLimit )
        goto LABEL_492;
      v185 = *v325;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v186 = &StringLiteral_11318/*"SEAL_COMBINE_LIMIT_THIRD"*/;
    }
LABEL_489:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v186, 0LL);
    if ( !v185 )
      goto LABEL_1090;
    v188 = (System_String_o *)gameObject;
    gameObject = (__int64)v185;
LABEL_491:
    UILabel__set_text((UILabel_o *)gameObject, v188, 0LL);
    goto LABEL_492;
  }
  if ( v140 != 2 )
    goto LABEL_496;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1090;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    v9->fields.currentLimitCnt,
    v9->fields.maxLimitCnt,
    0LL);
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1090;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    v177 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v177, 0LL, 0LL) )
      goto LABEL_478;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    isHeroineSvt = v9->fields.isHeroineSvt;
    sealedStateLabel = *v325;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isHeroineSvt )
      v180 = &StringLiteral_9134/*"NONSELECT_MATERIAL"*/;
    else
      v180 = &StringLiteral_9133/*"NONSELECT_LIMITUP_BASE"*/;
LABEL_476:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v180, 0LL);
    if ( !sealedStateLabel )
      goto LABEL_1090;
    UILabel__set_text(sealedStateLabel, (System_String_o *)gameObject, 0LL);
    goto LABEL_478;
  }
  if ( v9->fields.isSealedLimitCount && v9->fields.isLimitCntMax )
  {
    v187 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v187, 0LL, 0LL) )
      goto LABEL_478;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)this->fields.sealedStateLabel;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    sealedStateLabel = this->fields.sealedStateLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v180 = &StringLiteral_3312/*"CAN_SELECT_SEALED_SERVANT_BASE"*/;
    goto LABEL_476;
  }
  if ( v9->fields.isLvMax && v9->fields.isLimitUpItemNum && !v9->fields.isSealCombineLimit )
  {
    if ( !v9->fields.isLimitCntMax )
    {
      v318 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v318, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1090;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1090;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1090;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1090;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = (__int64)*v325;
        if ( !*v325 )
          goto LABEL_1090;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        gameObject = (__int64)*p_statusTxtLb;
        if ( !*p_statusTxtLb )
          goto LABEL_1090;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1090;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v185 = *p_statusTxtLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v186 = &StringLiteral_8639/*"MSG_ABLED_LIMITUP"*/;
        goto LABEL_489;
      }
    }
  }
  else
  {
    v189 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v189, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1090;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1090;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
  }
LABEL_478:
  if ( v9->fields.isSealedLimitCount )
  {
    v190 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v190, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1090;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1090;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)this->fields.sealedStateLabel;
      if ( !gameObject )
        goto LABEL_1090;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1090;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v185 = this->fields.sealedStateLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v186 = &StringLiteral_3312/*"CAN_SELECT_SEALED_SERVANT_BASE"*/;
      goto LABEL_489;
    }
  }
LABEL_492:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_496:
  v191 = v9->fields.type;
  v322 = this;
  v323 = v9;
  v320 = modeKind;
  v321 = &this->fields.statusTxtLb;
  if ( v191 != 3 )
    goto LABEL_572;
  CombineServantListViewItem__GetSkillInfo(v9, &skillInfoList, 0LL);
  enableSkillUp = v9->fields.enableSkillUp;
  v193 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v193, 0LL);
  v194 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_1090;
  v195 = *(_QWORD *)&skillInfoList->max_length;
  if ( (int)v195 >= 1 )
  {
    v196 = 0LL;
    v197 = (unsigned int)(v195 - 1);
    v198 = (unsigned int)*(_QWORD *)&skillInfoList->max_length;
    while ( 1 )
    {
      if ( v196 >= v194->max_length )
        goto LABEL_1091;
      v199 = v194->m_Items[v196];
      if ( v199 )
      {
        lv = v199->fields.lv;
        p_lv = &v199->fields.lv;
        v202 = *(p_lv - 1);
        if ( lv > 0 )
        {
          gameObject = (__int64)System_Int32__ToString((int32_t)p_lv, 0LL);
          goto LABEL_508;
        }
      }
      else
      {
        v202 = -1;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9140/*"NONSKILL_TXT"*/, 0LL);
LABEL_508:
      v203 = (Il2CppObject *)gameObject;
      if ( enableSkillUp )
      {
        v204 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v202,
                 (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v197 == v196 )
        {
          v205 = &StringLiteral_12021/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v204 )
            v205 = &StringLiteral_12023/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v205 = &StringLiteral_12022/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v204 )
            v205 = &StringLiteral_12024/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v205, 0LL);
        if ( v193 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v193, (System_String_o *)gameObject, v203, 0LL);
          if ( v198 == ++v196 )
            goto LABEL_522;
          v194 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_1090;
    }
  }
  if ( !v193 )
    goto LABEL_1090;
LABEL_522:
  skillLvLabel = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v193->klass->vtable._3_ToString.method)(
                 v193,
                 v193->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !skillLvLabel )
    goto LABEL_1090;
  UILabel__set_text(skillLvLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1090;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1090;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  modeKind = v320;
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1090;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    v207 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v207, 0LL, 0LL) )
      goto LABEL_567;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v208 = *v325;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9138/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v208 )
      goto LABEL_1090;
    UILabel__set_text(v208, (System_String_o *)gameObject, 0LL);
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_567;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_38640612(126, 0LL) )
      goto LABEL_567;
    v209 = *v325;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v210 = &StringLiteral_11324/*"SELECT_CANNOT"*/;
    goto LABEL_561;
  }
  isSkillUpItemNum = v9->fields.isSkillUpItemNum;
  v212 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v213 = UnityEngine_Object__op_Inequality(v212, 0LL, 0LL);
  if ( !isSkillUpItemNum )
  {
    if ( v213 )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1090;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1090;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_567;
  }
  if ( v213 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*v321;
    if ( !*v321 )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v209 = *v321;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v210 = &StringLiteral_8640/*"MSG_ABLED_SKILLUP"*/;
LABEL_561:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v210, 0LL);
    if ( !v209 )
      goto LABEL_1090;
    UILabel__set_text(v209, (System_String_o *)gameObject, 0LL);
  }
LABEL_567:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v191 = v9->fields.type;
LABEL_572:
  if ( v191 != 11 )
    goto LABEL_667;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(v9, 0LL);
  enableAppendSkillUp = v9->fields.enableAppendSkillUp;
  v216 = AppendSkillData;
  v217 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v217, 0LL);
  if ( !v216 )
    goto LABEL_1090;
  svtUseSkillIdList = v216->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_1090;
  v219 = *(_QWORD *)&svtUseSkillIdList->max_length;
  if ( (int)v219 >= 1 )
  {
    v220 = 0LL;
    v221 = (unsigned int)(v219 - 1);
    v222 = (unsigned int)*(_QWORD *)&svtUseSkillIdList->max_length;
    while ( v220 < svtUseSkillIdList->max_length )
    {
      svtSkillLvList = v216->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_1090;
      if ( v220 >= svtSkillLvList->max_length )
        break;
      v224 = (__int64)svtSkillLvList + 4 * v220;
      v225 = svtUseSkillIdList->m_Items[v220 + 1];
      v227 = *(_DWORD *)(v224 + 32);
      v226 = v224 + 32;
      if ( v227 <= 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9140/*"NONSKILL_TXT"*/, 0LL);
      }
      else
      {
        gameObject = (__int64)System_Int32__ToString(v226, 0LL);
      }
      v228 = (Il2CppObject *)gameObject;
      if ( enableAppendSkillUp )
      {
        v229 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v225,
                 (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v220 == v221 )
        {
          v230 = &StringLiteral_12021/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v229 )
            v230 = &StringLiteral_12023/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v230 = &StringLiteral_12022/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v229 )
            v230 = &StringLiteral_12024/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v230, 0LL);
        if ( v217 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v217, (System_String_o *)gameObject, v228, 0LL);
          if ( ++v220 == v222 )
            goto LABEL_599;
          svtUseSkillIdList = v216->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_1090;
    }
LABEL_1091:
    sub_1B8661C(gameObject, switchInfoList);
  }
  if ( !v217 )
    goto LABEL_1090;
LABEL_599:
  v231 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v217->klass->vtable._3_ToString.method)(
                 v217,
                 v217->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v231 )
    goto LABEL_1090;
  UILabel__set_text(v231, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1090;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1090;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  modeKind = v320;
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1090;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  gameObject = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v232 = *v325;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9138/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v232 )
      goto LABEL_1090;
    UILabel__set_text(v232, (System_String_o *)gameObject, 0LL);
    if ( v9->fields.isEventJoin )
    {
      v233 = *v325;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10139/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v233 )
        goto LABEL_1090;
      UILabel__set_text(v233, (System_String_o *)gameObject, 0LL);
    }
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_637;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_38640612(126, 0LL) )
      goto LABEL_637;
    v234 = *v325;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v235 = &StringLiteral_11324/*"SELECT_CANNOT"*/;
    goto LABEL_635;
  }
  if ( !enableAppendSkillUp )
    goto LABEL_1090;
  if ( enableAppendSkillUp->fields._size > 0 || v9->fields.isAppendSkillOpenItemNum )
  {
    gameObject = (__int64)*v321;
    if ( !*v321 )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v234 = *v321;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v235 = &StringLiteral_8640/*"MSG_ABLED_SKILLUP"*/;
LABEL_635:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v235, 0LL);
    if ( !v234 )
      goto LABEL_1090;
    UILabel__set_text(v234, (System_String_o *)gameObject, 0LL);
  }
LABEL_637:
  v236 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v236, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
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
          goto LABEL_1090;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)gameObject, switchInfoList, 0LL);
        gameObject = (__int64)this->fields.coinInfo;
        if ( !gameObject )
          goto LABEL_1090;
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
          v243 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum, v240, v241, v242);
          gameObject = (__int64)System_String__Format((System_String_o *)StringLiteral_24769/*"{0:#,0}"*/, v243, 0LL);
          switchInfoList = (UIWidget_array *)gameObject;
        }
        if ( !coinNumLabel )
          goto LABEL_1090;
        UILabel__set_text(coinNumLabel, (System_String_o *)switchInfoList, 0LL);
        gameObject = CombineServantListViewItem__get_SkillOpenItemId(v9, 0LL);
        coinIcon = this->fields.coinIcon;
        if ( (int)gameObject < 1 )
        {
          if ( !coinIcon )
            goto LABEL_1090;
          gameObject = (__int64)coinIcon->fields.iconSprite;
          if ( !gameObject )
            goto LABEL_1090;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1090;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          gameObject = CombineServantListViewItem__get_SkillOpenItemId(v9, 0LL);
          if ( !coinIcon )
            goto LABEL_1090;
          ItemIconComponent__SetItem(coinIcon, gameObject, -1, 1, 0LL);
        }
      }
    }
  }
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_667:
  v245 = v9->fields.type;
  if ( v245 != 12 )
    goto LABEL_781;
  v246 = CombineServantListViewItem__GetAppendSkillData(v9, 0LL);
  v247 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v247, 0LL);
  if ( !v246 )
    goto LABEL_1090;
  v248 = v246->fields.svtUseSkillIdList;
  if ( !v248 )
    goto LABEL_1090;
  v249 = *(_QWORD *)&v248->max_length;
  if ( (int)v249 < 1 )
  {
    v252 = 0;
    v264 = 0;
    if ( !v247 )
      goto LABEL_1090;
  }
  else
  {
    v250 = 0;
    v251 = 0;
    v252 = 0;
    v253 = 0LL;
    while ( 1 )
    {
      if ( v253 >= v248->max_length )
        goto LABEL_1091;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9140/*"NONSKILL_TXT"*/, 0LL);
      v254 = v246->fields.svtSkillLvList;
      if ( !v254 )
        goto LABEL_1090;
      if ( v253 >= v254->max_length )
        goto LABEL_1091;
      v255 = (char *)v254 + 4 * v253;
      v256 = *((_DWORD *)v255 + 8);
      gameObject = (__int64)(v255 + 32);
      if ( v256 >= 1 )
      {
        gameObject = (__int64)System_Int32__ToString(gameObject, 0LL);
        v254 = v246->fields.svtSkillLvList;
        if ( !v254 )
          goto LABEL_1090;
        v251 = 1;
      }
      if ( v253 >= v254->max_length )
        goto LABEL_1091;
      v257 = v254->m_Items[1];
      v258 = v254->m_Items[++v253];
      v252 |= v258 < 10;
      v250 |= v257 != v258;
      if ( v253 == (unsigned int)v249 )
        break;
      v248 = v246->fields.svtUseSkillIdList;
      if ( !v248 )
        goto LABEL_1090;
    }
    v319 = v251;
    v259 = 0LL;
    v260 = 32LL;
    do
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9140/*"NONSKILL_TXT"*/, 0LL);
      v261 = v246->fields.svtSkillLvList;
      if ( !v261 )
        goto LABEL_1090;
      if ( v259 >= v261->max_length )
        goto LABEL_1091;
      v262 = (Il2CppObject *)gameObject;
      if ( *(int *)((char *)&v261->obj.klass + v260) >= 1 )
        v262 = (Il2CppObject *)System_Int32__ToString((int)v261 + (int)v260, 0LL);
      if ( (_DWORD)v249 - 1 == v259 )
      {
        if ( (v250 & 1) == 0 )
          goto LABEL_697;
        if ( !v323->fields.isHeroineSvt )
          goto LABEL_706;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_38640612(126, 0LL) )
        {
LABEL_697:
          v263 = &StringLiteral_12023/*"SKILL_LVDISP_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v263 = &StringLiteral_12023/*"SKILL_LVDISP_SINGLE_TXT"*/;
          }
        }
        else
        {
LABEL_706:
          v263 = &StringLiteral_12021/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v263 = &StringLiteral_12021/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          }
        }
      }
      else
      {
        if ( (v250 & 1) == 0 )
          goto LABEL_704;
        if ( !v323->fields.isHeroineSvt )
          goto LABEL_708;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_38640612(126, 0LL) )
        {
LABEL_704:
          v263 = &StringLiteral_12024/*"SKILL_LVDISP_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v263 = &StringLiteral_12024/*"SKILL_LVDISP_TXT"*/;
          }
        }
        else
        {
LABEL_708:
          v263 = &StringLiteral_12022/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v263 = &StringLiteral_12022/*"SKILL_LVDISP_ENABLE_TXT"*/;
          }
        }
      }
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v263, 0LL);
      if ( !v247 )
        goto LABEL_1090;
      System_Text_StringBuilder__AppendFormat(v247, (System_String_o *)gameObject, v262, 0LL);
      ++v259;
      v260 += 4LL;
    }
    while ( (unsigned int)v249 != v259 );
    this = v322;
    v9 = v323;
    v264 = v319;
    modeKind = v320;
    p_statusTxtLb = v321;
  }
  v265 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v247->klass->vtable._3_ToString.method)(
                 v247,
                 v247->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v265 )
    goto LABEL_1090;
  UILabel__set_text(v265, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1090;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1090;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1090;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)*v325;
    if ( !*v325 )
      goto LABEL_1090;
    UILabel__set_text((UILabel_o *)gameObject, string_TypeInfo->static_fields->Empty, 0LL);
    if ( v9->fields.isEventJoin )
    {
      v266 = *v325;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10139/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v266 )
        goto LABEL_1090;
      UILabel__set_text(v266, (System_String_o *)gameObject, 0LL);
    }
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_1094;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_38640612(126, 0LL) )
    {
      v267 = *v325;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v268 = &StringLiteral_11324/*"SELECT_CANNOT"*/;
    }
    else
    {
LABEL_1094:
      if ( v9->fields.isEventJoin )
      {
        v267 = *v325;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v268 = &StringLiteral_11348/*"SELECT_SERVANT_EVENT_JOIN"*/;
      }
      else if ( (v264 & 1) != 0 )
      {
        if ( (v252 & 1) != 0 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4A48C25 )
          {
            sub_1B863B8(&NetworkManager_TypeInfo, switchInfoList);
            byte_4A48C25 = 1;
          }
          gameObject = (__int64)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            gameObject = (__int64)NetworkManager_TypeInfo;
          }
          if ( !Master_object )
            goto LABEL_1090;
          if ( !UserServantAppendPassiveSkillMaster__TryGetEntity(
                  (UserServantAppendPassiveSkillMaster_o *)Master_object,
                  &entity,
                  *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                  v9->fields.svtId,
                  0LL)
            || !UserServantAppendPassiveSkillMaster__IsExchangeLimited(0LL) )
          {
            goto LABEL_770;
          }
          v267 = *v325;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2002/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/, 0LL);
          if ( !entity )
            goto LABEL_1090;
          v270 = (System_String_o *)gameObject;
          SkillOpenItemNum = UserServantAppendPassiveSkillEntity__GetRemainingExchangeNum(entity, 0LL);
          v274 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum, v271, v272, v273);
          gameObject = (__int64)System_String__Format(v270, v274, 0LL);
          if ( !v267 )
            goto LABEL_1090;
          goto LABEL_769;
        }
        v267 = *v325;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v268 = &StringLiteral_2001/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/;
      }
      else
      {
        v267 = *v325;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v268 = &StringLiteral_2000/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/;
      }
    }
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v268, 0LL);
    if ( !v267 )
      goto LABEL_1090;
LABEL_769:
    UILabel__set_text(v267, (System_String_o *)gameObject, 0LL);
  }
LABEL_770:
  v275 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v275, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
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
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v245 = v9->fields.type;
LABEL_781:
  if ( v245 != 4 )
    goto LABEL_827;
  gameObject = (__int64)this->fields.npIconLabel;
  if ( !gameObject )
    goto LABEL_1090;
  v276 = SHIDWORD(v329.invoker_method) <= 0 ? -1 : LODWORD(v329.invoker_method);
  UIIconLabel__Set_39193520(
    (UIIconLabel_o *)gameObject,
    33,
    v276,
    SHIDWORD(v329.methodPointer),
    0,
    0LL,
    0,
    0,
    0,
    0,
    0LL);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1090;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1090;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    v277 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v277, 0LL, 0LL) )
      goto LABEL_823;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v278 = v9->fields.isHeroineSvt;
    v279 = *v325;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v278 )
      v280 = &StringLiteral_9134/*"NONSELECT_MATERIAL"*/;
    else
      v280 = &StringLiteral_9137/*"NONSELECT_NPUP_BASE"*/;
    v282 = (System_String_o *)*v280;
    goto LABEL_821;
  }
  if ( !v9->fields.isSameSvt && !v9->fields.isBaseSvt )
  {
    v293 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v293, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1090;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1090;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_823;
  }
  v281 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v281, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    if ( v9->fields.isSameSvt )
    {
      gameObject = (__int64)*p_statusTxtLb;
      if ( !*p_statusTxtLb )
        goto LABEL_1090;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1090;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v279 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v282 = (System_String_o *)StringLiteral_8642/*"MSG_ABLED_TDUP"*/;
LABEL_821:
      gameObject = (__int64)LocalizationManager__Get(v282, 0LL);
      if ( !v279 )
        goto LABEL_1090;
      UILabel__set_text(v279, (System_String_o *)gameObject, 0LL);
    }
  }
LABEL_823:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_827:
  v283 = v9->fields.type;
  if ( v283 != 6 )
    goto LABEL_894;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1090;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    v9->fields.currentLimitCnt,
    v9->fields.maxLimitCnt,
    0LL);
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1090;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    v284 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v284, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1090;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1090;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1090;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1090;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      if ( v9->fields.isHeroineSvt && !v9->fields.isLvExceedMax )
      {
        v286 = *v325;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v287 = &StringLiteral_9134/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        isEventJoin = v9->fields.isEventJoin;
        v286 = *v325;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( isEventJoin )
          v287 = &StringLiteral_11348/*"SELECT_SERVANT_EVENT_JOIN"*/;
        else
          v287 = &StringLiteral_9182/*"NO_SELECT_LVEXCEED"*/;
      }
      v291 = (System_String_o *)*v287;
LABEL_887:
      gameObject = (__int64)LocalizationManager__Get(v291, 0LL);
      if ( !v286 )
        goto LABEL_1090;
      UILabel__set_text(v286, (System_String_o *)gameObject, 0LL);
      goto LABEL_889;
    }
    goto LABEL_889;
  }
  if ( !v9->fields.isLvMax || !v9->fields.isLimitCntMax )
  {
    v292 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v292, 0LL, 0LL) )
      goto LABEL_889;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
LABEL_871:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_889;
  }
  isLvExceedItemNum = v9->fields.isLvExceedItemNum;
  v289 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v290 = UnityEngine_Object__op_Inequality(v289, 0LL, 0LL);
  if ( !isLvExceedItemNum )
  {
    if ( !v290 )
      goto LABEL_889;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    goto LABEL_871;
  }
  if ( v290 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)*v325;
    if ( !*v325 )
      goto LABEL_1090;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v286 = *p_statusTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v291 = (System_String_o *)StringLiteral_8639/*"MSG_ABLED_LIMITUP"*/;
    goto LABEL_887;
  }
LABEL_889:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v283 = v9->fields.type;
LABEL_894:
  if ( v283 != 10 && v283 != 7 )
    goto LABEL_956;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1090;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.subIconLabel;
  if ( !gameObject )
    goto LABEL_1090;
  UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0LL);
  v295 = v9->fields.type;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  gameObject = CombineServantListViewManager__GetSortKind(v295, v294);
  v296 = this->fields.servantFaceIcon;
  if ( !v296 )
    goto LABEL_1090;
  if ( (_DWORD)gameObject == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *, __int64, Il2CppMethodPointer))v296->klass->vtable._4_ParameterChange.method)(
      this->fields.servantFaceIcon,
      1LL,
      v296->klass->vtable._5_UpdateAlpha.methodPtr);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_1090;
    ServantFaceIconComponent__ResetIconLabelPos((ServantFaceIconComponent_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_1090;
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
      goto LABEL_1090;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v297 = CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL);
  v298 = (UnityEngine_Object_o *)this->fields.baseButton;
  v299 = v297;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v300 = UnityEngine_Object__op_Inequality(v298, 0LL, 0LL);
  if ( v299 )
  {
    if ( !v300 )
      goto LABEL_945;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( v9->fields.type == 10 && v9->fields.isCommandCardExceedMax )
    {
      v301 = *v325;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9131/*"NONSEELECT_STATUSUP_MAX"*/, 0LL);
      if ( !v301 )
        goto LABEL_1090;
      UILabel__set_text(v301, (System_String_o *)gameObject, 0LL);
    }
    if ( v9->fields.isEventJoin )
    {
      v302 = *v325;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11348/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v302 )
        goto LABEL_1090;
      UILabel__set_text(v302, (System_String_o *)gameObject, 0LL);
    }
    if ( !v9->fields.isHeroineSvt )
      goto LABEL_945;
    v303 = *v325;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11324/*"SELECT_CANNOT"*/, 0LL);
    if ( !v303 )
      goto LABEL_1090;
    v304 = (System_String_o *)gameObject;
    gameObject = (__int64)v303;
    goto LABEL_944;
  }
  if ( v300 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)*v325;
    if ( !*v325 )
      goto LABEL_1090;
    v304 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_944:
    UILabel__set_text((UILabel_o *)gameObject, v304, 0LL);
  }
LABEL_945:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v305 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v305, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v306 = this->fields.svtCommandCardList;
    gameObject = CombineServantListViewItem__get_UserSvtId(v9, 0LL);
    if ( !v306 )
      goto LABEL_1090;
    ServantCommandCardListComponent__Set(v306, gameObject, 1, 1, 0LL);
  }
LABEL_956:
  if ( v9->fields.type != 8 )
    goto LABEL_1015;
  if ( v9->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1090;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(v9, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v9, 0LL) )
  {
    v307 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v307, 0LL, 0LL) )
      goto LABEL_1011;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( !v9->fields.isHeroineSvt || v9->fields.isFriendshipExceedMax && ConstantMaster__IsFLAG20250430(0LL) )
    {
      v308 = v9->fields.isEventJoin;
      v309 = *v325;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v308 )
        v310 = &StringLiteral_11348/*"SELECT_SERVANT_EVENT_JOIN"*/;
      else
        v310 = &StringLiteral_9181/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
    }
    else
    {
      v309 = *v325;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v310 = &StringLiteral_9134/*"NONSELECT_MATERIAL"*/;
    }
    v314 = (System_String_o *)*v310;
    goto LABEL_1009;
  }
  if ( !v9->fields.isFriendshipRankMax )
  {
    v315 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v315, 0LL, 0LL) )
      goto LABEL_1011;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
LABEL_1003:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_1011;
  }
  isFriendshipExceedItemNum = v9->fields.isFriendshipExceedItemNum;
  v312 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v313 = UnityEngine_Object__op_Inequality(v312, 0LL, 0LL);
  if ( !isFriendshipExceedItemNum )
  {
    if ( !v313 )
      goto LABEL_1011;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1090;
    goto LABEL_1003;
  }
  if ( !v313 )
    goto LABEL_1011;
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_1090;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
    gameObject,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_1090;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
    gameObject,
    0LL,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  gameObject = (__int64)*p_maskSprite;
  if ( !*p_maskSprite )
    goto LABEL_1090;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1090;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)*v325;
  if ( !*v325 )
    goto LABEL_1090;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)*p_statusTxtLb;
  if ( !*p_statusTxtLb )
    goto LABEL_1090;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1090;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v309 = *p_statusTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v314 = (System_String_o *)StringLiteral_8638/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/;
LABEL_1009:
  gameObject = (__int64)LocalizationManager__Get(v314, 0LL);
  if ( !v309 )
    goto LABEL_1090;
  UILabel__set_text(v309, (System_String_o *)gameObject, 0LL);
LABEL_1011:
  if ( v9->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_1015:
  if ( (unsigned int)(modeKind - 1) > 1 )
  {
    if ( modeKind != 3 )
      return;
    if ( v9->fields.isEventJoin )
    {
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1090;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1090;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v316 = *v325;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11348/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v316 )
        goto LABEL_1090;
      goto LABEL_1052;
    }
    if ( !v9->fields.isCanNotLock )
    {
      gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
      if ( !gameObject )
        goto LABEL_1090;
      if ( !UserServantEntity__IsLeave((UserServantEntity_o *)gameObject, 0LL) )
      {
        gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
        if ( !gameObject )
          goto LABEL_1090;
        if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)gameObject, 0LL) )
        {
          gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
          if ( !gameObject )
            goto LABEL_1090;
          if ( !UserServantEntity__IsStatusUp((UserServantEntity_o *)gameObject, 0LL) )
          {
            gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(v9, 0LL);
            if ( !gameObject )
              goto LABEL_1090;
            if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)gameObject, 0LL) )
            {
              gameObject = (__int64)*p_maskSprite;
              if ( !*p_maskSprite )
                goto LABEL_1090;
              gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_1090;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
              gameObject = (__int64)*v325;
              if ( !*v325 )
                goto LABEL_1090;
              v317 = (System_String_o *)StringLiteral_1/*""*/;
              goto LABEL_1053;
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
        v316 = *v325;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8164/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
        if ( v316 )
        {
LABEL_1052:
          v317 = (System_String_o *)gameObject;
          gameObject = (__int64)v316;
LABEL_1053:
          UILabel__set_text((UILabel_o *)gameObject, v317, 0LL);
          gameObject = (__int64)*p_statusTxtLb;
          if ( !*p_statusTxtLb )
            goto LABEL_1090;
LABEL_1054:
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
LABEL_1090:
    sub_1B86614(gameObject, switchInfoList);
  }
  if ( !v9->fields.isHeroineSvt )
    goto LABEL_1020;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_38640612(126, 0LL) )
  {
LABEL_1020:
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1090;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1090;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9->fields.isCanNotLock, 0LL);
    if ( v9->fields.isCanNotLock )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      switchInfoList = (UIWidget_array *)LocalizationManager__Get((System_String_o *)StringLiteral_8164/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
    }
    else
    {
      switchInfoList = (UIWidget_array *)StringLiteral_1/*""*/;
    }
    gameObject = (__int64)*v325;
    if ( !*v325 )
      goto LABEL_1090;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)switchInfoList, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1090;
    goto LABEL_1054;
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

  if ( (byte_4A52344 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, item);
    byte_4A52344 = 1;
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
    sub_1B86614(v7, v6);
  }
}