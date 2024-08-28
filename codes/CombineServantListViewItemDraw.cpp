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
  if ( (byte_4A234BA & 1) == 0 )
  {
    sub_1B715CC(&LocalizationManager_TypeInfo, item);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B715CC(&StringLiteral_9230/*"NONSELECT_UNDER_STATUS_MAX"*/, v8);
    sub_1B715CC(&StringLiteral_9225/*"NONSELECT_MATERIAL"*/, v9);
    sub_1B715CC(&StringLiteral_9228/*"NONSELECT_NPUP_BASE"*/, v10);
    sub_1B715CC(&StringLiteral_9226/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v11);
    byte_4A234BA = 1;
  }
  if ( item )
  {
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
    type = item->fields.type;
    v14 = IsSelect;
    if ( type > 0xB )
    {
      v16 = 0;
    }
    else
    {
      if ( ((1 << type) & 0xFDD) != 0 )
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
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9230/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
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
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9230/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
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
      v32 = &StringLiteral_9230/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_78:
      maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v32, 0LL);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)maskSprite, 0LL);
        goto LABEL_80;
      }
LABEL_92:
      sub_1B71828(maskSprite, v21);
    }
    maskLabel = this->fields.maskLabel;
    v25 = LocalizationManager_TypeInfo;
    v27 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_75:
    if ( !v27 )
      j_il2cpp_runtime_class_init_0(v25);
    v32 = &StringLiteral_9225/*"NONSELECT_MATERIAL"*/;
    goto LABEL_78;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0LL) )
  {
    v24 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9226/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
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
      v32 = &StringLiteral_9228/*"NONSELECT_NPUP_BASE"*/;
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
  int32_t v71; // w25
  UILabel_o **p_statusTxtLb; // x20
  struct UILabel_o **p_maskLabel; // x19
  __int64 v74; // x1
  UnityEngine_GameObject_o *v75; // x23
  UnityEngine_GameObject_o *v76; // x23
  UnityEngine_Object_o *pushImg; // x23
  UnityEngine_Object_o *materialTdSprite; // x23
  UISprite_o *v79; // x23
  const MethodInfo *v80; // x1
  int32_t v81; // w23
  int32_t v82; // w8
  bool CanNotBaseSelect; // w0
  UnityEngine_Object_o *v84; // x23
  bool v85; // w22
  bool v86; // w0
  struct UILabel_o *v87; // x22
  __int64 *v88; // x8
  int32_t v89; // w2
  char v90; // w26
  UILabel_o *v91; // x23
  UILabel_o *v92; // x23
  UILabel_o *v93; // x23
  const MethodInfo *v94; // x2
  UILabel_o *v95; // x23
  UILabel_o *v96; // x23
  UILabel_o *v97; // x23
  UILabel_o *v98; // x23
  UILabel_o *v99; // x23
  UILabel_o *v100; // x23
  _BOOL4 isParty; // w19
  __int64 *v102; // x8
  UILabel_o *v103; // x23
  _BOOL4 v104; // w19
  __int64 *v105; // x8
  UILabel_o *v106; // x23
  __int64 v107; // x1
  UnityEngine_GameObject_o *v108; // x23
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x24
  bool v111; // w23
  bool v112; // w0
  int32_t v113; // w8
  UILabel_o *v114; // x22
  UILabel_o *v115; // x22
  UILabel_o *v116; // x22
  UILabel_o *v117; // x22
  __int64 *v118; // x8
  UnityEngine_Object_o *v119; // x23
  uint32_t cctor_finished; // w8
  int v121; // w19
  UILabel_o *v122; // x22
  System_String_o *v123; // x23
  Il2CppObject *v124; // x0
  UILabel_o *v125; // x22
  UILabel_o *v126; // x23
  UILabel_o *v127; // x22
  UILabel_o *v128; // x22
  UILabel_o *v129; // x22
  System_String_o *v130; // x0
  int32_t v131; // w8
  UILabel_o *v132; // x22
  __int64 v133; // x1
  UnityEngine_GameObject_o *v134; // x22
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
  struct UILabel_o **v168; // x19
  UnityEngine_Object_o *v169; // x22
  _BOOL4 isHeroineSvt; // w19
  UILabel_o *v171; // x22
  System_String_o **v172; // x8
  bool v173; // w0
  UnityEngine_Object_o *v174; // x23
  bool v175; // w22
  bool v176; // w0
  UILabel_o *v177; // x22
  __int64 *v178; // x8
  System_String_o *v179; // x1
  _BOOL4 isSealCombineLimit; // w19
  UnityEngine_Object_o *v181; // x22
  UnityEngine_Object_o *v182; // x22
  int32_t v183; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  System_Text_StringBuilder_o *v185; // x22
  SkillInfo_array *v186; // x8
  __int64 v187; // x9
  unsigned __int64 v188; // x26
  __int64 v189; // x27
  __int64 v190; // x20
  SkillInfo_o *v191; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v194; // w25
  Il2CppObject *v195; // x24
  bool v196; // w25
  System_String_o **v197; // x8
  UILabel_o *skillLvLabel; // x23
  UnityEngine_Object_o *v199; // x22
  UILabel_o *v200; // x22
  UILabel_o *v201; // x22
  __int64 *v202; // x8
  _BOOL4 isSkillUpItemNum; // w19
  UnityEngine_Object_o *v204; // x22
  bool v205; // w0
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
  UILabel_o *v224; // x22
  UILabel_o *v225; // x22
  UILabel_o *v226; // x22
  __int64 *v227; // x8
  UnityEngine_Object_o *v228; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  __int64 v232; // x2
  __int64 v233; // x3
  __int64 v234; // x4
  Il2CppObject *v235; // x0
  ItemIconComponent_o *coinIcon; // x22
  int32_t v237; // w8
  int32_t v238; // w2
  UnityEngine_Object_o *v239; // x22
  _BOOL4 v240; // w19
  UILabel_o *v241; // x22
  System_String_o **v242; // x8
  UnityEngine_Object_o *v243; // x22
  UILabel_o *v244; // x22
  UnityEngine_Object_o *v245; // x22
  UILabel_o *v246; // x22
  _BOOL4 isLvExceedItemNum; // w19
  UnityEngine_Object_o *v248; // x22
  bool v249; // w0
  UnityEngine_Object_o *v250; // x22
  UILabel_o **v251; // x9
  _BOOL4 isEventJoin; // w19
  UILabel_o *v253; // x22
  UnityEngine_Object_o *v254; // x22
  int32_t v255; // w8
  const MethodInfo *v256; // x1
  int32_t v257; // w22
  struct ServantFaceIconComponent_o *v258; // x8
  bool v259; // w0
  UnityEngine_Object_o *v260; // x23
  bool v261; // w22
  bool v262; // w0
  UILabel_o *v263; // x22
  UILabel_o *v264; // x22
  struct UILabel_o *v265; // x22
  System_String_o *v266; // x1
  UnityEngine_Object_o *v267; // x22
  ServantCommandCardListComponent_o *v268; // x22
  UnityEngine_Object_o *v269; // x22
  UILabel_o *v270; // x22
  _BOOL4 isFriendshipExceedItemNum; // w19
  UnityEngine_Object_o *v272; // x22
  bool v273; // w0
  UnityEngine_Object_o *v274; // x22
  UILabel_o **v275; // x9
  _BOOL4 v276; // w19
  UILabel_o *v277; // x22
  struct UILabel_o *v278; // x19
  System_String_o *v279; // x1
  int32_t v280; // [xsp+1Ch] [xbp-C4h]
  struct UILabel_o **v281; // [xsp+20h] [xbp-C0h]
  CombineServantListViewItemDraw_o *v282; // [xsp+30h] [xbp-B0h]
  struct UILabel_o **v283; // [xsp+38h] [xbp-A8h]
  struct UISprite_o **p_maskSprite; // [xsp+40h] [xbp-A0h]
  int32_t SkillOpenItemNum; // [xsp+4Ch] [xbp-94h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-90h] BYREF
  MethodInfo v287; // [xsp+58h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v288; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v289; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A234B9 & 1) == 0 )
  {
    sub_1B715CC(&AtlasManager_TypeInfo, item);
    sub_1B715CC(&CombineServantListViewManager_TypeInfo, v11);
    sub_1B715CC(&int_TypeInfo, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Add__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_1B715CC(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1B715CC(&LocalizationManager_TypeInfo, v18);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v19);
    sub_1B715CC(&System_Text_StringBuilder_TypeInfo, v20);
    sub_1B715CC(&TutorialFlag_TypeInfo, v21);
    sub_1B715CC(&StringLiteral_12112/*"SKILL_LVDISP_TXT"*/, v22);
    sub_1B715CC(&StringLiteral_10271/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, v23);
    sub_1B715CC(&StringLiteral_9230/*"NONSELECT_UNDER_STATUS_MAX"*/, v24);
    sub_1B715CC(&StringLiteral_6425/*"FORTIFICATION_APPOINTMENT"*/, v25);
    sub_1B715CC(&StringLiteral_3631/*"COMBINE_CAN_STATUS_UP_INFO"*/, v26);
    sub_1B715CC(&StringLiteral_8724/*"MSG_CAMPAIGN_COMBINE_EXP"*/, v27);
    sub_1B715CC(&StringLiteral_12110/*"SKILL_LVDISP_ENABLE_TXT"*/, v28);
    sub_1B715CC(&StringLiteral_9225/*"NONSELECT_MATERIAL"*/, v29);
    sub_1B715CC(&StringLiteral_22879/*"ribbon_noblephantasmup_01"*/, v30);
    sub_1B715CC(&StringLiteral_9224/*"NONSELECT_LIMITUP_BASE"*/, v31);
    sub_1B715CC(&StringLiteral_10086/*"PARTY_MEMBER_TXT"*/, v32);
    sub_1B715CC(&StringLiteral_9228/*"NONSELECT_NPUP_BASE"*/, v33);
    sub_1B715CC(&StringLiteral_12368/*"SUPPORT_MEMBER"*/, v34);
    sub_1B715CC(&StringLiteral_8720/*"MSG_ABLED_LIMITUP"*/, v35);
    sub_1B715CC(&StringLiteral_11478/*"SELECT_PUSH"*/, v36);
    sub_1B715CC(&StringLiteral_11455/*"SELECT_CANNOT"*/, v37);
    sub_1B715CC(&StringLiteral_9283/*"NPUP_BASE"*/, v38);
    sub_1B715CC(&StringLiteral_12109/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/, v39);
    sub_1B715CC(&StringLiteral_11479/*"SELECT_SERVANT_EVENT_JOIN"*/, v40);
    sub_1B715CC(&StringLiteral_9271/*"NO_SELECT_FRIENDSHIP_EXCEED"*/, v41);
    sub_1B715CC(&StringLiteral_11379/*"SAME_SERVANT"*/, v42);
    sub_1B715CC(&StringLiteral_8719/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, v43);
    sub_1B715CC(&StringLiteral_9226/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v44);
    sub_1B715CC(&StringLiteral_24874/*"{0:#,0}"*/, v45);
    sub_1B715CC(&StringLiteral_12111/*"SKILL_LVDISP_SINGLE_TXT"*/, v46);
    sub_1B715CC(&StringLiteral_8721/*"MSG_ABLED_SKILLUP"*/, v47);
    sub_1B715CC(&StringLiteral_9227/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, v48);
    sub_1B715CC(&StringLiteral_9231/*"NONSKILL_TXT"*/, v49);
    sub_1B715CC(&StringLiteral_8261/*"LOCKMODE_SELECTED_SERVANT"*/, v50);
    sub_1B715CC(&StringLiteral_6339/*"FAVORITE_SERVANT"*/, v51);
    sub_1B715CC(&StringLiteral_3447/*"CHOICE_SERVANT"*/, v52);
    sub_1B715CC(&StringLiteral_10977/*"RECOMMEND_SUPPORT_MEMBER"*/, v53);
    sub_1B715CC(&StringLiteral_8723/*"MSG_ABLED_TDUP"*/, v54);
    sub_1B715CC(&StringLiteral_11449/*"SEAL_COMBINE_LIMIT_THIRD"*/, v55);
    sub_1B715CC(&StringLiteral_9223/*"NONSELECT_BASE_ALLMAX"*/, v56);
    sub_1B715CC(&StringLiteral_9272/*"NO_SELECT_LVEXCEED"*/, v57);
    sub_1B715CC(&StringLiteral_1/*""*/, v58);
    sub_1B715CC(&StringLiteral_9229/*"NONSELECT_SKILLUP_BASE"*/, v59);
    sub_1B715CC(&StringLiteral_11477/*"SELECT_PROTECTED_EVENT_SVT"*/, v60);
    sub_1B715CC(&StringLiteral_8262/*"LOCK_SERVANT"*/, v61);
    sub_1B715CC(&StringLiteral_9222/*"NONSEELECT_STATUSUP_MAX"*/, v62);
    byte_4A234B9 = 1;
  }
  v287.invoker_method = 0LL;
  skillInfoList = 0LL;
  v287.methodPointer = 0LL;
  if ( !item || !mode )
    return;
  svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(svtCommandCardList, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  type = item->fields.type;
  servantFaceIcon = this->fields.servantFaceIcon;
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
  iconLabelInfo1 = item->fields.iconLabelInfo1;
  switchInfoList = (System_String_o *)gameObject;
  if ( type )
  {
    if ( !servantFaceIcon )
      goto LABEL_947;
    ServantFaceIconComponent__Set_38014768(
      servantFaceIcon,
      (UserServantEntity_o *)gameObject,
      iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
    subIconLabel = this->fields.subIconLabel;
    rarity = item->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
    if ( !gameObject )
      goto LABEL_947;
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_947;
    ServantFaceIconComponent__Set_38014768(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0LL, 0LL);
    gameObject = (__int64)item->fields.iconLabelInfo2;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = IconLabelInfo__IsClear((IconLabelInfo_o *)gameObject, 0LL);
    subIconLabel = this->fields.subIconLabel;
    if ( (gameObject & 1) == 0 )
    {
      if ( !subIconLabel )
        goto LABEL_947;
      UIIconLabel__Set(this->fields.subIconLabel, item->fields.iconLabelInfo2, 0LL);
      goto LABEL_22;
    }
    rarity = item->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
    if ( !gameObject )
      goto LABEL_947;
  }
  v71 = *(_DWORD *)(gameObject + 296);
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
  if ( !gameObject || !subIconLabel )
    goto LABEL_947;
  UIIconLabel__Set_38031016(subIconLabel, 36, rarity, v71, 0, 0LL, 0, 0, *(_DWORD *)(gameObject + 256), 0LL);
LABEL_22:
  CombineServantListViewItem__GetNpInfo(
    item,
    (int32_t *)&v287.invoker_method + 1,
    (int32_t *)&v287.invoker_method,
    (int32_t *)&v287.methodPointer + 1,
    0LL);
  gameObject = (__int64)this->fields.lockImg;
  if ( !gameObject )
    goto LABEL_947;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_947;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_statusTxtLb = &this->fields.statusTxtLb;
  gameObject = (__int64)this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_947;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_947;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.maskSprite;
  p_maskSprite = &this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_947;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_947;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_maskLabel = &this->fields.maskLabel;
  gameObject = (__int64)this->fields.maskLabel;
  if ( !gameObject )
    goto LABEL_947;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)*p_maskLabel;
  if ( !*p_maskLabel )
    goto LABEL_947;
  v75 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !byte_4A1A756 )
  {
    sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v74);
    byte_4A1A756 = 1;
  }
  GameObjectExtensions__SetLocalScale(v75, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_947;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_947;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.partyIcon;
  if ( !gameObject )
    goto LABEL_947;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.removeImg;
  if ( !gameObject )
    goto LABEL_947;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_947;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_947;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_947;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.choiceImg;
  if ( !gameObject )
    goto LABEL_947;
  v76 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = CombineServantListViewItem__get_IsDispChoice(item, 0LL);
  if ( !v76 )
    goto LABEL_947;
  UnityEngine_GameObject__SetActive(v76, gameObject & 1, 0LL);
  gameObject = (__int64)this->fields.switchInfoComp;
  if ( !gameObject )
    goto LABEL_947;
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.fortificationRootObj;
  if ( !gameObject )
    goto LABEL_947;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.fortificationNameLabel;
  if ( !gameObject )
    goto LABEL_947;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)this->fields.fortificationDetailNameLabel;
  if ( !gameObject )
    goto LABEL_947;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)this->fields.fortificationAppointmentLabel;
  if ( !gameObject )
    goto LABEL_947;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushImg, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.pushImg;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isPush, 0LL);
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_947;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)gameObject, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isMaterialTdSvt, 0LL);
    if ( item->fields.isMaterialTdSvt )
    {
      v79 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v79, (System_String_o *)StringLiteral_22879/*"ribbon_noblephantasmup_01"*/, 0LL);
      v81 = item->fields.type;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      if ( CombineServantListViewManager__GetSortKind(v81, v80) == 1 )
      {
        gameObject = (__int64)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_947;
        v288.fields.x = 0.65;
        v288.fields.y = 1.0;
        v288.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v288, 0LL);
      }
    }
  }
  v82 = item->fields.type;
  v283 = &this->fields.maskLabel;
  switch ( v82 )
  {
    case 5:
      gameObject = (__int64)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_947;
      v89 = SHIDWORD(v287.invoker_method) <= 0 ? -1 : LODWORD(v287.invoker_method);
      UIIconLabel__Set_38031016(
        (UIIconLabel_o *)gameObject,
        33,
        v89,
        SHIDWORD(v287.methodPointer),
        0,
        0LL,
        0,
        0,
        0,
        0LL);
      gameObject = (__int64)this->fields.npLvInfo;
      if ( !gameObject )
        goto LABEL_947;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      goto LABEL_100;
    case 1:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_947;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0LL);
      if ( CombineServantListViewItem__get_IsProtected(item, 0LL) && item->fields.type != 5 )
      {
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_947;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_947;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v126 = *p_maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11477/*"SELECT_PROTECTED_EVENT_SVT"*/, 0LL);
        if ( !v126 )
          goto LABEL_947;
        UILabel__set_text(v126, (System_String_o *)gameObject, 0LL);
        v90 = 1;
