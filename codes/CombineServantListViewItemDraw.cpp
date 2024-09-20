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
  if ( (byte_4A5EB8C & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_9262/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_1B885B0(&StringLiteral_9257/*"NONSELECT_MATERIAL"*/);
    sub_1B885B0(&StringLiteral_9260/*"NONSELECT_NPUP_BASE"*/);
    sub_1B885B0(&StringLiteral_9258/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    byte_4A5EB8C = 1;
  }
  if ( item )
  {
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
    type = item->fields.type;
    v9 = IsSelect;
    if ( type > 0xB )
    {
      v11 = 0;
    }
    else
    {
      if ( ((1 << type) & 0xFDD) != 0 )
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
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9262/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
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
          maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9262/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
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
      v27 = &StringLiteral_9262/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_78:
      maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v27, 0LL);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)maskSprite, 0LL);
        goto LABEL_80;
      }
LABEL_92:
      sub_1B8880C(maskSprite, v16);
    }
    maskLabel = this->fields.maskLabel;
    v20 = LocalizationManager_TypeInfo;
    v22 = LocalizationManager_TypeInfo->_2.cctor_finished;
LABEL_75:
    if ( !v22 )
      j_il2cpp_runtime_class_init_0(v20);
    v27 = &StringLiteral_9257/*"NONSELECT_MATERIAL"*/;
    goto LABEL_78;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, 0LL) )
  {
    v19 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9258/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
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
      v27 = &StringLiteral_9260/*"NONSELECT_NPUP_BASE"*/;
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
  System_String_o *switchInfoList; // x1
  __int64 gameObject; // x0
  int32_t type; // w19
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  IconLabelInfo_o *iconLabelInfo1; // x2
  UIIconLabel_o *subIconLabel; // x23
  int32_t rarity; // w24
  int32_t v19; // w25
  UILabel_o **p_statusTxtLb; // x20
  struct UILabel_o **p_maskLabel; // x19
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
  char v37; // w26
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
  int32_t v90; // w2
  int32_t v91; // w3
  struct System_Object_array *items; // x8
  _QWORD *v93; // x9
  __int64 size; // x10
  __int64 v95; // x1
  Il2CppClass **v96; // x0
  System_String_o *v97; // x23
  Il2CppObject *v98; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  struct System_Object_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  __int64 v104; // x1
  Il2CppClass **v105; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  __int64 v111; // x1
  Il2CppClass **v112; // x0
  struct UILabel_o **v113; // x19
  UnityEngine_Object_o *v114; // x22
  _BOOL4 isHeroineSvt; // w19
  UILabel_o *v116; // x22
  System_String_o **v117; // x8
  bool v118; // w0
  UnityEngine_Object_o *v119; // x23
  bool v120; // w22
  bool v121; // w0
  UILabel_o *v122; // x22
  __int64 *v123; // x8
  System_String_o *v124; // x1
  _BOOL4 isSealCombineLimit; // w19
  UnityEngine_Object_o *v126; // x22
  UnityEngine_Object_o *v127; // x22
  int32_t v128; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  System_Text_StringBuilder_o *v130; // x22
  SkillInfo_array *v131; // x8
  __int64 v132; // x9
  unsigned __int64 v133; // x26
  __int64 v134; // x27
  __int64 v135; // x20
  SkillInfo_o *v136; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v139; // w25
  Il2CppObject *v140; // x24
  bool v141; // w25
  System_String_o **v142; // x8
  UILabel_o *skillLvLabel; // x23
  UnityEngine_Object_o *v144; // x22
  UILabel_o *v145; // x22
  UILabel_o *v146; // x22
  __int64 *v147; // x8
  _BOOL4 isSkillUpItemNum; // w19
  UnityEngine_Object_o *v149; // x22
  bool v150; // w0
  SvtUseSkillData_o *AppendSkillData; // x0
  struct System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v153; // x24
  System_Text_StringBuilder_o *v154; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v156; // x9
  unsigned __int64 v157; // x27
  __int64 v158; // x20
  __int64 v159; // x28
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v161; // x0
  int32_t v162; // w26
  int32_t v163; // w0
  int v164; // t1
  Il2CppObject *v165; // x25
  bool v166; // w26
  System_String_o **v167; // x8
  UILabel_o *v168; // x24
  UILabel_o *v169; // x22
  UILabel_o *v170; // x22
  UILabel_o *v171; // x22
  __int64 *v172; // x8
  UnityEngine_Object_o *v173; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  __int64 v177; // x2
  __int64 v178; // x3
  __int64 v179; // x4
  Il2CppObject *v180; // x0
  ItemIconComponent_o *coinIcon; // x22
  int32_t v182; // w8
  int32_t v183; // w2
  UnityEngine_Object_o *v184; // x22
  _BOOL4 v185; // w19
  UILabel_o *v186; // x22
  System_String_o **v187; // x8
  UnityEngine_Object_o *v188; // x22
  UILabel_o *v189; // x22
  UnityEngine_Object_o *v190; // x22
  UILabel_o *v191; // x22
  _BOOL4 isLvExceedItemNum; // w19
  UnityEngine_Object_o *v193; // x22
  bool v194; // w0
  UnityEngine_Object_o *v195; // x22
  UILabel_o **v196; // x9
  _BOOL4 isEventJoin; // w19
  UILabel_o *v198; // x22
  UnityEngine_Object_o *v199; // x22
  int32_t v200; // w8
  const MethodInfo *v201; // x1
  int32_t v202; // w22
  struct ServantFaceIconComponent_o *v203; // x8
  bool v204; // w0
  UnityEngine_Object_o *v205; // x23
  bool v206; // w22
  bool v207; // w0
  UILabel_o *v208; // x22
  UILabel_o *v209; // x22
  struct UILabel_o *v210; // x22
  System_String_o *v211; // x1
  UnityEngine_Object_o *v212; // x22
  ServantCommandCardListComponent_o *v213; // x22
  UnityEngine_Object_o *v214; // x22
  UILabel_o *v215; // x22
  _BOOL4 isFriendshipExceedItemNum; // w19
  UnityEngine_Object_o *v217; // x22
  bool v218; // w0
  UnityEngine_Object_o *v219; // x22
  UILabel_o **v220; // x9
  _BOOL4 v221; // w19
  UILabel_o *v222; // x22
  struct UILabel_o *v223; // x19
  System_String_o *v224; // x1
  int32_t v225; // [xsp+1Ch] [xbp-C4h]
  struct UILabel_o **v226; // [xsp+20h] [xbp-C0h]
  CombineServantListViewItemDraw_o *v227; // [xsp+30h] [xbp-B0h]
  struct UILabel_o **v228; // [xsp+38h] [xbp-A8h]
  struct UISprite_o **p_maskSprite; // [xsp+40h] [xbp-A0h]
  int32_t SkillOpenItemNum; // [xsp+4Ch] [xbp-94h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-90h] BYREF
  MethodInfo v232; // [xsp+58h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v233; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v234; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EB8B & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&CombineServantListViewManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&StringLiteral_12153/*"SKILL_LVDISP_TXT"*/);
    sub_1B885B0(&StringLiteral_10308/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/);
    sub_1B885B0(&StringLiteral_9262/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_1B885B0(&StringLiteral_6446/*"FORTIFICATION_APPOINTMENT"*/);
    sub_1B885B0(&StringLiteral_3649/*"COMBINE_CAN_STATUS_UP_INFO"*/);
    sub_1B885B0(&StringLiteral_8756/*"MSG_CAMPAIGN_COMBINE_EXP"*/);
    sub_1B885B0(&StringLiteral_12151/*"SKILL_LVDISP_ENABLE_TXT"*/);
    sub_1B885B0(&StringLiteral_9257/*"NONSELECT_MATERIAL"*/);
    sub_1B885B0(&StringLiteral_22936/*"ribbon_noblephantasmup_01"*/);
    sub_1B885B0(&StringLiteral_9256/*"NONSELECT_LIMITUP_BASE"*/);
    sub_1B885B0(&StringLiteral_10123/*"PARTY_MEMBER_TXT"*/);
    sub_1B885B0(&StringLiteral_9260/*"NONSELECT_NPUP_BASE"*/);
    sub_1B885B0(&StringLiteral_12409/*"SUPPORT_MEMBER"*/);
    sub_1B885B0(&StringLiteral_8752/*"MSG_ABLED_LIMITUP"*/);
    sub_1B885B0(&StringLiteral_11519/*"SELECT_PUSH"*/);
    sub_1B885B0(&StringLiteral_11496/*"SELECT_CANNOT"*/);
    sub_1B885B0(&StringLiteral_9315/*"NPUP_BASE"*/);
    sub_1B885B0(&StringLiteral_12150/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/);
    sub_1B885B0(&StringLiteral_11520/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1B885B0(&StringLiteral_9303/*"NO_SELECT_FRIENDSHIP_EXCEED"*/);
    sub_1B885B0(&StringLiteral_11420/*"SAME_SERVANT"*/);
    sub_1B885B0(&StringLiteral_8751/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/);
    sub_1B885B0(&StringLiteral_9258/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    sub_1B885B0(&StringLiteral_24933/*"{0:#,0}"*/);
    sub_1B885B0(&StringLiteral_12152/*"SKILL_LVDISP_SINGLE_TXT"*/);
    sub_1B885B0(&StringLiteral_8753/*"MSG_ABLED_SKILLUP"*/);
    sub_1B885B0(&StringLiteral_9259/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/);
    sub_1B885B0(&StringLiteral_9263/*"NONSKILL_TXT"*/);
    sub_1B885B0(&StringLiteral_8290/*"LOCKMODE_SELECTED_SERVANT"*/);
    sub_1B885B0(&StringLiteral_6360/*"FAVORITE_SERVANT"*/);
    sub_1B885B0(&StringLiteral_3465/*"CHOICE_SERVANT"*/);
    sub_1B885B0(&StringLiteral_11016/*"RECOMMEND_SUPPORT_MEMBER"*/);
    sub_1B885B0(&StringLiteral_8755/*"MSG_ABLED_TDUP"*/);
    sub_1B885B0(&StringLiteral_11490/*"SEAL_COMBINE_LIMIT_THIRD"*/);
    sub_1B885B0(&StringLiteral_9255/*"NONSELECT_BASE_ALLMAX"*/);
    sub_1B885B0(&StringLiteral_9304/*"NO_SELECT_LVEXCEED"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_9261/*"NONSELECT_SKILLUP_BASE"*/);
    sub_1B885B0(&StringLiteral_11518/*"SELECT_PROTECTED_EVENT_SVT"*/);
    sub_1B885B0(&StringLiteral_8291/*"LOCK_SERVANT"*/);
    sub_1B885B0(&StringLiteral_9254/*"NONSEELECT_STATUSUP_MAX"*/);
    byte_4A5EB8B = 1;
  }
  v232.invoker_method = 0LL;
  skillInfoList = 0LL;
  v232.methodPointer = 0LL;
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
    ServantFaceIconComponent__Set_38220260(
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
    ServantFaceIconComponent__Set_38220260(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0LL, 0LL);
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
  v19 = *(_DWORD *)(gameObject + 296);
  gameObject = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, 0LL);
  if ( !gameObject || !subIconLabel )
    goto LABEL_947;
  UIIconLabel__Set_38235604(subIconLabel, 36, rarity, v19, 0, 0LL, 0, 0, *(_DWORD *)(gameObject + 256), 0LL);
LABEL_22:
  CombineServantListViewItem__GetNpInfo(
    item,
    (int32_t *)&v232.invoker_method + 1,
    (int32_t *)&v232.invoker_method,
    (int32_t *)&v232.methodPointer + 1,
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
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = CombineServantListViewItem__get_IsDispChoice(item, 0LL);
  if ( !v23 )
    goto LABEL_947;
  UnityEngine_GameObject__SetActive(v23, gameObject & 1, 0LL);
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
      v26 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v26, (System_String_o *)StringLiteral_22936/*"ribbon_noblephantasmup_01"*/, 0LL);
      v28 = item->fields.type;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      if ( CombineServantListViewManager__GetSortKind(v28, v27) == 1 )
      {
        gameObject = (__int64)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_947;
        v233.fields.x = 0.65;
        v233.fields.y = 1.0;
        v233.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v233, 0LL);
      }
    }
  }
  v29 = item->fields.type;
  v228 = &this->fields.maskLabel;
  switch ( v29 )
  {
    case 5:
      gameObject = (__int64)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_947;
      v36 = SHIDWORD(v232.invoker_method) <= 0 ? -1 : LODWORD(v232.invoker_method);
      UIIconLabel__Set_38235604(
        (UIIconLabel_o *)gameObject,
        33,
        v36,
        SHIDWORD(v232.methodPointer),
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
        v72 = *p_maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11518/*"SELECT_PROTECTED_EVENT_SVT"*/, 0LL);
        if ( !v72 )
          goto LABEL_947;
        UILabel__set_text(v72, (System_String_o *)gameObject, 0LL);
        v37 = 1;
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
          v38 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10123/*"PARTY_MEMBER_TXT"*/, 0LL);
          if ( !v38 )
            goto LABEL_947;
          UILabel__set_text(v38, (System_String_o *)gameObject, 0LL);
          v37 = 1;
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
          v39 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6360/*"FAVORITE_SERVANT"*/, 0LL);
          if ( !v39 )
            goto LABEL_947;
          UILabel__set_text(v39, (System_String_o *)gameObject, 0LL);
          v37 = 1;
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
          v40 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8291/*"LOCK_SERVANT"*/, 0LL);
          if ( !v40 )
            goto LABEL_947;
          UILabel__set_text(v40, (System_String_o *)gameObject, 0LL);
          v37 = 1;
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
          v42 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3465/*"CHOICE_SERVANT"*/, 0LL);
          if ( !v42 )
            goto LABEL_947;
          UILabel__set_text(v42, (System_String_o *)gameObject, 0LL);
          v37 = 1;
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
          v43 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11420/*"SAME_SERVANT"*/, 0LL);
          if ( !v43 )
            goto LABEL_947;
          UILabel__set_text(v43, (System_String_o *)gameObject, 0LL);
          v37 = 1;
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
          v44 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9257/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v44 )
            goto LABEL_947;
          UILabel__set_text(v44, (System_String_o *)gameObject, 0LL);
          v37 = 1;
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
          v45 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9257/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v45 )
            goto LABEL_947;
          UILabel__set_text(v45, (System_String_o *)gameObject, 0LL);
          v37 = 1;
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
          v46 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11520/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
          if ( !v46 )
            goto LABEL_947;
          UILabel__set_text(v46, (System_String_o *)gameObject, 0LL);
          v37 = 1;
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
          v47 = *p_maskLabel;
          isParty = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v49 = &StringLiteral_12409/*"SUPPORT_MEMBER"*/;
          if ( isParty )
            v49 = &StringLiteral_10123/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v49, 0LL);
          if ( !v47 )
            goto LABEL_947;
          UILabel__set_text(v47, (System_String_o *)gameObject, 0LL);
          p_maskLabel = &this->fields.maskLabel;
          v37 = 1;
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
          v50 = *p_maskLabel;
          v51 = item->fields.isParty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v52 = &StringLiteral_11016/*"RECOMMEND_SUPPORT_MEMBER"*/;
          if ( v51 )
            v52 = &StringLiteral_10123/*"PARTY_MEMBER_TXT"*/;
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v52, 0LL);
          if ( !v50 )
            goto LABEL_947;
          UILabel__set_text(v50, (System_String_o *)gameObject, 0LL);
          p_maskLabel = &this->fields.maskLabel;
          if ( !item->fields.isParty )
          {
            gameObject = (__int64)*v228;
            if ( !*v228 )
              goto LABEL_947;
            UILabel__SetCondensedScale((UILabel_o *)gameObject, 106, 0LL);
          }
          v37 = 1;
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
          v53 = *p_maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11519/*"SELECT_PUSH"*/, 0LL);
          if ( !v53 )
            goto LABEL_947;
          UILabel__set_text(v53, (System_String_o *)gameObject, 0LL);
          gameObject = (__int64)*p_maskLabel;
          if ( !*p_maskLabel )
            goto LABEL_947;
          v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !byte_4A55CE6 )
          {
            sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE6 = 1;
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
                v73 = *v228;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9258/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
                if ( !v73 )
                  goto LABEL_947;
                UILabel__set_text(v73, (System_String_o *)gameObject, 0LL);
                if ( item->fields.type != 5 )
                  break;
                v63 = *v228;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v64 = &StringLiteral_9260/*"NONSELECT_NPUP_BASE"*/;
LABEL_312:
                v76 = (System_String_o *)*v64;
LABEL_313:
                gameObject = (__int64)LocalizationManager__Get(v76, 0LL);
                if ( !v63 )
                  goto LABEL_947;
                UILabel__set_text(v63, (System_String_o *)gameObject, 0LL);
              }
