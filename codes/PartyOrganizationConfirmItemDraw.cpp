void __fastcall PartyOrganizationConfirmItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FDC3D & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationConfirmItemDraw_TypeInfo, v1);
    byte_40FDC3D = 1;
  }
  PartyOrganizationConfirmItemDraw_TypeInfo->static_fields->ICON_OFFSET_SIZE = 60;
  PartyOrganizationConfirmItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT = 154;
}


void __fastcall PartyOrganizationConfirmItemDraw___ctor(
        PartyOrganizationConfirmItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmItemDraw__Awake(
        PartyOrganizationConfirmItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UIWidget_o *restrictionMaskMessageText; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UISprite_o *v11; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v13; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UIWidget_o *restrictionWarningMessageLabel; // x0

  if ( (byte_40FDC37 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDC37 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_18;
    this->fields.restrictionMaskMessageWidth = restrictionMaskMessageText->fields.mWidth;
    UIWidget__set_width(restrictionMaskMessageText, 1000, 0LL);
    v11 = this->fields.restrictionMaskSprite;
    if ( !v11 )
      goto LABEL_18;
    mAtlas = v11->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.maskSpriteDefaultAtlas,
      (System_Int32_array **)mAtlas,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v13 = this->fields.restrictionMaskSprite;
    if ( !v13 )
      goto LABEL_18;
    this->fields.maskSpriteDefaultHeight = v13->fields.mHeight;
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    restrictionWarningMessageLabel = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( restrictionWarningMessageLabel )
    {
      this->fields.restrictionWarningMessageWidth = restrictionWarningMessageLabel->fields.mWidth;
      UIWidget__set_width(restrictionWarningMessageLabel, 1000, 0LL);
      return;
    }
LABEL_18:
    sub_B170D4();
  }
}


void __fastcall PartyOrganizationConfirmItemDraw__ClearMessage(
        PartyOrganizationConfirmItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *restrictionMaskMessageText; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_GameObject_o *v9; // x0
  FlashingIconComponent_o *restrictionWarningIcon; // x0
  UILabel_o *restrictionWarningMessageLabel; // x0

  if ( (byte_40FDC39 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40FDC39 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !v5 )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_20;
    UILabel__set_text(restrictionMaskMessageText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    v9 = this->fields.restrictionWarningBase;
    if ( v9 )
    {
      UnityEngine_GameObject__SetActive(v9, 0, 0LL);
      restrictionWarningIcon = this->fields.restrictionWarningIcon;
      if ( restrictionWarningIcon )
      {
        FlashingIconComponent__Clear(restrictionWarningIcon, 0LL);
        restrictionWarningMessageLabel = this->fields.restrictionWarningMessageLabel;
        if ( restrictionWarningMessageLabel )
        {
          UILabel__set_text(restrictionWarningMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
LABEL_20:
    sub_B170D4();
  }
}


void __fastcall PartyOrganizationConfirmItemDraw__SetInput(
        PartyOrganizationConfirmItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmItemDraw__SetItem(
        PartyOrganizationConfirmItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        int32_t mode,
        bool isAdjustPosY,
        bool isRarityHide,
        int32_t imageSvtId,
        bool isSimpleDisp,
        const MethodInfo *method)
{
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
  ServantFaceIconComponent_o *servantFaceIcon; // x24
  ServantLeaderInfo_o *ServantLeader; // x0
  struct FollowerInfo_o *followerInfo; // x8
  UnityEngine_Object_o *typeSprite; // x24
  const MethodInfo *v54; // x1
  struct FollowerInfo_o *v55; // x8
  int32_t type; // w8
  UnityEngine_Component_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  UISprite_o *v59; // x0
  __int64 *v60; // x8
  UnityEngine_Object_o *v61; // x23
  const MethodInfo *v62; // x1
  UnityEngine_Component_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  UserServantEntity_o *userServantEntity; // x23
  ServantFaceIconComponent_o *v66; // x24
  System_Int64_array *EquipList; // x0
  const MethodInfo *v68; // x1
  System_Int32_array *v69; // x0
  UnityEngine_Object_o *v70; // x23
  System_Int32_array *v71; // x24
  UserServantEntity_o *v72; // x0
  bool IsEventJoin; // w0
  UISprite_o *v74; // x0
  System_String_o *v75; // x1
  UnityEngine_Object_o *v76; // x23
  UnityEngine_Component_o *v77; // x0
  UnityEngine_GameObject_o *v78; // x0
  UnityEngine_Object_c *v79; // x0
  __int64 *v80; // x8
  System_String_o *v81; // x23
  UnityEngine_Object_o *v82; // x24
  UISprite_o *v83; // x0
  ServantEntity_o *servantEntity; // x0
  const MethodInfo *v85; // x1
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v88; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v90; // w0
  UserServantEntity_o *HeroineData; // x0
  int32_t v92; // w0
  UnityEngine_Component_o *v93; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ServantFaceIconComponent_o *v95; // x0
  UnityEngine_Component_o *v96; // x0
  UnityEngine_GameObject_o *v97; // x0
  struct UISprite_o *v98; // x0
  System_Int32_array *CommandCardList; // x0
  UnityEngine_Object_o *supportSprite; // x25
  UISprite_o *v101; // x0
  System_String_o *v102; // x1
  UnityEngine_Object_o *v103; // x23
  UnityEngine_Component_o *v104; // x0
  UnityEngine_GameObject_o *v105; // x0
  UnityEngine_Object_o *v106; // x23
  UISprite_o *v107; // x0
  ServantFaceIconComponent_o *v108; // x0
  UnityEngine_Component_o *v109; // x0
  UnityEngine_GameObject_o *v110; // x0
  int32_t v111; // w23
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // kr10_16
  int32_t v114; // w0
  ServantFaceIconComponent_o *v115; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // kr20_16
  int32_t v117; // w0
  int32_t svtLimitCount; // w26
  int32_t v119; // w27
  const MethodInfo *v120; // x1
  int32_t lv; // w0
  UnityEngine_Object_o *v122; // x23
  UISprite_o *v123; // x0
  ServantFaceIconComponent_o *v124; // x0
  ServantFaceIconComponent_o *v125; // x0
  ServantFaceIconComponent_o *v126; // x0
  ServantFaceIconComponent_o *v127; // x0
  ServantFaceIconComponent_o *v128; // x0
  ServantFaceIconComponent_o *v129; // x0
  bool v130; // w1
  ServantFaceIconComponent_o *v131; // x0
  __int64 v132; // x0
  __int64 v133; // x1
  __int64 v134; // x2
  struct UILabel_array *commandLabelList; // x8
  __int64 v136; // x26
  int32_t v137; // w21
  int max_length; // w9
  UILabel_o *v139; // x22
  System_String_o *v140; // x1
  UnityEngine_Behaviour_o *baseSprite; // x0
  UnityEngine_Behaviour_o *v142; // x0
  UISprite_o *v143; // x0
  UnityEngine_Object_o *memberTypeBaseSprite; // x21
  int32_t index; // w21
  UISprite_o *v146; // x0
  System_String_o **v147; // x8
  UISprite_o *memberTypeSprite; // x21
  System_String_o *v149; // x0
  System_String_o *v150; // x0
  struct UISprite_o *v151; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  const MethodInfo *v153; // x1
  UserServantEntity_o *v154; // x0
  __int64 *v155; // x8
  System_String_o *v156; // x21
  const MethodInfo *v157; // x5
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  PartyOrganizationConfirmItemDraw_o *v162; // x0
  System_String_o *v163; // x1
  System_String_o *v164; // x3
  int v165; // w24
  const MethodInfo *v166; // x1
  System_String_o *v167; // x0
  System_String_o *v168; // x21
  const MethodInfo *v169; // x5
  int v170; // s0
  PartyOrganizationConfirmItemDraw_o *v174; // x0
  System_String_o *v175; // x1
  System_String_o *v176; // x3
  bool v177; // w4
  __int64 *v178; // x8
  System_String_o *v179; // x1
  const MethodInfo *v180; // x4
  float v181; // s0
  float v182; // s1
  PartyOrganizationConfirmItemDraw_o *v183; // x0
  bool v184; // w3
  int64_t fatigureTime; // x21
  System_String_o *v186; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  _DWORD *v188; // x8
  WebViewManager_o *v189; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v190; // x21
  const MethodInfo *v191; // x1
  ServantLeaderInfo_o *v192; // x0
  __int64 v193; // x22
  __int64 v194; // x23
  int32_t v195; // w0
  WarEntity_o *Entity; // x0
  const MethodInfo *v197; // x1
  int32_t SvtClassId; // w21
  ServantLeaderInfo_o *v199; // x0
  UserServantEntity_o *v200; // x0
  ServantClassCompatibilityIconComponent_o *v201; // x0
  AvalonSceneManager_o *v202; // x0
  WebViewManager_o *v203; // x0
  BattleSetupInfo_o **basePanel; // x0
  __int64 v205; // x9
  BattleSetupInfo_o *v206; // x22
  int32_t v207; // w0
  int32_t questPhase; // w22
  int32_t v209; // w20
  WebViewManager_o *v210; // x0
  QuestPhaseMaster_o *v211; // x0
  QuestPhaseEntity_o *v212; // x0
  struct ServantClassCompatibilityIconComponent_o *v213; // x8
  System_String_o *v214; // x21
  Il2CppObject *v215; // x0
  PartyOrganizationCommandCardMenu_o *v216; // x0
  const MethodInfo *v217; // x1
  int32_t TimesToRestart_k__BackingField; // [xsp+44h] [xbp-6Ch] BYREF
  UnityEngine_Color_o color; // [xsp+48h] [xbp-68h] BYREF
  int v220; // [xsp+5Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v221; // 0:x0.16

  if ( (byte_40FDC38 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v17);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_B16FFC(&int_TypeInfo, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&NetworkManager_TypeInfo, v21);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v22);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_B16FFC(&PartyOrganizationRootComponent_TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v25);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B16FFC(&StringLiteral_19303/*"icon_support_02"*/, v27);
    sub_B16FFC(&StringLiteral_10331/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/, v28);
    sub_B16FFC(&StringLiteral_10334/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v29);
    sub_B16FFC(&StringLiteral_11600/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, v30);
    sub_B16FFC(&StringLiteral_11601/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v31);
    sub_B16FFC(&StringLiteral_11595/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v32);
    sub_B16FFC(&StringLiteral_19415/*"img_frames_mask11"*/, v33);
    sub_B16FFC(&StringLiteral_10330/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v34);
    sub_B16FFC(&StringLiteral_20381/*"member_txt_"*/, v35);
    sub_B16FFC(&StringLiteral_11594/*"SELECT_NO_SORTIE"*/, v36);
    sub_B16FFC(&StringLiteral_19302/*"icon_support_01"*/, v37);
    sub_B16FFC(&StringLiteral_19267/*"icon_eventjoin_02"*/, v38);
    sub_B16FFC(&StringLiteral_18778/*"formation_txtbg_03"*/, v39);
    sub_B16FFC(&StringLiteral_18748/*"formation_blank_small"*/, v40);
    sub_B16FFC(&StringLiteral_17815/*"datalost_svt_select"*/, v41);
    sub_B16FFC(&StringLiteral_349/*"#042484"*/, v42);
    sub_B16FFC(&StringLiteral_18776/*"formation_support_small"*/, v43);
    sub_B16FFC(&StringLiteral_18777/*"formation_txtbg_02"*/, v44);
    sub_B16FFC(&StringLiteral_1/*""*/, v45);
    sub_B16FFC(&StringLiteral_10332/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/, v46);
    sub_B16FFC(&StringLiteral_19269/*"icon_friend"*/, v47);
    sub_B16FFC(&StringLiteral_10333/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/, v48);
    sub_B16FFC(&StringLiteral_19268/*"icon_follow"*/, v49);
    byte_40FDC38 = 1;
  }
  v220 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  if ( !item || !mode )
    return;
  if ( item->fields.isFollower )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( item->fields.followerInfo )
    {
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(item, (const MethodInfo *)item);
      followerInfo = item->fields.followerInfo;
      if ( !followerInfo || !servantFaceIcon )
        goto LABEL_150;
      ServantFaceIconComponent__Set_30632248(
        servantFaceIcon,
        ServantLeader,
        0LL,
        0LL,
        0,
        followerInfo->fields.imageSvtId,
        0LL);
      typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
      {
        v55 = item->fields.followerInfo;
        if ( !v55 )
          goto LABEL_150;
        type = v55->fields.type;
        if ( (unsigned int)(type - 3) < 2 )
        {
          v93 = (UnityEngine_Component_o *)this->fields.typeSprite;
          if ( !v93 )
            goto LABEL_150;
          gameObject = UnityEngine_Component__get_gameObject(v93, 0LL);
          if ( !gameObject )
            goto LABEL_150;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          v59 = this->fields.typeSprite;
          if ( !v59 )
            goto LABEL_150;
          v60 = &StringLiteral_19302/*"icon_support_01"*/;
          goto LABEL_75;
        }
        if ( type == 5 )
        {
          v96 = (UnityEngine_Component_o *)this->fields.typeSprite;
          if ( !v96 )
            goto LABEL_150;
          v97 = UnityEngine_Component__get_gameObject(v96, 0LL);
          if ( !v97 )
            goto LABEL_150;
          UnityEngine_GameObject__SetActive(v97, 1, 0LL);
          v59 = this->fields.typeSprite;
          if ( !v59 )
            goto LABEL_150;
          v60 = &StringLiteral_19268/*"icon_follow"*/;
          goto LABEL_75;
        }
        if ( type == 1 )
        {
          v57 = (UnityEngine_Component_o *)this->fields.typeSprite;
          if ( !v57 )
            goto LABEL_150;
          v58 = UnityEngine_Component__get_gameObject(v57, 0LL);
          if ( !v58 )
            goto LABEL_150;
          UnityEngine_GameObject__SetActive(v58, 1, 0LL);
          v59 = this->fields.typeSprite;
          if ( !v59 )
            goto LABEL_150;
          v60 = &StringLiteral_19269/*"icon_friend"*/;
LABEL_75:
          UISprite__set_spriteName(v59, (System_String_o *)*v60, 0LL);
          v98 = this->fields.typeSprite;
          if ( !v98 )
            goto LABEL_150;
          ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v98->klass->vtable._33_MakePixelPerfect.method)(
            v98,
            v98->klass->vtable._34_get_minWidth.methodPtr);
          goto LABEL_77;
        }
        v109 = (UnityEngine_Component_o *)this->fields.typeSprite;
        if ( !v109 )
          goto LABEL_150;
        v110 = UnityEngine_Component__get_gameObject(v109, 0LL);
        if ( !v110 )
          goto LABEL_150;
        UnityEngine_GameObject__SetActive(v110, 0, 0LL);
      }
LABEL_77:
      CommandCardList = PartyOrganizationListViewItem__GetCommandCardList(item, v54);
      supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
      v71 = CommandCardList;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
      {
        v101 = this->fields.supportSprite;
        if ( !v101 )
          goto LABEL_150;
        if ( item->fields.isFollower )
          v102 = (System_String_o *)StringLiteral_19303/*"icon_support_02"*/;
        else
          v102 = 0LL;
        UISprite__set_spriteName(v101, v102, 0LL);
      }
      if ( isSimpleDisp )
      {
        v103 = (UnityEngine_Object_o *)this->fields.typeSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v103, 0LL, 0LL) )
        {
          v104 = (UnityEngine_Component_o *)this->fields.typeSprite;
          if ( !v104 )
            goto LABEL_150;
          v105 = UnityEngine_Component__get_gameObject(v104, 0LL);
          if ( !v105 )
            goto LABEL_150;
          UnityEngine_GameObject__SetActive(v105, 0, 0LL);
        }
        v106 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v106, 0LL, 0LL) )
        {
          v107 = this->fields.supportSprite;
          if ( !v107 )
            goto LABEL_150;
          UISprite__set_spriteName(v107, 0LL, 0LL);
        }
        v108 = this->fields.servantFaceIcon;
        if ( !v108 )
LABEL_150:
          sub_B170D4();
        ServantFaceIconComponent__ClearEquip(v108, 0LL);
      }
LABEL_102:
      v81 = 0LL;
      if ( !isAdjustPosY )
        goto LABEL_131;
      goto LABEL_126;
    }
    if ( !servantFaceIcon )
      goto LABEL_150;
    ServantFaceIconComponent__Clear(this->fields.servantFaceIcon, 0LL);
    v76 = (UnityEngine_Object_o *)this->fields.typeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
    {
      v77 = (UnityEngine_Component_o *)this->fields.typeSprite;
      if ( !v77 )
        goto LABEL_150;
      v78 = UnityEngine_Component__get_gameObject(v77, 0LL);
      if ( !v78 )
        goto LABEL_150;
      UnityEngine_GameObject__SetActive(v78, 0, 0LL);
    }
    v79 = UnityEngine_Object_TypeInfo;
    v80 = &StringLiteral_18776/*"formation_support_small"*/;
    goto LABEL_47;
  }
  v61 = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v61, 0LL, 0LL) )
  {
    v63 = (UnityEngine_Component_o *)this->fields.typeSprite;
    if ( !v63 )
      goto LABEL_150;
    v64 = UnityEngine_Component__get_gameObject(v63, 0LL);
    if ( !v64 )
      goto LABEL_150;
    UnityEngine_GameObject__SetActive(v64, 0, 0LL);
  }
  userServantEntity = item->fields.userServantEntity;
  if ( userServantEntity )
  {
    v66 = this->fields.servantFaceIcon;
    EquipList = PartyOrganizationListViewItem__GetEquipList(item, v62);
    if ( !v66 )
      goto LABEL_150;
    ServantFaceIconComponent__Set(v66, userServantEntity, EquipList, item->fields.questRestrictionInfo, 0LL, 0LL, 0LL);
    v69 = PartyOrganizationListViewItem__GetCommandCardList(item, v68);
    v70 = (UnityEngine_Object_o *)this->fields.supportSprite;
    v71 = v69;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
    {
      v72 = item->fields.userServantEntity;
      if ( !v72 )
        goto LABEL_150;
      IsEventJoin = UserServantEntity__IsEventJoin(v72, 0LL);
      if ( !this->fields.supportSprite )
        goto LABEL_150;
      if ( IsEventJoin )
      {
        v74 = this->fields.supportSprite;
        v75 = (System_String_o *)StringLiteral_19267/*"icon_eventjoin_02"*/;
      }
      else
      {
        v74 = this->fields.supportSprite;
        v75 = 0LL;
      }
      UISprite__set_spriteName(v74, v75, 0LL);
    }
    goto LABEL_102;
  }
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity )
  {
    v95 = this->fields.servantFaceIcon;
    if ( !v95 )
      goto LABEL_150;
    ServantFaceIconComponent__Clear(v95, 0LL);
    v79 = UnityEngine_Object_TypeInfo;
    v80 = &StringLiteral_18748/*"formation_blank_small"*/;
LABEL_47:
    v81 = (System_String_o *)*v80;
    v82 = (UnityEngine_Object_o *)this->fields.supportSprite;
    if ( (BYTE3(v79->vtable._0_Equals.methodPtr) & 4) != 0 && !v79->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v79);
    if ( UnityEngine_Object__op_Inequality(v82, 0LL, 0LL) )
    {
      v83 = this->fields.supportSprite;
      if ( !v83 )
        goto LABEL_150;
      UISprite__set_spriteName(v83, 0LL, 0LL);
    }
    goto LABEL_125;
  }
  if ( item->fields.questRestrictionInfo )
  {
    if ( ServantEntity__checkIsHeroineSvt(servantEntity, 0LL) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_150;
      MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, v88);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(SvtId, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_150;
      HeroineData = UserServantMaster__getHeroineData(MasterData_WarQuestSelectionMaster, v90, 0LL);
      if ( !item->fields.questRestrictionInfo )
        goto LABEL_150;
      v92 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31255552(
              item->fields.questRestrictionInfo,
              HeroineData,
              0LL);
    }
    else
    {
      questRestrictionInfo = item->fields.questRestrictionInfo;
      v113 = PartyOrganizationListViewItem__get_SvtId(item, v85);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v114 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v113, 0LL);
      if ( !questRestrictionInfo )
        goto LABEL_150;
      v92 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount(questRestrictionInfo, v114, 0LL);
    }
    v111 = v92;
  }
  else
  {
    v111 = -1;
  }
  v115 = this->fields.servantFaceIcon;
  v116 = PartyOrganizationListViewItem__get_SvtId(item, v62);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v116, 0LL);
  svtLimitCount = item->fields.svtLimitCount;
  v119 = v117;
  lv = PartyOrganizationListViewItem__get_Level(item, v120);
  if ( !v115 )
    goto LABEL_150;
  ServantFaceIconComponent__Set_30702780(
    v115,
    v119,
    svtLimitCount,
    v111,
    0,
    0LL,
    0LL,
    2,
    0,
    0,
    0LL,
    1,
    lv,
    imageSvtId,
    0,
    0LL);
  v122 = (UnityEngine_Object_o *)this->fields.supportSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v122, 0LL, 0LL) )
  {
    v123 = this->fields.supportSprite;
    if ( !v123 )
      goto LABEL_150;
    UISprite__set_spriteName(v123, 0LL, 0LL);
  }
  v81 = 0LL;
