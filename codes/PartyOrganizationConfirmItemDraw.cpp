void __fastcall PartyOrganizationConfirmItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB077 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationConfirmItemDraw_TypeInfo, v1, v2, v3);
    byte_42EB077 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v6; // x1
  UIWidget_o *restrictionMaskMessageText; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UISprite_o *v14; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v16; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_42EB071 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB071 = 1;
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
    v14 = this->fields.restrictionMaskSprite;
    if ( !v14 )
      goto LABEL_18;
    mAtlas = v14->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.maskSpriteDefaultAtlas,
      (System_Int32_array **)mAtlas,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v16 = this->fields.restrictionMaskSprite;
    if ( !v16 )
      goto LABEL_18;
    this->fields.maskSpriteDefaultHeight = v16->fields.mHeight;
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( restrictionMaskMessageText )
    {
      this->fields.restrictionWarningMessageWidth = restrictionMaskMessageText->fields.mWidth;
      UIWidget__set_width(restrictionMaskMessageText, 1000, 0LL);
      return;
    }
LABEL_18:
    sub_B5D69C(restrictionMaskMessageText, v6);
  }
}


void __fastcall PartyOrganizationConfirmItemDraw__ClearMessage(
        PartyOrganizationConfirmItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_42EB073 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EB073 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_20;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
LABEL_20:
    sub_B5D69C(gameObject, v9);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  int v105; // w1
  int v106; // w2
  __int64 v107; // x3
  int v108; // w1
  int v109; // w2
  __int64 v110; // x3
  int v111; // w1
  int v112; // w2
  __int64 v113; // x3
  int v114; // w1
  int v115; // w2
  __int64 v116; // x3
  int v117; // w1
  int v118; // w2
  __int64 v119; // x3
  int v120; // w1
  int v121; // w2
  __int64 v122; // x3
  int v123; // w1
  int v124; // w2
  __int64 v125; // x3
  int v126; // w1
  int v127; // w2
  __int64 v128; // x3
  int v129; // w1
  int v130; // w2
  __int64 v131; // x3
  int v132; // w1
  int v133; // w2
  __int64 v134; // x3
  int v135; // w1
  int v136; // w2
  __int64 v137; // x3
  int v138; // w1
  int v139; // w2
  __int64 v140; // x3
  int v141; // w1
  int v142; // w2
  __int64 v143; // x3
  UnityEngine_Object_o *maskServantObj; // x25
  PartyOrganizationRootComponent_c *v145; // x1
  void *lv; // x0
  UnityEngine_Object_o *maskServantLabel; // x25
  UnityEngine_Object_o *maskEquipObj; // x25
  UnityEngine_Object_o *maskEquipLabel; // x25
  ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct FollowerInfo_o *followerInfo; // x8
  UnityEngine_Object_o *typeSprite; // x24
  struct FollowerInfo_o *v153; // x8
  int32_t type; // w8
  __int64 *v155; // x8
  UnityEngine_Object_o *v156; // x23
  UserServantEntity_o *userServantEntity; // x23
  ServantFaceIconComponent_o *v158; // x24
  const MethodInfo *v159; // x1
  UnityEngine_Object_o *v160; // x23
  UnityEngine_Object_o *v161; // x23
  UILabel_o *v162; // x23
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x23
  int64_t UserId; // x24
  const MethodInfo *v165; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  ServantFaceIconComponent_o *v167; // x23
  UserServantCollectionEntity_o *v168; // x25
  UserServantEntity_o *v169; // x24
  UnityEngine_Object_o *v170; // x23
  UnityEngine_Object_o *maskEquipSprite; // x23
  UISprite_o *v172; // x23
  UnityEngine_Object_o *v173; // x23
  UILabel_o *v174; // x23
  System_Int32_array *v175; // x0
  UnityEngine_Object_o *v176; // x23
  System_Int32_array *v177; // x24
  UISprite_o *v178; // x0
  System_String_o *v179; // x1
  UnityEngine_Object_o *v180; // x23
  UnityEngine_Object_c *v181; // x0
  __int64 *v182; // x8
  System_String_o *v183; // x23
  UnityEngine_Object_o *v184; // x24
  ServantEntity_o *servantEntity; // x0
  const MethodInfo *v186; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v188; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v190; // w0
  System_Int32_array *CommandCardList; // x0
  UnityEngine_Object_o *supportSprite; // x25
  System_String_o *v193; // x1
  UnityEngine_Object_o *v194; // x23
  UnityEngine_Object_o *v195; // x23
  int32_t v196; // w23
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v198; // kr20_16
  ServantFaceIconComponent_o *v199; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v200; // kr30_16
  int32_t v201; // w0
  int32_t svtLimitCount; // w26
  int32_t v203; // w27
  const MethodInfo *v204; // x1
  UnityEngine_Object_o *v205; // x23
  bool v206; // w1
  struct UILabel_array *commandLabelList; // x8
  __int64 v208; // x26
  int32_t v209; // w21
  int max_length; // w9
  UILabel_o *v211; // x22
  UnityEngine_Object_o *memberTypeBaseSprite; // x21
  int32_t index; // w21
  System_String_o **v214; // x8
  UISprite_o *memberTypeSprite; // x21
  System_String_o *v216; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  const MethodInfo *v218; // x1
  UserServantEntity_o *v219; // x0
  __int64 *v220; // x8
  System_String_o *v221; // x21
  const MethodInfo *v222; // x5
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  PartyOrganizationConfirmItemDraw_o *v227; // x0
  System_String_o *v228; // x1
  System_String_o *v229; // x3
  int v230; // w24
  const MethodInfo *v231; // x1
  System_String_o *v232; // x0
  System_String_o *v233; // x21
  const MethodInfo *v234; // x5
  int v235; // s0
  PartyOrganizationConfirmItemDraw_o *v239; // x0
  System_String_o *v240; // x1
  System_String_o *v241; // x3
  bool v242; // w4
  __int64 *v243; // x8
  System_String_o *v244; // x1
  const MethodInfo *v245; // x4
  float v246; // s0
  float v247; // s1
  PartyOrganizationConfirmItemDraw_o *v248; // x0
  bool v249; // w3
  int64_t fatigureTime; // x21
  System_String_o *v251; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  _DWORD *v253; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v254; // x21
  const MethodInfo *v255; // x1
  __int64 v256; // x22
  __int64 v257; // x23
  int32_t SvtClassId; // w21
  UserServantEntity_o *v259; // x0
  __int64 v260; // x9
  __int64 v261; // x22
  int32_t v262; // w22
  int32_t v263; // w20
  struct ServantClassCompatibilityIconComponent_o *v264; // x8
  System_String_o *v265; // x21
  Il2CppObject *v266; // x0
  __int64 v267; // x0
  PartyOrganizationCommandCardMenu_o *v268; // x0
  const MethodInfo *v269; // x1
  int32_t TimesToRestart_k__BackingField; // [xsp+4Ch] [xbp-74h] BYREF
  UnityEngine_Color_o color; // [xsp+50h] [xbp-70h] BYREF
  int v272; // [xsp+64h] [xbp-5Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v274; // 0:x0.16

  if ( (byte_42EB072 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, isAdjustPosY);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v27, v28, v29);
    sub_B5D5C4(&DataManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v33, v34, v35);
    sub_B5D5C4(&int_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&NetworkManager_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&PartyOrganizationRootComponent_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v54, v55, v56);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v57, v58, v59);
    sub_B5D5C4(&string_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_19621/*"icon_support_02"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_15514/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_10470/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/, v72, v73, v74);
    sub_B5D5C4(&StringLiteral_10473/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_11769/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, v78, v79, v80);
    sub_B5D5C4(&StringLiteral_11770/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_11764/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_19734/*"img_frames_mask11"*/, v87, v88, v89);
    sub_B5D5C4(&StringLiteral_10469/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v90, v91, v92);
    sub_B5D5C4(&StringLiteral_20724/*"member_txt_"*/, v93, v94, v95);
    sub_B5D5C4(&StringLiteral_11763/*"SELECT_NO_SORTIE"*/, v96, v97, v98);
    sub_B5D5C4(&StringLiteral_19620/*"icon_support_01"*/, v99, v100, v101);
    sub_B5D5C4(&StringLiteral_19585/*"icon_eventjoin_02"*/, v102, v103, v104);
    sub_B5D5C4(&StringLiteral_19086/*"formation_txtbg_03"*/, v105, v106, v107);
    sub_B5D5C4(&StringLiteral_15512/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v108, v109, v110);
    sub_B5D5C4(&StringLiteral_19056/*"formation_blank_small"*/, v111, v112, v113);
    sub_B5D5C4(&StringLiteral_19737/*"img_frames_mask14"*/, v114, v115, v116);
    sub_B5D5C4(&StringLiteral_18102/*"datalost_svt_select"*/, v117, v118, v119);
    sub_B5D5C4(&StringLiteral_355/*"#042484"*/, v120, v121, v122);
    sub_B5D5C4(&StringLiteral_19084/*"formation_support_small"*/, v123, v124, v125);
    sub_B5D5C4(&StringLiteral_19085/*"formation_txtbg_02"*/, v126, v127, v128);
    sub_B5D5C4(&StringLiteral_1/*""*/, v129, v130, v131);
    sub_B5D5C4(&StringLiteral_10471/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/, v132, v133, v134);
    sub_B5D5C4(&StringLiteral_19587/*"icon_friend"*/, v135, v136, v137);
    sub_B5D5C4(&StringLiteral_10472/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/, v138, v139, v140);
    sub_B5D5C4(&StringLiteral_19586/*"icon_follow"*/, v141, v142, v143);
    byte_42EB072 = 1;
  }
  entity = 0LL;
  v272 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  if ( !item || !mode )
    return;
  maskServantObj = (UnityEngine_Object_o *)this->fields.maskServantObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskServantObj, 0LL, 0LL) )
  {
    lv = this->fields.maskServantObj;
    if ( !lv )
      goto LABEL_226;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  maskServantLabel = (UnityEngine_Object_o *)this->fields.maskServantLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskServantLabel, 0LL, 0LL) )
  {
    lv = this->fields.maskServantLabel;
    if ( !lv )
      goto LABEL_226;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0LL);
  }
  maskEquipObj = (UnityEngine_Object_o *)this->fields.maskEquipObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskEquipObj, 0LL, 0LL) )
  {
    lv = this->fields.maskEquipObj;
    if ( !lv )
      goto LABEL_226;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  maskEquipLabel = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  lv = (void *)UnityEngine_Object__op_Inequality(maskEquipLabel, 0LL, 0LL);
  if ( ((unsigned __int8)lv & 1) != 0 )
  {
    lv = this->fields.maskEquipLabel;
    if ( !lv )
      goto LABEL_226;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0LL);
  }
  if ( item->fields.isFollower )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( item->fields.followerInfo )
    {
      lv = PartyOrganizationListViewItem__get_ServantLeader(item, (const MethodInfo *)v145);
      followerInfo = item->fields.followerInfo;
      if ( !followerInfo || !servantFaceIcon )
        goto LABEL_226;
      ServantFaceIconComponent__Set_30776084(
        servantFaceIcon,
        (ServantLeaderInfo_o *)lv,
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
      lv = (void *)UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        v153 = item->fields.followerInfo;
        if ( !v153 )
          goto LABEL_226;
        type = v153->fields.type;
        if ( (unsigned int)(type - 3) < 2 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_226;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_226;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_226;
          v155 = &StringLiteral_19620/*"icon_support_01"*/;
          goto LABEL_151;
        }
        if ( type == 5 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_226;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_226;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_226;
          v155 = &StringLiteral_19586/*"icon_follow"*/;
          goto LABEL_151;
        }
        if ( type == 1 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_226;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_226;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_226;
          v155 = &StringLiteral_19587/*"icon_friend"*/;
LABEL_151:
          UISprite__set_spriteName((UISprite_o *)lv, (System_String_o *)*v155, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_226;
          (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
          goto LABEL_153;
        }
        lv = this->fields.typeSprite;
        if ( !lv )
          goto LABEL_226;
        lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
        if ( !lv )
          goto LABEL_226;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
      }
LABEL_153:
      CommandCardList = PartyOrganizationListViewItem__GetCommandCardList(item, (const MethodInfo *)v145);
      supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
      v177 = CommandCardList;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
      {
        lv = this->fields.supportSprite;
        if ( !lv )
          goto LABEL_226;
        if ( item->fields.isFollower )
          v193 = (System_String_o *)StringLiteral_19621/*"icon_support_02"*/;
        else
          v193 = 0LL;
        UISprite__set_spriteName((UISprite_o *)lv, v193, 0LL);
      }
      if ( isSimpleDisp )
      {
        v194 = (UnityEngine_Object_o *)this->fields.typeSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v194, 0LL, 0LL) )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_226;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_226;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
        }
        v195 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v195, 0LL, 0LL) )
        {
          lv = this->fields.supportSprite;
          if ( !lv )
            goto LABEL_226;
          UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
        }
        lv = this->fields.servantFaceIcon;
        if ( !lv )