LABEL_315:
              v77 = item->fields.type;
              if ( v77 != 5 )
                goto LABEL_398;
              if ( item->fields.isBaseSvt )
              {
                v78 = *v228;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9315/*"NPUP_BASE"*/, 0LL);
                if ( !v78 )
                  goto LABEL_947;
                UILabel__set_text(v78, (System_String_o *)gameObject, 0LL);
                gameObject = (__int64)*v228;
                if ( !*v228 )
                  goto LABEL_947;
                v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !byte_4A55CE6 )
                {
                  sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                  byte_4A55CE6 = 1;
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
              gameObject = (__int64)*v228;
              if ( !*v228 )
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
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6446/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
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
              *(UnityEngine_Vector3_o *)&v82 = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)gameObject,
                                                 0LL);
              gameObject = (__int64)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_947;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              v85 = v82;
              v86 = v83;
              gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_947;
              v234.fields.x = v85;
              v234.fields.y = fortificationInfoRootObjOffsetY;
              v234.fields.z = v86;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v234, 0LL);
              goto LABEL_315;
            }
            if ( (v37 & 1) == 0 )
            {
              v63 = *v228;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v76 = (System_String_o *)StringLiteral_9257/*"NONSELECT_MATERIAL"*/;
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
                v74 = *v228;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9262/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v74 )
                  goto LABEL_947;
                UILabel__set_text(v74, (System_String_o *)gameObject, 0LL);
              }
              if ( item->fields.isAtkSecondUpMax || item->fields.isHpSecondUpMax )
              {
                v75 = *v228;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9262/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v75 )
                  goto LABEL_947;
                UILabel__set_text(v75, (System_String_o *)gameObject, 0LL);
              }
              if ( !item->fields.isNotSelectStatusUpAtk && !item->fields.isNotSelectStatusUpHp )
                goto LABEL_315;
              v63 = *v228;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v64 = &StringLiteral_9262/*"NONSELECT_UNDER_STATUS_MAX"*/;
            }
            else
            {
              if ( v59 != 4 )
                goto LABEL_315;
              if ( item->fields.atkBase >= 1 )
              {
                if ( item->fields.isAtkSecondUpMax || item->fields.isNotSelectSecondStatusUpAtk )
                {
                  v60 = *v228;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9262/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                  if ( !v60 )
                    goto LABEL_947;
                  UILabel__set_text(v60, (System_String_o *)gameObject, 0LL);
                }
                if ( !item->fields.isAtkUpMax )
                {
                  v61 = *v228;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9259/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0LL);
                  if ( !v61 )
                    goto LABEL_947;
                  UILabel__set_text(v61, (System_String_o *)gameObject, 0LL);
                }
              }
              if ( item->fields.hpBase < 1 )
                goto LABEL_315;
              if ( item->fields.isHpSecondUpMax || item->fields.isNotSelectSecondStatusUpHp )
              {
                v62 = *v228;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9262/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                if ( !v62 )
                  goto LABEL_947;
                UILabel__set_text(v62, (System_String_o *)gameObject, 0LL);
              }
              if ( item->fields.isHpUpMax )
                goto LABEL_315;
              v63 = *v228;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v64 = &StringLiteral_9259/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
            }
            goto LABEL_312;
          }
          goto LABEL_315;
        }
        if ( v58 )
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
              goto LABEL_947;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
              gameObject,
              1LL,
              *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
            gameObject = (__int64)this->fields.baseButton;
            if ( !gameObject )
              goto LABEL_947;
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
              goto LABEL_947;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_947;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            v71 = *v228;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9257/*"NONSELECT_MATERIAL"*/, 0LL);
            if ( !v71 )
              goto LABEL_947;
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
        v67 = 0;
        goto LABEL_269;
      }