LABEL_125:
  v71 = 0LL;
  if ( !isAdjustPosY )
    goto LABEL_131;
LABEL_126:
  v124 = this->fields.servantFaceIcon;
  if ( !v124 )
    goto LABEL_150;
  if ( !ServantFaceIconComponent__IsUseEquip(v124, 0LL) )
  {
    v125 = this->fields.servantFaceIcon;
    if ( !v125 )
      goto LABEL_150;
    ServantFaceIconComponent__AdjustRaritySpritePosY(v125, -55.0, 0LL);
    v126 = this->fields.servantFaceIcon;
    if ( !v126 )
      goto LABEL_150;
    ServantFaceIconComponent__AdjustDispLimitCountSpritePosY(v126, -34.0, 0LL);
  }
LABEL_131:
  v127 = this->fields.servantFaceIcon;
  if ( !v127 )
    goto LABEL_150;
  ServantFaceIconComponent__SetDispRaritySprite(v127, !isRarityHide, 0LL);
  if ( item->fields._IsNotSupportSingle_k__BackingField || !item->fields._IsDataLost_k__BackingField )
  {
    v128 = this->fields.servantFaceIcon;
    if ( !v128 )
      goto LABEL_150;
    ServantFaceIconComponent__SetDispClassSprite(v128, 1, 0LL);
    v129 = this->fields.servantFaceIcon;
    if ( !v129 )
      goto LABEL_150;
    v130 = 1;
  }
  else
  {
    v131 = this->fields.servantFaceIcon;
    if ( !v131 )
      goto LABEL_150;
    ServantFaceIconComponent__SetDispClassSprite(v131, 0, 0LL);
    v129 = this->fields.servantFaceIcon;
    if ( !v129 )
      goto LABEL_150;
    v130 = 0;
  }
  ServantFaceIconComponent__FaceSpriteDisp(v129, v130, 0LL);
  commandLabelList = this->fields.commandLabelList;
  if ( !commandLabelList )
    goto LABEL_150;
  v136 = 0LL;
  v137 = (_DWORD)v71 + 32;
  while ( 1 )
  {
    max_length = commandLabelList->max_length;
    if ( (int)v136 >= max_length )
      break;
    if ( (unsigned int)v136 >= max_length )
      goto LABEL_281;
    v139 = commandLabelList->m_Items[v136];
    if ( v71 )
    {
      if ( (unsigned int)v136 >= v71->max_length )
      {
LABEL_281:
        sub_B17100(v132, v133, v134);
        sub_B170A0();
      }
      v140 = System_Int32__ToString(v137, 0LL);
      if ( !v139 )
        goto LABEL_150;
    }
    else
    {
      v140 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v139 )
        goto LABEL_150;
    }
    UILabel__set_text(v139, v140, 0LL);
    commandLabelList = this->fields.commandLabelList;
    ++v136;
    v137 += 4;
    if ( !commandLabelList )
      goto LABEL_150;
  }
  baseSprite = (UnityEngine_Behaviour_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled(baseSprite, 0, 0LL);
  if ( v81 )
  {
    v142 = (UnityEngine_Behaviour_o *)this->fields.baseSprite;
    if ( !v142 )
      goto LABEL_150;
    UnityEngine_Behaviour__set_enabled(v142, 1, 0LL);
    v143 = this->fields.baseSprite;
    if ( !v143 )
      goto LABEL_150;
    UISprite__set_spriteName(v143, v81, 0LL);
  }
  memberTypeBaseSprite = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(memberTypeBaseSprite, 0LL, 0LL) )
  {
    index = item->fields.index;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    v146 = this->fields.memberTypeBaseSprite;
    if ( !v146 )
      goto LABEL_150;
    v147 = (System_String_o **)(index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax
                              ? &StringLiteral_18778/*"formation_txtbg_03"*/
                              : &StringLiteral_18777/*"formation_txtbg_02"*/);
    UISprite__set_spriteName(v146, *v147, 0LL);
    memberTypeSprite = this->fields.memberTypeSprite;
    v220 = item->fields.index + 1;
    v149 = System_Int32__ToString((int32_t)&v220, 0LL);
    v150 = System_String__Concat_43743732((System_String_o *)StringLiteral_20381/*"member_txt_"*/, v149, 0LL);
    if ( !memberTypeSprite )
      goto LABEL_150;
    UISprite__set_spriteName(memberTypeSprite, v150, 0LL);
    v151 = this->fields.memberTypeSprite;
    if ( !v151 )
      goto LABEL_150;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v151->klass->vtable._33_MakePixelPerfect.method)(
      v151,
      v151->klass->vtable._34_get_minWidth.methodPtr);
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
    goto LABEL_225;
  v154 = item->fields.userServantEntity;
  if ( !v154 || !UserServantEntity__IsLeave(v154, 0LL) )
  {
    if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, v153)
      && (item->fields.userServantEntity || item->fields.isFollower) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v167 = LocalizationManager__Get((System_String_o *)StringLiteral_10330/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
LABEL_189:
      v168 = v167;
      *(UnityEngine_Color_o *)&v170 = UnityEngine_Color__get_black(0LL);
      v174 = this;
      v175 = v168;
      v176 = 0LL;
      v177 = 0;
LABEL_190:
      v165 = 1;
      PartyOrganizationConfirmItemDraw__SetMaskMessage(v174, v175, *(UnityEngine_Color_o *)&v170, 1, v176, v177, v169);
      goto LABEL_226;
    }
    if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v178 = &StringLiteral_10331/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_197:
      v179 = LocalizationManager__Get((System_String_o *)*v178, 0LL);
      v181 = 0.0;
      v182 = 0.0;
      v183 = this;
      v184 = 0;
