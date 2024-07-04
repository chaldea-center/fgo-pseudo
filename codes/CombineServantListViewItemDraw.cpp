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
  if ( (byte_48E608B & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, item);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_9159/*"NONSELECT_UNDER_STATUS_MAX"*/, v8);
    sub_1B00CCC(&StringLiteral_9154/*"NONSELECT_MATERIAL"*/, v9);
    sub_1B00CCC(&StringLiteral_9157/*"NONSELECT_NPUP_BASE"*/, v10);
    sub_1B00CCC(&StringLiteral_9155/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v11);
    byte_48E608B = 1;
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
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9159/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
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
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9159/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
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
      v32 = &StringLiteral_9159/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_78:
      maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v32, 0LL);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)maskSprite, 0LL);
        goto LABEL_80;
      }
LABEL_92:
      sub_1B00F28(maskSprite, v21);
    }
    maskLabel = this->fields.maskLabel;
    v25 = LocalizationManager_TypeInfo;
    v27 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_75:
    if ( !v27 )
      j_il2cpp_runtime_class_init_0(v25);
    v32 = &StringLiteral_9154/*"NONSELECT_MATERIAL"*/;
    goto LABEL_78;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0LL) )
  {
    v24 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
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
      v32 = &StringLiteral_9157/*"NONSELECT_NPUP_BASE"*/;
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
  UnityEngine_Object_o *svtCommandCardList; // x23
  System_String_o *switchInfoList; // x1
  __int64 gameObject; // x0
  int32_t type; // w19
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  IconLabelInfo_o *iconLabelInfo1; // x2
  UIIconLabel_o *subIconLabel; // x23
  int32_t rarity; // w24
  int32_t v70; // w25
  UILabel_o **p_statusTxtLb; // x20
  struct UILabel_o **p_maskLabel; // x29
  UnityEngine_GameObject_o *v73; // x23
  UnityEngine_Object_o *pushImg; // x23
  UnityEngine_Object_o *materialTdSprite; // x23
  UISprite_o *v76; // x23
  const MethodInfo *v77; // x1
  int32_t v78; // w23
  int32_t v79; // w8
  bool CanNotBaseSelect; // w0
  UnityEngine_Object_o *v81; // x23
  bool v82; // w22
  bool v83; // w0
  struct UILabel_o *v84; // x22
  __int64 *v85; // x8
  int32_t v86; // w2
  char v87; // w25
  UILabel_o *v88; // x23
  UILabel_o *v89; // x23
  UILabel_o *v90; // x23
  const MethodInfo *v91; // x2
  UILabel_o *v92; // x23
  UILabel_o *v93; // x23
  UILabel_o *v94; // x23
  UILabel_o *v95; // x23
  UILabel_o *v96; // x23
  UILabel_o *v97; // x23
  _BOOL4 isParty; // w19
  __int64 *v99; // x8
  UILabel_o *v100; // x23
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x24
  bool v103; // w23
  bool v104; // w0
  int32_t v105; // w8
  UILabel_o *v106; // x22
  UILabel_o *v107; // x22
  UILabel_o *v108; // x22
  UILabel_o *v109; // x22
  __int64 *v110; // x8
  UnityEngine_Object_o *v111; // x23
  uint32_t cctor_finished; // w8
  int v113; // w19
  UILabel_o *v114; // x22
  System_String_o *v115; // x23
  Il2CppObject *v116; // x0
  UILabel_o *v117; // x22
  UILabel_o *v118; // x23
  UILabel_o *v119; // x22
  UILabel_o *v120; // x22
  UILabel_o *v121; // x22
  int32_t v122; // w8
  System_String_o *v123; // x1
  UILabel_o *fortificationAppointmentLabel; // x22
  float v125; // s0
  float v126; // s2
  float fortificationInfoRootObjOffsetY; // s10
  float v128; // s8
  float v129; // s9
  System_Collections_Generic_List_object__o *v130; // x22
  System_String_o *v131; // x23
  Il2CppObject *v132; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  struct System_Object_array *items; // x8
  _QWORD *v136; // x9
  __int64 size; // x10
  __int64 v138; // x1
  Il2CppClass **v139; // x0
  System_String_o *v140; // x23
  Il2CppObject *v141; // x0
  int32_t v142; // w2
  int32_t v143; // w3
  struct System_Object_array *v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x10
  __int64 v147; // x1
  Il2CppClass **v148; // x0
  int32_t v149; // w2
  int32_t v150; // w3
  struct System_Object_array *v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  __int64 v154; // x1
  Il2CppClass **v155; // x0
  UnityEngine_Object_o *v156; // x22
  _BOOL4 isHeroineSvt; // w19
  UILabel_o *v158; // x22
  System_String_o **v159; // x8
  bool v160; // w0
  UnityEngine_Object_o *v161; // x23
  bool v162; // w22
  bool v163; // w0
  UILabel_o *v164; // x22
  __int64 *v165; // x8
  System_String_o *v166; // x1
  _BOOL4 isSealCombineLimit; // w19
  UnityEngine_Object_o *v168; // x22
  UnityEngine_Object_o *v169; // x22
  int32_t v170; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  System_Text_StringBuilder_o *v172; // x22
  SkillInfo_array *v173; // x8
  __int64 v174; // x9
  unsigned __int64 v175; // x26
  __int64 v176; // x27
  __int64 v177; // x20
  SkillInfo_o *v178; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v181; // w25
  Il2CppObject *v182; // x24
  bool v183; // w25
  System_String_o **v184; // x8
  UILabel_o *skillLvLabel; // x23
  UnityEngine_Object_o *v186; // x22
  UILabel_o *v187; // x22
  UILabel_o *v188; // x22
  __int64 *v189; // x8
  _BOOL4 isSkillUpItemNum; // w19
  UnityEngine_Object_o *v191; // x22
  bool v192; // w0
  SvtUseSkillData_o *AppendSkillData; // x0
  struct System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v195; // x24
  System_Text_StringBuilder_o *v196; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v198; // x9
  unsigned __int64 v199; // x27
  __int64 v200; // x20
  __int64 v201; // x28
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v203; // x0
  int32_t v204; // w26
  int32_t v205; // w0
  int v206; // t1
  Il2CppObject *v207; // x25
  bool v208; // w26
  System_String_o **v209; // x8
  UILabel_o *v210; // x24
  UILabel_o *v211; // x22
  UILabel_o *v212; // x22
  UILabel_o *v213; // x22
  __int64 *v214; // x8
  UnityEngine_Object_o *v215; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  __int64 v219; // x2
  __int64 v220; // x3
  __int64 v221; // x4
  Il2CppObject *v222; // x0
  ItemIconComponent_o *coinIcon; // x22
  int32_t v224; // w8
  int32_t v225; // w2
  UnityEngine_Object_o *v226; // x22
  _BOOL4 v227; // w19
  UILabel_o *v228; // x22
  System_String_o **v229; // x8
  UnityEngine_Object_o *v230; // x22
  UnityEngine_Object_o *v231; // x22
  UILabel_o *v232; // x22
  _BOOL4 isLvExceedItemNum; // w19
  UnityEngine_Object_o *v234; // x22
  bool v235; // w0
  UnityEngine_Object_o *v236; // x22
  _BOOL4 isEventJoin; // w19
  UnityEngine_Object_o *v238; // x22
  int32_t v239; // w8
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
  int32_t v264; // [xsp+1Ch] [xbp-C4h]
  struct UILabel_o **v265; // [xsp+20h] [xbp-C0h]
  struct UILabel_o **v266; // [xsp+28h] [xbp-B8h]
  CombineServantListViewItemDraw_o *v267; // [xsp+38h] [xbp-A8h]
  struct UISprite_o **p_maskSprite; // [xsp+40h] [xbp-A0h]
  int32_t SkillOpenItemNum; // [xsp+4Ch] [xbp-94h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-90h] BYREF
  MethodInfo v271; // [xsp+58h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v272; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v273; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48E608A & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, item);
    sub_1B00CCC(&CombineServantListViewManager_TypeInfo, v11);
    sub_1B00CCC(&int_TypeInfo, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__Add__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_1B00CCC(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v18);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v19);
    sub_1B00CCC(&System_Text_StringBuilder_TypeInfo, v20);
    sub_1B00CCC(&TutorialFlag_TypeInfo, v21);
    sub_1B00CCC(&StringLiteral_11962/*"SKILL_LVDISP_TXT"*/, v22);
    sub_1B00CCC(&StringLiteral_10193/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, v23);
    sub_1B00CCC(&StringLiteral_9159/*"NONSELECT_UNDER_STATUS_MAX"*/, v24);
    sub_1B00CCC(&StringLiteral_6381/*"FORTIFICATION_APPOINTMENT"*/, v25);
    sub_1B00CCC(&StringLiteral_3609/*"COMBINE_CAN_STATUS_UP_INFO"*/, v26);
    sub_1B00CCC(&StringLiteral_8655/*"MSG_CAMPAIGN_COMBINE_EXP"*/, v27);
    sub_1B00CCC(&StringLiteral_11960/*"SKILL_LVDISP_ENABLE_TXT"*/, v28);
    sub_1B00CCC(&StringLiteral_9154/*"NONSELECT_MATERIAL"*/, v29);
    sub_1B00CCC(&StringLiteral_22619/*"ribbon_noblephantasmup_01"*/, v30);
    sub_1B00CCC(&StringLiteral_9153/*"NONSELECT_LIMITUP_BASE"*/, v31);
    sub_1B00CCC(&StringLiteral_10008/*"PARTY_MEMBER_TXT"*/, v32);
    sub_1B00CCC(&StringLiteral_9157/*"NONSELECT_NPUP_BASE"*/, v33);
    sub_1B00CCC(&StringLiteral_12205/*"SUPPORT_MEMBER"*/, v34);
    sub_1B00CCC(&StringLiteral_8651/*"MSG_ABLED_LIMITUP"*/, v35);
    sub_1B00CCC(&StringLiteral_11329/*"SELECT_PUSH"*/, v36);
    sub_1B00CCC(&StringLiteral_11306/*"SELECT_CANNOT"*/, v37);
    sub_1B00CCC(&StringLiteral_9212/*"NPUP_BASE"*/, v38);
    sub_1B00CCC(&StringLiteral_11959/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/, v39);
    sub_1B00CCC(&StringLiteral_11330/*"SELECT_SERVANT_EVENT_JOIN"*/, v40);
    sub_1B00CCC(&StringLiteral_9200/*"NO_SELECT_FRIENDSHIP_EXCEED"*/, v41);
    sub_1B00CCC(&StringLiteral_11231/*"SAME_SERVANT"*/, v42);
    sub_1B00CCC(&StringLiteral_8650/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, v43);
    sub_1B00CCC(&StringLiteral_9155/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v44);
    sub_1B00CCC(&StringLiteral_24569/*"{0:#,0}"*/, v45);
    sub_1B00CCC(&StringLiteral_11961/*"SKILL_LVDISP_SINGLE_TXT"*/, v46);
    sub_1B00CCC(&StringLiteral_8652/*"MSG_ABLED_SKILLUP"*/, v47);
    sub_1B00CCC(&StringLiteral_9156/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, v48);
    sub_1B00CCC(&StringLiteral_9160/*"NONSKILL_TXT"*/, v49);
    sub_1B00CCC(&StringLiteral_8199/*"LOCKMODE_SELECTED_SERVANT"*/, v50);
    sub_1B00CCC(&StringLiteral_6295/*"FAVORITE_SERVANT"*/, v51);
    sub_1B00CCC(&StringLiteral_3425/*"CHOICE_SERVANT"*/, v52);
    sub_1B00CCC(&StringLiteral_8654/*"MSG_ABLED_TDUP"*/, v53);
    sub_1B00CCC(&StringLiteral_11300/*"SEAL_COMBINE_LIMIT_THIRD"*/, v54);
    sub_1B00CCC(&StringLiteral_9152/*"NONSELECT_BASE_ALLMAX"*/, v55);
    sub_1B00CCC(&StringLiteral_9201/*"NO_SELECT_LVEXCEED"*/, v56);
    sub_1B00CCC(&StringLiteral_1/*""*/, v57);
    sub_1B00CCC(&StringLiteral_9158/*"NONSELECT_SKILLUP_BASE"*/, v58);
    sub_1B00CCC(&StringLiteral_11328/*"SELECT_PROTECTED_EVENT_SVT"*/, v59);
    sub_1B00CCC(&StringLiteral_8200/*"LOCK_SERVANT"*/, v60);
    sub_1B00CCC(&StringLiteral_9151/*"NONSEELECT_STATUSUP_MAX"*/, v61);
    byte_48E608A = 1;
  }
  v271.invoker_method = 0LL;
  skillInfoList = 0LL;
  v271.methodPointer = 0LL;
  if ( !item || !mode )
    return;
  svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(svtCommandCardList, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
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
      goto LABEL_549;
    ServantFaceIconComponent__Set_37007740(
      servantFaceIcon,
      (UserServantEntity_o *)gameObject,
      iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
    subIconLabel = this->fields.subIconLabel;
    rarity = item->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
    if ( !gameObject )
      goto LABEL_549;
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_549;
    ServantFaceIconComponent__Set_37007740(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0LL, 0LL);
    gameObject = (__int64)item->fields.iconLabelInfo2;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = IconLabelInfo__IsClear((IconLabelInfo_o *)gameObject, 0LL);
    subIconLabel = this->fields.subIconLabel;
    if ( (gameObject & 1) == 0 )
    {
      if ( !subIconLabel )
        goto LABEL_549;
      UIIconLabel__Set(this->fields.subIconLabel, item->fields.iconLabelInfo2, 0LL);
      goto LABEL_22;
    }
    rarity = item->fields.rarity;
    gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
    if ( !gameObject )
      goto LABEL_549;
  }
  v70 = *(_DWORD *)(gameObject + 296);
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
  if ( !gameObject || !subIconLabel )
    goto LABEL_549;
  UIIconLabel__Set_37024000(subIconLabel, 36, rarity, v70, 0, 0LL, 0, 0, *(_DWORD *)(gameObject + 256), 0LL);
LABEL_22:
  CombineServantListViewItem__GetNpInfo(
    item,
    (int32_t *)&v271.invoker_method + 1,
    (int32_t *)&v271.invoker_method,
    (int32_t *)&v271.methodPointer + 1,
    0LL);
  gameObject = (__int64)this->fields.lockImg;
  if ( !gameObject )
    goto LABEL_549;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_549;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_statusTxtLb = &this->fields.statusTxtLb;
  gameObject = (__int64)this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_549;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_549;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.maskSprite;
  p_maskSprite = &this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_549;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_549;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_maskLabel = &this->fields.maskLabel;
  gameObject = (__int64)this->fields.maskLabel;
  if ( !gameObject )
    goto LABEL_549;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_549;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_549;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.partyIcon;
  if ( !gameObject )
    goto LABEL_549;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.removeImg;
  if ( !gameObject )
    goto LABEL_549;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_549;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_549;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_549;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.choiceImg;
  if ( !gameObject )
    goto LABEL_549;
  v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = CombineServantListViewItem__get_IsDispChoice(item, 0LL);
  if ( !v73 )
    goto LABEL_549;
  UnityEngine_GameObject__SetActive(v73, gameObject & 1, 0LL);
  gameObject = (__int64)this->fields.switchInfoComp;
  if ( !gameObject )
    goto LABEL_549;
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.fortificationRootObj;
  if ( !gameObject )
    goto LABEL_549;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.fortificationNameLabel;
  if ( !gameObject )
    goto LABEL_549;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)this->fields.fortificationDetailNameLabel;
  if ( !gameObject )
    goto LABEL_549;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)this->fields.fortificationAppointmentLabel;
  if ( !gameObject )
    goto LABEL_549;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushImg, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.pushImg;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isPush, 0LL);
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_549;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)gameObject, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isMaterialTdSvt, 0LL);
    if ( item->fields.isMaterialTdSvt )
    {
      v76 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v76, (System_String_o *)StringLiteral_22619/*"ribbon_noblephantasmup_01"*/, 0LL);
      v78 = item->fields.type;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      if ( CombineServantListViewManager__GetSortKind(v78, v77) == 1 )
      {
        gameObject = (__int64)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_549;
        v272.fields.x = 0.65;
        v272.fields.y = 1.0;
        v272.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v272, 0LL);
      }
    }
  }
  v79 = item->fields.type;
  switch ( v79 )
  {
    case 5:
      gameObject = (__int64)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_549;
      v86 = SHIDWORD(v271.invoker_method) <= 0 ? -1 : LODWORD(v271.invoker_method);
      UIIconLabel__Set_37024000(
        (UIIconLabel_o *)gameObject,
        33,
        v86,
        SHIDWORD(v271.methodPointer),
        0,
        0LL,
        0,
        0,
        0,
        0LL);
      gameObject = (__int64)this->fields.npLvInfo;
      if ( !gameObject )
        goto LABEL_549;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      goto LABEL_97;
    case 1:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_549;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0LL);
      if ( CombineServantListViewItem__get_IsProtected(item, 0LL) && item->fields.type != 5 )
      {
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_549;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_549;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v118 = *p_maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11328/*"SELECT_PROTECTED_EVENT_SVT"*/, 0LL);
        if ( !v118 )
          goto LABEL_549;
        UILabel__set_text(v118, (System_String_o *)gameObject, 0LL);
        v87 = 1;