LABEL_100:
      v37 = 0;
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
            v34 = *v228;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v35 = &StringLiteral_9255/*"NONSELECT_BASE_ALLMAX"*/;
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
            gameObject = (__int64)*v228;
            if ( !*v228 )
              goto LABEL_947;
            v80 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_331;
          }
          v34 = *v228;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v35 = &StringLiteral_11496/*"SELECT_CANNOT"*/;
LABEL_329:
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v35, 0LL);
          if ( !v34 )
            goto LABEL_947;
          v80 = (System_String_o *)gameObject;
          gameObject = (__int64)v34;
LABEL_331:
          UILabel__set_text((UILabel_o *)gameObject, v80, 0LL);
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
        v34 = *v228;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v35 = &StringLiteral_9257/*"NONSELECT_MATERIAL"*/;
        goto LABEL_329;
      }
      if ( !v33 )
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
      gameObject = (__int64)*v228;
      if ( !*v228 )
        goto LABEL_947;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( item->fields.isCombineExpCampaignTarget )
      {
        if ( item->fields.isDispAtkStatusUpInfo
          && CombineServantListViewItem__get_IsAtkAdjustMax(item, 0LL)
          && !CombineServantListViewItem__get_IsSecondAtkAdjustMax(item, 0LL) )
        {
          v87 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v87,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v88 = LocalizationManager__Get((System_String_o *)StringLiteral_8756/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v232.methodPointer = item->fields.combineExpCampaignValue;
          v89 = (Il2CppObject *)System_Single__ToString(*(float *)&v232.methodPointer, &v232);
          gameObject = (__int64)System_String__Format(v88, v89, 0LL);
          if ( !v87 )
            goto LABEL_947;
          items = v87->fields._items;
          v93 = Method_System_Collections_Generic_List_string__Add__;
          ++v87->fields._version;
          if ( !items )
            goto LABEL_947;
          size = v87->fields._size;
          v95 = gameObject;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v87,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
          }
          else
          {
            v96 = &items->obj.klass + size;
            v87->fields._size = size + 1;
            v96[4] = (Il2CppClass *)v95;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v96 + 4), v95, v90, v91);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v108 = v87->fields._items;
          v109 = Method_System_Collections_Generic_List_string__Add__;
          ++v87->fields._version;
          if ( !v108 )
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
            v68 = *p_statusTxtLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v69 = LocalizationManager__Get((System_String_o *)StringLiteral_8756/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
            *(float *)&v232.methodPointer = item->fields.combineExpCampaignValue;
            v70 = (Il2CppObject *)System_Single__ToString(*(float *)&v232.methodPointer, &v232);
            gameObject = (__int64)System_String__Format(v69, v70, 0LL);
            if ( !v68 )
              goto LABEL_947;
LABEL_261:
            UILabel__set_text(v68, (System_String_o *)gameObject, 0LL);
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
          v87 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v87,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v97 = LocalizationManager__Get((System_String_o *)StringLiteral_8756/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v232.methodPointer = item->fields.combineExpCampaignValue;
          v98 = (Il2CppObject *)System_Single__ToString(*(float *)&v232.methodPointer, &v232);
          gameObject = (__int64)System_String__Format(v97, v98, 0LL);
          if ( !v87 )
            goto LABEL_947;
          v101 = v87->fields._items;
          v102 = Method_System_Collections_Generic_List_string__Add__;
          ++v87->fields._version;
          if ( !v101 )
            goto LABEL_947;
          v103 = v87->fields._size;
          v104 = gameObject;
          if ( (unsigned int)v103 >= v101->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v87,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
          }
          else
          {
            v105 = &v101->obj.klass + v103;
            v87->fields._size = v103 + 1;
            v105[4] = (Il2CppClass *)v104;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v105 + 4), v104, v99, v100);
          }
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
          v108 = v87->fields._items;
          v109 = Method_System_Collections_Generic_List_string__Add__;
          ++v87->fields._version;
          if ( !v108 )
            goto LABEL_947;
        }
        v110 = v87->fields._size;
        v111 = gameObject;
        if ( (unsigned int)v110 >= v108->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v87,
            (Il2CppObject *)gameObject,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
        }
        else
        {
          v112 = &v108->obj.klass + v110;
          v87->fields._size = v110 + 1;
          v112[4] = (Il2CppClass *)v111;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v112 + 4), v111, v106, v107);
        }
        gameObject = (__int64)item->fields._NoticeTween_k__BackingField;
        if ( !gameObject )
          goto LABEL_947;
        CombineServantListViewNoticeTween__AddTarget(
          (CombineServantListViewNoticeTween_o *)gameObject,
          *p_statusTxtLb,
          (System_Collections_Generic_List_string__o *)v87,
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
      v68 = *p_statusTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
      if ( !v68 )
        goto LABEL_947;
      goto LABEL_261;
  }
  v77 = item->fields.type;