LABEL_198:
      v165 = 1;
      PartyOrganizationConfirmItemDraw__SetWarningMessage(v183, v179, 1, v184, v181, v182, v180);
      goto LABEL_226;
    }
    if ( item->fields.isFixedSupportPositionRestriction )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v178 = &StringLiteral_10332/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/;
      goto LABEL_197;
    }
    if ( item->fields.isFixedServantPositionRestriction )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v178 = &StringLiteral_10333/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
      goto LABEL_197;
    }
    fatigureTime = item->fields.fatigureTime;
    if ( (fatigureTime & 0x8000000000000000LL) != 0 )
    {
      if ( item->fields._IsAllOutBattle_k__BackingField )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v155 = &StringLiteral_11595/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
        goto LABEL_180;
      }
      if ( item->fields._IsNotSupportSingle_k__BackingField )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v179 = LocalizationManager__Get((System_String_o *)StringLiteral_10334/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
        v181 = 10.0;
        v182 = -22.0;
        v184 = 1;
        v183 = this;
        goto LABEL_198;
      }
      if ( item->fields._IsDataLost_k__BackingField )
      {
        *(UnityEngine_Color_o *)&v170 = UnityEngine_Color__get_white(0LL);
        v175 = (System_String_o *)StringLiteral_1/*""*/;
        v177 = 1;
        v174 = this;
        v176 = (System_String_o *)StringLiteral_17815/*"datalost_svt_select"*/;
        goto LABEL_190;
      }
      if ( item->fields._TimesToRestart_k__BackingField >= 1 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v214 = LocalizationManager__Get((System_String_o *)StringLiteral_11601/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
        v215 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
        v167 = System_String__Format(v214, v215, 0LL);
        goto LABEL_189;
      }
    }
    else
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( fatigureTime > NetworkManager__getTime(0LL) )
      {
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_349/*"#042484"*/, &color, 0LL);
        color.fields.a = 0.69804;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v186 = LocalizationManager__Get((System_String_o *)StringLiteral_11600/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, 0LL);
        r = color.fields.r;
        g = color.fields.g;
        b = color.fields.b;
        a = color.fields.a;
        v163 = v186;
        v162 = this;
        v164 = (System_String_o *)StringLiteral_19415/*"img_frames_mask11"*/;
        goto LABEL_181;
      }
      item->fields.fatigureTime = -1LL;
    }
    PartyOrganizationConfirmItemDraw__ClearMessage(this, v166);