LABEL_98:
        if ( item->fields.isParty )
        {
          gameObject = (__int64)this->fields.partyIcon;
          if ( !gameObject )
            goto LABEL_549;
          FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_549;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_549;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v88 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10008/*"PARTY_MEMBER_TXT"*/, 0LL);
          if ( !v88 )
            goto LABEL_549;
          UILabel__set_text(v88, (System_String_o *)gameObject, 0LL);
          v87 = 1;
        }
        if ( item->fields.isFavorite )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_549;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_549;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v89 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6295/*"FAVORITE_SERVANT"*/, 0LL);
          if ( !v89 )
            goto LABEL_549;
          UILabel__set_text(v89, (System_String_o *)gameObject, 0LL);
          v87 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
        {
          gameObject = (__int64)this->fields.lockImg;
          if ( !gameObject )
            goto LABEL_549;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_549;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_549;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_549;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v90 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8200/*"LOCK_SERVANT"*/, 0LL);
          if ( !v90 )
            goto LABEL_549;
          UILabel__set_text(v90, (System_String_o *)gameObject, 0LL);
          v87 = 1;
        }
        if ( CombineServantListViewItem__get_IsDispChoice(item, 0LL) )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_549;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_549;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v92 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3425/*"CHOICE_SERVANT"*/, 0LL);
          if ( !v92 )
            goto LABEL_549;
          UILabel__set_text(v92, (System_String_o *)gameObject, 0LL);
          v87 = 1;
        }
        if ( item->fields.isLimitCntTarget )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_549;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_549;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v93 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11231/*"SAME_SERVANT"*/, 0LL);
          if ( !v93 )
            goto LABEL_549;
          UILabel__set_text(v93, (System_String_o *)gameObject, 0LL);
          v87 = 1;
        }
        if ( item->fields.isHeroineSvt )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_549;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_549;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v94 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9154/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v94 )
            goto LABEL_549;
          UILabel__set_text(v94, (System_String_o *)gameObject, 0LL);
          v87 = 1;
        }
        if ( item->fields.isStatusUpSvt && !item->fields.isCanStUp )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_549;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_549;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v95 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9154/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v95 )
            goto LABEL_549;
          UILabel__set_text(v95, (System_String_o *)gameObject, 0LL);
          v87 = 1;
        }
        if ( item->fields.isEventJoin )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_549;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_549;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v96 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11330/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
          if ( !v96 )
            goto LABEL_549;
          UILabel__set_text(v96, (System_String_o *)gameObject, 0LL);
          v87 = 1;
        }
        if ( item->fields.isUseSupport )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_549;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_549;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v97 = *p_maskLabel;
          isParty = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v99 = &StringLiteral_12205/*"SUPPORT_MEMBER"*/;
          if ( isParty )
            v99 = &StringLiteral_10008/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v99, 0LL);
          if ( !v97 )
            goto LABEL_549;
          UILabel__set_text(v97, (System_String_o *)gameObject, 0LL);
          v87 = 1;
        }
        if ( item->fields.isPush )
        {
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_549;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_549;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v100 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11329/*"SELECT_PUSH"*/, 0LL);
          if ( !v100 )
            goto LABEL_549;
          UILabel__set_text(v100, (System_String_o *)gameObject, 0LL);
          v87 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, item, v91);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(item, 0LL);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        v103 = CanNotSelect;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v104 = UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
        if ( v103 )
        {
          if ( !v104 )
            break;
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_549;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_549;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_549;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_549;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          if ( item->fields.isMaxNextLv || item->fields.isBaseLvMax )
          {
            if ( item->fields.isCanStUp )
              goto LABEL_185;
            if ( CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0LL) )
              goto LABEL_296;
            v119 = *p_maskLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
            if ( !v119 )
              goto LABEL_549;
            UILabel__set_text(v119, (System_String_o *)gameObject, 0LL);
            if ( item->fields.type != 5 )
              break;
            v109 = *p_maskLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v110 = &StringLiteral_9157/*"NONSELECT_NPUP_BASE"*/;
          }
          else
          {
            if ( item->fields.isCanStUp )
            {
LABEL_185:
              if ( item->fields.isStatusUpSvt )
              {
                v105 = item->fields.rarity;
                if ( v105 <= 3 )
                {
                  if ( item->fields.isAtkUpMax || item->fields.isHpUpMax )
                  {
                    v120 = *p_maskLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9159/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                    if ( !v120 )
                      goto LABEL_549;
                    UILabel__set_text(v120, (System_String_o *)gameObject, 0LL);
                  }
                  if ( item->fields.isAtkSecondUpMax || item->fields.isHpSecondUpMax )
                  {
                    v121 = *p_maskLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9159/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                    if ( !v121 )
                      goto LABEL_549;
                    UILabel__set_text(v121, (System_String_o *)gameObject, 0LL);
                  }
                  if ( !item->fields.isNotSelectStatusUpAtk && !item->fields.isNotSelectStatusUpHp )
                    goto LABEL_296;
                  v109 = *p_maskLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v110 = &StringLiteral_9159/*"NONSELECT_UNDER_STATUS_MAX"*/;
                }
                else
                {
                  if ( v105 != 4 )
                    goto LABEL_296;
                  if ( item->fields.atkBase >= 1 )
                  {
                    if ( item->fields.isAtkSecondUpMax || item->fields.isNotSelectSecondStatusUpAtk )
                    {
                      v106 = *p_maskLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9159/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                      if ( !v106 )
                        goto LABEL_549;
                      UILabel__set_text(v106, (System_String_o *)gameObject, 0LL);
                    }
                    if ( !item->fields.isAtkUpMax )
                    {
                      v107 = *p_maskLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9156/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0LL);
                      if ( !v107 )
                        goto LABEL_549;
                      UILabel__set_text(v107, (System_String_o *)gameObject, 0LL);
                    }
                  }
                  if ( item->fields.hpBase < 1 )
                    goto LABEL_296;
                  if ( item->fields.isHpSecondUpMax || item->fields.isNotSelectSecondStatusUpHp )
                  {
                    v108 = *p_maskLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9159/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                    if ( !v108 )
                      goto LABEL_549;
                    UILabel__set_text(v108, (System_String_o *)gameObject, 0LL);
                  }
                  if ( item->fields.isHpUpMax )
                    goto LABEL_296;
                  v109 = *p_maskLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v110 = &StringLiteral_9156/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
                }
                goto LABEL_294;
              }
LABEL_296:
              v122 = item->fields.type;
              if ( v122 != 5 )
                goto LABEL_376;
              if ( !item->fields.isBaseSvt )
                break;
              v117 = *p_maskLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9212/*"NPUP_BASE"*/, 0LL);
              if ( !v117 )
                goto LABEL_549;
