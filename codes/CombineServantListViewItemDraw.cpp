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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.defaultMaskAtlas, (int32_t)mAtlas, v2, v3);
  v9 = this->fields.maskSprite;
  if ( v9 )
    mSpriteName = v9->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.defaultMaskName, (int32_t)mSpriteName, v7, v8);
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
  if ( (byte_4CBA567 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_9284/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_1C6BA08(&StringLiteral_9279/*"NONSELECT_MATERIAL"*/);
    sub_1C6BA08(&StringLiteral_9282/*"NONSELECT_NPUP_BASE"*/);
    sub_1C6BA08(&StringLiteral_9280/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    byte_4CBA567 = 1;
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
    v23 = (UnityEngine_Object_o *)this->fields.baseButton;
    cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
    if ( item->fields.isMaxSelect )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
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
        v25 = 1;
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
      if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
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
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
    if ( !maskSprite )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
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
          v30 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9284/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
          if ( !v30 )
            goto LABEL_92;
          UILabel__set_text(v30, (System_String_o *)maskSprite, 0);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectSecondStatusUpHp )
          goto LABEL_80;
      }
      else
      {
        if ( atkBase >= 1 && item->fields.isNotSelectStatusUpAtk )
        {
          v29 = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9284/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
          if ( !v29 )
            goto LABEL_92;
          UILabel__set_text(v29, (System_String_o *)maskSprite, 0);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectStatusUpHp )
          goto LABEL_80;
      }
      maskLabel = this->fields.maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = &StringLiteral_9284/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_78:
      maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v27, 0);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)maskSprite, 0);
        goto LABEL_80;
      }
LABEL_92:
      sub_1C6BC60(maskSprite, v16);
    }
    maskLabel = this->fields.maskLabel;
    v20 = LocalizationManager_TypeInfo;
    v22 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_75:
    if ( !v22 )
      j_il2cpp_runtime_class_init_0(v20);
    v27 = &StringLiteral_9279/*"NONSELECT_MATERIAL"*/;
    goto LABEL_78;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0) )
  {
    v19 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9280/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0);
    if ( !v19 )
      goto LABEL_92;
    UILabel__set_text(v19, (System_String_o *)maskSprite, 0);
    if ( item->fields.type == 5 )
    {
      v20 = LocalizationManager_TypeInfo;
      maskLabel = this->fields.maskLabel;
      v22 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_57:
      if ( !v22 )
        j_il2cpp_runtime_class_init_0(v20);
      v27 = &StringLiteral_9282/*"NONSELECT_NPUP_BASE"*/;
      goto LABEL_78;
    }
  }
