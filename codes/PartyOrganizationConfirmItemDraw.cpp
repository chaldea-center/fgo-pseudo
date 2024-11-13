void __fastcall PartyOrganizationConfirmItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B11F16 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationConfirmItemDraw_TypeInfo, v1, v2);
    byte_4B11F16 = 1;
  }
  *PartyOrganizationConfirmItemDraw_TypeInfo->static_fields = (struct PartyOrganizationConfirmItemDraw_StaticFields)0x9A0000003CLL;
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
  __int64 v2; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v5; // x1
  UIWidget_o *restrictionMaskMessageText; // x0
  struct UISprite_o *v7; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v9; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4B11F10 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11F10 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_16;
    this->fields.restrictionMaskMessageWidth = restrictionMaskMessageText->fields.mWidth;
    UIWidget__set_width(restrictionMaskMessageText, 1000, 0LL);
    v7 = this->fields.restrictionMaskSprite;
    if ( !v7 )
      goto LABEL_16;
    mAtlas = v7->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    restrictionMaskMessageText = (UIWidget_o *)sub_1BCA784(&this->fields.maskSpriteDefaultAtlas, mAtlas);
    v9 = this->fields.restrictionMaskSprite;
    if ( !v9 )
      goto LABEL_16;
    this->fields.maskSpriteDefaultHeight = v9->fields.mHeight;
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( restrictionMaskMessageText )
    {
      this->fields.restrictionWarningMessageWidth = restrictionMaskMessageText->fields.mWidth;
      UIWidget__set_width(restrictionMaskMessageText, 1000, 0LL);
      return;
    }
LABEL_16:
    sub_1BCAA3C(restrictionMaskMessageText, v5);
  }
}