LABEL_398:
  if ( v77 == 9 )
  {
    gameObject = (__int64)this->fields.limitCountIcon;
    if ( !gameObject )
      goto LABEL_947;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)gameObject,
      item->fields.currentLimitCnt,
      item->fields.maxLimitCnt,
      0LL);
    v113 = &this->fields.maskLabel;
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
    v118 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL);
    v119 = (UnityEngine_Object_o *)this->fields.baseButton;
    v120 = v118;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v121 = UnityEngine_Object__op_Inequality(v119, 0LL, 0LL);
    if ( !v120 )
      goto LABEL_450;
    if ( !v121 )
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
      v122 = *v228;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v123 = &StringLiteral_9257/*"NONSELECT_MATERIAL"*/;
    }
    else if ( item->fields.isLimitCntMax )
    {
      v122 = *v228;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v123 = &StringLiteral_9256/*"NONSELECT_LIMITUP_BASE"*/;
    }
    else
    {
      if ( !item->fields.isSealCombineLimit )
        goto LABEL_467;
      v122 = *v228;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v123 = &StringLiteral_11490/*"SEAL_COMBINE_LIMIT_THIRD"*/;
    }
LABEL_442:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v123, 0LL);
    if ( !v122 )
      goto LABEL_947;
    v124 = (System_String_o *)gameObject;
    gameObject = (__int64)v122;
