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
  const MethodInfo *v13; // x1
  unsigned int type; // w8
  _BOOL4 v15; // w23
  bool CanNotBaseSelect; // w0
  bool v17; // w22
  ServantEntity_o *servantEntity; // x0
  _BOOL4 v19; // w25
  int v20; // w24
  UnityEngine_Object_o *baseButton; // x23
  const MethodInfo *v22; // x2
  struct UICommonButton_o *v23; // x0
  struct UICommonButton_o *v24; // x0
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  const MethodInfo *v27; // x1
  UILabel_o *v28; // x21
  System_String_o *v29; // x0
  LocalizationManager_c *v30; // x0
  UILabel_o *maskLabel; // x21
  struct UICommonButton_o *v32; // x0
  struct UICommonButton_o *v33; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v36; // x22
  struct UICommonButton_o *v37; // x0
  struct UICommonButton_o *v38; // x0
  int v39; // w22
  struct UICommonButton_o *v40; // x0
  struct UICommonButton_o *v41; // x0
  int32_t v42; // w8
  UnityEngine_Component_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  __int64 *v45; // x8
  int32_t atkBase; // w8
  UILabel_o *v47; // x21
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  UILabel_o *v50; // x21
  System_String_o *v51; // x0

  v4 = isSelectEnable;
  if ( (byte_40FC92B & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_9291/*"NONSELECT_UNDER_STATUS_MAX"*/, v8);
    sub_B16FFC(&StringLiteral_9286/*"NONSELECT_MATERIAL"*/, v9);
    sub_B16FFC(&StringLiteral_9289/*"NONSELECT_NPUP_BASE"*/, v10);
    sub_B16FFC(&StringLiteral_9287/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v11);
    byte_40FC92B = 1;
  }
  if ( item )
  {
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
    type = item->fields.type;
    v15 = IsSelect;
    if ( type > 0xB )
    {
      v17 = 0;
    }
    else
    {
      if ( ((1 << type) & 0xFDD) != 0 )
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, v13);
      else
        CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotSelect(item, v13);
      v17 = CanNotBaseSelect;
    }
    servantEntity = item->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_107;
    v19 = !ServantEntity__get_IsOrganization(servantEntity, 0LL);
    v20 = !v15;
  }
  else
  {
    v17 = 0;
    v20 = 1;
    v19 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !v17 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      v32 = this->fields.baseButton;
      if ( !v32 )
        goto LABEL_107;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v32->klass->vtable._5_set_isEnabled.method)(
        v32,
        1LL,
        v32->klass->vtable._6_OnInit.methodPtr);
      v33 = this->fields.baseButton;
      if ( !v33 )
        goto LABEL_107;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v33->klass->vtable._14_SetState.method)(
        v33,
        0LL,
        1LL,
        v33->klass->vtable._15_OnPress.methodPtr);
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_107;
      gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
      if ( !gameObject )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
    if ( !item )
      goto LABEL_93;
    v36 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( item->fields.isMaxSelect )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
      {
        v37 = this->fields.baseButton;
        if ( !v37 )
          goto LABEL_107;
        ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v37->klass->vtable._5_set_isEnabled.method)(
          v37,
          1LL,
          v37->klass->vtable._6_OnInit.methodPtr);
        v38 = this->fields.baseButton;
        if ( !v38 )
          goto LABEL_107;
        v39 = 1;
        ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v38->klass->vtable._14_SetState.method)(
          v38,
          0LL,
          1LL,
          v38->klass->vtable._15_OnPress.methodPtr);
LABEL_56:
        v42 = item->fields.type;
        if ( v42 == 5 )
        {
          if ( !(v39 & 1 | item->fields.isMaxNextLv) )
            goto LABEL_93;
        }
        else if ( v42 == 1 )
        {
          if ( ((v20 & ~(v19 || v4) | v39) & 1) == 0 )
            goto LABEL_93;
        }
        else if ( !v39 )
        {
          goto LABEL_93;
        }
        v43 = (UnityEngine_Component_o *)this->fields.maskSprite;
        if ( !v43 )
          goto LABEL_107;
        v44 = UnityEngine_Component__get_gameObject(v43, 0LL);
        if ( !v44 )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive(v44, 1, 0LL);
        maskLabel = this->fields.maskLabel;
        v30 = LocalizationManager_TypeInfo;
        if ( item->fields.type == 5 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
          {
LABEL_69:
            v45 = &StringLiteral_9289/*"NONSELECT_NPUP_BASE"*/;
            goto LABEL_91;
          }
LABEL_67:
          if ( !v30->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v30);
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
      if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
      {
        v40 = this->fields.baseButton;
        if ( !v40 )
          goto LABEL_107;
        ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v40->klass->vtable._5_set_isEnabled.method)(
          v40,
          1LL,
          v40->klass->vtable._6_OnInit.methodPtr);
        v41 = this->fields.baseButton;
        if ( !v41 )
          goto LABEL_107;
        ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v41->klass->vtable._14_SetState.method)(
          v41,
          0LL,
          1LL,
          v41->klass->vtable._15_OnPress.methodPtr);
      }
    }
    v39 = 0;
    goto LABEL_56;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    goto LABEL_93;
  v23 = this->fields.baseButton;
  if ( !v23 )
    goto LABEL_107;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v23->klass->vtable._5_set_isEnabled.method)(
    v23,
    1LL,
    v23->klass->vtable._6_OnInit.methodPtr);
  v24 = this->fields.baseButton;
  if ( !v24 )
    goto LABEL_107;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v24->klass->vtable._14_SetState.method)(
    v24,
    0LL,
    1LL,
    v24->klass->vtable._15_OnPress.methodPtr);
  v25 = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !v25 )
    goto LABEL_107;
  v26 = UnityEngine_Component__get_gameObject(v25, 0LL);
  if ( !v26 )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive(v26, 1, 0LL);
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
          v47 = this->fields.maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v48 = LocalizationManager__Get((System_String_o *)StringLiteral_9291/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v47 )
            goto LABEL_107;
          UILabel__set_text(v47, v48, 0LL);
        }
        if ( item->fields.hpBase < 1 || !item->fields.isNotSelectSecondStatusUpHp )
          goto LABEL_93;
      }
      else
      {
        if ( atkBase >= 1 && item->fields.isNotSelectStatusUpAtk )
        {
          v50 = this->fields.maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v51 = LocalizationManager__Get((System_String_o *)StringLiteral_9291/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
          if ( !v50 )
            goto LABEL_107;
          UILabel__set_text(v50, v51, 0LL);
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
      v45 = &StringLiteral_9291/*"NONSELECT_UNDER_STATUS_MAX"*/;
LABEL_91:
      v49 = LocalizationManager__Get((System_String_o *)*v45, 0LL);
      if ( maskLabel )
      {
        UILabel__set_text(maskLabel, v49, 0LL);
        goto LABEL_93;
      }
LABEL_107:
      sub_B170D4();
    }
    maskLabel = this->fields.maskLabel;
    v30 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
    {
LABEL_90:
      v45 = &StringLiteral_9286/*"NONSELECT_MATERIAL"*/;
      goto LABEL_91;
    }
LABEL_88:
    if ( !v30->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v30);
    goto LABEL_90;
  }
  if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(item, v27) )
  {
    v28 = this->fields.maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_9287/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
    if ( !v28 )
      goto LABEL_107;
    UILabel__set_text(v28, v29, 0LL);
    if ( item->fields.type == 5 )
    {
      v30 = LocalizationManager_TypeInfo;
      maskLabel = this->fields.maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_69;
      goto LABEL_67;
    }
  }
