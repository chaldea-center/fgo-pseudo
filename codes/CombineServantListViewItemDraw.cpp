void CombineServantListViewItemDraw___ctor(CombineServantListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.fortificationInfoRootObjOffsetY = 9.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CombineServantListViewItemDraw__Awake(CombineServantListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UISprite_o *v9; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.defaultMaskAtlas, (int32_t)mAtlas, v2, v3);
  v9 = this->fields.maskSprite;
  if ( v9 )
    mSpriteName = v9->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.defaultMaskName, (int32_t)mSpriteName, v7, v8);
}


void CombineServantListViewItemDraw__SetInput(
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
  const MethodInfo *v16; // x2
  UnityEngine_Component_o *maskSprite; // x0
  UILabel_o *v18; // x21
  LocalizationManager_c *v19; // x0
  UILabel_o *maskLabel; // x21
  uint32_t v21; // w8
  UnityEngine_Object_o *v22; // x22
  uint32_t cctor_finished; // w8
  int v24; // w22
  int32_t v25; // w8
  __int64 *v26; // x8
  int32_t atkBase; // w8
  UILabel_o *v28; // x21
  UILabel_o *v29; // x21

  v4 = isSelectEnable;
  if ( (byte_4C3BB84 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_9286/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_1C32C20(&StringLiteral_9281/*"NONSELECT_MATERIAL"*/);
    sub_1C32C20(&StringLiteral_9284/*"NONSELECT_NPUP_BASE"*/);
    sub_1C32C20(&StringLiteral_9282/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    byte_4C3BB84 = 1;
  }
  if ( item )
  {
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
    type = item->fields.type;
    v9 = IsSelect;
    if ( type > 0xC )
    {
      v11 = 0;
    }
    else
    {
      if ( ((1 << type) & 0x1FDD) != 0 )
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0);
      else
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotSelect(item, 0);
      v11 = CanNotBaseSelect;
    }
    v12 = !CombineServantListViewItem__get_IsOrganization(item, 0);
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
  v15 = UnityEngine_Object__op_Inequality(baseButton, 0, 0);
  if ( !v11 )
  {
    if ( v15 )
    {
      maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !maskSprite )
        goto LABEL_92;
      ((void (__fastcall *)(UnityEngine_Component_o *, __int64, const char *))maskSprite->klass[1]._1.name)(
        maskSprite,
        1,
        maskSprite->klass[1]._1.namespaze);
      maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !maskSprite )
        goto LABEL_92;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))maskSprite->klass[1]._1.nestedTypes)(
        maskSprite,
        0,
        1,
        maskSprite->klass[1]._1.implementedInterfaces);
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_92;
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
      if ( !maskSprite )
        goto LABEL_92;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
    }
    if ( !item )
      goto LABEL_80;
    v22 = (UnityEngine_Object_o *)this->fields.baseButton;
    cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
    if ( item->fields.isMaxSelect )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
      {
        maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
        if ( !maskSprite )
          goto LABEL_92;
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, const char *))maskSprite->klass[1]._1.name)(
          maskSprite,
          1,
          maskSprite->klass[1]._1.namespaze);
        maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
        if ( !maskSprite )
          goto LABEL_92;
        v24 = 1;
        ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))maskSprite->klass[1]._1.nestedTypes)(
          maskSprite,
          0,
          1,
          maskSprite->klass[1]._1.implementedInterfaces);
        goto LABEL_47;
      }
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
      {
        maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
        if ( !maskSprite )
          goto LABEL_92;
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, const char *))maskSprite->klass[1]._1.name)(
          maskSprite,
          1,
          maskSprite->klass[1]._1.namespaze);
        maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
        if ( !maskSprite )
          goto LABEL_92;
        ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))maskSprite->klass[1]._1.nestedTypes)(
          maskSprite,
          0,
          1,
          maskSprite->klass[1]._1.implementedInterfaces);
      }
    }
    v24 = 0;
LABEL_47:
    v25 = item->fields.type;
    if ( v25 == 5 )
    {
      if ( !(v24 & 1 | item->fields.isMaxNextLv) )
        goto LABEL_80;
    }
    else if ( v25 == 1 )
    {
      if ( ((v13 & ~(v12 || v4) | v24) & 1) == 0 )
        goto LABEL_80;
    }
    else if ( !v24 )
    {
      goto LABEL_80;
    }
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_92;
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
    if ( !maskSprite )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
    maskLabel = this->fields.maskLabel;
    v19 = LocalizationManager_TypeInfo;
    v21 = LocalizationManager_TypeInfo->_2.cctor_finished;
    if ( item->fields.type == 5 )
      goto LABEL_57;
    goto LABEL_75;
  }
  if ( !v15 )
    goto LABEL_80;
  maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
  if ( !maskSprite )
    goto LABEL_92;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, const char *))maskSprite->klass[1]._1.name)(
    maskSprite,
    1,
    maskSprite->klass[1]._1.namespaze);
  maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
  if ( !maskSprite )
    goto LABEL_92;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))maskSprite->klass[1]._1.nestedTypes)(
    maskSprite,
    0,
    1,
    maskSprite->klass[1]._1.implementedInterfaces);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_92;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
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
          v29 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9286/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
          if ( !v29 )
            goto LABEL_92;
          UILabel__set_text(v29, (System_String_o *)maskSprite, 0);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectSecondStatusUpHp )
          goto LABEL_80;
      }
      else
      {
        if ( atkBase >= 1 && item->fields.isNotSelectStatusUpAtk )
        {
          v28 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9286/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
          if ( !v28 )
            goto LABEL_92;
          UILabel__set_text(v28, (System_String_o *)maskSprite, 0);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectStatusUpHp )
          goto LABEL_80;
      }
      maskLabel = this->fields.maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = &StringLiteral_9286/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_78:
      maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v26, 0);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)maskSprite, 0);
        goto LABEL_80;
      }
LABEL_92:
      sub_1C32E7C(maskSprite);
    }
    maskLabel = this->fields.maskLabel;
    v19 = LocalizationManager_TypeInfo;
    v21 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_75:
    if ( !v21 )
      j_il2cpp_runtime_class_init_0(v19);
    v26 = &StringLiteral_9281/*"NONSELECT_MATERIAL"*/;
    goto LABEL_78;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0) )
  {
    v18 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9282/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0);
    if ( !v18 )
      goto LABEL_92;
    UILabel__set_text(v18, (System_String_o *)maskSprite, 0);
    if ( item->fields.type == 5 )
    {
      v19 = LocalizationManager_TypeInfo;
      maskLabel = this->fields.maskLabel;
      v21 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_57:
      if ( !v21 )
        j_il2cpp_runtime_class_init_0(v19);
      v26 = &StringLiteral_9284/*"NONSELECT_NPUP_BASE"*/;
      goto LABEL_78;
    }
  }
LABEL_80:
  CombineServantListViewItemDraw__SetSelectDisp(this, item, v16);
}