LABEL_457:
    UILabel__set_text((UILabel_o *)gameObject, v124, 0LL);
    goto LABEL_467;
  }
  v113 = &this->fields.maskLabel;
  if ( v77 != 2 )
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
    v114 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v114, 0LL, 0LL) )
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
      v116 = *v228;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v117 = (System_String_o **)(isHeroineSvt ? &StringLiteral_9257/*"NONSELECT_MATERIAL"*/ : &StringLiteral_9256/*"NONSELECT_LIMITUP_BASE"*/);
      gameObject = (__int64)LocalizationManager__Get(*v117, 0LL);
      if ( !v116 )
        goto LABEL_947;
      UILabel__set_text(v116, (System_String_o *)gameObject, 0LL);
      v113 = &this->fields.maskLabel;
    }
    goto LABEL_467;
  }
  if ( !item->fields.isLvMax || !item->fields.isLimitUpItemNum )
  {
    v127 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v127, 0LL, 0LL) )
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
  v126 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v121 = UnityEngine_Object__op_Inequality(v126, 0LL, 0LL);
  if ( isSealCombineLimit )
  {
    v113 = &this->fields.maskLabel;
LABEL_450:
    if ( !v121 )
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
    gameObject = (__int64)*v113;
    if ( !*v113 )
      goto LABEL_947;
    v124 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_457;
  }
  v113 = &this->fields.maskLabel;
  if ( v121 )
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
    gameObject = (__int64)*v228;
    if ( !*v228 )
      goto LABEL_947;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v122 = *p_statusTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v123 = &StringLiteral_8752/*"MSG_ABLED_LIMITUP"*/;
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
  v128 = item->fields.type;
  v227 = this;
  v225 = modeKind;
  v226 = &this->fields.statusTxtLb;
  if ( v128 != 3 )
    goto LABEL_547;
  CombineServantListViewItem__GetSkillInfo(item, &skillInfoList, 0LL);
  enableSkillUp = item->fields.enableSkillUp;
  v130 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v130, 0LL);
  v131 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_947;
  v132 = *(_QWORD *)&skillInfoList->max_length;
  if ( (int)v132 >= 1 )
  {
    v133 = 0LL;
    v134 = (unsigned int)(v132 - 1);
    v135 = (unsigned int)*(_QWORD *)&skillInfoList->max_length;
    while ( 1 )
    {
      if ( v133 >= v131->max_length )
        goto LABEL_948;
      v136 = v131->m_Items[v133];
      if ( v136 )
      {
        lv = v136->fields.lv;
        p_lv = &v136->fields.lv;
        v139 = *(p_lv - 1);
        if ( lv > 0 )
        {
          gameObject = (__int64)System_Int32__ToString((int32_t)p_lv, 0LL);
          goto LABEL_483;
        }
      }
      else
      {
        v139 = -1;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NONSKILL_TXT"*/, 0LL);
LABEL_483:
      v140 = (Il2CppObject *)gameObject;
      if ( enableSkillUp )
      {
        v141 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v139,
                 (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v134 == v133 )
        {
          v142 = (System_String_o **)&StringLiteral_12150/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v141 )
            v142 = (System_String_o **)&StringLiteral_12152/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v142 = (System_String_o **)&StringLiteral_12151/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v141 )
            v142 = (System_String_o **)&StringLiteral_12153/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get(*v142, 0LL);
        if ( v130 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v130, (System_String_o *)gameObject, v140, 0LL);
          if ( v135 == ++v133 )
            goto LABEL_497;
          v131 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_947;
    }
  }
  if ( !v130 )
    goto LABEL_947;
LABEL_497:
  skillLvLabel = this->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v130->klass->vtable._3_ToString.method)(
                 v130,
                 v130->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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
  modeKind = v225;
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
    v144 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v144, 0LL, 0LL) )
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
    v145 = *v228;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9261/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v145 )
      goto LABEL_947;
    UILabel__set_text(v145, (System_String_o *)gameObject, 0LL);
    if ( !item->fields.isHeroineSvt )
      goto LABEL_542;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_37688364(126, 0LL) )
      goto LABEL_542;
    v146 = *v228;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v147 = &StringLiteral_11496/*"SELECT_CANNOT"*/;
    goto LABEL_536;
  }
  isSkillUpItemNum = item->fields.isSkillUpItemNum;
  v149 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v150 = UnityEngine_Object__op_Inequality(v149, 0LL, 0LL);
  if ( !isSkillUpItemNum )
  {
    if ( v150 )
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
  if ( v150 )
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
    gameObject = (__int64)*v226;
    if ( !*v226 )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v146 = *v226;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v147 = &StringLiteral_8753/*"MSG_ABLED_SKILLUP"*/;
LABEL_536:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v147, 0LL);
    if ( !v146 )
      goto LABEL_947;
    UILabel__set_text(v146, (System_String_o *)gameObject, 0LL);
  }