LABEL_93:
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
  const MethodInfo *v63; // x1
  UnityEngine_Component_o *v64; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t type; // w19
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  UserServantEntity_o *UserSvtEntity; // x0
  IconLabelInfo_o *iconLabelInfo1; // x2
  UIIconLabel_o *subIconLabel; // x23
  int32_t rarity; // w24
  const MethodInfo *v72; // x1
  UserServantEntity_o *v73; // x0
  const MethodInfo *v74; // x1
  IconLabelInfo_o *iconLabelInfo2; // x0
  bool IsClear; // w0
  const MethodInfo *v77; // x1
  int32_t exceedCount; // w25
  UserServantEntity_o *v79; // x0
  const MethodInfo *v80; // x4
  UnityEngine_Component_o *lockImg; // x0
  UnityEngine_GameObject_o *v82; // x0
  UnityEngine_Component_o *statusTxtLb; // x0
  UILabel_o **p_statusTxtLb; // x20
  UnityEngine_GameObject_o *v85; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_Component_o **p_maskSprite; // x28
  UnityEngine_GameObject_o *v88; // x0
  UILabel_o *maskLabel; // x0
  UILabel_o **p_maskLabel; // x25
  UnityEngine_Component_o *skillLvLabel; // x0
  UnityEngine_GameObject_o *v92; // x0
  FlashingIconComponent_o *partyIcon; // x0
  UnityEngine_Component_o *removeImg; // x0
  UnityEngine_GameObject_o *v95; // x0
  UnityEngine_GameObject_o *npLvInfo; // x0
  LimitCountIconComponent_o *limitCountIcon; // x0
  UnityEngine_Component_o *choiceImg; // x0
  UnityEngine_GameObject_o *v99; // x0
  SwitchUIWidgetComponent_o *switchInfoComp; // x0
  UnityEngine_GameObject_o *fortificationRootObj; // x0
  UILabel_o *fortificationNameLabel; // x0
  UILabel_o *fortificationDetailNameLabel; // x0
  UILabel_o *fortificationAppointmentLabel; // x0
  UnityEngine_Object_o *pushImg; // x23
  UnityEngine_Component_o *v106; // x0
  UnityEngine_GameObject_o *v107; // x0
  ServantFaceIconComponent_o *v108; // x0
  UnityEngine_Object_o *materialTdSprite; // x23
  MethodInfo *switchInfoList; // x1
  const MethodInfo *v111; // x2
  UnityEngine_Component_o *v112; // x0
  UnityEngine_GameObject_o *v113; // x0
  UISprite_o *v114; // x23
  const MethodInfo *v115; // x1
  int32_t v116; // w23
  ServantFaceIconComponent_o *v117; // x0
  int32_t v118; // w8
  LimitCountIconComponent_o *v119; // x0
  const MethodInfo *v120; // x1
  FlashingIconComponent_o *v121; // x0
  UnityEngine_Component_o *v122; // x0
  UnityEngine_GameObject_o *v123; // x0
  bool CanNotBaseSelect; // w0
  UnityEngine_Object_o *v125; // x22
  struct UICommonButton_o *v126; // x0
  struct UICommonButton_o *v127; // x0
  UnityEngine_GameObject_o *v128; // x0
  UILabel_o *v129; // x22
  __int64 *v130; // x8
  UIIconLabel_o *npIconLabel; // x0
  int32_t v132; // w2
  UnityEngine_GameObject_o *v133; // x0
  const MethodInfo *v134; // x2
  LimitCountIconComponent_o *v135; // x0
  UserServantEntity_o *v136; // x0
  char v137; // w19
  FlashingIconComponent_o *v138; // x0
  UnityEngine_GameObject_o *v139; // x0
  UILabel_o *v140; // x23
  System_String_o *v141; // x0
  UnityEngine_GameObject_o *v142; // x0
  UILabel_o *v143; // x23
  System_String_o *v144; // x0
  UnityEngine_Component_o *v145; // x0
  UnityEngine_GameObject_o *v146; // x0
  UnityEngine_GameObject_o *v147; // x0
  UILabel_o *v148; // x23
  System_String_o *v149; // x0
  UnityEngine_GameObject_o *v150; // x0
  UILabel_o *v151; // x23
  System_String_o *v152; // x0
  UnityEngine_GameObject_o *v153; // x0
  UILabel_o *v154; // x23
  System_String_o *v155; // x0
  UnityEngine_GameObject_o *v156; // x0
  UILabel_o *v157; // x23
  System_String_o *v158; // x0
  UnityEngine_GameObject_o *v159; // x0
  UILabel_o *v160; // x23
  System_String_o *v161; // x0
  UnityEngine_GameObject_o *v162; // x0
  UILabel_o *v163; // x23
  System_String_o *v164; // x0
  UnityEngine_GameObject_o *v165; // x0
  UILabel_o *v166; // x23
  __int64 *v167; // x8
  struct UICommonButton_o *v168; // x0
  struct UICommonButton_o *v169; // x0
  UnityEngine_GameObject_o *v170; // x0
  UserServantEntity_o *v171; // x0
  UserServantEntity_o *v172; // x0
  __int64 v173; // x1
  __int64 v174; // x2
  __int64 v175; // x3
  __int64 v176; // x4
  UserServantEntity_o *v177; // x0
  UserServantEntity_o *v178; // x0
  CombineServantListViewNoticeTween_o *v179; // x0
  UILabel_o *v180; // x22
  System_String_o *v181; // x23
  float v182; // s0
  Il2CppObject *v183; // x0
  System_String_o *v184; // x0
  System_String_o *v185; // x0
  UnityEngine_GameObject_o *v186; // x0
  UILabel_o *v187; // x23
  System_String_o *v188; // x0
  const MethodInfo *v189; // x1
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x23
  struct UICommonButton_o *v192; // x0
  struct UICommonButton_o *v193; // x0
  UnityEngine_GameObject_o *v194; // x0
  int32_t v195; // w8
  UILabel_o *v196; // x22
  System_String_o *v197; // x0
  UILabel_o *v198; // x22
  System_String_o *v199; // x0
  UILabel_o *v200; // x22
  System_String_o *v201; // x0
  UILabel_o *v202; // x22
  __int64 *v203; // x8
  struct UICommonButton_o *v204; // x0
  struct UICommonButton_o *v205; // x0
  UnityEngine_GameObject_o *v206; // x0
  UnityEngine_Object_o *v207; // x23
  struct UICommonButton_o *v208; // x0
  struct UICommonButton_o *v209; // x0
  int v210; // w19
  struct UICommonButton_o *v211; // x0
  struct UICommonButton_o *v212; // x0
  ServantEntity_o *servantEntity; // x0
  UnityEngine_GameObject_o *v214; // x0
  UILabel_o *v215; // x22
  __int64 *v216; // x8
  UILabel_o *v217; // x22
  System_String_o *v218; // x0
  UnityEngine_GameObject_o *v219; // x0
  UILabel_o *v220; // x23
  System_String_o *v221; // x0
  UILabel_o *v222; // x22
  System_String_o *v223; // x0
  UILabel_o *v224; // x22
  System_String_o *v225; // x0
  System_String_o *v226; // x0
  int32_t v227; // w8
  System_String_o *v228; // x0
  System_String_o *v229; // x0
  System_String_o *v230; // x1
  UILabel_o *v231; // x0
  CombineServantListViewNoticeTween_o *NoticeTween_k__BackingField; // x0
  CombineServantListViewNoticeTween_o *v233; // x0
  UserServantEntity_o *v234; // x0
  UserServantEntity_o *v235; // x0
  UnityEngine_GameObject_o *v236; // x0
  UnityEngine_GameObject_o *v237; // x0
  UILabel_o *v238; // x0
  UILabel_o *v239; // x0
  UILabel_o *v240; // x22
  System_String_o *v241; // x0
  UILabel_o *v242; // x0
  UILabel_o *v243; // x0
  UnityEngine_GameObject_o *v244; // x0
  UnityEngine_Transform_o *transform; // x0
  float v246; // s0
  float v247; // s2
  UnityEngine_GameObject_o *v248; // x0
  float fortificationInfoRootObjOffsetY; // s10
  float v250; // s8
  float v251; // s9
  UnityEngine_Transform_o *v252; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v253; // x22
  System_String_o *v254; // x23
  float v255; // s0
  Il2CppObject *v256; // x0
  System_String_o *v257; // x0
  System_String_o *v258; // x0
  CombineServantListViewNoticeTween_o *v259; // x0
  CombineServantListViewNoticeTween_o *v260; // x0
  UnityEngine_GameObject_o *v261; // x0
  UnityEngine_Component_o *v262; // x0
  UnityEngine_GameObject_o *v263; // x0
  LimitCountIconComponent_o *v264; // x0
  const MethodInfo *v265; // x1
  FlashingIconComponent_o *v266; // x0
  UnityEngine_Component_o *v267; // x0
  UnityEngine_GameObject_o *v268; // x0
  UnityEngine_Object_o *v269; // x22
  struct UICommonButton_o *v270; // x0
  struct UICommonButton_o *v271; // x0
  UnityEngine_GameObject_o *v272; // x0
  UILabel_o *v273; // x22
  LocalizationManager_c *v274; // x0
  LimitCountIconComponent_o *v275; // x0
  const MethodInfo *v276; // x1
  FlashingIconComponent_o *v277; // x0
  UnityEngine_Component_o *v278; // x0
  UnityEngine_GameObject_o *v279; // x0
  bool v280; // w0
  UnityEngine_Object_o *v281; // x22
  struct UICommonButton_o *v282; // x0
  struct UICommonButton_o *v283; // x0
  UnityEngine_GameObject_o *v284; // x0
  __int64 *v285; // x8
  UnityEngine_Object_c *v286; // x0
  struct UICommonButton_o *v287; // x0
  struct UICommonButton_o *v288; // x0
  UnityEngine_GameObject_o *v289; // x0
  UILabel_o *v290; // x0
  System_String_o *v291; // x1
  UnityEngine_Object_o *v292; // x22
  struct UICommonButton_o *v293; // x0
  struct UICommonButton_o *v294; // x0
  struct UICommonButton_o *v295; // x0
  struct UICommonButton_o *v296; // x0
  UnityEngine_GameObject_o *v297; // x0
  UnityEngine_GameObject_o *v298; // x0
  System_String_o *v299; // x0
  UnityEngine_Component_o *v300; // x0
  UnityEngine_GameObject_o *v301; // x0
  int32_t v302; // w8
  System_Collections_Generic_List_int__o *enableSkillUp; // x23
  __int64 v304; // x1
  __int64 v305; // x2
  __int64 v306; // x3
  __int64 v307; // x4
  System_Text_StringBuilder_o *v308; // x22
  System_Text_StringBuilder_o *appended; // x0
  __int64 v310; // x1
  __int64 v311; // x2
  SkillInfo_array *v312; // x8
  __int64 v313; // x9
  unsigned __int64 v314; // x26
  __int64 v315; // x27
  signed __int64 v316; // x20
  SkillInfo_o *v317; // x0
  int32_t *p_lv; // x0
  int lv; // t1
  int32_t v320; // w25
  System_String_o *v321; // x0
  Il2CppObject *v322; // x24
  bool v323; // w0
  __int64 *v324; // x10
  System_String_o *v325; // x0
  UILabel_o *v326; // x23
  System_String_o *v327; // x0
  UnityEngine_Component_o *v328; // x0
  UnityEngine_GameObject_o *v329; // x0
  const MethodInfo *v330; // x1
  FlashingIconComponent_o *v331; // x0
  UnityEngine_Component_o *v332; // x0
  UnityEngine_GameObject_o *v333; // x0
  UnityEngine_Object_o *v334; // x22
  struct UICommonButton_o *v335; // x0
  struct UICommonButton_o *v336; // x0
  UnityEngine_GameObject_o *v337; // x0
  UILabel_o *v338; // x22
  System_String_o *v339; // x0
  UnityEngine_Component_o *v340; // x22
  __int64 *v341; // x8
  UnityEngine_Object_o *v342; // x22
  struct UICommonButton_o *v343; // x0
  struct UICommonButton_o *v344; // x0
  UnityEngine_GameObject_o *v345; // x0
  System_String_o *v346; // x0
  struct UICommonButton_o *v347; // x0
  struct UICommonButton_o *v348; // x0
  UnityEngine_Component_o *v349; // x0
  UnityEngine_GameObject_o *v350; // x0
  SvtUseSkillData_o *AppendSkillData; // x0
  struct System_Collections_Generic_List_int__o *enableAppendSkillUp; // x22
  SvtUseSkillData_o *v353; // x24
  __int64 v354; // x1
  __int64 v355; // x2
  __int64 v356; // x3
  __int64 v357; // x4
  System_Text_StringBuilder_o *v358; // x23
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v360; // x9
  unsigned __int64 v361; // x27
  __int64 v362; // x20
  signed __int64 v363; // x28
  struct System_Int32_array *svtSkillLvList; // x9
  __int64 v365; // x0
  int32_t v366; // w26
  int32_t v367; // w0
  int v368; // t1
  System_String_o *v369; // x0
  Il2CppObject *v370; // x25
  bool v371; // w0
  __int64 *v372; // x10
  System_String_o *v373; // x0
  UILabel_o *v374; // x24
  System_String_o *v375; // x0
  UnityEngine_Component_o *v376; // x0
  UnityEngine_GameObject_o *v377; // x0
  const MethodInfo *v378; // x1
  FlashingIconComponent_o *v379; // x0
  UnityEngine_Component_o *v380; // x0
  UnityEngine_GameObject_o *v381; // x0
  UnityEngine_GameObject_o *v382; // x0
  UILabel_o *v383; // x22
  System_String_o *v384; // x0
  UILabel_o *v385; // x22
  System_String_o *v386; // x0
  UnityEngine_Component_o *v387; // x22
  __int64 *v388; // x8
  UnityEngine_GameObject_o *v389; // x0
  System_String_o *v390; // x0
  UnityEngine_Object_o *v391; // x22
  struct UICommonButton_o *v392; // x0
  struct UICommonButton_o *v393; // x0
  UnityEngine_Object_o *coinInfo; // x22
  UnityEngine_Object_o *v395; // x22
  SwitchUIWidgetComponent_o *v396; // x0
  UnityEngine_GameObject_o *v397; // x0
  UILabel_o *coinNumLabel; // x22
  const MethodInfo *v399; // x1
  const MethodInfo *v400; // x1
  Il2CppObject *v401; // x0
  System_String_o *v402; // x1
  const MethodInfo *v403; // x1
  int32_t SkillOpenItemId; // w0
  const MethodInfo *v405; // x1
  ItemIconComponent_o *coinIcon; // x22
  int32_t v407; // w0
  UnityEngine_Component_o *iconSprite; // x0
  UnityEngine_GameObject_o *v409; // x0
  UnityEngine_Component_o *v410; // x0
  UnityEngine_GameObject_o *v411; // x0
  int32_t v412; // w8
  UIIconLabel_o *v413; // x0
  int32_t v414; // w2
  UnityEngine_GameObject_o *v415; // x0
  const MethodInfo *v416; // x1
  FlashingIconComponent_o *v417; // x0
  UnityEngine_Component_o *v418; // x0
  UnityEngine_GameObject_o *v419; // x0
  UnityEngine_Object_o *v420; // x22
  struct UICommonButton_o *v421; // x0
  struct UICommonButton_o *v422; // x0
  UnityEngine_GameObject_o *v423; // x0
  UILabel_o *v424; // x22
  __int64 *v425; // x8
  UnityEngine_Object_o *v426; // x22
  struct UICommonButton_o *v427; // x0
  struct UICommonButton_o *v428; // x0
  UnityEngine_GameObject_o *v429; // x0
  System_String_o *v430; // x0
  UnityEngine_Component_o *v431; // x0
  UnityEngine_GameObject_o *v432; // x0
  LimitCountIconComponent_o *v433; // x0
  const MethodInfo *v434; // x1
  FlashingIconComponent_o *v435; // x0
  UnityEngine_Component_o *v436; // x0
  UnityEngine_GameObject_o *v437; // x0
  UnityEngine_Object_o *v438; // x22
  struct UICommonButton_o *v439; // x0
  struct UICommonButton_o *v440; // x0
  UnityEngine_GameObject_o *v441; // x0
  UILabel_o *v442; // x22
  __int64 *v443; // x8
  UnityEngine_Object_o *v444; // x22
  struct UICommonButton_o *v445; // x0
  struct UICommonButton_o *v446; // x0
  UnityEngine_GameObject_o *v447; // x0
  UnityEngine_GameObject_o *v448; // x0
  System_String_o *v449; // x0
  UnityEngine_Object_o *v450; // x22
  struct UICommonButton_o *v451; // x0
  struct UICommonButton_o *v452; // x0
  struct UICommonButton_o *v453; // x0
  UnityEngine_Object_o *v454; // x22
  struct UICommonButton_o *v455; // x0
  struct UICommonButton_o *v456; // x0
  UnityEngine_Component_o *v457; // x0
  UnityEngine_GameObject_o *v458; // x0
  int32_t v459; // w8
  LimitCountIconComponent_o *v460; // x0
  UIIconLabel_o *v461; // x0
  const MethodInfo *v462; // x1
  int32_t v463; // w22
  int32_t SortKind; // w0
  struct ServantFaceIconComponent_o *v465; // x8
  ServantFaceIconComponent_o *v466; // x0
  ServantFaceIconComponent_o *v467; // x0
  const MethodInfo *v468; // x1
  FlashingIconComponent_o *v469; // x0
  UnityEngine_Component_o *v470; // x0
  UnityEngine_GameObject_o *v471; // x0
  bool v472; // w0
  UnityEngine_Object_o *v473; // x22
  struct UICommonButton_o *v474; // x0
  struct UICommonButton_o *v475; // x0
  UnityEngine_GameObject_o *v476; // x0
  UILabel_o *v477; // x22
  System_String_o *v478; // x0
  UILabel_o *v479; // x22
  System_String_o *v480; // x0
  UILabel_o *v481; // x22
  System_String_o *v482; // x0
  System_String_o *v483; // x1
  UILabel_o *v484; // x0
  struct UICommonButton_o *v485; // x0
  struct UICommonButton_o *v486; // x0
  UnityEngine_GameObject_o *v487; // x0
  UnityEngine_Component_o *v488; // x0
  UnityEngine_GameObject_o *v489; // x0
  UnityEngine_Object_o *v490; // x22
  UnityEngine_Component_o *v491; // x0
  UnityEngine_GameObject_o *v492; // x0
  ServantCommandCardListComponent_o *v493; // x22
  const MethodInfo *v494; // x1
  int64_t UserSvtId; // x0
  FlashingIconComponent_o *v496; // x0
  UnityEngine_Component_o *v497; // x0
  UnityEngine_GameObject_o *v498; // x0
  UnityEngine_Object_o *v499; // x22
  struct UICommonButton_o *v500; // x0
  struct UICommonButton_o *v501; // x0
  UnityEngine_GameObject_o *v502; // x0
  UILabel_o *v503; // x22
  __int64 *v504; // x8
  UnityEngine_Object_o *v505; // x22
  struct UICommonButton_o *v506; // x0
  struct UICommonButton_o *v507; // x0
  UnityEngine_GameObject_o *v508; // x0
  UnityEngine_GameObject_o *v509; // x0
  System_String_o *v510; // x0
  UnityEngine_Object_o *v511; // x22
  struct UICommonButton_o *v512; // x0
  struct UICommonButton_o *v513; // x0
  struct UICommonButton_o *v514; // x0
  UnityEngine_Component_o *v515; // x0
  UnityEngine_GameObject_o *v516; // x0
  UnityEngine_GameObject_o *v517; // x0
  System_String_o *v518; // x1
  UnityEngine_GameObject_o *v519; // x0
  UILabel_o *v520; // x19
  System_String_o *v521; // x0
  UILabel_o *v522; // x0
  UserServantEntity_o *v523; // x0
  const MethodInfo *v524; // x1
  UserServantEntity_o *v525; // x0
  const MethodInfo *v526; // x1
  UserServantEntity_o *v527; // x0
  const MethodInfo *v528; // x1
  UserServantEntity_o *v529; // x0
  UnityEngine_GameObject_o *v530; // x0
  System_String_o *v531; // x1
  UILabel_o *v532; // x0
  UserServantEntity_o *v533; // x0
  UserServantEntity_o *v534; // x0
  UnityEngine_GameObject_o *v535; // x0
  UnityEngine_Component_o **v536; // [xsp+18h] [xbp-B8h]
  struct UILabel_o **v537; // [xsp+20h] [xbp-B0h]
  UnityEngine_Component_o **v538; // [xsp+28h] [xbp-A8h]
  CombineServantListViewItemDraw_o *v539; // [xsp+30h] [xbp-A0h]
  int32_t v540; // [xsp+3Ch] [xbp-94h]
  int32_t SkillOpenItemNum; // [xsp+4Ch] [xbp-84h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-80h] BYREF
  MethodInfo v543; // [xsp+58h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v544; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v545; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC92A & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v20);
    sub_B16FFC(&TutorialFlag_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_12203/*"SKILL_LVDISP_TXT"*/, v22);
    sub_B16FFC(&StringLiteral_10354/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, v23);
    sub_B16FFC(&StringLiteral_9291/*"NONSELECT_UNDER_STATUS_MAX"*/, v24);
    sub_B16FFC(&StringLiteral_6395/*"FORTIFICATION_APPOINTMENT"*/, v25);
    sub_B16FFC(&StringLiteral_3147/*"COMBINE_CAN_STATUS_UP_INFO"*/, v26);
    sub_B16FFC(&StringLiteral_8803/*"MSG_CAMPAIGN_COMBINE_EXP"*/, v27);
    sub_B16FFC(&StringLiteral_12201/*"SKILL_LVDISP_ENABLE_TXT"*/, v28);
    sub_B16FFC(&StringLiteral_9286/*"NONSELECT_MATERIAL"*/, v29);
    sub_B16FFC(&StringLiteral_21736/*"ribbon_noblephantasmup_01"*/, v30);
    sub_B16FFC(&StringLiteral_9285/*"NONSELECT_LIMITUP_BASE"*/, v31);
    sub_B16FFC(&StringLiteral_10173/*"PARTY_MEMBER_TXT"*/, v32);
    sub_B16FFC(&StringLiteral_9289/*"NONSELECT_NPUP_BASE"*/, v33);
    sub_B16FFC(&StringLiteral_12446/*"SUPPORT_MEMBER"*/, v34);
    sub_B16FFC(&StringLiteral_8799/*"MSG_ABLED_LIMITUP"*/, v35);
    sub_B16FFC(&StringLiteral_11606/*"SELECT_PUSH"*/, v36);
    sub_B16FFC(&StringLiteral_11584/*"SELECT_CANNOT"*/, v37);
    sub_B16FFC(&StringLiteral_9339/*"NPUP_BASE"*/, v38);
    sub_B16FFC(&StringLiteral_12200/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/, v39);
    sub_B16FFC(&StringLiteral_11607/*"SELECT_SERVANT_EVENT_JOIN"*/, v40);
    sub_B16FFC(&StringLiteral_9329/*"NO_SELECT_FRIENDSHIP_EXCEED"*/, v41);
    sub_B16FFC(&StringLiteral_11513/*"SAME_SERVANT"*/, v42);
    sub_B16FFC(&StringLiteral_8798/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, v43);
    sub_B16FFC(&StringLiteral_9287/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v44);
    sub_B16FFC(&StringLiteral_23395/*"{0:#,0}"*/, v45);
    sub_B16FFC(&StringLiteral_12202/*"SKILL_LVDISP_SINGLE_TXT"*/, v46);
    sub_B16FFC(&StringLiteral_8800/*"MSG_ABLED_SKILLUP"*/, v47);
    sub_B16FFC(&StringLiteral_9288/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, v48);
    sub_B16FFC(&StringLiteral_9292/*"NONSKILL_TXT"*/, v49);
    sub_B16FFC(&StringLiteral_8402/*"LOCKMODE_SELECTED_SERVANT"*/, v50);
    sub_B16FFC(&StringLiteral_6311/*"FAVORITE_SERVANT"*/, v51);
    sub_B16FFC(&StringLiteral_2972/*"CHOICE_SERVANT"*/, v52);
    sub_B16FFC(&StringLiteral_8802/*"MSG_ABLED_TDUP"*/, v53);
    sub_B16FFC(&StringLiteral_11579/*"SEAL_COMBINE_LIMIT_THIRD"*/, v54);
    sub_B16FFC(&StringLiteral_9284/*"NONSELECT_BASE_ALLMAX"*/, v55);
    sub_B16FFC(&StringLiteral_9330/*"NO_SELECT_LVEXCEED"*/, v56);
    sub_B16FFC(&StringLiteral_1/*""*/, v57);
    sub_B16FFC(&StringLiteral_9290/*"NONSELECT_SKILLUP_BASE"*/, v58);
    sub_B16FFC(&StringLiteral_11605/*"SELECT_PROTECTED_EVENT_SVT"*/, v59);
    sub_B16FFC(&StringLiteral_8403/*"LOCK_SERVANT"*/, v60);
    sub_B16FFC(&StringLiteral_9283/*"NONSEELECT_STATUSUP_MAX"*/, v61);
    byte_40FC92A = 1;
  }
  v543.name = 0LL;
  skillInfoList = 0LL;
  v543.methodPointer = 0LL;
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
    v64 = (UnityEngine_Component_o *)this->fields.svtCommandCardList;
    if ( !v64 )
      goto LABEL_1055;
    gameObject = UnityEngine_Component__get_gameObject(v64, 0LL);
    if ( !gameObject )
      goto LABEL_1055;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  type = item->fields.type;
  servantFaceIcon = this->fields.servantFaceIcon;
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(item, v63);
  iconLabelInfo1 = item->fields.iconLabelInfo1;
  if ( type )
  {
    if ( !servantFaceIcon )
      goto LABEL_1055;
    ServantFaceIconComponent__Set_30631556(
      servantFaceIcon,
      UserSvtEntity,
      iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
    subIconLabel = this->fields.subIconLabel;
    rarity = item->fields.rarity;
    v73 = CombineServantListViewItem__get_UserSvtEntity(item, v72);
    if ( !v73 )
      goto LABEL_1055;
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_1055;
    ServantFaceIconComponent__Set_30631556(servantFaceIcon, UserSvtEntity, iconLabelInfo1, 0LL, 0LL);
    iconLabelInfo2 = item->fields.iconLabelInfo2;
    if ( !iconLabelInfo2 )
      goto LABEL_1055;
    IsClear = IconLabelInfo__IsClear(iconLabelInfo2, 0LL);
    subIconLabel = this->fields.subIconLabel;
    if ( !IsClear )
    {
      if ( !subIconLabel )
        goto LABEL_1055;
      UIIconLabel__Set(this->fields.subIconLabel, item->fields.iconLabelInfo2, 0LL);
      goto LABEL_23;
    }
    rarity = item->fields.rarity;
    v73 = CombineServantListViewItem__get_UserSvtEntity(item, v77);
    if ( !v73 )
      goto LABEL_1055;
  }
  exceedCount = v73->fields.exceedCount;
  v79 = CombineServantListViewItem__get_UserSvtEntity(item, v74);
  if ( !v79 || !subIconLabel )
    goto LABEL_1055;
  UIIconLabel__Set_40377052(subIconLabel, 36, rarity, exceedCount, 0, 0LL, 0, 0, v79->fields.lv, 0LL);
LABEL_23:
  CombineServantListViewItem__GetNpInfo(
    item,
    (int32_t *)&v543.name + 1,
    (int32_t *)&v543.name,
    (int32_t *)&v543.methodPointer + 1,
    v80);
  lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
  if ( !lockImg )
    goto LABEL_1055;
  v82 = UnityEngine_Component__get_gameObject(lockImg, 0LL);
  if ( !v82 )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive(v82, 0, 0LL);
  p_statusTxtLb = &this->fields.statusTxtLb;
  statusTxtLb = (UnityEngine_Component_o *)this->fields.statusTxtLb;
  if ( !statusTxtLb )
    goto LABEL_1055;
  v85 = UnityEngine_Component__get_gameObject(statusTxtLb, 0LL);
  if ( !v85 )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive(v85, 0, 0LL);
  p_maskSprite = (UnityEngine_Component_o **)&this->fields.maskSprite;
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_1055;
  v88 = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !v88 )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive(v88, 0, 0LL);
  p_maskLabel = &this->fields.maskLabel;
  maskLabel = this->fields.maskLabel;
  if ( !maskLabel )
    goto LABEL_1055;
  UILabel__set_text(maskLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillLvLabel = (UnityEngine_Component_o *)this->fields.skillLvLabel;
  if ( !skillLvLabel )
    goto LABEL_1055;
  v92 = UnityEngine_Component__get_gameObject(skillLvLabel, 0LL);
  if ( !v92 )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive(v92, 0, 0LL);
  partyIcon = this->fields.partyIcon;
  if ( !partyIcon )
    goto LABEL_1055;
  FlashingIconComponent__Clear(partyIcon, 0LL);
  removeImg = (UnityEngine_Component_o *)this->fields.removeImg;
  if ( !removeImg )
    goto LABEL_1055;
  v95 = UnityEngine_Component__get_gameObject(removeImg, 0LL);
  if ( !v95 )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive(v95, 0, 0LL);
  npLvInfo = this->fields.npLvInfo;
  if ( !npLvInfo )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive(npLvInfo, 0, 0LL);
  limitCountIcon = this->fields.limitCountIcon;
  if ( !limitCountIcon )
    goto LABEL_1055;
  LimitCountIconComponent__Clear(limitCountIcon, 0LL);
  choiceImg = (UnityEngine_Component_o *)this->fields.choiceImg;
  if ( !choiceImg )
    goto LABEL_1055;
  v99 = UnityEngine_Component__get_gameObject(choiceImg, 0LL);
  if ( !v99 )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive(v99, item->fields.isSwapChoice != item->fields.isChoice, 0LL);
  switchInfoComp = this->fields.switchInfoComp;
  if ( !switchInfoComp )
    goto LABEL_1055;
  SwitchUIWidgetComponent__Clear(switchInfoComp, 0LL);
  fortificationRootObj = this->fields.fortificationRootObj;
  if ( !fortificationRootObj )
    goto LABEL_1055;
  UnityEngine_GameObject__SetActive(fortificationRootObj, 0, 0LL);
  fortificationNameLabel = this->fields.fortificationNameLabel;
  if ( !fortificationNameLabel )
    goto LABEL_1055;
  UILabel__set_text(fortificationNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  fortificationDetailNameLabel = this->fields.fortificationDetailNameLabel;
  if ( !fortificationDetailNameLabel )
    goto LABEL_1055;
  UILabel__set_text(fortificationDetailNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
  if ( !fortificationAppointmentLabel )
    goto LABEL_1055;
  UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pushImg, 0LL, 0LL) )
  {
    v106 = (UnityEngine_Component_o *)this->fields.pushImg;
    if ( !v106 )
      goto LABEL_1055;
    v107 = UnityEngine_Component__get_gameObject(v106, 0LL);
    if ( !v107 )
      goto LABEL_1055;
    UnityEngine_GameObject__SetActive(v107, item->fields.isPush, 0LL);
  }
  v108 = this->fields.servantFaceIcon;
  if ( !v108 )
    goto LABEL_1055;
  ServantFaceIconComponent__ResetIconLabelScale(v108, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    v112 = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !v112 )
      goto LABEL_1055;
    v113 = UnityEngine_Component__get_gameObject(v112, 0LL);
    if ( !v113 )
      goto LABEL_1055;
    UnityEngine_GameObject__SetActive(v113, item->fields.isMaterialTdSvt, 0LL);
    if ( item->fields.isMaterialTdSvt )
    {
      v114 = this->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v114, (System_String_o *)StringLiteral_21736/*"ribbon_noblephantasmup_01"*/, 0LL);
      v116 = item->fields.type;
      if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      }
      if ( CombineServantListViewManager__GetSortKind(v116, v115) == 1 )
      {
        v117 = this->fields.servantFaceIcon;
        if ( !v117 )
          goto LABEL_1055;
        v544.fields.x = 0.65;
        v544.fields.y = 1.0;
        v544.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale(v117, v544, 0LL);
      }
    }
  }
  v118 = item->fields.type;
  switch ( v118 )
  {
    case 5:
      npIconLabel = this->fields.npIconLabel;
      if ( !npIconLabel )
        goto LABEL_1055;
      v132 = SHIDWORD(v543.name) <= 0 ? -1 : LODWORD(v543.name);
      UIIconLabel__Set_40377052(npIconLabel, 33, v132, SHIDWORD(v543.methodPointer), 0, 0LL, 0, 0, 0, 0LL);
      v133 = this->fields.npLvInfo;
      if ( !v133 )
        goto LABEL_1055;
      UnityEngine_GameObject__SetActive(v133, 1, 0LL);
      goto LABEL_105;
    case 1:
      v135 = this->fields.limitCountIcon;
      if ( !v135 )
        goto LABEL_1055;
      LimitCountIconComponent__Set(v135, item->fields.currentLimitCnt, item->fields.maxLimitCnt, 0LL);
      v136 = item->fields.userSvtEntity;
      if ( v136 && UserServantEntity__IsProtectedEventServant(v136, 0LL) && item->fields.type != 5 )
      {
        if ( !*p_maskSprite )
          goto LABEL_1055;
        v219 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
        if ( !v219 )
          goto LABEL_1055;
        UnityEngine_GameObject__SetActive(v219, 1, 0LL);
        v220 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v221 = LocalizationManager__Get((System_String_o *)StringLiteral_11605/*"SELECT_PROTECTED_EVENT_SVT"*/, 0LL);
        if ( !v220 )
          goto LABEL_1055;
        UILabel__set_text(v220, v221, 0LL);
        v137 = 1;
LABEL_106:
        if ( item->fields.isParty )
        {
          v138 = this->fields.partyIcon;
          if ( !v138 )
            goto LABEL_1055;
          FlashingIconComponent__Set(v138, 0LL);
          if ( !*p_maskSprite )
            goto LABEL_1055;
          v139 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
          if ( !v139 )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive(v139, 1, 0LL);
          v140 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v141 = LocalizationManager__Get((System_String_o *)StringLiteral_10173/*"PARTY_MEMBER_TXT"*/, 0LL);
          if ( !v140 )
            goto LABEL_1055;
          UILabel__set_text(v140, v141, 0LL);
          v137 = 1;
        }
        if ( item->fields.isFavorite )
        {
          if ( !*p_maskSprite )
            goto LABEL_1055;
          v142 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
          if ( !v142 )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive(v142, 1, 0LL);
          v143 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v144 = LocalizationManager__Get((System_String_o *)StringLiteral_6311/*"FAVORITE_SERVANT"*/, 0LL);
          if ( !v143 )
            goto LABEL_1055;
          UILabel__set_text(v143, v144, 0LL);
          v137 = 1;
        }
        if ( item->fields.isSwapLock != item->fields.isLock )
        {
          v145 = (UnityEngine_Component_o *)this->fields.lockImg;
          if ( !v145 )
            goto LABEL_1055;
          v146 = UnityEngine_Component__get_gameObject(v145, 0LL);
          if ( !v146 )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive(v146, 1, 0LL);
          if ( !*p_maskSprite )
            goto LABEL_1055;
          v147 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
          if ( !v147 )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive(v147, 1, 0LL);
          v148 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v149 = LocalizationManager__Get((System_String_o *)StringLiteral_8403/*"LOCK_SERVANT"*/, 0LL);
          if ( !v148 )
            goto LABEL_1055;
          UILabel__set_text(v148, v149, 0LL);
          v137 = 1;
        }
        if ( item->fields.isSwapChoice != item->fields.isChoice )
        {
          if ( !*p_maskSprite )
            goto LABEL_1055;
          v150 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
          if ( !v150 )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive(v150, 1, 0LL);
          v151 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v152 = LocalizationManager__Get((System_String_o *)StringLiteral_2972/*"CHOICE_SERVANT"*/, 0LL);
          if ( !v151 )
            goto LABEL_1055;
          UILabel__set_text(v151, v152, 0LL);
          v137 = 1;
        }
        if ( item->fields.isLimitCntTarget )
        {
          if ( !*p_maskSprite )
            goto LABEL_1055;
          v153 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
          if ( !v153 )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive(v153, 1, 0LL);
          v154 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v155 = LocalizationManager__Get((System_String_o *)StringLiteral_11513/*"SAME_SERVANT"*/, 0LL);
          if ( !v154 )
            goto LABEL_1055;
          UILabel__set_text(v154, v155, 0LL);
          v137 = 1;
        }
        if ( item->fields.isHeroineSvt )
        {
          if ( !*p_maskSprite )
            goto LABEL_1055;
          v156 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
          if ( !v156 )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive(v156, 1, 0LL);
          v157 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v158 = LocalizationManager__Get((System_String_o *)StringLiteral_9286/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v157 )
            goto LABEL_1055;
          UILabel__set_text(v157, v158, 0LL);
          v137 = 1;
        }
        if ( item->fields.isStatusUpSvt && !item->fields.isCanStUp )
        {
          if ( !*p_maskSprite )
            goto LABEL_1055;
          v159 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
          if ( !v159 )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive(v159, 1, 0LL);
          v160 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v161 = LocalizationManager__Get((System_String_o *)StringLiteral_9286/*"NONSELECT_MATERIAL"*/, 0LL);
          if ( !v160 )
            goto LABEL_1055;
          UILabel__set_text(v160, v161, 0LL);
          v137 = 1;
        }
        if ( item->fields.isEventJoin )
        {
          if ( !*p_maskSprite )
            goto LABEL_1055;
          v162 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
          if ( !v162 )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive(v162, 1, 0LL);
          v163 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v164 = LocalizationManager__Get((System_String_o *)StringLiteral_11607/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
          if ( !v163 )
            goto LABEL_1055;
          UILabel__set_text(v163, v164, 0LL);
          v137 = 1;
        }
        if ( item->fields.isUseSupport )
        {
          if ( !*p_maskSprite )
            goto LABEL_1055;
          v165 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
          if ( !v165 )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive(v165, 1, 0LL);
          v166 = *p_maskLabel;
          if ( item->fields.isParty )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v167 = &StringLiteral_10173/*"PARTY_MEMBER_TXT"*/;
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v167 = &StringLiteral_12446/*"SUPPORT_MEMBER"*/;
          }
          v185 = LocalizationManager__Get((System_String_o *)*v167, 0LL);
          if ( !v166 )
            goto LABEL_1055;
          UILabel__set_text(v166, v185, 0LL);
          v137 = 1;
        }
        if ( item->fields.isPush )
        {
          if ( !*p_maskSprite )
            goto LABEL_1055;
          v186 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
          if ( !v186 )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive(v186, 1, 0LL);
          v187 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v188 = LocalizationManager__Get((System_String_o *)StringLiteral_11606/*"SELECT_PUSH"*/, 0LL);
          if ( !v187 )
            goto LABEL_1055;
          UILabel__set_text(v187, v188, 0LL);
          v137 = 1;
        }
        CombineServantListViewItemDraw__SetSelectDisp(this, item, v134);
        CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(item, v189);
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
          v192 = this->fields.baseButton;
          if ( !v192 )
            goto LABEL_1055;
          ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v192->klass->vtable._5_set_isEnabled.method)(
            v192,
            1LL,
            v192->klass->vtable._6_OnInit.methodPtr);
          v193 = this->fields.baseButton;
          if ( !v193 )
            goto LABEL_1055;
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v193->klass->vtable._14_SetState.method)(
            v193,
            0LL,
            1LL,
            v193->klass->vtable._15_OnPress.methodPtr);
          if ( !*p_maskSprite )
            goto LABEL_1055;
          v194 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
          if ( !v194 )
            goto LABEL_1055;
          UnityEngine_GameObject__SetActive(v194, 1, 0LL);
          if ( item->fields.isMaxNextLv || item->fields.isBaseLvMax )
          {
            if ( item->fields.isCanStUp )
              goto LABEL_236;
            if ( CombineServantListViewItem__get_IsCanNotSelectMaterial(item, switchInfoList) )
              goto LABEL_343;
            v217 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v218 = LocalizationManager__Get((System_String_o *)StringLiteral_9287/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
            if ( !v217 )
              goto LABEL_1055;
            UILabel__set_text(v217, v218, 0LL);
            if ( item->fields.type != 5 )
              break;
            v202 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v203 = &StringLiteral_9289/*"NONSELECT_NPUP_BASE"*/;
          }
          else
          {
            if ( item->fields.isCanStUp )
            {
LABEL_236:
              if ( item->fields.isStatusUpSvt )
              {
                v195 = item->fields.rarity;
                if ( v195 <= 3 )
                {
                  if ( item->fields.isAtkUpMax || item->fields.isHpUpMax )
                  {
                    v222 = *p_maskLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v223 = LocalizationManager__Get((System_String_o *)StringLiteral_9291/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                    if ( !v222 )
                      goto LABEL_1055;
                    UILabel__set_text(v222, v223, 0LL);
                  }
                  if ( item->fields.isAtkSecondUpMax || item->fields.isHpSecondUpMax )
                  {
                    v224 = *p_maskLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v225 = LocalizationManager__Get((System_String_o *)StringLiteral_9291/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                    if ( !v224 )
                      goto LABEL_1055;
                    UILabel__set_text(v224, v225, 0LL);
                  }
                  if ( !item->fields.isNotSelectStatusUpAtk && !item->fields.isNotSelectStatusUpHp )
                    goto LABEL_343;
                  v202 = *p_maskLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v203 = &StringLiteral_9291/*"NONSELECT_UNDER_STATUS_MAX"*/;
                }
                else
                {
                  if ( v195 != 4 )
                    goto LABEL_343;
                  if ( item->fields.atkBase >= 1 )
                  {
                    if ( item->fields.isAtkSecondUpMax || item->fields.isNotSelectSecondStatusUpAtk )
                    {
                      v196 = *p_maskLabel;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v197 = LocalizationManager__Get((System_String_o *)StringLiteral_9291/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                      if ( !v196 )
                        goto LABEL_1055;
                      UILabel__set_text(v196, v197, 0LL);
                    }
                    if ( !item->fields.isAtkUpMax )
                    {
                      v198 = *p_maskLabel;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v199 = LocalizationManager__Get((System_String_o *)StringLiteral_9288/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, 0LL);
                      if ( !v198 )
                        goto LABEL_1055;
                      UILabel__set_text(v198, v199, 0LL);
                    }
                  }
                  if ( item->fields.hpBase < 1 )
                    goto LABEL_343;
                  if ( item->fields.isHpSecondUpMax || item->fields.isNotSelectSecondStatusUpHp )
                  {
                    v200 = *p_maskLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v201 = LocalizationManager__Get((System_String_o *)StringLiteral_9291/*"NONSELECT_UNDER_STATUS_MAX"*/, 0LL);
                    if ( !v200 )
                      goto LABEL_1055;
                    UILabel__set_text(v200, v201, 0LL);
                  }
                  if ( item->fields.isHpUpMax )
                    goto LABEL_343;
                  v202 = *p_maskLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v203 = &StringLiteral_9288/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/;
                }
                goto LABEL_341;
              }
LABEL_343:
              v227 = item->fields.type;
              if ( v227 != 5 )
                goto LABEL_402;
              if ( !item->fields.isBaseSvt )
                break;
              v215 = *p_maskLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v216 = &StringLiteral_9339/*"NPUP_BASE"*/;
LABEL_349:
              v228 = LocalizationManager__Get((System_String_o *)*v216, 0LL);
              if ( !v215 )
                goto LABEL_624;
              UILabel__set_text(v215, v228, 0LL);
              break;
            }
            if ( item->fields.isFortification )
            {
              if ( !*p_maskLabel )
                goto LABEL_1055;
              UILabel__set_text(*p_maskLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v236 = this->fields.fortificationRootObj;
              if ( !v236 )
                goto LABEL_1055;
              v237 = UnityEngine_GameObject__get_gameObject(v236, 0LL);
              if ( !v237 )
                goto LABEL_1055;
              UnityEngine_GameObject__SetActive(v237, 1, 0LL);
              v238 = this->fields.fortificationNameLabel;
              if ( !v238 )
                goto LABEL_1055;
              UILabel__set_text(v238, item->fields.fortificationName, 0LL);
              v239 = this->fields.fortificationDetailNameLabel;
              if ( !v239 )
                goto LABEL_1055;
              UILabel__set_text(v239, item->fields.fortificationDetailName, 0LL);
              v240 = this->fields.fortificationAppointmentLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v241 = LocalizationManager__Get((System_String_o *)StringLiteral_6395/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
              if ( !v240 )
                goto LABEL_1055;
              UILabel__set_text(v240, v241, 0LL);
              v242 = this->fields.fortificationNameLabel;
              if ( !v242 )
                goto LABEL_1055;
              UILabel__UpdateCondensedScaleComponent(v242, 0LL);
              v243 = this->fields.fortificationDetailNameLabel;
              if ( !v243 )
                goto LABEL_1055;
              UILabel__UpdateCondensedScaleComponent(v243, 0LL);
              if ( item->fields.type != 5 )
                break;
              v244 = this->fields.fortificationRootObj;
              if ( !v244 )
                goto LABEL_1055;
              transform = UnityEngine_GameObject__get_transform(v244, 0LL);
              if ( !transform )
                goto LABEL_1055;
              *(UnityEngine_Vector3_o *)&v246 = UnityEngine_Transform__get_localPosition(transform, 0LL);
              v248 = this->fields.fortificationRootObj;
              if ( !v248 )
                goto LABEL_1055;
              fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
              v250 = v246;
              v251 = v247;
              v252 = UnityEngine_GameObject__get_transform(v248, 0LL);
              if ( !v252 )
                goto LABEL_1055;
              v545.fields.x = v250;
              v545.fields.y = fortificationInfoRootObjOffsetY;
              v545.fields.z = v251;
              UnityEngine_Transform__set_localPosition(v252, v545, 0LL);
              goto LABEL_343;
            }
            if ( (v137 & 1) != 0 )
              goto LABEL_343;
            v202 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v203 = &StringLiteral_9286/*"NONSELECT_MATERIAL"*/;
          }
LABEL_341:
          v226 = LocalizationManager__Get((System_String_o *)*v203, 0LL);
          if ( !v202 )
            goto LABEL_1055;
          UILabel__set_text(v202, v226, 0LL);
          goto LABEL_343;
        }
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
        {
          v204 = this->fields.baseButton;
          if ( !v204 )
            goto LABEL_624;
          ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v204->klass->vtable._5_set_isEnabled.method)(
            v204,
            1LL,
            v204->klass->vtable._6_OnInit.methodPtr);
          v205 = this->fields.baseButton;
          if ( !v205 )
            goto LABEL_624;
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v205->klass->vtable._14_SetState.method)(
            v205,
            0LL,
            1LL,
            v205->klass->vtable._15_OnPress.methodPtr);
          if ( !*p_maskSprite )
            goto LABEL_624;
          v206 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
          if ( !v206 )
            goto LABEL_624;
          UnityEngine_GameObject__SetActive(v206, 0, 0LL);
        }
        v207 = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( item->fields.isMaxSelect )
        {
          if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v207, 0LL, 0LL) )
          {
            v208 = this->fields.baseButton;
            if ( !v208 )
              goto LABEL_624;
            ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v208->klass->vtable._5_set_isEnabled.method)(
              v208,
              1LL,
              v208->klass->vtable._6_OnInit.methodPtr);
            v209 = this->fields.baseButton;
            if ( !v209 )
              goto LABEL_624;
            v210 = 1;
            ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v209->klass->vtable._14_SetState.method)(
              v209,
              0LL,
              1LL,
              v209->klass->vtable._15_OnPress.methodPtr);
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
          if ( UnityEngine_Object__op_Inequality(v207, 0LL, 0LL) )
          {
            v211 = this->fields.baseButton;
            if ( !v211 )
              goto LABEL_624;
            ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v211->klass->vtable._5_set_isEnabled.method)(
              v211,
              1LL,
              v211->klass->vtable._6_OnInit.methodPtr);
            v212 = this->fields.baseButton;
            if ( !v212 )
              goto LABEL_624;
            ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v212->klass->vtable._14_SetState.method)(
              v212,
              0LL,
              1LL,
              v212->klass->vtable._15_OnPress.methodPtr);
          }
        }
        v210 = 0;
        if ( item->fields.type != 1 )
          goto LABEL_297;
