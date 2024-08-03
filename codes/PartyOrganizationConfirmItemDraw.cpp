void __fastcall PartyOrganizationConfirmItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F8372 & 1) == 0 )
  {
    sub_1B640C8(&PartyOrganizationConfirmItemDraw_TypeInfo, v1);
    byte_49F8372 = 1;
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
  UIWidget_o *restrictionMaskMessageText; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct UISprite_o *v7; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v9; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_49F836C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F836C = 1;
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
    v7 = this->fields.restrictionMaskSprite;
    if ( !v7 )
      goto LABEL_16;
    mAtlas = v7->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.maskSpriteDefaultAtlas, (int32_t)mAtlas, v5, v6);
    v9 = this->fields.restrictionMaskSprite;
    if ( !v9 )
      goto LABEL_16;
    this->fields.maskSpriteDefaultHeight = v9->fields.mHeight;
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
    sub_1B64324(restrictionMaskMessageText);
  }
}


void __fastcall PartyOrganizationConfirmItemDraw__ClearMessage(
        PartyOrganizationConfirmItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_49F836E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49F836E = 1;
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
    sub_1B64324(gameObject);
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
  UnityEngine_Object_o *maskServantObj; // x25
  void *lv; // x0
  UnityEngine_Object_o *maskServantLabel; // x25
  UnityEngine_Object_o *maskEquipObj; // x25
  UnityEngine_Object_o *maskEquipLabel; // x25
  const MethodInfo *v63; // x1
  ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct FollowerInfo_o *followerInfo; // x8
  UnityEngine_Object_o *typeSprite; // x24
  const MethodInfo *v67; // x1
  struct FollowerInfo_o *v68; // x8
  int32_t type; // w8
  __int64 *v70; // x8
  UnityEngine_Object_o *v71; // x23
  const MethodInfo *v72; // x1
  UserServantEntity_o *userServantEntity; // x23
  ServantFaceIconComponent_o *v74; // x24
  const MethodInfo *v75; // x1
  UnityEngine_Object_o *v76; // x23
  UnityEngine_Object_o *v77; // x23
  UILabel_o *v78; // x23
  Il2CppObject *Master_object; // x23
  int64_t UserId; // x24
  const MethodInfo *v81; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  __int64 v83; // x2
  ServantFaceIconComponent_o *v84; // x23
  UserServantCollectionEntity_o *v85; // x25
  UserServantEntity_o *v86; // x24
  UnityEngine_Object_o *v87; // x23
  UnityEngine_Object_o *maskEquipSprite; // x23
  UISprite_o *v89; // x23
  UnityEngine_Object_o *v90; // x23
  UILabel_o *v91; // x23
  System_Int32_array *v92; // x0
  UnityEngine_Object_o *v93; // x23
  System_Int32_array *v94; // x24
  UISprite_o *v95; // x0
  System_String_o *v96; // x1
  UnityEngine_Object_o *v97; // x23
  UnityEngine_Object_c *v98; // x0
  __int64 *v99; // x8
  System_String_o *v100; // x23
  UnityEngine_Object_o *v101; // x24
  ServantEntity_o *servantEntity; // x0
  const MethodInfo *v103; // x1
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v105; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v107; // w0
  System_Int32_array *CommandCardList; // x0
  UnityEngine_Object_o *supportSprite; // x25
  System_String_o *v110; // x1
  UnityEngine_Object_o *v111; // x23
  UnityEngine_Object_o *v112; // x23
  int32_t v113; // w23
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // kr20_16
  ServantFaceIconComponent_o *v116; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // kr30_16
  int32_t v118; // w0
  int32_t svtLimitCount; // w26
  int32_t v120; // w27
  const MethodInfo *v121; // x1
  UnityEngine_Object_o *v122; // x23
  bool v123; // w1
  __int64 v124; // x1
  struct UILabel_array *commandLabelList; // x8
  __int64 v126; // x26
  int32_t v127; // w21
  int max_length; // w9
  UILabel_o *v129; // x22
  System_String_o *v130; // x1
  UnityEngine_Object_o *memberTypeBaseSprite; // x21
  int32_t index; // w21
  System_String_o **v133; // x8
  UISprite_o *memberTypeSprite; // x21
  System_String_o *v135; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  const MethodInfo *v137; // x1
  UserServantEntity_o *v138; // x0
  __int64 *v139; // x8
  System_String_o *v140; // x1
  const MethodInfo *v141; // x5
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  PartyOrganizationConfirmItemDraw_o *v146; // x0
  System_String_o *v147; // x3
  int v148; // w24
  const MethodInfo *v149; // x1
  const MethodInfo *v150; // x5
  System_String_o *v151; // x0
  System_String_o *v152; // x1
  float v153; // s0
  float v154; // s1
  float v155; // s2
  float v156; // s3
  PartyOrganizationConfirmItemDraw_o *v157; // x0
  System_String_o *v158; // x3
  bool v159; // w4
  __int64 *v160; // x8
  System_String_o *v161; // x1
  const MethodInfo *v162; // x4
  float v163; // s0
  float v164; // s1
  PartyOrganizationConfirmItemDraw_o *v165; // x0
  bool v166; // w3
  int64_t fatigureTime; // x21
  System_String_o *v168; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  _DWORD *v170; // x8
  Il2CppObject *v171; // x21
  const MethodInfo *v172; // x1
  __int64 v173; // x22
  __int64 v174; // x23
  const MethodInfo *v175; // x1
  int32_t SvtClassId; // w21
  UserServantEntity_o *v177; // x0
  __int64 methodPtr_low; // x9
  __int64 v179; // x22
  int32_t v180; // w22
  int32_t v181; // w20
  struct ServantClassCompatibilityIconComponent_o *v182; // x8
  System_String_o *v183; // x21
  Il2CppObject *v184; // x0
  PartyOrganizationCommandCardMenu_o *v185; // x0
  const MethodInfo *v186; // x1
  int32_t TimesToRestart_k__BackingField; // [xsp+44h] [xbp-7Ch] BYREF
  UnityEngine_Color_o color; // [xsp+48h] [xbp-78h] BYREF
  int v189; // [xsp+5Ch] [xbp-64h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v191; // 0:x0.16

  if ( (byte_49F836D & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&BalanceConfig_TypeInfo, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v19);
    sub_1B640C8(&DataManager_TypeInfo, v20);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B640C8(&int_TypeInfo, v22);
    sub_1B640C8(&LocalizationManager_TypeInfo, v23);
    sub_1B640C8(&NetworkManager_TypeInfo, v24);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v25);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_1B640C8(&PartyOrganizationRootComponent_TypeInfo, v27);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v28);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1B640C8(&string_TypeInfo, v30);
    sub_1B640C8(&UserServantEntity_TypeInfo, v31);
    sub_1B640C8(&StringLiteral_20111/*"icon_support_02"*/, v32);
    sub_1B640C8(&StringLiteral_15439/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, v33);
    sub_1B640C8(&StringLiteral_10234/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/, v34);
    sub_1B640C8(&StringLiteral_10237/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v35);
    sub_1B640C8(&StringLiteral_11458/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, v36);
    sub_1B640C8(&StringLiteral_11459/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v37);
    sub_1B640C8(&StringLiteral_11453/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v38);
    sub_1B640C8(&StringLiteral_20232/*"img_frames_mask11"*/, v39);
    sub_1B640C8(&StringLiteral_10233/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v40);
    sub_1B640C8(&StringLiteral_21304/*"member_txt_"*/, v41);
    sub_1B640C8(&StringLiteral_11452/*"SELECT_NO_SORTIE"*/, v42);
    sub_1B640C8(&StringLiteral_20110/*"icon_support_01"*/, v43);
    sub_1B640C8(&StringLiteral_20071/*"icon_eventjoin_02"*/, v44);
    sub_1B640C8(&StringLiteral_19507/*"formation_txtbg_03"*/, v45);
    sub_1B640C8(&StringLiteral_15437/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v46);
    sub_1B640C8(&StringLiteral_19476/*"formation_blank_small"*/, v47);
    sub_1B640C8(&StringLiteral_20235/*"img_frames_mask14"*/, v48);
    sub_1B640C8(&StringLiteral_18405/*"datalost_svt_select"*/, v49);
    sub_1B640C8(&StringLiteral_439/*"#042484"*/, v50);
    sub_1B640C8(&StringLiteral_19504/*"formation_support_small"*/, v51);
    sub_1B640C8(&StringLiteral_19506/*"formation_txtbg_02"*/, v52);
    sub_1B640C8(&StringLiteral_1/*""*/, v53);
    sub_1B640C8(&StringLiteral_10235/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/, v54);
    sub_1B640C8(&StringLiteral_20073/*"icon_friend"*/, v55);
    sub_1B640C8(&StringLiteral_10236/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/, v56);
    sub_1B640C8(&StringLiteral_20072/*"icon_follow"*/, v57);
    byte_49F836D = 1;
  }
  entity = 0LL;
  v189 = 0;
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
      goto LABEL_199;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  maskServantLabel = (UnityEngine_Object_o *)this->fields.maskServantLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskServantLabel, 0LL, 0LL) )
  {
    lv = this->fields.maskServantLabel;
    if ( !lv )
      goto LABEL_199;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0LL);
  }
  maskEquipObj = (UnityEngine_Object_o *)this->fields.maskEquipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskEquipObj, 0LL, 0LL) )
  {
    lv = this->fields.maskEquipObj;
    if ( !lv )
      goto LABEL_199;
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
      goto LABEL_199;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0LL);
  }
  if ( item->fields.isFollower )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( item->fields.followerInfo )
    {
      lv = PartyOrganizationListViewItem__get_ServantLeader(item, v63);
      followerInfo = item->fields.followerInfo;
      if ( !followerInfo || !servantFaceIcon )
        goto LABEL_199;
      ServantFaceIconComponent__Set_37909296(
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
        v68 = item->fields.followerInfo;
        if ( !v68 )
          goto LABEL_199;
        type = v68->fields.type;
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
          v70 = &StringLiteral_20110/*"icon_support_01"*/;
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
          v70 = &StringLiteral_20072/*"icon_follow"*/;
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
          v70 = &StringLiteral_20073/*"icon_friend"*/;
LABEL_130:
          UISprite__set_spriteName((UISprite_o *)lv, (System_String_o *)*v70, 0LL);
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
      CommandCardList = PartyOrganizationListViewItem__GetCommandCardList(item, v67);
      supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
      v94 = CommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
      {
        lv = this->fields.supportSprite;
        if ( !lv )
          goto LABEL_199;
        if ( item->fields.isFollower )
          v110 = (System_String_o *)StringLiteral_20111/*"icon_support_02"*/;
        else
          v110 = 0LL;
        UISprite__set_spriteName((UISprite_o *)lv, v110, 0LL);
      }
      if ( isSimpleDisp )
      {
        v111 = (UnityEngine_Object_o *)this->fields.typeSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v111, 0LL, 0LL) )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_199;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_199;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
        }
        v112 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v112, 0LL, 0LL) )
        {
          lv = this->fields.supportSprite;
          if ( !lv )
            goto LABEL_199;
          UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
        }
        lv = this->fields.servantFaceIcon;
        if ( !lv )