LABEL_80:
  CombineServantListViewItemDraw__SetSelectDisp(this, item, v17);
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
  UnityEngine_GameObject_o *v24; // x23
  UnityEngine_Object_o *pushImg; // x23
  UnityEngine_Object_o *materialTdSprite; // x23
  UISprite_o *v27; // x23
  const MethodInfo *v28; // x1
  int32_t v29; // w23
  int32_t v30; // w8
  bool CanNotBaseSelect; // w0
  UnityEngine_Object_o *v32; // x23
  bool v33; // w22
  bool v34; // w0
  struct UILabel_o *v35; // x22
  __int64 *v36; // x8
  int32_t v37; // w2
  char v38; // w20
  UILabel_o *v39; // x23
  UILabel_o *v40; // x23
  UILabel_o *v41; // x23
  const MethodInfo *v42; // x2
  UILabel_o *v43; // x23
  UILabel_o *v44; // x23
  UILabel_o *v45; // x23
  UILabel_o *v46; // x23
  UILabel_o *v47; // x23
  UILabel_o *v48; // x23
  _BOOL4 isParty; // w19
  __int64 *v50; // x8
  UILabel_o *v51; // x23
  _BOOL4 v52; // w19
  __int64 *v53; // x8
  UILabel_o *v54; // x23
  UnityEngine_GameObject_o *v55; // x23
  UILabel_o *v56; // x23
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x24
  bool v59; // w23
  bool v60; // w0
  UILabel_o *v61; // x22
  UILabel_o *v62; // x22
  UILabel_o *v63; // x22
  UILabel_o *v64; // x22
  __int64 *v65; // x8
  UnityEngine_Object_o *v66; // x23
  uint32_t cctor_finished; // w8
  int v68; // w19
  UILabel_o *v69; // x22
  System_String_o *v70; // x23
  Il2CppObject *v71; // x0
  UILabel_o *v72; // x22
  UILabel_o *v73; // x23
  UILabel_o *v74; // x22
  UILabel_o *v75; // x22
  UILabel_o *v76; // x22
  int32_t v77; // w8
  UILabel_o *v78; // x22
  UnityEngine_GameObject_o *v79; // x22
  UILabel_o *fortificationAppointmentLabel; // x22
  float fortificationInfoRootObjOffsetY; // s10
  float x; // s8
  float z; // s9
  System_String_o *v84; // x1
  System_Collections_Generic_List_object__o *v85; // x22
  System_String_o *v86; // x23
  Il2CppObject *v87; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  struct System_Object_array *items; // x8
  _QWORD *v91; // x9
  __int64 size; // x10
  __int64 v93; // x1
  Il2CppClass **v94; // x0
  System_String_o *v95; // x23
  Il2CppObject *v96; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  struct System_Object_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  __int64 v102; // x1
  Il2CppClass **v103; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  __int64 v109; // x1
  Il2CppClass **v110; // x0
  UnityEngine_Object_o *v111; // x22
  _BOOL4 isHeroineSvt; // w19
  UILabel_o *sealedStateLabel; // x22
  __int64 *v114; // x8
  bool v115; // w0
  UnityEngine_Object_o *v116; // x23
  bool v117; // w22
  bool v118; // w0
  UILabel_o *v119; // x22
  __int64 *v120; // x8
  UnityEngine_Object_o *v121; // x22
  System_String_o *v122; // x1
  UnityEngine_Object_o *v123; // x22
  UnityEngine_Object_o *v124; // x22
  int32_t v125; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  System_Text_StringBuilder_o *v127; // x22
  SkillInfo_array *v128; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned __int64 v130; // x19
  __int64 v131; // x20
  __int64 v132; // x21
  SkillInfo_o *v133; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v136; // w25
  Il2CppObject *v137; // x24
  bool v138; // w25
  __int64 *v139; // x8
  UILabel_o *skillLvLabel; // x23
  UnityEngine_Object_o *v141; // x22
  UILabel_o *v142; // x22
  UILabel_o *v143; // x22
  __int64 *v144; // x8
  _BOOL4 isSkillUpItemNum; // w19
  UnityEngine_Object_o *v146; // x22
  bool v147; // w0
  SvtUseSkillData_o *AppendSkillData; // x0
  struct System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v150; // x24
  System_Text_StringBuilder_o *v151; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  il2cpp_array_size_t v153; // x9
  unsigned __int64 v154; // x19
  __int64 v155; // x20
  __int64 v156; // x21
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v158; // x0
  int32_t v159; // w26
  int32_t v160; // w0
  int v161; // t1
  Il2CppObject *v162; // x25
  bool v163; // w26
  __int64 *v164; // x8
  UILabel_o *v165; // x24
  UILabel_o *v166; // x22
  UILabel_o *v167; // x22
  UILabel_o *v168; // x22
  UnityEngine_Object_o *v169; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  Il2CppObject *v173; // x0
  struct ItemIconComponent_o *coinIcon; // x22
  int32_t v175; // w8
  SvtUseSkillData_o *v176; // x23
  System_Text_StringBuilder_o *v177; // x22
  struct System_Int32_array *v178; // x8
  il2cpp_array_size_t v179; // x19
  char v180; // w27
  char v181; // w26
  char v182; // w25
  unsigned __int64 v183; // x21
  struct System_Int32_array *v184; // x8
  char *v185; // x0
  int v186; // t1
  int32_t v187; // w9
  int v188; // w8
  unsigned __int64 v189; // x29
  __int64 v190; // x26
  struct System_Int32_array *v191; // x8
  Il2CppObject *v192; // x24
  __int64 *v193; // x8
  char v194; // w26
  UILabel_o *v195; // x23
  UILabel_o *v196; // x22
  UILabel_o *v197; // x22
  __int64 *v198; // x8
  Il2CppObject *Master_object; // x22
  System_String_o *v200; // x23
  Il2CppObject *v201; // x0
  UnityEngine_Object_o *v202; // x22
  int32_t v203; // w2
  UnityEngine_Object_o *v204; // x22
  _BOOL4 v205; // w19
  UILabel_o *v206; // x22
  __int64 *v207; // x8
  UnityEngine_Object_o *v208; // x22
  System_String_o *v209; // x0
  int32_t v210; // w8
  UnityEngine_Object_o *v211; // x22
  _BOOL4 isEventJoin; // w19
  UILabel_o *v213; // x22
  __int64 *v214; // x8
  _BOOL4 isLvExceedItemNum; // w19
  UnityEngine_Object_o *v216; // x22
  bool v217; // w0
  System_String_o *v218; // x0
  UnityEngine_Object_o *v219; // x22
  UnityEngine_Object_o *v220; // x22
  const MethodInfo *v221; // x1
  int32_t v222; // w22
  struct ServantFaceIconComponent_o *v223; // x8
  bool v224; // w0
  UnityEngine_Object_o *v225; // x23
  bool v226; // w22
  bool v227; // w0
  UILabel_o *v228; // x22
  UILabel_o *v229; // x22
  struct UILabel_o *v230; // x22
  System_String_o *v231; // x1
  UnityEngine_Object_o *v232; // x22
  ServantCommandCardListComponent_o *v233; // x22
  UnityEngine_Object_o *v234; // x22
  _BOOL4 v235; // w19
  UILabel_o *v236; // x22
  __int64 *v237; // x8
  _BOOL4 isFriendshipExceedItemNum; // w19
  UnityEngine_Object_o *v239; // x22
  bool v240; // w0
  System_String_o *v241; // x0
  UnityEngine_Object_o *v242; // x22
  struct UILabel_o *v243; // x19
  System_String_o *v244; // x1
  UnityEngine_Object_o *v245; // x22
  char v246; // [xsp+20h] [xbp-D0h]
  int32_t v247; // [xsp+24h] [xbp-CCh]
  struct UILabel_o **v248; // [xsp+28h] [xbp-C8h]
  CombineServantListViewItemDraw_o *v249; // [xsp+30h] [xbp-C0h]
  CombineServantListViewItem_o *v250; // [xsp+38h] [xbp-B8h]
  struct UISprite_o **p_maskSprite; // [xsp+40h] [xbp-B0h]
  struct UILabel_o **v252; // [xsp+48h] [xbp-A8h]
  int32_t SkillOpenItemNum; // [xsp+54h] [xbp-9Ch] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+58h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+60h] [xbp-90h] BYREF
  MethodInfo tdMaxLv; // [xsp+68h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v257; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v259; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CBA566 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&CombineServantListViewManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    sub_1C6BA08(&StringLiteral_12236/*"SKILL_LVDISP_TXT"*/);
    sub_1C6BA08(&StringLiteral_10290/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/);
    sub_1C6BA08(&StringLiteral_9284/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_1C6BA08(&StringLiteral_6470/*"FORTIFICATION_APPOINTMENT"*/);
    sub_1C6BA08(&StringLiteral_3562/*"COMBINE_CAN_STATUS_UP_INFO"*/);
    sub_1C6BA08(&StringLiteral_8794/*"MSG_CAMPAIGN_COMBINE_EXP"*/);
    sub_1C6BA08(&StringLiteral_12234/*"SKILL_LVDISP_ENABLE_TXT"*/);
    sub_1C6BA08(&StringLiteral_1979/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/);
    sub_1C6BA08(&StringLiteral_9279/*"NONSELECT_MATERIAL"*/);
    sub_1C6BA08(&StringLiteral_23207/*"ribbon_noblephantasmup_01"*/);
    sub_1C6BA08(&StringLiteral_9278/*"NONSELECT_LIMITUP_BASE"*/);
    sub_1C6BA08(&StringLiteral_1980/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/);
    sub_1C6BA08(&StringLiteral_10096/*"PARTY_MEMBER_TXT"*/);
    sub_1C6BA08(&StringLiteral_3281/*"CAN_SELECT_SEALED_SERVANT_BASE"*/);
    sub_1C6BA08(&StringLiteral_9282/*"NONSELECT_NPUP_BASE"*/);
    sub_1C6BA08(&StringLiteral_12517/*"SUPPORT_MEMBER"*/);
    sub_1C6BA08(&StringLiteral_8790/*"MSG_ABLED_LIMITUP"*/);
    sub_1C6BA08(&StringLiteral_11551/*"SELECT_PUSH"*/);
    sub_1C6BA08(&StringLiteral_11520/*"SELECT_CANNOT"*/);
    sub_1C6BA08(&StringLiteral_9344/*"NPUP_BASE"*/);
    sub_1C6BA08(&StringLiteral_1981/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/);
    sub_1C6BA08(&StringLiteral_12233/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/);
    sub_1C6BA08(&StringLiteral_11552/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C6BA08(&StringLiteral_9332/*"NO_SELECT_FRIENDSHIP_EXCEED"*/);
    sub_1C6BA08(&StringLiteral_11444/*"SAME_SERVANT"*/);
    sub_1C6BA08(&StringLiteral_8789/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/);
    sub_1C6BA08(&StringLiteral_9280/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    sub_1C6BA08(&StringLiteral_25162/*"{0:#,0}"*/);
    sub_1C6BA08(&StringLiteral_12235/*"SKILL_LVDISP_SINGLE_TXT"*/);
    sub_1C6BA08(&StringLiteral_8791/*"MSG_ABLED_SKILLUP"*/);
    sub_1C6BA08(&StringLiteral_9281/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/);
    sub_1C6BA08(&StringLiteral_9285/*"NONSKILL_TXT"*/);
    sub_1C6BA08(&StringLiteral_8313/*"LOCKMODE_SELECTED_SERVANT"*/);
    sub_1C6BA08(&StringLiteral_6390/*"FAVORITE_SERVANT"*/);
    sub_1C6BA08(&StringLiteral_3347/*"CHOICE_SERVANT"*/);
    sub_1C6BA08(&StringLiteral_11037/*"RECOMMEND_SUPPORT_MEMBER"*/);
    sub_1C6BA08(&StringLiteral_8793/*"MSG_ABLED_TDUP"*/);
    sub_1C6BA08(&StringLiteral_11514/*"SEAL_COMBINE_LIMIT_THIRD"*/);
    sub_1C6BA08(&StringLiteral_9277/*"NONSELECT_BASE_ALLMAX"*/);
    sub_1C6BA08(&StringLiteral_9333/*"NO_SELECT_LVEXCEED"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_9283/*"NONSELECT_SKILLUP_BASE"*/);
    sub_1C6BA08(&StringLiteral_11550/*"SELECT_PROTECTED_EVENT_SVT"*/);
    sub_1C6BA08(&StringLiteral_6995/*"GRAND_MEMBER"*/);
    sub_1C6BA08(&StringLiteral_8314/*"LOCK_SERVANT"*/);
    sub_1C6BA08(&StringLiteral_9276/*"NONSEELECT_STATUSUP_MAX"*/);
    byte_4CBA566 = 1;
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
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  type = item->fields.type;
  servantFaceIcon = this->fields.servantFaceIcon;
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
  iconLabelInfo1 = item->fields.iconLabelInfo1;
  switchInfoList = (UIWidget_array *)gameObject;
  if ( type )
  {
    if ( !servantFaceIcon )
      goto LABEL_1102;
    ServantFaceIconComponent__Set_41239152(
      servantFaceIcon,
      (UserServantEntity_o *)gameObject,
      iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0);
    subIconLabel = this->fields.subIconLabel;
    rarity = item->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
    if ( !gameObject )
      goto LABEL_1102;
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_1102;
    ServantFaceIconComponent__Set_41239152(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0, 0);
    gameObject = (__int64)item->fields.iconLabelInfo2;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = IconLabelInfo__IsClear((IconLabelInfo_o *)gameObject, 0);
    subIconLabel = this->fields.subIconLabel;
    if ( (gameObject & 1) == 0 )
    {
      if ( !subIconLabel )
        goto LABEL_1102;
      UIIconLabel__Set(this->fields.subIconLabel, item->fields.iconLabelInfo2, 0);
      goto LABEL_22;
    }
    rarity = item->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
    if ( !gameObject )
      goto LABEL_1102;
  }
  v19 = *(_DWORD *)(gameObject + 296);
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
  if ( !gameObject || !subIconLabel )
    goto LABEL_1102;
  UIIconLabel__Set_41344128(
    subIconLabel,
    36,
    rarity,
    v19,
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
    goto LABEL_1102;
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
    goto LABEL_1102;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  p_statusTxtLb = &this->fields.statusTxtLb;
  gameObject = (__int64)this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1102;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.maskSprite;
  p_maskSprite = &this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_1102;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  p_maskLabel = &this->fields.maskLabel;
  gameObject = (__int64)this->fields.maskLabel;
  if ( !gameObject )
    goto LABEL_1102;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)*p_maskLabel;
  if ( !*p_maskLabel )
    goto LABEL_1102;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !byte_4CAFC0E )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
  }
  GameObjectExtensions__SetLocalScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1102;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1102;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)this->fields.sealedStateLabel;
  if ( !gameObject )
    goto LABEL_1102;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !byte_4CAFC0E )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
  }
  GameObjectExtensions__SetLocalScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1102;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.partyIcon;
  if ( !gameObject )
    goto LABEL_1102;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.removeImg;
  if ( !gameObject )
    goto LABEL_1102;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1102;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.choiceImg;
  if ( !gameObject )
    goto LABEL_1102;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  gameObject = CombineServantListViewItem__get_IsDispChoice(item, 0);
  if ( !v24 )
    goto LABEL_1102;
  UnityEngine_GameObject__SetActive(v24, gameObject & 1, 0);
  gameObject = (__int64)this->fields.switchInfoComp;
  if ( !gameObject )
    goto LABEL_1102;
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.fortificationRootObj;
  if ( !gameObject )
    goto LABEL_1102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.fortificationNameLabel;
  if ( !gameObject )
    goto LABEL_1102;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)this->fields.fortificationDetailNameLabel;
  if ( !gameObject )
    goto LABEL_1102;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)this->fields.fortificationAppointmentLabel;
  if ( !gameObject )
    goto LABEL_1102;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushImg, 0, 0) )
  {
    gameObject = (__int64)this->fields.pushImg;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isPush, 0);
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_1102;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)gameObject, 0);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isMaterialTdSvt, 0);
    if ( item->fields.isMaterialTdSvt )
    {
      v27 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v27, (System_String_o *)StringLiteral_23207/*"ribbon_noblephantasmup_01"*/, 0);
      v29 = item->fields.type;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      if ( CombineServantListViewManager__GetSortKind(v29, v28) == 1 )
      {
        gameObject = (__int64)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_1102;
        v257.fields.x = 0.65;
        v257.fields.y = 1.0;
        v257.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v257, 0);
      }
    }
  }
  v30 = item->fields.type;
  v252 = &this->fields.maskLabel;
  switch ( v30 )
  {
    case 5:
      gameObject = (__int64)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_1102;
      v37 = SHIDWORD(tdMaxLv.invoker_method) <= 0 ? -1 : LODWORD(tdMaxLv.invoker_method);
      UIIconLabel__Set_41344128(
        (UIIconLabel_o *)gameObject,
        33,
        v37,
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
        goto LABEL_1102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      goto LABEL_108;
    case 1:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1102;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0);
      if ( CombineServantListViewItem__get_IsProtected(item, 0) && item->fields.type != 5 )
      {
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1102;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1102;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v73 = *v252;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11550/*"SELECT_PROTECTED_EVENT_SVT"*/, 0);
        if ( !v73 )
          goto LABEL_1102;
        UILabel__set_text(v73, (System_String_o *)gameObject, 0);
        v38 = 1;
LABEL_109:
        if ( item->fields.isParty )
        {
          gameObject = (__int64)this->fields.partyIcon;
          if ( !gameObject )
            goto LABEL_1102;
          FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1102;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1102;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v39 = *v252;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10096/*"PARTY_MEMBER_TXT"*/, 0);
          if ( !v39 )
            goto LABEL_1102;
          UILabel__set_text(v39, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        if ( item->fields.isFavorite )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1102;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1102;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v40 = *v252;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6390/*"FAVORITE_SERVANT"*/, 0);
          if ( !v40 )
            goto LABEL_1102;
          UILabel__set_text(v40, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
        {
          gameObject = (__int64)this->fields.lockImg;
          if ( !gameObject )
            goto LABEL_1102;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1102;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1102;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1102;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v41 = *v252;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8314/*"LOCK_SERVANT"*/, 0);
          if ( !v41 )
            goto LABEL_1102;
          UILabel__set_text(v41, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispChoice(item, 0) )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1102;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1102;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v43 = *v252;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3347/*"CHOICE_SERVANT"*/, 0);
          if ( !v43 )
            goto LABEL_1102;
          UILabel__set_text(v43, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        if ( item->fields.isLimitCntTarget )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1102;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1102;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v44 = *v252;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11444/*"SAME_SERVANT"*/, 0);
          if ( !v44 )
            goto LABEL_1102;
          UILabel__set_text(v44, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        if ( item->fields.isHeroineSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1102;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1102;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v45 = *v252;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9279/*"NONSELECT_MATERIAL"*/, 0);
          if ( !v45 )
            goto LABEL_1102;
          UILabel__set_text(v45, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        if ( item->fields.isStatusUpSvt && !item->fields.isCanStUp )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1102;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1102;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v46 = *v252;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9279/*"NONSELECT_MATERIAL"*/, 0);
          if ( !v46 )
            goto LABEL_1102;
          UILabel__set_text(v46, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        if ( item->fields.isEventJoin )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1102;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1102;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v47 = *v252;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11552/*"SELECT_SERVANT_EVENT_JOIN"*/, 0);
          if ( !v47 )
            goto LABEL_1102;
          UILabel__set_text(v47, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        if ( item->fields.isUseSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1102;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1102;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v48 = *v252;
          isParty = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v50 = &StringLiteral_12517/*"SUPPORT_MEMBER"*/;
          if ( isParty )
            v50 = &StringLiteral_10096/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v50, 0);
          if ( !v48 )
            goto LABEL_1102;
          UILabel__set_text(v48, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        if ( item->fields.isUseRecommendSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1102;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1102;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v51 = *v252;
          v52 = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v53 = &StringLiteral_11037/*"RECOMMEND_SUPPORT_MEMBER"*/;
          if ( v52 )
            v53 = &StringLiteral_10096/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v53, 0);
          if ( !v51 )
            goto LABEL_1102;
          UILabel__set_text(v51, (System_String_o *)gameObject, 0);
          if ( !item->fields.isParty )
          {
            gameObject = (__int64)*v252;
            if ( !*v252 )
              goto LABEL_1102;
            UILabel__SetCondensedScale((UILabel_o *)gameObject, 106, 0, 0);
          }
          v38 = 1;
        }
        if ( item->fields.isPush )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1102;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1102;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v54 = *v252;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11551/*"SELECT_PUSH"*/, 0);
          if ( !v54 )
            goto LABEL_1102;
          UILabel__set_text(v54, (System_String_o *)gameObject, 0);
          gameObject = (__int64)*v252;
          if ( !*v252 )
            goto LABEL_1102;
          v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !byte_4CAFC0E )
          {
            sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
            byte_4CAFC0E = 1;
          }
          GameObjectExtensions__SetLocalScale(v55, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          v38 = 1;
        }
        if ( item->fields.isGrandSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1102;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1102;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v56 = *v252;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6995/*"GRAND_MEMBER"*/, 0);
          if ( !v56 )
            goto LABEL_1102;
          UILabel__set_text(v56, (System_String_o *)gameObject, 0);
          v38 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, item, v42);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(item, 0);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        v59 = CanNotSelect;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v60 = UnityEngine_Object__op_Inequality(baseButton, 0, 0);
        if ( v59 )
        {
          if ( !v60 )
            break;
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1102;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1102;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1102;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1102;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          if ( item->fields.isMaxNextLv || item->fields.isBaseLvMax )
          {
            if ( !item->fields.isCanStUp )
            {
              if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0) )
              {
                v74 = *v252;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9280/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0);
                if ( !v74 )
                  goto LABEL_1102;
                UILabel__set_text(v74, (System_String_o *)gameObject, 0);
                if ( item->fields.type != 5 )
                  break;
                v64 = *v252;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v65 = &StringLiteral_9282/*"NONSELECT_NPUP_BASE"*/;
LABEL_332:
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v65, 0);
                if ( !v64 )
                  goto LABEL_1102;