LABEL_291:
        servantEntity = item->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_624;
        if ( ServantEntity__get_IsOrganization(servantEntity, 0LL) && !isSelectEnable )
        {
          if ( !(v210 & 1 | !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL)) )
            break;
        }
        else
        {
LABEL_297:
          if ( !v210 )
            break;
        }
        if ( !*p_maskSprite )
          goto LABEL_624;
        v214 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
        if ( !v214 )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive(v214, 1, 0LL);
        v215 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v216 = &StringLiteral_9286/*"NONSELECT_MATERIAL"*/;
        goto LABEL_349;
      }
LABEL_105:
      v137 = 0;
      goto LABEL_106;
    case 0:
      v119 = this->fields.limitCountIcon;
      if ( !v119 )
        goto LABEL_1055;
      LimitCountIconComponent__Set(v119, item->fields.currentLimitCnt, item->fields.maxLimitCnt, 0LL);
      if ( item->fields.isParty )
      {
        v121 = this->fields.partyIcon;
        if ( !v121 )
          goto LABEL_1055;
        FlashingIconComponent__Set(v121, 0LL);
      }
      if ( item->fields.isSwapLock != item->fields.isLock )
      {
        v122 = (UnityEngine_Component_o *)this->fields.lockImg;
        if ( !v122 )
          goto LABEL_1055;
        v123 = UnityEngine_Component__get_gameObject(v122, 0LL);
        if ( !v123 )
          goto LABEL_1055;
        UnityEngine_GameObject__SetActive(v123, 1, 0LL);
      }
      CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(item, v120);
      v125 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( CanNotBaseSelect )
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v125, 0LL, 0LL) )
          goto LABEL_397;
        v126 = this->fields.baseButton;
        if ( !v126 )
          goto LABEL_1055;
        ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v126->klass->vtable._5_set_isEnabled.method)(
          v126,
          1LL,
          v126->klass->vtable._6_OnInit.methodPtr);
        v127 = this->fields.baseButton;
        if ( !v127 )
          goto LABEL_1055;
        ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v127->klass->vtable._14_SetState.method)(
          v127,
          0LL,
          1LL,
          v127->klass->vtable._15_OnPress.methodPtr);
        if ( !*p_maskSprite )
          goto LABEL_1055;
        v128 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
        if ( !v128 )
          goto LABEL_1055;
        UnityEngine_GameObject__SetActive(v128, 1, 0LL);
        if ( item->fields.isLvMax )
        {
          if ( item->fields.isStatusUpSvt )
            goto LABEL_353;
          if ( !item->fields.isExpUpSvt )
          {
            v129 = *p_maskLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v130 = &StringLiteral_9284/*"NONSELECT_BASE_ALLMAX"*/;
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
            if ( !*p_statusTxtLb )
              goto LABEL_1055;
            UILabel__set_text(*p_statusTxtLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            v231 = *p_maskLabel;
            if ( !*p_maskLabel )
              goto LABEL_1055;
            v230 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_359;
          }
          v129 = *p_maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v130 = &StringLiteral_11584/*"SELECT_CANNOT"*/;
LABEL_357:
          v229 = LocalizationManager__Get((System_String_o *)*v130, 0LL);
          if ( !v129 )
            goto LABEL_1055;
          v230 = v229;
          v231 = v129;
LABEL_359:
          UILabel__set_text(v231, v230, 0LL);
          NoticeTween_k__BackingField = item->fields._NoticeTween_k__BackingField;
          if ( !NoticeTween_k__BackingField )
            goto LABEL_1055;
          CombineServantListViewNoticeTween__RemoveTarget(NoticeTween_k__BackingField, *p_statusTxtLb, 0LL);
          goto LABEL_397;
        }
LABEL_353:
        v129 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v130 = &StringLiteral_9286/*"NONSELECT_MATERIAL"*/;
        goto LABEL_357;
      }
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v125, 0LL, 0LL) )
        goto LABEL_397;
      v168 = this->fields.baseButton;
      if ( !v168 )
        goto LABEL_1055;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v168->klass->vtable._5_set_isEnabled.method)(
        v168,
        1LL,
        v168->klass->vtable._6_OnInit.methodPtr);
      v169 = this->fields.baseButton;
      if ( !v169 )
        goto LABEL_1055;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v169->klass->vtable._14_SetState.method)(
        v169,
        0LL,
        1LL,
        v169->klass->vtable._15_OnPress.methodPtr);
      if ( !*p_maskSprite )
        goto LABEL_1055;
      v170 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
      if ( !v170 )
        goto LABEL_1055;
      UnityEngine_GameObject__SetActive(v170, 0, 0LL);
      if ( !*p_maskLabel )
        goto LABEL_1055;
      UILabel__set_text(*p_maskLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( item->fields.isCombineExpCampaignTarget )
      {
        if ( item->fields.isDispAtkStatusUpInfo )
        {
          v171 = item->fields.userSvtEntity;
          if ( !v171 )
            goto LABEL_1055;
          if ( UserServantEntity__isAdjustAtkMax(v171, 0LL) )
          {
            v172 = item->fields.userSvtEntity;
            if ( !v172 )
              goto LABEL_1055;
            if ( !UserServantEntity__isSecondAdjustAtkMax(v172, 0LL) )
              goto LABEL_387;
          }
        }
        if ( !item->fields.isDispHpStatusUpInfo )
          goto LABEL_204;
        v177 = item->fields.userSvtEntity;
        if ( !v177 )
          goto LABEL_1055;
        if ( !UserServantEntity__isAdjustHpMax(v177, 0LL) )
          goto LABEL_204;
        v178 = item->fields.userSvtEntity;
        if ( !v178 )
          goto LABEL_1055;
        if ( !UserServantEntity__isSecondAdjustHpMax(v178, 0LL) )
        {
LABEL_387:
          v253 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_string__TypeInfo, v173, v174, v175, v176);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v253,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v254 = LocalizationManager__Get((System_String_o *)StringLiteral_8803/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
          *(float *)&v543.methodPointer = item->fields.combineExpCampaignValue;
          v256 = (Il2CppObject *)System_Single__ToString(v255, &v543);
          v257 = System_String__Format(v254, v256, 0LL);
          if ( v253 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v253,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v257,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
            v258 = LocalizationManager__Get((System_String_o *)StringLiteral_3147/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v253,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v258,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
            v259 = item->fields._NoticeTween_k__BackingField;
            if ( v259 )
            {
              CombineServantListViewNoticeTween__AddTarget(
                v259,
                *p_statusTxtLb,
                (System_Collections_Generic_List_string__o *)v253,
                0LL);
              v260 = item->fields._NoticeTween_k__BackingField;
              if ( v260 )
              {
                CombineServantListViewNoticeTween__SetTexts(v260, 0, 0LL);
LABEL_394:
                if ( !*p_statusTxtLb )
                  goto LABEL_1055;
                v261 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_statusTxtLb, 0LL);
                if ( !v261 )
                  goto LABEL_1055;
                UnityEngine_GameObject__SetActive(v261, 1, 0LL);
                goto LABEL_397;
              }
            }
          }
        }
        else
        {
LABEL_204:
          v179 = item->fields._NoticeTween_k__BackingField;
          if ( v179 )
          {
            CombineServantListViewNoticeTween__RemoveTarget(v179, *p_statusTxtLb, 0LL);
            v180 = *p_statusTxtLb;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v181 = LocalizationManager__Get((System_String_o *)StringLiteral_8803/*"MSG_CAMPAIGN_COMBINE_EXP"*/, 0LL);
            *(float *)&v543.methodPointer = item->fields.combineExpCampaignValue;
            v183 = (Il2CppObject *)System_Single__ToString(v182, &v543);
            v184 = System_String__Format(v181, v183, 0LL);
            if ( v180 )
            {
LABEL_209:
              UILabel__set_text(v180, v184, 0LL);
              goto LABEL_394;
            }
          }
        }
LABEL_1055:
        sub_B170D4();
      }
      v233 = item->fields._NoticeTween_k__BackingField;
      if ( !v233 )
        goto LABEL_1055;
      CombineServantListViewNoticeTween__RemoveTarget(v233, *p_statusTxtLb, 0LL);
      if ( item->fields.isDispAtkStatusUpInfo )
      {
        v234 = item->fields.userSvtEntity;
        if ( !v234 )
          goto LABEL_1055;
        if ( UserServantEntity__isAdjustAtkMax(v234, 0LL) )
        {
          v235 = item->fields.userSvtEntity;
          if ( !v235 )
            goto LABEL_1055;
          if ( !UserServantEntity__isSecondAdjustAtkMax(v235, 0LL) )
            goto LABEL_1025;
        }
      }
      else if ( item->fields.isDispHpStatusUpInfo )
      {
        v533 = item->fields.userSvtEntity;
        if ( !v533 )
          goto LABEL_1055;
        if ( UserServantEntity__isAdjustHpMax(v533, 0LL) )
        {
          v534 = item->fields.userSvtEntity;
          if ( !v534 )
            goto LABEL_1055;
          if ( !UserServantEntity__isSecondAdjustHpMax(v534, 0LL) )
          {
LABEL_1025:
            v180 = *p_statusTxtLb;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v184 = LocalizationManager__Get((System_String_o *)StringLiteral_3147/*"COMBINE_CAN_STATUS_UP_INFO"*/, 0LL);
            if ( v180 )
              goto LABEL_209;
            goto LABEL_1055;
          }
        }
      }
LABEL_397:
      if ( item->fields.isBaseSvt )
      {
        v262 = (UnityEngine_Component_o *)this->fields.removeImg;
        if ( !v262 )
          goto LABEL_1055;
        v263 = UnityEngine_Component__get_gameObject(v262, 0LL);
        if ( !v263 )
          goto LABEL_1055;
        UnityEngine_GameObject__SetActive(v263, 1, 0LL);
      }
      break;
  }
  v227 = item->fields.type;