void CombineServantListViewItemDraw__SetItem(
        CombineServantListViewItemDraw_o *this,
        CombineServantListViewItem_o *item,
        int32_t mode,
        bool isSelectEnable,
        int32_t modeKind,
        const MethodInfo *method)
{
  UnityEngine_Object_o *svtCommandCardList; // x23
  __int64 gameObject; // x0
  int32_t type; // w19
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  IconLabelInfo_o *iconLabelInfo1; // x2
  UIIconLabel_o *subIconLabel; // x23
  int32_t rarity; // w24
  int32_t v18; // w25
  UILabel_o **p_statusTxtLb; // x28
  struct UILabel_o **p_maskLabel; // x20
  UnityEngine_GameObject_o *v21; // x23
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
  UILabel_o *v55; // x23
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x24
  bool v58; // w23
  bool v59; // w0
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
  int32_t v76; // w8
  UILabel_o *v77; // x22
  UnityEngine_GameObject_o *v78; // x22
  System_String_o *v79; // x1
  UILabel_o *fortificationAppointmentLabel; // x22
  float fortificationInfoRootObjOffsetY; // s10
  float x; // s8
  float z; // s9
  System_Collections_Generic_List_object__o *v84; // x22
  System_String_o *v85; // x23
  Il2CppObject *v86; // x0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  struct System_Object_array *items; // x8
  _QWORD *v90; // x9
  __int64 size; // x10
  __int64 v92; // x1
  Il2CppClass **v93; // x0
  System_String_o *v94; // x23
  Il2CppObject *v95; // x0
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  __int64 v101; // x1
  Il2CppClass **v102; // x0
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  __int64 v108; // x1
  Il2CppClass **v109; // x0
  UnityEngine_Object_o *v110; // x22
  _BOOL4 isHeroineSvt; // w19
  UILabel_o *sealedStateLabel; // x22
  __int64 *v113; // x8
  bool v114; // w0
  UnityEngine_Object_o *v115; // x23
  bool v116; // w22
  bool v117; // w0
  UILabel_o *v118; // x22
  __int64 *v119; // x8
  UnityEngine_Object_o *v120; // x22
  System_String_o *v121; // x1
  UnityEngine_Object_o *v122; // x22
  UnityEngine_Object_o *v123; // x22
  int32_t v124; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  System_Text_StringBuilder_o *v126; // x22
  SkillInfo_array *v127; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned __int64 v129; // x19
  __int64 v130; // x20
  __int64 v131; // x21
  SkillInfo_o *v132; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v135; // w25
  Il2CppObject *v136; // x24
  bool v137; // w25
  __int64 *v138; // x8
  UILabel_o *skillLvLabel; // x23
  UnityEngine_Object_o *v140; // x22
  UILabel_o *v141; // x22
  UILabel_o *v142; // x22
  __int64 *v143; // x8
  _BOOL4 isSkillUpItemNum; // w19
  UnityEngine_Object_o *v145; // x22
  bool v146; // w0
  SvtUseSkillData_o *AppendSkillData; // x0
  struct System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v149; // x24
  System_Text_StringBuilder_o *v150; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  il2cpp_array_size_t v152; // x9
  unsigned __int64 v153; // x19
  __int64 v154; // x20
  __int64 v155; // x21
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v157; // x0
  int32_t v158; // w26
  int32_t v159; // w0
  int v160; // t1
  Il2CppObject *v161; // x25
  bool v162; // w26
  __int64 *v163; // x8
  UILabel_o *v164; // x24
  UILabel_o *v165; // x22
  UILabel_o *v166; // x22
  UILabel_o *v167; // x22
  UnityEngine_Object_o *v168; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UIWidget_array *switchInfoList; // x1
  UILabel_o *coinNumLabel; // x22
  __int64 v173; // x2
  __int64 v174; // x3
  __int64 v175; // x4
  __int64 v176; // x5
  __int64 v177; // x6
  __int64 v178; // x7
  Il2CppObject *v179; // x0
  System_String_o *v180; // x1
  struct ItemIconComponent_o *coinIcon; // x22
  int32_t v182; // w8
  SvtUseSkillData_o *v183; // x23
  System_Text_StringBuilder_o *v184; // x22
  struct System_Int32_array *v185; // x8
  il2cpp_array_size_t v186; // x19
  char v187; // w27
  char v188; // w26
  char v189; // w25
  unsigned __int64 v190; // x21
  struct System_Int32_array *v191; // x8
  char *v192; // x0
  int v193; // t1
  int32_t v194; // w9
  int v195; // w8
  unsigned __int64 v196; // x29
  __int64 v197; // x26
  struct System_Int32_array *v198; // x8
  Il2CppObject *v199; // x24
  __int64 *v200; // x8
  char v201; // w26
  UILabel_o *v202; // x23
  UILabel_o *v203; // x22
  UILabel_o *v204; // x22
  __int64 *v205; // x8
  Il2CppObject *Master_object; // x22
  System_String_o *v207; // x23
  __int64 v208; // x2
  __int64 v209; // x3
  __int64 v210; // x4
  __int64 v211; // x5
  __int64 v212; // x6
  __int64 v213; // x7
  Il2CppObject *v214; // x0
  UnityEngine_Object_o *v215; // x22
  int32_t v216; // w2
  UnityEngine_Object_o *v217; // x22
  _BOOL4 v218; // w19
  UILabel_o *v219; // x22
  __int64 *v220; // x8
  UnityEngine_Object_o *v221; // x22
  System_String_o *v222; // x0
  int32_t v223; // w8
  UnityEngine_Object_o *v224; // x22
  _BOOL4 isEventJoin; // w19
  UILabel_o *v226; // x22
  __int64 *v227; // x8
  _BOOL4 isLvExceedItemNum; // w19
  UnityEngine_Object_o *v229; // x22
  bool v230; // w0
  System_String_o *v231; // x0
  UnityEngine_Object_o *v232; // x22
  UnityEngine_Object_o *v233; // x22
  const MethodInfo *v234; // x1
  int32_t v235; // w22
  struct ServantFaceIconComponent_o *v236; // x8
  bool v237; // w0
  UnityEngine_Object_o *v238; // x23
  bool v239; // w22
  bool v240; // w0
  UILabel_o *v241; // x22
  UILabel_o *v242; // x22
  struct UILabel_o *v243; // x22
  System_String_o *v244; // x1
  UnityEngine_Object_o *v245; // x22
  ServantCommandCardListComponent_o *v246; // x22
  UnityEngine_Object_o *v247; // x22
  _BOOL4 v248; // w19
  UILabel_o *v249; // x22
  __int64 *v250; // x8
  _BOOL4 isFriendshipExceedItemNum; // w19
  UnityEngine_Object_o *v252; // x22
  bool v253; // w0
  System_String_o *v254; // x0
  UnityEngine_Object_o *v255; // x22
  System_String_o *v256; // x1
  struct UILabel_o *v257; // x19
  System_String_o *v258; // x1
  UnityEngine_Object_o *v259; // x22
  char v260; // [xsp+20h] [xbp-D0h]
  int32_t v261; // [xsp+24h] [xbp-CCh]
  struct UILabel_o **v262; // [xsp+28h] [xbp-C8h]
  CombineServantListViewItemDraw_o *v263; // [xsp+30h] [xbp-C0h]
  CombineServantListViewItem_o *v264; // [xsp+38h] [xbp-B8h]
  struct UISprite_o **p_maskSprite; // [xsp+40h] [xbp-B0h]
  struct UILabel_o **v266; // [xsp+48h] [xbp-A8h]
  int32_t SkillOpenItemNum; // [xsp+54h] [xbp-9Ch] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+58h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+60h] [xbp-90h] BYREF
  MethodInfo tdMaxLv; // [xsp+68h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v271; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v273; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BB83 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&CombineServantListViewManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&TutorialFlag_TypeInfo);
    sub_1C32C20(&StringLiteral_12233/*"SKILL_LVDISP_TXT"*/);
    sub_1C32C20(&StringLiteral_10291/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/);
    sub_1C32C20(&StringLiteral_9286/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_1C32C20(&StringLiteral_6477/*"FORTIFICATION_APPOINTMENT"*/);
    sub_1C32C20(&StringLiteral_3570/*"COMBINE_CAN_STATUS_UP_INFO"*/);
    sub_1C32C20(&StringLiteral_8796/*"MSG_CAMPAIGN_COMBINE_EXP"*/);
    sub_1C32C20(&StringLiteral_12231/*"SKILL_LVDISP_ENABLE_TXT"*/);
    sub_1C32C20(&StringLiteral_1986/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/);
    sub_1C32C20(&StringLiteral_9281/*"NONSELECT_MATERIAL"*/);
    sub_1C32C20(&StringLiteral_23108/*"ribbon_noblephantasmup_01"*/);
    sub_1C32C20(&StringLiteral_9280/*"NONSELECT_LIMITUP_BASE"*/);
    sub_1C32C20(&StringLiteral_1987/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/);
    sub_1C32C20(&StringLiteral_10097/*"PARTY_MEMBER_TXT"*/);
    sub_1C32C20(&StringLiteral_3289/*"CAN_SELECT_SEALED_SERVANT_BASE"*/);
    sub_1C32C20(&StringLiteral_9284/*"NONSELECT_NPUP_BASE"*/);
    sub_1C32C20(&StringLiteral_12511/*"SUPPORT_MEMBER"*/);
    sub_1C32C20(&StringLiteral_8792/*"MSG_ABLED_LIMITUP"*/);
    sub_1C32C20(&StringLiteral_11551/*"SELECT_PUSH"*/);
    sub_1C32C20(&StringLiteral_11520/*"SELECT_CANNOT"*/);
    sub_1C32C20(&StringLiteral_9346/*"NPUP_BASE"*/);
    sub_1C32C20(&StringLiteral_1988/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/);
    sub_1C32C20(&StringLiteral_12230/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/);
    sub_1C32C20(&StringLiteral_11552/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C32C20(&StringLiteral_9334/*"NO_SELECT_FRIENDSHIP_EXCEED"*/);
    sub_1C32C20(&StringLiteral_11444/*"SAME_SERVANT"*/);
    sub_1C32C20(&StringLiteral_8791/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/);
    sub_1C32C20(&StringLiteral_9282/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    sub_1C32C20(&StringLiteral_25047/*"{0:#,0}"*/);
    sub_1C32C20(&StringLiteral_12232/*"SKILL_LVDISP_SINGLE_TXT"*/);
    sub_1C32C20(&StringLiteral_8793/*"MSG_ABLED_SKILLUP"*/);
    sub_1C32C20(&StringLiteral_9283/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/);
    sub_1C32C20(&StringLiteral_9287/*"NONSKILL_TXT"*/);
    sub_1C32C20(&StringLiteral_8315/*"LOCKMODE_SELECTED_SERVANT"*/);
    sub_1C32C20(&StringLiteral_6397/*"FAVORITE_SERVANT"*/);
    sub_1C32C20(&StringLiteral_3355/*"CHOICE_SERVANT"*/);
    sub_1C32C20(&StringLiteral_11038/*"RECOMMEND_SUPPORT_MEMBER"*/);
    sub_1C32C20(&StringLiteral_8795/*"MSG_ABLED_TDUP"*/);
    sub_1C32C20(&StringLiteral_11514/*"SEAL_COMBINE_LIMIT_THIRD"*/);
    sub_1C32C20(&StringLiteral_9279/*"NONSELECT_BASE_ALLMAX"*/);
    sub_1C32C20(&StringLiteral_9335/*"NO_SELECT_LVEXCEED"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_9285/*"NONSELECT_SKILLUP_BASE"*/);
    sub_1C32C20(&StringLiteral_11550/*"SELECT_PROTECTED_EVENT_SVT"*/);
    sub_1C32C20(&StringLiteral_7001/*"GRAND_MEMBER"*/);
    sub_1C32C20(&StringLiteral_8316/*"LOCK_SERVANT"*/);
    sub_1C32C20(&StringLiteral_9278/*"NONSEELECT_STATUSUP_MAX"*/);
    byte_4C3BB83 = 1;
  }
  tdMaxLv.invoker_method = 0;
  skillInfoList = 0;
  tdMaxLv.methodPointer = 0;
  entity = 0;
  if ( !item || !mode )
    return;
  svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(svtCommandCardList, 0) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  type = item->fields.type;
  servantFaceIcon = this->fields.servantFaceIcon;
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
  iconLabelInfo1 = item->fields.iconLabelInfo1;
  if ( type )
  {
    if ( !servantFaceIcon )
      goto LABEL_1096;
    ServantFaceIconComponent__Set_40905852(
      servantFaceIcon,
      (UserServantEntity_o *)gameObject,
      iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0);
    subIconLabel = this->fields.subIconLabel;
    rarity = item->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
    if ( !gameObject )
      goto LABEL_1096;
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_1096;
    ServantFaceIconComponent__Set_40905852(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0, 0);
    gameObject = (__int64)item->fields.iconLabelInfo2;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = IconLabelInfo__IsClear((IconLabelInfo_o *)gameObject, 0);
    subIconLabel = this->fields.subIconLabel;
    if ( (gameObject & 1) == 0 )
    {
      if ( !subIconLabel )
        goto LABEL_1096;
      UIIconLabel__Set(this->fields.subIconLabel, item->fields.iconLabelInfo2, 0);
      goto LABEL_22;
    }
    rarity = item->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
    if ( !gameObject )
      goto LABEL_1096;
  }
  v18 = *(_DWORD *)(gameObject + 296);
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
  if ( !gameObject || !subIconLabel )
    goto LABEL_1096;
  UIIconLabel__Set_41010828(
    subIconLabel,
    36,
    rarity,
    v18,
    0,
    0,
    0,
    0,
    *(_DWORD *)(gameObject + 256),
    item->fields.actualRarity,
    0);
LABEL_22:
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_1096;
  ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
    (ServantFaceIconComponent_o *)gameObject,
    this->fields.maskSprite,
    this->fields.defaultMaskName,
    this->fields.defaultMaskAtlas,
    0);
  CombineServantListViewItem__GetNpInfo(
    item,
    (int32_t *)&tdMaxLv.invoker_method + 1,
    (int32_t *)&tdMaxLv.invoker_method,
    (int32_t *)&tdMaxLv.methodPointer + 1,
    0);
  gameObject = (__int64)this->fields.lockImg;
  if ( !gameObject )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  p_statusTxtLb = &this->fields.statusTxtLb;
  gameObject = (__int64)this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.maskSprite;
  p_maskSprite = &this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  p_maskLabel = &this->fields.maskLabel;
  gameObject = (__int64)this->fields.maskLabel;
  if ( !gameObject )
    goto LABEL_1096;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)*p_maskLabel;
  if ( !*p_maskLabel )
    goto LABEL_1096;
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !byte_4C313D6 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1096;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1096;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !byte_4C313D6 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.partyIcon;
  if ( !gameObject )
    goto LABEL_1096;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.removeImg;
  if ( !gameObject )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1096;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.choiceImg;
  if ( !gameObject )
    goto LABEL_1096;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  gameObject = CombineServantListViewItem__get_IsDispChoice(item, 0);
  if ( !v23 )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive(v23, gameObject & 1, 0);
  gameObject = (__int64)this->fields.switchInfoComp;
  if ( !gameObject )
    goto LABEL_1096;
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.fortificationRootObj;
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.fortificationNameLabel;
  if ( !gameObject )
    goto LABEL_1096;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)this->fields.fortificationDetailNameLabel;
  if ( !gameObject )
    goto LABEL_1096;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)this->fields.fortificationAppointmentLabel;
  if ( !gameObject )
    goto LABEL_1096;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushImg, 0, 0) )
  {
    gameObject = (__int64)this->fields.pushImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isPush, 0);
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_1096;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)gameObject, 0);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isMaterialTdSvt, 0);
    if ( item->fields.isMaterialTdSvt )
    {
      v26 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v26, (System_String_o *)StringLiteral_23108/*"ribbon_noblephantasmup_01"*/, 0);
      v28 = item->fields.type;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      if ( CombineServantListViewManager__GetSortKind(v28, v27) == 1 )
      {
        gameObject = (__int64)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_1096;
        v271.fields.x = 0.65;
        v271.fields.y = 1.0;
        v271.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v271, 0);
      }
    }
  }
  v29 = item->fields.type;
  v266 = &this->fields.maskLabel;
  switch ( v29 )
  {
    case 5:
      gameObject = (__int64)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_1096;
      v36 = SHIDWORD(tdMaxLv.invoker_method) <= 0 ? -1 : LODWORD(tdMaxLv.invoker_method);
      UIIconLabel__Set_41010828(
        (UIIconLabel_o *)gameObject,
        33,
        v36,
        SHIDWORD(tdMaxLv.methodPointer),
        0,
        0,
        0,
        0,
        0,
        0,
        0);
      gameObject = (__int64)this->fields.npLvInfo;
      if ( !gameObject )
        goto LABEL_1096;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      goto LABEL_107;
    case 1:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1096;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0);
      if ( CombineServantListViewItem__get_IsProtected(item, 0) && item->fields.type != 5 )
      {
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1096;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1096;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v72 = *v266;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11550/*"SELECT_PROTECTED_EVENT_SVT"*/, 0);
        if ( !v72 )
          goto LABEL_1096;
        UILabel__set_text(v72, (System_String_o *)gameObject, 0);
        v37 = 1;