void __fastcall PartyOrganizationConfirmItemDraw__ClearMessage(
        PartyOrganizationConfirmItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4B11F12 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B11F12 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_18;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
LABEL_18:
    sub_1BCAA3C(gameObject, v7);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  UnityEngine_Object_o *maskServantObj; // x25
  PartyOrganizationRootComponent_c *v102; // x1
  void *lv; // x0
  UnityEngine_Object_o *maskServantLabel; // x25
  UnityEngine_Object_o *maskEquipObj; // x25
  UnityEngine_Object_o *maskEquipLabel; // x25
  ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct FollowerInfo_o *followerInfo; // x8
  __int64 v109; // x1
  UnityEngine_Object_o *typeSprite; // x24
  struct FollowerInfo_o *v111; // x8
  int32_t type; // w8
  __int64 *v113; // x8
  UnityEngine_Object_o *v114; // x23
  UserServantEntity_o *userServantEntity; // x23
  ServantFaceIconComponent_o *v116; // x24
  const MethodInfo *v117; // x1
  UnityEngine_Object_o *v118; // x23
  UnityEngine_Object_o *v119; // x23
  UILabel_o *v120; // x23
  __int64 v121; // x1
  Il2CppObject *Master_object; // x23
  int64_t UserId; // x24
  const MethodInfo *v124; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  __int64 v126; // x2
  __int64 v127; // x3
  ServantFaceIconComponent_o *v128; // x23
  UserServantCollectionEntity_o *v129; // x25
  UserServantEntity_o *v130; // x24
  __int64 v131; // x1
  UnityEngine_Object_o *v132; // x23
  UnityEngine_Object_o *maskEquipSprite; // x23
  __int64 v134; // x1
  UISprite_o *v135; // x23
  UnityEngine_Object_o *v136; // x23
  UILabel_o *v137; // x23
  System_Int32_array *v138; // x0
  __int64 v139; // x1
  UnityEngine_Object_o *v140; // x23
  System_Int32_array *v141; // x24
  UISprite_o *v142; // x0
  System_String_o *v143; // x1
  __int64 v144; // x1
  UnityEngine_Object_o *v145; // x23
  UnityEngine_Object_c *v146; // x0
  __int64 *v147; // x8
  System_String_o *v148; // x23
  UnityEngine_Object_o *v149; // x24
  ServantEntity_o *servantEntity; // x0
  const MethodInfo *v151; // x1
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v153; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v155; // w0
  System_Int32_array *CommandCardList; // x0
  __int64 v157; // x1
  UnityEngine_Object_o *supportSprite; // x25
  System_String_o *v159; // x1
  UnityEngine_Object_o *v160; // x23
  UnityEngine_Object_o *v161; // x23
  int32_t v162; // w23
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // kr20_16
  ServantFaceIconComponent_o *v165; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // kr30_16
  int32_t v167; // w0
  int32_t svtLimitCount; // w26
  int32_t v169; // w27
  const MethodInfo *v170; // x1
  __int64 v171; // x1
  UnityEngine_Object_o *v172; // x23
  bool v173; // w1
  struct UILabel_array *commandLabelList; // x8
  __int64 v175; // x26
  int32_t v176; // w21
  int max_length; // w9
  UILabel_o *v178; // x22
  UnityEngine_Object_o *memberTypeBaseSprite; // x21
  int32_t index; // w21
  System_String_o **v181; // x8
  UISprite_o *memberTypeSprite; // x21
  System_String_o *v183; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  const MethodInfo *v185; // x1
  UserServantEntity_o *v186; // x0
  __int64 *v187; // x8
  System_String_o *v188; // x1
  const MethodInfo *v189; // x5
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  PartyOrganizationConfirmItemDraw_o *v194; // x0
  System_String_o *v195; // x3
  int v196; // w24
  const MethodInfo *v197; // x1
  const MethodInfo *v198; // x5
  System_String_o *v199; // x0
  System_String_o *v200; // x1
  float v201; // s0
  float v202; // s1
  float v203; // s2
  float v204; // s3
  PartyOrganizationConfirmItemDraw_o *v205; // x0
  System_String_o *v206; // x3
  bool v207; // w4
  __int64 *v208; // x8
  System_String_o *v209; // x1
  const MethodInfo *v210; // x4
  float v211; // s0
  float v212; // s1
  PartyOrganizationConfirmItemDraw_o *v213; // x0
  bool v214; // w3
  int64_t fatigureTime; // x21
  __int64 v216; // x1
  System_String_o *v217; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  _DWORD *v219; // x8
  Il2CppObject *v220; // x21
  const MethodInfo *v221; // x1
  __int64 v222; // x22
  __int64 v223; // x23
  int32_t SvtClassId; // w21
  UserServantEntity_o *v225; // x0
  __int64 methodPtr_low; // x9
  __int64 v227; // x22
  int32_t v228; // w22
  int32_t v229; // w20
  struct ServantClassCompatibilityIconComponent_o *v230; // x8
  System_String_o *v231; // x21
  Il2CppObject *v232; // x0
  PartyOrganizationCommandCardMenu_o *v233; // x0
  const MethodInfo *v234; // x1
  int32_t TimesToRestart_k__BackingField; // [xsp+44h] [xbp-7Ch] BYREF
  UnityEngine_Color_o color; // [xsp+48h] [xbp-78h] BYREF
  int v237; // [xsp+5Ch] [xbp-64h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v239; // 0:x0.16

  if ( (byte_4B11F11 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v23, v24);
    sub_1BCA7E0(&DataManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27, v28);
    sub_1BCA7E0(&int_TypeInfo, v29, v30);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v35, v36);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37, v38);
    sub_1BCA7E0(&PartyOrganizationRootComponent_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v41, v42);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43, v44);
    sub_1BCA7E0(&string_TypeInfo, v45, v46);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v47, v48);
    sub_1BCA7E0(&StringLiteral_20405/*"icon_support_02"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_15674/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_10416/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_10419/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_11651/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_11652/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_11646/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_20531/*"img_frames_mask11"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_10415/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_21618/*"member_txt_"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_11645/*"SELECT_NO_SORTIE"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_20404/*"icon_support_01"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_20364/*"icon_eventjoin_02"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_19787/*"formation_txtbg_03"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_15672/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_19756/*"formation_blank_small"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_20534/*"img_frames_mask14"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_18662/*"datalost_svt_select"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_433/*"#042484"*/, v85, v86);
    sub_1BCA7E0(&StringLiteral_19784/*"formation_support_small"*/, v87, v88);
    sub_1BCA7E0(&StringLiteral_19786/*"formation_txtbg_02"*/, v89, v90);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v91, v92);
    sub_1BCA7E0(&StringLiteral_10417/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/, v93, v94);
    sub_1BCA7E0(&StringLiteral_20366/*"icon_friend"*/, v95, v96);
    sub_1BCA7E0(&StringLiteral_10418/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/, v97, v98);
    sub_1BCA7E0(&StringLiteral_20365/*"icon_follow"*/, v99, v100);
    byte_4B11F11 = 1;
  }
  entity = 0LL;
  v237 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  if ( !item || !mode )
    return;
  maskServantObj = (UnityEngine_Object_o *)this->fields.maskServantObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(maskServantObj, 0LL, 0LL) )
  {
    lv = this->fields.maskServantObj;
    if ( !lv )
      goto LABEL_199;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  maskServantLabel = (UnityEngine_Object_o *)this->fields.maskServantLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102);
  if ( UnityEngine_Object__op_Inequality(maskServantLabel, 0LL, 0LL) )
  {
    lv = this->fields.maskServantLabel;
    if ( !lv )
      goto LABEL_199;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0LL);
  }
  maskEquipObj = (UnityEngine_Object_o *)this->fields.maskEquipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102);
  if ( UnityEngine_Object__op_Inequality(maskEquipObj, 0LL, 0LL) )
  {
    lv = this->fields.maskEquipObj;
    if ( !lv )
      goto LABEL_199;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  maskEquipLabel = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102);
  lv = (void *)UnityEngine_Object__op_Inequality(maskEquipLabel, 0LL, 0LL);
  if ( ((unsigned __int8)lv & 1) != 0 )
  {
    lv = this->fields.maskEquipLabel;
    if ( !lv )
      goto LABEL_199;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0LL);
  }
  if ( item->fields.isFollower )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( item->fields.followerInfo )
    {
      lv = PartyOrganizationListViewItem__get_ServantLeader(item, (const MethodInfo *)v102);
      followerInfo = item->fields.followerInfo;
      if ( !followerInfo || !servantFaceIcon )
        goto LABEL_199;
      ServantFaceIconComponent__Set_38935648(
        servantFaceIcon,
        (ServantLeaderInfo_o *)lv,
        0LL,
        0LL,
        0,
        followerInfo->fields.imageSvtId,
        0LL);
      typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v109);
      lv = (void *)UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        v111 = item->fields.followerInfo;
        if ( !v111 )
          goto LABEL_199;
        type = v111->fields.type;
        if ( (unsigned int)(type - 3) < 2 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_199;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_199;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_199;
          v113 = &StringLiteral_20404/*"icon_support_01"*/;
          goto LABEL_130;
        }
        if ( type == 5 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_199;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_199;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_199;
          v113 = &StringLiteral_20365/*"icon_follow"*/;
          goto LABEL_130;
        }
        if ( type == 1 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_199;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_199;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_199;
          v113 = &StringLiteral_20366/*"icon_friend"*/;
LABEL_130:
          UISprite__set_spriteName((UISprite_o *)lv, (System_String_o *)*v113, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_199;
          (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
          goto LABEL_135;
        }
        lv = this->fields.typeSprite;
        if ( !lv )
          goto LABEL_199;
        lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
        if ( !lv )
          goto LABEL_199;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
      }
LABEL_135:
      CommandCardList = PartyOrganizationListViewItem__GetCommandCardList(item, (const MethodInfo *)v102);
      supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
      v141 = CommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v157);
      if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
      {
        lv = this->fields.supportSprite;
        if ( !lv )
          goto LABEL_199;
        if ( item->fields.isFollower )
          v159 = (System_String_o *)StringLiteral_20405/*"icon_support_02"*/;
        else
          v159 = 0LL;
        UISprite__set_spriteName((UISprite_o *)lv, v159, 0LL);
      }
      if ( isSimpleDisp )
      {
        v160 = (UnityEngine_Object_o *)this->fields.typeSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102);
        if ( UnityEngine_Object__op_Inequality(v160, 0LL, 0LL) )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_199;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_199;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
        }
        v161 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102);
        if ( UnityEngine_Object__op_Inequality(v161, 0LL, 0LL) )
        {
          lv = this->fields.supportSprite;
          if ( !lv )
            goto LABEL_199;
          UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
        }
        lv = this->fields.servantFaceIcon;
        if ( !lv )