LABEL_542:
  v113 = &this->fields.maskLabel;
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
  v128 = item->fields.type;
LABEL_547:
  if ( v128 != 11 )
    goto LABEL_642;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(item, 0LL);
  enableAppendSkillUp = item->fields.enableAppendSkillUp;
  v153 = AppendSkillData;
  v154 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v154, 0LL);
  if ( !v153 )
    goto LABEL_947;
  svtUseSkillIdList = v153->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_947;
  v156 = *(_QWORD *)&svtUseSkillIdList->max_length;
  if ( (int)v156 >= 1 )
  {
    v157 = 0LL;
    v158 = (unsigned int)(v156 - 1);
    v159 = (unsigned int)*(_QWORD *)&svtUseSkillIdList->max_length;
    while ( v157 < svtUseSkillIdList->max_length )
    {
      svtSkillLvList = v153->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_947;
      if ( v157 >= svtSkillLvList->max_length )
        break;
      v161 = (__int64)svtSkillLvList + 4 * v157;
      v162 = svtUseSkillIdList->m_Items[v157 + 1];
      v164 = *(_DWORD *)(v161 + 32);
      v163 = v161 + 32;
      if ( v164 <= 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NONSKILL_TXT"*/, 0LL);
      }
      else
      {
        gameObject = (__int64)System_Int32__ToString(v163, 0LL);
      }
      v165 = (Il2CppObject *)gameObject;
      if ( enableAppendSkillUp )
      {
        v166 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v162,
                 (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v157 == v158 )
        {
          v167 = (System_String_o **)&StringLiteral_12150/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
          if ( !v166 )
            v167 = (System_String_o **)&StringLiteral_12152/*"SKILL_LVDISP_SINGLE_TXT"*/;
        }
        else
        {
          v167 = (System_String_o **)&StringLiteral_12151/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( !v166 )
            v167 = (System_String_o **)&StringLiteral_12153/*"SKILL_LVDISP_TXT"*/;
        }
        gameObject = (__int64)LocalizationManager__Get(*v167, 0LL);
        if ( v154 )
        {
          gameObject = (__int64)System_Text_StringBuilder__AppendFormat(v154, (System_String_o *)gameObject, v165, 0LL);
          if ( ++v157 == v159 )
            goto LABEL_574;
          svtUseSkillIdList = v153->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_947;
    }
LABEL_948:
    sub_1B88814(gameObject, switchInfoList);
  }
  if ( !v154 )
    goto LABEL_947;
LABEL_574:
  this = v227;
  v168 = v227->fields.skillLvLabel;
  gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v154->klass->vtable._3_ToString.method)(
                 v154,
                 v154->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v168 )
    goto LABEL_947;
  UILabel__set_text(v168, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)v227->fields.skillLvLabel;
  p_statusTxtLb = v226;
  if ( !gameObject )
    goto LABEL_947;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_947;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  modeKind = v225;
  if ( item->fields.isParty )
  {
    gameObject = (__int64)v227->fields.partyIcon;
    if ( !gameObject )
      goto LABEL_947;
    FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
  }
  if ( CombineServantListViewItem__get_IsDispLock(item, 0LL) )
  {
    gameObject = (__int64)v227->fields.lockImg;
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
    v169 = *v228;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9261/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v169 )
      goto LABEL_947;
    UILabel__set_text(v169, (System_String_o *)gameObject, 0LL);
    if ( item->fields.isEventJoin )
    {
      v170 = *v228;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10308/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v170 )
        goto LABEL_947;
      UILabel__set_text(v170, (System_String_o *)gameObject, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_612;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_37688364(126, 0LL) )
      goto LABEL_612;
    v171 = *v228;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v172 = &StringLiteral_11496/*"SELECT_CANNOT"*/;
    goto LABEL_610;
  }
  if ( !enableAppendSkillUp )
    goto LABEL_947;
  if ( enableAppendSkillUp->fields._size > 0 || item->fields.isAppendSkillOpenItemNum )
  {
    gameObject = (__int64)*v226;
    if ( !*v226 )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v171 = *v226;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v172 = &StringLiteral_8753/*"MSG_ABLED_SKILLUP"*/;
LABEL_610:
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v172, 0LL);
    if ( !v171 )
      goto LABEL_947;
    UILabel__set_text(v171, (System_String_o *)gameObject, 0LL);
  }