LABEL_108:
        if ( item->fields.isParty )
        {
          gameObject = (__int64)this->fields.partyIcon;
          if ( !gameObject )
            goto LABEL_1096;
          FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v38 = *v266;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10097/*"PARTY_MEMBER_TXT"*/, 0);
          if ( !v38 )
            goto LABEL_1096;
          UILabel__set_text(v38, (System_String_o *)gameObject, 0);
          v37 = 1;
        }
        if ( item->fields.isFavorite )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v39 = *v266;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6397/*"FAVORITE_SERVANT"*/, 0);
          if ( !v39 )
            goto LABEL_1096;
          UILabel__set_text(v39, (System_String_o *)gameObject, 0);
          v37 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
        {
          gameObject = (__int64)this->fields.lockImg;
          if ( !gameObject )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v40 = *v266;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8316/*"LOCK_SERVANT"*/, 0);
          if ( !v40 )
            goto LABEL_1096;
          UILabel__set_text(v40, (System_String_o *)gameObject, 0);
          v37 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispChoice(item, 0) )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v42 = *v266;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3355/*"CHOICE_SERVANT"*/, 0);
          if ( !v42 )
            goto LABEL_1096;
          UILabel__set_text(v42, (System_String_o *)gameObject, 0);
          v37 = 1;
        }
        if ( item->fields.isLimitCntTarget )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v43 = *v266;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11444/*"SAME_SERVANT"*/, 0);
          if ( !v43 )
            goto LABEL_1096;
          UILabel__set_text(v43, (System_String_o *)gameObject, 0);
          v37 = 1;
        }
        if ( item->fields.isHeroineSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v44 = *v266;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9281/*"NONSELECT_MATERIAL"*/, 0);
          if ( !v44 )
            goto LABEL_1096;
          UILabel__set_text(v44, (System_String_o *)gameObject, 0);
          v37 = 1;
        }
        if ( item->fields.isStatusUpSvt && !item->fields.isCanStUp )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v45 = *v266;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9281/*"NONSELECT_MATERIAL"*/, 0);
          if ( !v45 )
            goto LABEL_1096;
          UILabel__set_text(v45, (System_String_o *)gameObject, 0);
          v37 = 1;
        }
        if ( item->fields.isEventJoin )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v46 = *v266;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11552/*"SELECT_SERVANT_EVENT_JOIN"*/, 0);
          if ( !v46 )
            goto LABEL_1096;
          UILabel__set_text(v46, (System_String_o *)gameObject, 0);
          v37 = 1;
        }
        if ( item->fields.isUseSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v47 = *v266;
          isParty = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v49 = &StringLiteral_12511/*"SUPPORT_MEMBER"*/;
          if ( isParty )
            v49 = &StringLiteral_10097/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v49, 0);
          if ( !v47 )
            goto LABEL_1096;
          UILabel__set_text(v47, (System_String_o *)gameObject, 0);
          v37 = 1;
        }
        if ( item->fields.isUseRecommendSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v50 = *v266;
          v51 = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v52 = &StringLiteral_11038/*"RECOMMEND_SUPPORT_MEMBER"*/;
          if ( v51 )
            v52 = &StringLiteral_10097/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v52, 0);
          if ( !v50 )
            goto LABEL_1096;
          UILabel__set_text(v50, (System_String_o *)gameObject, 0);
          if ( !item->fields.isParty )
          {
            gameObject = (__int64)*v266;
            if ( !*v266 )
              goto LABEL_1096;
            UILabel__SetCondensedScale((UILabel_o *)gameObject, 106, 0, 0);
          }
          v37 = 1;
        }
        if ( item->fields.isPush )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v53 = *v266;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11551/*"SELECT_PUSH"*/, 0);
          if ( !v53 )
            goto LABEL_1096;
          UILabel__set_text(v53, (System_String_o *)gameObject, 0);
          gameObject = (__int64)*v266;
          if ( !*v266 )
            goto LABEL_1096;
          v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !byte_4C313D6 )
          {
            sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
            byte_4C313D6 = 1;
          }
          GameObjectExtensions__SetLocalScale(v54, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          v37 = 1;
        }
        if ( item->fields.isGrandSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v55 = *v266;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7001/*"GRAND_MEMBER"*/, 0);
          if ( !v55 )
            goto LABEL_1096;
          UILabel__set_text(v55, (System_String_o *)gameObject, 0);
          v37 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, item, v41);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(item, 0);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        v58 = CanNotSelect;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v59 = UnityEngine_Object__op_Inequality(baseButton, 0, 0);
        if ( v58 )
        {
          if ( !v59 )
            break;
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1096;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1096;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          if ( item->fields.isMaxNextLv || item->fields.isBaseLvMax )
          {
            if ( !item->fields.isCanStUp )
            {
              if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0) )
              {
                v73 = *v266;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9282/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0);
                if ( !v73 )
                  goto LABEL_1096;
                UILabel__set_text(v73, (System_String_o *)gameObject, 0);
                if ( item->fields.type != 5 )
                  break;
                v63 = *v266;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v64 = &StringLiteral_9284/*"NONSELECT_NPUP_BASE"*/;
LABEL_325:
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v64, 0);
                if ( !v63 )
                  goto LABEL_1096;
