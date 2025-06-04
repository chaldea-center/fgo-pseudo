void __fastcall PartyOrganizationConfirmItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFDAD2 & 1) == 0 )
  {
    sub_1BC3008(&PartyOrganizationConfirmItemDraw_TypeInfo, v1);
    byte_4AFDAD2 = 1;
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
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v4; // x1
  UIWidget_o *restrictionMaskMessageText; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UISprite_o *v8; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v10; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4AFDACC & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFDACC = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_16;
    this->fields.restrictionMaskMessageWidth = restrictionMaskMessageText->fields.mWidth;
    UIWidget__set_width(restrictionMaskMessageText, 1000, 0LL);
    v8 = this->fields.restrictionMaskSprite;
    if ( !v8 )
      goto LABEL_16;
    mAtlas = v8->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.maskSpriteDefaultAtlas, (int32_t)mAtlas, v6, v7);
    v10 = this->fields.restrictionMaskSprite;
    if ( !v10 )
      goto LABEL_16;
    this->fields.maskSpriteDefaultHeight = v10->fields.mHeight;
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1BC3264(restrictionMaskMessageText, v4);
  }
}


void __fastcall PartyOrganizationConfirmItemDraw__ClearMessage(
        PartyOrganizationConfirmItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4AFDACE & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_1/*""*/, v3);
    byte_4AFDACE = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1BC3264(gameObject, v5);
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
  UnityEngine_Object_o *maskServantObj; // x25
  PartyOrganizationRootComponent_c *v61; // x1
  void *lv; // x0
  UnityEngine_Object_o *maskServantLabel; // x25
  UnityEngine_Object_o *maskEquipObj; // x25
  UnityEngine_Object_o *maskEquipLabel; // x25
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  struct FollowerInfo_o *followerInfo; // x8
  UnityEngine_Object_o *typeSprite; // x23
  struct FollowerInfo_o *v69; // x8
  int32_t type; // w8
  __int64 *v71; // x8
  UnityEngine_Object_o *v72; // x24
  UserServantEntity_o *userServantEntity; // x24
  ServantFaceIconComponent_o *v74; // x23
  UnityEngine_Object_o *v75; // x23
  UnityEngine_Object_o *v76; // x23
  UILabel_o *v77; // x23
  __int64 v78; // x1
  Il2CppObject *Master_object; // x23
  NetworkManager_c *v80; // x0
  int64_t userIdNumber; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  ServantFaceIconComponent_o *v83; // x23
  UserServantCollectionEntity_o *v84; // x25
  UserServantEntity_o *v85; // x24
  UnityEngine_Object_o *v86; // x23
  UnityEngine_Object_o *maskEquipSprite; // x23
  UISprite_o *v88; // x23
  UnityEngine_Object_o *v89; // x23
  UILabel_o *v90; // x23
  System_Int32_array *v91; // x0
  UnityEngine_Object_o *v92; // x24
  System_Int32_array *v93; // x23
  UISprite_o *v94; // x0
  System_String_o *v95; // x1
  UnityEngine_Object_o *v96; // x23
  UnityEngine_Object_c *v97; // x0
  __int64 *v98; // x8
  System_String_o *v99; // x24
  UnityEngine_Object_o *v100; // x23
  ServantEntity_o *servantEntity; // x0
  Il2CppObject *MasterData_object; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v104; // w0
  System_Int32_array *CommandCardList; // x0
  UnityEngine_Object_o *supportSprite; // x25
  System_String_o *v107; // x1
  UnityEngine_Object_o *v108; // x24
  UnityEngine_Object_o *v109; // x24
  QuestRestrictionInfo_o *questRestrictionInfo; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // kr20_16
  int32_t imageLimitCount; // w24
  int32_t v113; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // kr30_16
  int32_t v115; // w0
  int32_t svtLimitCount; // w25
  int32_t v117; // w26
  int32_t v118; // w26
  int32_t LimitCountByDispLimit; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // kr40_16
  int32_t v121; // w0
  int32_t v122; // w27
  int32_t v123; // w28
  ServantOverwriteStatus_o *v124; // x26
  int32_t Rarity_k__BackingField; // w25
  int32_t actualRarity; // w21
  ServantFaceIconComponent_o *v127; // x26
  int32_t v128; // w0
  int32_t v129; // w27
  int32_t v130; // w28
  UnityEngine_Object_o *v131; // x23
  bool v132; // w1
  __int64 v133; // x2
  struct UILabel_array *commandLabelList; // x8
  __int64 v135; // x26
  int32_t v136; // w21
  int max_length; // w9
  UILabel_o *v138; // x22
  UnityEngine_Object_o *memberTypeBaseSprite; // x21
  int32_t index; // w21
  System_String_o **v141; // x8
  UISprite_o *memberTypeSprite; // x21
  System_String_o *v143; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  __int64 *v145; // x8
  System_String_o *v146; // x1
  const MethodInfo *v147; // x5
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  PartyOrganizationConfirmItemDraw_o *v152; // x0
  System_String_o *v153; // x3
  int v154; // w24
  const MethodInfo *v155; // x1
  const MethodInfo *v156; // x5
  __int64 *v157; // x8
  System_String_o *v158; // x1
  const MethodInfo *v159; // x4
  float v160; // s0
  float v161; // s1
  PartyOrganizationConfirmItemDraw_o *v162; // x0
  bool v163; // w3
  System_String_o *v164; // x0
  System_String_o *v165; // x1
  float v166; // s0
  float v167; // s1
  float v168; // s2
  float v169; // s3
  PartyOrganizationConfirmItemDraw_o *v170; // x0
  System_String_o *v171; // x3
  bool v172; // w4
  int64_t fatigureTime; // x21
  System_String_o *v174; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  _DWORD *v176; // x8
  Il2CppObject *v177; // x21
  __int64 v178; // x22
  __int64 v179; // x23
  int32_t SvtClassId; // w21
  UserServantEntity_o *v181; // x0
  __int64 methodPtr_low; // x9
  __int64 v183; // x22
  int32_t v184; // w22
  int32_t v185; // w20
  struct ServantClassCompatibilityIconComponent_o *v186; // x8
  System_String_o *v187; // x21
  __int64 v188; // x2
  __int64 v189; // x3
  __int64 v190; // x4
  Il2CppObject *v191; // x0
  PartyOrganizationCommandCardMenu_o *v192; // x0
  const MethodInfo *v193; // x1
  bool v194; // [xsp+58h] [xbp-88h]
  int32_t TimesToRestart_k__BackingField; // [xsp+5Ch] [xbp-84h] BYREF
  UnityEngine_Color_o color; // [xsp+60h] [xbp-80h] BYREF
  int v197; // [xsp+74h] [xbp-6Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v199; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v200; // 0:x0.16

  if ( (byte_4AFDACD & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, item);
    sub_1BC3008(&BalanceConfig_TypeInfo, v15);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v16);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v18);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v19);
    sub_1BC3008(&DataManager_TypeInfo, v20);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v22);
    sub_1BC3008(&int_TypeInfo, v23);
    sub_1BC3008(&LocalizationManager_TypeInfo, v24);
    sub_1BC3008(&NetworkManager_TypeInfo, v25);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v26);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    sub_1BC3008(&PartyOrganizationRootComponent_TypeInfo, v28);
    sub_1BC3008(&ServantOverwriteStatus_TypeInfo, v29);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v30);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_1BC3008(&string_TypeInfo, v32);
    sub_1BC3008(&UserServantEntity_TypeInfo, v33);
    sub_1BC3008(&StringLiteral_20050/*"icon_support_02"*/, v34);
    sub_1BC3008(&StringLiteral_15360/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, v35);
    sub_1BC3008(&StringLiteral_10177/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/, v36);
    sub_1BC3008(&StringLiteral_10180/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v37);
    sub_1BC3008(&StringLiteral_11430/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, v38);
    sub_1BC3008(&StringLiteral_11431/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v39);
    sub_1BC3008(&StringLiteral_11425/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v40);
    sub_1BC3008(&StringLiteral_20201/*"img_frames_mask11"*/, v41);
    sub_1BC3008(&StringLiteral_10176/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v42);
    sub_1BC3008(&StringLiteral_21320/*"member_txt_"*/, v43);
    sub_1BC3008(&StringLiteral_11424/*"SELECT_NO_SORTIE"*/, v44);
    sub_1BC3008(&StringLiteral_20049/*"icon_support_01"*/, v45);
    sub_1BC3008(&StringLiteral_20006/*"icon_eventjoin_02"*/, v46);
    sub_1BC3008(&StringLiteral_19435/*"formation_txtbg_03"*/, v47);
    sub_1BC3008(&StringLiteral_15358/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v48);
    sub_1BC3008(&StringLiteral_19389/*"formation_blank_small"*/, v49);
    sub_1BC3008(&StringLiteral_20204/*"img_frames_mask14"*/, v50);
    sub_1BC3008(&StringLiteral_18312/*"datalost_svt_select"*/, v51);
    sub_1BC3008(&StringLiteral_404/*"#042484"*/, v52);
    sub_1BC3008(&StringLiteral_19432/*"formation_support_small"*/, v53);
    sub_1BC3008(&StringLiteral_19434/*"formation_txtbg_02"*/, v54);
    sub_1BC3008(&StringLiteral_1/*""*/, v55);
    sub_1BC3008(&StringLiteral_10178/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/, v56);
    sub_1BC3008(&StringLiteral_20009/*"icon_friend"*/, v57);
    sub_1BC3008(&StringLiteral_10179/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/, v58);
    sub_1BC3008(&StringLiteral_20008/*"icon_follow"*/, v59);
    byte_4AFDACD = 1;
  }
  entity = 0LL;
  v197 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  if ( !item || !mode )
    return;
  maskServantObj = (UnityEngine_Object_o *)this->fields.maskServantObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskServantObj, 0LL, 0LL) )
  {
    lv = this->fields.maskServantObj;
    if ( !lv )
      goto LABEL_212;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  maskServantLabel = (UnityEngine_Object_o *)this->fields.maskServantLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskServantLabel, 0LL, 0LL) )
  {
    lv = this->fields.maskServantLabel;
    if ( !lv )
      goto LABEL_212;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0LL);
  }
  maskEquipObj = (UnityEngine_Object_o *)this->fields.maskEquipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskEquipObj, 0LL, 0LL) )
  {
    lv = this->fields.maskEquipObj;
    if ( !lv )
      goto LABEL_212;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  maskEquipLabel = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  lv = (void *)UnityEngine_Object__op_Inequality(maskEquipLabel, 0LL, 0LL);
  if ( ((unsigned __int8)lv & 1) != 0 )
  {
    lv = this->fields.maskEquipLabel;
    if ( !lv )
      goto LABEL_212;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0LL);
  }
  if ( item->fields.isFollower )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( item->fields.followerInfo )
    {
      lv = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      followerInfo = item->fields.followerInfo;
      if ( !followerInfo || !servantFaceIcon )
        goto LABEL_212;
      ServantFaceIconComponent__Set_40039736(
        servantFaceIcon,
        (ServantLeaderInfo_o *)lv,
        0LL,
        0LL,
        0,
        followerInfo->fields.imageSvtId,
        0LL);
      typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      lv = (void *)UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        v69 = item->fields.followerInfo;
        if ( !v69 )
          goto LABEL_212;
        type = v69->fields.type;
        if ( (unsigned int)(type - 3) < 2 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_212;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_212;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_212;
          v71 = &StringLiteral_20049/*"icon_support_01"*/;
          goto LABEL_134;
        }
        if ( type == 5 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_212;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_212;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_212;
          v71 = &StringLiteral_20008/*"icon_follow"*/;
          goto LABEL_134;
        }
        if ( type == 1 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_212;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_212;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_212;
          v71 = &StringLiteral_20009/*"icon_friend"*/;
LABEL_134:
          UISprite__set_spriteName((UISprite_o *)lv, (System_String_o *)*v71, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_212;
          (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
          goto LABEL_139;
        }
        lv = this->fields.typeSprite;
        if ( !lv )
          goto LABEL_212;
        lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
        if ( !lv )
          goto LABEL_212;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
      }
LABEL_139:
      CommandCardList = PartyOrganizationListViewItem__GetCommandCardList(item, 0LL);
      supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
      v93 = CommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
      {
        lv = this->fields.supportSprite;
        if ( !lv )
          goto LABEL_212;
        if ( item->fields.isFollower )
          v107 = (System_String_o *)StringLiteral_20050/*"icon_support_02"*/;
        else
          v107 = 0LL;
        UISprite__set_spriteName((UISprite_o *)lv, v107, 0LL);
      }
      if ( isSimpleDisp )
      {
        v108 = (UnityEngine_Object_o *)this->fields.typeSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v108, 0LL, 0LL) )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_212;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_212;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
        }
        v109 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v109, 0LL, 0LL) )
        {
          lv = this->fields.supportSprite;
          if ( !lv )
            goto LABEL_212;
          UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
        }
        lv = this->fields.servantFaceIcon;
        if ( !lv )