LABEL_199:
          sub_1B64324(lv);
        ServantFaceIconComponent__ClearEquip((ServantFaceIconComponent_o *)lv, 0LL);
      }
LABEL_157:
      v100 = 0LL;
      if ( !isAdjustPosY )
        goto LABEL_180;
      goto LABEL_175;
    }
    if ( !servantFaceIcon )
      goto LABEL_199;
    ServantFaceIconComponent__Clear(this->fields.servantFaceIcon, 0LL);
    v97 = (UnityEngine_Object_o *)this->fields.typeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v97, 0LL, 0LL) )
    {
      lv = this->fields.typeSprite;
      if ( !lv )
        goto LABEL_199;
      lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
      if ( !lv )
        goto LABEL_199;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
    }
    v98 = UnityEngine_Object_TypeInfo;
    v99 = &StringLiteral_19504/*"formation_support_small"*/;
    goto LABEL_104;
  }
  v71 = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
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
    v74 = this->fields.servantFaceIcon;
    lv = PartyOrganizationListViewItem__GetEquipList(item, v72);
    if ( !v74 )
      goto LABEL_199;
    ServantFaceIconComponent__Set(
      v74,
      userServantEntity,
      (System_Int64_array *)lv,
      item->fields.questRestrictionInfo,
      0LL,
      0LL,
      0LL);
    if ( item->fields._IsDisappearSvt_k__BackingField )
    {
      v76 = (UnityEngine_Object_o *)this->fields.maskServantObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
      {
        lv = this->fields.maskServantObj;
        if ( !lv )
          goto LABEL_199;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
      }
      v77 = (UnityEngine_Object_o *)this->fields.maskServantLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v77, 0LL, 0LL) )
      {
        v78 = this->fields.maskServantLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        lv = LocalizationManager__Get((System_String_o *)StringLiteral_15439/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0LL);
        if ( !v78 )
          goto LABEL_199;
        UILabel__set_text(v78, (System_String_o *)lv, 0LL);
      }
    }
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, v81);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(EquipSvtId, 0LL);
      if ( !Master_object )
        goto LABEL_199;
      if ( UserServantCollectionMaster__TryGetEntity(
             (UserServantCollectionMaster_o *)Master_object,
             &entity,
             UserId,
             (int32_t)lv,
             0LL) )
      {
        v84 = this->fields.servantFaceIcon;
        v85 = entity;
        v86 = (UserServantEntity_o *)sub_1B64314(UserServantEntity_TypeInfo, v75, v83);
        UserServantEntity___ctor_39859024(v86, v85, 0LL);
        if ( !v84 )
          goto LABEL_199;
        ServantFaceIconComponent__SetEquip(v84, v86, 0LL);
        v87 = (UnityEngine_Object_o *)this->fields.maskEquipObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v87, 0LL, 0LL) )
        {
          lv = this->fields.maskEquipObj;
          if ( !lv )
            goto LABEL_199;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
        }
        maskEquipSprite = (UnityEngine_Object_o *)this->fields.maskEquipSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(maskEquipSprite, 0LL, 0LL) )
        {
          v89 = this->fields.maskEquipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(v89, (System_String_o *)StringLiteral_20235/*"img_frames_mask14"*/, 0LL);
        }
        v90 = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v90, 0LL, 0LL) )
        {
          v91 = this->fields.maskEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          lv = LocalizationManager__Get((System_String_o *)StringLiteral_15437/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0LL);
          if ( !v91 )
            goto LABEL_199;
          UILabel__set_text(v91, (System_String_o *)lv, 0LL);
        }
      }
    }
    v92 = PartyOrganizationListViewItem__GetCommandCardList(item, v75);
    v93 = (UnityEngine_Object_o *)this->fields.supportSprite;
    v94 = v92;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v93, 0LL, 0LL) )
    {
      lv = item->fields.userServantEntity;
      if ( !lv )
        goto LABEL_199;
      lv = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)lv, 0LL);
      if ( !this->fields.supportSprite )
        goto LABEL_199;
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        v95 = this->fields.supportSprite;
        v96 = (System_String_o *)StringLiteral_20071/*"icon_eventjoin_02"*/;
      }
      else
      {
        v95 = this->fields.supportSprite;
        v96 = 0LL;
      }
      UISprite__set_spriteName(v95, v96, 0LL);
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
    v98 = UnityEngine_Object_TypeInfo;
    v99 = &StringLiteral_19476/*"formation_blank_small"*/;