LABEL_402:
  if ( v227 != 9 )
  {
    if ( v227 != 2 )
      goto LABEL_498;
    v264 = this->fields.limitCountIcon;
    if ( !v264 )
      goto LABEL_624;
    LimitCountIconComponent__Set(v264, item->fields.currentLimitCnt, item->fields.maxLimitCnt, 0LL);
    if ( item->fields.isParty )
    {
      v266 = this->fields.partyIcon;
      if ( !v266 )
        goto LABEL_624;
      FlashingIconComponent__Set(v266, 0LL);
    }
    if ( item->fields.isSwapLock != item->fields.isLock )
    {
      v267 = (UnityEngine_Component_o *)this->fields.lockImg;
      if ( !v267 )
        goto LABEL_624;
      v268 = UnityEngine_Component__get_gameObject(v267, 0LL);
      if ( !v268 )
        goto LABEL_624;
      UnityEngine_GameObject__SetActive(v268, 1, 0LL);
    }
    if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, v265) )
    {
      v269 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v269, 0LL, 0LL) )
      {
        v270 = this->fields.baseButton;
        if ( !v270 )
          goto LABEL_624;
        ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v270->klass->vtable._5_set_isEnabled.method)(
          v270,
          1LL,
          v270->klass->vtable._6_OnInit.methodPtr);
        v271 = this->fields.baseButton;
        if ( !v271 )
          goto LABEL_624;
        ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v271->klass->vtable._14_SetState.method)(
          v271,
          0LL,
          1LL,
          v271->klass->vtable._15_OnPress.methodPtr);
        if ( !*p_maskSprite )
          goto LABEL_624;
        v272 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
        if ( !v272 )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive(v272, 1, 0LL);
        v273 = *p_maskLabel;
        v274 = LocalizationManager_TypeInfo;
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
      v292 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v292, 0LL, 0LL) )
      {
        v293 = this->fields.baseButton;
        if ( !v293 )
          goto LABEL_624;
        ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v293->klass->vtable._5_set_isEnabled.method)(
          v293,
          1LL,
          v293->klass->vtable._6_OnInit.methodPtr);
        v294 = this->fields.baseButton;
        if ( !v294 )
          goto LABEL_624;
        ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v294->klass->vtable._14_SetState.method)(
          v294,
          0LL,
          1LL,
          v294->klass->vtable._15_OnPress.methodPtr);
      }
      goto LABEL_494;
    }
    v286 = UnityEngine_Object_TypeInfo;
    v281 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !item->fields.isSealCombineLimit )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v281, 0LL, 0LL) )
      {
        v295 = this->fields.baseButton;
        if ( !v295 )
          goto LABEL_624;
        ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v295->klass->vtable._5_set_isEnabled.method)(
          v295,
          1LL,
          v295->klass->vtable._6_OnInit.methodPtr);
        v296 = this->fields.baseButton;
        if ( !v296 )
          goto LABEL_624;
        ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v296->klass->vtable._14_SetState.method)(
          v296,
          0LL,
          1LL,
          v296->klass->vtable._15_OnPress.methodPtr);
        if ( !*p_maskSprite )
          goto LABEL_624;
        v297 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
        if ( !v297 )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive(v297, 0, 0LL);
        if ( !*p_maskLabel )
          goto LABEL_624;
        UILabel__set_text(*p_maskLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !*p_statusTxtLb )
          goto LABEL_624;
        v298 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_statusTxtLb, 0LL);
        if ( !v298 )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive(v298, 1, 0LL);
        v273 = *p_statusTxtLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v285 = &StringLiteral_8799/*"MSG_ABLED_LIMITUP"*/;
        goto LABEL_491;
      }
      goto LABEL_494;
    }
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
      || UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