LABEL_226:
          sub_B5D69C(lv, v145);
        ServantFaceIconComponent__ClearEquip((ServantFaceIconComponent_o *)lv, 0LL);
      }
LABEL_178:
      v183 = 0LL;
      if ( !isAdjustPosY )
        goto LABEL_207;
      goto LABEL_202;
    }
    if ( !servantFaceIcon )
      goto LABEL_226;
    ServantFaceIconComponent__Clear(this->fields.servantFaceIcon, 0LL);
    v180 = (UnityEngine_Object_o *)this->fields.typeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v180, 0LL, 0LL) )
    {
      lv = this->fields.typeSprite;
      if ( !lv )
        goto LABEL_226;
      lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
      if ( !lv )
        goto LABEL_226;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
    }
    v181 = UnityEngine_Object_TypeInfo;
    v182 = &StringLiteral_19084/*"formation_support_small"*/;
    goto LABEL_123;
  }
  v156 = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v156, 0LL, 0LL) )
  {
    lv = this->fields.typeSprite;
    if ( !lv )
      goto LABEL_226;
    lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
    if ( !lv )
      goto LABEL_226;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  userServantEntity = item->fields.userServantEntity;
  if ( userServantEntity )
  {
    v158 = this->fields.servantFaceIcon;
    lv = PartyOrganizationListViewItem__GetEquipList(item, (const MethodInfo *)v145);
    if ( !v158 )
      goto LABEL_226;
    ServantFaceIconComponent__Set(
      v158,
      userServantEntity,
      (System_Int64_array *)lv,
      item->fields.questRestrictionInfo,
      0LL,
      0LL,
      0LL);
    if ( item->fields._IsDisappearSvt_k__BackingField )
    {
      v160 = (UnityEngine_Object_o *)this->fields.maskServantObj;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v160, 0LL, 0LL) )
      {
        lv = this->fields.maskServantObj;
        if ( !lv )
          goto LABEL_226;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
      }
      v161 = (UnityEngine_Object_o *)this->fields.maskServantLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v161, 0LL, 0LL) )
      {
        v162 = this->fields.maskServantLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        lv = LocalizationManager__Get((System_String_o *)StringLiteral_15514/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0LL);
        if ( !v162 )
          goto LABEL_226;
        UILabel__set_text(v162, (System_String_o *)lv, 0LL);
      }
    }
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, v165);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(EquipSvtId, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_226;
      if ( UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, UserId, (int32_t)lv, 0LL) )
      {
        v167 = this->fields.servantFaceIcon;
        v168 = entity;
        v169 = (UserServantEntity_o *)sub_B5D694(UserServantEntity_TypeInfo);
        UserServantEntity___ctor_21827392(v169, v168, 0LL);
        if ( !v167 )
          goto LABEL_226;
        ServantFaceIconComponent__SetEquip(v167, v169, 0LL);
        v170 = (UnityEngine_Object_o *)this->fields.maskEquipObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v170, 0LL, 0LL) )
        {
          lv = this->fields.maskEquipObj;
          if ( !lv )
            goto LABEL_226;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
        }
        maskEquipSprite = (UnityEngine_Object_o *)this->fields.maskEquipSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(maskEquipSprite, 0LL, 0LL) )
        {
          v172 = this->fields.maskEquipSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventSprite(v172, (System_String_o *)StringLiteral_19737/*"img_frames_mask14"*/, 0LL);
        }
        v173 = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v173, 0LL, 0LL) )
        {
          v174 = this->fields.maskEquipLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          lv = LocalizationManager__Get((System_String_o *)StringLiteral_15512/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0LL);
          if ( !v174 )
            goto LABEL_226;
          UILabel__set_text(v174, (System_String_o *)lv, 0LL);
        }
      }
    }
    v175 = PartyOrganizationListViewItem__GetCommandCardList(item, v159);
    v176 = (UnityEngine_Object_o *)this->fields.supportSprite;
    v177 = v175;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v176, 0LL, 0LL) )
    {
      lv = item->fields.userServantEntity;
      if ( !lv )
        goto LABEL_226;
      lv = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)lv, 0LL);
      if ( !this->fields.supportSprite )
        goto LABEL_226;
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        v178 = this->fields.supportSprite;
        v179 = (System_String_o *)StringLiteral_19585/*"icon_eventjoin_02"*/;
      }
      else
      {
        v178 = this->fields.supportSprite;
        v179 = 0LL;
      }
      UISprite__set_spriteName(v178, v179, 0LL);
    }
    goto LABEL_178;
  }
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_226;
    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)lv, 0LL);
    v181 = UnityEngine_Object_TypeInfo;
    v182 = &StringLiteral_19056/*"formation_blank_small"*/;