LABEL_225:
    v165 = 0;
    goto LABEL_226;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v155 = &StringLiteral_11594/*"SELECT_NO_SORTIE"*/;
LABEL_180:
  v156 = LocalizationManager__Get((System_String_o *)*v155, 0LL);
  *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_black(0LL);
  v162 = this;
  v163 = v156;
  v164 = 0LL;
LABEL_181:
  PartyOrganizationConfirmItemDraw__SetMaskMessage(v162, v163, *(UnityEngine_Color_o *)&r, 0, v164, 0, v157);
  v165 = 1;
LABEL_226:
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
    return;
  if ( !item->fields.isFollower )
  {
    v200 = item->fields.userServantEntity;
    if ( v200 )
    {
      SvtClassId = UserServantEntity__getSvtClassId(v200, 0LL);
    }
    else
    {
      v188 = item->fields.servantEntity;
      if ( !v188 )
        goto LABEL_246;
      SvtClassId = v188[20];
    }
    LODWORD(v188) = 0;
    goto LABEL_247;
  }
  v188 = item->fields.followerInfo;
  if ( !v188 )
  {
LABEL_246:
    SvtClassId = 0;
    goto LABEL_247;
  }
  v189 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v189 )
    goto LABEL_150;
  v190 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)v189,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v192 = PartyOrganizationListViewItem__get_ServantLeader(item, v191);
  if ( !v192 )
    goto LABEL_150;
  v194 = *(_QWORD *)&v192->fields.svtId.fields.currentCryptoKey;
  v193 = *(_QWORD *)&v192->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v221.fields.currentCryptoKey = v194;
  *(_QWORD *)&v221.fields.fakeValue = v193;
  v195 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v221, 0LL);
  if ( !v190 )
    goto LABEL_150;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v190,
             v195,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_150;
  SvtClassId = Entity->fields.startType;
  v199 = PartyOrganizationListViewItem__get_ServantLeader(item, v197);
  if ( !v199 )
    goto LABEL_150;
  LODWORD(v188) = ServantLeaderInfo__IsHideSupport(v199, 0LL);