LABEL_104:
    v100 = (System_String_o *)*v99;
    v101 = (UnityEngine_Object_o *)this->fields.supportSprite;
    if ( !v98->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v98);
    if ( UnityEngine_Object__op_Inequality(v101, 0LL, 0LL) )
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
      lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !lv )
        goto LABEL_199;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)lv,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, v105);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(SvtId, 0LL);
      if ( !MasterData_object )
        goto LABEL_199;
      lv = UserServantMaster__getHeroineData((UserServantMaster_o *)MasterData_object, (int32_t)lv, 0LL);
      if ( !item->fields.questRestrictionInfo )
        goto LABEL_199;
      v107 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40115904(
               item->fields.questRestrictionInfo,
               (UserServantEntity_o *)lv,
               0LL);
    }
    else
    {
      questRestrictionInfo = item->fields.questRestrictionInfo;
      v115 = PartyOrganizationListViewItem__get_SvtId(item, v103);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v115, 0LL);
      if ( !questRestrictionInfo )
        goto LABEL_199;
      v107 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount(questRestrictionInfo, (int32_t)lv, 0LL);
    }
    v113 = v107;
  }
  else
  {
    v113 = -1;
  }
  v116 = this->fields.servantFaceIcon;
  v117 = PartyOrganizationListViewItem__get_SvtId(item, v72);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v117, 0LL);
  svtLimitCount = item->fields.svtLimitCount;
  v120 = v118;
  lv = (void *)PartyOrganizationListViewItem__get_Level(item, v121);
  if ( !v116 )
    goto LABEL_199;
  ServantFaceIconComponent__Set_37902064(
    v116,
    v120,
    svtLimitCount,
    v113,
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
  v122 = (UnityEngine_Object_o *)this->fields.supportSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v122, 0LL, 0LL) )
  {
    lv = this->fields.supportSprite;
    if ( !lv )
      goto LABEL_199;
    UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
  }
  v100 = 0LL;