LABEL_101:
        if ( item->fields.isParty )
        {
          gameObject = (__int64)this->fields.partyIcon;
          if ( !gameObject )
            goto LABEL_947;
          FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_947;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_947;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v91 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10086/*"PARTY_MEMBER_TXT"*/, 0LL);
          if ( !v91 )
            goto LABEL_947;
          UILabel__set_text(v91, (System_String_o *)gameObject, 0LL);
          v90 = 1;
        }
        if ( item->fields.isFavorite )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_947;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_947;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v92 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6339/*"FAVORITE_SERVANT"*/, 0LL);
          if ( !v92 )
            goto LABEL_947;
          UILabel__set_text(v92, (System_String_o *)gameObject, 0LL);
          v90 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
        {
          gameObject = (__int64)this->fields.lockImg;
          if ( !gameObject )
            goto LABEL_947;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_947;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_947;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_947;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v93 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8262/*"LOCK_SERVANT"*/, 0LL);
          if ( !v93 )
            goto LABEL_947;
          UILabel__set_text(v93, (System_String_o *)gameObject, 0LL);
          v90 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispChoice(item, 0LL) )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_947;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_947;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v95 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3447/*"CHOICE_SERVANT"*/, 0LL);
          if ( !v95 )
            goto LABEL_947;
          UILabel__set_text(v95, (System_String_o *)gameObject, 0LL);
          v90 = 1;
        }
        if ( item->fields.isLimitCntTarget )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_947;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_947;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v96 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11379/*"SAME_SERVANT"*/, 0LL);
          if ( !v96 )
            goto LABEL_947;
          UILabel__set_text(v96, (System_String_o *)gameObject, 0LL);
          v90 = 1;
        }
        if ( item->fields.isHeroineSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_947;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_947;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v97 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9225/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v97 )
            goto LABEL_947;
          UILabel__set_text(v97, (System_String_o *)gameObject, 0LL);
          v90 = 1;
        }
        if ( item->fields.isStatusUpSvt && !item->fields.isCanStUp )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_947;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_947;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v98 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9225/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v98 )
            goto LABEL_947;
          UILabel__set_text(v98, (System_String_o *)gameObject, 0LL);
          v90 = 1;
        }
        if ( item->fields.isEventJoin )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_947;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_947;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v99 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11479/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
          if ( !v99 )
            goto LABEL_947;
          UILabel__set_text(v99, (System_String_o *)gameObject, 0LL);
          v90 = 1;
        }
        if ( item->fields.isUseSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_947;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_947;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v100 = *p_maskLabel;
          isParty = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v102 = &StringLiteral_12368/*"SUPPORT_MEMBER"*/;
          if ( isParty )
            v102 = &StringLiteral_10086/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v102, 0LL);
          if ( !v100 )
            goto LABEL_947;
          UILabel__set_text(v100, (System_String_o *)gameObject, 0LL);
          p_maskLabel = &this->fields.maskLabel;
          v90 = 1;
        }
        if ( item->fields.isUseRecommendSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_947;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_947;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v103 = *p_maskLabel;
          v104 = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v105 = &StringLiteral_10977/*"RECOMMEND_SUPPORT_MEMBER"*/;
          if ( v104 )
            v105 = &StringLiteral_10086/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v105, 0LL);
          if ( !v103 )
            goto LABEL_947;
          UILabel__set_text(v103, (System_String_o *)gameObject, 0LL);
          p_maskLabel = &this->fields.maskLabel;
          if ( !item->fields.isParty )
          {
            gameObject = (__int64)*v283;
            if ( !*v283 )
              goto LABEL_947;
            UILabel__SetCondensedScale((UILabel_o *)gameObject, 106, 0LL);
          }
          v90 = 1;
        }
        if ( item->fields.isPush )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_947;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_947;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v106 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11478/*"SELECT_PUSH"*/, 0LL);
          if ( !v106 )
            goto LABEL_947;
          UILabel__set_text(v106, (System_String_o *)gameObject, 0LL);
          gameObject = (__int64)*p_maskLabel;
          if ( !*p_maskLabel )
            goto LABEL_947;
          v108 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !byte_4A1A756 )
          {
            sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v107);
            byte_4A1A756 = 1;
          }
          GameObjectExtensions__SetLocalScale(v108, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          v90 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, item, v94);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(item, 0LL);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        v111 = CanNotSelect;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v112 = UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
        if ( v111 )
        {
          if ( !v112 )
            break;
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_947;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_947;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_947;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_947;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          if ( item->fields.isMaxNextLv || item->fields.isBaseLvMax )
          {
            if ( !item->fields.isCanStUp )
            {
              if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0LL) )
              {
                v127 = *v283;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9226/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
                if ( !v127 )
                  goto LABEL_947;
                UILabel__set_text(v127, (System_String_o *)gameObject, 0LL);
                if ( item->fields.type != 5 )
                  break;
                v117 = *v283;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v118 = &StringLiteral_9228/*"NONSELECT_NPUP_BASE"*/;
LABEL_312:
                v130 = (System_String_o *)*v118;
LABEL_313:
                gameObject = (__int64)LocalizationManager__Get(v130, 0LL);
                if ( !v117 )
                  goto LABEL_947;
                UILabel__set_text(v117, (System_String_o *)gameObject, 0LL);
              }
LABEL_315:
              v131 = item->fields.type;
              if ( v131 != 5 )
                goto LABEL_398;
              if ( item->fields.isBaseSvt )
              {
                v132 = *v283;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9283/*"NPUP_BASE"*/, 0LL);
                if ( !v132 )
                  goto LABEL_947;
                UILabel__set_text(v132, (System_String_o *)gameObject, 0LL);
                gameObject = (__int64)*v283;
                if ( !*v283 )
                  goto LABEL_947;
                v134 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !byte_4A1A756 )
                {
                  sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v133);
                  byte_4A1A756 = 1;
                }
                GameObjectExtensions__SetLocalScale(v134, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
              }
              break;
            }
          }
          else if ( !item->fields.isCanStUp )
          {
            if ( item->fields.isFortification )
            {
              gameObject = (__int64)*v283;
              if ( !*v283 )
                goto LABEL_947;
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_947;
              gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_947;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_947;
              UILabel__set_text((UILabel_o *)gameObject, item->fields.fortificationName, 0LL);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_947;
              UILabel__set_text((UILabel_o *)gameObject, item->fields.fortificationDetailName, 0LL);
              fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6425/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
              if ( !fortificationAppointmentLabel )
                goto LABEL_947;
              UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)gameObject, 0LL);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_947;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_947;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL);
              if ( item->fields.type != 5 )
                break;
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_947;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_947;
              *(UnityEngine_Vector3_o *)&v137 = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)gameObject,
                                                  0LL);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_947;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              v140 = v137;
              v141 = v138;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_947;
              v289.fields.x = v140;
              v289.fields.y = fortificationInfoRootObjOffsetY;
              v289.fields.z = v141;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v289, 0LL);
              goto LABEL_315;
            }
            if ( (v90 & 1) == 0 )
            {
              v117 = *v283;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v130 = (System_String_o *)StringLiteral_9225/*"NONSELECT_MATERIAL"*/;
              goto LABEL_313;
            }
            goto LABEL_315;
          }
          if ( item->fields.isStatusUpSvt )
          {
            v113 = item->fields.rarity;
            if ( v113 <= 3 )
            {
              if ( item->fields.isAtkUpMax || item->fields.isHpUpMax )
              {
                v128 = *v283;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9230/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v128 )
                  goto LABEL_947;
                UILabel__set_text(v128, (System_String_o *)gameObject, 0LL);
              }
              if ( item->fields.isAtkSecondUpMax || item->fields.isHpSecondUpMax )
              {
                v129 = *v283;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9230/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v129 )
                  goto LABEL_947;
                UILabel__set_text(v129, (System_String_o *)gameObject, 0LL);
              }
              if ( !item->fields.isNotSelectStatusUpAtk && !item->fields.isNotSelectStatusUpHp )
                goto LABEL_315;
              v117 = *v283;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v118 = &StringLiteral_9230/*"NONSELECT_UNDER_STATUS_MAX"*/;
            }
            else
            {
              if ( v113 != 4 )
                goto LABEL_315;
              if ( item->fields.atkBase >= 1 )
              {
                if ( item->fields.isAtkSecondUpMax || item->fields.isNotSelectSecondStatusUpAtk )
                {
                  v114 = *v283;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9230/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                  if ( !v114 )
                    goto LABEL_947;
                  UILabel__set_text(v114, (System_String_o *)gameObject, 0LL);
                }
                if ( !item->fields.isAtkUpMax )
                {
                  v115 = *v283;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9227/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0LL);
                  if ( !v115 )
                    goto LABEL_947;
                  UILabel__set_text(v115, (System_String_o *)gameObject, 0LL);
                }
              }
              if ( item->fields.hpBase < 1 )
                goto LABEL_315;
              if ( item->fields.isHpSecondUpMax || item->fields.isNotSelectSecondStatusUpHp )
              {
                v116 = *v283;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9230/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v116 )
                  goto LABEL_947;
                UILabel__set_text(v116, (System_String_o *)gameObject, 0LL);
              }
              if ( item->fields.isHpUpMax )
                goto LABEL_315;
              v117 = *v283;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v118 = &StringLiteral_9227/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
            }
            goto LABEL_312;
          }
          goto LABEL_315;
        }
        if ( v112 )
        {
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_947;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_947;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_947;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_947;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        v119 = (UnityEngine_Object_o *)this->fields.baseButton;
        cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
        if ( item->fields.isMaxSelect )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v119, 0LL, 0LL) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_947;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_947;
            v121 = 1;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