LABEL_458:
      if ( !UnityEngine_Object__op_Inequality(v281, 0LL, 0LL) )
        goto LABEL_494;
      v287 = this->fields.baseButton;
      if ( !v287 )
        goto LABEL_624;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v287->klass->vtable._5_set_isEnabled.method)(
        v287,
        1LL,
        v287->klass->vtable._6_OnInit.methodPtr);
      v288 = this->fields.baseButton;
      if ( !v288 )
        goto LABEL_624;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v288->klass->vtable._14_SetState.method)(
        v288,
        0LL,
        1LL,
        v288->klass->vtable._15_OnPress.methodPtr);
      if ( !*p_maskSprite )
        goto LABEL_624;
      v289 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
      if ( !v289 )
        goto LABEL_624;
      UnityEngine_GameObject__SetActive(v289, 0, 0LL);
      v290 = *p_maskLabel;
      if ( !*p_maskLabel )
        goto LABEL_624;
      v291 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_493;
    }
LABEL_457:
    j_il2cpp_runtime_class_init_0(v286);
    goto LABEL_458;
  }
  v275 = this->fields.limitCountIcon;
  if ( !v275 )
    goto LABEL_624;
  LimitCountIconComponent__Set(v275, item->fields.currentLimitCnt, item->fields.maxLimitCnt, 0LL);
  if ( item->fields.isParty )
  {
    v277 = this->fields.partyIcon;
    if ( !v277 )
      goto LABEL_624;
    FlashingIconComponent__Set(v277, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    v278 = (UnityEngine_Component_o *)this->fields.lockImg;
    if ( !v278 )
      goto LABEL_624;
    v279 = UnityEngine_Component__get_gameObject(v278, 0LL);
    if ( !v279 )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive(v279, 1, 0LL);
  }
  v280 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, v276);
  v281 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !v280 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
      || UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_458;
    }
    v286 = UnityEngine_Object_TypeInfo;
    goto LABEL_457;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v281, 0LL, 0LL) )
  {
    v282 = this->fields.baseButton;
    if ( !v282 )
      goto LABEL_624;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v282->klass->vtable._5_set_isEnabled.method)(
      v282,
      1LL,
      v282->klass->vtable._6_OnInit.methodPtr);
    v283 = this->fields.baseButton;
    if ( !v283 )
      goto LABEL_624;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v283->klass->vtable._14_SetState.method)(
      v283,
      0LL,
      1LL,
      v283->klass->vtable._15_OnPress.methodPtr);
    if ( !*p_maskSprite )
      goto LABEL_624;
    v284 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
    if ( !v284 )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive(v284, 1, 0LL);
    if ( item->fields.isHeroineSvt || item->fields.isEventJoin || item->fields.isIgnoreCombineLimitSpecial )
    {
      v273 = *p_maskLabel;
      v274 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_447:
        v285 = &StringLiteral_9286/*"NONSELECT_MATERIAL"*/;
LABEL_491:
        v299 = LocalizationManager__Get((System_String_o *)*v285, 0LL);
        if ( !v273 )
          goto LABEL_624;
        v291 = v299;
        v290 = v273;
LABEL_493:
        UILabel__set_text(v290, v291, 0LL);
        goto LABEL_494;
      }