LABEL_326:
                UILabel__set_text(v63, (System_String_o *)gameObject, 0);
              }
LABEL_327:
              v76 = item->fields.type;
              if ( v76 != 5 )
                goto LABEL_410;
              if ( item->fields.isBaseSvt )
              {
                v77 = *v266;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9346/*"NPUP_BASE"*/, 0);
                if ( !v77 )
                  goto LABEL_1096;
                UILabel__set_text(v77, (System_String_o *)gameObject, 0);
                gameObject = (__int64)*v266;
                if ( !*v266 )
                  goto LABEL_1096;
                v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !byte_4C313D6 )
                {
                  sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
                  byte_4C313D6 = 1;
                }
                GameObjectExtensions__SetLocalScale(v78, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
              }
              break;
            }
          }
          else if ( !item->fields.isCanStUp )
          {
            if ( item->fields.isFortification )
            {
              gameObject = (__int64)*v266;
              if ( !*v266 )
                goto LABEL_1096;
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1096;
              gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1096;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1096;
              UILabel__set_text((UILabel_o *)gameObject, item->fields.fortificationName, 0);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1096;
              UILabel__set_text((UILabel_o *)gameObject, item->fields.fortificationDetailName, 0);
              fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6477/*"FORTIFICATION_APPOINTMENT"*/, 0);
              if ( !fortificationAppointmentLabel )
                goto LABEL_1096;
              UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)gameObject, 0);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1096;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1096;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0);
              if ( item->fields.type != 5 )
                break;
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1096;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1096;
              localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1096;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              x = localPosition.fields.x;
              z = localPosition.fields.z;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1096;
              v273.fields.x = x;
              v273.fields.y = fortificationInfoRootObjOffsetY;
              v273.fields.z = z;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v273, 0);
              goto LABEL_327;
            }
            if ( (v37 & 1) == 0 )
            {
              v63 = *v266;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9281/*"NONSELECT_MATERIAL"*/, 0);
              if ( !v63 )
                goto LABEL_1096;
              goto LABEL_326;
            }
            goto LABEL_327;
          }
          if ( item->fields.isStatusUpSvt )
          {
            if ( item->fields.rarity <= 3 )
            {
              if ( item->fields.isAtkUpMax || item->fields.isHpUpMax )
              {
                v74 = *v266;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9286/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                if ( !v74 )
                  goto LABEL_1096;
                UILabel__set_text(v74, (System_String_o *)gameObject, 0);
              }
              if ( item->fields.isAtkSecondUpMax || item->fields.isHpSecondUpMax )
              {
                v75 = *v266;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9286/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                if ( !v75 )
                  goto LABEL_1096;
                UILabel__set_text(v75, (System_String_o *)gameObject, 0);
              }
              if ( !item->fields.isNotSelectStatusUpAtk && !item->fields.isNotSelectStatusUpHp )
                goto LABEL_327;
              v63 = *v266;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v64 = &StringLiteral_9286/*"NONSELECT_UNDER_STATUS_MAX"*/;
            }
            else
            {
              if ( item->fields.atkBase >= 1 )
              {
                if ( item->fields.isAtkSecondUpMax || item->fields.isNotSelectSecondStatusUpAtk )
                {
                  v60 = *v266;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9286/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                  if ( !v60 )
                    goto LABEL_1096;
                  UILabel__set_text(v60, (System_String_o *)gameObject, 0);
                }
                if ( !item->fields.isAtkUpMax )
                {
                  v61 = *v266;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9283/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0);
                  if ( !v61 )
                    goto LABEL_1096;
                  UILabel__set_text(v61, (System_String_o *)gameObject, 0);
                }
              }
              if ( item->fields.hpBase < 1 )
                goto LABEL_327;
              if ( item->fields.isHpSecondUpMax || item->fields.isNotSelectSecondStatusUpHp )
              {
                v62 = *v266;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9286/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                if ( !v62 )
                  goto LABEL_1096;
                UILabel__set_text(v62, (System_String_o *)gameObject, 0);
              }
              if ( item->fields.isHpUpMax )
                goto LABEL_327;
              v63 = *v266;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v64 = &StringLiteral_9283/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
            }
            goto LABEL_325;
          }
          goto LABEL_327;
        }
        if ( v59 )
        {
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1096;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1096;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        v65 = (UnityEngine_Object_o *)this->fields.baseButton;
        cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
        if ( item->fields.isMaxSelect )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v65, 0, 0) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1096;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1096;
            v67 = 1;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
LABEL_282:
            if ( item->fields.type == 1 && CombineServantListViewItem__get_IsOrganization(item, 0) && !isSelectEnable )
            {
              if ( !(v67 & 1 | !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0)) )
                break;
            }
            else if ( !v67 )
            {
              break;
            }
            gameObject = (__int64)*p_maskSprite;
            if ( !*p_maskSprite )
              goto LABEL_1096;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_1096;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            v71 = *v266;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9281/*"NONSELECT_MATERIAL"*/, 0);
            if ( !v71 )
              goto LABEL_1096;
            UILabel__set_text(v71, (System_String_o *)gameObject, 0);
            break;
          }
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v65, 0, 0) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1096;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1096;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          }
        }
        v67 = 0;
        goto LABEL_282;
      }
LABEL_107:
      v37 = 0;
      goto LABEL_108;
    case 0:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1096;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0);
      if ( item->fields.isParty )
      {
        gameObject = (__int64)this->fields.partyIcon;
        if ( !gameObject )
          goto LABEL_1096;
        FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
      }
      if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
      {
        gameObject = (__int64)this->fields.lockImg;
        if ( !gameObject )
          goto LABEL_1096;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1096;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      }
      CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0);
      v31 = (UnityEngine_Object_o *)this->fields.baseButton;
      v32 = CanNotBaseSelect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v33 = UnityEngine_Object__op_Inequality(v31, 0, 0);
      if ( v32 )
      {
        if ( !v33 )
          goto LABEL_405;
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1096;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1096;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1096;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1096;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        if ( item->fields.isLvMax )
        {
          if ( item->fields.isStatusUpSvt )
            goto LABEL_338;
          if ( !item->fields.isExpUpSvt )
          {
            v34 = *v266;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v35 = &StringLiteral_9279/*"NONSELECT_BASE_ALLMAX"*/;
            goto LABEL_341;
          }
        }
        else if ( item->fields.isStatusUpSvt )
        {
          goto LABEL_338;
        }
        if ( !item->fields.isExpUpSvt )
        {
          if ( !item->fields.isHeroineSvt )
          {
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1096;
            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
            gameObject = (__int64)*v266;
            if ( !*v266 )
              goto LABEL_1096;
            v79 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_343;
          }
          v34 = *v266;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v35 = &StringLiteral_11520/*"SELECT_CANNOT"*/;
LABEL_341:
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v35, 0);
          if ( !v34 )
            goto LABEL_1096;
          v79 = (System_String_o *)gameObject;
          gameObject = (__int64)v34;
LABEL_343:
          UILabel__set_text((UILabel_o *)gameObject, v79, 0);
          gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
          if ( !gameObject )
            goto LABEL_1096;
          CombineServantListViewNoticeTween__RemoveTarget(
            (CombineServantListViewNoticeTween_o *)gameObject,
            *p_statusTxtLb,
            0);
LABEL_405:
          if ( item->fields.isBaseSvt )
          {
            gameObject = (__int64)this->fields.removeImg;
            if ( !gameObject )
              goto LABEL_1096;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_1096;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          }
          break;
        }