LABEL_174:
  v94 = 0LL;
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
    v123 = 1;
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
    v123 = 0;
  }
  ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)lv, v123, 0LL);
  commandLabelList = this->fields.commandLabelList;
  if ( !commandLabelList )
    goto LABEL_199;
  v126 = 0LL;
  v127 = (_DWORD)v94 + 32;
  while ( 1 )
  {
    max_length = commandLabelList->max_length;
    if ( (int)v126 >= max_length )
      break;
    if ( (unsigned int)v126 >= max_length )
      goto LABEL_315;
    v129 = commandLabelList->m_Items[v126];
    if ( v94 )
    {
      if ( (unsigned int)v126 >= v94->max_length )
LABEL_315:
        sub_1B6432C(lv, v124);
      lv = System_Int32__ToString(v127, 0LL);
      v130 = (System_String_o *)lv;
      if ( !v129 )
        goto LABEL_199;
    }
    else
    {
      v130 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v129 )
        goto LABEL_199;
    }
    UILabel__set_text(v129, v130, 0LL);
    commandLabelList = this->fields.commandLabelList;
    ++v126;
    v127 += 4;
    if ( !commandLabelList )
      goto LABEL_199;
  }
  lv = this->fields.baseSprite;
  if ( !lv )
    goto LABEL_199;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 0, 0LL);
  if ( v100 )
  {
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_199;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 1, 0LL);
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_199;
    UISprite__set_spriteName((UISprite_o *)lv, v100, 0LL);
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
      goto LABEL_199;
    v133 = (System_String_o **)(index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax
                              ? &StringLiteral_19507/*"formation_txtbg_03"*/
                              : &StringLiteral_19506/*"formation_txtbg_02"*/);
    UISprite__set_spriteName((UISprite_o *)lv, *v133, 0LL);
    memberTypeSprite = this->fields.memberTypeSprite;
    v189 = item->fields.index + 1;
    v135 = System_Int32__ToString((int32_t)&v189, 0LL);
    lv = System_String__Concat_61375396((System_String_o *)StringLiteral_21304/*"member_txt_"*/, v135, 0LL);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    v138 = item->fields.userServantEntity;
    if ( v138 && UserServantEntity__IsLeave(v138, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v139 = &StringLiteral_11452/*"SELECT_NO_SORTIE"*/;
LABEL_225:
      v140 = LocalizationManager__Get((System_String_o *)*v139, 0LL);
      r = 0.0;
      g = 0.0;
      b = 0.0;
      a = 1.0;
      v146 = this;
      v147 = 0LL;
LABEL_226:
      PartyOrganizationConfirmItemDraw__SetMaskMessage(v146, v140, *(UnityEngine_Color_o *)&r, 0, v147, 0, v141);
      v148 = 1;
      goto LABEL_264;
    }
    if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, v137)
      && (item->fields.userServantEntity || item->fields.isFollower) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v151 = LocalizationManager__Get((System_String_o *)StringLiteral_10233/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
LABEL_233:
      v152 = v151;
      v153 = 0.0;
      v154 = 0.0;
      v155 = 0.0;
      v156 = 1.0;
      v157 = this;
      v158 = 0LL;
      v159 = 0;
LABEL_234:
      v148 = 1;
      PartyOrganizationConfirmItemDraw__SetMaskMessage(v157, v152, *(UnityEngine_Color_o *)&v153, 1, v158, v159, v150);
      goto LABEL_264;
    }
    if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v160 = &StringLiteral_10234/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_240:
      v161 = LocalizationManager__Get((System_String_o *)*v160, 0LL);
      v163 = 0.0;
      v164 = 0.0;
      v165 = this;
      v166 = 0;