LABEL_333:
                UILabel__set_text(v64, (System_String_o *)gameObject, 0);
              }
LABEL_334:
              v77 = item->fields.type;
              if ( v77 != 5 )
                goto LABEL_416;
              if ( item->fields.isBaseSvt )
              {
                v78 = *v252;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9344/*"NPUP_BASE"*/, 0);
                if ( !v78 )
                  goto LABEL_1102;
                UILabel__set_text(v78, (System_String_o *)gameObject, 0);
                gameObject = (__int64)*v252;
                if ( !*v252 )
                  goto LABEL_1102;
                v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !byte_4CAFC0E )
                {
                  sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
                  byte_4CAFC0E = 1;
                }
                GameObjectExtensions__SetLocalScale(v79, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
              }
              break;
            }
          }
          else if ( !item->fields.isCanStUp )
          {
            if ( item->fields.isFortification )
            {
              gameObject = (__int64)*v252;
              if ( !*v252 )
                goto LABEL_1102;
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1102;
              gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1102;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1102;
              UILabel__set_text((UILabel_o *)gameObject, item->fields.fortificationName, 0);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1102;
              UILabel__set_text((UILabel_o *)gameObject, item->fields.fortificationDetailName, 0);
              fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6470/*"FORTIFICATION_APPOINTMENT"*/, 0);
              if ( !fortificationAppointmentLabel )
                goto LABEL_1102;
              UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)gameObject, 0);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1102;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1102;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0);
              if ( item->fields.type != 5 )
                break;
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1102;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1102;
              localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1102;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              x = localPosition.fields.x;
              z = localPosition.fields.z;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1102;
              v259.fields.x = x;
              v259.fields.y = fortificationInfoRootObjOffsetY;
              v259.fields.z = z;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v259, 0);
              goto LABEL_334;
            }
            if ( (v38 & 1) == 0 )
            {
              v64 = *v252;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9279/*"NONSELECT_MATERIAL"*/, 0);
              if ( !v64 )
                goto LABEL_1102;
              goto LABEL_333;
            }
            goto LABEL_334;
          }
          if ( item->fields.isStatusUpSvt )
          {
            if ( item->fields.rarity <= 3 )
            {
              if ( item->fields.isAtkUpMax || item->fields.isHpUpMax )
              {
                v75 = *v252;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9284/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                if ( !v75 )
                  goto LABEL_1102;
                UILabel__set_text(v75, (System_String_o *)gameObject, 0);
              }
              if ( item->fields.isAtkSecondUpMax || item->fields.isHpSecondUpMax )
              {
                v76 = *v252;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9284/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                if ( !v76 )
                  goto LABEL_1102;
                UILabel__set_text(v76, (System_String_o *)gameObject, 0);
              }
              if ( !item->fields.isNotSelectStatusUpAtk && !item->fields.isNotSelectStatusUpHp )
                goto LABEL_334;
              v64 = *v252;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v65 = &StringLiteral_9284/*"NONSELECT_UNDER_STATUS_MAX"*/;
            }
            else
            {
              if ( item->fields.atkBase >= 1 )
              {
                if ( item->fields.isAtkSecondUpMax || item->fields.isNotSelectSecondStatusUpAtk )
                {
                  v61 = *v252;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9284/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                  if ( !v61 )
                    goto LABEL_1102;
                  UILabel__set_text(v61, (System_String_o *)gameObject, 0);
                }
                if ( !item->fields.isAtkUpMax )
                {
                  v62 = *v252;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9281/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0);
                  if ( !v62 )
                    goto LABEL_1102;
                  UILabel__set_text(v62, (System_String_o *)gameObject, 0);
                }
              }
              if ( item->fields.hpBase < 1 )
                goto LABEL_334;
              if ( item->fields.isHpSecondUpMax || item->fields.isNotSelectSecondStatusUpHp )
              {
                v63 = *v252;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9284/*"NONSELECT_UNDER_STATUS_MAX"*/, 0);
                if ( !v63 )
                  goto LABEL_1102;
                UILabel__set_text(v63, (System_String_o *)gameObject, 0);
              }
              if ( item->fields.isHpUpMax )
                goto LABEL_334;
              v64 = *v252;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v65 = &StringLiteral_9281/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
            }
            goto LABEL_332;
          }
          goto LABEL_334;
        }
        if ( v60 )
        {
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1102;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1102;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0,
            1,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1102;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1102;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        v66 = (UnityEngine_Object_o *)this->fields.baseButton;
        cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
        if ( item->fields.isMaxSelect )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v66, 0, 0) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1102;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1102;
            v68 = 1;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