LABEL_338:
        v34 = *v266;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v35 = &StringLiteral_9281/*"NONSELECT_MATERIAL"*/;
        goto LABEL_341;
      }
      if ( !v33 )
        goto LABEL_405;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1096;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1096;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)*v266;
      if ( !*v266 )
        goto LABEL_1096;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( item->fields.isCombineExpCampaignTarget )
      {
        if ( item->fields.isDispAtkStatusUpInfo
          && CombineServantListViewItem__get_IsAtkAdjustMax(item, 0)
          && !CombineServantListViewItem__get_IsSecondAtkAdjustMax(item, 0) )
        {
          v84 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v84,
            (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v85 = LocalizationManager__Get((System_String_o *)StringLiteral_8796/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
          *(float *)&tdMaxLv.methodPointer = item->fields.combineExpCampaignValue;
          v86 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
          gameObject = (__int64)System_String__Format(v85, v86, 0);
          if ( !v84 )
            goto LABEL_1096;
          items = v84->fields._items;
          v90 = Method_System_Collections_Generic_List_string__Add__;
          ++v84->fields._version;
          if ( !items )
            goto LABEL_1096;
          size = v84->fields._size;
          v92 = gameObject;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v84,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
          }
          else
          {
            v93 = &items->obj.klass + size;
            v84->fields._size = size + 1;
            v93[4] = (Il2CppClass *)v92;
            sub_1C32BC4((CGThumbnailListItem_o *)(v93 + 4), v92, v87, v88);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3570/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0);
          v105 = v84->fields._items;
          v106 = Method_System_Collections_Generic_List_string__Add__;
          ++v84->fields._version;
          if ( !v105 )
            goto LABEL_1096;
        }
        else
        {
          if ( !item->fields.isDispHpStatusUpInfo
            || !CombineServantListViewItem__get_IsHpAdjustMax(item, 0)
            || CombineServantListViewItem__get_IsSecondHpAdjustMax(item, 0) )
          {
            gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
            if ( !gameObject )
              goto LABEL_1096;
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              *p_statusTxtLb,
              0);
            v68 = *p_statusTxtLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v69 = LocalizationManager__Get((System_String_o *)StringLiteral_8796/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
            *(float *)&tdMaxLv.methodPointer = item->fields.combineExpCampaignValue;
            v70 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
            gameObject = (__int64)System_String__Format(v69, v70, 0);
            if ( !v68 )
              goto LABEL_1096;
LABEL_274:
            UILabel__set_text(v68, (System_String_o *)gameObject, 0);
LABEL_402:
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1096;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_1096;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            goto LABEL_405;
          }
          v84 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v84,
            (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v94 = LocalizationManager__Get((System_String_o *)StringLiteral_8796/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
          *(float *)&tdMaxLv.methodPointer = item->fields.combineExpCampaignValue;
          v95 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
          gameObject = (__int64)System_String__Format(v94, v95, 0);
          if ( !v84 )
            goto LABEL_1096;
          v98 = v84->fields._items;
          v99 = Method_System_Collections_Generic_List_string__Add__;
          ++v84->fields._version;
          if ( !v98 )
            goto LABEL_1096;
          v100 = v84->fields._size;
          v101 = gameObject;
          if ( (unsigned int)v100 >= LODWORD(v98->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v84,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
          }
          else
          {
            v102 = &v98->obj.klass + v100;
            v84->fields._size = v100 + 1;
            v102[4] = (Il2CppClass *)v101;
            sub_1C32BC4((CGThumbnailListItem_o *)(v102 + 4), v101, v96, v97);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3570/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0);
          v105 = v84->fields._items;
          v106 = Method_System_Collections_Generic_List_string__Add__;
          ++v84->fields._version;
          if ( !v105 )
            goto LABEL_1096;
        }
        v107 = v84->fields._size;
        v108 = gameObject;
        if ( (unsigned int)v107 >= LODWORD(v105->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v84,
            (Il2CppObject *)gameObject,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
        }
        else
        {
          v109 = &v105->obj.klass + v107;
          v84->fields._size = v107 + 1;
          v109[4] = (Il2CppClass *)v108;
          sub_1C32BC4((CGThumbnailListItem_o *)(v109 + 4), v108, v103, v104);
        }
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1096;
        CombineServantListViewNoticeTween__AddTarget(
          (CombineServantListViewNoticeTween_o *)gameObject,
          *p_statusTxtLb,
          (System_Collections_Generic_List_string__o *)v84,
          0);
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1096;
        CombineServantListViewNoticeTween__SetTexts((CombineServantListViewNoticeTween_o *)gameObject, 0, 0);
        goto LABEL_402;
      }
      gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
      if ( !gameObject )
        goto LABEL_1096;
      CombineServantListViewNoticeTween__RemoveTarget(
        (CombineServantListViewNoticeTween_o *)gameObject,
        *p_statusTxtLb,
        0);
      if ( item->fields.isDispAtkStatusUpInfo )
      {
        if ( !CombineServantListViewItem__get_IsAtkAdjustMax(item, 0)
          || CombineServantListViewItem__get_IsSecondAtkAdjustMax(item, 0) )
        {
          goto LABEL_405;
        }
      }
      else if ( !item->fields.isDispHpStatusUpInfo
             || !CombineServantListViewItem__get_IsHpAdjustMax(item, 0)
             || CombineServantListViewItem__get_IsSecondHpAdjustMax(item, 0) )
      {
        goto LABEL_405;
      }
      v68 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3570/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0);
      if ( !v68 )
        goto LABEL_1096;
      goto LABEL_274;
  }
  v76 = item->fields.type;
LABEL_410:
  if ( v76 == 9 )
  {
    gameObject = (__int64)this->fields.limitCountIcon;
    if ( !gameObject )
      goto LABEL_1096;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)gameObject,
      item->fields.currentLimitCnt,
      item->fields.maxLimitCnt,
      0);
    if ( item->fields.isParty )
    {
      gameObject = (__int64)this->fields.partyIcon;
      if ( !gameObject )
        goto LABEL_1096;
      FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
    }
    if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_1096;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1096;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    }
    v114 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0);
    v115 = (UnityEngine_Object_o *)this->fields.baseButton;
    v116 = v114;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v117 = UnityEngine_Object__op_Inequality(v115, 0, 0);
    if ( !v116 )
    {
      if ( !v117 )
        goto LABEL_499;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1096;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1096;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)*v266;
      if ( !*v266 )
        goto LABEL_1096;
      v121 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_498;
    }
    if ( !v117 )
      goto LABEL_499;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( item->fields.isHeroineSvt || item->fields.isEventJoin || item->fields.isIgnoreCombineLimitSpecial )
    {
      v118 = *v266;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v119 = &StringLiteral_9281/*"NONSELECT_MATERIAL"*/;
    }
    else if ( item->fields.isLimitCntMax )
    {
      v118 = *v266;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v119 = &StringLiteral_9280/*"NONSELECT_LIMITUP_BASE"*/;
    }
    else
    {
      if ( !item->fields.isSealCombineLimit )
        goto LABEL_499;
      v118 = *v266;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v119 = &StringLiteral_11514/*"SEAL_COMBINE_LIMIT_THIRD"*/;
    }
LABEL_496:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v119, 0);
    if ( !v118 )
      goto LABEL_1096;
    v121 = (System_String_o *)gameObject;
    gameObject = (__int64)v118;
LABEL_498:
    UILabel__set_text((UILabel_o *)gameObject, v121, 0);
    goto LABEL_499;
  }
  if ( v76 != 2 )
    goto LABEL_503;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1096;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1096;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0) )
  {
    v110 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v110, 0, 0) )
      goto LABEL_485;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    isHeroineSvt = item->fields.isHeroineSvt;
    sealedStateLabel = *v266;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isHeroineSvt )
      v113 = &StringLiteral_9281/*"NONSELECT_MATERIAL"*/;
    else
      v113 = &StringLiteral_9280/*"NONSELECT_LIMITUP_BASE"*/;
LABEL_483:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v113, 0);
    if ( !sealedStateLabel )
      goto LABEL_1096;
    UILabel__set_text(sealedStateLabel, (System_String_o *)gameObject, 0);
    goto LABEL_485;
  }
  if ( item->fields.isSealedLimitCount && item->fields.isLimitCntMax )
  {
    v120 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v120, 0, 0) )
      goto LABEL_485;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)this->fields.sealedStateLabel;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    sealedStateLabel = this->fields.sealedStateLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v113 = &StringLiteral_3289/*"CAN_SELECT_SEALED_SERVANT_BASE"*/;
    goto LABEL_483;
  }
  if ( item->fields.isLvMax && item->fields.isLimitUpItemNum && !item->fields.isSealCombineLimit )
  {
    if ( !item->fields.isLimitCntMax )
    {
      v259 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v259, 0, 0) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1096;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1096;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1096;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1096;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        gameObject = (__int64)*v266;
        if ( !*v266 )
          goto LABEL_1096;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
        gameObject = (__int64)*p_statusTxtLb;
        if ( !*p_statusTxtLb )
          goto LABEL_1096;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1096;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v118 = *p_statusTxtLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v119 = &StringLiteral_8792/*"MSG_ABLED_LIMITUP"*/;
        goto LABEL_496;
      }
    }
  }
  else
  {
    v122 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v122, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
  }