LABEL_269:
            if ( item->fields.type == 1 && CombineServantListViewItem__get_IsOrganization(item, 0LL) && !isSelectEnable )
            {
              if ( !(v121 & 1 | !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL)) )
                break;
            }
            else if ( !v121 )
            {
              break;
            }
            gameObject = (__int64)*p_maskSprite;
            if ( !*p_maskSprite )
              goto LABEL_947;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_947;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            v125 = *v283;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9225/*"NONSELECT_MATERIAL"*/, 0LL);
            if ( !v125 )
              goto LABEL_947;
            UILabel__set_text(v125, (System_String_o *)gameObject, 0LL);
            break;
          }
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v119, 0LL, 0LL) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_947;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_947;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          }
        }
        v121 = 0;
        goto LABEL_269;
      }
LABEL_100:
      v90 = 0;
      goto LABEL_101;
    case 0:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_947;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0LL);
      if ( item->fields.isParty )
      {
        gameObject = (__int64)this->fields.partyIcon;
        if ( !gameObject )
          goto LABEL_947;
        FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
      }
      if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
      {
        gameObject = (__int64)this->fields.lockImg;
        if ( !gameObject )
          goto LABEL_947;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_947;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      }
      CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL);
      v84 = (UnityEngine_Object_o *)this->fields.baseButton;
      v85 = CanNotBaseSelect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v86 = UnityEngine_Object__op_Inequality(v84, 0LL, 0LL);
      if ( v85 )
      {
        if ( !v86 )
          goto LABEL_393;
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_947;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_947;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_947;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_947;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        if ( item->fields.isLvMax )
        {
          if ( item->fields.isStatusUpSvt )
            goto LABEL_326;
          if ( !item->fields.isExpUpSvt )
          {
            v87 = *v283;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v88 = &StringLiteral_9223/*"NONSELECT_BASE_ALLMAX"*/;
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
              goto LABEL_947;
            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            gameObject = (__int64)*v283;
            if ( !*v283 )
              goto LABEL_947;
            v135 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_331;
          }
          v87 = *v283;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v88 = &StringLiteral_11455/*"SELECT_CANNOT"*/;
LABEL_329:
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v88, 0LL);
          if ( !v87 )
            goto LABEL_947;
          v135 = (System_String_o *)gameObject;
          gameObject = (__int64)v87;
LABEL_331:
          UILabel__set_text((UILabel_o *)gameObject, v135, 0LL);
          gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
          if ( !gameObject )
            goto LABEL_947;
          CombineServantListViewNoticeTween__RemoveTarget(
            (CombineServantListViewNoticeTween_o *)gameObject,
            *p_statusTxtLb,
            0LL);
LABEL_393:
          if ( item->fields.isBaseSvt )
          {
            gameObject = (__int64)this->fields.removeImg;
            if ( !gameObject )
              goto LABEL_947;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_947;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          }
          break;
        }