LABEL_123:
    v183 = (System_String_o *)*v182;
    v184 = (UnityEngine_Object_o *)this->fields.supportSprite;
    if ( (BYTE3(v181->vtable._0_Equals.methodPtr) & 4) != 0 && !v181->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v181);
    if ( UnityEngine_Object__op_Inequality(v184, 0LL, 0LL) )
    {
      lv = this->fields.supportSprite;
      if ( !lv )
        goto LABEL_226;
      UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
    }
    goto LABEL_201;
  }
  if ( item->fields.questRestrictionInfo )
  {
    if ( ServantEntity__checkIsHeroineSvt(servantEntity, 0LL) )
    {
      lv = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !lv )
        goto LABEL_226;
      MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)lv,
                                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, v188);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(SvtId, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_226;
      lv = UserServantMaster__getHeroineData(MasterData_WarQuestSelectionMaster, (int32_t)lv, 0LL);
      if ( !item->fields.questRestrictionInfo )
        goto LABEL_226;
      v190 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34279132(
               item->fields.questRestrictionInfo,
               (UserServantEntity_o *)lv,
               0LL);
    }
    else
    {
      questRestrictionInfo = item->fields.questRestrictionInfo;
      v198 = PartyOrganizationListViewItem__get_SvtId(item, v186);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v198, 0LL);
      if ( !questRestrictionInfo )
        goto LABEL_226;
      v190 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount(questRestrictionInfo, (int32_t)lv, 0LL);
    }
    v196 = v190;
  }
  else
  {
    v196 = -1;
  }
  v199 = this->fields.servantFaceIcon;
  v200 = PartyOrganizationListViewItem__get_SvtId(item, (const MethodInfo *)v145);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v201 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v200, 0LL);
  svtLimitCount = item->fields.svtLimitCount;
  v203 = v201;
  lv = (void *)PartyOrganizationListViewItem__get_Level(item, v204);
  if ( !v199 )
    goto LABEL_226;
  ServantFaceIconComponent__Set_30846632(
    v199,
    v203,
    svtLimitCount,
    v196,
    0,
    0LL,
    0LL,
    2,
    0,
    0,
    0LL,
    1,
    (int32_t)lv,
    imageSvtId,
    0,
    0LL);
  v205 = (UnityEngine_Object_o *)this->fields.supportSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v205, 0LL, 0LL) )
  {
    lv = this->fields.supportSprite;
    if ( !lv )
      goto LABEL_226;
    UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
  }
  v183 = 0LL;