LABEL_612:
  v173 = (UnityEngine_Object_o *)v227->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v113 = v228;
  if ( UnityEngine_Object__op_Inequality(v173, 0LL, 0LL) )
  {
    gameObject = (__int64)v227->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)gameObject + 392LL))(
      gameObject,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 400LL));
    gameObject = (__int64)v227->fields.baseButton;
    if ( !gameObject )
      goto LABEL_947;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  coinInfo = (UnityEngine_Object_o *)v227->fields.coinInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(coinInfo, 0LL, 0LL) )
  {
    switchInfoComp = (UnityEngine_Object_o *)v227->fields.switchInfoComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchInfoComp, 0LL, 0LL) )
    {
      switchInfoList = (System_String_o *)v227->fields.switchInfoList;
      if ( switchInfoList )
      {
        gameObject = (__int64)v227->fields.switchInfoComp;
        if ( !gameObject )
          goto LABEL_947;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)gameObject, (UIWidget_array *)switchInfoList, 0LL);
        gameObject = (__int64)v227->fields.coinInfo;
        if ( !gameObject )
          goto LABEL_947;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        coinNumLabel = v227->fields.coinNumLabel;
        gameObject = CombineServantListViewItem__get_SkillOpenItemNum(item, 0LL);
        if ( (gameObject & 0x80000000) != 0 )
        {
          switchInfoList = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(item, 0LL);
          v180 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum, v177, v178, v179);
          gameObject = (__int64)System_String__Format((System_String_o *)StringLiteral_24933/*"{0:#,0}"*/, v180, 0LL);
          switchInfoList = (System_String_o *)gameObject;
        }
        if ( !coinNumLabel )
          goto LABEL_947;
        UILabel__set_text(coinNumLabel, switchInfoList, 0LL);
        gameObject = CombineServantListViewItem__get_SkillOpenItemId(item, 0LL);
        coinIcon = v227->fields.coinIcon;
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
    gameObject = (__int64)v227->fields.removeImg;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
LABEL_642:
  v182 = item->fields.type;
  if ( v182 == 4 )
  {
    gameObject = (__int64)this->fields.npIconLabel;
    if ( !gameObject )
      goto LABEL_947;
    v183 = SHIDWORD(v232.invoker_method) <= 0 ? -1 : LODWORD(v232.invoker_method);
    UIIconLabel__Set_38235604((UIIconLabel_o *)gameObject, 33, v183, SHIDWORD(v232.methodPointer), 0, 0LL, 0, 0, 0, 0LL);
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
      v184 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v184, 0LL, 0LL) )
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
        v185 = item->fields.isHeroineSvt;
        v186 = *v228;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v187 = (System_String_o **)(v185 ? &StringLiteral_9257/*"NONSELECT_MATERIAL"*/ : &StringLiteral_9260/*"NONSELECT_NPUP_BASE"*/);
        gameObject = (__int64)LocalizationManager__Get(*v187, 0LL);
        if ( !v186 )
          goto LABEL_947;
        UILabel__set_text(v186, (System_String_o *)gameObject, 0LL);
        v113 = v228;
      }
    }
    else if ( item->fields.isSameSvt || item->fields.isBaseSvt )
    {
      v188 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v188, 0LL, 0LL) )
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
          v189 = *p_statusTxtLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8755/*"MSG_ABLED_TDUP"*/, 0LL);
          if ( !v189 )
            goto LABEL_947;
          UILabel__set_text(v189, (System_String_o *)gameObject, 0LL);
        }
      }
    }
    else
    {
      v199 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v199, 0LL, 0LL) )
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
    v182 = item->fields.type;
  }
  if ( v182 != 6 )
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
      v193 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v194 = UnityEngine_Object__op_Inequality(v193, 0LL, 0LL);
      if ( isLvExceedItemNum )
      {
        v113 = v228;
        if ( !v194 )
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
                gameObject = (__int64)*v228;
                if ( *v228 )
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
                      v191 = *p_statusTxtLb;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8752/*"MSG_ABLED_LIMITUP"*/, 0LL);
                      if ( v191 )
                        goto LABEL_727;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_947:
        sub_1B8880C(gameObject, switchInfoList);
      }
      v113 = v228;
      if ( !v194 )
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
      v195 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v195, 0LL, 0LL) )
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
  v190 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v190, 0LL, 0LL) )
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
      v191 = *v113;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9257/*"NONSELECT_MATERIAL"*/, 0LL);
      if ( !v191 )
        goto LABEL_947;