LABEL_212:
          sub_1BC3264(lv, v61);
        ServantFaceIconComponent__ClearEquip((ServantFaceIconComponent_o *)lv, 0LL);
      }
LABEL_161:
      v99 = 0LL;
      if ( !isAdjustPosY )
        goto LABEL_193;
      goto LABEL_188;
    }
    if ( !servantFaceIcon )
      goto LABEL_212;
    ServantFaceIconComponent__Clear(this->fields.servantFaceIcon, 0LL);
    v96 = (UnityEngine_Object_o *)this->fields.typeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v96, 0LL, 0LL) )
    {
      lv = this->fields.typeSprite;
      if ( !lv )
        goto LABEL_212;
      lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
      if ( !lv )
        goto LABEL_212;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
    }
    v97 = UnityEngine_Object_TypeInfo;
    v98 = &StringLiteral_19432/*"formation_support_small"*/;
    goto LABEL_108;
  }
  v72 = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v72, 0LL, 0LL) )
  {
    lv = this->fields.typeSprite;
    if ( !lv )
      goto LABEL_212;
    lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
    if ( !lv )
      goto LABEL_212;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  userServantEntity = item->fields.userServantEntity;
  if ( userServantEntity )
  {
    v74 = this->fields.servantFaceIcon;
    lv = PartyOrganizationListViewItem__GetEquipList(item, 0LL);
    if ( !v74 )
      goto LABEL_212;
    ServantFaceIconComponent__Set(
      v74,
      userServantEntity,
      (System_Int64_array *)lv,
      item->fields.questRestrictionInfo,
      0LL,
      0LL,
      item->fields._IsTempGrandServant_k__BackingField,
      0,
      item->fields._EquipFriendShipSkillChange_k__BackingField > 0,
      0LL);
    if ( item->fields._IsDisappearSvt_k__BackingField )
    {
      v75 = (UnityEngine_Object_o *)this->fields.maskServantObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v75, 0LL, 0LL) )
      {
        lv = this->fields.maskServantObj;
        if ( !lv )
          goto LABEL_212;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
      }
      v76 = (UnityEngine_Object_o *)this->fields.maskServantLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
      {
        v77 = this->fields.maskServantLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        lv = LocalizationManager__Get((System_String_o *)StringLiteral_15360/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0LL);
        if ( !v77 )
          goto LABEL_212;
        UILabel__set_text(v77, (System_String_o *)lv, 0LL);
      }
    }
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4AFC1F1 )
      {
        sub_1BC3008(&NetworkManager_TypeInfo, v78);
        byte_4AFC1F1 = 1;
      }
      v80 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v80 = NetworkManager_TypeInfo;
      }
      userIdNumber = v80->static_fields->userIdNumber;
      EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(EquipSvtId, 0LL);
      if ( !Master_object )
        goto LABEL_212;
      if ( UserServantCollectionMaster__TryGetEntity(
             (UserServantCollectionMaster_o *)Master_object,
             &entity,
             userIdNumber,
             (int32_t)lv,
             0LL) )
      {
        v83 = this->fields.servantFaceIcon;
        v84 = entity;
        v85 = (UserServantEntity_o *)sub_1BC3254(UserServantEntity_TypeInfo);
        UserServantEntity___ctor_42132492(v85, v84, 0LL);
        if ( !v83 )
          goto LABEL_212;
        ServantFaceIconComponent__SetEquip(v83, v85, 0LL);
        v86 = (UnityEngine_Object_o *)this->fields.maskEquipObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v86, 0LL, 0LL) )
        {
          lv = this->fields.maskEquipObj;
          if ( !lv )
            goto LABEL_212;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
        }
        maskEquipSprite = (UnityEngine_Object_o *)this->fields.maskEquipSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(maskEquipSprite, 0LL, 0LL) )
        {
          v88 = this->fields.maskEquipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(v88, (System_String_o *)StringLiteral_20204/*"img_frames_mask14"*/, 0LL);
        }
        v89 = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v89, 0LL, 0LL) )
        {
          v90 = this->fields.maskEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          lv = LocalizationManager__Get((System_String_o *)StringLiteral_15358/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0LL);
          if ( !v90 )
            goto LABEL_212;
          UILabel__set_text(v90, (System_String_o *)lv, 0LL);
        }
      }
    }
    v91 = PartyOrganizationListViewItem__GetCommandCardList(item, 0LL);
    v92 = (UnityEngine_Object_o *)this->fields.supportSprite;
    v93 = v91;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v92, 0LL, 0LL) )
    {
      lv = item->fields.userServantEntity;
      if ( !lv )
        goto LABEL_212;
      lv = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)lv, 0LL);
      if ( !this->fields.supportSprite )
        goto LABEL_212;
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        v94 = this->fields.supportSprite;
        v95 = (System_String_o *)StringLiteral_20006/*"icon_eventjoin_02"*/;
      }
      else
      {
        v94 = this->fields.supportSprite;
        v95 = 0LL;
      }
      UISprite__set_spriteName(v94, v95, 0LL);
    }
    goto LABEL_161;
  }
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_212;
    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)lv, 0LL);
    v97 = UnityEngine_Object_TypeInfo;
    v98 = &StringLiteral_19389/*"formation_blank_small"*/;