LABEL_326:
        v87 = *v283;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v88 = &StringLiteral_9225/*"NONSELECT_MATERIAL"*/;
        goto LABEL_329;
      }
      if ( !v86 )
        goto LABEL_393;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_947;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_947;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_947;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_947;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)*v283;
      if ( !*v283 )
        goto LABEL_947;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( item->fields.isCombineExpCampaignTarget )
      {
        if ( item->fields.isDispAtkStatusUpInfo
          && CombineServantListViewItem__get_IsAtkAdjustMax(item, 0LL)
          && !CombineServantListViewItem__get_IsSecondAtkAdjustMax(item, 0LL) )
        {
          v142 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v142,
            (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v143 = LocalizationManager__Get((System_String_o *)StringLiteral_8724/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v287.methodPointer = item->fields.combineExpCampaignValue;
          v144 = (Il2CppObject *)System_Single__ToString(*(float *)&v287.methodPointer, &v287);
          gameObject = (__int64)System_String__Format(v143, v144, 0LL);
          if ( !v142 )
            goto LABEL_947;
          items = v142->fields._items;
          v148 = Method_System_Collections_Generic_List_string__Add__;
          ++v142->fields._version;
          if ( !items )
            goto LABEL_947;
          size = v142->fields._size;
          v150 = gameObject;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v142,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
          }
          else
          {
            v151 = &items->obj.klass + size;
            v142->fields._size = size + 1;
            v151[4] = (Il2CppClass *)v150;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v151 + 4), v150, v145, v146);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3631/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v163 = v142->fields._items;
          v164 = Method_System_Collections_Generic_List_string__Add__;
          ++v142->fields._version;
          if ( !v163 )
            goto LABEL_947;
        }
        else
        {
          if ( !item->fields.isDispHpStatusUpInfo
            || !CombineServantListViewItem__get_IsHpAdjustMax(item, 0LL)
            || CombineServantListViewItem__get_IsSecondHpAdjustMax(item, 0LL) )
          {
            gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
            if ( !gameObject )
              goto LABEL_947;
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              *p_statusTxtLb,
              0LL);
            v122 = *p_statusTxtLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v123 = LocalizationManager__Get((System_String_o *)StringLiteral_8724/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
            *(float *)&v287.methodPointer = item->fields.combineExpCampaignValue;
            v124 = (Il2CppObject *)System_Single__ToString(*(float *)&v287.methodPointer, &v287);
            gameObject = (__int64)System_String__Format(v123, v124, 0LL);
            if ( !v122 )
              goto LABEL_947;
LABEL_261:
            UILabel__set_text(v122, (System_String_o *)gameObject, 0LL);
LABEL_390:
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_947;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_947;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            goto LABEL_393;
          }
          v142 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v142,
            (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v152 = LocalizationManager__Get((System_String_o *)StringLiteral_8724/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v287.methodPointer = item->fields.combineExpCampaignValue;
          v153 = (Il2CppObject *)System_Single__ToString(*(float *)&v287.methodPointer, &v287);
          gameObject = (__int64)System_String__Format(v152, v153, 0LL);
          if ( !v142 )
            goto LABEL_947;
          v156 = v142->fields._items;
          v157 = Method_System_Collections_Generic_List_string__Add__;
          ++v142->fields._version;
          if ( !v156 )
            goto LABEL_947;
          v158 = v142->fields._size;
          v159 = gameObject;
          if ( (unsigned int)v158 >= v156->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v142,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v157[4] + 192LL) + 112LL));
          }
          else
          {
            v160 = &v156->obj.klass + v158;
            v142->fields._size = v158 + 1;
            v160[4] = (Il2CppClass *)v159;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v160 + 4), v159, v154, v155);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3631/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v163 = v142->fields._items;
          v164 = Method_System_Collections_Generic_List_string__Add__;
          ++v142->fields._version;
          if ( !v163 )
            goto LABEL_947;
        }
        v165 = v142->fields._size;
        v166 = gameObject;
        if ( (unsigned int)v165 >= v163->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v142,
            (Il2CppObject *)gameObject,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
        }
        else
        {
          v167 = &v163->obj.klass + v165;
          v142->fields._size = v165 + 1;
          v167[4] = (Il2CppClass *)v166;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v167 + 4), v166, v161, v162);
        }
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_947;
        CombineServantListViewNoticeTween__AddTarget(
          (CombineServantListViewNoticeTween_o *)gameObject,
          *p_statusTxtLb,
          (System_Collections_Generic_List_string__o *)v142,
          0LL);
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_947;
        CombineServantListViewNoticeTween__SetTexts((CombineServantListViewNoticeTween_o *)gameObject, 0, 0LL);
        goto LABEL_390;
      }
      gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
      if ( !gameObject )
        goto LABEL_947;
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
      v122 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3631/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
      if ( !v122 )
        goto LABEL_947;
      goto LABEL_261;
  }
  v131 = item->fields.type;