LABEL_445:
      if ( !v274->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v274);
      goto LABEL_447;
    }
    if ( item->fields.isLimitCntMax )
    {
      v273 = *p_maskLabel;
      v274 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
LABEL_473:
        if ( !v274->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v274);
      }
LABEL_475:
      v285 = &StringLiteral_9285/*"NONSELECT_LIMITUP_BASE"*/;
      goto LABEL_491;
    }
    if ( item->fields.isSealCombineLimit )
    {
      v273 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v285 = &StringLiteral_11579/*"SEAL_COMBINE_LIMIT_THIRD"*/;
      goto LABEL_491;
    }
  }
LABEL_494:
  if ( item->fields.isBaseSvt )
  {
    v300 = (UnityEngine_Component_o *)this->fields.removeImg;
    if ( !v300 )
      goto LABEL_624;
    v301 = UnityEngine_Component__get_gameObject(v300, 0LL);
    if ( !v301 )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive(v301, 1, 0LL);
  }
LABEL_498:
  v302 = item->fields.type;
  v540 = modeKind;
  v538 = (UnityEngine_Component_o **)&this->fields.statusTxtLb;
  v539 = this;
  v536 = (UnityEngine_Component_o **)&this->fields.maskSprite;
  v537 = &this->fields.maskLabel;
  if ( v302 != 3 )
    goto LABEL_591;
  CombineServantListViewItem__GetSkillInfo(item, &skillInfoList, v111);
  enableSkillUp = item->fields.enableSkillUp;
  v308 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v304, v305, v306, v307);
  System_Text_StringBuilder___ctor(v308, 0LL);
  v312 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_624;
  v313 = *(_QWORD *)&skillInfoList->max_length;
  if ( (int)v313 >= 1 )
  {
    v314 = 0LL;
    v315 = (unsigned int)(v313 - 1);
    v316 = (int)v313;
    while ( 1 )
    {
      if ( v314 >= v312->max_length )
        goto LABEL_1056;
      v317 = v312->m_Items[v314];
      if ( v317 )
      {
        lv = v317->fields.lv;
        p_lv = &v317->fields.lv;
        v320 = *(p_lv - 1);
        if ( lv > 0 )
        {
          v321 = System_Int32__ToString((int32_t)p_lv, 0LL);
          goto LABEL_511;
        }
      }
      else
      {
        v320 = -1;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v321 = LocalizationManager__Get((System_String_o *)StringLiteral_9292/*"NONSKILL_TXT"*/, 0LL);
LABEL_511:
      v322 = (Il2CppObject *)v321;
      if ( enableSkillUp )
      {
        v323 = System_Collections_Generic_List_int___Contains(
                 enableSkillUp,
                 v320,
                 (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v315 == v314 )
        {
          if ( v323 )
          {
            v324 = &StringLiteral_12200/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v324 = &StringLiteral_12200/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v324 = &StringLiteral_12200/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              }
            }
          }
          else
          {
            v324 = &StringLiteral_12202/*"SKILL_LVDISP_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v324 = &StringLiteral_12202/*"SKILL_LVDISP_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v324 = &StringLiteral_12202/*"SKILL_LVDISP_SINGLE_TXT"*/;
              }
            }
          }
        }
        else if ( v323 )
        {
          v324 = &StringLiteral_12201/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v324 = &StringLiteral_12201/*"SKILL_LVDISP_ENABLE_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v324 = &StringLiteral_12201/*"SKILL_LVDISP_ENABLE_TXT"*/;
            }
          }
        }
        else
        {
          v324 = &StringLiteral_12203/*"SKILL_LVDISP_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v324 = &StringLiteral_12203/*"SKILL_LVDISP_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v324 = &StringLiteral_12203/*"SKILL_LVDISP_TXT"*/;
            }
          }
        }
        v325 = LocalizationManager__Get((System_String_o *)*v324, 0LL);
        if ( v308 )
        {
          appended = System_Text_StringBuilder__AppendFormat(v308, v325, v322, 0LL);
          if ( (__int64)++v314 >= v316 )
            goto LABEL_532;
          v312 = skillInfoList;
          if ( skillInfoList )
            continue;
        }
      }
      goto LABEL_624;
    }
  }
  if ( !v308 )
    goto LABEL_624;
LABEL_532:
  this = v539;
  v326 = v539->fields.skillLvLabel;
  v327 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v308->klass->vtable._3_ToString.method)(
                              v308,
                              v308->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v326 )
    goto LABEL_624;
  UILabel__set_text(v326, v327, 0LL);
  v328 = (UnityEngine_Component_o *)v539->fields.skillLvLabel;
  if ( !v328 )
    goto LABEL_624;
  v329 = UnityEngine_Component__get_gameObject(v328, 0LL);
  p_maskLabel = v537;
  p_statusTxtLb = (UILabel_o **)v538;
  p_maskSprite = v536;
  if ( !v329 )
    goto LABEL_624;
  UnityEngine_GameObject__SetActive(v329, 1, 0LL);
  modeKind = v540;
  if ( item->fields.isParty )
  {
    v331 = v539->fields.partyIcon;
    if ( !v331 )
      goto LABEL_624;
    FlashingIconComponent__Set(v331, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    v332 = (UnityEngine_Component_o *)v539->fields.lockImg;
    if ( !v332 )
      goto LABEL_624;
    v333 = UnityEngine_Component__get_gameObject(v332, 0LL);
    if ( !v333 )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive(v333, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, v330) )
  {
    v334 = (UnityEngine_Object_o *)v539->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v334, 0LL, 0LL) )
      goto LABEL_586;
    v335 = v539->fields.baseButton;
    if ( !v335 )
      goto LABEL_624;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v335->klass->vtable._5_set_isEnabled.method)(
      v335,
      1LL,
      v335->klass->vtable._6_OnInit.methodPtr);
    v336 = v539->fields.baseButton;
    if ( !v336 )
      goto LABEL_624;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v336->klass->vtable._14_SetState.method)(
      v336,
      0LL,
      1LL,
      v336->klass->vtable._15_OnPress.methodPtr);
    if ( !*v536 )
      goto LABEL_624;
    v337 = UnityEngine_Component__get_gameObject(*v536, 0LL);
    if ( !v337 )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive(v337, 1, 0LL);
    v338 = *v537;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v339 = LocalizationManager__Get((System_String_o *)StringLiteral_9290/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v338 )
      goto LABEL_624;
    UILabel__set_text(v338, v339, 0LL);
    if ( !item->fields.isHeroineSvt )
      goto LABEL_586;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28023340(126, 0LL) )
      goto LABEL_586;
    v340 = (UnityEngine_Component_o *)*v537;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v341 = &StringLiteral_11584/*"SELECT_CANNOT"*/;
    goto LABEL_577;
  }
  v342 = (UnityEngine_Object_o *)v539->fields.baseButton;
  if ( !item->fields.isSkillUpItemNum )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v342, 0LL, 0LL) )
    {
      v347 = v539->fields.baseButton;
      if ( !v347 )
        goto LABEL_624;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v347->klass->vtable._5_set_isEnabled.method)(
        v347,
        1LL,
        v347->klass->vtable._6_OnInit.methodPtr);
      v348 = v539->fields.baseButton;
      if ( !v348 )
        goto LABEL_624;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v348->klass->vtable._14_SetState.method)(
        v348,
        0LL,
        1LL,
        v348->klass->vtable._15_OnPress.methodPtr);
    }
    goto LABEL_586;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v342, 0LL, 0LL) )
  {
    v343 = v539->fields.baseButton;
    if ( !v343 )
      goto LABEL_624;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v343->klass->vtable._5_set_isEnabled.method)(
      v343,
      1LL,
      v343->klass->vtable._6_OnInit.methodPtr);
    v344 = v539->fields.baseButton;
    if ( !v344 )
      goto LABEL_624;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v344->klass->vtable._14_SetState.method)(
      v344,
      0LL,
      1LL,
      v344->klass->vtable._15_OnPress.methodPtr);
    if ( !*v538 )
      goto LABEL_624;
    v345 = UnityEngine_Component__get_gameObject(*v538, 0LL);
    if ( !v345 )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive(v345, 1, 0LL);
    v340 = *v538;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v341 = &StringLiteral_8800/*"MSG_ABLED_SKILLUP"*/;
LABEL_577:
    v346 = LocalizationManager__Get((System_String_o *)*v341, 0LL);
    if ( !v340 )
      goto LABEL_624;
    UILabel__set_text((UILabel_o *)v340, v346, 0LL);
  }
LABEL_586:
  if ( item->fields.isBaseSvt )
  {
    v349 = (UnityEngine_Component_o *)v539->fields.removeImg;
    if ( !v349 )
      goto LABEL_624;
    v350 = UnityEngine_Component__get_gameObject(v349, 0LL);
    if ( !v350 )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive(v350, 1, 0LL);
  }
  v302 = item->fields.type;
LABEL_591:
  if ( v302 != 11 )
    goto LABEL_702;
  AppendSkillData = CombineServantListViewItem__GetAppendSkillData(item, switchInfoList);
  enableAppendSkillUp = item->fields.enableAppendSkillUp;
  v353 = AppendSkillData;
  v358 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v354, v355, v356, v357);
  System_Text_StringBuilder___ctor(v358, 0LL);
  if ( !v353 )
    goto LABEL_624;
  svtUseSkillIdList = v353->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_624;
  v360 = *(_QWORD *)&svtUseSkillIdList->max_length;
  if ( (int)v360 >= 1 )
  {
    v361 = 0LL;
    v362 = (unsigned int)(v360 - 1);
    v363 = (int)v360;
    while ( v361 < svtUseSkillIdList->max_length )
    {
      svtSkillLvList = v353->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_624;
      if ( v361 >= svtSkillLvList->max_length )
        break;
      v365 = (__int64)svtSkillLvList + 4 * v361;
      v366 = svtUseSkillIdList->m_Items[v361 + 1];
      v368 = *(_DWORD *)(v365 + 32);
      v367 = v365 + 32;
      if ( v368 <= 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v369 = LocalizationManager__Get((System_String_o *)StringLiteral_9292/*"NONSKILL_TXT"*/, 0LL);
      }
      else
      {
        v369 = System_Int32__ToString(v367, 0LL);
      }
      v370 = (Il2CppObject *)v369;
      if ( enableAppendSkillUp )
      {
        v371 = System_Collections_Generic_List_int___Contains(
                 enableAppendSkillUp,
                 v366,
                 (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v361 == v362 )
        {
          if ( v371 )
          {
            v372 = &StringLiteral_12200/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v372 = &StringLiteral_12200/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v372 = &StringLiteral_12200/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/;
              }
            }
          }
          else
          {
            v372 = &StringLiteral_12202/*"SKILL_LVDISP_SINGLE_TXT"*/;
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            {
              v372 = &StringLiteral_12202/*"SKILL_LVDISP_SINGLE_TXT"*/;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v372 = &StringLiteral_12202/*"SKILL_LVDISP_SINGLE_TXT"*/;
              }
            }
          }
        }
        else if ( v371 )
        {
          v372 = &StringLiteral_12201/*"SKILL_LVDISP_ENABLE_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v372 = &StringLiteral_12201/*"SKILL_LVDISP_ENABLE_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v372 = &StringLiteral_12201/*"SKILL_LVDISP_ENABLE_TXT"*/;
            }
          }
        }
        else
        {
          v372 = &StringLiteral_12203/*"SKILL_LVDISP_TXT"*/;
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v372 = &StringLiteral_12203/*"SKILL_LVDISP_TXT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v372 = &StringLiteral_12203/*"SKILL_LVDISP_TXT"*/;
            }
          }
        }
        v373 = LocalizationManager__Get((System_String_o *)*v372, 0LL);
        if ( v358 )
        {
          appended = System_Text_StringBuilder__AppendFormat(v358, v373, v370, 0LL);
          if ( (__int64)++v361 >= v363 )
            goto LABEL_626;
          svtUseSkillIdList = v353->fields.svtUseSkillIdList;
          if ( svtUseSkillIdList )
            continue;
        }
      }
      goto LABEL_624;
    }
LABEL_1056:
    sub_B17100(appended, v310, v311);
    sub_B170A0();
  }
  if ( !v358 )
    goto LABEL_624;