LABEL_199:
          sub_1BCAA3C(lv, v102);
        ServantFaceIconComponent__ClearEquip((ServantFaceIconComponent_o *)lv, 0LL);
      }
LABEL_157:
      v148 = 0LL;
      if ( !isAdjustPosY )
        goto LABEL_180;
      goto LABEL_175;
    }
    if ( !servantFaceIcon )
      goto LABEL_199;
    ServantFaceIconComponent__Clear(this->fields.servantFaceIcon, 0LL);
    v145 = (UnityEngine_Object_o *)this->fields.typeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v144);
    if ( UnityEngine_Object__op_Inequality(v145, 0LL, 0LL) )
    {
      lv = this->fields.typeSprite;
      if ( !lv )
        goto LABEL_199;
      lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
      if ( !lv )
        goto LABEL_199;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
    }
    v146 = UnityEngine_Object_TypeInfo;
    v147 = &StringLiteral_19784/*"formation_support_small"*/;
    goto LABEL_104;
  }
  v114 = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102);
  if ( UnityEngine_Object__op_Inequality(v114, 0LL, 0LL) )
  {
    lv = this->fields.typeSprite;
    if ( !lv )
      goto LABEL_199;
    lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
    if ( !lv )
      goto LABEL_199;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  userServantEntity = item->fields.userServantEntity;
  if ( userServantEntity )
  {
    v116 = this->fields.servantFaceIcon;
    lv = PartyOrganizationListViewItem__GetEquipList(item, (const MethodInfo *)v102);
    if ( !v116 )
      goto LABEL_199;
    ServantFaceIconComponent__Set(
      v116,
      userServantEntity,
      (System_Int64_array *)lv,
      item->fields.questRestrictionInfo,
      0LL,
      0LL,
      0LL);
    if ( item->fields._IsDisappearSvt_k__BackingField )
    {
      v118 = (UnityEngine_Object_o *)this->fields.maskServantObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v117);
      if ( UnityEngine_Object__op_Inequality(v118, 0LL, 0LL) )
      {
        lv = this->fields.maskServantObj;
        if ( !lv )
          goto LABEL_199;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
      }
      v119 = (UnityEngine_Object_o *)this->fields.maskServantLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102);
      if ( UnityEngine_Object__op_Inequality(v119, 0LL, 0LL) )
      {
        v120 = this->fields.maskServantLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v117);
        lv = LocalizationManager__Get((System_String_o *)StringLiteral_15674/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0LL);
        if ( !v120 )
          goto LABEL_199;
        UILabel__set_text(v120, (System_String_o *)lv, 0LL);
      }
    }
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v117);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v121);
      UserId = NetworkManager__get_UserId(0LL);
      EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, v124);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
          *(_QWORD *)&EquipSvtId.fields.fakeValue);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(EquipSvtId, 0LL);
      if ( !Master_object )
        goto LABEL_199;
      if ( UserServantCollectionMaster__TryGetEntity(
             (UserServantCollectionMaster_o *)Master_object,
             &entity,
             UserId,
             (int32_t)lv,
             0LL) )
      {
        v128 = this->fields.servantFaceIcon;
        v129 = entity;
        v130 = (UserServantEntity_o *)sub_1BCAA2C(UserServantEntity_TypeInfo, v117, v126, v127);
        UserServantEntity___ctor_40924048(v130, v129, 0LL);
        if ( !v128 )
          goto LABEL_199;
        ServantFaceIconComponent__SetEquip(v128, v130, 0LL);
        v132 = (UnityEngine_Object_o *)this->fields.maskEquipObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v131);
        if ( UnityEngine_Object__op_Inequality(v132, 0LL, 0LL) )
        {
          lv = this->fields.maskEquipObj;
          if ( !lv )
            goto LABEL_199;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
        }
        maskEquipSprite = (UnityEngine_Object_o *)this->fields.maskEquipSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102);
        if ( UnityEngine_Object__op_Inequality(maskEquipSprite, 0LL, 0LL) )
        {
          v135 = this->fields.maskEquipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v134);
          AtlasManager__SetEventSprite(v135, (System_String_o *)StringLiteral_20534/*"img_frames_mask14"*/, 0LL);
        }
        v136 = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v134);
        if ( UnityEngine_Object__op_Inequality(v136, 0LL, 0LL) )
        {
          v137 = this->fields.maskEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v117);
          lv = LocalizationManager__Get((System_String_o *)StringLiteral_15672/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0LL);
          if ( !v137 )
            goto LABEL_199;
          UILabel__set_text(v137, (System_String_o *)lv, 0LL);
        }
      }
    }
    v138 = PartyOrganizationListViewItem__GetCommandCardList(item, v117);
    v140 = (UnityEngine_Object_o *)this->fields.supportSprite;
    v141 = v138;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v139);
    if ( UnityEngine_Object__op_Inequality(v140, 0LL, 0LL) )
    {
      lv = item->fields.userServantEntity;
      if ( !lv )
        goto LABEL_199;
      lv = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)lv, 0LL);
      if ( !this->fields.supportSprite )
        goto LABEL_199;
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        v142 = this->fields.supportSprite;
        v143 = (System_String_o *)StringLiteral_20364/*"icon_eventjoin_02"*/;
      }
      else
      {
        v142 = this->fields.supportSprite;
        v143 = 0LL;
      }
      UISprite__set_spriteName(v142, v143, 0LL);
    }
    goto LABEL_157;
  }
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_199;
    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)lv, 0LL);
    v146 = UnityEngine_Object_TypeInfo;
    v147 = &StringLiteral_19756/*"formation_blank_small"*/;