LABEL_283:
            if ( item->fields.type == 1 && CombineServantListViewItem__get_IsOrganization(item, 0) && !isSelectEnable )
            {
              if ( !(v68 & 1 | !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0)) )
                break;
            }
            else if ( !v68 )
            {
              break;
            }
            gameObject = (__int64)*p_maskSprite;
            if ( !*p_maskSprite )
              goto LABEL_1102;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_1102;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            v72 = *v252;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9279/*"NONSELECT_MATERIAL"*/, 0);
            if ( !v72 )
              goto LABEL_1102;
            UILabel__set_text(v72, (System_String_o *)gameObject, 0);
            break;
          }
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v66, 0, 0) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1102;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_1102;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0,
              1,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          }
        }
        v68 = 0;
        goto LABEL_283;
      }
LABEL_108:
      v38 = 0;
      goto LABEL_109;
    case 0:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1102;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0);
      if ( item->fields.isParty )
      {
        gameObject = (__int64)this->fields.partyIcon;
        if ( !gameObject )
          goto LABEL_1102;
        FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
      }
      if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
      {
        gameObject = (__int64)this->fields.lockImg;
        if ( !gameObject )
          goto LABEL_1102;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1102;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      }
      CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0);
      v32 = (UnityEngine_Object_o *)this->fields.baseButton;
      v33 = CanNotBaseSelect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v34 = UnityEngine_Object__op_Inequality(v32, 0, 0);
      if ( v33 )
      {
        if ( !v34 )
          goto LABEL_411;
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1102;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1102;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1102;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1102;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        if ( item->fields.isHeroineSvt )
        {
          if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          if ( TutorialFlag__Get_40657328(126, 0) )
          {
            v35 = *v252;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v36 = &StringLiteral_11520/*"SELECT_CANNOT"*/;
LABEL_371:
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v36, 0);
            if ( !v35 )
              goto LABEL_1102;
            v84 = (System_String_o *)gameObject;
            gameObject = (__int64)v35;
LABEL_373:
            UILabel__set_text((UILabel_o *)gameObject, v84, 0);
            gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
            if ( !gameObject )
              goto LABEL_1102;
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              *p_statusTxtLb,
              0);
LABEL_411:
            if ( item->fields.isBaseSvt )
            {
              gameObject = (__int64)this->fields.removeImg;
              if ( !gameObject )
                goto LABEL_1102;
              gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              if ( !gameObject )
                goto LABEL_1102;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            }
            break;
          }
        }
        if ( item->fields.isLvMax )
        {
          if ( !item->fields.isStatusUpSvt )
          {
            if ( !item->fields.isExpUpSvt )
            {
              v35 = *v252;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v36 = &StringLiteral_9277/*"NONSELECT_BASE_ALLMAX"*/;
              goto LABEL_371;
            }
            goto LABEL_367;
          }
        }
        else if ( !item->fields.isStatusUpSvt )
        {
LABEL_367:
          if ( !item->fields.isExpUpSvt )
          {
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1102;
            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
            gameObject = (__int64)*v252;
            if ( !*v252 )
              goto LABEL_1102;
            v84 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_373;
          }
        }
        v35 = *v252;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v36 = &StringLiteral_9279/*"NONSELECT_MATERIAL"*/;
        goto LABEL_371;
      }
      if ( !v34 )
        goto LABEL_411;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1102;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1102;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1102;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)*v252;
      if ( !*v252 )
        goto LABEL_1102;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( item->fields.isCombineExpCampaignTarget )
      {
        if ( item->fields.isDispAtkStatusUpInfo
          && CombineServantListViewItem__get_IsAtkAdjustMax(item, 0)
          && !CombineServantListViewItem__get_IsSecondAtkAdjustMax(item, 0) )
        {
          v85 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v85,
            (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v86 = LocalizationManager__Get((System_String_o *)StringLiteral_8794/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
          *(float *)&tdMaxLv.methodPointer = item->fields.combineExpCampaignValue;
          v87 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
          gameObject = (__int64)System_String__Format(v86, v87, 0);
          if ( !v85 )
            goto LABEL_1102;
          items = v85->fields._items;
          v91 = Method_System_Collections_Generic_List_string__Add__;
          ++v85->fields._version;
          if ( !items )
            goto LABEL_1102;
          size = v85->fields._size;
          v93 = gameObject;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v85,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
          }
          else
          {
            v94 = &items->obj.klass + size;
            v85->fields._size = size + 1;
            v94[4] = (Il2CppClass *)v93;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v94 + 4), v93, v88, v89);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3562/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0);
          v106 = v85->fields._items;
          v107 = Method_System_Collections_Generic_List_string__Add__;
          ++v85->fields._version;
          if ( !v106 )
            goto LABEL_1102;
        }
        else
        {
          if ( !item->fields.isDispHpStatusUpInfo
            || !CombineServantListViewItem__get_IsHpAdjustMax(item, 0)
            || CombineServantListViewItem__get_IsSecondHpAdjustMax(item, 0) )
          {
            gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
            if ( !gameObject )
              goto LABEL_1102;
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              *p_statusTxtLb,
              0);
            v69 = *p_statusTxtLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v70 = LocalizationManager__Get((System_String_o *)StringLiteral_8794/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
            *(float *)&tdMaxLv.methodPointer = item->fields.combineExpCampaignValue;
            v71 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
            gameObject = (__int64)System_String__Format(v70, v71, 0);
            if ( !v69 )
              goto LABEL_1102;
LABEL_275:
            UILabel__set_text(v69, (System_String_o *)gameObject, 0);
LABEL_408:
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1102;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_1102;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            goto LABEL_411;
          }
          v85 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v85,
            (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v95 = LocalizationManager__Get((System_String_o *)StringLiteral_8794/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0);
          *(float *)&tdMaxLv.methodPointer = item->fields.combineExpCampaignValue;
          v96 = (Il2CppObject *)System_Single__ToString(*(float *)&tdMaxLv.methodPointer, &tdMaxLv);
          gameObject = (__int64)System_String__Format(v95, v96, 0);
          if ( !v85 )
            goto LABEL_1102;
          v99 = v85->fields._items;
          v100 = Method_System_Collections_Generic_List_string__Add__;
          ++v85->fields._version;
          if ( !v99 )
            goto LABEL_1102;
          v101 = v85->fields._size;
          v102 = gameObject;
          if ( (unsigned int)v101 >= LODWORD(v99->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v85,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
          }
          else
          {
            v103 = &v99->obj.klass + v101;
            v85->fields._size = v101 + 1;
            v103[4] = (Il2CppClass *)v102;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v103 + 4), v102, v97, v98);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3562/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0);
          v106 = v85->fields._items;
          v107 = Method_System_Collections_Generic_List_string__Add__;
          ++v85->fields._version;
          if ( !v106 )
            goto LABEL_1102;
        }
        v108 = v85->fields._size;
        v109 = gameObject;
        if ( (unsigned int)v108 >= LODWORD(v106->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v85,
            (Il2CppObject *)gameObject,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
        }
        else
        {
          v110 = &v106->obj.klass + v108;
          v85->fields._size = v108 + 1;
          v110[4] = (Il2CppClass *)v109;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v110 + 4), v109, v104, v105);
        }
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1102;
        CombineServantListViewNoticeTween__AddTarget(
          (CombineServantListViewNoticeTween_o *)gameObject,
          *p_statusTxtLb,
          (System_Collections_Generic_List_string__o *)v85,
          0);
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_1102;
        CombineServantListViewNoticeTween__SetTexts((CombineServantListViewNoticeTween_o *)gameObject, 0, 0);
        goto LABEL_408;
      }
      gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
      if ( !gameObject )
        goto LABEL_1102;
      CombineServantListViewNoticeTween__RemoveTarget(
        (CombineServantListViewNoticeTween_o *)gameObject,
        *p_statusTxtLb,
        0);
      if ( item->fields.isDispAtkStatusUpInfo )
      {
        if ( !CombineServantListViewItem__get_IsAtkAdjustMax(item, 0)
          || CombineServantListViewItem__get_IsSecondAtkAdjustMax(item, 0) )
        {
          goto LABEL_411;
        }
      }
      else if ( !item->fields.isDispHpStatusUpInfo
             || !CombineServantListViewItem__get_IsHpAdjustMax(item, 0)
             || CombineServantListViewItem__get_IsSecondHpAdjustMax(item, 0) )
      {
        goto LABEL_411;
      }
      v69 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3562/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0);
      if ( !v69 )
        goto LABEL_1102;
      goto LABEL_275;
  }
  v77 = item->fields.type;