LABEL_201:
  v177 = 0LL;
  if ( !isAdjustPosY )
    goto LABEL_207;
LABEL_202:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_226;
  if ( !ServantFaceIconComponent__IsUseEquip((ServantFaceIconComponent_o *)lv, 0LL) )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_226;
    ServantFaceIconComponent__AdjustRaritySpritePosY((ServantFaceIconComponent_o *)lv, -55.0, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_226;
    ServantFaceIconComponent__AdjustDispLimitCountSpritePosY((ServantFaceIconComponent_o *)lv, -34.0, 0LL);
  }
LABEL_207:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_226;
  ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)lv, !isRarityHide, 0LL);
  if ( item->fields._IsNotSupportSingle_k__BackingField || !item->fields._IsDataLost_k__BackingField )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_226;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 1, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_226;
    v206 = 1;
  }
  else
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_226;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 0, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_226;
    v206 = 0;
  }
  ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)lv, v206, 0LL);
  commandLabelList = this->fields.commandLabelList;
  if ( !commandLabelList )
    goto LABEL_226;
  v208 = 0LL;
  v209 = (_DWORD)v177 + 32;
  while ( 1 )
  {
    max_length = commandLabelList->max_length;
    if ( (int)v208 >= max_length )
      break;
    if ( (unsigned int)v208 >= max_length )
      goto LABEL_357;
    v211 = commandLabelList->m_Items[v208];
    if ( v177 )
    {
      if ( (unsigned int)v208 >= v177->max_length )
      {
LABEL_357:
        v267 = sub_B5D6C8(lv);
        sub_B5D668(v267, 0LL);
      }
      lv = System_Int32__ToString(v209, 0LL);
      v145 = (PartyOrganizationRootComponent_c *)lv;
      if ( !v211 )
        goto LABEL_226;
    }
    else
    {
      v145 = (PartyOrganizationRootComponent_c *)StringLiteral_1/*""*/;
      if ( !v211 )
        goto LABEL_226;
    }
    UILabel__set_text(v211, (System_String_o *)v145, 0LL);
    commandLabelList = this->fields.commandLabelList;
    ++v208;
    v209 += 4;
    if ( !commandLabelList )
      goto LABEL_226;
  }
  lv = this->fields.baseSprite;
  if ( !lv )
    goto LABEL_226;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 0, 0LL);
  if ( v183 )
  {
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_226;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 1, 0LL);
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_226;
    UISprite__set_spriteName((UISprite_o *)lv, v183, 0LL);
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
    lv = this->fields.memberTypeBaseSprite;
    if ( !lv )
      goto LABEL_226;
    v214 = (System_String_o **)(index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax
                              ? &StringLiteral_19086/*"formation_txtbg_03"*/
                              : &StringLiteral_19085/*"formation_txtbg_02"*/);
    UISprite__set_spriteName((UISprite_o *)lv, *v214, 0LL);
    memberTypeSprite = this->fields.memberTypeSprite;
    v272 = item->fields.index + 1;
    v216 = System_Int32__ToString((int32_t)&v272, 0LL);
    lv = System_String__Concat_44577788((System_String_o *)StringLiteral_20724/*"member_txt_"*/, v216, 0LL);
    if ( !memberTypeSprite )
      goto LABEL_226;
    UISprite__set_spriteName(memberTypeSprite, (System_String_o *)lv, 0LL);
    lv = this->fields.memberTypeSprite;
    if ( !lv )
      goto LABEL_226;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
    goto LABEL_301;
  v219 = item->fields.userServantEntity;
  if ( !v219 || !UserServantEntity__IsLeave(v219, 0LL) )
  {
    if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, v218)
      && (item->fields.userServantEntity || item->fields.isFollower) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v232 = LocalizationManager__Get((System_String_o *)StringLiteral_10469/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
LABEL_265:
      v233 = v232;
      *(UnityEngine_Color_o *)&v235 = UnityEngine_Color__get_black(0LL);
      v239 = this;
      v240 = v233;
      v241 = 0LL;
      v242 = 0;
LABEL_266:
      v230 = 1;
      PartyOrganizationConfirmItemDraw__SetMaskMessage(v239, v240, *(UnityEngine_Color_o *)&v235, 1, v241, v242, v234);
      goto LABEL_302;
    }
    if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v243 = &StringLiteral_10470/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_273:
      v244 = LocalizationManager__Get((System_String_o *)*v243, 0LL);
      v246 = 0.0;
      v247 = 0.0;
      v248 = this;
      v249 = 0;