LABEL_398:
  if ( v131 == 9 )
  {
    gameObject = (__int64)this->fields.limitCountIcon;
    if ( !gameObject )
      goto LABEL_947;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)gameObject,
      item->fields.currentLimitCnt,
      item->fields.maxLimitCnt,
      0LL);
    v168 = &this->fields.maskLabel;
    if ( item->fields.isParty )
    {
      gameObject = (__int64)this->fields.partyIcon;
      if ( !gameObject )
        goto LABEL_947;
      FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
    }
    if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_947;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_947;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    }
    v173 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL);
    v174 = (UnityEngine_Object_o *)this->fields.baseButton;
    v175 = v173;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v176 = UnityEngine_Object__op_Inequality(v174, 0LL, 0LL);
    if ( !v175 )
      goto LABEL_450;
    if ( !v176 )
      goto LABEL_467;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( item->fields.isHeroineSvt || item->fields.isEventJoin || item->fields.isIgnoreCombineLimitSpecial )
    {
      v177 = *v283;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v178 = &StringLiteral_9225/*"NONSELECT_MATERIAL"*/;
    }
    else if ( item->fields.isLimitCntMax )
    {
      v177 = *v283;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v178 = &StringLiteral_9224/*"NONSELECT_LIMITUP_BASE"*/;
    }
    else
    {
      if ( !item->fields.isSealCombineLimit )
        goto LABEL_467;
      v177 = *v283;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v178 = &StringLiteral_11449/*"SEAL_COMBINE_LIMIT_THIRD"*/;
    }
