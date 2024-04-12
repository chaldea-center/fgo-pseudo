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
  const MethodInfo *v8; // x1
  unsigned int type; // w8
  _BOOL4 v10; // w23
  bool CanNotBaseSelect; // w0
  bool v12; // w22
  ServantEntity_o *servantEntity; // x0
  _BOOL4 v14; // w25
  int v15; // w24
  UnityEngine_Object_o *baseButton; // x23
  const MethodInfo *v17; // x2
  UILabel_o *v18; // x21
  LocalizationManager_c *v19; // x0
  UILabel_o *maskLabel; // x21
  UnityEngine_Object_o *v21; // x22
  int v22; // w22
  int32_t v23; // w8
  __int64 *v24; // x8
  int32_t atkBase; // w8
  UILabel_o *v26; // x21
  UILabel_o *v27; // x21

  v4 = isSelectEnable;
  if ( (byte_42B2CCE & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_9378/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_B52984(&StringLiteral_9373/*"NONSELECT_MATERIAL"*/);
    sub_B52984(&StringLiteral_9376/*"NONSELECT_NPUP_BASE"*/);
    sub_B52984(&StringLiteral_9374/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    byte_42B2CCE = 1;
  }
  if ( item )
  {
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
    type = item->fields.type;
    v10 = IsSelect;
    if ( type > 0xB )
    {
      v12 = 0;
    }
    else
    {
      if ( ((1 << type) & 0xFDD) != 0 )
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, v8);
      else
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotSelect(item, v8);
      v12 = CanNotBaseSelect;
    }
    servantEntity = item->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_107;
    v14 = !ServantEntity__get_IsOrganization(servantEntity, 0LL);
    v15 = !v10;
  }
  else
  {
    v12 = 0;
    v15 = 1;
    v14 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !v12 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      servantEntity = (ServantEntity_o *)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_107;
      ((void (__fastcall *)(ServantEntity_o *, __int64, void *))servantEntity->klass->vtable._5_CreatePrimaryKey.method)(
        servantEntity,
        1LL,
        servantEntity->klass[1]._1.image);
      servantEntity = (ServantEntity_o *)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_107;
      ((void (__fastcall *)(ServantEntity_o *, _QWORD, __int64, void *))servantEntity->klass[1]._1.events)(
        servantEntity,
        0LL,
        1LL,
        servantEntity->klass[1]._1.properties);
      servantEntity = (ServantEntity_o *)this->fields.maskSprite;
      if ( !servantEntity )
        goto LABEL_107;
      servantEntity = (ServantEntity_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)servantEntity,
                                           0LL);
      if ( !servantEntity )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
    }
    if ( !item )
      goto LABEL_93;
    v21 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( item->fields.isMaxSelect )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
      {
        servantEntity = (ServantEntity_o *)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_107;
        ((void (__fastcall *)(ServantEntity_o *, __int64, void *))servantEntity->klass->vtable._5_CreatePrimaryKey.method)(
          servantEntity,
          1LL,
          servantEntity->klass[1]._1.image);
        servantEntity = (ServantEntity_o *)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_107;
        v22 = 1;
        ((void (__fastcall *)(ServantEntity_o *, _QWORD, __int64, void *))servantEntity->klass[1]._1.events)(
          servantEntity,
          0LL,
          1LL,
          servantEntity->klass[1]._1.properties);
LABEL_56:
        v23 = item->fields.type;
        if ( v23 == 5 )
        {
          if ( !(v22 & 1 | item->fields.isMaxNextLv) )
            goto LABEL_93;
        }
        else if ( v23 == 1 )
        {
          if ( ((v15 & ~(v14 || v4) | v22) & 1) == 0 )
            goto LABEL_93;
        }
        else if ( !v22 )
        {
          goto LABEL_93;
        }
        servantEntity = (ServantEntity_o *)this->fields.maskSprite;
        if ( !servantEntity )
          goto LABEL_107;
        servantEntity = (ServantEntity_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)servantEntity,
                                             0LL);
        if ( !servantEntity )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
        maskLabel = this->fields.maskLabel;
        v19 = LocalizationManager_TypeInfo;
        if ( item->fields.type == 5 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
          {
LABEL_69:
            v24 = &StringLiteral_9376/*"NONSELECT_NPUP_BASE"*/;
            goto LABEL_91;
          }
LABEL_67:
          if ( !v19->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v19);
          goto LABEL_69;
        }
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
          goto LABEL_90;
        goto LABEL_88;
      }
    }
    else
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
      {
        servantEntity = (ServantEntity_o *)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_107;
        ((void (__fastcall *)(ServantEntity_o *, __int64, void *))servantEntity->klass->vtable._5_CreatePrimaryKey.method)(
          servantEntity,
          1LL,
          servantEntity->klass[1]._1.image);
        servantEntity = (ServantEntity_o *)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_107;
        ((void (__fastcall *)(ServantEntity_o *, _QWORD, __int64, void *))servantEntity->klass[1]._1.events)(
          servantEntity,
          0LL,
          1LL,
          servantEntity->klass[1]._1.properties);
      }
    }
    v22 = 0;
    goto LABEL_56;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    goto LABEL_93;
  servantEntity = (ServantEntity_o *)this->fields.baseButton;
  if ( !servantEntity )
    goto LABEL_107;
  ((void (__fastcall *)(ServantEntity_o *, __int64, void *))servantEntity->klass->vtable._5_CreatePrimaryKey.method)(
    servantEntity,
    1LL,
    servantEntity->klass[1]._1.image);
  servantEntity = (ServantEntity_o *)this->fields.baseButton;
  if ( !servantEntity )
    goto LABEL_107;
  ((void (__fastcall *)(ServantEntity_o *, _QWORD, __int64, void *))servantEntity->klass[1]._1.events)(
    servantEntity,
    0LL,
    1LL,
    servantEntity->klass[1]._1.properties);
  servantEntity = (ServantEntity_o *)this->fields.maskSprite;
  if ( !servantEntity )
    goto LABEL_107;
  servantEntity = (ServantEntity_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)servantEntity,
                                       0LL);
  if ( !servantEntity )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  if ( !item )
    goto LABEL_107;
  if ( !item->fields.isMaxNextLv )
  {
    if ( !item->fields.isStatusUpSvt )
      goto LABEL_93;
    if ( item->fields.isCanStUp )
    {
      atkBase = item->fields.atkBase;
      if ( item->fields.rarity == 4 )
      {
        if ( atkBase >= 1 && item->fields.isNotSelectSecondStatusUpAtk )
        {
          v26 = this->fields.maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9378/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v26 )
            goto LABEL_107;
          UILabel__set_text(v26, (System_String_o *)servantEntity, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectSecondStatusUpHp )
          goto LABEL_93;
      }
      else
      {
        if ( atkBase >= 1 && item->fields.isNotSelectStatusUpAtk )
        {
          v27 = this->fields.maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9378/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v27 )
            goto LABEL_107;
          UILabel__set_text(v27, (System_String_o *)servantEntity, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectStatusUpHp )
          goto LABEL_93;
      }
      maskLabel = this->fields.maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = &StringLiteral_9378/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_91:
      servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)*v24, 0LL);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, (System_String_o *)servantEntity, 0LL);
        goto LABEL_93;
      }
LABEL_107:
      sub_B52A5C(servantEntity, v8);
    }
    maskLabel = this->fields.maskLabel;
    v19 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
    {
LABEL_90:
      v24 = &StringLiteral_9373/*"NONSELECT_MATERIAL"*/;
      goto LABEL_91;
    }
LABEL_88:
    if ( !v19->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v19);
    goto LABEL_90;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, v8) )
  {
    v18 = this->fields.maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9374/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
    if ( !v18 )
      goto LABEL_107;
    UILabel__set_text(v18, (System_String_o *)servantEntity, 0LL);
    if ( item->fields.type == 5 )
    {
      v19 = LocalizationManager_TypeInfo;
      maskLabel = this->fields.maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_69;
      goto LABEL_67;
    }
  }