LABEL_416:
  if ( v77 == 9 )
  {
    gameObject = (__int64)this->fields.limitCountIcon;
    if ( !gameObject )
      goto LABEL_1102;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)gameObject,
      item->fields.currentLimitCnt,
      item->fields.maxLimitCnt,
      0);
    if ( item->fields.isParty )
    {
      gameObject = (__int64)this->fields.partyIcon;
      if ( !gameObject )
        goto LABEL_1102;
      FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
    }
    if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_1102;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    }
    v115 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0);
    v116 = (UnityEngine_Object_o *)this->fields.baseButton;
    v117 = v115;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v118 = UnityEngine_Object__op_Inequality(v116, 0, 0);
    if ( !v117 )
    {
      if ( !v118 )
        goto LABEL_505;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1102;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1102;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1102;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)*v252;
      if ( !*v252 )
        goto LABEL_1102;
      v122 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_504;
    }
    if ( !v118 )
      goto LABEL_505;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( item->fields.isHeroineSvt || item->fields.isEventJoin || item->fields.isIgnoreCombineLimitSpecial )
    {
      v119 = *v252;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v120 = &StringLiteral_9279/*"NONSELECT_MATERIAL"*/;
    }
    else if ( item->fields.isLimitCntMax )
    {
      v119 = *v252;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v120 = &StringLiteral_9278/*"NONSELECT_LIMITUP_BASE"*/;
    }
    else
    {
      if ( !item->fields.isSealCombineLimit )
        goto LABEL_505;
      v119 = *v252;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v120 = &StringLiteral_11514/*"SEAL_COMBINE_LIMIT_THIRD"*/;
    }
LABEL_502:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v120, 0);
    if ( !v119 )
      goto LABEL_1102;
    v122 = (System_String_o *)gameObject;
    gameObject = (__int64)v119;
LABEL_504:
    UILabel__set_text((UILabel_o *)gameObject, v122, 0);
    goto LABEL_505;
  }
  if ( v77 != 2 )
    goto LABEL_509;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1102;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1102;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0) )
  {
    v111 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v111, 0, 0) )
      goto LABEL_491;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    isHeroineSvt = item->fields.isHeroineSvt;
    sealedStateLabel = *v252;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isHeroineSvt )
      v114 = &StringLiteral_9279/*"NONSELECT_MATERIAL"*/;
    else
      v114 = &StringLiteral_9278/*"NONSELECT_LIMITUP_BASE"*/;
LABEL_489:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v114, 0);
    if ( !sealedStateLabel )
      goto LABEL_1102;
    UILabel__set_text(sealedStateLabel, (System_String_o *)gameObject, 0);
    goto LABEL_491;
  }
  if ( item->fields.isSealedLimitCount && item->fields.isLimitCntMax )
  {
    v121 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v121, 0, 0) )
      goto LABEL_491;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)this->fields.sealedStateLabel;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    sealedStateLabel = this->fields.sealedStateLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v114 = &StringLiteral_3281/*"CAN_SELECT_SEALED_SERVANT_BASE"*/;
    goto LABEL_489;
  }
  if ( item->fields.isLvMax && item->fields.isLimitUpItemNum && !item->fields.isSealCombineLimit )
  {
    if ( !item->fields.isLimitCntMax )
    {
      v245 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v245, 0, 0) )
      {
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1102;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1102;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1102;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1102;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        gameObject = (__int64)*v252;
        if ( !*v252 )
          goto LABEL_1102;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
        gameObject = (__int64)*p_statusTxtLb;
        if ( !*p_statusTxtLb )
          goto LABEL_1102;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_1102;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v119 = *p_statusTxtLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v120 = &StringLiteral_8790/*"MSG_ABLED_LIMITUP"*/;
        goto LABEL_502;
      }
    }
  }
  else
  {
    v123 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v123, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1102;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1102;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
  }
LABEL_491:
  if ( item->fields.isSealedLimitCount )
  {
    v124 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v124, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1102;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1102;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)this->fields.sealedStateLabel;
      if ( !gameObject )
        goto LABEL_1102;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v119 = this->fields.sealedStateLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v120 = &StringLiteral_3281/*"CAN_SELECT_SEALED_SERVANT_BASE"*/;
      goto LABEL_502;
    }
  }
LABEL_505:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_509:
  v125 = item->fields.type;
  v249 = this;
  v250 = item;
  v247 = modeKind;
  v248 = &this->fields.statusTxtLb;
  if ( v125 != 3 )
    goto LABEL_585;
  CombineServantListViewItem__GetSkillInfo(item, &skillInfoList, 0);
  enableSkillUp = item->fields.enableSkillUp;
  v127 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v127, 0);
  v128 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_1102;
  max_length = skillInfoList->max_length;
  if ( (int)max_length >= 1 )
  {
    v130 = 0;
    v131 = (unsigned int)(max_length - 1);
    v132 = (unsigned int)skillInfoList->max_length;
    while ( 1 )
    {
      if ( v130 >= LODWORD(v128->max_length) )
        goto LABEL_1103;
      v133 = v128->m_Items[v130];
      if ( v133 )
      {
        lv = v133->fields.lv;
        p_lv = &v133->fields.lv;
        v136 = *(p_lv - 1);
        if ( lv > 0 )
        {
          gameObject = (__int64)System_Int32__ToString((int32_t)p_lv, 0);
          goto LABEL_521;
        }
      }
      else
      {
        v136 = -1;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9285/*"NONSKILL_TXT"*/, 0);
LABEL_521:
      v137 = (Il2CppObject *)gameObject;
      if ( enableSkillUp )
      {
        v138 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v136,
                 (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v131 == v130 )
        {
          v139 = &StringLiteral_12233/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v138 )
            v139 = &StringLiteral_12235/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v139 = &StringLiteral_12234/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v138 )
            v139 = &StringLiteral_12236/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v139, 0);
        if ( v127 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v127, (System_String_o *)gameObject, v137, 0);
          if ( v132 == ++v130 )
            goto LABEL_535;
          v128 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_1102;
    }
  }
  if ( !v127 )
    goto LABEL_1102;