LABEL_442:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v178, 0LL);
    if ( !v177 )
      goto LABEL_947;
    v179 = (System_String_o *)gameObject;
    gameObject = (__int64)v177;
LABEL_457:
    UILabel__set_text((UILabel_o *)gameObject, v179, 0LL);
    goto LABEL_467;
  }
  v168 = &this->fields.maskLabel;
  if ( v131 != 2 )
    goto LABEL_471;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_947;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0LL);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_947;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL) )
  {
    v169 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v169, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_947;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_947;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_947;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_947;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      isHeroineSvt = item->fields.isHeroineSvt;
      v171 = *v283;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v172 = (System_String_o **)(isHeroineSvt ? &StringLiteral_9225/*"NONSELECT_MATERIAL"*/ : &StringLiteral_9224/*"NONSELECT_LIMITUP_BASE"*/);
      gameObject = (__int64)LocalizationManager__Get(*v172, 0LL);
      if ( !v171 )
        goto LABEL_947;
      UILabel__set_text(v171, (System_String_o *)gameObject, 0LL);
      v168 = &this->fields.maskLabel;
    }
    goto LABEL_467;
  }
  if ( !item->fields.isLvMax || !item->fields.isLimitUpItemNum )
  {
    v182 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v182, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_947;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_947;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_467;
  }
  isSealCombineLimit = item->fields.isSealCombineLimit;
  v181 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v176 = UnityEngine_Object__op_Inequality(v181, 0LL, 0LL);
  if ( isSealCombineLimit )
  {
    v168 = &this->fields.maskLabel;
LABEL_450:
    if ( !v176 )
      goto LABEL_467;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)*v168;
    if ( !*v168 )
      goto LABEL_947;
    v179 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_457;
  }
  v168 = &this->fields.maskLabel;
  if ( v176 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)*v283;
    if ( !*v283 )
      goto LABEL_947;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v177 = *p_statusTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v178 = &StringLiteral_8720/*"MSG_ABLED_LIMITUP"*/;
    goto LABEL_442;
  }
LABEL_467:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_471:
  v183 = item->fields.type;
  v282 = this;
  v280 = modeKind;
  v281 = &this->fields.statusTxtLb;
  if ( v183 != 3 )
    goto LABEL_547;
  CombineServantListViewItem__GetSkillInfo(item, &skillInfoList, 0LL);
  enableSkillUp = item->fields.enableSkillUp;
  v185 = (System_Text_StringBuilder_o *)sub_1B71818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v185, 0LL);
  v186 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_947;
  v187 = *(_QWORD *)&skillInfoList->max_length;
  if ( (int)v187 >= 1 )
  {
    v188 = 0LL;
    v189 = (unsigned int)(v187 - 1);
    v190 = (unsigned int)*(_QWORD *)&skillInfoList->max_length;
    while ( 1 )
    {
      if ( v188 >= v186->max_length )
        goto LABEL_948;
      v191 = v186->m_Items[v188];
      if ( v191 )
      {
        lv = v191->fields.lv;
        p_lv = &v191->fields.lv;
        v194 = *(p_lv - 1);
        if ( lv > 0 )
        {
          gameObject = (__int64)System_Int32__ToString((int32_t)p_lv, 0LL);
          goto LABEL_483;
        }
      }
      else
      {
        v194 = -1;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9231/*"NONSKILL_TXT"*/, 0LL);
LABEL_483:
      v195 = (Il2CppObject *)gameObject;
      if ( enableSkillUp )
      {
        v196 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v194,
                 (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v189 == v188 )
        {
          v197 = (System_String_o **)&StringLiteral_12109/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v196 )
            v197 = (System_String_o **)&StringLiteral_12111/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v197 = (System_String_o **)&StringLiteral_12110/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v196 )
            v197 = (System_String_o **)&StringLiteral_12112/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get(*v197, 0LL);
        if ( v185 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v185, (System_String_o *)gameObject, v195, 0LL);
          if ( v190 == ++v188 )
            goto LABEL_497;
          v186 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_947;
    }
  }
  if ( !v185 )
    goto LABEL_947;
LABEL_497:
  skillLvLabel = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v185->klass->vtable._3_ToString.method)(
                 v185,
                 v185->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !skillLvLabel )
    goto LABEL_947;
  UILabel__set_text(skillLvLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_947;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_947;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  modeKind = v280;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_947;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL) )
  {
    v199 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v199, 0LL, 0LL) )
      goto LABEL_542;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v200 = *v283;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9229/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v200 )
      goto LABEL_947;
    UILabel__set_text(v200, (System_String_o *)gameObject, 0LL);
    if ( !item->fields.isHeroineSvt )
      goto LABEL_542;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_37486428(126, 0LL) )
      goto LABEL_542;
    v201 = *v283;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v202 = &StringLiteral_11455/*"SELECT_CANNOT"*/;
    goto LABEL_536;
  }
  isSkillUpItemNum = item->fields.isSkillUpItemNum;
  v204 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v205 = UnityEngine_Object__op_Inequality(v204, 0LL, 0LL);
  if ( !isSkillUpItemNum )
  {
    if ( v205 )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_947;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_947;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_542;
  }
  if ( v205 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*v281;
    if ( !*v281 )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v201 = *v281;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v202 = &StringLiteral_8721/*"MSG_ABLED_SKILLUP"*/;
LABEL_536:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v202, 0LL);
    if ( !v201 )
      goto LABEL_947;
    UILabel__set_text(v201, (System_String_o *)gameObject, 0LL);
  }
LABEL_542:
  v168 = &this->fields.maskLabel;
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v183 = item->fields.type;
LABEL_547:
  if ( v183 != 11 )
    goto LABEL_642;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(item, 0LL);
  enableAppendSkillUp = item->fields.enableAppendSkillUp;
  v208 = AppendSkillData;
  v209 = (System_Text_StringBuilder_o *)sub_1B71818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v209, 0LL);
  if ( !v208 )
    goto LABEL_947;
  svtUseSkillIdList = v208->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_947;
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
        goto LABEL_947;
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
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9231/*"NONSKILL_TXT"*/, 0LL);
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
                 (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v212 == v213 )
        {
          v222 = (System_String_o **)&StringLiteral_12109/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v221 )
            v222 = (System_String_o **)&StringLiteral_12111/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v222 = (System_String_o **)&StringLiteral_12110/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v221 )
            v222 = (System_String_o **)&StringLiteral_12112/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get(*v222, 0LL);
        if ( v209 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v209, (System_String_o *)gameObject, v220, 0LL);
          if ( ++v212 == v214 )
            goto LABEL_574;
          svtUseSkillIdList = v208->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_947;
    }
LABEL_948:
    sub_1B71830(gameObject, switchInfoList);
  }
  if ( !v209 )
    goto LABEL_947;