LABEL_301:
              UILabel__set_text(v117, (System_String_o *)gameObject, 0LL);
              break;
            }
            if ( item->fields.isFortification )
            {
              gameObject = (__int64)*p_maskLabel;
              if ( !*p_maskLabel )
                goto LABEL_549;
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_549;
              gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_549;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_549;
              UILabel__set_text((UILabel_o *)gameObject, item->fields.fortificationName, 0LL);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_549;
              UILabel__set_text((UILabel_o *)gameObject, item->fields.fortificationDetailName, 0LL);
              fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6381/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
              if ( !fortificationAppointmentLabel )
                goto LABEL_549;
              UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)gameObject, 0LL);
              gameObject = (__int64)this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_549;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL);
              gameObject = (__int64)this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_549;
              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL);
              if ( item->fields.type != 5 )
                break;
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_549;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_549;
              *(UnityEngine_Vector3_o *)&v125 = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)gameObject,
                                                  0LL);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_549;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              v128 = v125;
              v129 = v126;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_549;
              v273.fields.x = v128;
              v273.fields.y = fortificationInfoRootObjOffsetY;
              v273.fields.z = v129;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v273, 0LL);
              goto LABEL_296;
            }
            if ( (v87 & 1) != 0 )
              goto LABEL_296;
            v109 = *p_maskLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v110 = &StringLiteral_9154/*"NONSELECT_MATERIAL"*/;
          }