LABEL_535:
  skillLvLabel = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v127->klass->vtable._3_ToString.methodPtr)(
                 v127,
                 v127->klass->vtable._3_ToString.method);
  if ( !skillLvLabel )
    goto LABEL_1102;
  UILabel__set_text(skillLvLabel, (System_String_o *)gameObject, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1102;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  modeKind = v247;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1102;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0) )
  {
    v141 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v141, 0, 0) )
      goto LABEL_580;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v142 = *v252;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9283/*"NONSELECT_SKILLUP_BASE"*/, 0);
    if ( !v142 )
      goto LABEL_1102;
    UILabel__set_text(v142, (System_String_o *)gameObject, 0);
    if ( !item->fields.isHeroineSvt )
      goto LABEL_580;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_40657328(126, 0) )
      goto LABEL_580;
    v143 = *v252;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v144 = &StringLiteral_11520/*"SELECT_CANNOT"*/;
    goto LABEL_574;
  }
  isSkillUpItemNum = item->fields.isSkillUpItemNum;
  v146 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v147 = UnityEngine_Object__op_Inequality(v146, 0, 0);
  if ( !isSkillUpItemNum )
  {
    if ( v147 )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1102;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1102;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_580;
  }
  if ( v147 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*v248;
    if ( !*v248 )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v143 = *v248;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v144 = &StringLiteral_8791/*"MSG_ABLED_SKILLUP"*/;
LABEL_574:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v144, 0);
    if ( !v143 )
      goto LABEL_1102;
    UILabel__set_text(v143, (System_String_o *)gameObject, 0);
  }
LABEL_580:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v125 = item->fields.type;
LABEL_585:
  if ( v125 != 11 )
    goto LABEL_680;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(item, 0);
  enableAppendSkillUp = item->fields.enableAppendSkillUp;
  v150 = AppendSkillData;
  v151 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v151, 0);
  if ( !v150 )
    goto LABEL_1102;
  svtUseSkillIdList = v150->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_1102;
  v153 = svtUseSkillIdList->max_length;
  if ( (int)v153 >= 1 )
  {
    v154 = 0;
    v155 = (unsigned int)(v153 - 1);
    v156 = (unsigned int)svtUseSkillIdList->max_length;
    while ( v154 < LODWORD(svtUseSkillIdList->max_length) )
    {
      svtSkillLvList = v150->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_1102;
      if ( v154 >= LODWORD(svtSkillLvList->max_length) )
        break;
      v158 = (__int64)svtSkillLvList + 4 * v154;
      v159 = svtUseSkillIdList->m_Items[v154];
      v161 = *(_DWORD *)(v158 + 32);
      v160 = v158 + 32;
      if ( v161 <= 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9285/*"NONSKILL_TXT"*/, 0);
      }
      else
      {
        gameObject = (__int64)System_Int32__ToString(v160, 0);
      }
      v162 = (Il2CppObject *)gameObject;
      if ( enableAppendSkillUp )
      {
        v163 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v159,
                 (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v154 == v155 )
        {
          v164 = &StringLiteral_12233/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v163 )
            v164 = &StringLiteral_12235/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v164 = &StringLiteral_12234/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v163 )
            v164 = &StringLiteral_12236/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v164, 0);
        if ( v151 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v151, (System_String_o *)gameObject, v162, 0);
          if ( ++v154 == v156 )
            goto LABEL_612;
          svtUseSkillIdList = v150->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_1102;
    }
LABEL_1103:
    sub_1C6BC68(gameObject);
  }
  if ( !v151 )
    goto LABEL_1102;
LABEL_612:
  v165 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v151->klass->vtable._3_ToString.methodPtr)(
                 v151,
                 v151->klass->vtable._3_ToString.method);
  if ( !v165 )
    goto LABEL_1102;
  UILabel__set_text(v165, (System_String_o *)gameObject, 0);
  gameObject = (__int64)this->fields.skillLvLabel;
  p_statusTxtLb = &this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1102;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  modeKind = v247;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1102;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  gameObject = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v166 = *v252;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9283/*"NONSELECT_SKILLUP_BASE"*/, 0);
    if ( !v166 )
      goto LABEL_1102;
    UILabel__set_text(v166, (System_String_o *)gameObject, 0);
    if ( item->fields.isEventJoin )
    {
      v167 = *v252;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10290/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v167 )
        goto LABEL_1102;
      UILabel__set_text(v167, (System_String_o *)gameObject, 0);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_650;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_40657328(126, 0) )
      goto LABEL_650;
    v168 = *v252;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11520/*"SELECT_CANNOT"*/, 0);
    if ( !v168 )
      goto LABEL_1102;
  }
  else
  {
    if ( !enableAppendSkillUp )
      goto LABEL_1102;
    if ( enableAppendSkillUp->fields._size <= 0 && !item->fields.isAppendSkillOpenItemNum )
      goto LABEL_650;
    gameObject = (__int64)*v248;
    if ( !*v248 )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v168 = *v248;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8791/*"MSG_ABLED_SKILLUP"*/, 0);
    if ( !v168 )
      goto LABEL_1102;
  }
  UILabel__set_text(v168, (System_String_o *)gameObject, 0);