LABEL_108:
    v99 = (System_String_o *)*v98;
    v100 = (UnityEngine_Object_o *)this->fields.supportSprite;
    if ( !v97->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v97);
    if ( UnityEngine_Object__op_Inequality(v100, 0LL, 0LL) )
    {
      lv = this->fields.supportSprite;
      if ( !lv )
        goto LABEL_212;
      UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
    }
    goto LABEL_187;
  }
  if ( !item->fields.questRestrictionInfo )
    goto LABEL_168;
  if ( ServantEntity__checkIsHeroineSvt(servantEntity, 0LL) )
  {
    lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !lv )
      goto LABEL_212;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)lv,
                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(SvtId, 0LL);
    if ( !MasterData_object )
      goto LABEL_212;
    lv = UserServantMaster__getHeroineData((UserServantMaster_o *)MasterData_object, (int32_t)lv, 0LL);
    if ( !item->fields.questRestrictionInfo )
      goto LABEL_212;
    v104 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_42410260(
             item->fields.questRestrictionInfo,
             (UserServantEntity_o *)lv,
             0LL);
  }
  else
  {
    questRestrictionInfo = item->fields.questRestrictionInfo;
    v111 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v111, 0LL);
    if ( !questRestrictionInfo )
      goto LABEL_212;
    v104 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount(questRestrictionInfo, (int32_t)lv, 0LL);
  }
  imageLimitCount = v104;
  v113 = v104;
  if ( (v104 & 0x80000000) != 0 )
  {
LABEL_168:
    imageLimitCount = item->fields.imageLimitCount;
    if ( (imageLimitCount & 0x80000000) != 0 )
    {
      v114 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v115 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v114, 0LL);
      svtLimitCount = item->fields.svtLimitCount;
      v117 = v115;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v113 = ImageLimitCount__GetImageLimitCount(v117, svtLimitCount, 0LL);
    }
    else
    {
      v113 = item->fields.imageLimitCount;
    }
  }
  v194 = isRarityHide;
  v118 = item->fields.svtLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v113, v118, 0LL);
  v120 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v120, 0LL);
  v122 = item->fields.svtLimitCount;
  v123 = v121;
  v124 = (ServantOverwriteStatus_o *)sub_1BC3254(ServantOverwriteStatus_TypeInfo);
  ServantOverwriteStatus___ctor_32954528(v124, v123, v122, LimitCountByDispLimit, 0LL);
  if ( !v124 )
    goto LABEL_212;
  Rarity_k__BackingField = v124->fields._Rarity_k__BackingField;
  actualRarity = v124->fields._ActualRarity_k__BackingField;
  v127 = this->fields.servantFaceIcon;
  v199 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
  v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v199, 0LL);
  v129 = item->fields.svtLimitCount;
  v130 = v128;
  lv = (void *)PartyOrganizationListViewItem__get_Level(item, 0LL);
  if ( !v127 )
    goto LABEL_212;
  ServantFaceIconComponent__SetIcon(
    v127,
    v130,
    Rarity_k__BackingField,
    v129,
    imageLimitCount,
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
    0LL,
    actualRarity,
    item->fields._IsGrandServant_k__BackingField,
    0LL);
  v131 = (UnityEngine_Object_o *)this->fields.supportSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  isRarityHide = v194;
  if ( UnityEngine_Object__op_Inequality(v131, 0LL, 0LL) )
  {
    lv = this->fields.supportSprite;
    if ( !lv )
      goto LABEL_212;
    UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
  }
  v99 = 0LL;