LABEL_574:
  this = v282;
  v223 = v282->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v209->klass->vtable._3_ToString.method)(
                 v209,
                 v209->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v223 )
    goto LABEL_947;
  UILabel__set_text(v223, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)v282->fields.skillLvLabel;
  p_statusTxtLb = v281;
  if ( !gameObject )
    goto LABEL_947;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_947;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  modeKind = v280;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)v282->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_947;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)v282->fields.lockImg;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  gameObject = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v224 = *v283;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9229/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v224 )
      goto LABEL_947;
    UILabel__set_text(v224, (System_String_o *)gameObject, 0LL);
    if ( item->fields.isEventJoin )
    {
      v225 = *v283;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10271/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v225 )
        goto LABEL_947;
      UILabel__set_text(v225, (System_String_o *)gameObject, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_612;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_37486428(126, 0LL) )
      goto LABEL_612;
    v226 = *v283;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v227 = &StringLiteral_11455/*"SELECT_CANNOT"*/;
    goto LABEL_610;
  }
  if ( !enableAppendSkillUp )
    goto LABEL_947;
  if ( enableAppendSkillUp->fields._size > 0 || item->fields.isAppendSkillOpenItemNum )
  {
    gameObject = (__int64)*v281;
    if ( !*v281 )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v226 = *v281;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v227 = &StringLiteral_8721/*"MSG_ABLED_SKILLUP"*/;
LABEL_610:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v227, 0LL);
    if ( !v226 )
      goto LABEL_947;
    UILabel__set_text(v226, (System_String_o *)gameObject, 0LL);
  }
LABEL_612:
  v228 = (UnityEngine_Object_o *)v282->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v168 = v283;
  if ( UnityEngine_Object__op_Inequality(v228, 0LL, 0LL) )
  {
    gameObject = (__int64)v282->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)v282->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  coinInfo = (UnityEngine_Object_o *)v282->fields.coinInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(coinInfo, 0LL, 0LL) )
  {
    switchInfoComp = (UnityEngine_Object_o *)v282->fields.switchInfoComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchInfoComp, 0LL, 0LL) )
    {
      switchInfoList = (System_String_o *)v282->fields.switchInfoList;
      if ( switchInfoList )
      {
        gameObject = (__int64)v282->fields.switchInfoComp;
        if ( !gameObject )
          goto LABEL_947;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)gameObject, (UIWidget_array *)switchInfoList, 0LL);
        gameObject = (__int64)v282->fields.coinInfo;
        if ( !gameObject )
          goto LABEL_947;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        coinNumLabel = v282->fields.coinNumLabel;
        gameObject = CombineServantListViewItem__get_SkillOpenItemNum(item, 0LL);
        if ( (gameObject & 0x80000000) != 0 )
        {
          switchInfoList = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(item, 0LL);
          v235 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum, v232, v233, v234);
          gameObject = (__int64)System_String__Format((System_String_o *)StringLiteral_24874/*"{0:#,0}"*/, v235, 0LL);
          switchInfoList = (System_String_o *)gameObject;
        }
        if ( !coinNumLabel )
          goto LABEL_947;
        UILabel__set_text(coinNumLabel, switchInfoList, 0LL);
        gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, 0LL);
        coinIcon = v282->fields.coinIcon;
        if ( (int)gameObject < 1 )
        {
          if ( !coinIcon )
            goto LABEL_947;
          gameObject = (__int64)coinIcon->fields.iconSprite;
          if ( !gameObject )
            goto LABEL_947;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_947;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, 0LL);
          if ( !coinIcon )
            goto LABEL_947;
          ItemIconComponent__SetItem(coinIcon, gameObject, -1, 0LL);
        }
      }
    }
  }
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)v282->fields.removeImg;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_642:
  v237 = item->fields.type;
  if ( v237 == 4 )
  {
    gameObject = (__int64)this->fields.npIconLabel;
    if ( !gameObject )
      goto LABEL_947;
    v238 = SHIDWORD(v287.invoker_method) <= 0 ? -1 : LODWORD(v287.invoker_method);
    UIIconLabel__Set_38031016((UIIconLabel_o *)gameObject, 33, v238, SHIDWORD(v287.methodPointer), 0, 0LL, 0, 0, 0, 0LL);
    gameObject = (__int64)this->fields.npLvInfo;
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( item->fields.isParty )
    {
      gameObject = (__int64)this->fields.partyIcon;
      if ( !gameObject )
        goto LABEL_947;
      FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
    }
    if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_947;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_947;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    }
    if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL) )
    {
      v239 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v239, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_947;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_947;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_947;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_947;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v240 = item->fields.isHeroineSvt;
        v241 = *v283;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v242 = (System_String_o **)(v240 ? &StringLiteral_9225/*"NONSELECT_MATERIAL"*/ : &StringLiteral_9228/*"NONSELECT_NPUP_BASE"*/);
        gameObject = (__int64)LocalizationManager__Get(*v242, 0LL);
        if ( !v241 )
          goto LABEL_947;
        UILabel__set_text(v241, (System_String_o *)gameObject, 0LL);
        v168 = v283;
      }
    }
    else if ( item->fields.isSameSvt || item->fields.isBaseSvt )
    {
      v243 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v243, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_947;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_947;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        if ( item->fields.isSameSvt )
        {
          gameObject = (__int64)*p_statusTxtLb;
          if ( !*p_statusTxtLb )
            goto LABEL_947;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_947;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v244 = *p_statusTxtLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8723/*"MSG_ABLED_TDUP"*/, 0LL);
          if ( !v244 )
            goto LABEL_947;
          UILabel__set_text(v244, (System_String_o *)gameObject, 0LL);
        }
      }
    }
    else
    {
      v254 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v254, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_947;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_947;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      }
    }
    if ( item->fields.isBaseSvt )
    {
      gameObject = (__int64)this->fields.removeImg;
      if ( !gameObject )
        goto LABEL_947;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_947;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    }
    v237 = item->fields.type;
  }
  if ( v237 != 6 )
    goto LABEL_766;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_947;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0LL);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_947;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL) )
  {
    if ( item->fields.isLvMax && item->fields.isLimitCntMax )
    {
      isLvExceedItemNum = item->fields.isLvExceedItemNum;
      v248 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v249 = UnityEngine_Object__op_Inequality(v248, 0LL, 0LL);
      if ( isLvExceedItemNum )
      {
        v168 = v283;
        if ( !v249 )
          goto LABEL_762;
        gameObject = (__int64)this->fields.baseButton;
        if ( gameObject )
        {
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( gameObject )
          {
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
            gameObject = (__int64)*p_maskSprite;
            if ( *p_maskSprite )
            {
              gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                gameObject = (__int64)*v283;
                if ( *v283 )
                {
                  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                  gameObject = (__int64)*p_statusTxtLb;
                  if ( *p_statusTxtLb )
                  {
                    gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)gameObject,
                                            0LL);
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                      v246 = *p_statusTxtLb;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8720/*"MSG_ABLED_LIMITUP"*/, 0LL);
                      if ( v246 )
                        goto LABEL_727;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_947:
        sub_1B71828(gameObject, switchInfoList);
      }
      v168 = v283;
      if ( !v249 )
        goto LABEL_762;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_947;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_947;
    }
    else
    {
      v250 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v250, 0LL, 0LL) )
        goto LABEL_762;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_947;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_947;
    }
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_762;
  }
  v245 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v245, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( item->fields.isHeroineSvt )
    {
      v246 = *v168;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9225/*"NONSELECT_MATERIAL"*/, 0LL);
      if ( !v246 )
        goto LABEL_947;