LABEL_274:
      v230 = 1;
      PartyOrganizationConfirmItemDraw__SetWarningMessage(v248, v244, 1, v249, v246, v247, v245);
      goto LABEL_302;
    }
    if ( item->fields.isFixedSupportPositionRestriction )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v243 = &StringLiteral_10471/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/;
      goto LABEL_273;
    }
    if ( item->fields.isFixedServantPositionRestriction )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v243 = &StringLiteral_10472/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
      goto LABEL_273;
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
        v220 = &StringLiteral_11764/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
        goto LABEL_256;
      }
      if ( item->fields._IsNotSupportSingle_k__BackingField )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v244 = LocalizationManager__Get((System_String_o *)StringLiteral_10473/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
        v246 = 10.0;
        v247 = -22.0;
        v249 = 1;
        v248 = this;
        goto LABEL_274;
      }
      if ( item->fields._IsDataLost_k__BackingField )
      {
        *(UnityEngine_Color_o *)&v235 = UnityEngine_Color__get_white(0LL);
        v240 = (System_String_o *)StringLiteral_1/*""*/;
        v242 = 1;
        v239 = this;
        v241 = (System_String_o *)StringLiteral_18102/*"datalost_svt_select"*/;
        goto LABEL_266;
      }
      if ( item->fields._TimesToRestart_k__BackingField >= 1 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v265 = LocalizationManager__Get((System_String_o *)StringLiteral_11770/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
        v266 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
        v232 = System_String__Format(v265, v266, 0LL);
        goto LABEL_265;
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
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_355/*"#042484"*/, &color, 0LL);
        color.fields.a = 0.69804;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v251 = LocalizationManager__Get((System_String_o *)StringLiteral_11769/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, 0LL);
        r = color.fields.r;
        g = color.fields.g;
        b = color.fields.b;
        a = color.fields.a;
        v228 = v251;
        v227 = this;
        v229 = (System_String_o *)StringLiteral_19734/*"img_frames_mask11"*/;
        goto LABEL_257;
      }
      item->fields.fatigureTime = -1LL;
    }
    PartyOrganizationConfirmItemDraw__ClearMessage(this, v231);