LABEL_294:
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v110, 0LL);
          if ( !v109 )
            goto LABEL_549;
          UILabel__set_text(v109, (System_String_o *)gameObject, 0LL);
          goto LABEL_296;
        }
        if ( v104 )
        {
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_549;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
            gameObject,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
          gameObject = (__int64)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_549;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          gameObject = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_549;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_549;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        v111 = (UnityEngine_Object_o *)this->fields.baseButton;
        cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
        if ( item->fields.isMaxSelect )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v111, 0LL, 0LL) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_549;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_549;
            v113 = 1;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
            goto LABEL_251;
          }
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v111, 0LL, 0LL) )
          {
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_549;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_549;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
              gameObject,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
          }
        }
        v113 = 0;
LABEL_251:
        if ( item->fields.type == 1 && CombineServantListViewItem__get_IsOrganization(item, 0LL) && !isSelectEnable )
        {
          if ( !(v113 & 1 | !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL)) )
            break;
        }
        else if ( !v113 )
        {
          break;
        }
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_549;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_549;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v117 = *p_maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9154/*"NONSELECT_MATERIAL"*/, 0LL);
        if ( !v117 )
          goto LABEL_549;
        goto LABEL_301;
      }
LABEL_97:
      v87 = 0;
      goto LABEL_98;
    case 0:
      gameObject = (__int64)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_549;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0LL);
      if ( item->fields.isParty )
      {
        gameObject = (__int64)this->fields.partyIcon;
        if ( !gameObject )
          goto LABEL_549;
        FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
      }
      if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
      {
        gameObject = (__int64)this->fields.lockImg;
        if ( !gameObject )
          goto LABEL_549;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_549;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      }
      CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL);
      v81 = (UnityEngine_Object_o *)this->fields.baseButton;
      v82 = CanNotBaseSelect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v83 = UnityEngine_Object__op_Inequality(v81, 0LL, 0LL);
      if ( v82 )
      {
        if ( !v83 )
          goto LABEL_371;
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_549;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
          gameObject,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
        gameObject = (__int64)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_549;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        gameObject = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_549;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_549;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        if ( item->fields.isLvMax )
        {
          if ( item->fields.isStatusUpSvt )
            goto LABEL_304;
          if ( !item->fields.isExpUpSvt )
          {
            v84 = *p_maskLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v85 = &StringLiteral_9152/*"NONSELECT_BASE_ALLMAX"*/;
            goto LABEL_307;
          }
        }
        else if ( item->fields.isStatusUpSvt )
        {
          goto LABEL_304;
        }
        if ( !item->fields.isExpUpSvt )
        {
          if ( !item->fields.isHeroineSvt )
          {
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_549;
            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            gameObject = (__int64)*p_maskLabel;
            if ( !*p_maskLabel )
              goto LABEL_549;
            v123 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_309;
          }
          v84 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v85 = &StringLiteral_11306/*"SELECT_CANNOT"*/;
LABEL_307:
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v85, 0LL);
          if ( !v84 )
            goto LABEL_549;
          v123 = (System_String_o *)gameObject;
          gameObject = (__int64)v84;
LABEL_309:
          UILabel__set_text((UILabel_o *)gameObject, v123, 0LL);
          gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
          if ( !gameObject )
            goto LABEL_549;
          CombineServantListViewNoticeTween__RemoveTarget(
            (CombineServantListViewNoticeTween_o *)gameObject,
            *p_statusTxtLb,
            0LL);
LABEL_371:
          if ( item->fields.isBaseSvt )
          {
            gameObject = (__int64)this->fields.removeImg;
            if ( !gameObject )
              goto LABEL_549;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_549;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          }
          break;
        }