LABEL_241:
      v148 = 1;
      PartyOrganizationConfirmItemDraw__SetWarningMessage(v165, v161, 1, v166, v163, v164, v162);
      goto LABEL_264;
    }
    if ( item->fields.isFixedSupportPositionRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v160 = &StringLiteral_10235/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/;
      goto LABEL_240;
    }
    if ( item->fields.isFixedServantPositionRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v160 = &StringLiteral_10236/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
      goto LABEL_240;
    }
    fatigureTime = item->fields.fatigureTime;
    if ( (fatigureTime & 0x8000000000000000LL) != 0 )
    {
      if ( item->fields._IsAllOutBattle_k__BackingField )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v139 = &StringLiteral_11453/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
        goto LABEL_225;
      }
      if ( item->fields._IsNotSupportSingle_k__BackingField )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v161 = LocalizationManager__Get((System_String_o *)StringLiteral_10237/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
        v163 = 10.0;
        v164 = -22.0;
        v166 = 1;
        v165 = this;
        goto LABEL_241;
      }
      if ( item->fields._IsDataLost_k__BackingField )
      {
        v152 = (System_String_o *)StringLiteral_1/*""*/;
        v153 = 1.0;
        v154 = 1.0;
        v155 = 1.0;
        v158 = (System_String_o *)StringLiteral_18405/*"datalost_svt_select"*/;
        v156 = 1.0;
        v159 = 1;
        v157 = this;
        goto LABEL_234;
      }
      if ( item->fields._TimesToRestart_k__BackingField >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v183 = LocalizationManager__Get((System_String_o *)StringLiteral_11459/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
        v184 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
        v151 = System_String__Format(v183, v184, 0LL);
        goto LABEL_233;
      }
    }
    else
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( fatigureTime > NetworkManager__getTime(0LL) )
      {
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_439/*"#042484"*/, &color, 0LL);
        color.fields.a = 0.69804;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v168 = LocalizationManager__Get((System_String_o *)StringLiteral_11458/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, 0LL);
        r = color.fields.r;
        g = color.fields.g;
        b = color.fields.b;
        a = color.fields.a;
        v140 = v168;
        v146 = this;
        v147 = (System_String_o *)StringLiteral_20232/*"img_frames_mask11"*/;
        goto LABEL_226;
      }
      item->fields.fatigureTime = -1LL;
    }
    PartyOrganizationConfirmItemDraw__ClearMessage(this, v149);
  }
  v148 = 0;