LABEL_104:
    v148 = (System_String_o *)*v147;
    v149 = (UnityEngine_Object_o *)this->fields.supportSprite;
    if ( !v146->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v146, v102);
    if ( UnityEngine_Object__op_Inequality(v149, 0LL, 0LL) )
    {
      lv = this->fields.supportSprite;
      if ( !lv )
        goto LABEL_199;
      UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
    }
    goto LABEL_174;
  }
  if ( item->fields.questRestrictionInfo )
  {
    if ( ServantEntity__checkIsHeroineSvt(servantEntity, 0LL) )
    {
      lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !lv )
        goto LABEL_199;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)lv,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, v153);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
          *(_QWORD *)&SvtId.fields.fakeValue);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(SvtId, 0LL);
      if ( !MasterData_object )
        goto LABEL_199;
      lv = UserServantMaster__getHeroineData((UserServantMaster_o *)MasterData_object, (int32_t)lv, 0LL);
      if ( !item->fields.questRestrictionInfo )
        goto LABEL_199;
      v155 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41189504(
               item->fields.questRestrictionInfo,
               (UserServantEntity_o *)lv,
               0LL);
    }
    else
    {
      questRestrictionInfo = item->fields.questRestrictionInfo;
      v164 = PartyOrganizationListViewItem__get_SvtId(item, v151);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
          *(_QWORD *)&v164.fields.fakeValue);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v164, 0LL);
      if ( !questRestrictionInfo )
        goto LABEL_199;
      v155 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount(questRestrictionInfo, (int32_t)lv, 0LL);
    }
    v162 = v155;
  }
  else
  {
    v162 = -1;
  }
  v165 = this->fields.servantFaceIcon;
  v166 = PartyOrganizationListViewItem__get_SvtId(item, (const MethodInfo *)v102);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&v166.fields.fakeValue);
  v167 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v166, 0LL);
  svtLimitCount = item->fields.svtLimitCount;
  v169 = v167;
  lv = (void *)PartyOrganizationListViewItem__get_Level(item, v170);
  if ( !v165 )
    goto LABEL_199;
  ServantFaceIconComponent__Set_38928428(
    v165,
    v169,
    svtLimitCount,
    v162,
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
  v172 = (UnityEngine_Object_o *)this->fields.supportSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v171);
  if ( UnityEngine_Object__op_Inequality(v172, 0LL, 0LL) )
  {
    lv = this->fields.supportSprite;
    if ( !lv )
      goto LABEL_199;
    UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
  }
  v148 = 0LL;
LABEL_174:
  v141 = 0LL;
  if ( !isAdjustPosY )
    goto LABEL_180;
LABEL_175:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_199;
  if ( !ServantFaceIconComponent__IsUseEquip((ServantFaceIconComponent_o *)lv, 0LL) )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_199;
    ServantFaceIconComponent__AdjustRaritySpritePosY((ServantFaceIconComponent_o *)lv, -55.0, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_199;
    ServantFaceIconComponent__AdjustDispLimitCountSpritePosY((ServantFaceIconComponent_o *)lv, -34.0, 0LL);
  }