LABEL_485:
  if ( item->fields.isSealedLimitCount )
  {
    v123 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v123, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)this->fields.sealedStateLabel;
      if ( !gameObject )
        goto LABEL_1096;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1096;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v118 = this->fields.sealedStateLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v119 = &StringLiteral_3289/*"CAN_SELECT_SEALED_SERVANT_BASE"*/;
      goto LABEL_496;
    }
  }
LABEL_499:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_503:
  v124 = item->fields.type;
  v263 = this;
  v264 = item;
  v261 = modeKind;
  v262 = &this->fields.statusTxtLb;
  if ( v124 != 3 )
    goto LABEL_579;
  CombineServantListViewItem__GetSkillInfo(item, &skillInfoList, 0);
  enableSkillUp = item->fields.enableSkillUp;
  v126 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v126, 0);
  v127 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_1096;
  max_length = skillInfoList->max_length;
  if ( (int)max_length >= 1 )
  {
    v129 = 0;
    v130 = (unsigned int)(max_length - 1);
    v131 = (unsigned int)skillInfoList->max_length;
    while ( 1 )
    {
      if ( v129 >= LODWORD(v127->max_length) )
        goto LABEL_1097;
      v132 = v127->m_Items[v129];
      if ( v132 )
      {
        lv = v132->fields.lv;
        p_lv = &v132->fields.lv;
        v135 = *(p_lv - 1);
        if ( lv > 0 )
        {
          gameObject = (__int64)System_Int32__ToString((int32_t)p_lv, 0);
          goto LABEL_515;
        }
      }
      else
      {
        v135 = -1;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9287/*"NONSKILL_TXT"*/, 0);
LABEL_515:
      v136 = (Il2CppObject *)gameObject;
      if ( enableSkillUp )
      {
        v137 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v135,
                 (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v130 == v129 )
        {
          v138 = &StringLiteral_12230/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v137 )
            v138 = &StringLiteral_12232/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v138 = &StringLiteral_12231/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v137 )
            v138 = &StringLiteral_12233/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v138, 0);
        if ( v126 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v126, (System_String_o *)gameObject, v136, 0);
          if ( v131 == ++v129 )
            goto LABEL_529;
          v127 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_1096;
    }
  }
  if ( !v126 )
    goto LABEL_1096;
LABEL_529:
  skillLvLabel = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v126->klass->vtable._3_ToString.methodPtr)(
                 v126,
                 v126->klass->vtable._3_ToString.method);
  if ( !skillLvLabel )
    goto LABEL_1096;
  UILabel__set_text(skillLvLabel, (System_String_o *)gameObject, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  modeKind = v261;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1096;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0) )
  {
    v140 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v140, 0, 0) )
      goto LABEL_574;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v141 = *v266;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9285/*"NONSELECT_SKILLUP_BASE"*/, 0);
    if ( !v141 )
      goto LABEL_1096;
    UILabel__set_text(v141, (System_String_o *)gameObject, 0);
    if ( !item->fields.isHeroineSvt )
      goto LABEL_574;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_40328320(126, 0) )
      goto LABEL_574;
    v142 = *v266;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v143 = &StringLiteral_11520/*"SELECT_CANNOT"*/;
    goto LABEL_568;
  }
  isSkillUpItemNum = item->fields.isSkillUpItemNum;
  v145 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v146 = UnityEngine_Object__op_Inequality(v145, 0, 0);
  if ( !isSkillUpItemNum )
  {
    if ( v146 )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_574;
  }
  if ( v146 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*v262;
    if ( !*v262 )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v142 = *v262;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v143 = &StringLiteral_8793/*"MSG_ABLED_SKILLUP"*/;
LABEL_568:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v143, 0);
    if ( !v142 )
      goto LABEL_1096;
    UILabel__set_text(v142, (System_String_o *)gameObject, 0);
  }
LABEL_574:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v124 = item->fields.type;
LABEL_579:
  if ( v124 != 11 )
    goto LABEL_674;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(item, 0);
  enableAppendSkillUp = item->fields.enableAppendSkillUp;
  v149 = AppendSkillData;
  v150 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v150, 0);
  if ( !v149 )
    goto LABEL_1096;
  svtUseSkillIdList = v149->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_1096;
  v152 = svtUseSkillIdList->max_length;
  if ( (int)v152 >= 1 )
  {
    v153 = 0;
    v154 = (unsigned int)(v152 - 1);
    v155 = (unsigned int)svtUseSkillIdList->max_length;
    while ( v153 < LODWORD(svtUseSkillIdList->max_length) )
    {
      svtSkillLvList = v149->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_1096;
      if ( v153 >= LODWORD(svtSkillLvList->max_length) )
        break;
      v157 = (__int64)svtSkillLvList + 4 * v153;
      v158 = svtUseSkillIdList->m_Items[v153];
      v160 = *(_DWORD *)(v157 + 32);
      v159 = v157 + 32;
      if ( v160 <= 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9287/*"NONSKILL_TXT"*/, 0);
      }
      else
      {
        gameObject = (__int64)System_Int32__ToString(v159, 0);
      }
      v161 = (Il2CppObject *)gameObject;
      if ( enableAppendSkillUp )
      {
        v162 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v158,
                 (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v153 == v154 )
        {
          v163 = &StringLiteral_12230/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v162 )
            v163 = &StringLiteral_12232/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v163 = &StringLiteral_12231/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v162 )
            v163 = &StringLiteral_12233/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v163, 0);
        if ( v150 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v150, (System_String_o *)gameObject, v161, 0);
          if ( ++v153 == v155 )
            goto LABEL_606;
          svtUseSkillIdList = v149->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_1096;
    }
LABEL_1097:
    sub_1C32E84(gameObject);
  }
  if ( !v150 )
    goto LABEL_1096;
LABEL_606:
  v164 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v150->klass->vtable._3_ToString.methodPtr)(
                 v150,
                 v150->klass->vtable._3_ToString.method);
  if ( !v164 )
    goto LABEL_1096;
  UILabel__set_text(v164, (System_String_o *)gameObject, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  modeKind = v261;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1096;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  gameObject = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v165 = *v266;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9285/*"NONSELECT_SKILLUP_BASE"*/, 0);
    if ( !v165 )
      goto LABEL_1096;
    UILabel__set_text(v165, (System_String_o *)gameObject, 0);
    if ( item->fields.isEventJoin )
    {
      v166 = *v266;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10291/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v166 )
        goto LABEL_1096;
      UILabel__set_text(v166, (System_String_o *)gameObject, 0);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_644;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_40328320(126, 0) )
      goto LABEL_644;
    v167 = *v266;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11520/*"SELECT_CANNOT"*/, 0);
    if ( !v167 )
      goto LABEL_1096;
  }
  else
  {
    if ( !enableAppendSkillUp )
      goto LABEL_1096;
    if ( enableAppendSkillUp->fields._size <= 0 && !item->fields.isAppendSkillOpenItemNum )
      goto LABEL_644;
    gameObject = (__int64)*v262;
    if ( !*v262 )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v167 = *v262;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8793/*"MSG_ABLED_SKILLUP"*/, 0);
    if ( !v167 )
      goto LABEL_1096;
  }
  UILabel__set_text(v167, (System_String_o *)gameObject, 0);