LABEL_626:
  this = v539;
  v374 = v539->fields.skillLvLabel;
  v375 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v358->klass->vtable._3_ToString.method)(
                              v358,
                              v358->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v374 )
    goto LABEL_624;
  UILabel__set_text(v374, v375, 0LL);
  v376 = (UnityEngine_Component_o *)v539->fields.skillLvLabel;
  p_maskLabel = v537;
  p_statusTxtLb = (UILabel_o **)v538;
  p_maskSprite = v536;
  if ( !v376 )
    goto LABEL_624;
  v377 = UnityEngine_Component__get_gameObject(v376, 0LL);
  if ( !v377 )
    goto LABEL_624;
  UnityEngine_GameObject__SetActive(v377, 1, 0LL);
  modeKind = v540;
  if ( item->fields.isParty )
  {
    v379 = v539->fields.partyIcon;
    if ( !v379 )
      goto LABEL_624;
    FlashingIconComponent__Set(v379, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    v380 = (UnityEngine_Component_o *)v539->fields.lockImg;
    if ( !v380 )
      goto LABEL_624;
    v381 = UnityEngine_Component__get_gameObject(v380, 0LL);
    if ( !v381 )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive(v381, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, v378) )
  {
    if ( !*v536 )
      goto LABEL_624;
    v382 = UnityEngine_Component__get_gameObject(*v536, 0LL);
    if ( !v382 )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive(v382, 1, 0LL);
    v383 = *v537;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v384 = LocalizationManager__Get((System_String_o *)StringLiteral_9290/*"NONSELECT_SKILLUP_BASE"*/, 0LL);
    if ( !v383 )
      goto LABEL_624;
    UILabel__set_text(v383, v384, 0LL);
    if ( item->fields.isEventJoin )
    {
      v385 = *v537;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v386 = LocalizationManager__Get((System_String_o *)StringLiteral_10354/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v385 )
        goto LABEL_624;
      UILabel__set_text(v385, v386, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_669;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28023340(126, 0LL) )
      goto LABEL_669;
    v387 = (UnityEngine_Component_o *)*v537;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v388 = &StringLiteral_11584/*"SELECT_CANNOT"*/;
    goto LABEL_667;
  }
  if ( !enableAppendSkillUp )
    goto LABEL_624;
  if ( enableAppendSkillUp->fields._size > 0 || item->fields.isAppendSkillOpenItemNum )
  {
    if ( !*v538 )
      goto LABEL_624;
    v389 = UnityEngine_Component__get_gameObject(*v538, 0LL);
    if ( !v389 )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive(v389, 1, 0LL);
    v387 = *v538;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v388 = &StringLiteral_8800/*"MSG_ABLED_SKILLUP"*/;
LABEL_667:
    v390 = LocalizationManager__Get((System_String_o *)*v388, 0LL);
    if ( !v387 )
      goto LABEL_624;
    UILabel__set_text((UILabel_o *)v387, v390, 0LL);
  }
LABEL_669:
  v391 = (UnityEngine_Object_o *)v539->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v391, 0LL, 0LL) )
  {
    v392 = v539->fields.baseButton;
    if ( !v392 )
      goto LABEL_624;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v392->klass->vtable._5_set_isEnabled.method)(
      v392,
      1LL,
      v392->klass->vtable._6_OnInit.methodPtr);
    v393 = v539->fields.baseButton;
    if ( !v393 )
      goto LABEL_624;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v393->klass->vtable._14_SetState.method)(
      v393,
      0LL,
      1LL,
      v393->klass->vtable._15_OnPress.methodPtr);
  }
  coinInfo = (UnityEngine_Object_o *)v539->fields.coinInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(coinInfo, 0LL, 0LL) )
  {
    v395 = (UnityEngine_Object_o *)v539->fields.switchInfoComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v395, 0LL, 0LL) )
    {
      switchInfoList = (MethodInfo *)v539->fields.switchInfoList;
      if ( switchInfoList )
      {
        v396 = v539->fields.switchInfoComp;
        if ( !v396 )
          goto LABEL_624;
        SwitchUIWidgetComponent__Set(v396, (UIWidget_array *)switchInfoList, 0LL);
        v397 = v539->fields.coinInfo;
        if ( !v397 )
          goto LABEL_624;
        UnityEngine_GameObject__SetActive(v397, 1, 0LL);
        coinNumLabel = v539->fields.coinNumLabel;
        if ( (CombineServantListViewItem__get_SkillOpenItemNum(item, v399) & 0x80000000) != 0 )
        {
          v402 = (System_String_o *)StringLiteral_1/*""*/;
          if ( !coinNumLabel )
            goto LABEL_624;
        }
        else
        {
          SkillOpenItemNum = CombineServantListViewItem__get_SkillOpenItemNum(item, v400);
          v401 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SkillOpenItemNum);
          v402 = System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v401, 0LL);
          if ( !coinNumLabel )
            goto LABEL_624;
        }
        UILabel__set_text(coinNumLabel, v402, 0LL);
        SkillOpenItemId = CombineServantListViewItem__get_SkillOpenItemId(item, v403);
        coinIcon = v539->fields.coinIcon;
        if ( SkillOpenItemId < 1 )
        {
          if ( !coinIcon )
            goto LABEL_624;
          iconSprite = (UnityEngine_Component_o *)coinIcon->fields.iconSprite;
          if ( !iconSprite )
            goto LABEL_624;
          v409 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
          if ( !v409 )
            goto LABEL_624;
          UnityEngine_GameObject__SetActive(v409, 0, 0LL);
        }
        else
        {
          v407 = CombineServantListViewItem__get_SkillOpenItemId(item, v405);
          if ( !coinIcon )
            goto LABEL_624;
          ItemIconComponent__SetItem(coinIcon, v407, -1, 0LL);
        }
      }
    }
  }
  if ( item->fields.isBaseSvt )
  {
    v410 = (UnityEngine_Component_o *)v539->fields.removeImg;
    if ( !v410 )
      goto LABEL_624;
    v411 = UnityEngine_Component__get_gameObject(v410, 0LL);
    if ( !v411 )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive(v411, 1, 0LL);
  }
LABEL_702:
  v412 = item->fields.type;
  if ( v412 != 4 )
    goto LABEL_756;
  v413 = this->fields.npIconLabel;
  if ( !v413 )
    goto LABEL_624;
  v414 = SHIDWORD(v543.name) <= 0 ? -1 : LODWORD(v543.name);
  UIIconLabel__Set_40377052(v413, 33, v414, SHIDWORD(v543.methodPointer), 0, 0LL, 0, 0, 0, 0LL);
  v415 = this->fields.npLvInfo;
  if ( !v415 )
    goto LABEL_624;
  UnityEngine_GameObject__SetActive(v415, 1, 0LL);
  if ( item->fields.isParty )
  {
    v417 = this->fields.partyIcon;
    if ( !v417 )
      goto LABEL_624;
    FlashingIconComponent__Set(v417, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    v418 = (UnityEngine_Component_o *)this->fields.lockImg;
    if ( !v418 )
      goto LABEL_624;
    v419 = UnityEngine_Component__get_gameObject(v418, 0LL);
    if ( !v419 )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive(v419, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, v416) )
  {
    v420 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v420, 0LL, 0LL) )
      goto LABEL_751;
    v421 = this->fields.baseButton;
    if ( !v421 )
      goto LABEL_624;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v421->klass->vtable._5_set_isEnabled.method)(
      v421,
      1LL,
      v421->klass->vtable._6_OnInit.methodPtr);
    v422 = this->fields.baseButton;
    if ( !v422 )
      goto LABEL_624;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v422->klass->vtable._14_SetState.method)(
      v422,
      0LL,
      1LL,
      v422->klass->vtable._15_OnPress.methodPtr);
    if ( !*p_maskSprite )
      goto LABEL_624;
    v423 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
    if ( !v423 )
      goto LABEL_624;
    UnityEngine_GameObject__SetActive(v423, 1, 0LL);
    v424 = *p_maskLabel;
    if ( item->fields.isHeroineSvt )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v425 = &StringLiteral_9286/*"NONSELECT_MATERIAL"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v425 = &StringLiteral_9289/*"NONSELECT_NPUP_BASE"*/;
    }
    v430 = LocalizationManager__Get((System_String_o *)*v425, 0LL);
    if ( !v424 )
      goto LABEL_624;
    goto LABEL_750;
  }
  if ( !item->fields.isSameSvt && !item->fields.isBaseSvt )
  {
    v454 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v454, 0LL, 0LL) )
    {
      v455 = this->fields.baseButton;
      if ( !v455 )
        goto LABEL_624;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v455->klass->vtable._5_set_isEnabled.method)(
        v455,
        1LL,
        v455->klass->vtable._6_OnInit.methodPtr);
      v456 = this->fields.baseButton;
      if ( !v456 )
        goto LABEL_624;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v456->klass->vtable._14_SetState.method)(
        v456,
        0LL,
        1LL,
        v456->klass->vtable._15_OnPress.methodPtr);
    }
    goto LABEL_751;
  }
  v426 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v426, 0LL, 0LL) )
  {
    v427 = this->fields.baseButton;
    if ( !v427 )
      goto LABEL_624;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v427->klass->vtable._5_set_isEnabled.method)(
      v427,
      1LL,
      v427->klass->vtable._6_OnInit.methodPtr);
    v428 = this->fields.baseButton;
    if ( !v428 )
      goto LABEL_624;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v428->klass->vtable._14_SetState.method)(
      v428,
      0LL,
      1LL,
      v428->klass->vtable._15_OnPress.methodPtr);
    if ( item->fields.isSameSvt )
    {
      if ( !*p_statusTxtLb )
        goto LABEL_1057;
      v429 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_statusTxtLb, 0LL);
      if ( !v429 )
        goto LABEL_1057;
      UnityEngine_GameObject__SetActive(v429, 1, 0LL);
      v424 = *p_statusTxtLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v430 = LocalizationManager__Get((System_String_o *)StringLiteral_8802/*"MSG_ABLED_TDUP"*/, 0LL);
      if ( !v424 )
        goto LABEL_1057;
LABEL_750:
      UILabel__set_text(v424, v430, 0LL);
    }
  }
LABEL_751:
  if ( item->fields.isBaseSvt )
  {
    v431 = (UnityEngine_Component_o *)this->fields.removeImg;
    if ( !v431 )
      goto LABEL_1057;
    v432 = UnityEngine_Component__get_gameObject(v431, 0LL);
    if ( !v432 )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive(v432, 1, 0LL);
  }
  v412 = item->fields.type;
LABEL_756:
  if ( v412 != 6 )
    goto LABEL_834;
  v433 = this->fields.limitCountIcon;
  if ( !v433 )
    goto LABEL_1057;
  LimitCountIconComponent__Set(v433, item->fields.currentLimitCnt, item->fields.maxLimitCnt, 0LL);
  if ( item->fields.isParty )
  {
    v435 = this->fields.partyIcon;
    if ( !v435 )
      goto LABEL_1057;
    FlashingIconComponent__Set(v435, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    v436 = (UnityEngine_Component_o *)this->fields.lockImg;
    if ( !v436 )
      goto LABEL_1057;
    v437 = UnityEngine_Component__get_gameObject(v436, 0LL);
    if ( !v437 )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive(v437, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, v434) )
  {
    v438 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v438, 0LL, 0LL) )
    {
      v439 = this->fields.baseButton;
      if ( !v439 )
        goto LABEL_1057;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v439->klass->vtable._5_set_isEnabled.method)(
        v439,
        1LL,
        v439->klass->vtable._6_OnInit.methodPtr);
      v440 = this->fields.baseButton;
      if ( !v440 )
        goto LABEL_1057;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v440->klass->vtable._14_SetState.method)(
        v440,
        0LL,
        1LL,
        v440->klass->vtable._15_OnPress.methodPtr);
      if ( !*p_maskSprite )
        goto LABEL_1057;
      v441 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
      if ( !v441 )
        goto LABEL_1057;
      UnityEngine_GameObject__SetActive(v441, 1, 0LL);
      if ( item->fields.isHeroineSvt )
      {
        v442 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v443 = &StringLiteral_9286/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        v442 = *p_maskLabel;
        if ( item->fields.isEventJoin )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v443 = &StringLiteral_11607/*"SELECT_SERVANT_EVENT_JOIN"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v443 = &StringLiteral_9330/*"NO_SELECT_LVEXCEED"*/;
        }
      }
      v449 = LocalizationManager__Get((System_String_o *)*v443, 0LL);
      if ( !v442 )
        goto LABEL_624;
      goto LABEL_829;
    }
    goto LABEL_830;
  }
  if ( !item->fields.isLvMax || !item->fields.isLimitCntMax )
  {
    v450 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v450, 0LL, 0LL) )
      goto LABEL_830;
    v451 = this->fields.baseButton;
    if ( !v451 )
      goto LABEL_1057;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v451->klass->vtable._5_set_isEnabled.method)(
      v451,
      1LL,
      v451->klass->vtable._6_OnInit.methodPtr);
    v452 = this->fields.baseButton;
    if ( !v452 )
      goto LABEL_1057;
LABEL_804:
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v452->klass->vtable._14_SetState.method)(
      v452,
      0LL,
      1LL,
      v452->klass->vtable._15_OnPress.methodPtr);
    goto LABEL_830;
  }
  v444 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !item->fields.isLvExceedItemNum )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v444, 0LL, 0LL) )
      goto LABEL_830;
    v453 = this->fields.baseButton;
    if ( !v453 )
      goto LABEL_1057;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v453->klass->vtable._5_set_isEnabled.method)(
      v453,
      1LL,
      v453->klass->vtable._6_OnInit.methodPtr);
    v452 = this->fields.baseButton;
    if ( !v452 )
      goto LABEL_624;
    goto LABEL_804;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v444, 0LL, 0LL) )
  {
    v445 = this->fields.baseButton;
    if ( !v445 )
      goto LABEL_1057;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v445->klass->vtable._5_set_isEnabled.method)(
      v445,
      1LL,
      v445->klass->vtable._6_OnInit.methodPtr);
    v446 = this->fields.baseButton;
    if ( !v446 )
      goto LABEL_1057;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v446->klass->vtable._14_SetState.method)(
      v446,
      0LL,
      1LL,
      v446->klass->vtable._15_OnPress.methodPtr);
    if ( !*p_maskSprite )
      goto LABEL_1057;
    v447 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
    if ( !v447 )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive(v447, 0, 0LL);
    if ( !*p_maskLabel )
      goto LABEL_1057;
    UILabel__set_text(*p_maskLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !*p_statusTxtLb )
      goto LABEL_1057;
    v448 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_statusTxtLb, 0LL);
    if ( !v448 )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive(v448, 1, 0LL);
    v442 = *p_statusTxtLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v449 = LocalizationManager__Get((System_String_o *)StringLiteral_8799/*"MSG_ABLED_LIMITUP"*/, 0LL);
    if ( !v442 )
      goto LABEL_1057;
LABEL_829:
    UILabel__set_text(v442, v449, 0LL);
  }
LABEL_830:
  if ( item->fields.isBaseSvt )
  {
    v457 = (UnityEngine_Component_o *)this->fields.removeImg;
    if ( !v457 )
      goto LABEL_1057;
    v458 = UnityEngine_Component__get_gameObject(v457, 0LL);
    if ( !v458 )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive(v458, 1, 0LL);
  }