LABEL_304:
        v84 = *p_maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v85 = &StringLiteral_9154/*"NONSELECT_MATERIAL"*/;
        goto LABEL_307;
      }
      if ( !v83 )
        goto LABEL_371;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_549;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_549;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_549;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_549;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)*p_maskLabel;
      if ( !*p_maskLabel )
        goto LABEL_549;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( item->fields.isCombineExpCampaignTarget )
      {
        if ( item->fields.isDispAtkStatusUpInfo
          && CombineServantListViewItem__get_IsAtkAdjustMax(item, 0LL)
          && !CombineServantListViewItem__get_IsSecondAtkAdjustMax(item, 0LL) )
        {
          v130 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v130,
            (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v131 = LocalizationManager__Get((System_String_o *)StringLiteral_8655/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v271.methodPointer = item->fields.combineExpCampaignValue;
          v132 = (Il2CppObject *)System_Single__ToString(*(float *)&v271.methodPointer, &v271);
          gameObject = (__int64)System_String__Format(v131, v132, 0LL);
          if ( !v130 )
            goto LABEL_549;
          items = v130->fields._items;
          v136 = Method_System_Collections_Generic_List_string__Add__;
          ++v130->fields._version;
          if ( !items )
            goto LABEL_549;
          size = v130->fields._size;
          v138 = gameObject;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v130,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
          }
          else
          {
            v139 = &items->obj.klass + size;
            v130->fields._size = size + 1;
            v139[4] = (Il2CppClass *)v138;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v139 + 4), v138, v133, v134);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3609/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v151 = v130->fields._items;
          v152 = Method_System_Collections_Generic_List_string__Add__;
          ++v130->fields._version;
          if ( !v151 )
            goto LABEL_549;
        }
        else
        {
          if ( !item->fields.isDispHpStatusUpInfo
            || !CombineServantListViewItem__get_IsHpAdjustMax(item, 0LL)
            || CombineServantListViewItem__get_IsSecondHpAdjustMax(item, 0LL) )
          {
            gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
            if ( !gameObject )
              goto LABEL_549;
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              *p_statusTxtLb,
              0LL);
            v114 = *p_statusTxtLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v115 = LocalizationManager__Get((System_String_o *)StringLiteral_8655/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
            *(float *)&v271.methodPointer = item->fields.combineExpCampaignValue;
            v116 = (Il2CppObject *)System_Single__ToString(*(float *)&v271.methodPointer, &v271);
            gameObject = (__int64)System_String__Format(v115, v116, 0LL);
            if ( !v114 )
              goto LABEL_549;
LABEL_243:
            UILabel__set_text(v114, (System_String_o *)gameObject, 0LL);
LABEL_368:
            gameObject = (__int64)*p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_549;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_549;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            goto LABEL_371;
          }
          v130 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v130,
            (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v140 = LocalizationManager__Get((System_String_o *)StringLiteral_8655/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v271.methodPointer = item->fields.combineExpCampaignValue;
          v141 = (Il2CppObject *)System_Single__ToString(*(float *)&v271.methodPointer, &v271);
          gameObject = (__int64)System_String__Format(v140, v141, 0LL);
          if ( !v130 )
            goto LABEL_549;
          v144 = v130->fields._items;
          v145 = Method_System_Collections_Generic_List_string__Add__;
          ++v130->fields._version;
          if ( !v144 )
            goto LABEL_549;
          v146 = v130->fields._size;
          v147 = gameObject;
          if ( (unsigned int)v146 >= v144->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v130,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
          }
          else
          {
            v148 = &v144->obj.klass + v146;
            v130->fields._size = v146 + 1;
            v148[4] = (Il2CppClass *)v147;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v148 + 4), v147, v142, v143);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3609/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v151 = v130->fields._items;
          v152 = Method_System_Collections_Generic_List_string__Add__;
          ++v130->fields._version;
          if ( !v151 )
            goto LABEL_549;
        }
        v153 = v130->fields._size;
        v154 = gameObject;
        if ( (unsigned int)v153 >= v151->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v130,
            (Il2CppObject *)gameObject,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
        }
        else
        {
          v155 = &v151->obj.klass + v153;
          v130->fields._size = v153 + 1;
          v155[4] = (Il2CppClass *)v154;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v155 + 4), v154, v149, v150);
        }
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_549;
        CombineServantListViewNoticeTween__AddTarget(
          (CombineServantListViewNoticeTween_o *)gameObject,
          *p_statusTxtLb,
          (System_Collections_Generic_List_string__o *)v130,
          0LL);
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_549;
        CombineServantListViewNoticeTween__SetTexts((CombineServantListViewNoticeTween_o *)gameObject, 0, 0LL);
        goto LABEL_368;
      }
      gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
      if ( !gameObject )
        goto LABEL_549;
      CombineServantListViewNoticeTween__RemoveTarget(
        (CombineServantListViewNoticeTween_o *)gameObject,
        *p_statusTxtLb,
        0LL);
      if ( item->fields.isDispAtkStatusUpInfo )
      {
        if ( !CombineServantListViewItem__get_IsAtkAdjustMax(item, 0LL)
          || CombineServantListViewItem__get_IsSecondAtkAdjustMax(item, 0LL) )
        {
          goto LABEL_371;
        }
      }
      else if ( !item->fields.isDispHpStatusUpInfo
             || !CombineServantListViewItem__get_IsHpAdjustMax(item, 0LL)
             || CombineServantListViewItem__get_IsSecondHpAdjustMax(item, 0LL) )
      {
        goto LABEL_371;
      }
      v114 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3609/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
      if ( !v114 )
        goto LABEL_549;
      goto LABEL_243;
  }
  v122 = item->fields.type;
LABEL_376:
  if ( v122 == 9 )
  {
    gameObject = (__int64)this->fields.limitCountIcon;
    if ( !gameObject )
      goto LABEL_549;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)gameObject,
      item->fields.currentLimitCnt,
      item->fields.maxLimitCnt,
      0LL);
    if ( item->fields.isParty )
    {
      gameObject = (__int64)this->fields.partyIcon;
      if ( !gameObject )
        goto LABEL_549;
      FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
    }
    if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
    {
      gameObject = (__int64)this->fields.lockImg;
      if ( !gameObject )
        goto LABEL_549;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_549;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    }
    v160 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL);
    v161 = (UnityEngine_Object_o *)this->fields.baseButton;
    v162 = v160;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v163 = UnityEngine_Object__op_Inequality(v161, 0LL, 0LL);
    if ( !v162 )
    {
LABEL_427:
      if ( !v163 )
        goto LABEL_444;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_549;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_549;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_549;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_549;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)*p_maskLabel;
      if ( !*p_maskLabel )
        goto LABEL_549;
      v166 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_434;
    }
    if ( !v163 )
      goto LABEL_444;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( item->fields.isHeroineSvt || item->fields.isEventJoin || item->fields.isIgnoreCombineLimitSpecial )
    {
      v164 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v165 = &StringLiteral_9154/*"NONSELECT_MATERIAL"*/;
    }
    else if ( item->fields.isLimitCntMax )
    {
      v164 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v165 = &StringLiteral_9153/*"NONSELECT_LIMITUP_BASE"*/;
    }
    else
    {
      if ( !item->fields.isSealCombineLimit )
        goto LABEL_444;
      v164 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v165 = &StringLiteral_11300/*"SEAL_COMBINE_LIMIT_THIRD"*/;
    }
LABEL_420:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v165, 0LL);
    if ( !v164 )
      goto LABEL_549;
    v166 = (System_String_o *)gameObject;
    gameObject = (__int64)v164;