LABEL_650:
  v169 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v169, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
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
          goto LABEL_1102;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)gameObject, switchInfoList, 0, 0);
        gameObject = (__int64)this->fields.coinInfo;
        if ( !gameObject )
          goto LABEL_1102;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        coinNumLabel = this->fields.coinNumLabel;
        gameObject = CombineServantListViewItem__get_SkillOpenItemNum(item, 0);
        if ( (gameObject & 0x80000000) != 0 )
        {
          switchInfoList = (UIWidget_array *)StringLiteral_1/*""*/;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(item, 0);
          v173 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum);
          gameObject = (__int64)System_String__Format((System_String_o *)StringLiteral_25162/*"{0:#,0}"*/, v173, 0);
          switchInfoList = (UIWidget_array *)gameObject;
        }
        if ( !coinNumLabel )
          goto LABEL_1102;
        UILabel__set_text(coinNumLabel, (System_String_o *)switchInfoList, 0);
        gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, 0);
        coinIcon = this->fields.coinIcon;
        if ( (int)gameObject < 1 )
        {
          if ( !coinIcon )
            goto LABEL_1102;
          gameObject = (__int64)coinIcon->fields.iconSprite;
          if ( !gameObject )
            goto LABEL_1102;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_1102;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        else
        {
          gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, 0);
          if ( !coinIcon )
            goto LABEL_1102;
          ItemIconComponent__SetItem(coinIcon, gameObject, -1, 1, 0);
        }
      }
    }
  }
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_680:
  v175 = item->fields.type;
  if ( v175 != 12 )
    goto LABEL_794;
  v176 = CombineServantListViewItem__GetAppendSkillData(item, 0);
  v177 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v177, 0);
  if ( !v176 )
    goto LABEL_1102;
  v178 = v176->fields.svtUseSkillIdList;
  if ( !v178 )
    goto LABEL_1102;
  v179 = v178->max_length;
  if ( (int)v179 < 1 )
  {
    v182 = 0;
    v194 = 0;
    if ( !v177 )
      goto LABEL_1102;
  }
  else
  {
    v180 = 0;
    v181 = 0;
    v182 = 0;
    v183 = 0;
    while ( 1 )
    {
      if ( v183 >= LODWORD(v178->max_length) )
        goto LABEL_1103;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9285/*"NONSKILL_TXT"*/, 0);
      v184 = v176->fields.svtSkillLvList;
      if ( !v184 )
        goto LABEL_1102;
      if ( v183 >= LODWORD(v184->max_length) )
        goto LABEL_1103;
      v185 = (char *)v184 + 4 * v183;
      v186 = *((_DWORD *)v185 + 8);
      gameObject = (__int64)(v185 + 32);
      if ( v186 >= 1 )
      {
        gameObject = (__int64)System_Int32__ToString(gameObject, 0);
        v184 = v176->fields.svtSkillLvList;
        if ( !v184 )
          goto LABEL_1102;
        v181 = 1;
      }
      if ( v183 >= LODWORD(v184->max_length) )
        goto LABEL_1103;
      v187 = v184->m_Items[0];
      v188 = v184->m_Items[v183++];
      v182 |= v188 < 10;
      v180 |= v187 != v188;
      if ( v183 == (unsigned int)v179 )
        break;
      v178 = v176->fields.svtUseSkillIdList;
      if ( !v178 )
        goto LABEL_1102;
    }
    v246 = v181;
    v189 = 0;
    v190 = 32;
    do
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9285/*"NONSKILL_TXT"*/, 0);
      v191 = v176->fields.svtSkillLvList;
      if ( !v191 )
        goto LABEL_1102;
      if ( v189 >= LODWORD(v191->max_length) )
        goto LABEL_1103;
      v192 = (Il2CppObject *)gameObject;
      if ( *(int *)((char *)&v191->obj.klass + v190) >= 1 )
        v192 = (Il2CppObject *)System_Int32__ToString((int)v191 + (int)v190, 0);
      if ( (_DWORD)v179 - 1 == v189 )
      {
        if ( (v180 & 1) == 0 )
          goto LABEL_710;
        if ( !v250->fields.isHeroineSvt )
          goto LABEL_719;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_40657328(126, 0) )
        {
LABEL_710:
          v193 = &StringLiteral_12235/*"SKILL_LVDISP_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v193 = &StringLiteral_12235/*"SKILL_LVDISP_SINGLE_TXT"*/;
          }
        }
        else
        {
LABEL_719:
          v193 = &StringLiteral_12233/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v193 = &StringLiteral_12233/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          }
        }
      }
      else
      {
        if ( (v180 & 1) == 0 )
          goto LABEL_717;
        if ( !v250->fields.isHeroineSvt )
          goto LABEL_721;
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_40657328(126, 0) )
        {
LABEL_717:
          v193 = &StringLiteral_12236/*"SKILL_LVDISP_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v193 = &StringLiteral_12236/*"SKILL_LVDISP_TXT"*/;
          }
        }
        else
        {
LABEL_721:
          v193 = &StringLiteral_12234/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v193 = &StringLiteral_12234/*"SKILL_LVDISP_ENABLE_TXT"*/;
          }
        }
      }
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v193, 0);
      if ( !v177 )
        goto LABEL_1102;
      System_Text_StringBuilder__AppendFormat(v177, (System_String_o *)gameObject, v192, 0);
      ++v189;
      v190 += 4;
    }
    while ( (unsigned int)v179 != v189 );
    this = v249;
    item = v250;
    v194 = v246;
    modeKind = v247;
    p_statusTxtLb = v248;
  }
  v195 = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v177->klass->vtable._3_ToString.methodPtr)(
                 v177,
                 v177->klass->vtable._3_ToString.method);
  if ( !v195
    || (UILabel__set_text(v195, (System_String_o *)gameObject, 0), (gameObject = (__int64)this->fields.skillLvLabel) == 0)
    || (gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
LABEL_1102:
    sub_1C6BC60(gameObject, switchInfoList);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1102;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0) )
    goto LABEL_783;
  gameObject = (__int64)*p_maskSprite;
  if ( !*p_maskSprite )
    goto LABEL_1102;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (__int64)*v252;
  if ( !*v252 )
    goto LABEL_1102;
  UILabel__set_text((UILabel_o *)gameObject, string_TypeInfo->static_fields->Empty, 0);
  if ( item->fields.isEventJoin )
  {
    v196 = *v252;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10290/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0);
    if ( !v196 )
      goto LABEL_1102;
    UILabel__set_text(v196, (System_String_o *)gameObject, 0);
  }
  if ( !item->fields.isHeroineSvt )
    goto LABEL_1106;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40657328(126, 0) )
  {
    v197 = *v252;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v198 = &StringLiteral_11520/*"SELECT_CANNOT"*/;
  }
  else
  {
LABEL_1106:
    if ( item->fields.isEventJoin )
    {
      v197 = *v252;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v198 = &StringLiteral_11552/*"SELECT_SERVANT_EVENT_JOIN"*/;
    }
    else if ( (v194 & 1) != 0 )
    {
      if ( (v182 & 1) != 0 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CB002A )
        {
          sub_1C6BA08(&NetworkManager_TypeInfo);
          byte_4CB002A = 1;
        }
        gameObject = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          gameObject = (__int64)NetworkManager_TypeInfo;
        }
        if ( !Master_object )
          goto LABEL_1102;
        if ( !UserServantAppendPassiveSkillMaster__TryGetEntity(
                (UserServantAppendPassiveSkillMaster_o *)Master_object,
                &entity,
                *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                item->fields.svtId,
                0)
          || !UserServantAppendPassiveSkillMaster__IsExchangeLimited(0) )
        {
          goto LABEL_783;
        }
        v197 = *v252;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1981/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/, 0);
        if ( !entity )
          goto LABEL_1102;
        v200 = (System_String_o *)gameObject;
        SkillOpenItemNum = UserServantAppendPassiveSkillEntity__GetRemainingExchangeNum(entity, 0);
        v201 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum);
        gameObject = (__int64)System_String__Format(v200, v201, 0);
        if ( !v197 )
          goto LABEL_1102;
        goto LABEL_782;
      }
      v197 = *v252;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v198 = &StringLiteral_1980/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/;
    }
    else
    {
      v197 = *v252;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v198 = &StringLiteral_1979/*"APPEND_SKILL_EXCHANGE_ITEM_LOCK"*/;
    }
  }
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v198, 0);
  if ( !v197 )
    goto LABEL_1102;
LABEL_782:
  UILabel__set_text(v197, (System_String_o *)gameObject, 0);
LABEL_783:
  v202 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v202, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
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
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v175 = item->fields.type;
LABEL_794:
  if ( v175 != 4 )
    goto LABEL_840;
  gameObject = (__int64)this->fields.npIconLabel;
  if ( !gameObject )
    goto LABEL_1102;
  v203 = SHIDWORD(tdMaxLv.invoker_method) <= 0 ? -1 : LODWORD(tdMaxLv.invoker_method);
  UIIconLabel__Set_41344128((UIIconLabel_o *)gameObject, 33, v203, SHIDWORD(tdMaxLv.methodPointer), 0, 0, 0, 0, 0, 0, 0);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1102;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0) )
  {
    v204 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v204, 0, 0) )
      goto LABEL_836;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v205 = item->fields.isHeroineSvt;
    v206 = *v252;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v205 )
      v207 = &StringLiteral_9279/*"NONSELECT_MATERIAL"*/;
    else
      v207 = &StringLiteral_9282/*"NONSELECT_NPUP_BASE"*/;
    v209 = (System_String_o *)*v207;
    goto LABEL_834;
  }
  if ( !item->fields.isSameSvt && !item->fields.isBaseSvt )
  {
    v220 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v220, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1102;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1102;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_836;
  }
  v208 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v208, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    if ( item->fields.isSameSvt )
    {
      gameObject = (__int64)*p_statusTxtLb;
      if ( !*p_statusTxtLb )
        goto LABEL_1102;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v206 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v209 = (System_String_o *)StringLiteral_8793/*"MSG_ABLED_TDUP"*/;
LABEL_834:
      gameObject = (__int64)LocalizationManager__Get(v209, 0);
      if ( !v206 )
        goto LABEL_1102;
      UILabel__set_text(v206, (System_String_o *)gameObject, 0);
    }
  }
LABEL_836:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_840:
  v210 = item->fields.type;
  if ( v210 != 6 )
    goto LABEL_907;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1102;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1102;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0) )
  {
    v211 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v211, 0, 0) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1102;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1102;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1102;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      if ( item->fields.isHeroineSvt && !item->fields.isLvExceedMax )
      {
        v213 = *v252;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v214 = &StringLiteral_9279/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        isEventJoin = item->fields.isEventJoin;
        v213 = *v252;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( isEventJoin )
          v214 = &StringLiteral_11552/*"SELECT_SERVANT_EVENT_JOIN"*/;
        else
          v214 = &StringLiteral_9333/*"NO_SELECT_LVEXCEED"*/;
      }
      v218 = (System_String_o *)*v214;
LABEL_900:
      gameObject = (__int64)LocalizationManager__Get(v218, 0);
      if ( !v213 )
        goto LABEL_1102;
      UILabel__set_text(v213, (System_String_o *)gameObject, 0);
      goto LABEL_902;
    }
    goto LABEL_902;
  }
  if ( !item->fields.isLvMax || !item->fields.isLimitCntMax )
  {
    v219 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v219, 0, 0) )
      goto LABEL_902;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