LABEL_727:
      UILabel__set_text(v191, (System_String_o *)gameObject, 0LL);
      goto LABEL_762;
    }
    v196 = v113;
    isEventJoin = item->fields.isEventJoin;
    v198 = *v196;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isEventJoin )
    {
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11520/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v198 )
        goto LABEL_947;
    }
    else
    {
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9304/*"NO_SELECT_LVEXCEED"*/, 0LL);
      if ( !v198 )
        goto LABEL_947;
    }
    UILabel__set_text(v198, (System_String_o *)gameObject, 0LL);
    v113 = v228;
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
  v200 = item->fields.type;
  if ( v200 != 10 && v200 != 7 )
    goto LABEL_829;
  gameObject = (__int64)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_947;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.subIconLabel;
  if ( !gameObject )
    goto LABEL_947;
  UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0LL);
  v202 = item->fields.type;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  gameObject = CombineServantListViewManager__GetSortKind(v202, v201);
  v203 = this->fields.servantFaceIcon;
  if ( !v203 )
    goto LABEL_947;
  if ( (_DWORD)gameObject == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *, __int64, Il2CppMethodPointer))v203->klass->vtable._4_ParameterChange.method)(
      this->fields.servantFaceIcon,
      1LL,
      v203->klass->vtable._5_UpdateAlpha.methodPtr);
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
  v204 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, 0LL);
  v205 = (UnityEngine_Object_o *)this->fields.baseButton;
  v206 = v204;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v207 = UnityEngine_Object__op_Inequality(v205, 0LL, 0LL);
  if ( v206 )
  {
    if ( !v207 )
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
      v208 = *v113;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9254/*"NONSEELECT_STATUSUP_MAX"*/, 0LL);
      if ( !v208 )
        goto LABEL_947;
      UILabel__set_text(v208, (System_String_o *)gameObject, 0LL);
    }
    if ( item->fields.isEventJoin )
    {
      v209 = *v113;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11520/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v209 )
        goto LABEL_947;
      UILabel__set_text(v209, (System_String_o *)gameObject, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_817;
    v210 = *v113;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11496/*"SELECT_CANNOT"*/, 0LL);
    if ( !v210 )
      goto LABEL_947;
    v211 = (System_String_o *)gameObject;
    gameObject = (__int64)v210;
    goto LABEL_816;
  }
  if ( v207 )
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
    gameObject = (__int64)*v113;
    if ( !*v113 )
      goto LABEL_947;
    v211 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_816:
    UILabel__set_text((UILabel_o *)gameObject, v211, 0LL);
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
  v212 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v212, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v213 = this->fields.svtCommandCardList;
    gameObject = CombineServantListViewItem__get_UserSvtId(item, 0LL);
    if ( !v213 )
      goto LABEL_947;
    ServantCommandCardListComponent__Set(v213, gameObject, 1, 1, 0LL);
  }
  v200 = item->fields.type;
LABEL_829:
  if ( v200 != 8 )
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
    v214 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v214, 0LL, 0LL) )
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
        v215 = *v113;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9257/*"NONSELECT_MATERIAL"*/, 0LL);
        if ( !v215 )
          goto LABEL_947;
LABEL_865:
        UILabel__set_text(v215, (System_String_o *)gameObject, 0LL);
        goto LABEL_883;
      }
      v220 = v113;
      v221 = item->fields.isEventJoin;
      v222 = *v220;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v221 )
      {
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11520/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
        if ( !v222 )
          goto LABEL_947;
      }
      else
      {
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9303/*"NO_SELECT_FRIENDSHIP_EXCEED"*/, 0LL);
        if ( !v222 )
          goto LABEL_947;
      }
      UILabel__set_text(v222, (System_String_o *)gameObject, 0LL);
      v113 = v228;
    }
    goto LABEL_883;
  }
  if ( !item->fields.isFriendshipRankMax )
  {
    v219 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v219, 0LL, 0LL) )
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
  v217 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v218 = UnityEngine_Object__op_Inequality(v217, 0LL, 0LL);
  if ( isFriendshipExceedItemNum )
  {
    v113 = v228;
    if ( !v218 )
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
    gameObject = (__int64)*v228;
    if ( !*v228 )
      goto LABEL_947;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_947;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_947;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v215 = *p_statusTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8751/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, 0LL);
    if ( !v215 )
      goto LABEL_947;
    goto LABEL_865;
  }
  v113 = v228;
  if ( v218 )
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
      v223 = *v113;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11520/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v223 )
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
                gameObject = (__int64)*v113;
                if ( !*v113 )
                  goto LABEL_947;
                v224 = (System_String_o *)StringLiteral_1/*""*/;
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
      v223 = *v113;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8290/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
      if ( !v223 )
        goto LABEL_947;
    }
    v224 = (System_String_o *)gameObject;
    gameObject = (__int64)v223;
LABEL_925:
    UILabel__set_text((UILabel_o *)gameObject, v224, 0LL);
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
  if ( !TutorialFlag__Get_37688364(126, 0LL) )
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
      switchInfoList = LocalizationManager__Get((System_String_o *)StringLiteral_8290/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
    }
    else
    {
      switchInfoList = (System_String_o *)StringLiteral_1/*""*/;
    }
    gameObject = (__int64)*v113;
    if ( !*v113 )
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

  if ( (byte_4A5EB8D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EB8D = 1;
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
    sub_1B8880C(v7, v6);
  }
}