LABEL_301:
    v230 = 0;
    goto LABEL_302;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v220 = &StringLiteral_11763/*"SELECT_NO_SORTIE"*/;
LABEL_256:
  v221 = LocalizationManager__Get((System_String_o *)*v220, 0LL);
  *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_black(0LL);
  v227 = this;
  v228 = v221;
  v229 = 0LL;
LABEL_257:
  PartyOrganizationConfirmItemDraw__SetMaskMessage(v227, v228, *(UnityEngine_Color_o *)&r, 0, v229, 0, v222);
  v230 = 1;
LABEL_302:
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
    v259 = item->fields.userServantEntity;
    if ( v259 )
    {
      SvtClassId = UserServantEntity__getSvtClassId(v259, 0LL);
    }
    else
    {
      v253 = item->fields.servantEntity;
      if ( !v253 )
        goto LABEL_322;
      SvtClassId = v253[20];
    }
    LODWORD(v253) = 0;
    goto LABEL_323;
  }
  v253 = item->fields.followerInfo;
  if ( !v253 )
  {
LABEL_322:
    SvtClassId = 0;
    goto LABEL_323;
  }
  lv = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_226;
  v254 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)lv,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, v255);
  if ( !lv )
    goto LABEL_226;
  v257 = *((_QWORD *)lv + 6);
  v256 = *((_QWORD *)lv + 7);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v274.fields.currentCryptoKey = v257;
  *(_QWORD *)&v274.fields.fakeValue = v256;
  lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v274, 0LL);
  if ( !v254 )
    goto LABEL_226;
  lv = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
         v254,
         (int32_t)lv,
         (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !lv )
    goto LABEL_226;
  SvtClassId = *((_DWORD *)lv + 20);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, (const MethodInfo *)v145);
  if ( !lv )
    goto LABEL_226;
  LODWORD(v253) = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)lv, 0LL);