LABEL_180:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_199;
  ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)lv, !isRarityHide, 0LL);
  if ( item->fields._IsNotSupportSingle_k__BackingField || !item->fields._IsDataLost_k__BackingField )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_199;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 1, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_199;
    v173 = 1;
  }
  else
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_199;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 0, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_199;
    v173 = 0;
  }
  ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)lv, v173, 0LL);
  commandLabelList = this->fields.commandLabelList;
  if ( !commandLabelList )
    goto LABEL_199;
  v175 = 0LL;
  v176 = (_DWORD)v141 + 32;
  while ( 1 )
  {
    max_length = commandLabelList->max_length;
    if ( (int)v175 >= max_length )
      break;
    if ( (unsigned int)v175 >= max_length )
      goto LABEL_315;
    v178 = commandLabelList->m_Items[v175];
    if ( v141 )
    {
      if ( (unsigned int)v175 >= v141->max_length )
LABEL_315:
        sub_1BCAA44(lv, v102);
      lv = System_Int32__ToString(v176, 0LL);
      v102 = (PartyOrganizationRootComponent_c *)lv;
      if ( !v178 )
        goto LABEL_199;
    }
    else
    {
      v102 = (PartyOrganizationRootComponent_c *)StringLiteral_1/*""*/;
      if ( !v178 )
        goto LABEL_199;
    }
    UILabel__set_text(v178, (System_String_o *)v102, 0LL);
    commandLabelList = this->fields.commandLabelList;
    ++v175;
    v176 += 4;
    if ( !commandLabelList )
      goto LABEL_199;
  }
  lv = this->fields.baseSprite;
  if ( !lv )
    goto LABEL_199;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 0, 0LL);
  if ( v148 )
  {
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_199;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 1, 0LL);
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_199;
    UISprite__set_spriteName((UISprite_o *)lv, v148, 0LL);
  }
  memberTypeBaseSprite = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102);
  if ( UnityEngine_Object__op_Inequality(memberTypeBaseSprite, 0LL, 0LL) )
  {
    index = item->fields.index;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v102);
    lv = this->fields.memberTypeBaseSprite;
    if ( !lv )
      goto LABEL_199;
    v181 = (System_String_o **)(index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax
                              ? &StringLiteral_19787/*"formation_txtbg_03"*/
                              : &StringLiteral_19786/*"formation_txtbg_02"*/);
    UISprite__set_spriteName((UISprite_o *)lv, *v181, 0LL);
    memberTypeSprite = this->fields.memberTypeSprite;
    v237 = item->fields.index + 1;
    v183 = System_Int32__ToString((int32_t)&v237, 0LL);
    lv = System_String__Concat_62401220((System_String_o *)StringLiteral_21618/*"member_txt_"*/, v183, 0LL);
    if ( !memberTypeSprite )
      goto LABEL_199;
    UISprite__set_spriteName(memberTypeSprite, (System_String_o *)lv, 0LL);
    lv = this->fields.memberTypeSprite;
    if ( !lv )
      goto LABEL_199;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    v186 = item->fields.userServantEntity;
    if ( v186 && UserServantEntity__IsLeave(v186, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v185);
      v187 = &StringLiteral_11645/*"SELECT_NO_SORTIE"*/;
LABEL_225:
      v188 = LocalizationManager__Get((System_String_o *)*v187, 0LL);
      r = 0.0;
      g = 0.0;
      b = 0.0;
      a = 1.0;
      v194 = this;
      v195 = 0LL;
LABEL_226:
      PartyOrganizationConfirmItemDraw__SetMaskMessage(v194, v188, *(UnityEngine_Color_o *)&r, 0, v195, 0, v189);
      v196 = 1;
      goto LABEL_264;
    }
    if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, v185)
      && (item->fields.userServantEntity || item->fields.isFollower) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v197);
      v199 = LocalizationManager__Get((System_String_o *)StringLiteral_10415/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
LABEL_233:
      v200 = v199;
      v201 = 0.0;
      v202 = 0.0;
      v203 = 0.0;
      v204 = 1.0;
      v205 = this;
      v206 = 0LL;
      v207 = 0;
LABEL_234:
      v196 = 1;
      PartyOrganizationConfirmItemDraw__SetMaskMessage(v205, v200, *(UnityEngine_Color_o *)&v201, 1, v206, v207, v198);
      goto LABEL_264;
    }
    if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v197);
      v208 = &StringLiteral_10416/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_240:
      v209 = LocalizationManager__Get((System_String_o *)*v208, 0LL);
      v211 = 0.0;
      v212 = 0.0;
      v213 = this;
      v214 = 0;