LABEL_434:
    UILabel__set_text((UILabel_o *)gameObject, v166, 0LL);
    goto LABEL_444;
  }
  if ( v122 != 2 )
    goto LABEL_448;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_549;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0LL);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_549;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL) )
  {
    v156 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v156, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_549;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_549;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_549;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_549;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      isHeroineSvt = item->fields.isHeroineSvt;
      v158 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v159 = (System_String_o **)(isHeroineSvt ? &StringLiteral_9154/*"NONSELECT_MATERIAL"*/ : &StringLiteral_9153/*"NONSELECT_LIMITUP_BASE"*/);
      gameObject = (__int64)LocalizationManager__Get(*v159, 0LL);
      if ( !v158 )
        goto LABEL_549;
      UILabel__set_text(v158, (System_String_o *)gameObject, 0LL);
    }
    goto LABEL_444;
  }
  if ( !item->fields.isLvMax || !item->fields.isLimitUpItemNum )
  {
    v169 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v169, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_549;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_549;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_444;
  }
  isSealCombineLimit = item->fields.isSealCombineLimit;
  v168 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v163 = UnityEngine_Object__op_Inequality(v168, 0LL, 0LL);
  if ( isSealCombineLimit )
    goto LABEL_427;
  if ( v163 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)*p_maskLabel;
    if ( !*p_maskLabel )
      goto LABEL_549;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v164 = *p_statusTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v165 = &StringLiteral_8651/*"MSG_ABLED_LIMITUP"*/;
    goto LABEL_420;
  }
LABEL_444:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_448:
  v170 = item->fields.type;
  v267 = this;
  v264 = modeKind;
  v265 = &this->fields.maskLabel;
  v266 = &this->fields.statusTxtLb;
  if ( v170 != 3 )
    goto LABEL_524;
  CombineServantListViewItem__GetSkillInfo(item, &skillInfoList, 0LL);
  enableSkillUp = item->fields.enableSkillUp;
  v172 = (System_Text_StringBuilder_o *)sub_1B00F18(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v172, 0LL);
  v173 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_549;
  v174 = *(_QWORD *)&skillInfoList->max_length;
  if ( (int)v174 >= 1 )
  {
    v175 = 0LL;
    v176 = (unsigned int)(v174 - 1);
    v177 = (unsigned int)*(_QWORD *)&skillInfoList->max_length;
    while ( 1 )
    {
      if ( v175 >= v173->max_length )
        goto LABEL_923;
      v178 = v173->m_Items[v175];
      if ( v178 )
      {
        lv = v178->fields.lv;
        p_lv = &v178->fields.lv;
        v181 = *(p_lv - 1);
        if ( lv > 0 )
        {
          gameObject = (__int64)System_Int32__ToString((int32_t)p_lv, 0LL);
          goto LABEL_460;
        }
      }
      else
      {
        v181 = -1;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9160/*"NONSKILL_TXT"*/, 0LL);
LABEL_460:
      v182 = (Il2CppObject *)gameObject;
      if ( enableSkillUp )
      {
        v183 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v181,
                 (const MethodInfo_33A4D24 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v176 == v175 )
        {
          v184 = (System_String_o **)&StringLiteral_11959/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v183 )
            v184 = (System_String_o **)&StringLiteral_11961/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v184 = (System_String_o **)&StringLiteral_11960/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v183 )
            v184 = (System_String_o **)&StringLiteral_11962/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get(*v184, 0LL);
        if ( v172 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v172, (System_String_o *)gameObject, v182, 0LL);
          if ( v177 == ++v175 )
            goto LABEL_474;
          v173 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_549;
    }
  }
  if ( !v172 )
    goto LABEL_549;
LABEL_474:
  this = v267;
  skillLvLabel = v267->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v172->klass->vtable._3_ToString.method)(
                 v172,
                 v172->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !skillLvLabel )
    goto LABEL_549;
  UILabel__set_text(skillLvLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)v267->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_549;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  p_maskLabel = v265;
  p_statusTxtLb = v266;
  if ( !gameObject )
    goto LABEL_549;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  modeKind = v264;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)v267->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_549;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)v267->fields.lockImg;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL) )
  {
    v186 = (UnityEngine_Object_o *)v267->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v186, 0LL, 0LL) )
      goto LABEL_519;
    gameObject = (__int64)v267->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)v267->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v187 = *v265;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9158/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v187 )
      goto LABEL_549;
    UILabel__set_text(v187, (System_String_o *)gameObject, 0LL);
    if ( !item->fields.isHeroineSvt )
      goto LABEL_519;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_36489460(126, 0LL) )
      goto LABEL_519;
    v188 = *v265;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v189 = &StringLiteral_11306/*"SELECT_CANNOT"*/;
    goto LABEL_513;
  }
  isSkillUpItemNum = item->fields.isSkillUpItemNum;
  v191 = (UnityEngine_Object_o *)v267->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v192 = UnityEngine_Object__op_Inequality(v191, 0LL, 0LL);
  if ( !isSkillUpItemNum )
  {
    if ( v192 )
    {
      gameObject = (__int64)v267->fields.baseButton;
      if ( !gameObject )
        goto LABEL_549;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)v267->fields.baseButton;
      if ( !gameObject )
        goto LABEL_549;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_519;
  }
  if ( v192 )
  {
    gameObject = (__int64)v267->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)v267->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*v266;
    if ( !*v266 )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v188 = *v266;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v189 = &StringLiteral_8652/*"MSG_ABLED_SKILLUP"*/;
LABEL_513:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v189, 0LL);
    if ( !v188 )
      goto LABEL_549;
    UILabel__set_text(v188, (System_String_o *)gameObject, 0LL);
  }
LABEL_519:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)v267->fields.removeImg;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v170 = item->fields.type;
LABEL_524:
  if ( v170 != 11 )
    goto LABEL_619;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(item, 0LL);
  enableAppendSkillUp = item->fields.enableAppendSkillUp;
  v195 = AppendSkillData;
  v196 = (System_Text_StringBuilder_o *)sub_1B00F18(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v196, 0LL);
  if ( !v195 )
    goto LABEL_549;
  svtUseSkillIdList = v195->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_549;
  v198 = *(_QWORD *)&svtUseSkillIdList->max_length;
  if ( (int)v198 >= 1 )
  {
    v199 = 0LL;
    v200 = (unsigned int)(v198 - 1);
    v201 = (unsigned int)*(_QWORD *)&svtUseSkillIdList->max_length;
    while ( v199 < svtUseSkillIdList->max_length )
    {
      svtSkillLvList = v195->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_549;
      if ( v199 >= svtSkillLvList->max_length )
        break;
      v203 = (__int64)svtSkillLvList + 4 * v199;
      v204 = svtUseSkillIdList->m_Items[v199 + 1];
      v206 = *(_DWORD *)(v203 + 32);
      v205 = v203 + 32;
      if ( v206 <= 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9160/*"NONSKILL_TXT"*/, 0LL);
      }
      else
      {
        gameObject = (__int64)System_Int32__ToString(v205, 0LL);
      }
      v207 = (Il2CppObject *)gameObject;
      if ( enableAppendSkillUp )
      {
        v208 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v204,
                 (const MethodInfo_33A4D24 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v199 == v200 )
        {
          v209 = (System_String_o **)&StringLiteral_11959/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v208 )
            v209 = (System_String_o **)&StringLiteral_11961/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v209 = (System_String_o **)&StringLiteral_11960/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v208 )
            v209 = (System_String_o **)&StringLiteral_11962/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get(*v209, 0LL);
        if ( v196 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v196, (System_String_o *)gameObject, v207, 0LL);
          if ( ++v199 == v201 )
            goto LABEL_551;
          svtUseSkillIdList = v195->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_549;
    }