LABEL_644:
  v168 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v168, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  coinInfo = (UnityEngine_Object_o *)this->fields.coinInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(coinInfo, 0, 0) )
  {
    switchInfoComp = (UnityEngine_Object_o *)this->fields.switchInfoComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchInfoComp, 0, 0) )
    {
      switchInfoList = this->fields.switchInfoList;
      if ( switchInfoList )
      {
        gameObject = (__int64)this->fields.switchInfoComp;
        if ( !gameObject )
          goto LABEL_1096;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)gameObject, switchInfoList, 0, 0);
        gameObject = (__int64)this->fields.coinInfo;
        if ( !gameObject )
          goto LABEL_1096;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        coinNumLabel = this->fields.coinNumLabel;
        gameObject = CombineServantListViewItem__get_SkillOpenItemNum(item, 0);
        if ( (gameObject & 0x80000000) != 0 )
        {
          v180 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(item, 0);
          v179 = (Il2CppObject *)j_il2cpp_value_box_0(
                                   int_TypeInfo,
                                   &SkillOpenItemNum,
                                   v173,
                                   v174,
                                   v175,
                                   v176,
                                   v177,
                                   v178);
          gameObject = (__int64)System_String__Format((System_String_o *)StringLiteral_25047/*"{0:#,0}"*/, v179, 0);
          v180 = (System_String_o *)gameObject;
        }
        if ( !coinNumLabel )
          goto LABEL_1096;
        UILabel__set_text(coinNumLabel, v180, 0);
        gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, 0);
        coinIcon = this->fields.coinIcon;
        if ( (int)gameObject < 1 )
        {
          if ( !coinIcon )
            goto LABEL_1096;
          gameObject = (__int64)coinIcon->fields.iconSprite;
          if ( !gameObject )
            goto LABEL_1096;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1096;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        else
        {
          gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, 0);
          if ( !coinIcon )
            goto LABEL_1096;
          ItemIconComponent__SetItem(coinIcon, gameObject, -1, 1, 0);
        }
      }
    }
  }
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_674:
  v182 = item->fields.type;
  if ( v182 != 12 )
    goto LABEL_788;
  v183 = CombineServantListViewItem__GetAppendSkillData(item, 0);
  v184 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v184, 0);
  if ( !v183 )
    goto LABEL_1096;
  v185 = v183->fields.svtUseSkillIdList;
  if ( !v185 )
    goto LABEL_1096;
  v186 = v185->max_length;
  if ( (int)v186 < 1 )
  {
    v189 = 0;
    v201 = 0;
    if ( !v184 )
      goto LABEL_1096;
  }
  else
  {
    v187 = 0;
    v188 = 0;
    v189 = 0;
    v190 = 0;
    while ( 1 )
    {
      if ( v190 >= LODWORD(v185->max_length) )
        goto LABEL_1097;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9287/*"NONSKILL_TXT"*/, 0);
      v191 = v183->fields.svtSkillLvList;
      if ( !v191 )
        goto LABEL_1096;
      if ( v190 >= LODWORD(v191->max_length) )
        goto LABEL_1097;
      v192 = (char *)v191 + 4 * v190;
      v193 = *((_DWORD *)v192 + 8);
      gameObject = (__int64)(v192 + 32);
      if ( v193 >= 1 )
      {
        gameObject = (__int64)System_Int32__ToString(gameObject, 0);
        v191 = v183->fields.svtSkillLvList;
        if ( !v191 )
          goto LABEL_1096;
        v188 = 1;
      }
      if ( v190 >= LODWORD(v191->max_length) )
        goto LABEL_1097;
      v194 = v191->m_Items[0];
      v195 = v191->m_Items[v190++];
      v189 |= v195 < 10;
      v187 |= v194 != v195;
      if ( v190 == (unsigned int)v186 )
        break;
      v185 = v183->fields.svtUseSkillIdList;
      if ( !v185 )
        goto LABEL_1096;
    }
    v260 = v188;
    v196 = 0;
    v197 = 32;
    do
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9287/*"NONSKILL_TXT"*/, 0);
      v198 = v183->fields.svtSkillLvList;
      if ( !v198 )
        goto LABEL_1096;
      if ( v196 >= LODWORD(v198->max_length) )
        goto LABEL_1097;
      v199 = (Il2CppObject *)gameObject;
      if ( *(int *)((char *)&v198->obj.klass + v197) >= 1 )
        v199 = (Il2CppObject *)System_Int32__ToString((int)v198 + (int)v197, 0);
      if ( (_DWORD)v186 - 1 == v196 )
      {
        if ( (v187 & 1) == 0 )
          goto LABEL_704;
        if ( !v264->fields.isHeroineSvt )
          goto LABEL_713;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_40328320(126, 0) )
        {
LABEL_704:
          v200 = &StringLiteral_12232/*"SKILL_LVDISP_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v200 = &StringLiteral_12232/*"SKILL_LVDISP_SINGLE_TXT"*/;
          }
        }
        else
        {
LABEL_713:
          v200 = &StringLiteral_12230/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v200 = &StringLiteral_12230/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          }
        }
      }
      else
      {
        if ( (v187 & 1) == 0 )
          goto LABEL_711;
        if ( !v264->fields.isHeroineSvt )
          goto LABEL_715;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_40328320(126, 0) )
        {
LABEL_711:
          v200 = &StringLiteral_12233/*"SKILL_LVDISP_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v200 = &StringLiteral_12233/*"SKILL_LVDISP_TXT"*/;
          }
        }
        else
        {
LABEL_715:
          v200 = &StringLiteral_12231/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v200 = &StringLiteral_12231/*"SKILL_LVDISP_ENABLE_TXT"*/;
          }
        }
      }
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v200, 0);
      if ( !v184 )
        goto LABEL_1096;
      System_Text_StringBuilder__AppendFormat(v184, (System_String_o *)gameObject, v199, 0);
      ++v196;
      v197 += 4;
    }
    while ( (unsigned int)v186 != v196 );
    this = v263;
    item = v264;
    v201 = v260;
    modeKind = v261;
    p_statusTxtLb = v262;
  }
  v202 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v184->klass->vtable._3_ToString.methodPtr)(
                 v184,
                 v184->klass->vtable._3_ToString.method);
  if ( !v202
    || (UILabel__set_text(v202, (System_String_o *)gameObject, 0), (gameObject = (__int64)this->fields.skillLvLabel) == 0)
    || (gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
LABEL_1096:
    sub_1C32E7C(gameObject);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1096;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0) )
    goto LABEL_777;
  gameObject = (__int64)*p_maskSprite;
  if ( !*p_maskSprite )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (__int64)*v266;
  if ( !*v266 )
    goto LABEL_1096;
  UILabel__set_text((UILabel_o *)gameObject, string_TypeInfo->static_fields->Empty, 0);
  if ( item->fields.isEventJoin )
  {
    v203 = *v266;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10291/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0);
    if ( !v203 )
      goto LABEL_1096;
    UILabel__set_text(v203, (System_String_o *)gameObject, 0);
  }
  if ( !item->fields.isHeroineSvt )
    goto LABEL_1100;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40328320(126, 0) )
  {
    v204 = *v266;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v205 = &StringLiteral_11520/*"SELECT_CANNOT"*/;
  }
  else
  {
LABEL_1100:
    if ( item->fields.isEventJoin )
    {
      v204 = *v266;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v205 = &StringLiteral_11552/*"SELECT_SERVANT_EVENT_JOIN"*/;
    }
    else if ( (v201 & 1) != 0 )
    {
      if ( (v189 & 1) != 0 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
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
                item->fields.svtId,
                0)
          || !UserServantAppendPassiveSkillMaster__IsExchangeLimited(0) )
        {
          goto LABEL_777;
        }
        v204 = *v266;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1988/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/, 0);
        if ( !entity )
          goto LABEL_1096;
        v207 = (System_String_o *)gameObject;
        SkillOpenItemNum = UserServantAppendPassiveSkillEntity__GetRemainingExchangeNum(entity, 0);
        v214 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum, v208, v209, v210, v211, v212, v213);
        gameObject = (__int64)System_String__Format(v207, v214, 0);
        if ( !v204 )
          goto LABEL_1096;
        goto LABEL_776;
      }
      v204 = *v266;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v205 = &StringLiteral_1987/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/;
    }
    else
    {
      v204 = *v266;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v205 = &StringLiteral_1986/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/;
    }
  }
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v205, 0);
  if ( !v204 )
    goto LABEL_1096;
LABEL_776:
  UILabel__set_text(v204, (System_String_o *)gameObject, 0);
LABEL_777:
  v215 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v215, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v182 = item->fields.type;
LABEL_788:
  if ( v182 != 4 )
    goto LABEL_834;
  gameObject = (__int64)this->fields.npIconLabel;
  if ( !gameObject )
    goto LABEL_1096;
  v216 = SHIDWORD(tdMaxLv.invoker_method) <= 0 ? -1 : LODWORD(tdMaxLv.invoker_method);
  UIIconLabel__Set_41010828((UIIconLabel_o *)gameObject, 33, v216, SHIDWORD(tdMaxLv.methodPointer), 0, 0, 0, 0, 0, 0, 0);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1096;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0) )
  {
    v217 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v217, 0, 0) )
      goto LABEL_830;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v218 = item->fields.isHeroineSvt;
    v219 = *v266;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v218 )
      v220 = &StringLiteral_9281/*"NONSELECT_MATERIAL"*/;
    else
      v220 = &StringLiteral_9284/*"NONSELECT_NPUP_BASE"*/;
    v222 = (System_String_o *)*v220;
    goto LABEL_828;
  }
  if ( !item->fields.isSameSvt && !item->fields.isBaseSvt )
  {
    v233 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v233, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_830;
  }
  v221 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v221, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    if ( item->fields.isSameSvt )
    {
      gameObject = (__int64)*p_statusTxtLb;
      if ( !*p_statusTxtLb )
        goto LABEL_1096;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1096;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v219 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v222 = (System_String_o *)StringLiteral_8795/*"MSG_ABLED_TDUP"*/;
LABEL_828:
      gameObject = (__int64)LocalizationManager__Get(v222, 0);
      if ( !v219 )
        goto LABEL_1096;
      UILabel__set_text(v219, (System_String_o *)gameObject, 0);
    }
  }
LABEL_830:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_834:
  v223 = item->fields.type;
  if ( v223 != 6 )
    goto LABEL_901;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1096;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1096;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0) )
  {
    v224 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v224, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1096;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1096;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1096;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      if ( item->fields.isHeroineSvt && !item->fields.isLvExceedMax )
      {
        v226 = *v266;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v227 = &StringLiteral_9281/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        isEventJoin = item->fields.isEventJoin;
        v226 = *v266;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( isEventJoin )
          v227 = &StringLiteral_11552/*"SELECT_SERVANT_EVENT_JOIN"*/;
        else
          v227 = &StringLiteral_9335/*"NO_SELECT_LVEXCEED"*/;
      }
      v231 = (System_String_o *)*v227;
LABEL_894:
      gameObject = (__int64)LocalizationManager__Get(v231, 0);
      if ( !v226 )
        goto LABEL_1096;
      UILabel__set_text(v226, (System_String_o *)gameObject, 0);
      goto LABEL_896;
    }
    goto LABEL_896;
  }
  if ( !item->fields.isLvMax || !item->fields.isLimitCntMax )
  {
    v232 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v232, 0, 0) )
      goto LABEL_896;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