LABEL_834:
  v459 = item->fields.type;
  if ( v459 != 10 && v459 != 7 )
    goto LABEL_906;
  v460 = this->fields.limitCountIcon;
  if ( !v460 )
    goto LABEL_1057;
  LimitCountIconComponent__Clear(v460, 0LL);
  v461 = this->fields.subIconLabel;
  if ( !v461 )
    goto LABEL_1057;
  UIIconLabel__Clear(v461, 0LL);
  v463 = item->fields.type;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  }
  SortKind = CombineServantListViewManager__GetSortKind(v463, v462);
  v465 = this->fields.servantFaceIcon;
  if ( !v465 )
    goto LABEL_1057;
  if ( SortKind == 2 )
  {
    ((void (__fastcall *)(struct ServantFaceIconComponent_o *, __int64, Il2CppMethodPointer))v465->klass->vtable._4_ParameterChange.method)(
      this->fields.servantFaceIcon,
      1LL,
      v465->klass->vtable._5_UpdateAlpha.methodPtr);
    v466 = this->fields.servantFaceIcon;
    if ( !v466 )
      goto LABEL_1057;
    ServantFaceIconComponent__ResetIconLabelPos(v466, 0LL);
    v467 = this->fields.servantFaceIcon;
    if ( !v467 )
      goto LABEL_1057;
    ServantFaceIconComponent__AdjustIconLabelPos(v467, 1.0, -1.0, 0LL);
  }
  else
  {
    ServantFaceIconComponent__ResetIconLabelPos(this->fields.servantFaceIcon, 0LL);
  }
  if ( item->fields.isParty )
  {
    v469 = this->fields.partyIcon;
    if ( !v469 )
      goto LABEL_1057;
    FlashingIconComponent__Set(v469, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    v470 = (UnityEngine_Component_o *)this->fields.lockImg;
    if ( !v470 )
      goto LABEL_1057;
    v471 = UnityEngine_Component__get_gameObject(v470, 0LL);
    if ( !v471 )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive(v471, 1, 0LL);
  }
  v472 = CombineServantListViewItem__get_IsCanNotBaseSelect(item, v468);
  v473 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( v472 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v473, 0LL, 0LL) )
      goto LABEL_893;
    v474 = this->fields.baseButton;
    if ( !v474 )
      goto LABEL_1057;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v474->klass->vtable._5_set_isEnabled.method)(
      v474,
      1LL,
      v474->klass->vtable._6_OnInit.methodPtr);
    v475 = this->fields.baseButton;
    if ( !v475 )
      goto LABEL_1057;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v475->klass->vtable._14_SetState.method)(
      v475,
      0LL,
      1LL,
      v475->klass->vtable._15_OnPress.methodPtr);
    if ( !*p_maskSprite )
      goto LABEL_1057;
    v476 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
    if ( !v476 )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive(v476, 1, 0LL);
    if ( item->fields.type == 10 && item->fields.isCommandCardExceedMax )
    {
      v477 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v478 = LocalizationManager__Get((System_String_o *)StringLiteral_9283/*"NONSEELECT_STATUSUP_MAX"*/, 0LL);
      if ( !v477 )
        goto LABEL_1057;
      UILabel__set_text(v477, v478, 0LL);
    }
    if ( item->fields.isEventJoin )
    {
      v479 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v480 = LocalizationManager__Get((System_String_o *)StringLiteral_11607/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v479 )
        goto LABEL_1057;
      UILabel__set_text(v479, v480, 0LL);
    }
    if ( !item->fields.isHeroineSvt )
      goto LABEL_893;
    v481 = *p_maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v482 = LocalizationManager__Get((System_String_o *)StringLiteral_11584/*"SELECT_CANNOT"*/, 0LL);
    if ( !v481 )
      goto LABEL_1057;
    v483 = v482;
    v484 = v481;
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v473, 0LL, 0LL) )
      goto LABEL_893;
    v485 = this->fields.baseButton;
    if ( !v485 )
      goto LABEL_1057;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v485->klass->vtable._5_set_isEnabled.method)(
      v485,
      1LL,
      v485->klass->vtable._6_OnInit.methodPtr);
    v486 = this->fields.baseButton;
    if ( !v486 )
      goto LABEL_1057;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v486->klass->vtable._14_SetState.method)(
      v486,
      0LL,
      1LL,
      v486->klass->vtable._15_OnPress.methodPtr);
    if ( !*p_maskSprite )
      goto LABEL_1057;
    v487 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
    if ( !v487 )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive(v487, 0, 0LL);
    v484 = *p_maskLabel;
    if ( !*p_maskLabel )
      goto LABEL_1057;
    v483 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text(v484, v483, 0LL);
LABEL_893:
  if ( item->fields.isBaseSvt )
  {
    v488 = (UnityEngine_Component_o *)this->fields.removeImg;
    if ( !v488 )
      goto LABEL_1057;
    v489 = UnityEngine_Component__get_gameObject(v488, 0LL);
    if ( !v489 )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive(v489, 1, 0LL);
  }
  v490 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Implicit(v490, 0LL) )
  {
    v491 = (UnityEngine_Component_o *)this->fields.svtCommandCardList;
    if ( !v491 )
      goto LABEL_1057;
    v492 = UnityEngine_Component__get_gameObject(v491, 0LL);
    if ( !v492 )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive(v492, 1, 0LL);
    v493 = this->fields.svtCommandCardList;
    UserSvtId = CombineServantListViewItem__get_UserSvtId(item, v494);
    if ( !v493 )
      goto LABEL_1057;
    ServantCommandCardListComponent__Set(v493, UserSvtId, 1, 1, 0LL);
  }
  v459 = item->fields.type;
LABEL_906:
  if ( v459 != 8 )
    goto LABEL_975;
  if ( item->fields.isParty )
  {
    v496 = this->fields.partyIcon;
    if ( !v496 )
      goto LABEL_1057;
    FlashingIconComponent__Set(v496, 0LL);
  }
  if ( item->fields.isSwapLock != item->fields.isLock )
  {
    v497 = (UnityEngine_Component_o *)this->fields.lockImg;
    if ( !v497 )
      goto LABEL_1057;
    v498 = UnityEngine_Component__get_gameObject(v497, 0LL);
    if ( !v498 )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive(v498, 1, 0LL);
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(item, switchInfoList) )
  {
    v499 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v499, 0LL, 0LL) )
    {
      v500 = this->fields.baseButton;
      if ( !v500 )
        goto LABEL_1057;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v500->klass->vtable._5_set_isEnabled.method)(
        v500,
        1LL,
        v500->klass->vtable._6_OnInit.methodPtr);
      v501 = this->fields.baseButton;
      if ( !v501 )
        goto LABEL_1057;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v501->klass->vtable._14_SetState.method)(
        v501,
        0LL,
        1LL,
        v501->klass->vtable._15_OnPress.methodPtr);
      if ( !*p_maskSprite )
        goto LABEL_1057;
      v502 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
      if ( !v502 )
        goto LABEL_1057;
      UnityEngine_GameObject__SetActive(v502, 1, 0LL);
      if ( item->fields.isHeroineSvt )
      {
        v503 = *p_maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v504 = &StringLiteral_9286/*"NONSELECT_MATERIAL"*/;
      }
      else
      {
        v503 = *p_maskLabel;
        if ( item->fields.isEventJoin )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v504 = &StringLiteral_11607/*"SELECT_SERVANT_EVENT_JOIN"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v504 = &StringLiteral_9329/*"NO_SELECT_FRIENDSHIP_EXCEED"*/;
        }
      }
      v510 = LocalizationManager__Get((System_String_o *)*v504, 0LL);
      if ( !v503 )
        goto LABEL_624;
      goto LABEL_970;
    }
    goto LABEL_971;
  }
  if ( !item->fields.isFriendshipRankMax )
  {
    v511 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v511, 0LL, 0LL) )
      goto LABEL_971;
    v512 = this->fields.baseButton;
    if ( !v512 )
      goto LABEL_1057;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v512->klass->vtable._5_set_isEnabled.method)(
      v512,
      1LL,
      v512->klass->vtable._6_OnInit.methodPtr);
    v513 = this->fields.baseButton;
    if ( !v513 )
      goto LABEL_1057;
LABEL_959:
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v513->klass->vtable._14_SetState.method)(
      v513,
      0LL,
      1LL,
      v513->klass->vtable._15_OnPress.methodPtr);
    goto LABEL_971;
  }
  v505 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !item->fields.isFriendshipExceedItemNum )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v505, 0LL, 0LL) )
      goto LABEL_971;
    v514 = this->fields.baseButton;
    if ( !v514 )
      goto LABEL_1057;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v514->klass->vtable._5_set_isEnabled.method)(
      v514,
      1LL,
      v514->klass->vtable._6_OnInit.methodPtr);
    v513 = this->fields.baseButton;
    if ( !v513 )
      goto LABEL_624;
    goto LABEL_959;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v505, 0LL, 0LL) )
  {
    v506 = this->fields.baseButton;
    if ( !v506 )
      goto LABEL_1057;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v506->klass->vtable._5_set_isEnabled.method)(
      v506,
      1LL,
      v506->klass->vtable._6_OnInit.methodPtr);
    v507 = this->fields.baseButton;
    if ( !v507 )
      goto LABEL_1057;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v507->klass->vtable._14_SetState.method)(
      v507,
      0LL,
      1LL,
      v507->klass->vtable._15_OnPress.methodPtr);
    if ( !*p_maskSprite )
      goto LABEL_1057;
    v508 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
    if ( !v508 )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive(v508, 0, 0LL);
    if ( !*p_maskLabel )
      goto LABEL_1057;
    UILabel__set_text(*p_maskLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !*p_statusTxtLb )
      goto LABEL_1057;
    v509 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_statusTxtLb, 0LL);
    if ( !v509 )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive(v509, 1, 0LL);
    v503 = *p_statusTxtLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v510 = LocalizationManager__Get((System_String_o *)StringLiteral_8798/*"MSG_ABLED_FRIENDSHIP_EXCEED"*/, 0LL);
    if ( !v503 )
      goto LABEL_1057;
LABEL_970:
    UILabel__set_text(v503, v510, 0LL);
  }
LABEL_971:
  if ( item->fields.isBaseSvt )
  {
    v515 = (UnityEngine_Component_o *)this->fields.removeImg;
    if ( !v515 )
      goto LABEL_1057;
    v516 = UnityEngine_Component__get_gameObject(v515, 0LL);
    if ( !v516 )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive(v516, 1, 0LL);
  }
LABEL_975:
  if ( (unsigned int)(modeKind - 1) > 1 )
  {
    if ( modeKind != 3 )
      return;
    if ( item->fields.isEventJoin )
    {
      if ( !*p_maskSprite )
        goto LABEL_1057;
      v519 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
      if ( !v519 )
        goto LABEL_1057;
      UnityEngine_GameObject__SetActive(v519, 1, 0LL);
      v520 = *p_maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v521 = LocalizationManager__Get((System_String_o *)StringLiteral_11607/*"SELECT_SERVANT_EVENT_JOIN"*/, 0LL);
      if ( !v520 )
        goto LABEL_1057;
      goto LABEL_1016;
    }
    if ( !item->fields.isCanNotLock )
    {
      v523 = CombineServantListViewItem__get_UserSvtEntity(item, switchInfoList);
      if ( !v523 )
        goto LABEL_1057;
      if ( !UserServantEntity__IsLeave(v523, 0LL) )
      {
        v525 = CombineServantListViewItem__get_UserSvtEntity(item, v524);
        if ( !v525 )
          goto LABEL_1057;
        if ( !UserServantEntity__IsCombineMaterial(v525, 0LL) )
        {
          v527 = CombineServantListViewItem__get_UserSvtEntity(item, v526);
          if ( !v527 )
            goto LABEL_1057;
          if ( !UserServantEntity__IsStatusUp(v527, 0LL) )
          {
            v529 = CombineServantListViewItem__get_UserSvtEntity(item, v528);
            if ( !v529 )
              goto LABEL_1057;
            if ( !UserServantEntity__IsMaterialTd(v529, 0LL) )
            {
              if ( !*p_maskSprite )
                goto LABEL_1057;
              v535 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
              if ( !v535 )
                goto LABEL_1057;
              UnityEngine_GameObject__SetActive(v535, 0, 0LL);
              v532 = *p_maskLabel;
              if ( !*p_maskLabel )
                goto LABEL_1057;
              v531 = (System_String_o *)StringLiteral_1/*""*/;
              goto LABEL_1017;
            }
          }
        }
      }
    }
    if ( !*p_maskSprite )
      goto LABEL_1057;
    v530 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
    if ( !v530 )
      goto LABEL_1057;
    UnityEngine_GameObject__SetActive(v530, 1, 0LL);
    v520 = *p_maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v521 = LocalizationManager__Get((System_String_o *)StringLiteral_8402/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
    if ( v520 )
    {
LABEL_1016:
      v531 = v521;
      v532 = v520;
LABEL_1017:
      UILabel__set_text(v532, v531, 0LL);
      v522 = *p_statusTxtLb;
      if ( *p_statusTxtLb )
      {
LABEL_1018:
        UILabel__set_text(v522, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        return;
      }
LABEL_1057:
      sub_B170D4();
    }
LABEL_624:
    sub_B170D4();
  }
  if ( !item->fields.isHeroineSvt )
    goto LABEL_1060;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_28023340(126, 0LL) )
  {
LABEL_1060:
    if ( *p_maskSprite )
    {
      v517 = UnityEngine_Component__get_gameObject(*p_maskSprite, 0LL);
      if ( v517 )
      {
        UnityEngine_GameObject__SetActive(v517, item->fields.isCanNotLock, 0LL);
        if ( item->fields.isCanNotLock )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v518 = LocalizationManager__Get((System_String_o *)StringLiteral_8402/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
        }
        else
        {
          v518 = (System_String_o *)StringLiteral_1/*""*/;
        }
        if ( *p_maskLabel )
        {
          UILabel__set_text(*p_maskLabel, v518, 0LL);
          v522 = *p_statusTxtLb;
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
  DragSelectComponent_o *v6; // x0
  int32_t dragSelectNum; // w2
  int32_t selectNum; // w1

  if ( (byte_40FC92C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_40FC92C = 1;
  }
  dragSelect = (UnityEngine_Object_o *)this->fields.dragSelect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(dragSelect, 0LL, 0LL) )
  {
    v6 = this->fields.dragSelect;
    if ( item )
    {
      if ( v6 )
      {
        dragSelectNum = item->fields.dragSelectNum;
        selectNum = item->fields.selectNum;
LABEL_12:
        DragSelectComponent__Set(v6, selectNum, dragSelectNum, 0LL);
        return;
      }
    }
    else if ( v6 )
    {
      selectNum = -1;
      dragSelectNum = -1;
      goto LABEL_12;
    }
    sub_B170D4();
  }
}