LABEL_93:
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
  UILabel_o *gameObject; // x0
  int32_t type; // w19
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  IconLabelInfo_o *iconLabelInfo1; // x2
  UIIconLabel_o *subIconLabel; // x23
  int32_t rarity; // w24
  const MethodInfo *v19; // x1
  int32_t m12_low; // w25
  const MethodInfo *v21; // x4
  UILabel_o **p_statusTxtLb; // x20
  struct UISprite_o **p_maskSprite; // x28
  struct UILabel_o **p_maskLabel; // x25
  UnityEngine_Object_o *pushImg; // x23
  UnityEngine_Object_o *materialTdSprite; // x23
  const MethodInfo *v27; // x2
  UISprite_o *v28; // x23
  const MethodInfo *v29; // x1
  int32_t v30; // w23
  int32_t v31; // w8
  bool CanNotBaseSelect; // w0
  UnityEngine_Object_o *v33; // x22
  UILabel_o *v34; // x22
  __int64 *v35; // x8
  int32_t v36; // w2
  const MethodInfo *v37; // x2
  UserServantEntity_o *userSvtEntity; // x0
  char v39; // w19
  UILabel_o *v40; // x23
  UILabel_o *v41; // x23
  UILabel_o *v42; // x23
  UILabel_o *v43; // x23
  UILabel_o *v44; // x23
  UILabel_o *v45; // x23
  UILabel_o *v46; // x23
  UILabel_o *v47; // x23
  UILabel_o *v48; // x23
  __int64 *v49; // x8
  UILabel_o *v50; // x22
  System_String_o *v51; // x23
  float v52; // s0
  Il2CppObject *v53; // x0
  UILabel_o *v54; // x23
  const MethodInfo *v55; // x1
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x23
  int32_t v58; // w8
  UILabel_o *v59; // x22
  UILabel_o *v60; // x22
  UILabel_o *v61; // x22
  UILabel_o *v62; // x22
  __int64 *v63; // x8
  __int64 servantEntity; // x0
  UnityEngine_Object_o *v65; // x23
  int v66; // w19
  UILabel_o *v67; // x22
  __int64 *v68; // x8
  UILabel_o *v69; // x22
  UILabel_o *v70; // x23
  UILabel_o *v71; // x22
  UILabel_o *v72; // x22
  int32_t v73; // w8
  System_String_o *v74; // x1
  UILabel_o *fortificationAppointmentLabel; // x22
  float v76; // s0
  float v77; // s2
  float fortificationInfoRootObjOffsetY; // s10
  float v79; // s8
  float v80; // s9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v81; // x22
  System_String_o *v82; // x23
  float v83; // s0
  Il2CppObject *v84; // x0
  System_String_o *v85; // x0
  UnityEngine_Object_o *v86; // x22
  UILabel_o *v87; // x22
  LocalizationManager_c *v88; // x0
  bool v89; // w0
  UnityEngine_Object_o *v90; // x22
  __int64 *v91; // x8
  UnityEngine_Object_c *v92; // x0
  System_String_o *v93; // x1
  UnityEngine_Object_o *v94; // x22
  int32_t v95; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  System_Text_StringBuilder_o *v97; // x22
  SkillInfo_array *v98; // x8
  __int64 v99; // x9
  unsigned __int64 v100; // x26
  __int64 v101; // x27
  signed __int64 v102; // x20
  SkillInfo_o *v103; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v106; // w25
  Il2CppObject *v107; // x24
  bool v108; // w0
  __int64 *v109; // x10
  UILabel_o *skillLvLabel; // x23
  UnityEngine_Object_o *v111; // x22
  UILabel_o *v112; // x22
  UILabel_o *v113; // x22
  __int64 *v114; // x8
  UnityEngine_Object_o *v115; // x22
  SvtUseSkillData_o *AppendSkillData; // x0
  struct System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v118; // x24
  System_Text_StringBuilder_o *v119; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v121; // x9
  unsigned __int64 v122; // x27
  __int64 v123; // x20
  signed __int64 v124; // x28
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v126; // x0
  int32_t v127; // w26
  int32_t v128; // w0
  int v129; // t1
  Il2CppObject *v130; // x25
  bool v131; // w0
  __int64 *v132; // x10
  UILabel_o *v133; // x24
  UILabel_o *v134; // x22
  UILabel_o *v135; // x22
  UILabel_o *v136; // x22
  __int64 *v137; // x8
  UnityEngine_Object_o *v138; // x22
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *switchInfoComp; // x22
  UILabel_o *coinNumLabel; // x22
  const MethodInfo *v142; // x1
  const MethodInfo *v143; // x1
  Il2CppObject *v144; // x0
  const MethodInfo *v145; // x1
  ItemIconComponent_o *coinIcon; // x22
  int32_t v147; // w8
  int32_t v148; // w2
  UnityEngine_Object_o *v149; // x22
  UILabel_o *v150; // x22
  __int64 *v151; // x8
  UnityEngine_Object_o *v152; // x22
  UnityEngine_Object_o *v153; // x22
  UILabel_o *v154; // x22
  __int64 *v155; // x8
  UnityEngine_Object_o *v156; // x22
  UnityEngine_Object_o *v157; // x22
  UnityEngine_Object_o *v158; // x22
  int32_t v159; // w8
  const MethodInfo *v160; // x1
  int32_t v161; // w22
  struct ServantFaceIconComponent_o *v162; // x8
  bool v163; // w0
  UnityEngine_Object_o *v164; // x22
  UILabel_o *v165; // x22
  UILabel_o *v166; // x22
  struct UILabel_o *v167; // x22
  System_String_o *v168; // x1
  UnityEngine_Object_o *v169; // x22
  ServantCommandCardListComponent_o *v170; // x22
  const MethodInfo *v171; // x1
  UnityEngine_Object_o *v172; // x22
  UILabel_o *v173; // x22
  __int64 *v174; // x8
  UnityEngine_Object_o *v175; // x22
  UnityEngine_Object_o *v176; // x22
  struct UILabel_o *v177; // x19
  System_String_o *v178; // x1
  __int64 v179; // x0
  struct UISprite_o **v180; // [xsp+18h] [xbp-B8h]
  struct UILabel_o **v181; // [xsp+20h] [xbp-B0h]
  struct UILabel_o **v182; // [xsp+28h] [xbp-A8h]
  CombineServantListViewItemDraw_o *v183; // [xsp+30h] [xbp-A0h]
  int32_t v184; // [xsp+3Ch] [xbp-94h]
  int32_t SkillOpenItemNum; // [xsp+4Ch] [xbp-84h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-80h] BYREF
  MethodInfo v187; // [xsp+58h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v188; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v189; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B2CCD & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&CombineServantListViewManager_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&TutorialFlag_TypeInfo);
    sub_B52984(&StringLiteral_12345/*"SKILL_LVDISP_TXT"*/);
    sub_B52984(&StringLiteral_10451/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/);
    sub_B52984(&StringLiteral_9378/*"NONSELECT_UNDER_STATUS_MAX"*/);
    sub_B52984(&StringLiteral_6456/*"FORTIFICATION_APPOINTMENT"*/);
    sub_B52984(&StringLiteral_3188/*"COMBINE_CAN_STATUS_UP_INFO"*/);
    sub_B52984(&StringLiteral_8886/*"MSG_CAMPAIGN_COMBINE_EXP"*/);
    sub_B52984(&StringLiteral_12343/*"SKILL_LVDISP_ENABLE_TXT"*/);
    sub_B52984(&StringLiteral_9373/*"NONSELECT_MATERIAL"*/);
    sub_B52984(&StringLiteral_22010/*"ribbon_noblephantasmup_01"*/);
    sub_B52984(&StringLiteral_9372/*"NONSELECT_LIMITUP_BASE"*/);
    sub_B52984(&StringLiteral_10270/*"PARTY_MEMBER_TXT"*/);
    sub_B52984(&StringLiteral_9376/*"NONSELECT_NPUP_BASE"*/);
    sub_B52984(&StringLiteral_12591/*"SUPPORT_MEMBER"*/);
    sub_B52984(&StringLiteral_8882/*"MSG_ABLED_LIMITUP"*/);
    sub_B52984(&StringLiteral_11729/*"SELECT_PUSH"*/);
    sub_B52984(&StringLiteral_11707/*"SELECT_CANNOT"*/);
    sub_B52984(&StringLiteral_9426/*"NPUP_BASE"*/);
    sub_B52984(&StringLiteral_12342/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/);
    sub_B52984(&StringLiteral_11730/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_B52984(&StringLiteral_9416/*"NO_SELECT_FRIENDSHIP_EXCEED"*/);
    sub_B52984(&StringLiteral_11636/*"SAME_SERVANT"*/);
    sub_B52984(&StringLiteral_8881/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/);
    sub_B52984(&StringLiteral_9374/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    sub_B52984(&StringLiteral_12344/*"SKILL_LVDISP_SINGLE_TXT"*/);
    sub_B52984(&StringLiteral_8883/*"MSG_ABLED_SKILLUP"*/);
    sub_B52984(&StringLiteral_9375/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/);
    sub_B52984(&StringLiteral_9379/*"NONSKILL_TXT"*/);
    sub_B52984(&StringLiteral_8478/*"LOCKMODE_SELECTED_SERVANT"*/);
    sub_B52984(&StringLiteral_6372/*"FAVORITE_SERVANT"*/);
    sub_B52984(&StringLiteral_3013/*"CHOICE_SERVANT"*/);
    sub_B52984(&StringLiteral_8885/*"MSG_ABLED_TDUP"*/);
    sub_B52984(&StringLiteral_11702/*"SEAL_COMBINE_LIMIT_THIRD"*/);
    sub_B52984(&StringLiteral_9371/*"NONSELECT_BASE_ALLMAX"*/);
    sub_B52984(&StringLiteral_9417/*"NO_SELECT_LVEXCEED"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_9377/*"NONSELECT_SKILLUP_BASE"*/);
    sub_B52984(&StringLiteral_11728/*"SELECT_PROTECTED_EVENT_SVT"*/);
    sub_B52984(&StringLiteral_8479/*"LOCK_SERVANT"*/);
    sub_B52984(&StringLiteral_9370/*"NONSEELECT_STATUSUP_MAX"*/);
    byte_42B2CCD = 1;
  }
  v187.name = 0LL;
  skillInfoList = 0LL;
  v187.methodPointer = 0LL;
  if ( !item || !mode )
    return;
  svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Implicit(svtCommandCardList, 0LL) )
  {
    gameObject = (UILabel_o *)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_1055;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1055;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  type = item->fields.type;
  servantFaceIcon = this->fields.servantFaceIcon;
  gameObject = (UILabel_o *)CombineServantListViewItem__get_UserSvtEntity(item, (const MethodInfo *)switchInfoList);
  iconLabelInfo1 = item->fields.iconLabelInfo1;
  switchInfoList = (System_String_o *)gameObject;
  if ( type )
  {
    if ( !servantFaceIcon )
      goto LABEL_1055;
    ServantFaceIconComponent__Set_30396076(
      servantFaceIcon,
      (UserServantEntity_o *)gameObject,
      iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
    subIconLabel = this->fields.subIconLabel;
    rarity = item->fields.rarity;
    gameObject = (UILabel_o *)CombineServantListViewItem__get_UserSvtEntity(item, v19);
    if ( !gameObject )
      goto LABEL_1055;
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_1055;
    ServantFaceIconComponent__Set_30396076(servantFaceIcon, (UserServantEntity_o *)gameObject, iconLabelInfo1, 0LL, 0LL);
    gameObject = (UILabel_o *)item->fields.iconLabelInfo2;
    if ( !gameObject )
      goto LABEL_1055;
    gameObject = (UILabel_o *)IconLabelInfo__IsClear((IconLabelInfo_o *)gameObject, 0LL);
    subIconLabel = this->fields.subIconLabel;
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      if ( !subIconLabel )
        goto LABEL_1055;
      UIIconLabel__Set(this->fields.subIconLabel, item->fields.iconLabelInfo2, 0LL);
      goto LABEL_23;
    }
    rarity = item->fields.rarity;
    gameObject = (UILabel_o *)CombineServantListViewItem__get_UserSvtEntity(item, (const MethodInfo *)switchInfoList);
    if ( !gameObject )
      goto LABEL_1055;
  }
  m12_low = LODWORD(gameObject->fields.mLocalToPanel.fields.m12);
  gameObject = (UILabel_o *)CombineServantListViewItem__get_UserSvtEntity(item, (const MethodInfo *)switchInfoList);
  if ( !gameObject || !subIconLabel )
    goto LABEL_1055;
  UIIconLabel__Set_41786400(
    subIconLabel,
    36,
    rarity,
    m12_low,
    0,
    0LL,
    0,
    0,
    LODWORD(gameObject->fields.mDrawRegion.fields.w),
    0LL);
LABEL_23:
  CombineServantListViewItem__GetNpInfo(
    item,
    (int32_t *)&v187.name + 1,
    (int32_t *)&v187.name,
    (int32_t *)&v187.methodPointer + 1,
    v21);
  gameObject = (UILabel_o *)this->fields.lockImg;
  if ( !gameObject )
    goto LABEL_1055;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_statusTxtLb = &this->fields.statusTxtLb;
  gameObject = this->fields.statusTxtLb;
  if ( !gameObject )
    goto LABEL_1055;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_maskSprite = &this->fields.maskSprite;
  gameObject = (UILabel_o *)this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_1055;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  p_maskLabel = &this->fields.maskLabel;
  gameObject = this->fields.maskLabel;
  if ( !gameObject )
    goto LABEL_1055;
  UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = this->fields.skillLvLabel;
  if ( !gameObject )
    goto LABEL_1055;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (UILabel_o *)this->fields.partyIcon;
  if ( !gameObject )
    goto LABEL_1055;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
  gameObject = (UILabel_o *)this->fields.removeImg;
  if ( !gameObject )
    goto LABEL_1055;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (UILabel_o *)this->fields.npLvInfo;
  if ( !gameObject )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (UILabel_o *)this->fields.limitCountIcon;
  if ( !gameObject )
    goto LABEL_1055;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)gameObject, 0LL);
  gameObject = (UILabel_o *)this->fields.choiceImg;
  if ( !gameObject )
    goto LABEL_1055;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)gameObject,
    item->fields.isSwapChoice != item->fields.isChoice,
    0LL);
  gameObject = (UILabel_o *)this->fields.switchInfoComp;
  if ( !gameObject )
    goto LABEL_1055;
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)gameObject, 0LL);
  gameObject = (UILabel_o *)this->fields.fortificationRootObj;
  if ( !gameObject )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = this->fields.fortificationNameLabel;
  if ( !gameObject )
    goto LABEL_1055;
  UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = this->fields.fortificationDetailNameLabel;
  if ( !gameObject )
    goto LABEL_1055;
  UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = this->fields.fortificationAppointmentLabel;
  if ( !gameObject )
    goto LABEL_1055;
  UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pushImg, 0LL, 0LL) )
  {
    gameObject = (UILabel_o *)this->fields.pushImg;
    if ( !gameObject )
      goto LABEL_1055;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1055;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isPush, 0LL);
  }
  gameObject = (UILabel_o *)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_1055;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)gameObject, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (UILabel_o *)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_1055;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_1055;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isMaterialTdSvt, 0LL);
    if ( item->fields.isMaterialTdSvt )
    {
      v28 = this->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v28, (System_String_o *)StringLiteral_22010/*"ribbon_noblephantasmup_01"*/, 0LL);
      v30 = item->fields.type;
      if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      }
      if ( CombineServantListViewManager__GetSortKind(v30, v29) == 1 )
      {
        gameObject = (UILabel_o *)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_1055;
        v188.fields.x = 0.65;
        v188.fields.y = 1.0;
        v188.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v188, 0LL);
      }
    }
  }
  v31 = item->fields.type;
  switch ( v31 )
  {
    case 5:
      gameObject = (UILabel_o *)this->fields.npIconLabel;
      if ( !gameObject )
        goto LABEL_1055;
      v36 = SHIDWORD(v187.name) <= 0 ? -1 : LODWORD(v187.name);
      UIIconLabel__Set_41786400(
        (UIIconLabel_o *)gameObject,
        33,
        v36,
        SHIDWORD(v187.methodPointer),
        0,
        0LL,
        0,
        0,
        0,
        0LL);
      gameObject = (UILabel_o *)this->fields.npLvInfo;
      if ( !gameObject )
        goto LABEL_1055;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      goto LABEL_105;
    case 1:
      gameObject = (UILabel_o *)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1055;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( userSvtEntity && UserServantEntity__IsProtectedEventServant(userSvtEntity, 0LL) && item->fields.type != 5 )
      {
        gameObject = (UILabel_o *)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1055;
        gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1055;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v70 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11728/*"SELECT_PROTECTED_EVENT_SVT"*/, 0LL);
        if ( !v70 )
          goto LABEL_1055;
        UILabel__set_text(v70, (System_String_o *)gameObject, 0LL);
        v39 = 1;
LABEL_106:
        if ( item->fields.isParty )
        {
          gameObject = (UILabel_o *)this->fields.partyIcon;
          if ( !gameObject )
            goto LABEL_1055;
          FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v40 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10270/*"PARTY_MEMBER_TXT"*/, 0LL);
          if ( !v40 )
            goto LABEL_1055;
          UILabel__set_text(v40, (System_String_o *)gameObject, 0LL);
          v39 = 1;
        }
        if ( item->fields.isFavorite )
        {
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v41 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6372/*"FAVORITE_SERVANT"*/, 0LL);
          if ( !v41 )
            goto LABEL_1055;
          UILabel__set_text(v41, (System_String_o *)gameObject, 0LL);
          v39 = 1;
        }
        if ( item->fields.isSwapLock != item->fields.isLock )
        {
          gameObject = (UILabel_o *)this->fields.lockImg;
          if ( !gameObject )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v42 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8479/*"LOCK_SERVANT"*/, 0LL);
          if ( !v42 )
            goto LABEL_1055;
          UILabel__set_text(v42, (System_String_o *)gameObject, 0LL);
          v39 = 1;
        }
        if ( item->fields.isSwapChoice != item->fields.isChoice )
        {
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v43 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3013/*"CHOICE_SERVANT"*/, 0LL);
          if ( !v43 )
            goto LABEL_1055;
          UILabel__set_text(v43, (System_String_o *)gameObject, 0LL);
          v39 = 1;
        }
        if ( item->fields.isLimitCntTarget )
        {
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v44 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11636/*"SAME_SERVANT"*/, 0LL);
          if ( !v44 )
            goto LABEL_1055;
          UILabel__set_text(v44, (System_String_o *)gameObject, 0LL);
          v39 = 1;
        }
        if ( item->fields.isHeroineSvt )
        {
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v45 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9373/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v45 )
            goto LABEL_1055;
          UILabel__set_text(v45, (System_String_o *)gameObject, 0LL);
          v39 = 1;
        }
        if ( item->fields.isStatusUpSvt && !item->fields.isCanStUp )
        {
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v46 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9373/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v46 )
            goto LABEL_1055;
          UILabel__set_text(v46, (System_String_o *)gameObject, 0LL);
          v39 = 1;
        }
        if ( item->fields.isEventJoin )
        {
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v47 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11730/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
          if ( !v47 )
            goto LABEL_1055;
          UILabel__set_text(v47, (System_String_o *)gameObject, 0LL);
          v39 = 1;
        }
        if ( item->fields.isUseSupport )
        {
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v48 = *p_maskLabel;
          if ( item->fields.isParty )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v49 = &StringLiteral_10270/*"PARTY_MEMBER_TXT"*/;
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v49 = &StringLiteral_12591/*"SUPPORT_MEMBER"*/;
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)*v49, 0LL);
          if ( !v48 )
            goto LABEL_1055;
          UILabel__set_text(v48, (System_String_o *)gameObject, 0LL);
          v39 = 1;
        }
        if ( item->fields.isPush )
        {
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v54 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11729/*"SELECT_PUSH"*/, 0LL);
          if ( !v54 )
            goto LABEL_1055;
          UILabel__set_text(v54, (System_String_o *)gameObject, 0LL);
          v39 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, item, v37);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(item, v55);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( CanNotSelect )
        {
          if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
            break;
          gameObject = (UILabel_o *)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1055;
          ((void (__fastcall *)(UILabel_o *, __int64, Il2CppMethodPointer))gameObject->klass->vtable._5_get_isAnchoredVertically.method)(
            gameObject,
            1LL,
            gameObject->klass->vtable._6_get_canBeAnchored.methodPtr);
          gameObject = (UILabel_o *)this->fields.baseButton;
          if ( !gameObject )
            goto LABEL_1055;
          ((void (__fastcall *)(UILabel_o *, _QWORD, __int64, Il2CppMethodPointer))gameObject->klass->vtable._14_OnEnable.method)(
            gameObject,
            0LL,
            1LL,
            gameObject->klass->vtable._15_OnInit.methodPtr);
          gameObject = (UILabel_o *)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_1055;
          gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          if ( item->fields.isMaxNextLv || item->fields.isBaseLvMax )
          {
            if ( item->fields.isCanStUp )
              goto LABEL_236;
            if ( CombineServantListViewItem__get_IsCanNotSelectMaterial(item, (const MethodInfo *)switchInfoList) )
              goto LABEL_343;
            v69 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9374/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
            if ( !v69 )
              goto LABEL_1055;
            UILabel__set_text(v69, (System_String_o *)gameObject, 0LL);
            if ( item->fields.type != 5 )
              break;
            v62 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v63 = &StringLiteral_9376/*"NONSELECT_NPUP_BASE"*/;
          }
          else
          {
            if ( item->fields.isCanStUp )
            {
LABEL_236:
              if ( item->fields.isStatusUpSvt )
              {
                v58 = item->fields.rarity;
                if ( v58 <= 3 )
                {
                  if ( item->fields.isAtkUpMax || item->fields.isHpUpMax )
                  {
                    v71 = *p_maskLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9378/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                    if ( !v71 )
                      goto LABEL_1055;
                    UILabel__set_text(v71, (System_String_o *)gameObject, 0LL);
                  }
                  if ( item->fields.isAtkSecondUpMax || item->fields.isHpSecondUpMax )
                  {
                    v72 = *p_maskLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9378/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                    if ( !v72 )
                      goto LABEL_1055;
                    UILabel__set_text(v72, (System_String_o *)gameObject, 0LL);
                  }
                  if ( !item->fields.isNotSelectStatusUpAtk && !item->fields.isNotSelectStatusUpHp )
                    goto LABEL_343;
                  v62 = *p_maskLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v63 = &StringLiteral_9378/*"NONSELECT_UNDER_STATUS_MAX"*/;
                }
                else
                {
                  if ( v58 != 4 )
                    goto LABEL_343;
                  if ( item->fields.atkBase >= 1 )
                  {
                    if ( item->fields.isAtkSecondUpMax || item->fields.isNotSelectSecondStatusUpAtk )
                    {
                      v59 = *p_maskLabel;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9378/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                      if ( !v59 )
                        goto LABEL_1055;
                      UILabel__set_text(v59, (System_String_o *)gameObject, 0LL);
                    }
                    if ( !item->fields.isAtkUpMax )
                    {
                      v60 = *p_maskLabel;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9375/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0LL);
                      if ( !v60 )
                        goto LABEL_1055;
                      UILabel__set_text(v60, (System_String_o *)gameObject, 0LL);
                    }
                  }
                  if ( item->fields.hpBase < 1 )
                    goto LABEL_343;
                  if ( item->fields.isHpSecondUpMax || item->fields.isNotSelectSecondStatusUpHp )
                  {
                    v61 = *p_maskLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9378/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                    if ( !v61 )
                      goto LABEL_1055;
                    UILabel__set_text(v61, (System_String_o *)gameObject, 0LL);
                  }
                  if ( item->fields.isHpUpMax )
                    goto LABEL_343;
                  v62 = *p_maskLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v63 = &StringLiteral_9375/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
                }
                goto LABEL_341;
              }
LABEL_343:
              v73 = item->fields.type;
              if ( v73 != 5 )
                goto LABEL_402;
              if ( !item->fields.isBaseSvt )
                break;
              v67 = *p_maskLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v68 = &StringLiteral_9426/*"NPUP_BASE"*/;
LABEL_349:
              servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v68, 0LL);
              if ( !v67 )
                goto LABEL_624;
              UILabel__set_text(v67, (System_String_o *)servantEntity, 0LL);
              break;
            }
            if ( item->fields.isFortification )
            {
              gameObject = *p_maskLabel;
              if ( !*p_maskLabel )
                goto LABEL_1055;
              UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              gameObject = (UILabel_o *)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1055;
              gameObject = (UILabel_o *)UnityEngine_GameObject__get_gameObject(
                                          (UnityEngine_GameObject_o *)gameObject,
                                          0LL);
              if ( !gameObject )
                goto LABEL_1055;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              gameObject = this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1055;
              UILabel__set_text(gameObject, item->fields.fortificationName, 0LL);
              gameObject = this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1055;
              UILabel__set_text(gameObject, item->fields.fortificationDetailName, 0LL);
              fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6456/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
              if ( !fortificationAppointmentLabel )
                goto LABEL_1055;
              UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)gameObject, 0LL);
              gameObject = this->fields.fortificationNameLabel;
              if ( !gameObject )
                goto LABEL_1055;
              UILabel__UpdateCondensedScaleComponent(gameObject, 0LL);
              gameObject = this->fields.fortificationDetailNameLabel;
              if ( !gameObject )
                goto LABEL_1055;
              UILabel__UpdateCondensedScaleComponent(gameObject, 0LL);
              if ( item->fields.type != 5 )
                break;
              gameObject = (UILabel_o *)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1055;
              gameObject = (UILabel_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)gameObject,
                                          0LL);
              if ( !gameObject )
                goto LABEL_1055;
              *(UnityEngine_Vector3_o *)&v76 = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)gameObject,
                                                 0LL);
              gameObject = (UILabel_o *)this->fields.fortificationRootObj;
              if ( !gameObject )
                goto LABEL_1055;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              v79 = v76;
              v80 = v77;
              gameObject = (UILabel_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)gameObject,
                                          0LL);
              if ( !gameObject )
                goto LABEL_1055;
              v189.fields.x = v79;
              v189.fields.y = fortificationInfoRootObjOffsetY;
              v189.fields.z = v80;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v189, 0LL);
              goto LABEL_343;
            }
            if ( (v39 & 1) != 0 )
              goto LABEL_343;
            v62 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v63 = &StringLiteral_9373/*"NONSELECT_MATERIAL"*/;
          }