LABEL_323:
  if ( (unsigned int)v253 | v230 | (SvtClassId == 0) )
  {
    lv = this->fields.classCompatibilityIcon;
    if ( !lv )
      goto LABEL_226;
    goto LABEL_343;
  }
  lv = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_226;
  lv = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)lv, 40, 0LL);
  if ( ((unsigned __int8)lv & 1) == 0 )
    goto LABEL_340;
  lv = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_226;
  lv = (void *)*((_QWORD *)lv + 3);
  if ( !lv )
    goto LABEL_226;
  v145 = PartyOrganizationRootComponent_TypeInfo;
  v260 = *(&PartyOrganizationRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)lv + 300LL) < (unsigned int)v260
    || *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)lv + 200LL) + 8 * v260 - 8) != PartyOrganizationRootComponent_TypeInfo )
  {
    sub_B5D990(lv);
    PartyOrganizationCommandCardMenu__EndOpen(v268, v269);
    return;
  }
  v261 = *((_QWORD *)lv + 58);
  if ( !v261
    || (lv = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)lv + 58), 0LL), !(_DWORD)lv)
    || (v262 = *(_DWORD *)(v261 + 24)) == 0 )
  {
LABEL_340:
    v264 = this->fields.classCompatibilityIcon;
    goto LABEL_341;
  }
  v263 = (int)lv;
  lv = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_226;
  lv = DataManager__GetMasterData_WarQuestSelectionMaster_(
         (DataManager_o *)lv,
         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !lv )
    goto LABEL_226;
  lv = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)lv, v263, v262, 0LL);
  v264 = this->fields.classCompatibilityIcon;
  if ( !lv )
  {
LABEL_341:
    if ( !v264 )
      goto LABEL_226;
    lv = v264;
LABEL_343:
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)lv, 0LL);
    return;
  }
  if ( !v264 )
    goto LABEL_226;
  ServantClassCompatibilityIconComponent__SetIcon(
    this->fields.classCompatibilityIcon,
    SvtClassId,
    *((System_Int32_array **)lv + 6),
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
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  UnityEngine_Object_o *restrictionMaskSprite; // x24
  __int64 v32; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v34; // x24
  struct UISprite_o *v35; // x22
  int32_t DATA_LOST_MASK_HEIGHT; // w1
  System_String_o *v37; // x1
  float v38; // s0
  float v39; // s8
  UnityEngine_Transform_o *transform; // x20
  float restrictionMaskMessageWidth; // s0
  float v42; // s1
  float v43; // s0
  float v44; // s2
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = maskColor.fields.a;
  b = maskColor.fields.b;
  g = maskColor.fields.g;
  r = maskColor.fields.r;
  if ( (byte_42EB074 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)message, isScale, maskName);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&PartyOrganizationConfirmItemDraw_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_18102/*"datalost_svt_select"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_19730/*"img_frames_mask03"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_1/*""*/, v28, v29, v30);
    byte_42EB074 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_45;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v34 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(v34, (System_String_o *)StringLiteral_18102/*"datalost_svt_select"*/, 0LL);
      v35 = this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)PartyOrganizationConfirmItemDraw_TypeInfo;
      if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
      }
      if ( !v35 )
        goto LABEL_45;
      gameObject = (UnityEngine_Component_o *)v35;
      DATA_LOST_MASK_HEIGHT = PartyOrganizationConfirmItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT;
    }
    else
    {
      if ( !v34 )
        goto LABEL_45;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_45;
      v37 = maskName ? maskName : (System_String_o *)StringLiteral_19730/*"img_frames_mask03"*/;
      UISprite__set_spriteName((UISprite_o *)gameObject, v37, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_45;
      DATA_LOST_MASK_HEIGHT = this->fields.maskSpriteDefaultHeight;
    }
    UIWidget__set_height((UIWidget_o *)gameObject, DATA_LOST_MASK_HEIGHT, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_45;
    v46.fields.r = r;
    v46.fields.g = g;
    v46.fields.b = b;
    v46.fields.a = a;
    UIWidget__set_color((UIWidget_o *)gameObject, v46, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_45;
    if ( isScale )
    {
      LODWORD(v38) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_45;
      v39 = v38;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      transform = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v39 > restrictionMaskMessageWidth )
      {
        v42 = 1.0;
        v43 = restrictionMaskMessageWidth / v39;
        v44 = 1.0;
        if ( !gameObject )
          goto LABEL_45;
        goto LABEL_35;
      }
    }
    else
    {
      transform = UnityEngine_Component__get_transform(gameObject, 0LL);
    }
    *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_45;
LABEL_35:
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v43, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
LABEL_45:
    sub_B5D69C(gameObject, v32);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmItemDraw__SetPartyIcon(
        System_Collections_Generic_List_PartyOrganizationListViewItem__o *itemList,
        PartyOrganizationConfirmItemDraw_array *supportMemberObjectList,
        UnityEngine_GameObject_o *supportMemberBase,
        bool isAdjustPosY,
        bool isSimpleDisp,
        const MethodInfo *method)
{
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v10; // x28
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  __int64 v29; // x22
  int32_t size; // w27
  __int64 v31; // x23
  bool v32; // w19
  il2cpp_array_size_t v33; // w19
  const MethodInfo *v34; // x7
  __int64 v35; // x8
  __int64 v36; // x9
  int32_t v37; // w24
  __int64 v38; // x8
  int32_t v39; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v41; // w4
  bool IsHideRarity; // w26
  int32_t v43; // w24
  int32_t v44; // w8
  PartyOrganizationConfirmItemDraw_c *v45; // x0
  UnityEngine_GameObject_o *v46; // x20
  __int64 v47; // x0
  UnityEngine_GameObject_o *self; // [xsp+0h] [xbp-70h]
  bool v49; // [xsp+8h] [xbp-68h]
  bool v50; // [xsp+Ch] [xbp-64h]
  NpcServantFollowerMaster_o *Master_WarQuestSelectionMaster; // [xsp+10h] [xbp-60h]
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+18h] [xbp-58h] BYREF

  v10 = itemList;
  if ( (byte_42EB076 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_NpcFollowerMaster___,
      (_DWORD)supportMemberObjectList,
      (_DWORD)supportMemberBase,
      isAdjustPosY);
    sub_B5D5C4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__, v20, v21, v22);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24, v25);
    itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)sub_B5D5C4(
                                                                                     &PartyOrganizationConfirmItemDraw_TypeInfo,
                                                                                     v26,
                                                                                     v27,
                                                                                     v28);
    byte_42EB076 = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( !v10 )
    goto LABEL_55;
  self = supportMemberBase;
  if ( !supportMemberObjectList )
    goto LABEL_55;
  v29 = *(_QWORD *)&supportMemberObjectList->max_length;
  size = v10->fields._size;
  if ( (int)v29 >= 1 )
  {
    v31 = 4LL;
    v50 = isAdjustPosY;
    v32 = size > 0;
    v49 = isSimpleDisp;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)*((_QWORD *)&supportMemberObjectList->obj.klass
                                                                                     + v31);
      if ( !itemList )
        break;
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)itemList,
                                                                                       0LL);
      if ( !itemList )
        break;
      if ( v32 )
      {
        v33 = v31 - 4;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 1, 0LL);
        if ( v10->fields._size <= (unsigned int)(v31 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v35 = *((_QWORD *)&v10->fields._items->obj.klass + v31);
        if ( !v35 )
          break;
        if ( !*(_QWORD *)(v35 + 168) )
          goto LABEL_40;
        if ( v10->fields._size <= v33 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v36 = *(_QWORD *)(v35 + 168);
        if ( !v36 )
          break;
        v37 = *(_DWORD *)(v36 + 36);
        if ( v10->fields._size <= v33 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v38 = *(_QWORD *)(v35 + 168);
        if ( !v38 )
          break;
        v39 = *(_DWORD *)(v38 + 40);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (NpcServantFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
        if ( v10->fields._size <= v33 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)*((_QWORD *)&v10->fields._items->obj.klass
                                                                                       + v31);
        if ( !itemList )
          break;
        SvtId = PartyOrganizationListViewItem__get_SvtId(
                  (PartyOrganizationListViewItem_o *)itemList,
                  (const MethodInfo *)supportMemberObjectList);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(SvtId, 0LL);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)Master_WarQuestSelectionMaster;
        if ( !Master_WarQuestSelectionMaster )
          break;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                                                         Master_WarQuestSelectionMaster,
                                                                                         &npcServantFollowerEntity,
                                                                                         v37,
                                                                                         v39,
                                                                                         v41,
                                                                                         0LL);
        if ( ((unsigned __int8)itemList & 1) != 0 )
        {
          if ( !npcServantFollowerEntity )
            break;
          IsHideRarity = NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
          if ( !npcServantFollowerEntity || !itemList )
            break;
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerMaster__GetEntity_20688452(
                                                                                           (NpcFollowerMaster_o *)itemList,
                                                                                           v37,
                                                                                           v39,
                                                                                           npcServantFollowerEntity->fields.id,
                                                                                           0LL);
          if ( itemList )
          {
            itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerEntity__GetImageSvtId(
                                                                                             (NpcFollowerEntity_o *)itemList,
                                                                                             0LL);
            v43 = (int)itemList;
          }
          else
          {
            v43 = 0;
          }
        }
        else
        {
LABEL_40:
          v43 = 0;
          IsHideRarity = 0;
        }
        if ( v33 >= supportMemberObjectList->max_length )
          goto LABEL_56;
        if ( v10->fields._size <= v33 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !*((_QWORD *)&supportMemberObjectList->obj.klass + v31) )
          break;
        PartyOrganizationConfirmItemDraw__SetItem(
          *((PartyOrganizationConfirmItemDraw_o **)&supportMemberObjectList->obj.klass + v31),
          *((PartyOrganizationListViewItem_o **)&v10->fields._items->obj.klass + v31),
          2,
          v50,
          IsHideRarity,
          v43,
          v49,
          v34);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
      }
      v44 = v31 - 3;
      if ( (int)v31 - 3 >= (int)v29 )
        goto LABEL_50;
      ++v31;
      v32 = v44 < size;
      if ( (unsigned int)(v31 - 4) >= supportMemberObjectList->max_length )
      {
LABEL_56:
        v47 = sub_B5D6C8(itemList);
        sub_B5D668(v47, 0LL);
      }
    }
LABEL_55:
    sub_B5D69C(itemList, supportMemberObjectList);
  }