LABEL_247:
  if ( (unsigned int)v188 | v165 | (SvtClassId == 0) )
  {
    v201 = this->fields.classCompatibilityIcon;
    if ( !v201 )
      goto LABEL_150;
    goto LABEL_267;
  }
  v202 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v202 )
    goto LABEL_150;
  if ( !AvalonSceneManager__checkNowScene(v202, 40, 0LL) )
    goto LABEL_264;
  v203 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v203 )
    goto LABEL_150;
  basePanel = (BattleSetupInfo_o **)v203->fields.basePanel;
  if ( !basePanel )
    goto LABEL_150;
  v205 = *(&PartyOrganizationRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( LOBYTE((*basePanel)[1].fields.originQuestId) < (unsigned int)v205
    || *(PartyOrganizationRootComponent_c **)((*basePanel)[1].fields.deckId + 8 * v205 - 8) != PartyOrganizationRootComponent_TypeInfo )
  {
    sub_B173C8(basePanel);
    PartyOrganizationCommandCardMenu__EndOpen(v216, v217);
    return;
  }
  v206 = basePanel[56];
  if ( !v206
    || (v207 = BattleSetupInfo__TargetQuestId(basePanel[56], 0LL)) == 0
    || (questPhase = v206->fields.questPhase) == 0 )
  {
LABEL_264:
    v213 = this->fields.classCompatibilityIcon;
    goto LABEL_265;
  }
  v209 = v207;
  v210 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v210 )
    goto LABEL_150;
  v211 = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v210,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !v211 )
    goto LABEL_150;
  v212 = QuestPhaseMaster__GetEntity(v211, v209, questPhase, 0LL);
  v213 = this->fields.classCompatibilityIcon;
  if ( !v212 )
  {
LABEL_265:
    if ( !v213 )
      goto LABEL_150;
    v201 = v213;
LABEL_267:
    ServantClassCompatibilityIconComponent__Clear(v201, 0LL);
    return;
  }
  if ( !v213 )
    goto LABEL_150;
  ServantClassCompatibilityIconComponent__SetIcon(
    this->fields.classCompatibilityIcon,
    SvtClassId,
    v212->fields.classIds,
    1,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmItemDraw__SetMaskMessage(
        PartyOrganizationConfirmItemDraw_o *this,
        System_String_o *message,
        UnityEngine_Color_o maskColor,
        bool isScale,
        System_String_o *maskName,
        bool isDataLost,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x24
  UnityEngine_Component_o *v22; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v24; // x24
  struct UISprite_o *v25; // x22
  UIWidget_o *v26; // x0
  int32_t DATA_LOST_MASK_HEIGHT; // w1
  UISprite_o *v28; // x0
  System_String_o *v29; // x1
  UIWidget_o *v30; // x0
  UILabel_o *restrictionMaskMessageText; // x0
  UILabel_o *v32; // x0
  float v33; // s0
  UnityEngine_Component_o *v34; // x0
  float v35; // s8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v37; // x20
  float restrictionMaskMessageWidth; // s0
  float v39; // s1
  float v40; // s0
  float v41; // s2
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_GameObject_o *v43; // x0
  FlashingIconComponent_o *restrictionWarningIcon; // x0
  UILabel_o *restrictionWarningMessageLabel; // x0
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = maskColor.fields.a;
  b = maskColor.fields.b;
  g = maskColor.fields.g;
  r = maskColor.fields.r;
  if ( (byte_40FDC3A & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, message);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&PartyOrganizationConfirmItemDraw_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_17815/*"datalost_svt_select"*/, v18);
    sub_B16FFC(&StringLiteral_19411/*"img_frames_mask03"*/, v19);
    sub_B16FFC(&StringLiteral_1/*""*/, v20);
    byte_40FDC3A = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    v22 = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !v22 )
      goto LABEL_45;
    gameObject = UnityEngine_Component__get_gameObject(v22, 0LL);
    if ( !gameObject )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v24 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(v24, (System_String_o *)StringLiteral_17815/*"datalost_svt_select"*/, 0LL);
      v25 = this->fields.restrictionMaskSprite;
      if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
      }
      if ( !v25 )
        goto LABEL_45;
      v26 = (UIWidget_o *)v25;
      DATA_LOST_MASK_HEIGHT = PartyOrganizationConfirmItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT;
    }
    else
    {
      if ( !v24 )
        goto LABEL_45;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      v28 = this->fields.restrictionMaskSprite;
      if ( !v28 )
        goto LABEL_45;
      v29 = maskName ? maskName : (System_String_o *)StringLiteral_19411/*"img_frames_mask03"*/;
      UISprite__set_spriteName(v28, v29, 0LL);
      v26 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( !v26 )
        goto LABEL_45;
      DATA_LOST_MASK_HEIGHT = this->fields.maskSpriteDefaultHeight;
    }
    UIWidget__set_height(v26, DATA_LOST_MASK_HEIGHT, 0LL);
    v30 = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( !v30 )
      goto LABEL_45;
    v46.fields.r = r;
    v46.fields.g = g;
    v46.fields.b = b;
    v46.fields.a = a;
    UIWidget__set_color(v30, v46, 0LL);
    restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_45;
    UILabel__set_text(restrictionMaskMessageText, message, 0LL);
    v32 = this->fields.restrictionMaskMessageText;
    if ( !v32 )
      goto LABEL_45;
    if ( isScale )
    {
      LODWORD(v33) = *(_QWORD *)&UILabel__get_printedSize(v32, 0LL);
      v34 = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !v34 )
        goto LABEL_45;
      v35 = v33;
      transform = UnityEngine_Component__get_transform(v34, 0LL);
      v37 = transform;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v35 > restrictionMaskMessageWidth )
      {
        v39 = 1.0;
        v40 = restrictionMaskMessageWidth / v35;
        v41 = 1.0;
        if ( !transform )
          goto LABEL_45;
        goto LABEL_35;
      }
    }
    else
    {
      v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v32, 0LL);
    }
    *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Vector3__get_one(0LL);
    if ( !v37 )
      goto LABEL_45;