LABEL_264:
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
    return;
  if ( !item->fields.isFollower )
  {
    v177 = item->fields.userServantEntity;
    if ( v177 )
    {
      SvtClassId = UserServantEntity__getSvtClassId(v177, 0, 0LL);
    }
    else
    {
      v170 = item->fields.servantEntity;
      if ( !v170 )
        goto LABEL_282;
      SvtClassId = v170[20];
    }
    LODWORD(v170) = 0;
    goto LABEL_283;
  }
  v170 = item->fields.followerInfo;
  if ( !v170 )
  {
LABEL_282:
    SvtClassId = 0;
    goto LABEL_283;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_199;
  v171 = DataManager__GetMasterData_object_(
           (DataManager_o *)lv,
           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, v172);
  if ( !lv )
    goto LABEL_199;
  v174 = *((_QWORD *)lv + 6);
  v173 = *((_QWORD *)lv + 7);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v191.fields.currentCryptoKey = v174;
  *(_QWORD *)&v191.fields.fakeValue = v173;
  lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v191, 0LL);
  if ( !v171 )
    goto LABEL_199;
  lv = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v171,
         (int32_t)lv,
         (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !lv )
    goto LABEL_199;
  SvtClassId = *((_DWORD *)lv + 20);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, v175);
  if ( !lv )
    goto LABEL_199;
  LODWORD(v170) = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)lv, 0LL);