LABEL_878:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_896;
  }
  isLvExceedItemNum = item->fields.isLvExceedItemNum;
  v229 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v230 = UnityEngine_Object__op_Inequality(v229, 0, 0);
  if ( !isLvExceedItemNum )
  {
    if ( !v230 )
      goto LABEL_896;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    goto LABEL_878;
  }
  if ( v230 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)*v266;
    if ( !*v266 )
      goto LABEL_1096;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v226 = *p_statusTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v231 = (System_String_o *)StringLiteral_8792/*"MSG_ABLED_LIMITUP"*/;
    goto LABEL_894;
  }
LABEL_896:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v223 = item->fields.type;
LABEL_901:
  if ( v223 != 10 && v223 != 7 )
    goto LABEL_963;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1096;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.subIconLabel;
  if ( !gameObject )
    goto LABEL_1096;
  UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0);
  v235 = item->fields.type;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  gameObject = CombineServantListViewManager__GetSortKind(v235, v234);
  v236 = this->fields.servantFaceIcon;
  if ( !v236 )
    goto LABEL_1096;
  if ( (_DWORD)gameObject == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *__return_ptr, struct ServantFaceIconComponent_o *, __int64, const MethodInfo *))v236->klass->vtable._4_ParameterChange.methodPtr)(
      v236,
      this->fields.servantFaceIcon,
      1,
      v236->klass->vtable._4_ParameterChange.method);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_1096;
    ServantFaceIconComponent__ResetIconLabelPos((ServantFaceIconComponent_o *)gameObject, 0);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_1096;
    ServantFaceIconComponent__AdjustIconLabelPos((ServantFaceIconComponent_o *)gameObject, 1.0, -1.0, 0);
  }
  else
  {
    ServantFaceIconComponent__ResetIconLabelPos(this->fields.servantFaceIcon, 0);
  }
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1096;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v237 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0);
  v238 = (UnityEngine_Object_o *)this->fields.baseButton;
  v239 = v237;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v240 = UnityEngine_Object__op_Inequality(v238, 0, 0);
  if ( v239 )
  {
    if ( !v240 )
      goto LABEL_952;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( item->fields.type == 10 && item->fields.isCommandCardExceedMax )
    {
      v241 = *v266;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9278/*"NONSEELECT_STATUSUP_MAX"*/, 0);
      if ( !v241 )
        goto LABEL_1096;
      UILabel__set_text(v241, (System_String_o *)gameObject, 0);
    }
    if ( item->fields.isEventJoin )
    {
      v242 = *v266;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11552/*"SELECT_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v242 )
        goto LABEL_1096;
      UILabel__set_text(v242, (System_String_o *)gameObject, 0);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_952;
    v243 = *v266;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11520/*"SELECT_CANNOT"*/, 0);
    if ( !v243 )
      goto LABEL_1096;
    v244 = (System_String_o *)gameObject;
    gameObject = (__int64)v243;
    goto LABEL_951;
  }
  if ( v240 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)*v266;
    if ( !*v266 )
      goto LABEL_1096;
    v244 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_951:
    UILabel__set_text((UILabel_o *)gameObject, v244, 0);
  }
LABEL_952:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v245 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v245, 0) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v246 = this->fields.svtCommandCardList;
    gameObject = CombineServantListViewItem__get_UserSvtId(item, 0);
    if ( !v246 )
      goto LABEL_1096;
    ServantCommandCardListComponent__Set(v246, gameObject, 1, 1, 0);
  }
LABEL_963:
  if ( item->fields.type != 8 )
    goto LABEL_1021;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1096;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0) )
  {
    v247 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v247, 0, 0) )
      goto LABEL_1017;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( item->fields.isHeroineSvt && !item->fields.isFriendshipExceedMax )
    {
      v249 = *v266;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v250 = &StringLiteral_9281/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      v248 = item->fields.isEventJoin;
      v249 = *v266;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v248 )
        v250 = &StringLiteral_11552/*"SELECT_SERVANT_EVENT_JOIN"*/;
      else
        v250 = &StringLiteral_9334/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
    }
    v254 = (System_String_o *)*v250;
    goto LABEL_1015;
  }
  if ( !item->fields.isFriendshipRankMax )
  {
    v255 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v255, 0, 0) )
      goto LABEL_1017;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
LABEL_1009:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_1017;
  }
  isFriendshipExceedItemNum = item->fields.isFriendshipExceedItemNum;
  v252 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v253 = UnityEngine_Object__op_Inequality(v252, 0, 0);
  if ( !isFriendshipExceedItemNum )
  {
    if ( !v253 )
      goto LABEL_1017;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1096;
    goto LABEL_1009;
  }
  if ( !v253 )
    goto LABEL_1017;
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_1096;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
    gameObject,
    1,
    *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_1096;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
    gameObject,
    0,
    1,
    *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  gameObject = (__int64)*p_maskSprite;
  if ( !*p_maskSprite )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)*v266;
  if ( !*v266 )
    goto LABEL_1096;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)*p_statusTxtLb;
  if ( !*p_statusTxtLb )
    goto LABEL_1096;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1096;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v249 = *p_statusTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v254 = (System_String_o *)StringLiteral_8791/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/;
LABEL_1015:
  gameObject = (__int64)LocalizationManager__Get(v254, 0);
  if ( !v249 )
    goto LABEL_1096;
  UILabel__set_text(v249, (System_String_o *)gameObject, 0);
LABEL_1017:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_1021:
  if ( (unsigned int)(modeKind - 1) > 1 )
  {
    if ( modeKind != 3 )
      return;
    if ( item->fields.isEventJoin )
    {
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1096;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1096;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v257 = *v266;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11552/*"SELECT_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v257 )
        goto LABEL_1096;
    }
    else
    {
      if ( !item->fields.isCanNotLock )
      {
        gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
        if ( !gameObject )
          goto LABEL_1096;
        if ( !UserServantEntity__IsLeave((UserServantEntity_o *)gameObject, 0) )
        {
          gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
          if ( !gameObject )
            goto LABEL_1096;
          if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)gameObject, 0) )
          {
            gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
            if ( !gameObject )
              goto LABEL_1096;
            if ( !UserServantEntity__IsStatusUp((UserServantEntity_o *)gameObject, 0) )
            {
              gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
              if ( !gameObject )
                goto LABEL_1096;
              if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)gameObject, 0) )
              {
                gameObject = (__int64)*p_maskSprite;
                if ( !*p_maskSprite )
                  goto LABEL_1096;
                gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !gameObject )
                  goto LABEL_1096;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
                gameObject = (__int64)*v266;
                if ( !*v266 )
                  goto LABEL_1096;
                v258 = (System_String_o *)StringLiteral_1/*""*/;
                goto LABEL_1059;
              }
            }
          }
        }
      }
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1096;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1096;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v257 = *v266;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8315/*"LOCKMODE_SELECTED_SERVANT"*/, 0);
      if ( !v257 )
        goto LABEL_1096;
    }
    v258 = (System_String_o *)gameObject;
    gameObject = (__int64)v257;
LABEL_1059:
    UILabel__set_text((UILabel_o *)gameObject, v258, 0);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1096;
LABEL_1060:
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    return;
  }
  if ( !item->fields.isHeroineSvt )
    goto LABEL_1026;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_40328320(126, 0) )
  {
LABEL_1026:
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1096;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1096;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isCanNotLock, 0);
    if ( item->fields.isCanNotLock )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v256 = LocalizationManager__Get((System_String_o *)StringLiteral_8315/*"LOCKMODE_SELECTED_SERVANT"*/, 0);
    }
    else
    {
      v256 = (System_String_o *)StringLiteral_1/*""*/;
    }
    gameObject = (__int64)*v266;
    if ( !*v266 )
      goto LABEL_1096;
    UILabel__set_text((UILabel_o *)gameObject, v256, 0);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1096;
    goto LABEL_1060;
  }
}


void CombineServantListViewItemDraw__SetSelectDisp(
        CombineServantListViewItemDraw_o *this,
        CombineServantListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSelect; // x21
  DragSelectComponent_o *v6; // x0
  int32_t dragSelectNum; // w2
  int32_t selectNum; // w1

  if ( (byte_4C3BB85 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BB85 = 1;
  }
  dragSelect = (UnityEngine_Object_o *)this->fields.dragSelect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(dragSelect, 0, 0) )
  {
    v6 = this->fields.dragSelect;
    if ( item )
    {
      if ( v6 )
      {
        dragSelectNum = item->fields.dragSelectNum;
        selectNum = item->fields.selectNum;
LABEL_11:
        DragSelectComponent__Set(v6, selectNum, dragSelectNum, 0);
        return;
      }
    }
    else if ( v6 )
    {
      selectNum = -1;
      dragSelectNum = -1;
      goto LABEL_11;
    }
    sub_1C32E7C(v6);
  }
}