LABEL_241:
      v196 = 1;
      PartyOrganizationConfirmItemDraw__SetWarningMessage(v213, v209, 1, v214, v211, v212, v210);
      goto LABEL_264;
    }
    if ( item->fields.isFixedSupportPositionRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v197);
      v208 = &StringLiteral_10417/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/;
      goto LABEL_240;
    }
    if ( item->fields.isFixedServantPositionRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v197);
      v208 = &StringLiteral_10418/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
      goto LABEL_240;
    }
    fatigureTime = item->fields.fatigureTime;
    if ( (fatigureTime & 0x8000000000000000LL) != 0 )
    {
      if ( item->fields._IsAllOutBattle_k__BackingField )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v197);
        v187 = &StringLiteral_11646/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
        goto LABEL_225;
      }
      if ( item->fields._IsNotSupportSingle_k__BackingField )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v197);
        v209 = LocalizationManager__Get((System_String_o *)StringLiteral_10419/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
        v211 = 10.0;
        v212 = -22.0;
        v214 = 1;
        v213 = this;
        goto LABEL_241;
      }
      if ( item->fields._IsDataLost_k__BackingField )
      {
        v200 = (System_String_o *)StringLiteral_1/*""*/;
        v201 = 1.0;
        v202 = 1.0;
        v203 = 1.0;
        v206 = (System_String_o *)StringLiteral_18662/*"datalost_svt_select"*/;
        v204 = 1.0;
        v207 = 1;
        v205 = this;
        goto LABEL_234;
      }
      if ( item->fields._TimesToRestart_k__BackingField >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v197);
        v231 = LocalizationManager__Get((System_String_o *)StringLiteral_11652/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
        v232 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
        v199 = System_String__Format(v231, v232, 0LL);
        goto LABEL_233;
      }
    }
    else
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v197);
      if ( fatigureTime > NetworkManager__getTime(0LL) )
      {
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_433/*"#042484"*/, &color, 0LL);
        color.fields.a = 0.69804;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v216);
        v217 = LocalizationManager__Get((System_String_o *)StringLiteral_11651/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, 0LL);
        r = color.fields.r;
        g = color.fields.g;
        b = color.fields.b;
        a = color.fields.a;
        v188 = v217;
        v194 = this;
        v195 = (System_String_o *)StringLiteral_20531/*"img_frames_mask11"*/;
        goto LABEL_226;
      }
      item->fields.fatigureTime = -1LL;
    }
    PartyOrganizationConfirmItemDraw__ClearMessage(this, v197);
  }
  v196 = 0;
LABEL_264:
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v185);
  if ( !UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
    return;
  if ( !item->fields.isFollower )
  {
    v225 = item->fields.userServantEntity;
    if ( v225 )
    {
      SvtClassId = UserServantEntity__getSvtClassId(v225, 0, 0LL);
    }
    else
    {
      v219 = item->fields.servantEntity;
      if ( !v219 )
        goto LABEL_282;
      SvtClassId = v219[20];
    }
    LODWORD(v219) = 0;
    goto LABEL_283;
  }
  v219 = item->fields.followerInfo;
  if ( !v219 )
  {
LABEL_282:
    SvtClassId = 0;
    goto LABEL_283;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_199;
  v220 = DataManager__GetMasterData_object_(
           (DataManager_o *)lv,
           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, v221);
  if ( !lv )
    goto LABEL_199;
  v223 = *((_QWORD *)lv + 6);
  v222 = *((_QWORD *)lv + 7);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v102);
  *(_QWORD *)&v239.fields.currentCryptoKey = v223;
  *(_QWORD *)&v239.fields.fakeValue = v222;
  lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v239, 0LL);
  if ( !v220 )
    goto LABEL_199;
  lv = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v220,
         (int32_t)lv,
         (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !lv )
    goto LABEL_199;
  SvtClassId = *((_DWORD *)lv + 20);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, (const MethodInfo *)v102);
  if ( !lv )
    goto LABEL_199;
  LODWORD(v219) = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)lv, 0LL);