LABEL_727:
      UILabel__set_text(v246, (System_String_o *)gameObject, 0LL);
      goto LABEL_762;
    }
    v251 = v168;
    isEventJoin = item->fields.isEventJoin;
    v253 = *v251;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isEventJoin )
    {
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11479/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v253 )
        goto LABEL_947;
    }
    else
    {
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9272/*"NO_SELECT_LVEXCEED"*/, 0LL);
      if ( !v253 )
        goto LABEL_947;
    }
    UILabel__set_text(v253, (System_String_o *)gameObject, 0LL);
    v168 = v283;
  }
LABEL_762:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_766:
  v255 = item->fields.type;
  if ( v255 != 10 && v255 != 7 )
    goto LABEL_829;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_947;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.subIconLabel;
  if ( !gameObject )
    goto LABEL_947;
  UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0LL);
  v257 = item->fields.type;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  gameObject = CombineServantListViewManager__GetSortKind(v257, v256);
  v258 = this->fields.servantFaceIcon;
  if ( !v258 )
    goto LABEL_947;
  if ( (_DWORD)gameObject == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *, __int64, Il2CppMethodPointer))v258->klass->vtable._4_ParameterChange.method)(
      this->fields.servantFaceIcon,
      1LL,
      v258->klass->vtable._5_UpdateAlpha.methodPtr);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_947;
    ServantFaceIconComponent__ResetIconLabelPos((ServantFaceIconComponent_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_947;
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
      goto LABEL_947;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v259 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL);
  v260 = (UnityEngine_Object_o *)this->fields.baseButton;
  v261 = v259;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v262 = UnityEngine_Object__op_Inequality(v260, 0LL, 0LL);
  if ( v261 )
  {
    if ( !v262 )
      goto LABEL_817;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( item->fields.type == 10 && item->fields.isCommandCardExceedMax )
    {
      v263 = *v168;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9222/*"NONSEELECT_STATUSUP_MAX"*/, 0LL);
      if ( !v263 )
        goto LABEL_947;
      UILabel__set_text(v263, (System_String_o *)gameObject, 0LL);
    }
    if ( item->fields.isEventJoin )
    {
      v264 = *v168;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11479/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v264 )
        goto LABEL_947;
      UILabel__set_text(v264, (System_String_o *)gameObject, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_817;
    v265 = *v168;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11455/*"SELECT_CANNOT"*/, 0LL);
    if ( !v265 )
      goto LABEL_947;
    v266 = (System_String_o *)gameObject;
    gameObject = (__int64)v265;
    goto LABEL_816;
  }
  if ( v262 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)*v168;
    if ( !*v168 )
      goto LABEL_947;
    v266 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_816:
    UILabel__set_text((UILabel_o *)gameObject, v266, 0LL);
  }
LABEL_817:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v267 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v267, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v268 = this->fields.svtCommandCardList;
    gameObject = CombineServantListViewItem__get_UserSvtId(item, 0LL);
    if ( !v268 )
      goto LABEL_947;
    ServantCommandCardListComponent__Set(v268, gameObject, 1, 1, 0LL);
  }
  v255 = item->fields.type;
LABEL_829:
  if ( v255 != 8 )
    goto LABEL_887;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_947;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL) )
  {
    v269 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v269, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_947;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_947;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_947;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_947;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      if ( item->fields.isHeroineSvt )
      {
        v270 = *v168;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9225/*"NONSELECT_MATERIAL"*/, 0LL);
        if ( !v270 )
          goto LABEL_947;
LABEL_865:
        UILabel__set_text(v270, (System_String_o *)gameObject, 0LL);
        goto LABEL_883;
      }
      v275 = v168;
      v276 = item->fields.isEventJoin;
      v277 = *v275;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v276 )
      {
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11479/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
        if ( !v277 )
          goto LABEL_947;
      }
      else
      {
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9271/*"NO_SELECT_FRIENDSHIP_EXCEED"*/, 0LL);
        if ( !v277 )
          goto LABEL_947;
      }
      UILabel__set_text(v277, (System_String_o *)gameObject, 0LL);
      v168 = v283;
    }
    goto LABEL_883;
  }
  if ( !item->fields.isFriendshipRankMax )
  {
    v274 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v274, 0LL, 0LL) )
      goto LABEL_883;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
LABEL_875:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_883;
  }
  isFriendshipExceedItemNum = item->fields.isFriendshipExceedItemNum;
  v272 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v273 = UnityEngine_Object__op_Inequality(v272, 0LL, 0LL);
  if ( isFriendshipExceedItemNum )
  {
    v168 = v283;
    if ( !v273 )
      goto LABEL_883;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)*v283;
    if ( !*v283 )
      goto LABEL_947;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v270 = *p_statusTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8719/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, 0LL);
    if ( !v270 )
      goto LABEL_947;
    goto LABEL_865;
  }
  v168 = v283;
  if ( v273 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    goto LABEL_875;
  }
LABEL_883:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_887:
  if ( (unsigned int)(modeKind - 1) > 1 )
  {
    if ( modeKind != 3 )
      return;
    if ( item->fields.isEventJoin )
    {
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_947;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_947;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v278 = *v168;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11479/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v278 )
        goto LABEL_947;
    }
    else
    {
      if ( !item->fields.isCanNotLock )
      {
        gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
        if ( !gameObject )
          goto LABEL_947;
        if ( !UserServantEntity__IsLeave((UserServantEntity_o *)gameObject, 0LL) )
        {
          gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
          if ( !gameObject )
            goto LABEL_947;
          if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)gameObject, 0LL) )
          {
            gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
            if ( !gameObject )
              goto LABEL_947;
            if ( !UserServantEntity__IsStatusUp((UserServantEntity_o *)gameObject, 0LL) )
            {
              gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
              if ( !gameObject )
                goto LABEL_947;
              if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)gameObject, 0LL) )
              {
                gameObject = (__int64)*p_maskSprite;
                if ( !*p_maskSprite )
                  goto LABEL_947;
                gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_947;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                gameObject = (__int64)*v168;
                if ( !*v168 )
                  goto LABEL_947;
                v279 = (System_String_o *)StringLiteral_1/*""*/;
                goto LABEL_925;
              }
            }
          }
        }
      }
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_947;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_947;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v278 = *v168;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8261/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
      if ( !v278 )
        goto LABEL_947;
    }
    v279 = (System_String_o *)gameObject;
    gameObject = (__int64)v278;
LABEL_925:
    UILabel__set_text((UILabel_o *)gameObject, v279, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_947;
LABEL_926:
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    return;
  }
  if ( !item->fields.isHeroineSvt )
    goto LABEL_892;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_37486428(126, 0LL) )
  {
LABEL_892:
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isCanNotLock, 0LL);
    if ( item->fields.isCanNotLock )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      switchInfoList = LocalizationManager__Get((System_String_o *)StringLiteral_8261/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
    }
    else
    {
      switchInfoList = (System_String_o *)StringLiteral_1/*""*/;
    }
    gameObject = (__int64)*v168;
    if ( !*v168 )
      goto LABEL_947;
    UILabel__set_text((UILabel_o *)gameObject, switchInfoList, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_947;
    goto LABEL_926;
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

  if ( (byte_4A234BB & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, item);
    byte_4A234BB = 1;
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
    sub_1B71828(v7, v6);
  }
}