LABEL_187:
  v93 = 0LL;
  if ( !isAdjustPosY )
    goto LABEL_193;
LABEL_188:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_212;
  if ( !ServantFaceIconComponent__IsUseEquip((ServantFaceIconComponent_o *)lv, 0LL) )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_212;
    ServantFaceIconComponent__AdjustRaritySpritePosY((ServantFaceIconComponent_o *)lv, -55.0, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_212;
    ServantFaceIconComponent__AdjustDispLimitCountSpritePosY((ServantFaceIconComponent_o *)lv, -34.0, 0LL);
  }
LABEL_193:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_212;
  ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)lv, !isRarityHide, 0LL);
  if ( item->fields._IsNotSupportSingle_k__BackingField || !item->fields._IsDataLost_k__BackingField )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_212;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 1, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_212;
    v132 = 1;
  }
  else
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_212;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 0, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_212;
    v132 = 0;
  }
  ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)lv, v132, 0LL);
  commandLabelList = this->fields.commandLabelList;
  if ( !commandLabelList )
    goto LABEL_212;
  v135 = 0LL;
  v136 = (_DWORD)v93 + 32;
  while ( 1 )
  {
    max_length = commandLabelList->max_length;
    if ( (int)v135 >= max_length )
      break;
    if ( (unsigned int)v135 >= max_length )
      goto LABEL_326;
    v138 = commandLabelList->m_Items[v135];
    if ( v93 )
    {
      if ( (unsigned int)v135 >= v93->max_length )
LABEL_326:
        sub_1BC326C(lv, v61, v133);
      lv = System_Int32__ToString(v136, 0LL);
      v61 = (PartyOrganizationRootComponent_c *)lv;
      if ( !v138 )
        goto LABEL_212;
    }
    else
    {
      v61 = (PartyOrganizationRootComponent_c *)StringLiteral_1/*""*/;
      if ( !v138 )
        goto LABEL_212;
    }
    UILabel__set_text(v138, (System_String_o *)v61, 0LL);
    commandLabelList = this->fields.commandLabelList;
    ++v135;
    v136 += 4;
    if ( !commandLabelList )
      goto LABEL_212;
  }
  lv = this->fields.baseSprite;
  if ( !lv )
    goto LABEL_212;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 0, 0LL);
  if ( v99 )
  {
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_212;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 1, 0LL);
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_212;
    UISprite__set_spriteName((UISprite_o *)lv, v99, 0LL);
  }
  memberTypeBaseSprite = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(memberTypeBaseSprite, 0LL, 0LL) )
  {
    index = item->fields.index;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    lv = this->fields.memberTypeBaseSprite;
    if ( !lv )
      goto LABEL_212;
    v141 = (System_String_o **)(index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax
                              ? &StringLiteral_19435/*"formation_txtbg_03"*/
                              : &StringLiteral_19434/*"formation_txtbg_02"*/);
    UISprite__set_spriteName((UISprite_o *)lv, *v141, 0LL);
    memberTypeSprite = this->fields.memberTypeSprite;
    v197 = item->fields.index + 1;
    v143 = System_Int32__ToString((int32_t)&v197, 0LL);
    lv = System_String__Concat_62348648((System_String_o *)StringLiteral_21320/*"member_txt_"*/, v143, 0LL);
    if ( !memberTypeSprite )
      goto LABEL_212;
    UISprite__set_spriteName(memberTypeSprite, (System_String_o *)lv, 0LL);
    lv = this->fields.memberTypeSprite;
    if ( !lv )
      goto LABEL_212;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
    goto LABEL_274;
  if ( PartyOrganizationListViewItem__get_IsLeave(item, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v145 = &StringLiteral_11424/*"SELECT_NO_SORTIE"*/;
LABEL_237:
    v146 = LocalizationManager__Get((System_String_o *)*v145, 0LL);
    r = 0.0;
    g = 0.0;
    b = 0.0;
    a = 1.0;
    v152 = this;
    v153 = 0LL;
LABEL_238:
    PartyOrganizationConfirmItemDraw__SetMaskMessage(v152, v146, *(UnityEngine_Color_o *)&r, 0, v153, 0, v147);
    v154 = 1;
    goto LABEL_275;
  }
  if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, 0LL)
    && !PartyOrganizationListViewItem__get_IsEmpty(item, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v164 = LocalizationManager__Get((System_String_o *)StringLiteral_10176/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    goto LABEL_251;
  }
  if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v157 = &StringLiteral_10177/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_246:
    v158 = LocalizationManager__Get((System_String_o *)*v157, 0LL);
    v160 = 0.0;
    v161 = 0.0;
    v162 = this;
    v163 = 0;
LABEL_247:
    v154 = 1;
    PartyOrganizationConfirmItemDraw__SetWarningMessage(v162, v158, 1, v163, v160, v161, v159);
    goto LABEL_275;
  }
  if ( item->fields.isFixedSupportPositionRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v157 = &StringLiteral_10178/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/;
    goto LABEL_246;
  }
  if ( item->fields.isFixedServantPositionRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v157 = &StringLiteral_10179/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
    goto LABEL_246;
  }
  fatigureTime = item->fields.fatigureTime;
  if ( (fatigureTime & 0x8000000000000000LL) == 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( fatigureTime > NetworkManager__getTime(0LL) )
    {
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_404/*"#042484"*/, &color, 0LL);
      color.fields.a = 0.69804;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v174 = LocalizationManager__Get((System_String_o *)StringLiteral_11430/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, 0LL);
      r = color.fields.r;
      g = color.fields.g;
      b = color.fields.b;
      a = color.fields.a;
      v146 = v174;
      v152 = this;
      v153 = (System_String_o *)StringLiteral_20201/*"img_frames_mask11"*/;
      goto LABEL_238;
    }
    PartyOrganizationListViewItem__ClearFatigure(item, 0LL);
    goto LABEL_273;
  }
  if ( item->fields._IsAllOutBattle_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v145 = &StringLiteral_11425/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
    goto LABEL_237;
  }
  if ( item->fields._IsNotSupportSingle_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v158 = LocalizationManager__Get((System_String_o *)StringLiteral_10180/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
    v160 = 10.0;
    v161 = -22.0;
    v163 = 1;
    v162 = this;
    goto LABEL_247;
  }
  if ( item->fields._IsDataLost_k__BackingField )
  {
    v165 = (System_String_o *)StringLiteral_1/*""*/;
    v166 = 1.0;
    v167 = 1.0;
    v168 = 1.0;
    v171 = (System_String_o *)StringLiteral_18312/*"datalost_svt_select"*/;
    v169 = 1.0;
    v172 = 1;
    v170 = this;
    goto LABEL_252;
  }
  if ( item->fields._TimesToRestart_k__BackingField >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v187 = LocalizationManager__Get((System_String_o *)StringLiteral_11431/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
    TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
    v191 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v188, v189, v190);
    v164 = System_String__Format(v187, v191, 0LL);
LABEL_251:
    v165 = v164;
    v166 = 0.0;
    v167 = 0.0;
    v168 = 0.0;
    v169 = 1.0;
    v170 = this;
    v171 = 0LL;
    v172 = 0;
LABEL_252:
    v154 = 1;
    PartyOrganizationConfirmItemDraw__SetMaskMessage(v170, v165, *(UnityEngine_Color_o *)&v166, 1, v171, v172, v156);
    goto LABEL_275;
  }
LABEL_273:
  PartyOrganizationConfirmItemDraw__ClearMessage(this, v155);
LABEL_274:
  v154 = 0;
LABEL_275:
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
    return;
  if ( !item->fields.isFollower )
  {
    v181 = item->fields.userServantEntity;
    if ( v181 )
    {
      SvtClassId = UserServantEntity__getSvtClassId(v181, 0, 0, 0LL);
    }
    else
    {
      v176 = item->fields.servantEntity;
      if ( !v176 )
        goto LABEL_293;
      SvtClassId = v176[20];
    }
    LODWORD(v176) = 0;
    goto LABEL_294;
  }
  v176 = item->fields.followerInfo;
  if ( !v176 )
  {
LABEL_293:
    SvtClassId = 0;
    goto LABEL_294;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_212;
  v177 = DataManager__GetMasterData_object_(
           (DataManager_o *)lv,
           (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
  if ( !lv )
    goto LABEL_212;
  v179 = *((_QWORD *)lv + 6);
  v178 = *((_QWORD *)lv + 7);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v200.fields.currentCryptoKey = v179;
  *(_QWORD *)&v200.fields.fakeValue = v178;
  lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v200, 0LL);
  if ( !v177 )
    goto LABEL_212;
  lv = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v177,
         (int32_t)lv,
         (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !lv )
    goto LABEL_212;
  SvtClassId = *((_DWORD *)lv + 20);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
  if ( !lv )
    goto LABEL_212;
  LODWORD(v176) = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)lv, 0LL);
LABEL_294:
  if ( (unsigned int)v176 | v154 | (SvtClassId == 0) )
  {
    lv = this->fields.classCompatibilityIcon;
    if ( !lv )
      goto LABEL_212;
    goto LABEL_314;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_212;
  lv = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)lv, 40, 0LL);
  if ( ((unsigned __int8)lv & 1) == 0 )
    goto LABEL_311;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_212;
  lv = (void *)*((_QWORD *)lv + 4);
  if ( !lv )
    goto LABEL_212;
  v61 = PartyOrganizationRootComponent_TypeInfo;
  methodPtr_low = LOBYTE(PartyOrganizationRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)lv + 304LL) < (unsigned int)methodPtr_low
    || *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)lv + 200LL) + 8 * methodPtr_low - 8) != PartyOrganizationRootComponent_TypeInfo )
  {
    v192 = (PartyOrganizationCommandCardMenu_o *)sub_1BC3524(lv);
    PartyOrganizationCommandCardMenu__EndOpen(v192, v193);
    return;
  }
  v183 = *((_QWORD *)lv + 64);
  if ( !v183
    || (lv = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)lv + 64), 0LL), !(_DWORD)lv)
    || (v184 = *(_DWORD *)(v183 + 24)) == 0 )
  {
LABEL_311:
    v186 = this->fields.classCompatibilityIcon;
    goto LABEL_312;
  }
  v185 = (int)lv;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_212;
  lv = DataManager__GetMasterData_object_(
         (DataManager_o *)lv,
         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !lv )
    goto LABEL_212;
  lv = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)lv, v185, v184, 0LL);
  v186 = this->fields.classCompatibilityIcon;
  if ( !lv )
  {
LABEL_312:
    if ( !v186 )
      goto LABEL_212;
    lv = v186;
LABEL_314:
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)lv, 0LL);
    return;
  }
  if ( !v186 )
    goto LABEL_212;
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x24
  __int64 v22; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v24; // x24
  UIWidget_o *v25; // x22
  int32_t *p_DATA_LOST_MASK_HEIGHT; // x8
  System_String_o *v27; // x1
  float v28; // s0
  float v29; // s8
  UnityEngine_Transform_o *v30; // x20
  float restrictionMaskMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v35; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = maskColor.fields.a;
  b = maskColor.fields.b;
  g = maskColor.fields.g;
  r = maskColor.fields.r;
  if ( (byte_4AFDACF & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, message);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v16);
    sub_1BC3008(&PartyOrganizationConfirmItemDraw_TypeInfo, v17);
    sub_1BC3008(&StringLiteral_18312/*"datalost_svt_select"*/, v18);
    sub_1BC3008(&StringLiteral_20197/*"img_frames_mask03"*/, v19);
    sub_1BC3008(&StringLiteral_1/*""*/, v20);
    byte_4AFDACF = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_46;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v24 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v24, (System_String_o *)StringLiteral_18312/*"datalost_svt_select"*/, 0LL);
      v25 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)PartyOrganizationConfirmItemDraw_TypeInfo;
      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
      if ( !v25 )
        goto LABEL_46;
      p_DATA_LOST_MASK_HEIGHT = &PartyOrganizationConfirmItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT;
    }
    else
    {
      if ( !v24 )
        goto LABEL_46;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_46;
      v27 = maskName ? maskName : (System_String_o *)StringLiteral_20197/*"img_frames_mask03"*/;
      UISprite__set_spriteName((UISprite_o *)gameObject, v27, 0LL);
      v25 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( !v25 )
        goto LABEL_46;
      p_DATA_LOST_MASK_HEIGHT = &this->fields.maskSpriteDefaultHeight;
    }
    UIWidget__set_height(v25, *p_DATA_LOST_MASK_HEIGHT, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_46;
    v38.fields.r = r;
    v38.fields.g = g;
    v38.fields.b = b;
    v38.fields.a = a;
    UIWidget__set_color((UIWidget_o *)gameObject, v38, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_46;
    if ( isScale )
    {
      LODWORD(v28) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_46;
      v29 = v28;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v30 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v29 <= restrictionMaskMessageWidth )
      {
        if ( !byte_4AFBDB6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v22);
          byte_4AFBDB6 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        x = static_fields->oneVector.fields.x;
        y = static_fields->oneVector.fields.y;
        z = static_fields->oneVector.fields.z;
      }
      else
      {
        x = restrictionMaskMessageWidth / v29;
        z = 1.0;
        y = 1.0;
      }
      if ( !v30 )
        goto LABEL_46;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v30 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4AFBDB6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v22);
        byte_4AFBDB6 = 1;
      }
      if ( !v30 )
        goto LABEL_46;
      v35 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v35->oneVector.fields.y;
      z = v35->oneVector.fields.z;
      x = v35->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v30, *(UnityEngine_Vector3_o *)&x, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1BC3264(gameObject, v22);
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
  System_Collections_Generic_List_object__o *v10; // x29
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x22
  int32_t size; // w28
  il2cpp_array_size_t v19; // w23
  bool v20; // w26
  il2cpp_array_size_t v21; // w24
  Il2CppClass **v22; // x19
  PartyOrganizationConfirmItemDraw_o **v23; // x19
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v24; // t1
  __int64 v25; // x2
  struct PartyOrganizationListViewItem_array *items; // x8
  int32_t v27; // w25
  struct PartyOrganizationListViewItem_array *v28; // x8
  Il2CppObject *Master_object; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  bool IsHideRarity; // w27
  int32_t v32; // w25
  PartyOrganizationConfirmItemDraw_o *v33; // x26
  const MethodInfo *v34; // x7
  PartyOrganizationConfirmItemDraw_c *v36; // x0
  UnityEngine_GameObject_o *self; // [xsp+8h] [xbp-88h]
  __int64 v38; // [xsp+10h] [xbp-80h]
  bool v39; // [xsp+1Ch] [xbp-74h]
  bool v40; // [xsp+20h] [xbp-70h]
  int32_t questPhase; // [xsp+24h] [xbp-6Ch]
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+28h] [xbp-68h] BYREF

  v10 = (System_Collections_Generic_List_object__o *)itemList;
  if ( (byte_4AFDAD1 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_NpcFollowerMaster___, supportMemberObjectList);
    sub_1BC3008(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v11);
    sub_1BC3008(&DataManager_TypeInfo, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Count__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__, v14);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)sub_1BC3008(
                                                                                     &PartyOrganizationConfirmItemDraw_TypeInfo,
                                                                                     v16);
    byte_4AFDAD1 = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( !v10 || (self = supportMemberBase, !supportMemberObjectList) )