LABEL_283:
  if ( (unsigned int)v219 | v196 | (SvtClassId == 0) )
  {
    lv = this->fields.classCompatibilityIcon;
    if ( !lv )
      goto LABEL_199;
    goto LABEL_303;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_199;
  lv = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)lv, 40, 0LL);
  if ( ((unsigned __int8)lv & 1) == 0 )
    goto LABEL_300;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_199;
  lv = (void *)*((_QWORD *)lv + 4);
  if ( !lv )
    goto LABEL_199;
  v102 = PartyOrganizationRootComponent_TypeInfo;
  methodPtr_low = LOBYTE(PartyOrganizationRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)lv + 304LL) < (unsigned int)methodPtr_low
    || *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)lv + 200LL) + 8 * methodPtr_low - 8) != PartyOrganizationRootComponent_TypeInfo )
  {
    v233 = (PartyOrganizationCommandCardMenu_o *)sub_1BCACFC(lv);
    PartyOrganizationCommandCardMenu__EndOpen(v233, v234);
    return;
  }
  v227 = *((_QWORD *)lv + 59);
  if ( !v227
    || (lv = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)lv + 59), 0LL), !(_DWORD)lv)
    || (v228 = *(_DWORD *)(v227 + 24)) == 0 )
  {
LABEL_300:
    v230 = this->fields.classCompatibilityIcon;
    goto LABEL_301;
  }
  v229 = (int)lv;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_199;
  lv = DataManager__GetMasterData_object_(
         (DataManager_o *)lv,
         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !lv )
    goto LABEL_199;
  lv = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)lv, v229, v228, 0LL);
  v230 = this->fields.classCompatibilityIcon;
  if ( !lv )
  {
LABEL_301:
    if ( !v230 )
      goto LABEL_199;
    lv = v230;
LABEL_303:
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)lv, 0LL);
    return;
  }
  if ( !v230 )
    goto LABEL_199;
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x24
  __int64 v27; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v29; // x24
  UIWidget_o *v30; // x22
  int32_t *p_DATA_LOST_MASK_HEIGHT; // x8
  System_String_o *v32; // x1
  float v33; // s0
  float v34; // s8
  __int64 v35; // x2
  UnityEngine_Transform_o *v36; // x20
  float restrictionMaskMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  __int64 v41; // x2
  struct UnityEngine_Vector3_StaticFields *v42; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = maskColor.fields.a;
  b = maskColor.fields.b;
  g = maskColor.fields.g;
  r = maskColor.fields.r;
  if ( (byte_4B11F13 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, message, isScale);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&PartyOrganizationConfirmItemDraw_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_18662/*"datalost_svt_select"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_20527/*"img_frames_mask03"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v24, v25);
    byte_4B11F13 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_46;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v29 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v27);
      AtlasManager__SetPartyOrganizationImage(v29, (System_String_o *)StringLiteral_18662/*"datalost_svt_select"*/, 0LL);
      v30 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)PartyOrganizationConfirmItemDraw_TypeInfo;
      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, v27);
      if ( !v30 )
        goto LABEL_46;
      p_DATA_LOST_MASK_HEIGHT = &PartyOrganizationConfirmItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT;
    }
    else
    {
      if ( !v29 )
        goto LABEL_46;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_46;
      v32 = maskName ? maskName : (System_String_o *)StringLiteral_20527/*"img_frames_mask03"*/;
      UISprite__set_spriteName((UISprite_o *)gameObject, v32, 0LL);
      v30 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( !v30 )
        goto LABEL_46;
      p_DATA_LOST_MASK_HEIGHT = &this->fields.maskSpriteDefaultHeight;
    }
    UIWidget__set_height(v30, *p_DATA_LOST_MASK_HEIGHT, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_46;
    v45.fields.r = r;
    v45.fields.g = g;
    v45.fields.b = b;
    v45.fields.a = a;
    UIWidget__set_color((UIWidget_o *)gameObject, v45, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_46;
    if ( isScale )
    {
      LODWORD(v33) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_46;
      v34 = v33;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v36 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v34 <= restrictionMaskMessageWidth )
      {
        if ( !byte_4B109C6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v27, v35);
          byte_4B109C6 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        x = static_fields->oneVector.fields.x;
        y = static_fields->oneVector.fields.y;
        z = static_fields->oneVector.fields.z;
      }
      else
      {
        x = restrictionMaskMessageWidth / v34;
        z = 1.0;
        y = 1.0;
      }
      if ( !v36 )
        goto LABEL_46;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v36 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4B109C6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v27, v41);
        byte_4B109C6 = 1;
      }
      if ( !v36 )
        goto LABEL_46;
      v42 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v42->oneVector.fields.y;
      z = v42->oneVector.fields.z;
      x = v42->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v36, *(UnityEngine_Vector3_o *)&x, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
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
LABEL_46:
    sub_1BCAA3C(gameObject, v27);
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
  System_Collections_Generic_List_object__o *v10; // x28
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x22
  int32_t size; // w21
  il2cpp_array_size_t v25; // w23
  bool v26; // w26
  il2cpp_array_size_t v27; // w24
  Il2CppClass **v28; // x19
  PartyOrganizationConfirmItemDraw_o **v29; // x19
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v30; // t1
  _DWORD *monitor; // x8
  int32_t v32; // w25
  _DWORD *v33; // x8
  Il2CppObject *Master_object; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  __int64 v36; // x1
  bool IsHideRarity; // w27
  int32_t v38; // w25
  PartyOrganizationConfirmItemDraw_o *v39; // x26
  const MethodInfo *v40; // x7
  PartyOrganizationConfirmItemDraw_c *v42; // x0
  UnityEngine_GameObject_o *self; // [xsp+8h] [xbp-88h]
  __int64 v44; // [xsp+10h] [xbp-80h]
  bool v45; // [xsp+1Ch] [xbp-74h]
  bool v46; // [xsp+20h] [xbp-70h]
  int32_t questPhase; // [xsp+24h] [xbp-6Ch]
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+28h] [xbp-68h] BYREF

  v10 = (System_Collections_Generic_List_object__o *)itemList;
  if ( (byte_4B11F15 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcFollowerMaster___, supportMemberObjectList, supportMemberBase);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)sub_1BCA7E0(
                                                                                     &PartyOrganizationConfirmItemDraw_TypeInfo,
                                                                                     v21,
                                                                                     v22);
    byte_4B11F15 = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( !v10 )
    goto LABEL_44;
  self = supportMemberBase;
  if ( !supportMemberObjectList )
    goto LABEL_44;
  v23 = *(_QWORD *)&supportMemberObjectList->max_length;
  size = v10->fields._size;
  if ( (int)v23 >= 1 )
  {
    v25 = 1;
    v26 = size > 0;
    v45 = isSimpleDisp;
    v46 = isAdjustPosY;
    v44 = *(_QWORD *)&supportMemberObjectList->max_length;
    while ( 1 )
    {
      v27 = v25 - 1;
      v28 = &supportMemberObjectList->obj.klass + (int)(v25 - 1);
      v30 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v28[4];
      v29 = (PartyOrganizationConfirmItemDraw_o **)(v28 + 4);
      itemList = v30;
      if ( !v30 )
        break;
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)itemList,
                                                                                       0LL);
      if ( !itemList )
        break;
      if ( v26 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 1, 0LL);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v27,
                                                                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          break;
        if ( itemList[4].monitor )
        {
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                           v10,
                                                                                           v27,
                                                                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
          if ( !itemList )
            break;
          monitor = itemList[4].monitor;
          if ( !monitor )
            break;
          v32 = monitor[9];
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                           v10,
                                                                                           v27,
                                                                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
          if ( !itemList )
            break;
          v33 = itemList[4].monitor;
          if ( !v33 )
            break;
          questPhase = v33[10];
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, supportMemberObjectList);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                           v10,
                                                                                           v27,
                                                                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
          if ( !itemList )
            break;
          SvtId = PartyOrganizationListViewItem__get_SvtId(
                    (PartyOrganizationListViewItem_o *)itemList,
                    (const MethodInfo *)supportMemberObjectList);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
              *(_QWORD *)&SvtId.fields.fakeValue);
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                                           SvtId,
                                                                                           0LL);
          if ( !Master_object )
            break;
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                                                           (NpcServantFollowerMaster_o *)Master_object,
                                                                                           &npcServantFollowerEntity,
                                                                                           v32,
                                                                                           questPhase,
                                                                                           (int32_t)itemList,
                                                                                           0LL);
          if ( ((unsigned __int8)itemList & 1) != 0 )
          {
            LODWORD(v23) = v44;
            if ( !npcServantFollowerEntity )
              break;
            IsHideRarity = NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
            itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
            if ( !npcServantFollowerEntity || !itemList )
              break;
            itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerMaster__GetEntity_40158156(
                                                                                             (NpcFollowerMaster_o *)itemList,
                                                                                             v32,
                                                                                             questPhase,
                                                                                             npcServantFollowerEntity->fields.id,
                                                                                             0LL);
            if ( itemList )
            {
              itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerEntity__GetImageSvtId(
                                                                                               (NpcFollowerEntity_o *)itemList,
                                                                                               0LL);
              v38 = (int)itemList;
            }
            else
            {
              v38 = 0;
            }
          }
          else
          {
            LODWORD(v23) = v44;
            v38 = 0;
            IsHideRarity = 0;
          }
        }
        else
        {
          v38 = 0;
          IsHideRarity = 0;
        }
        if ( v27 >= supportMemberObjectList->max_length )
          goto LABEL_40;
        v39 = *v29;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v27,
                                                                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !v39 )
          break;
        PartyOrganizationConfirmItemDraw__SetItem(
          v39,
          (PartyOrganizationListViewItem_o *)itemList,
          2,
          v46,
          IsHideRarity,
          v38,
          v45,
          v40);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
      }
      if ( (_DWORD)v23 == v25 )
        goto LABEL_41;
      v26 = (int)v25 < size;
      if ( v25++ >= supportMemberObjectList->max_length )