LABEL_341:
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)*v63, 0LL);
          if ( !v62 )
            goto LABEL_1055;
          UILabel__set_text(v62, (System_String_o *)gameObject, 0LL);
          goto LABEL_343;
        }
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
        {
          servantEntity = (__int64)this->fields.baseButton;
          if ( !servantEntity )
            goto LABEL_624;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
            servantEntity,
            1LL,
            *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
          servantEntity = (__int64)this->fields.baseButton;
          if ( !servantEntity )
            goto LABEL_624;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
            servantEntity,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
          servantEntity = (__int64)*p_maskSprite;
          if ( !*p_maskSprite )
            goto LABEL_624;
          servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
          if ( !servantEntity )
            goto LABEL_624;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
        }
        v65 = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( item->fields.isMaxSelect )
        {
          if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v65, 0LL, 0LL) )
          {
            servantEntity = (__int64)this->fields.baseButton;
            if ( !servantEntity )
              goto LABEL_624;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
              servantEntity,
              1LL,
              *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
            servantEntity = (__int64)this->fields.baseButton;
            if ( !servantEntity )
              goto LABEL_624;
            v66 = 1;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
              servantEntity,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
            goto LABEL_291;
          }
        }
        else
        {
          if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v65, 0LL, 0LL) )
          {
            servantEntity = (__int64)this->fields.baseButton;
            if ( !servantEntity )
              goto LABEL_624;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
              servantEntity,
              1LL,
              *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
            servantEntity = (__int64)this->fields.baseButton;
            if ( !servantEntity )
              goto LABEL_624;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
              servantEntity,
              0LL,
              1LL,
              *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
          }
        }
        v66 = 0;
        if ( item->fields.type != 1 )
          goto LABEL_297;