LABEL_884:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_902;
  }
  isLvExceedItemNum = item->fields.isLvExceedItemNum;
  v216 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v217 = UnityEngine_Object__op_Inequality(v216, 0, 0);
  if ( !isLvExceedItemNum )
  {
    if ( !v217 )
      goto LABEL_902;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    goto LABEL_884;
  }
  if ( v217 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)*v252;
    if ( !*v252 )
      goto LABEL_1102;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v213 = *p_statusTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v218 = (System_String_o *)StringLiteral_8790/*"MSG_ABLED_LIMITUP"*/;
    goto LABEL_900;
  }
LABEL_902:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v210 = item->fields.type;
LABEL_907:
  if ( v210 != 10 && v210 != 7 )
    goto LABEL_972;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1102;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0);
  gameObject = (__int64)this->fields.subIconLabel;
  if ( !gameObject )
    goto LABEL_1102;
  UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0);
  v222 = item->fields.type;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  gameObject = CombineServantListViewManager__GetSortKind(v222, v221);
  v223 = this->fields.servantFaceIcon;
  if ( !v223 )
    goto LABEL_1102;
  if ( (_DWORD)gameObject == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *__return_ptr, struct ServantFaceIconComponent_o *, __int64, const MethodInfo *))v223->klass->vtable._4_ParameterChange.methodPtr)(
      v223,
      this->fields.servantFaceIcon,
      1,
      v223->klass->vtable._4_ParameterChange.method);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_1102;
    ServantFaceIconComponent__ResetIconLabelPos((ServantFaceIconComponent_o *)gameObject, 0);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_1102;
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
      goto LABEL_1102;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v224 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0);
  v225 = (UnityEngine_Object_o *)this->fields.baseButton;
  v226 = v224;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v227 = UnityEngine_Object__op_Inequality(v225, 0, 0);
  if ( v226 )
  {
    if ( !v227 )
      goto LABEL_961;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( item->fields.type == 10 && item->fields.isCommandCardExceedMax )
    {
      v228 = *v252;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9276/*"NONSEELECT_STATUSUP_MAX"*/, 0);
      if ( !v228 )
        goto LABEL_1102;
      UILabel__set_text(v228, (System_String_o *)gameObject, 0);
    }
    if ( item->fields.isEventJoin )
    {
      v229 = *v252;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11552/*"SELECT_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v229 )
        goto LABEL_1102;
      UILabel__set_text(v229, (System_String_o *)gameObject, 0);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_961;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_40657328(126, 0) )
      goto LABEL_961;
    v230 = *v252;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11520/*"SELECT_CANNOT"*/, 0);
    if ( !v230 )
      goto LABEL_1102;
    v231 = (System_String_o *)gameObject;
    gameObject = (__int64)v230;
    goto LABEL_960;
  }
  if ( v227 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)*v252;
    if ( !*v252 )
      goto LABEL_1102;
    v231 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_960:
    UILabel__set_text((UILabel_o *)gameObject, v231, 0);
  }
LABEL_961:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v232 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v232, 0) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v233 = this->fields.svtCommandCardList;
    gameObject = CombineServantListViewItem__get_UserSvtId(item, 0);
    if ( !v233 )
      goto LABEL_1102;
    ServantCommandCardListComponent__Set(v233, gameObject, 1, 1, 0);
  }
LABEL_972:
  if ( item->fields.type != 8 )
    goto LABEL_1030;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_1102;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0) )
  {
    v234 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v234, 0, 0) )
      goto LABEL_1026;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( item->fields.isHeroineSvt && !item->fields.isFriendshipExceedMax )
    {
      v236 = *v252;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v237 = &StringLiteral_9279/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      v235 = item->fields.isEventJoin;
      v236 = *v252;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v235 )
        v237 = &StringLiteral_11552/*"SELECT_SERVANT_EVENT_JOIN"*/;
      else
        v237 = &StringLiteral_9332/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
    }
    v241 = (System_String_o *)*v237;
    goto LABEL_1024;
  }
  if ( !item->fields.isFriendshipRankMax )
  {
    v242 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v242, 0, 0) )
      goto LABEL_1026;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
LABEL_1018:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_1026;
  }
  isFriendshipExceedItemNum = item->fields.isFriendshipExceedItemNum;
  v239 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v240 = UnityEngine_Object__op_Inequality(v239, 0, 0);
  if ( !isFriendshipExceedItemNum )
  {
    if ( !v240 )
      goto LABEL_1026;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_1102;
    goto LABEL_1018;
  }
  if ( !v240 )
    goto LABEL_1026;
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_1102;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
    gameObject,
    1,
    *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_1102;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
    gameObject,
    0,
    1,
    *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  gameObject = (__int64)*p_maskSprite;
  if ( !*p_maskSprite )
    goto LABEL_1102;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)*v252;
  if ( !*v252 )
    goto LABEL_1102;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)*p_statusTxtLb;
  if ( !*p_statusTxtLb )
    goto LABEL_1102;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_1102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v236 = *p_statusTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v241 = (System_String_o *)StringLiteral_8789/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/;
LABEL_1024:
  gameObject = (__int64)LocalizationManager__Get(v241, 0);
  if ( !v236 )
    goto LABEL_1102;
  UILabel__set_text(v236, (System_String_o *)gameObject, 0);
LABEL_1026:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
LABEL_1030:
  if ( (unsigned int)(modeKind - 1) > 1 )
  {
    if ( modeKind != 3 )
      return;
    if ( item->fields.isEventJoin )
    {
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1102;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v243 = *v252;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11552/*"SELECT_SERVANT_EVENT_JOIN"*/, 0);
      if ( !v243 )
        goto LABEL_1102;
    }
    else
    {
      if ( !item->fields.isCanNotLock )
      {
        gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
        if ( !gameObject )
          goto LABEL_1102;
        if ( !UserServantEntity__IsLeave((UserServantEntity_o *)gameObject, 0) )
        {
          gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
          if ( !gameObject )
            goto LABEL_1102;
          if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)gameObject, 0) )
          {
            gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
            if ( !gameObject )
              goto LABEL_1102;
            if ( !UserServantEntity__IsStatusUp((UserServantEntity_o *)gameObject, 0) )
            {
              gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0);
              if ( !gameObject )
                goto LABEL_1102;
              if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)gameObject, 0) )
              {
                gameObject = (__int64)*p_maskSprite;
                if ( !*p_maskSprite )
                  goto LABEL_1102;
                gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !gameObject )
                  goto LABEL_1102;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
                gameObject = (__int64)*v252;
                if ( !*v252 )
                  goto LABEL_1102;
                v244 = (System_String_o *)StringLiteral_1/*""*/;
                goto LABEL_1068;
              }
            }
          }
        }
      }
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1102;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_1102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v243 = *v252;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8313/*"LOCKMODE_SELECTED_SERVANT"*/, 0);
      if ( !v243 )
        goto LABEL_1102;
    }
    v244 = (System_String_o *)gameObject;
    gameObject = (__int64)v243;
LABEL_1068:
    UILabel__set_text((UILabel_o *)gameObject, v244, 0);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1102;
LABEL_1069:
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    return;
  }
  if ( !item->fields.isHeroineSvt )
    goto LABEL_1035;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_40657328(126, 0) )
  {
LABEL_1035:
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1102;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_1102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isCanNotLock, 0);
    if ( item->fields.isCanNotLock )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      switchInfoList = (UIWidget_array *)LocalizationManager__Get((System_String_o *)StringLiteral_8313/*"LOCKMODE_SELECTED_SERVANT"*/, 0);
    }
    else
    {
      switchInfoList = (UIWidget_array *)StringLiteral_1/*""*/;
    }
    gameObject = (__int64)*v252;
    if ( !*v252 )
      goto LABEL_1102;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)switchInfoList, 0);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1102;
    goto LABEL_1069;
  }
}


void CombineServantListViewItemDraw__SetSelectDisp(
        CombineServantListViewItemDraw_o *this,
        CombineServantListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSelect; // x21
  __int64 v6; // x1
  DragSelectComponent_o *v7; // x0
  int32_t dragSelectNum; // w2
  int32_t selectNum; // w1

  if ( (byte_4CBA568 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA568 = 1;
  }
  dragSelect = (UnityEngine_Object_o *)this->fields.dragSelect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(dragSelect, 0, 0) )
  {
    v7 = this->fields.dragSelect;
    if ( item )
    {
      if ( v7 )
      {
        dragSelectNum = item->fields.dragSelectNum;
        selectNum = item->fields.selectNum;
LABEL_11:
        DragSelectComponent__Set(v7, selectNum, dragSelectNum, 0);
        return;
      }
    }
    else if ( v7 )
    {
      selectNum = -1;
      dragSelectNum = -1;
      goto LABEL_11;
    }
    sub_1C6BC60(v7, v6);
  }
}