LABEL_44:
    sub_1BC3264(itemList, supportMemberObjectList);
  v17 = *(_QWORD *)&supportMemberObjectList->max_length;
  size = v10->fields._size;
  if ( (int)v17 >= 1 )
  {
    v19 = 1;
    v20 = size > 0;
    v39 = isSimpleDisp;
    v40 = isAdjustPosY;
    v38 = *(_QWORD *)&supportMemberObjectList->max_length;
    while ( 1 )
    {
      v21 = v19 - 1;
      v22 = &supportMemberObjectList->obj.klass + (int)(v19 - 1);
      v24 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v22[4];
      v23 = (PartyOrganizationConfirmItemDraw_o **)(v22 + 4);
      itemList = v24;
      if ( !v24 )
        goto LABEL_44;
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)itemList,
                                                                                       0LL);
      if ( !itemList )
        goto LABEL_44;
      if ( !v20 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
        goto LABEL_36;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 1, 0LL);
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       v10,
                                                                                       v21,
                                                                                       (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_44;
      if ( itemList[4].fields._items )
      {
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v21,
                                                                                         (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_44;
        items = itemList[4].fields._items;
        if ( !items )
          goto LABEL_44;
        v27 = HIDWORD(items->m_Items[0]);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v21,
                                                                                         (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_44;
        v28 = itemList[4].fields._items;
        if ( !v28 )
          goto LABEL_44;
        questPhase = (int32_t)v28->m_Items[1];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v21,
                                                                                         (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_44;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)itemList, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                                                         SvtId,
                                                                                         0LL);
        if ( !Master_object )
          goto LABEL_44;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                                                         (NpcServantFollowerMaster_o *)Master_object,
                                                                                         &npcServantFollowerEntity,
                                                                                         v27,
                                                                                         questPhase,
                                                                                         (int32_t)itemList,
                                                                                         0LL);
        if ( ((unsigned __int8)itemList & 1) != 0 )
        {
          LODWORD(v17) = v38;
          if ( !npcServantFollowerEntity )
            goto LABEL_44;
          IsHideRarity = NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
          if ( !npcServantFollowerEntity || !itemList )
            goto LABEL_44;
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerMaster__GetEntity_41327720(
                                                                                           (NpcFollowerMaster_o *)itemList,
                                                                                           v27,
                                                                                           questPhase,
                                                                                           npcServantFollowerEntity->fields.id,
                                                                                           0LL);
          if ( itemList )
          {
            itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerEntity__GetImageSvtId(
                                                                                             (NpcFollowerEntity_o *)itemList,
                                                                                             0LL);
            v32 = (int)itemList;
          }
          else
          {
            v32 = 0;
          }
          goto LABEL_33;
        }
        LODWORD(v17) = v38;
      }
      v32 = 0;
      IsHideRarity = 0;
LABEL_33:
      if ( v21 >= supportMemberObjectList->max_length )
        goto LABEL_45;
      v33 = *v23;
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       v10,
                                                                                       v21,
                                                                                       (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
      if ( !v33 )
        goto LABEL_44;
      PartyOrganizationConfirmItemDraw__SetItem(
        v33,
        (PartyOrganizationListViewItem_o *)itemList,
        2,
        v40,
        IsHideRarity,
        v32,
        v39,
        v34);
LABEL_36:
      if ( (_DWORD)v17 == v19 )
        break;
      v20 = (int)v19 < size;
      if ( v19++ >= supportMemberObjectList->max_length )
LABEL_45:
        sub_1BC326C(itemList, supportMemberObjectList, v25);
    }
  }
  v36 = PartyOrganizationConfirmItemDraw_TypeInfo;
  if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
    v36 = PartyOrganizationConfirmItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(self, (float)(v36->static_fields->ICON_OFFSET_SIZE * (1 - size)), 0LL);
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
  __int64 v16; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  float v21; // s0
  float v22; // s8
  int32_t restrictionWarningMessageWidth; // s0
  UnityEngine_Transform_o *v24; // x19
  float v25; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v29; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4AFDAD0 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, message);
    sub_1BC3008(&StringLiteral_20197/*"img_frames_mask03"*/, v13);
    sub_1BC3008(&StringLiteral_1/*""*/, v14);
    byte_4AFDAD0 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20197/*"img_frames_mask03"*/, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_39;
      v31.fields.r = 0.0;
      v31.fields.g = 0.0;
      v31.fields.b = 0.0;
      v31.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, v31, 0LL);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v19 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v19, iconPosY, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
          if ( gameObject )
          {
            v20 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
            GameObjectExtensions__SetLocalPositionY(v20, msgPosY, 0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
              gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
              if ( gameObject )
              {
                if ( isScale )
                {
                  LODWORD(v21) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
                  gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
                  if ( gameObject )
                  {
                    v22 = v21;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                    restrictionWarningMessageWidth = this->fields.restrictionWarningMessageWidth;
                    v24 = (UnityEngine_Transform_o *)gameObject;
                    v25 = (float)restrictionWarningMessageWidth;
                    if ( v22 <= v25 )
                    {
                      if ( !byte_4AFBDB6 )
                      {
                        gameObject = (UnityEngine_Component_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v16);
                        byte_4AFBDB6 = 1;
                      }
                      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                      x = static_fields->oneVector.fields.x;
                      y = static_fields->oneVector.fields.y;
                      z = static_fields->oneVector.fields.z;
                    }
                    else
                    {
                      x = v25 / v22;
                      z = 1.0;
                      y = 1.0;
                    }
                    if ( v24 )
                      goto LABEL_38;
                  }
                }
                else
                {
                  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                  v24 = (UnityEngine_Transform_o *)gameObject;
                  if ( !byte_4AFBDB6 )
                  {
                    gameObject = (UnityEngine_Component_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v16);
                    byte_4AFBDB6 = 1;
                  }
                  if ( v24 )
                  {
                    v29 = UnityEngine_Vector3_TypeInfo->static_fields;
                    y = v29->oneVector.fields.y;
                    z = v29->oneVector.fields.z;
                    x = v29->oneVector.fields.x;
LABEL_38:
                    UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&x, 0LL);
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
    sub_1BC3264(gameObject, v16);
  }
}