LABEL_923:
    sub_1B00F30(gameObject, switchInfoList);
  }
  if ( !v196 )
    goto LABEL_549;
LABEL_551:
  this = v267;
  v210 = v267->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v196->klass->vtable._3_ToString.method)(
                 v196,
                 v196->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v210 )
    goto LABEL_549;
  UILabel__set_text(v210, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)v267->fields.skillLvLabel;
  p_statusTxtLb = v266;
  p_maskLabel = v265;
  if ( !gameObject )
    goto LABEL_549;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_549;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  modeKind = v264;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)v267->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_549;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)v267->fields.lockImg;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  gameObject = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v211 = *v265;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9158/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v211 )
      goto LABEL_549;
    UILabel__set_text(v211, (System_String_o *)gameObject, 0LL);
    if ( item->fields.isEventJoin )
    {
      v212 = *v265;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10193/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v212 )
        goto LABEL_549;
      UILabel__set_text(v212, (System_String_o *)gameObject, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_589;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_36489460(126, 0LL) )
      goto LABEL_589;
    v213 = *v265;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v214 = &StringLiteral_11306/*"SELECT_CANNOT"*/;
    goto LABEL_587;
  }
  if ( !enableAppendSkillUp )
    goto LABEL_549;
  if ( enableAppendSkillUp->fields._size > 0 || item->fields.isAppendSkillOpenItemNum )
  {
    gameObject = (__int64)*v266;
    if ( !*v266 )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v213 = *v266;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v214 = &StringLiteral_8652/*"MSG_ABLED_SKILLUP"*/;
LABEL_587:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v214, 0LL);
    if ( !v213 )
      goto LABEL_549;
    UILabel__set_text(v213, (System_String_o *)gameObject, 0LL);
  }
LABEL_589:
  v215 = (UnityEngine_Object_o *)v267->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v215, 0LL, 0LL) )
  {
    gameObject = (__int64)v267->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)v267->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  coinInfo = (UnityEngine_Object_o *)v267->fields.coinInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(coinInfo, 0LL, 0LL) )
  {
    switchInfoComp = (UnityEngine_Object_o *)v267->fields.switchInfoComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchInfoComp, 0LL, 0LL) )
    {
      switchInfoList = (System_String_o *)v267->fields.switchInfoList;
      if ( switchInfoList )
      {
        gameObject = (__int64)v267->fields.switchInfoComp;
        if ( !gameObject )
          goto LABEL_549;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)gameObject, (UIWidget_array *)switchInfoList, 0LL);
        gameObject = (__int64)v267->fields.coinInfo;
        if ( !gameObject )
          goto LABEL_549;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        coinNumLabel = v267->fields.coinNumLabel;
        gameObject = CombineServantListViewItem__get_SkillOpenItemNum(item, 0LL);
        if ( (gameObject & 0x80000000) != 0 )
        {
          switchInfoList = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(item, 0LL);
          v222 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum, v219, v220, v221);
          gameObject = (__int64)System_String__Format((System_String_o *)StringLiteral_24569/*"{0:#,0}"*/, v222, 0LL);
          switchInfoList = (System_String_o *)gameObject;
        }
        if ( !coinNumLabel )
          goto LABEL_549;
        UILabel__set_text(coinNumLabel, switchInfoList, 0LL);
        gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, 0LL);
        coinIcon = v267->fields.coinIcon;
        if ( (int)gameObject < 1 )
        {
          if ( !coinIcon )
            goto LABEL_549;
          gameObject = (__int64)coinIcon->fields.iconSprite;
          if ( !gameObject )
            goto LABEL_549;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_549;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, 0LL);
          if ( !coinIcon )
            goto LABEL_549;
          ItemIconComponent__SetItem(coinIcon, gameObject, -1, 0LL);
        }
      }
    }
  }
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)v267->fields.removeImg;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_619:
  v224 = item->fields.type;
  if ( v224 != 4 )
    goto LABEL_666;
  gameObject = (__int64)this->fields.npIconLabel;
  if ( !gameObject )
    goto LABEL_549;
  v225 = SHIDWORD(v271.invoker_method) <= 0 ? -1 : LODWORD(v271.invoker_method);
  UIIconLabel__Set_37024000((UIIconLabel_o *)gameObject, 33, v225, SHIDWORD(v271.methodPointer), 0, 0LL, 0, 0, 0, 0LL);
  gameObject = (__int64)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_549;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_549;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL) )
  {
    v226 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v226, 0LL, 0LL) )
      goto LABEL_661;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v227 = item->fields.isHeroineSvt;
    v228 = *p_maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v229 = (System_String_o **)(v227 ? &StringLiteral_9154/*"NONSELECT_MATERIAL"*/ : &StringLiteral_9157/*"NONSELECT_NPUP_BASE"*/);
    gameObject = (__int64)LocalizationManager__Get(*v229, 0LL);
    if ( !v228 )
      goto LABEL_549;
    goto LABEL_660;
  }
  if ( !item->fields.isSameSvt && !item->fields.isBaseSvt )
  {
    v238 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v238, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_549;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_549;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    goto LABEL_661;
  }
  v230 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v230, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    if ( item->fields.isSameSvt )
    {
      gameObject = (__int64)*p_statusTxtLb;
      if ( !*p_statusTxtLb )
        goto LABEL_549;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_549;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v228 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8654/*"MSG_ABLED_TDUP"*/, 0LL);
      if ( !v228 )
        goto LABEL_549;
LABEL_660:
      UILabel__set_text(v228, (System_String_o *)gameObject, 0LL);
    }
  }
LABEL_661:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v224 = item->fields.type;
LABEL_666:
  if ( v224 != 6 )
    goto LABEL_743;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_549;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)gameObject,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0LL);
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_549;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL) )
  {
    if ( item->fields.isLvMax && item->fields.isLimitCntMax )
    {
      isLvExceedItemNum = item->fields.isLvExceedItemNum;
      v234 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v235 = UnityEngine_Object__op_Inequality(v234, 0LL, 0LL);
      if ( isLvExceedItemNum )
      {
        if ( !v235 )
          goto LABEL_739;
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
                gameObject = (__int64)*p_maskLabel;
                if ( *p_maskLabel )
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
                      v232 = *p_statusTxtLb;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8651/*"MSG_ABLED_LIMITUP"*/, 0LL);
                      if ( v232 )
                        goto LABEL_738;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_549:
        sub_1B00F28(gameObject, switchInfoList);
      }
      if ( !v235 )
        goto LABEL_739;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_549;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_549;
    }
    else
    {
      v236 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v236, 0LL, 0LL) )
        goto LABEL_739;
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_549;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
        gameObject,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
      gameObject = (__int64)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_549;
    }
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_739;
  }
  v231 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v231, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( item->fields.isHeroineSvt )
    {
      v232 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9154/*"NONSELECT_MATERIAL"*/, 0LL);
      if ( !v232 )
        goto LABEL_549;
    }
    else
    {
      isEventJoin = item->fields.isEventJoin;
      v232 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isEventJoin )
      {
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11330/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
        if ( !v232 )
          goto LABEL_549;
      }
      else
      {
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9201/*"NO_SELECT_LVEXCEED"*/, 0LL);
        if ( !v232 )
          goto LABEL_549;
      }
    }