LABEL_283:
  if ( (unsigned int)v170 | v148 | (SvtClassId == 0) )
  {
    lv = this->fields.classCompatibilityIcon;
    if ( !lv )
      goto LABEL_199;
    goto LABEL_303;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_199;
  lv = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)lv, 40, 0LL);
  if ( ((unsigned __int8)lv & 1) == 0 )
    goto LABEL_300;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_199;
  lv = (void *)*((_QWORD *)lv + 4);
  if ( !lv )
    goto LABEL_199;
  methodPtr_low = LOBYTE(PartyOrganizationRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)lv + 304LL) < (unsigned int)methodPtr_low
    || *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)lv + 200LL) + 8 * methodPtr_low - 8) != PartyOrganizationRootComponent_TypeInfo )
  {
    v185 = (PartyOrganizationCommandCardMenu_o *)sub_1B645E4(lv);
    PartyOrganizationCommandCardMenu__EndOpen(v185, v186);
    return;
  }
  v179 = *((_QWORD *)lv + 59);
  if ( !v179
    || (lv = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)lv + 59), 0LL), !(_DWORD)lv)
    || (v180 = *(_DWORD *)(v179 + 24)) == 0 )
  {
LABEL_300:
    v182 = this->fields.classCompatibilityIcon;
    goto LABEL_301;
  }
  v181 = (int)lv;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_199;
  lv = DataManager__GetMasterData_object_(
         (DataManager_o *)lv,
         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !lv )
    goto LABEL_199;
  lv = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)lv, v181, v180, 0LL);
  v182 = this->fields.classCompatibilityIcon;
  if ( !lv )
  {
LABEL_301:
    if ( !v182 )
      goto LABEL_199;
    lv = v182;
LABEL_303:
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)lv, 0LL);
    return;
  }
  if ( !v182 )
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x24
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v23; // x24
  UIWidget_o *v24; // x22
  int32_t *p_DATA_LOST_MASK_HEIGHT; // x8
  System_String_o *v26; // x1
  float v27; // s0
  float v28; // s8
  __int64 v29; // x1
  UnityEngine_Transform_o *v30; // x20
  float restrictionMaskMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  __int64 v35; // x1
  struct UnityEngine_Vector3_StaticFields *v36; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = maskColor.fields.a;
  b = maskColor.fields.b;
  g = maskColor.fields.g;
  r = maskColor.fields.r;
  if ( (byte_49F836F & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, message);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&PartyOrganizationConfirmItemDraw_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_18405/*"datalost_svt_select"*/, v18);
    sub_1B640C8(&StringLiteral_20228/*"img_frames_mask03"*/, v19);
    sub_1B640C8(&StringLiteral_1/*""*/, v20);
    byte_49F836F = 1;
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
    v23 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v23, (System_String_o *)StringLiteral_18405/*"datalost_svt_select"*/, 0LL);
      v24 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)PartyOrganizationConfirmItemDraw_TypeInfo;
      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
      if ( !v24 )
        goto LABEL_46;
      p_DATA_LOST_MASK_HEIGHT = &PartyOrganizationConfirmItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT;
    }
    else
    {
      if ( !v23 )
        goto LABEL_46;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_46;
      v26 = maskName ? maskName : (System_String_o *)StringLiteral_20228/*"img_frames_mask03"*/;
      UISprite__set_spriteName((UISprite_o *)gameObject, v26, 0LL);
      v24 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( !v24 )
        goto LABEL_46;
      p_DATA_LOST_MASK_HEIGHT = &this->fields.maskSpriteDefaultHeight;
    }
    UIWidget__set_height(v24, *p_DATA_LOST_MASK_HEIGHT, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_46;
    v39.fields.r = r;
    v39.fields.g = g;
    v39.fields.b = b;
    v39.fields.a = a;
    UIWidget__set_color((UIWidget_o *)gameObject, v39, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_46;
    if ( isScale )
    {
      LODWORD(v27) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_46;
      v28 = v27;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v30 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v28 <= restrictionMaskMessageWidth )
      {
        if ( !byte_49F7116 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v29);
          byte_49F7116 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        x = static_fields->oneVector.fields.x;
        y = static_fields->oneVector.fields.y;
        z = static_fields->oneVector.fields.z;
      }
      else
      {
        x = restrictionMaskMessageWidth / v28;
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
      if ( !byte_49F7116 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v35);
        byte_49F7116 = 1;
      }
      if ( !v30 )
        goto LABEL_46;
      v36 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v36->oneVector.fields.y;
      z = v36->oneVector.fields.z;
      x = v36->oneVector.fields.x;
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
    sub_1B64324(gameObject);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x22
  int32_t size; // w21
  il2cpp_array_size_t v19; // w23
  bool v20; // w26
  il2cpp_array_size_t v21; // w24
  Il2CppClass **v22; // x19
  PartyOrganizationConfirmItemDraw_o **v23; // x19
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v24; // t1
  __int64 v25; // x1
  _DWORD *monitor; // x8
  int32_t v27; // w25
  _DWORD *v28; // x8
  Il2CppObject *Master_object; // x27
  const MethodInfo *v30; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  bool IsHideRarity; // w27
  int32_t v33; // w25
  PartyOrganizationConfirmItemDraw_o *v34; // x26
  const MethodInfo *v35; // x7
  PartyOrganizationConfirmItemDraw_c *v37; // x0
  UnityEngine_GameObject_o *self; // [xsp+8h] [xbp-88h]
  __int64 v39; // [xsp+10h] [xbp-80h]
  bool v40; // [xsp+1Ch] [xbp-74h]
  bool v41; // [xsp+20h] [xbp-70h]
  int32_t questPhase; // [xsp+24h] [xbp-6Ch]
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+28h] [xbp-68h] BYREF

  v10 = (System_Collections_Generic_List_object__o *)itemList;
  if ( (byte_49F8371 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_NpcFollowerMaster___, supportMemberObjectList);
    sub_1B640C8(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Count__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)sub_1B640C8(
                                                                                     &PartyOrganizationConfirmItemDraw_TypeInfo,
                                                                                     v16);
    byte_49F8371 = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( !v10 )
    goto LABEL_44;
  self = supportMemberBase;
  if ( !supportMemberObjectList )
    goto LABEL_44;
  v17 = *(_QWORD *)&supportMemberObjectList->max_length;
  size = v10->fields._size;
  if ( (int)v17 >= 1 )
  {
    v19 = 1;
    v20 = size > 0;
    v40 = isSimpleDisp;
    v41 = isAdjustPosY;
    v39 = *(_QWORD *)&supportMemberObjectList->max_length;
    while ( 1 )
    {
      v21 = v19 - 1;
      v22 = &supportMemberObjectList->obj.klass + (int)(v19 - 1);
      v24 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v22[4];
      v23 = (PartyOrganizationConfirmItemDraw_o **)(v22 + 4);
      itemList = v24;
      if ( !v24 )
        break;
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)itemList,
                                                                                       0LL);
      if ( !itemList )
        break;
      if ( v20 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 1, 0LL);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v21,
                                                                                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          break;
        if ( itemList[4].monitor )
        {
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                           v10,
                                                                                           v21,
                                                                                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
          if ( !itemList )
            break;
          monitor = itemList[4].monitor;
          if ( !monitor )
            break;
          v27 = monitor[9];
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                           v10,
                                                                                           v21,
                                                                                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
          if ( !itemList )
            break;
          v28 = itemList[4].monitor;
          if ( !v28 )
            break;
          questPhase = v28[10];
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                           v10,
                                                                                           v21,
                                                                                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
          if ( !itemList )
            break;
          SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)itemList, v30);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                                           SvtId,
                                                                                           0LL);
          if ( !Master_object )
            break;
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                                                           (NpcServantFollowerMaster_o *)Master_object,
                                                                                           &npcServantFollowerEntity,
                                                                                           v27,
                                                                                           questPhase,
                                                                                           (int32_t)itemList,
                                                                                           0LL);
          if ( ((unsigned __int8)itemList & 1) != 0 )
          {
            LODWORD(v17) = v39;
            if ( !npcServantFollowerEntity )
              break;
            IsHideRarity = NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
            if ( !npcServantFollowerEntity || !itemList )
              break;
            itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerMaster__GetEntity_39109336(
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
              v33 = (int)itemList;
            }
            else
            {
              v33 = 0;
            }
          }
          else
          {
            LODWORD(v17) = v39;
            v33 = 0;
            IsHideRarity = 0;
          }
        }
        else
        {
          v33 = 0;
          IsHideRarity = 0;
        }
        if ( v21 >= supportMemberObjectList->max_length )
          goto LABEL_40;
        v34 = *v23;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v21,
                                                                                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !v34 )
          break;
        PartyOrganizationConfirmItemDraw__SetItem(
          v34,
          (PartyOrganizationListViewItem_o *)itemList,
          2,
          v41,
          IsHideRarity,
          v33,
          v40,
          v35);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
      }
      if ( (_DWORD)v17 == v19 )
        goto LABEL_41;
      v20 = (int)v19 < size;
      if ( v19++ >= supportMemberObjectList->max_length )