LABEL_40:
        sub_1BCAA44(itemList, supportMemberObjectList);
    }
LABEL_44:
    sub_1BCAA3C(itemList, supportMemberObjectList);
  }
LABEL_41:
  v42 = PartyOrganizationConfirmItemDraw_TypeInfo;
  if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, supportMemberObjectList);
    v42 = PartyOrganizationConfirmItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(self, (float)(v42->static_fields->ICON_OFFSET_SIZE * (1 - size)), 0LL);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  __int64 v18; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  float v23; // s0
  float v24; // s8
  __int64 v25; // x2
  int32_t restrictionWarningMessageWidth; // s0
  UnityEngine_Transform_o *v27; // x19
  float v28; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  __int64 v32; // x2
  struct UnityEngine_Vector3_StaticFields *v33; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B11F14 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, message, isScale);
    sub_1BCA7E0(&StringLiteral_20527/*"img_frames_mask03"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B11F14 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_39;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isMask, 0LL);
    if ( isMask )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_39;
      UISprite__set_atlas((UISprite_o *)gameObject, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_39;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20527/*"img_frames_mask03"*/, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_39;
      v35.fields.r = 0.0;
      v35.fields.g = 0.0;
      v35.fields.b = 0.0;
      v35.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, v35, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_39;
      UIWidget__set_height((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultHeight, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_39;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
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
          v21 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v21, iconPosY, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
          if ( gameObject )
          {
            v22 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
            GameObjectExtensions__SetLocalPositionY(v22, msgPosY, 0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
              gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
              if ( gameObject )
              {
                if ( isScale )
                {
                  LODWORD(v23) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
                  gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
                  if ( gameObject )
                  {
                    v24 = v23;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                    restrictionWarningMessageWidth = this->fields.restrictionWarningMessageWidth;
                    v27 = (UnityEngine_Transform_o *)gameObject;
                    v28 = (float)restrictionWarningMessageWidth;
                    if ( v24 <= v28 )
                    {
                      if ( !byte_4B109C6 )
                      {
                        gameObject = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v18, v25);
                        byte_4B109C6 = 1;
                      }
                      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                      x = static_fields->oneVector.fields.x;
                      y = static_fields->oneVector.fields.y;
                      z = static_fields->oneVector.fields.z;
                    }
                    else
                    {
                      x = v28 / v24;
                      z = 1.0;
                      y = 1.0;
                    }
                    if ( v27 )
                      goto LABEL_38;
                  }
                }
                else
                {
                  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                  v27 = (UnityEngine_Transform_o *)gameObject;
                  if ( !byte_4B109C6 )
                  {
                    gameObject = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v18, v32);
                    byte_4B109C6 = 1;
                  }
                  if ( v27 )
                  {
                    v33 = UnityEngine_Vector3_TypeInfo->static_fields;
                    y = v33->oneVector.fields.y;
                    z = v33->oneVector.fields.z;
                    x = v33->oneVector.fields.x;
LABEL_38:
                    UnityEngine_Transform__set_localScale(v27, *(UnityEngine_Vector3_o *)&x, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_39:
    sub_1BCAA3C(gameObject, v18);
  }
}