LABEL_291:
        servantEntity = (__int64)item->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_624;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)servantEntity, 0LL) && !isSelectEnable )
        {
          if ( !(v66 & 1 | !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL)) )
            break;
        }
        else
        {
LABEL_297:
          if ( !v66 )
            break;
        }
        servantEntity = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_624;
        servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
        if ( !servantEntity )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
        v67 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v68 = &StringLiteral_9373/*"NONSELECT_MATERIAL"*/;
        goto LABEL_349;
      }
LABEL_105:
      v39 = 0;
      goto LABEL_106;
    case 0:
      gameObject = (UILabel_o *)this->fields.limitCountIcon;
      if ( !gameObject )
        goto LABEL_1055;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)gameObject,
        item->fields.currentLimitCnt,
        item->fields.maxLimitCnt,
        0LL);
      if ( item->fields.isParty )
      {
        gameObject = (UILabel_o *)this->fields.partyIcon;
        if ( !gameObject )
          goto LABEL_1055;
        FlashingIconComponent__Set((FlashingIconComponent_o *)gameObject, 0LL);
      }
      if ( item->fields.isSwapLock != item->fields.isLock )
      {
        gameObject = (UILabel_o *)this->fields.lockImg;
        if ( !gameObject )
          goto LABEL_1055;
        gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1055;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      }
      CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList);
      v33 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( CanNotBaseSelect )
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
          goto LABEL_397;
        gameObject = (UILabel_o *)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1055;
        ((void (__fastcall *)(UILabel_o *, __int64, Il2CppMethodPointer))gameObject->klass->vtable._5_get_isAnchoredVertically.method)(
          gameObject,
          1LL,
          gameObject->klass->vtable._6_get_canBeAnchored.methodPtr);
        gameObject = (UILabel_o *)this->fields.baseButton;
        if ( !gameObject )
          goto LABEL_1055;
        ((void (__fastcall *)(UILabel_o *, _QWORD, __int64, Il2CppMethodPointer))gameObject->klass->vtable._14_OnEnable.method)(
          gameObject,
          0LL,
          1LL,
          gameObject->klass->vtable._15_OnInit.methodPtr);
        gameObject = (UILabel_o *)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_1055;
        gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1055;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        if ( item->fields.isLvMax )
        {
          if ( item->fields.isStatusUpSvt )
            goto LABEL_353;
          if ( !item->fields.isExpUpSvt )
          {
            v34 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v35 = &StringLiteral_9371/*"NONSELECT_BASE_ALLMAX"*/;
            goto LABEL_357;
          }
        }
        else if ( item->fields.isStatusUpSvt )
        {
          goto LABEL_353;
        }
        if ( !item->fields.isExpUpSvt )
        {
          if ( !item->fields.isHeroineSvt )
          {
            gameObject = *p_statusTxtLb;
            if ( !*p_statusTxtLb )
              goto LABEL_1055;
            UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            gameObject = *p_maskLabel;
            if ( !*p_maskLabel )
              goto LABEL_1055;
            v74 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_359;
          }
          v34 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v35 = &StringLiteral_11707/*"SELECT_CANNOT"*/;
LABEL_357:
          gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)*v35, 0LL);
          if ( !v34 )
            goto LABEL_1055;
          v74 = (System_String_o *)gameObject;
          gameObject = v34;
LABEL_359:
          UILabel__set_text(gameObject, v74, 0LL);
          gameObject = (UILabel_o *)item->fields._NoticeTween_k__BackingField;
          if ( !gameObject )
            goto LABEL_1055;
          CombineServantListViewNoticeTween__RemoveTarget(
            (CombineServantListViewNoticeTween_o *)gameObject,
            *p_statusTxtLb,
            0LL);
          goto LABEL_397;
        }