LABEL_40:
        sub_1B6432C(itemList, v25);
    }
LABEL_44:
    sub_1B64324(itemList);
  }
LABEL_41:
  v37 = PartyOrganizationConfirmItemDraw_TypeInfo;
  if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
    v37 = PartyOrganizationConfirmItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(self, (float)(v37->static_fields->ICON_OFFSET_SIZE * (1 - size)), 0LL);
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
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  float v20; // s0
  float v21; // s8
  __int64 v22; // x1
  int32_t restrictionWarningMessageWidth; // s0
  UnityEngine_Transform_o *v24; // x19
  float v25; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  __int64 v29; // x1
  struct UnityEngine_Vector3_StaticFields *v30; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F8370 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, message);
    sub_1B640C8(&StringLiteral_20228/*"img_frames_mask03"*/, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    byte_49F8370 = 1;
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
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20228/*"img_frames_mask03"*/, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_39;
      v32.fields.r = 0.0;
      v32.fields.g = 0.0;
      v32.fields.b = 0.0;
      v32.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, v32, 0LL);
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
          v18 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v18, iconPosY, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
          if ( gameObject )
          {
            v19 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
            GameObjectExtensions__SetLocalPositionY(v19, msgPosY, 0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
              gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
              if ( gameObject )
              {
                if ( isScale )
                {
                  LODWORD(v20) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
                  gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
                  if ( gameObject )
                  {
                    v21 = v20;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                    restrictionWarningMessageWidth = this->fields.restrictionWarningMessageWidth;
                    v24 = (UnityEngine_Transform_o *)gameObject;
                    v25 = (float)restrictionWarningMessageWidth;
                    if ( v21 <= v25 )
                    {
                      if ( !byte_49F7116 )
                      {
                        gameObject = (UnityEngine_Component_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v22);
                        byte_49F7116 = 1;
                      }
                      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                      x = static_fields->oneVector.fields.x;
                      y = static_fields->oneVector.fields.y;
                      z = static_fields->oneVector.fields.z;
                    }
                    else
                    {
                      x = v25 / v21;
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
                  if ( !byte_49F7116 )
                  {
                    gameObject = (UnityEngine_Component_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v29);
                    byte_49F7116 = 1;
                  }
                  if ( v24 )
                  {
                    v30 = UnityEngine_Vector3_TypeInfo->static_fields;
                    y = v30->oneVector.fields.y;
                    z = v30->oneVector.fields.z;
                    x = v30->oneVector.fields.x;
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
    sub_1B64324(gameObject);
  }
}