LABEL_50:
  v45 = PartyOrganizationConfirmItemDraw_TypeInfo;
  if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v46 = self;
    if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
      v45 = PartyOrganizationConfirmItemDraw_TypeInfo;
    }
  }
  else
  {
    v46 = self;
  }
  GameObjectExtensions__SetLocalPositionX(v46, (float)(v45->static_fields->ICON_OFFSET_SIZE * (1 - size)), 0LL);
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
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  __int64 v20; // x1
  UnityEngine_Component_o *gameObject; // x0
  UIWidget_o *v22; // x22
  int v23; // s0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  float v30; // s0
  float v31; // s8
  int32_t restrictionWarningMessageWidth; // s0
  UnityEngine_Transform_o *transform; // x19
  float v34; // s0
  float v35; // s1
  float v36; // s0
  float v37; // s2

  if ( (byte_42EB075 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)message, isScale, isMask);
    sub_B5D5C4(&StringLiteral_19730/*"img_frames_mask03"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_1/*""*/, v16, v17, v18);
    byte_42EB075 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isMask, 0LL);
    if ( isMask )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_31;
      UISprite__set_atlas((UISprite_o *)gameObject, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_31;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19730/*"img_frames_mask03"*/, 0LL);
      v22 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_black(0LL);
      if ( !v22 )
        goto LABEL_31;
      UIWidget__set_color(v22, *(UnityEngine_Color_o *)&v23, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_31;
      UIWidget__set_height((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultHeight, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_31;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
        if ( gameObject )
        {
          v28 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v28, iconPosY, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
          if ( gameObject )
          {
            v29 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
            GameObjectExtensions__SetLocalPositionY(v29, msgPosY, 0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
              gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
              if ( gameObject )
              {
                if ( isScale )
                {
                  LODWORD(v30) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
                  gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
                  if ( !gameObject )
                    goto LABEL_31;
                  v31 = v30;
                  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                  restrictionWarningMessageWidth = this->fields.restrictionWarningMessageWidth;
                  transform = (UnityEngine_Transform_o *)gameObject;
                  v34 = (float)restrictionWarningMessageWidth;
                  if ( v31 > v34 )
                  {
                    v35 = 1.0;
                    v36 = v34 / v31;
                    v37 = 1.0;
                    if ( !gameObject )
                      goto LABEL_31;
                    goto LABEL_35;
                  }
                }
                else
                {
                  transform = UnityEngine_Component__get_transform(gameObject, 0LL);
                }
                *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Vector3__get_one(0LL);
                if ( transform )
                {
LABEL_35:
                  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v36, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B5D69C(gameObject, v20);
  }
}