LABEL_353:
        v34 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v35 = &StringLiteral_9373/*"NONSELECT_MATERIAL"*/;
        goto LABEL_357;
      }
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
        goto LABEL_397;
      gameObject = (UILabel_o *)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1055;
      ((void (__fastcall *)(UILabel_o *, __int64, Il2CppMethodPointer))gameObject->klass->vtable._5_get_isAnchoredVertically.method)(
        gameObject,
        1LL,
        gameObject->klass->vtable._6_get_canBeAnchored.methodPtr);
      gameObject = (UILabel_o *)this->fields.baseButton;
      if ( !gameObject )
        goto LABEL_1055;
      ((void (__fastcall *)(UILabel_o *, _QWORD, __int64, Il2CppMethodPointer))gameObject->klass->vtable._14_OnEnable.method)(
        gameObject,
        0LL,
        1LL,
        gameObject->klass->vtable._15_OnInit.methodPtr);
      gameObject = (UILabel_o *)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1055;
      gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_1055;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = *p_maskLabel;
      if ( !*p_maskLabel )
        goto LABEL_1055;
      UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( item->fields.isCombineExpCampaignTarget )
      {
        if ( item->fields.isDispAtkStatusUpInfo )
        {
          gameObject = (UILabel_o *)item->fields.userSvtEntity;
          if ( !gameObject )
            goto LABEL_1055;
          if ( UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)gameObject, 0LL) )
          {
            gameObject = (UILabel_o *)item->fields.userSvtEntity;
            if ( !gameObject )
              goto LABEL_1055;
            if ( !UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)gameObject, 0LL) )
              goto LABEL_387;
          }
        }
        if ( !item->fields.isDispHpStatusUpInfo )
          goto LABEL_204;
        gameObject = (UILabel_o *)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_1055;
        if ( !UserServantEntity__isAdjustHpMax((UserServantEntity_o *)gameObject, 0LL) )
          goto LABEL_204;
        gameObject = (UILabel_o *)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_1055;
        if ( !UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)gameObject, 0LL) )
        {
LABEL_387:
          v81 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v81,
            (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v82 = LocalizationManager__Get((System_String_o *)StringLiteral_8886/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v187.methodPointer = item->fields.combineExpCampaignValue;
          v84 = (Il2CppObject *)System_Single__ToString(v83, &v187);
          gameObject = (UILabel_o *)System_String__Format(v82, v84, 0LL);
          if ( v81 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v81,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
            v85 = LocalizationManager__Get((System_String_o *)StringLiteral_3188/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v81,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
            gameObject = (UILabel_o *)item->fields._NoticeTween_k__BackingField;
            if ( gameObject )
            {
              CombineServantListViewNoticeTween__AddTarget(
                (CombineServantListViewNoticeTween_o *)gameObject,
                *p_statusTxtLb,
                (System_Collections_Generic_List_string__o *)v81,
                0LL);
              gameObject = (UILabel_o *)item->fields._NoticeTween_k__BackingField;
              if ( gameObject )
              {
                CombineServantListViewNoticeTween__SetTexts((CombineServantListViewNoticeTween_o *)gameObject, 0, 0LL);
LABEL_394:
                gameObject = *p_statusTxtLb;
                if ( !*p_statusTxtLb )
                  goto LABEL_1055;
                gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)gameObject,
                                            0LL);
                if ( !gameObject )
                  goto LABEL_1055;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                goto LABEL_397;
              }
            }
          }
        }
        else
        {
LABEL_204:
          gameObject = (UILabel_o *)item->fields._NoticeTween_k__BackingField;
          if ( gameObject )
          {
            CombineServantListViewNoticeTween__RemoveTarget(
              (CombineServantListViewNoticeTween_o *)gameObject,
              *p_statusTxtLb,
              0LL);
            v50 = *p_statusTxtLb;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v51 = LocalizationManager__Get((System_String_o *)StringLiteral_8886/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
            *(float *)&v187.methodPointer = item->fields.combineExpCampaignValue;
            v53 = (Il2CppObject *)System_Single__ToString(v52, &v187);
            gameObject = (UILabel_o *)System_String__Format(v51, v53, 0LL);
            if ( v50 )
            {
LABEL_209:
              UILabel__set_text(v50, (System_String_o *)gameObject, 0LL);
              goto LABEL_394;
            }
          }
        }
LABEL_1055:
        sub_B52A5C(gameObject, switchInfoList);
      }
      gameObject = (UILabel_o *)item->fields._NoticeTween_k__BackingField;
      if ( !gameObject )
        goto LABEL_1055;
      CombineServantListViewNoticeTween__RemoveTarget(
        (CombineServantListViewNoticeTween_o *)gameObject,
        *p_statusTxtLb,
        0LL);
      if ( item->fields.isDispAtkStatusUpInfo )
      {
        gameObject = (UILabel_o *)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_1055;
        if ( UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)gameObject, 0LL) )
        {
          gameObject = (UILabel_o *)item->fields.userSvtEntity;
          if ( !gameObject )
            goto LABEL_1055;
          if ( !UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)gameObject, 0LL) )
            goto LABEL_1025;
        }
      }
      else if ( item->fields.isDispHpStatusUpInfo )
      {
        gameObject = (UILabel_o *)item->fields.userSvtEntity;
        if ( !gameObject )
          goto LABEL_1055;
        if ( UserServantEntity__isAdjustHpMax((UserServantEntity_o *)gameObject, 0LL) )
        {
          gameObject = (UILabel_o *)item->fields.userSvtEntity;
          if ( !gameObject )
            goto LABEL_1055;
          if ( !UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)gameObject, 0LL) )
          {
LABEL_1025:
            v50 = *p_statusTxtLb;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3188/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
            if ( v50 )
              goto LABEL_209;
            goto LABEL_1055;
          }
        }
      }
LABEL_397:
      if ( item->fields.isBaseSvt )
      {
        gameObject = (UILabel_o *)this->fields.removeImg;
        if ( !gameObject )
          goto LABEL_1055;
        gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_1055;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      }
      break;
  }
  v73 = item->fields.type;
LABEL_402:
  if ( v73 != 9 )
  {
    if ( v73 != 2 )
      goto LABEL_498;
    servantEntity = (__int64)this->fields.limitCountIcon;
    if ( !servantEntity )
      goto LABEL_624;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)servantEntity,
      item->fields.currentLimitCnt,
      item->fields.maxLimitCnt,
      0LL);
    if ( item->fields.isParty )
    {
      servantEntity = (__int64)this->fields.partyIcon;
      if ( !servantEntity )
        goto LABEL_624;
      FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
    }
    if ( item->fields.isSwapLock != item->fields.isLock )
    {
      servantEntity = (__int64)this->fields.lockImg;
      if ( !servantEntity )
        goto LABEL_624;
      servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
      if ( !servantEntity )
        goto LABEL_624;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    }
    if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList) )
    {
      v86 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v86, 0LL, 0LL) )
      {
        servantEntity = (__int64)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_624;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
          servantEntity,
          1LL,
          *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
        servantEntity = (__int64)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_624;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
          servantEntity,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
        servantEntity = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_624;
        servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
        if ( !servantEntity )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
        v87 = *p_maskLabel;
        v88 = LocalizationManager_TypeInfo;
        if ( item->fields.isHeroineSvt )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
            goto LABEL_447;
          goto LABEL_445;
        }
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          goto LABEL_473;
        goto LABEL_475;
      }
      goto LABEL_494;
    }
    if ( !item->fields.isLvMax || !item->fields.isLimitUpItemNum )
    {
      v94 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v94, 0LL, 0LL) )
      {
        servantEntity = (__int64)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_624;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
          servantEntity,
          1LL,
          *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
        servantEntity = (__int64)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_624;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
          servantEntity,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
      }
      goto LABEL_494;
    }
    v92 = UnityEngine_Object_TypeInfo;
    v90 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !item->fields.isSealCombineLimit )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v90, 0LL, 0LL) )
      {
        servantEntity = (__int64)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_624;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
          servantEntity,
          1LL,
          *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
        servantEntity = (__int64)this->fields.baseButton;
        if ( !servantEntity )
          goto LABEL_624;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
          servantEntity,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
        servantEntity = (__int64)*p_maskSprite;
        if ( !*p_maskSprite )
          goto LABEL_624;
        servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
        if ( !servantEntity )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
        servantEntity = (__int64)*p_maskLabel;
        if ( !*p_maskLabel )
          goto LABEL_624;
        UILabel__set_text((UILabel_o *)servantEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        servantEntity = (__int64)*p_statusTxtLb;
        if ( !*p_statusTxtLb )
          goto LABEL_624;
        servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
        if ( !servantEntity )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
        v87 = *p_statusTxtLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v91 = &StringLiteral_8882/*"MSG_ABLED_LIMITUP"*/;
        goto LABEL_491;
      }
      goto LABEL_494;
    }
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
      || UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
LABEL_458:
      if ( !UnityEngine_Object__op_Inequality(v90, 0LL, 0LL) )
        goto LABEL_494;
      servantEntity = (__int64)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_624;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
        servantEntity,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
      servantEntity = (__int64)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_624;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
        servantEntity,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
      servantEntity = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_624;
      servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
      if ( !servantEntity )
        goto LABEL_624;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
      servantEntity = (__int64)*p_maskLabel;
      if ( !*p_maskLabel )
        goto LABEL_624;
      v93 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_493;
    }
LABEL_457:
    j_il2cpp_runtime_class_init_0(v92);
    goto LABEL_458;
  }
  servantEntity = (__int64)this->fields.limitCountIcon;
  if ( !servantEntity )
    goto LABEL_624;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)servantEntity,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0LL);
  if ( item->fields.isParty )
  {
    servantEntity = (__int64)this->fields.partyIcon;
    if ( !servantEntity )
      goto LABEL_624;
    FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    servantEntity = (__int64)this->fields.lockImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  v89 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList);
  v90 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !v89 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
      || UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_458;
    }
    v92 = UnityEngine_Object_TypeInfo;
    goto LABEL_457;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v90, 0LL, 0LL) )
  {
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    if ( item->fields.isHeroineSvt || item->fields.isEventJoin || item->fields.isIgnoreCombineLimitSpecial )
    {
      v87 = *p_maskLabel;
      v88 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_447:
        v91 = &StringLiteral_9373/*"NONSELECT_MATERIAL"*/;
LABEL_491:
        servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v91, 0LL);
        if ( !v87 )
          goto LABEL_624;
        v93 = (System_String_o *)servantEntity;
        servantEntity = (__int64)v87;
LABEL_493:
        UILabel__set_text((UILabel_o *)servantEntity, v93, 0LL);
        goto LABEL_494;
      }