LABEL_35:
    UnityEngine_Transform__set_localScale(v37, *(UnityEngine_Vector3_o *)&v40, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    v43 = this->fields.restrictionWarningBase;
    if ( v43 )
    {
      UnityEngine_GameObject__SetActive(v43, 0, 0LL);
      restrictionWarningIcon = this->fields.restrictionWarningIcon;
      if ( restrictionWarningIcon )
      {
        FlashingIconComponent__Clear(restrictionWarningIcon, 0LL);
        restrictionWarningMessageLabel = this->fields.restrictionWarningMessageLabel;
        if ( restrictionWarningMessageLabel )
        {
          UILabel__set_text(restrictionWarningMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
LABEL_45:
    sub_B170D4();
  }
}


void __fastcall PartyOrganizationConfirmItemDraw__SetPartyIcon(
        System_Collections_Generic_List_PartyOrganizationListViewItem__o *itemList,
        PartyOrganizationConfirmItemDraw_array *supportMemberObjectList,
        UnityEngine_GameObject_o *supportMemberBase,
        bool isAdjustPosY,
        bool isSimpleDisp,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x22
  int32_t size; // w27
  __int64 v19; // x23
  bool v20; // w19
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  unsigned int v23; // w19
  NpcFollowerEntity_o *EntityByQuestIdAndSvtId; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  const MethodInfo *v27; // x7
  __int64 v28; // x8
  __int64 v29; // x9
  int32_t v30; // w24
  __int64 v31; // x8
  int32_t v32; // w25
  const MethodInfo *v33; // x1
  PartyOrganizationListViewItem_o *v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v36; // w4
  bool IsHideRarity; // w26
  NpcFollowerMaster_o *v38; // x0
  int32_t v39; // w24
  int32_t v40; // w8
  PartyOrganizationConfirmItemDraw_c *v41; // x0
  UnityEngine_GameObject_o *v42; // x20
  UnityEngine_GameObject_o *self; // [xsp+0h] [xbp-70h]
  bool v44; // [xsp+8h] [xbp-68h]
  bool v45; // [xsp+Ch] [xbp-64h]
  NpcServantFollowerMaster_o *Master_WarQuestSelectionMaster; // [xsp+10h] [xbp-60h]
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40FDC3C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_NpcFollowerMaster___, supportMemberObjectList);
    sub_B16FFC(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&PartyOrganizationConfirmItemDraw_TypeInfo, v16);
    byte_40FDC3C = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( !itemList )
    goto LABEL_55;
  self = supportMemberBase;
  if ( !supportMemberObjectList )
    goto LABEL_55;
  v17 = *(_QWORD *)&supportMemberObjectList->max_length;
  size = itemList->fields._size;
  if ( (int)v17 >= 1 )
  {
    v19 = 4LL;
    v45 = isAdjustPosY;
    v20 = size > 0;
    v44 = isSimpleDisp;
    while ( 1 )
    {
      v21 = (UnityEngine_Component_o *)*((_QWORD *)&supportMemberObjectList->obj.klass + v19);
      if ( !v21 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
      if ( !gameObject )
        break;
      if ( v20 )
      {
        v23 = v19 - 4;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        if ( itemList->fields._size <= (unsigned int)(v19 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v28 = *((_QWORD *)&itemList->fields._items->obj.klass + v19);
        if ( !v28 )
          break;
        if ( !*(_QWORD *)(v28 + 160) )
          goto LABEL_40;
        if ( itemList->fields._size <= v23 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v29 = *(_QWORD *)(v28 + 160);
        if ( !v29 )
          break;
        v30 = *(_DWORD *)(v29 + 36);
        if ( itemList->fields._size <= v23 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v31 = *(_QWORD *)(v28 + 160);
        if ( !v31 )
          break;
        v32 = *(_DWORD *)(v31 + 40);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (NpcServantFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
        if ( itemList->fields._size <= v23 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v34 = (PartyOrganizationListViewItem_o *)*((_QWORD *)&itemList->fields._items->obj.klass + v19);
        if ( !v34 )
          break;
        SvtId = PartyOrganizationListViewItem__get_SvtId(v34, v33);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(SvtId, 0LL);
        if ( !Master_WarQuestSelectionMaster )
          break;
        EntityByQuestIdAndSvtId = (NpcFollowerEntity_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                           Master_WarQuestSelectionMaster,
                                                           &npcServantFollowerEntity,
                                                           v30,
                                                           v32,
                                                           v36,
                                                           0LL);
        if ( ((unsigned __int8)EntityByQuestIdAndSvtId & 1) != 0 )
        {
          if ( !npcServantFollowerEntity )
            break;
          IsHideRarity = NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          v38 = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
          if ( !npcServantFollowerEntity || !v38 )
            break;
          EntityByQuestIdAndSvtId = NpcFollowerMaster__GetEntity_21217012(
                                      v38,
                                      v30,
                                      v32,
                                      npcServantFollowerEntity->fields.id,
                                      0LL);
          if ( EntityByQuestIdAndSvtId )
          {
            EntityByQuestIdAndSvtId = (NpcFollowerEntity_o *)NpcFollowerEntity__GetImageSvtId(
                                                               EntityByQuestIdAndSvtId,
                                                               0LL);
            v39 = (int)EntityByQuestIdAndSvtId;
          }
          else
          {
            v39 = 0;
          }
        }
        else
        {
LABEL_40:
          v39 = 0;
          IsHideRarity = 0;
        }
        if ( v23 >= supportMemberObjectList->max_length )
          goto LABEL_56;
        if ( itemList->fields._size <= v23 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !*((_QWORD *)&supportMemberObjectList->obj.klass + v19) )
          break;
        PartyOrganizationConfirmItemDraw__SetItem(
          *((PartyOrganizationConfirmItemDraw_o **)&supportMemberObjectList->obj.klass + v19),
          *((PartyOrganizationListViewItem_o **)&itemList->fields._items->obj.klass + v19),
          2,
          v45,
          IsHideRarity,
          v39,
          v44,
          v27);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      v40 = v19 - 3;
      if ( (int)v19 - 3 >= (int)v17 )
        goto LABEL_50;
      ++v19;
      v20 = v40 < size;
      if ( (unsigned int)(v19 - 4) >= supportMemberObjectList->max_length )
      {
LABEL_56:
        sub_B17100(EntityByQuestIdAndSvtId, v25, v26);
        sub_B170A0();
      }
    }
LABEL_55:
    sub_B170D4();
  }
LABEL_50:
  v41 = PartyOrganizationConfirmItemDraw_TypeInfo;
  if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v42 = self;
    if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
      v41 = PartyOrganizationConfirmItemDraw_TypeInfo;
    }
  }
  else
  {
    v42 = self;
  }
  GameObjectExtensions__SetLocalPositionX(v42, (float)(v41->static_fields->ICON_OFFSET_SIZE * (1 - size)), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmItemDraw__SetWarningMessage(
        PartyOrganizationConfirmItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        bool isMask,
        float iconPosY,
        float msgPosY,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v18; // x0
  UISprite_o *v19; // x0
  UIWidget_o *v20; // x22
  int v21; // s0
  UIWidget_o *v25; // x0
  UILabel_o *restrictionMaskMessageText; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_GameObject_o *v28; // x0
  FlashingIconComponent_o *restrictionWarningIcon; // x0
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_Component_o *restrictionWarningMessageLabel; // x0
  UnityEngine_GameObject_o *v33; // x0
  UILabel_o *v34; // x0
  UILabel_o *v35; // x0
  float v36; // s0
  UnityEngine_Component_o *v37; // x0
  float v38; // s8
  UnityEngine_Transform_o *transform; // x0
  int32_t restrictionWarningMessageWidth; // s0
  UnityEngine_Transform_o *v41; // x19
  float v42; // s0
  float v43; // s1
  float v44; // s0
  float v45; // s2

  if ( (byte_40FDC3B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, message);
    sub_B16FFC(&StringLiteral_19411/*"img_frames_mask03"*/, v13);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    byte_40FDC3B = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !v16 )
      goto LABEL_31;
    gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(gameObject, isMask, 0LL);
    if ( isMask )
    {
      v18 = this->fields.restrictionMaskSprite;
      if ( !v18 )
        goto LABEL_31;
      UISprite__set_atlas(v18, this->fields.maskSpriteDefaultAtlas, 0LL);
      v19 = this->fields.restrictionMaskSprite;
      if ( !v19 )
        goto LABEL_31;
      UISprite__set_spriteName(v19, (System_String_o *)StringLiteral_19411/*"img_frames_mask03"*/, 0LL);
      v20 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_black(0LL);
      if ( !v20 )
        goto LABEL_31;
      UIWidget__set_color(v20, *(UnityEngine_Color_o *)&v21, 0LL);
      v25 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( !v25 )
        goto LABEL_31;
      UIWidget__set_height(v25, this->fields.maskSpriteDefaultHeight, 0LL);
    }
    restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_31;
    UILabel__set_text(restrictionMaskMessageText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    v28 = this->fields.restrictionWarningBase;
    if ( v28 )
    {
      UnityEngine_GameObject__SetActive(v28, 1, 0LL);
      restrictionWarningIcon = this->fields.restrictionWarningIcon;
      if ( restrictionWarningIcon )
      {
        FlashingIconComponent__SetFast(restrictionWarningIcon, 0LL);
        v30 = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
        if ( v30 )
        {
          v31 = UnityEngine_Component__get_gameObject(v30, 0LL);
          GameObjectExtensions__SetLocalPositionY(v31, iconPosY, 0LL);
          restrictionWarningMessageLabel = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
          if ( restrictionWarningMessageLabel )
          {
            v33 = UnityEngine_Component__get_gameObject(restrictionWarningMessageLabel, 0LL);
            GameObjectExtensions__SetLocalPositionY(v33, msgPosY, 0LL);
            v34 = this->fields.restrictionWarningMessageLabel;
            if ( v34 )
            {
              UILabel__set_text(v34, message, 0LL);
              v35 = this->fields.restrictionWarningMessageLabel;
              if ( v35 )
              {
                if ( isScale )
                {
                  LODWORD(v36) = *(_QWORD *)&UILabel__get_printedSize(v35, 0LL);
                  v37 = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
                  if ( !v37 )
                    goto LABEL_31;
                  v38 = v36;
                  transform = UnityEngine_Component__get_transform(v37, 0LL);
                  restrictionWarningMessageWidth = this->fields.restrictionWarningMessageWidth;
                  v41 = transform;
                  v42 = (float)restrictionWarningMessageWidth;
                  if ( v38 > v42 )
                  {
                    v43 = 1.0;
                    v44 = v42 / v38;
                    v45 = 1.0;
                    if ( !transform )
                      goto LABEL_31;
                    goto LABEL_35;
                  }
                }
                else
                {
                  v41 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v35, 0LL);
                }
                *(UnityEngine_Vector3_o *)&v44 = UnityEngine_Vector3__get_one(0LL);
                if ( v41 )
                {
LABEL_35:
                  UnityEngine_Transform__set_localScale(v41, *(UnityEngine_Vector3_o *)&v44, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B170D4();
  }
}