LABEL_738:
    UILabel__set_text(v232, (System_String_o *)gameObject, 0LL);
  }
LABEL_739:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_743:
  v239 = item->fields.type;
  if ( v239 != 10 && v239 != 7 )
    goto LABEL_806;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_549;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.subIconLabel;
  if ( !gameObject )
    goto LABEL_549;
  UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0LL);
  v241 = item->fields.type;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  gameObject = CombineServantListViewManager__GetSortKind(v241, v240);
  v242 = this->fields.servantFaceIcon;
  if ( !v242 )
    goto LABEL_549;
  if ( (_DWORD)gameObject == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *, __int64, Il2CppMethodPointer))v242->klass->vtable._4_ParameterChange.method)(
      this->fields.servantFaceIcon,
      1LL,
      v242->klass->vtable._5_UpdateAlpha.methodPtr);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_549;
    ServantFaceIconComponent__ResetIconLabelPos((ServantFaceIconComponent_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_549;
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
      goto LABEL_549;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
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
      goto LABEL_794;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( item->fields.type == 10 && item->fields.isCommandCardExceedMax )
    {
      v247 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9151/*"NONSEELECT_STATUSUP_MAX"*/, 0LL);
      if ( !v247 )
        goto LABEL_549;
      UILabel__set_text(v247, (System_String_o *)gameObject, 0LL);
    }
    if ( item->fields.isEventJoin )
    {
      v248 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11330/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v248 )
        goto LABEL_549;
      UILabel__set_text(v248, (System_String_o *)gameObject, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_794;
    v249 = *p_maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11306/*"SELECT_CANNOT"*/, 0LL);
    if ( !v249 )
      goto LABEL_549;
    v250 = (System_String_o *)gameObject;
    gameObject = (__int64)v249;
    goto LABEL_793;
  }
  if ( v246 )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)*p_maskLabel;
    if ( !*p_maskLabel )
      goto LABEL_549;
    v250 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_793:
    UILabel__set_text((UILabel_o *)gameObject, v250, 0LL);
  }
LABEL_794:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  v251 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v251, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v252 = this->fields.svtCommandCardList;
    gameObject = CombineServantListViewItem__get_UserSvtId(item, 0LL);
    if ( !v252 )
      goto LABEL_549;
    ServantCommandCardListComponent__Set(v252, gameObject, 1, 1, 0LL);
  }
  v239 = item->fields.type;
LABEL_806:
  if ( v239 != 8 )
    goto LABEL_863;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)this->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_549;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)this->fields.lockImg;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL) )
  {
    v253 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v253, 0LL, 0LL) )
      goto LABEL_859;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( item->fields.isHeroineSvt )
    {
      v254 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v255 = &StringLiteral_9154/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      v261 = item->fields.isEventJoin;
      v254 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v261 )
        v255 = &StringLiteral_11330/*"SELECT_SERVANT_EVENT_JOIN"*/;
      else
        v255 = &StringLiteral_9200/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
    }
    v259 = (System_String_o *)*v255;
    goto LABEL_857;
  }
  if ( !item->fields.isFriendshipRankMax )
  {
    v260 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v260, 0LL, 0LL) )
      goto LABEL_859;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
LABEL_850:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    goto LABEL_859;
  }
  isFriendshipExceedItemNum = item->fields.isFriendshipExceedItemNum;
  v257 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v258 = UnityEngine_Object__op_Inequality(v257, 0LL, 0LL);
  if ( !isFriendshipExceedItemNum )
  {
    if ( !v258 )
      goto LABEL_859;
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_549;
    goto LABEL_850;
  }
  if ( !v258 )
    goto LABEL_859;
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_549;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
    gameObject,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
  gameObject = (__int64)this->fields.baseButton;
  if ( !gameObject )
    goto LABEL_549;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
    gameObject,
    0LL,
    1LL,
    *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  gameObject = (__int64)*p_maskSprite;
  if ( !*p_maskSprite )
    goto LABEL_549;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_549;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)*p_maskLabel;
  if ( !*p_maskLabel )
    goto LABEL_549;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (__int64)*p_statusTxtLb;
  if ( !*p_statusTxtLb )
    goto LABEL_549;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_549;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v254 = *p_statusTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v259 = (System_String_o *)StringLiteral_8650/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/;
LABEL_857:
  gameObject = (__int64)LocalizationManager__Get(v259, 0LL);
  if ( !v254 )
    goto LABEL_549;
  UILabel__set_text(v254, (System_String_o *)gameObject, 0LL);
LABEL_859:
  if ( item->fields.isBaseSvt )
  {
    gameObject = (__int64)this->fields.removeImg;
    if ( !gameObject )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_863:
  if ( (unsigned int)(modeKind - 1) > 1 )
  {
    if ( modeKind != 3 )
      return;
    if ( item->fields.isEventJoin )
    {
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_549;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_549;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v262 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11330/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v262 )
        goto LABEL_549;
    }
    else
    {
      if ( !item->fields.isCanNotLock )
      {
        gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
        if ( !gameObject )
          goto LABEL_549;
        if ( !UserServantEntity__IsLeave((UserServantEntity_o *)gameObject, 0LL) )
        {
          gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
          if ( !gameObject )
            goto LABEL_549;
          if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)gameObject, 0LL) )
          {
            gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
            if ( !gameObject )
              goto LABEL_549;
            if ( !UserServantEntity__IsStatusUp((UserServantEntity_o *)gameObject, 0LL) )
            {
              gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
              if ( !gameObject )
                goto LABEL_549;
              if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)gameObject, 0LL) )
              {
                gameObject = (__int64)*p_maskSprite;
                if ( !*p_maskSprite )
                  goto LABEL_549;
                gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_549;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                gameObject = (__int64)*p_maskLabel;
                if ( !*p_maskLabel )
                  goto LABEL_549;
                v263 = (System_String_o *)StringLiteral_1/*""*/;
                goto LABEL_901;
              }
            }
          }
        }
      }
      gameObject = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_549;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_549;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v262 = *p_maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8199/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
      if ( !v262 )
        goto LABEL_549;
    }
    v263 = (System_String_o *)gameObject;
    gameObject = (__int64)v262;
LABEL_901:
    UILabel__set_text((UILabel_o *)gameObject, v263, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_549;
LABEL_902:
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    return;
  }
  if ( !item->fields.isHeroineSvt )
    goto LABEL_868;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_36489460(126, 0LL) )
  {
LABEL_868:
    gameObject = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_549;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_549;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isCanNotLock, 0LL);
    if ( item->fields.isCanNotLock )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      switchInfoList = LocalizationManager__Get((System_String_o *)StringLiteral_8199/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
    }
    else
    {
      switchInfoList = (System_String_o *)StringLiteral_1/*""*/;
    }
    gameObject = (__int64)*p_maskLabel;
    if ( !*p_maskLabel )
      goto LABEL_549;
    UILabel__set_text((UILabel_o *)gameObject, switchInfoList, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_549;
    goto LABEL_902;
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

  if ( (byte_48E608C & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, item);
    byte_48E608C = 1;
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
    sub_1B00F28(v7, v6);
  }
}