LABEL_445:
      if ( !v88->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v88);
      goto LABEL_447;
    }
    if ( item->fields.isLimitCntMax )
    {
      v87 = *p_maskLabel;
      v88 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
LABEL_473:
        if ( !v88->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v88);
      }
LABEL_475:
      v91 = &StringLiteral_9372/*"NONSELECT_LIMITUP_BASE"*/;
      goto LABEL_491;
    }
    if ( item->fields.isSealCombineLimit )
    {
      v87 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v91 = &StringLiteral_11702/*"SEAL_COMBINE_LIMIT_THIRD"*/;
      goto LABEL_491;
    }
  }
LABEL_494:
  if ( item->fields.isBaseSvt )
  {
    servantEntity = (__int64)this->fields.removeImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
LABEL_498:
  v95 = item->fields.type;
  v184 = modeKind;
  v182 = &this->fields.statusTxtLb;
  v183 = this;
  v180 = &this->fields.maskSprite;
  v181 = &this->fields.maskLabel;
  if ( v95 != 3 )
    goto LABEL_591;
  CombineServantListViewItem__GetSkillInfo(item, &skillInfoList, v27);
  enableSkillUp = item->fields.enableSkillUp;
  v97 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v97, 0LL);
  v98 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_624;
  v99 = *(_QWORD *)&skillInfoList->max_length;
  if ( (int)v99 >= 1 )
  {
    v100 = 0LL;
    v101 = (unsigned int)(v99 - 1);
    v102 = (int)v99;
    while ( 1 )
    {
      if ( v100 >= v98->max_length )
        goto LABEL_1056;
      v103 = v98->m_Items[v100];
      if ( v103 )
      {
        lv = v103->fields.lv;
        p_lv = &v103->fields.lv;
        v106 = *(p_lv - 1);
        if ( lv > 0 )
        {
          servantEntity = (__int64)System_Int32__ToString((int32_t)p_lv, 0LL);
          goto LABEL_511;
        }
      }
      else
      {
        v106 = -1;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9379/*"NONSKILL_TXT"*/, 0LL);
LABEL_511:
      v107 = (Il2CppObject *)servantEntity;
      if ( enableSkillUp )
      {
        v108 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v106,
                 (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v101 == v100 )
        {
          if ( v108 )
          {
            v109 = &StringLiteral_12342/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v109 = &StringLiteral_12342/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v109 = &StringLiteral_12342/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              }
            }
          }
          else
          {
            v109 = &StringLiteral_12344/*"SKILL_LVDISP_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v109 = &StringLiteral_12344/*"SKILL_LVDISP_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v109 = &StringLiteral_12344/*"SKILL_LVDISP_SINGLE_TXT"*/;
              }
            }
          }
        }
        else if ( v108 )
        {
          v109 = &StringLiteral_12343/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v109 = &StringLiteral_12343/*"SKILL_LVDISP_ENABLE_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v109 = &StringLiteral_12343/*"SKILL_LVDISP_ENABLE_TXT"*/;
            }
          }
        }
        else
        {
          v109 = &StringLiteral_12345/*"SKILL_LVDISP_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v109 = &StringLiteral_12345/*"SKILL_LVDISP_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v109 = &StringLiteral_12345/*"SKILL_LVDISP_TXT"*/;
            }
          }
        }
        servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v109, 0LL);
        if ( v97 )
        {
          servantEntity = (__int64)System_Text_StringBuilder__AppendFormat(
                                     v97,
                                     (System_String_o *)servantEntity,
                                     v107,
                                     0LL);
          if ( (__int64)++v100 >= v102 )
            goto LABEL_532;
          v98 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_624;
    }
  }
  if ( !v97 )
    goto LABEL_624;
LABEL_532:
  this = v183;
  skillLvLabel = v183->fields.skillLvLabel;
  servantEntity = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v97->klass->vtable._3_ToString.method)(
                    v97,
                    v97->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !skillLvLabel )
    goto LABEL_624;
  UILabel__set_text(skillLvLabel, (System_String_o *)servantEntity, 0LL);
  servantEntity = (__int64)v183->fields.skillLvLabel;
  if ( !servantEntity )
    goto LABEL_624;
  servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
  p_maskLabel = v181;
  p_statusTxtLb = v182;
  p_maskSprite = v180;
  if ( !servantEntity )
    goto LABEL_624;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  modeKind = v184;
  if ( item->fields.isParty )
  {
    servantEntity = (__int64)v183->fields.partyIcon;
    if ( !servantEntity )
      goto LABEL_624;
    FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    servantEntity = (__int64)v183->fields.lockImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList) )
  {
    v111 = (UnityEngine_Object_o *)v183->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v111, 0LL, 0LL) )
      goto LABEL_586;
    servantEntity = (__int64)v183->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)v183->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*v180;
    if ( !*v180 )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v112 = *v181;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9377/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v112 )
      goto LABEL_624;
    UILabel__set_text(v112, (System_String_o *)servantEntity, 0LL);
    if ( !item->fields.isHeroineSvt )
      goto LABEL_586;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_29217932(126, 0LL) )
      goto LABEL_586;
    v113 = *v181;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v114 = &StringLiteral_11707/*"SELECT_CANNOT"*/;
    goto LABEL_577;
  }
  v115 = (UnityEngine_Object_o *)v183->fields.baseButton;
  if ( !item->fields.isSkillUpItemNum )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v115, 0LL, 0LL) )
    {
      servantEntity = (__int64)v183->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_624;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
        servantEntity,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
      servantEntity = (__int64)v183->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_624;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
        servantEntity,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    }
    goto LABEL_586;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v115, 0LL, 0LL) )
  {
    servantEntity = (__int64)v183->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)v183->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*v182;
    if ( !*v182 )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v113 = *v182;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v114 = &StringLiteral_8883/*"MSG_ABLED_SKILLUP"*/;
LABEL_577:
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v114, 0LL);
    if ( !v113 )
      goto LABEL_624;
    UILabel__set_text(v113, (System_String_o *)servantEntity, 0LL);
  }
LABEL_586:
  if ( item->fields.isBaseSvt )
  {
    servantEntity = (__int64)v183->fields.removeImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  v95 = item->fields.type;
LABEL_591:
  if ( v95 != 11 )
    goto LABEL_702;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(item, (const MethodInfo *)switchInfoList);
  enableAppendSkillUp = item->fields.enableAppendSkillUp;
  v118 = AppendSkillData;
  v119 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v119, 0LL);
  if ( !v118 )
    goto LABEL_624;
  svtUseSkillIdList = v118->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_624;
  v121 = *(_QWORD *)&svtUseSkillIdList->max_length;
  if ( (int)v121 >= 1 )
  {
    v122 = 0LL;
    v123 = (unsigned int)(v121 - 1);
    v124 = (int)v121;
    while ( v122 < svtUseSkillIdList->max_length )
    {
      svtSkillLvList = v118->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_624;
      if ( v122 >= svtSkillLvList->max_length )
        break;
      v126 = (__int64)svtSkillLvList + 4 * v122;
      v127 = svtUseSkillIdList->m_Items[v122 + 1];
      v129 = *(_DWORD *)(v126 + 32);
      v128 = v126 + 32;
      if ( v129 <= 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9379/*"NONSKILL_TXT"*/, 0LL);
      }
      else
      {
        servantEntity = (__int64)System_Int32__ToString(v128, 0LL);
      }
      v130 = (Il2CppObject *)servantEntity;
      if ( enableAppendSkillUp )
      {
        v131 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v127,
                 (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v122 == v123 )
        {
          if ( v131 )
          {
            v132 = &StringLiteral_12342/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v132 = &StringLiteral_12342/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v132 = &StringLiteral_12342/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              }
            }
          }
          else
          {
            v132 = &StringLiteral_12344/*"SKILL_LVDISP_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v132 = &StringLiteral_12344/*"SKILL_LVDISP_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v132 = &StringLiteral_12344/*"SKILL_LVDISP_SINGLE_TXT"*/;
              }
            }
          }
        }
        else if ( v131 )
        {
          v132 = &StringLiteral_12343/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v132 = &StringLiteral_12343/*"SKILL_LVDISP_ENABLE_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v132 = &StringLiteral_12343/*"SKILL_LVDISP_ENABLE_TXT"*/;
            }
          }
        }
        else
        {
          v132 = &StringLiteral_12345/*"SKILL_LVDISP_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v132 = &StringLiteral_12345/*"SKILL_LVDISP_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v132 = &StringLiteral_12345/*"SKILL_LVDISP_TXT"*/;
            }
          }
        }
        servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v132, 0LL);
        if ( v119 )
        {
          servantEntity = (__int64)System_Text_StringBuilder__AppendFormat(
                                     v119,
                                     (System_String_o *)servantEntity,
                                     v130,
                                     0LL);
          if ( (__int64)++v122 >= v124 )
            goto LABEL_626;
          svtUseSkillIdList = v118->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_624;
    }
LABEL_1056:
    v179 = sub_B52A88(servantEntity);
    sub_B52A28(v179, 0LL);
  }
  if ( !v119 )
    goto LABEL_624;
LABEL_626:
  this = v183;
  v133 = v183->fields.skillLvLabel;
  servantEntity = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v119->klass->vtable._3_ToString.method)(
                    v119,
                    v119->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v133 )
    goto LABEL_624;
  UILabel__set_text(v133, (System_String_o *)servantEntity, 0LL);
  servantEntity = (__int64)v183->fields.skillLvLabel;
  p_maskLabel = v181;
  p_statusTxtLb = v182;
  p_maskSprite = v180;
  if ( !servantEntity )
    goto LABEL_624;
  servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
  if ( !servantEntity )
    goto LABEL_624;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  modeKind = v184;
  if ( item->fields.isParty )
  {
    servantEntity = (__int64)v183->fields.partyIcon;
    if ( !servantEntity )
      goto LABEL_624;
    FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    servantEntity = (__int64)v183->fields.lockImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  servantEntity = CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList);
  if ( (servantEntity & 1) != 0 )
  {
    servantEntity = (__int64)*v180;
    if ( !*v180 )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v134 = *v181;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9377/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v134 )
      goto LABEL_624;
    UILabel__set_text(v134, (System_String_o *)servantEntity, 0LL);
    if ( item->fields.isEventJoin )
    {
      v135 = *v181;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10451/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v135 )
        goto LABEL_624;
      UILabel__set_text(v135, (System_String_o *)servantEntity, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_669;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_29217932(126, 0LL) )
      goto LABEL_669;
    v136 = *v181;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v137 = &StringLiteral_11707/*"SELECT_CANNOT"*/;
    goto LABEL_667;
  }
  if ( !enableAppendSkillUp )
    goto LABEL_624;
  if ( enableAppendSkillUp->fields._size > 0 || item->fields.isAppendSkillOpenItemNum )
  {
    servantEntity = (__int64)*v182;
    if ( !*v182 )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v136 = *v182;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v137 = &StringLiteral_8883/*"MSG_ABLED_SKILLUP"*/;
LABEL_667:
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v137, 0LL);
    if ( !v136 )
      goto LABEL_624;
    UILabel__set_text(v136, (System_String_o *)servantEntity, 0LL);
  }
LABEL_669:
  v138 = (UnityEngine_Object_o *)v183->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v138, 0LL, 0LL) )
  {
    servantEntity = (__int64)v183->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)v183->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
  }
  coinInfo = (UnityEngine_Object_o *)v183->fields.coinInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(coinInfo, 0LL, 0LL) )
  {
    switchInfoComp = (UnityEngine_Object_o *)v183->fields.switchInfoComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(switchInfoComp, 0LL, 0LL) )
    {
      switchInfoList = (System_String_o *)v183->fields.switchInfoList;
      if ( switchInfoList )
      {
        servantEntity = (__int64)v183->fields.switchInfoComp;
        if ( !servantEntity )
          goto LABEL_624;
        SwitchUIWidgetComponent__Set((SwitchUIWidgetComponent_o *)servantEntity, (UIWidget_array *)switchInfoList, 0LL);
        servantEntity = (__int64)v183->fields.coinInfo;
        if ( !servantEntity )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
        coinNumLabel = v183->fields.coinNumLabel;
        servantEntity = CombineServantListViewItem__get_SkillOpenItemNum(item, v142);
        if ( (servantEntity & 0x80000000) != 0 )
        {
          switchInfoList = (System_String_o *)StringLiteral_1/*""*/;
          if ( !coinNumLabel )
            goto LABEL_624;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(item, v143);
          v144 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum);
          servantEntity = (__int64)System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v144, 0LL);
          switchInfoList = (System_String_o *)servantEntity;
          if ( !coinNumLabel )
            goto LABEL_624;
        }
        UILabel__set_text(coinNumLabel, switchInfoList, 0LL);
        servantEntity = CombineServantListViewItem__get_SkillOpenItemId(item, v145);
        coinIcon = v183->fields.coinIcon;
        if ( (int)servantEntity < 1 )
        {
          if ( !coinIcon )
            goto LABEL_624;
          servantEntity = (__int64)coinIcon->fields.iconSprite;
          if ( !servantEntity )
            goto LABEL_624;
          servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
          if ( !servantEntity )
            goto LABEL_624;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
        }
        else
        {
          servantEntity = CombineServantListViewItem__get_SkillOpenItemId(item, (const MethodInfo *)switchInfoList);
          if ( !coinIcon )
            goto LABEL_624;
          ItemIconComponent__SetItem(coinIcon, servantEntity, -1, 0LL);
        }
      }
    }
  }
  if ( item->fields.isBaseSvt )
  {
    servantEntity = (__int64)v183->fields.removeImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
LABEL_702:
  v147 = item->fields.type;
  if ( v147 != 4 )
    goto LABEL_756;
  servantEntity = (__int64)this->fields.npIconLabel;
  if ( !servantEntity )
    goto LABEL_624;
  v148 = SHIDWORD(v187.name) <= 0 ? -1 : LODWORD(v187.name);
  UIIconLabel__Set_41786400(
    (UIIconLabel_o *)servantEntity,
    33,
    v148,
    SHIDWORD(v187.methodPointer),
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  servantEntity = (__int64)this->fields.npLvInfo;
  if ( !servantEntity )
    goto LABEL_624;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  if ( item->fields.isParty )
  {
    servantEntity = (__int64)this->fields.partyIcon;
    if ( !servantEntity )
      goto LABEL_624;
    FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    servantEntity = (__int64)this->fields.lockImg;
    if ( !servantEntity )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList) )
  {
    v149 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v149, 0LL, 0LL) )
      goto LABEL_751;
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_624;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v150 = *p_maskLabel;
    if ( item->fields.isHeroineSvt )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v151 = &StringLiteral_9373/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v151 = &StringLiteral_9376/*"NONSELECT_NPUP_BASE"*/;
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v151, 0LL);
    if ( !v150 )
      goto LABEL_624;
    goto LABEL_750;
  }
  if ( !item->fields.isSameSvt && !item->fields.isBaseSvt )
  {
    v158 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v158, 0LL, 0LL) )
    {
      servantEntity = (__int64)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_624;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
        servantEntity,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
      servantEntity = (__int64)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_624;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
        servantEntity,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    }
    goto LABEL_751;
  }
  v152 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v152, 0LL, 0LL) )
  {
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    if ( item->fields.isSameSvt )
    {
      servantEntity = (__int64)*p_statusTxtLb;
      if ( !*p_statusTxtLb )
        goto LABEL_1057;
      servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
      if ( !servantEntity )
        goto LABEL_1057;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
      v150 = *p_statusTxtLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8885/*"MSG_ABLED_TDUP"*/, 0LL);
      if ( !v150 )
        goto LABEL_1057;
LABEL_750:
      UILabel__set_text(v150, (System_String_o *)servantEntity, 0LL);
    }
  }
LABEL_751:
  if ( item->fields.isBaseSvt )
  {
    servantEntity = (__int64)this->fields.removeImg;
    if ( !servantEntity )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  v147 = item->fields.type;
LABEL_756:
  if ( v147 != 6 )
    goto LABEL_834;
  servantEntity = (__int64)this->fields.limitCountIcon;
  if ( !servantEntity )
    goto LABEL_1057;
  LimitCountIconComponent__Set(
    (LimitCountIconComponent_o *)servantEntity,
    item->fields.currentLimitCnt,
    item->fields.maxLimitCnt,
    0LL);
  if ( item->fields.isParty )
  {
    servantEntity = (__int64)this->fields.partyIcon;
    if ( !servantEntity )
      goto LABEL_1057;
    FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    servantEntity = (__int64)this->fields.lockImg;
    if ( !servantEntity )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList) )
  {
    v153 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v153, 0LL, 0LL) )
    {
      servantEntity = (__int64)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_1057;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
        servantEntity,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
      servantEntity = (__int64)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_1057;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
        servantEntity,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
      servantEntity = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1057;
      servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
      if ( !servantEntity )
        goto LABEL_1057;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
      if ( item->fields.isHeroineSvt )
      {
        v154 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v155 = &StringLiteral_9373/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        v154 = *p_maskLabel;
        if ( item->fields.isEventJoin )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v155 = &StringLiteral_11730/*"SELECT_SERVANT_EVENT_JOIN"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v155 = &StringLiteral_9417/*"NO_SELECT_LVEXCEED"*/;
        }
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v155, 0LL);
      if ( !v154 )
        goto LABEL_624;
      goto LABEL_829;
    }
    goto LABEL_830;
  }
  if ( !item->fields.isLvMax || !item->fields.isLimitCntMax )
  {
    v157 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v157, 0LL, 0LL) )
      goto LABEL_830;
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
LABEL_804:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    goto LABEL_830;
  }
  v156 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !item->fields.isLvExceedItemNum )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v156, 0LL, 0LL) )
      goto LABEL_830;
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    goto LABEL_804;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v156, 0LL, 0LL) )
  {
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
    servantEntity = (__int64)*p_maskLabel;
    if ( !*p_maskLabel )
      goto LABEL_1057;
    UILabel__set_text((UILabel_o *)servantEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    servantEntity = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v154 = *p_statusTxtLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8882/*"MSG_ABLED_LIMITUP"*/, 0LL);
    if ( !v154 )
      goto LABEL_1057;
LABEL_829:
    UILabel__set_text(v154, (System_String_o *)servantEntity, 0LL);
  }
LABEL_830:
  if ( item->fields.isBaseSvt )
  {
    servantEntity = (__int64)this->fields.removeImg;
    if ( !servantEntity )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
LABEL_834:
  v159 = item->fields.type;
  if ( v159 != 10 && v159 != 7 )
    goto LABEL_906;
  servantEntity = (__int64)this->fields.limitCountIcon;
  if ( !servantEntity )
    goto LABEL_1057;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)servantEntity, 0LL);
  servantEntity = (__int64)this->fields.subIconLabel;
  if ( !servantEntity )
    goto LABEL_1057;
  UIIconLabel__Clear((UIIconLabel_o *)servantEntity, 0LL);
  v161 = item->fields.type;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  }
  servantEntity = CombineServantListViewManager__GetSortKind(v161, v160);
  v162 = this->fields.servantFaceIcon;
  if ( !v162 )
    goto LABEL_1057;
  if ( (_DWORD)servantEntity == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *, __int64, Il2CppMethodPointer))v162->klass->vtable._4_ParameterChange.method)(
      this->fields.servantFaceIcon,
      1LL,
      v162->klass->vtable._5_UpdateAlpha.methodPtr);
    servantEntity = (__int64)this->fields.servantFaceIcon;
    if ( !servantEntity )
      goto LABEL_1057;
    ServantFaceIconComponent__ResetIconLabelPos((ServantFaceIconComponent_o *)servantEntity, 0LL);
    servantEntity = (__int64)this->fields.servantFaceIcon;
    if ( !servantEntity )
      goto LABEL_1057;
    ServantFaceIconComponent__AdjustIconLabelPos((ServantFaceIconComponent_o *)servantEntity, 1.0, -1.0, 0LL);
  }
  else
  {
    ServantFaceIconComponent__ResetIconLabelPos(this->fields.servantFaceIcon, 0LL);
  }
  if ( item->fields.isParty )
  {
    servantEntity = (__int64)this->fields.partyIcon;
    if ( !servantEntity )
      goto LABEL_1057;
    FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    servantEntity = (__int64)this->fields.lockImg;
    if ( !servantEntity )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  v163 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList);
  v164 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( v163 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v164, 0LL, 0LL) )
      goto LABEL_893;
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    if ( item->fields.type == 10 && item->fields.isCommandCardExceedMax )
    {
      v165 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9370/*"NONSEELECT_STATUSUP_MAX"*/, 0LL);
      if ( !v165 )
        goto LABEL_1057;
      UILabel__set_text(v165, (System_String_o *)servantEntity, 0LL);
    }
    if ( item->fields.isEventJoin )
    {
      v166 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11730/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v166 )
        goto LABEL_1057;
      UILabel__set_text(v166, (System_String_o *)servantEntity, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_893;
    v167 = *p_maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11707/*"SELECT_CANNOT"*/, 0LL);
    if ( !v167 )
      goto LABEL_1057;
    v168 = (System_String_o *)servantEntity;
    servantEntity = (__int64)v167;
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v164, 0LL, 0LL) )
      goto LABEL_893;
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
    servantEntity = (__int64)*p_maskLabel;
    if ( !*p_maskLabel )
      goto LABEL_1057;
    v168 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)servantEntity, v168, 0LL);
LABEL_893:
  if ( item->fields.isBaseSvt )
  {
    servantEntity = (__int64)this->fields.removeImg;
    if ( !servantEntity )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  v169 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Implicit(v169, 0LL) )
  {
    servantEntity = (__int64)this->fields.svtCommandCardList;
    if ( !servantEntity )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v170 = this->fields.svtCommandCardList;
    servantEntity = CombineServantListViewItem__get_UserSvtId(item, v171);
    if ( !v170 )
      goto LABEL_1057;
    ServantCommandCardListComponent__Set(v170, servantEntity, 1, 1, 0LL);
  }
  v159 = item->fields.type;
LABEL_906:
  if ( v159 != 8 )
    goto LABEL_975;
  if ( item->fields.isParty )
  {
    servantEntity = (__int64)this->fields.partyIcon;
    if ( !servantEntity )
      goto LABEL_1057;
    FlashingIconComponent__Set((FlashingIconComponent_o *)servantEntity, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    servantEntity = (__int64)this->fields.lockImg;
    if ( !servantEntity )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, (const MethodInfo *)switchInfoList) )
  {
    v172 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v172, 0LL, 0LL) )
    {
      servantEntity = (__int64)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_1057;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
        servantEntity,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
      servantEntity = (__int64)this->fields.baseButton;
      if ( !servantEntity )
        goto LABEL_1057;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
        servantEntity,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
      servantEntity = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1057;
      servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
      if ( !servantEntity )
        goto LABEL_1057;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
      if ( item->fields.isHeroineSvt )
      {
        v173 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v174 = &StringLiteral_9373/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        v173 = *p_maskLabel;
        if ( item->fields.isEventJoin )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v174 = &StringLiteral_11730/*"SELECT_SERVANT_EVENT_JOIN"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v174 = &StringLiteral_9416/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
        }
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)*v174, 0LL);
      if ( !v173 )
        goto LABEL_624;
      goto LABEL_970;
    }
    goto LABEL_971;
  }
  if ( !item->fields.isFriendshipRankMax )
  {
    v176 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v176, 0LL, 0LL) )
      goto LABEL_971;
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
LABEL_959:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    goto LABEL_971;
  }
  v175 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !item->fields.isFriendshipExceedItemNum )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v175, 0LL, 0LL) )
      goto LABEL_971;
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_624;
    goto LABEL_959;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v175, 0LL, 0LL) )
  {
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantEntity + 392LL))(
      servantEntity,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 400LL));
    servantEntity = (__int64)this->fields.baseButton;
    if ( !servantEntity )
      goto LABEL_1057;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantEntity + 536LL))(
      servantEntity,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)servantEntity + 544LL));
    servantEntity = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
    servantEntity = (__int64)*p_maskLabel;
    if ( !*p_maskLabel )
      goto LABEL_1057;
    UILabel__set_text((UILabel_o *)servantEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    servantEntity = (__int64)*p_statusTxtLb;
    if ( !*p_statusTxtLb )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v173 = *p_statusTxtLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8881/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, 0LL);
    if ( !v173 )
      goto LABEL_1057;
LABEL_970:
    UILabel__set_text(v173, (System_String_o *)servantEntity, 0LL);
  }
LABEL_971:
  if ( item->fields.isBaseSvt )
  {
    servantEntity = (__int64)this->fields.removeImg;
    if ( !servantEntity )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
  }
LABEL_975:
  if ( (unsigned int)(modeKind - 1) > 1 )
  {
    if ( modeKind != 3 )
      return;
    if ( item->fields.isEventJoin )
    {
      servantEntity = (__int64)*p_maskSprite;
      if ( !*p_maskSprite )
        goto LABEL_1057;
      servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
      if ( !servantEntity )
        goto LABEL_1057;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
      v177 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11730/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v177 )
        goto LABEL_1057;
      goto LABEL_1016;
    }
    if ( !item->fields.isCanNotLock )
    {
      servantEntity = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, (const MethodInfo *)switchInfoList);
      if ( !servantEntity )
        goto LABEL_1057;
      if ( !UserServantEntity__IsLeave((UserServantEntity_o *)servantEntity, 0LL) )
      {
        servantEntity = (__int64)CombineServantListViewItem__get_UserSvtEntity(item, (const MethodInfo *)switchInfoList);
        if ( !servantEntity )
          goto LABEL_1057;
        if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)servantEntity, 0LL) )
        {
          servantEntity = (__int64)CombineServantListViewItem__get_UserSvtEntity(
                                     item,
                                     (const MethodInfo *)switchInfoList);
          if ( !servantEntity )
            goto LABEL_1057;
          if ( !UserServantEntity__IsStatusUp((UserServantEntity_o *)servantEntity, 0LL) )
          {
            servantEntity = (__int64)CombineServantListViewItem__get_UserSvtEntity(
                                       item,
                                       (const MethodInfo *)switchInfoList);
            if ( !servantEntity )
              goto LABEL_1057;
            if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)servantEntity, 0LL) )
            {
              servantEntity = (__int64)*p_maskSprite;
              if ( !*p_maskSprite )
                goto LABEL_1057;
              servantEntity = (__int64)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)servantEntity,
                                         0LL);
              if ( !servantEntity )
                goto LABEL_1057;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 0, 0LL);
              servantEntity = (__int64)*p_maskLabel;
              if ( !*p_maskLabel )
                goto LABEL_1057;
              v178 = (System_String_o *)StringLiteral_1/*""*/;
              goto LABEL_1017;
            }
          }
        }
      }
    }
    servantEntity = (__int64)*p_maskSprite;
    if ( !*p_maskSprite )
      goto LABEL_1057;
    servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
    if ( !servantEntity )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, 1, 0LL);
    v177 = *p_maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantEntity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8478/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
    if ( v177 )
    {
LABEL_1016:
      v178 = (System_String_o *)servantEntity;
      servantEntity = (__int64)v177;
LABEL_1017:
      UILabel__set_text((UILabel_o *)servantEntity, v178, 0LL);
      servantEntity = (__int64)*p_statusTxtLb;
      if ( *p_statusTxtLb )
      {
LABEL_1018:
        UILabel__set_text((UILabel_o *)servantEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        return;
      }
LABEL_1057:
      sub_B52A5C(servantEntity, switchInfoList);
    }
LABEL_624:
    sub_B52A5C(servantEntity, switchInfoList);
  }
  if ( !item->fields.isHeroineSvt )
    goto LABEL_981;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_29217932(126, 0LL) )
  {
LABEL_981:
    servantEntity = (__int64)*p_maskSprite;
    if ( *p_maskSprite )
    {
      servantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEntity, 0LL);
      if ( servantEntity )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEntity, item->fields.isCanNotLock, 0LL);
        if ( item->fields.isCanNotLock )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          switchInfoList = LocalizationManager__Get((System_String_o *)StringLiteral_8478/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
        }
        else
        {
          switchInfoList = (System_String_o *)StringLiteral_1/*""*/;
        }
        servantEntity = (__int64)*p_maskLabel;
        if ( *p_maskLabel )
        {
          UILabel__set_text((UILabel_o *)servantEntity, switchInfoList, 0LL);
          servantEntity = (__int64)*p_statusTxtLb;
          if ( !*p_statusTxtLb )
            goto LABEL_624;
          goto LABEL_1018;
        }
      }
    }
    goto LABEL_1057;
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

  if ( (byte_42B2CCF & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2CCF = 1;
  }
  dragSelect = (UnityEngine_Object_o *)this->fields.dragSelect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(dragSelect, 0LL, 0LL) )
  {
    v7 = this->fields.dragSelect;
    if ( item )
    {
      if ( v7 )
      {
        dragSelectNum = item->fields.dragSelectNum;
        selectNum = item->fields.selectNum;
LABEL_12:
        DragSelectComponent__Set(v7, selectNum, dragSelectNum, 0LL);
        return;
      }
    }
    else if ( v7 )
    {
      selectNum = -1;
      dragSelectNum = -1;
      goto LABEL_12;
    }
    sub_B52A5C(v7, v6);
  }
}