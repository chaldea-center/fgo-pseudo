void __fastcall PartyOrganizationConfirmItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BF9347 & 1) == 0 )
  {
    sub_1C2E12C(&PartyOrganizationConfirmItemDraw_TypeInfo, v1);
    byte_4BF9347 = 1;
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
  struct UISprite_o *v6; // x8
  struct UISprite_o *v7; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4BF9341 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF9341 = 1;
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
    v6 = this->fields.restrictionMaskSprite;
    if ( !v6 )
      goto LABEL_16;
    this->fields.maskSpriteDefaultAtlas = v6->fields.mAtlas;
    restrictionMaskMessageText = (UIWidget_o *)sub_1C2E0D0(&this->fields.maskSpriteDefaultAtlas);
    v7 = this->fields.restrictionMaskSprite;
    if ( !v7 )
      goto LABEL_16;
    this->fields.maskSpriteDefaultHeight = v7->fields.mHeight;
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
    sub_1C2E388(restrictionMaskMessageText, v4);
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

  if ( (byte_4BF9343 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_1/*""*/, v3);
    byte_4BF9343 = 1;
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
    sub_1C2E388(gameObject, v5);
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
  PartyOrganizationRootComponent_c *v59; // x1
  void *lv; // x0
  UnityEngine_Object_o *maskServantLabel; // x25
  UnityEngine_Object_o *maskEquipObj; // x25
  UnityEngine_Object_o *maskEquipLabel; // x25
  ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct FollowerInfo_o *followerInfo; // x8
  UnityEngine_Object_o *typeSprite; // x24
  struct FollowerInfo_o *v67; // x8
  int32_t type; // w8
  __int64 *v69; // x8
  UnityEngine_Object_o *v70; // x23
  UserServantEntity_o *userServantEntity; // x23
  ServantFaceIconComponent_o *v72; // x24
  const MethodInfo *v73; // x1
  UnityEngine_Object_o *v74; // x23
  UnityEngine_Object_o *v75; // x23
  UILabel_o *v76; // x23
  const MethodInfo *v77; // x1
  Il2CppObject *Master_object; // x23
  NetworkManager_c *v79; // x0
  int64_t userIdNumber; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  ServantFaceIconComponent_o *v82; // x23
  UserServantCollectionEntity_o *v83; // x25
  UserServantEntity_o *v84; // x24
  UnityEngine_Object_o *v85; // x23
  UnityEngine_Object_o *maskEquipSprite; // x23
  UISprite_o *v87; // x23
  UnityEngine_Object_o *v88; // x23
  UILabel_o *v89; // x23
  System_Int32_array *v90; // x0
  UnityEngine_Object_o *v91; // x23
  System_Int32_array *v92; // x24
  UISprite_o *v93; // x0
  System_String_o *v94; // x1
  UnityEngine_Object_o *v95; // x23
  UnityEngine_Object_c *v96; // x0
  __int64 *v97; // x8
  System_String_o *v98; // x23
  UnityEngine_Object_o *v99; // x24
  ServantEntity_o *servantEntity; // x0
  const MethodInfo *v101; // x1
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v103; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v105; // w0
  System_Int32_array *CommandCardList; // x0
  UnityEngine_Object_o *supportSprite; // x25
  System_String_o *v108; // x1
  UnityEngine_Object_o *v109; // x23
  UnityEngine_Object_o *v110; // x23
  int32_t v111; // w23
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // kr20_16
  ServantFaceIconComponent_o *v114; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // kr30_16
  int32_t v116; // w0
  int32_t svtLimitCount; // w26
  int32_t v118; // w27
  const MethodInfo *v119; // x1
  UnityEngine_Object_o *v120; // x23
  bool v121; // w1
  struct UILabel_array *commandLabelList; // x8
  __int64 v123; // x26
  int32_t v124; // w21
  int max_length; // w9
  UILabel_o *v126; // x22
  UnityEngine_Object_o *memberTypeBaseSprite; // x21
  int32_t index; // w21
  System_String_o **v129; // x8
  UISprite_o *memberTypeSprite; // x21
  System_String_o *v131; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  const MethodInfo *v133; // x1
  UserServantEntity_o *v134; // x0
  __int64 *v135; // x8
  System_String_o *v136; // x1
  const MethodInfo *v137; // x5
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  PartyOrganizationConfirmItemDraw_o *v142; // x0
  System_String_o *v143; // x3
  int v144; // w24
  const MethodInfo *v145; // x1
  const MethodInfo *v146; // x5
  System_String_o *v147; // x0
  System_String_o *v148; // x1
  float v149; // s0
  float v150; // s1
  float v151; // s2
  float v152; // s3
  PartyOrganizationConfirmItemDraw_o *v153; // x0
  System_String_o *v154; // x3
  bool v155; // w4
  __int64 *v156; // x8
  System_String_o *v157; // x1
  const MethodInfo *v158; // x4
  float v159; // s0
  float v160; // s1
  PartyOrganizationConfirmItemDraw_o *v161; // x0
  bool v162; // w3
  int64_t fatigureTime; // x21
  System_String_o *v164; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  _DWORD *v166; // x8
  Il2CppObject *v167; // x21
  const MethodInfo *v168; // x1
  __int64 v169; // x22
  __int64 v170; // x23
  int32_t SvtClassId; // w21
  UserServantEntity_o *v172; // x0
  __int64 methodPtr_low; // x9
  __int64 v174; // x22
  int32_t v175; // w22
  int32_t v176; // w20
  struct ServantClassCompatibilityIconComponent_o *v177; // x8
  System_String_o *v178; // x21
  __int64 v179; // x2
  __int64 v180; // x3
  __int64 v181; // x4
  Il2CppObject *v182; // x0
  PartyOrganizationCommandCardMenu_o *v183; // x0
  const MethodInfo *v184; // x1
  int32_t TimesToRestart_k__BackingField; // [xsp+54h] [xbp-7Ch] BYREF
  UnityEngine_Color_o color; // [xsp+58h] [xbp-78h] BYREF
  int v187; // [xsp+6Ch] [xbp-64h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // 0:x0.16

  if ( (byte_4BF9342 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, item);
    sub_1C2E12C(&BalanceConfig_TypeInfo, v15);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v16);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserServantMaster___, v18);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v19);
    sub_1C2E12C(&DataManager_TypeInfo, v20);
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1C2E12C(&int_TypeInfo, v22);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v23);
    sub_1C2E12C(&NetworkManager_TypeInfo, v24);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v25);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_1C2E12C(&PartyOrganizationRootComponent_TypeInfo, v27);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v28);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1C2E12C(&string_TypeInfo, v30);
    sub_1C2E12C(&UserServantEntity_TypeInfo, v31);
    sub_1C2E12C(&StringLiteral_20557/*"icon_support_02"*/, v32);
    sub_1C2E12C(&StringLiteral_15785/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, v33);
    sub_1C2E12C(&StringLiteral_10480/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/, v34);
    sub_1C2E12C(&StringLiteral_10483/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v35);
    sub_1C2E12C(&StringLiteral_11725/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, v36);
    sub_1C2E12C(&StringLiteral_11726/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v37);
    sub_1C2E12C(&StringLiteral_11720/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v38);
    sub_1C2E12C(&StringLiteral_20687/*"img_frames_mask11"*/, v39);
    sub_1C2E12C(&StringLiteral_10479/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v40);
    sub_1C2E12C(&StringLiteral_21782/*"member_txt_"*/, v41);
    sub_1C2E12C(&StringLiteral_11719/*"SELECT_NO_SORTIE"*/, v42);
    sub_1C2E12C(&StringLiteral_20556/*"icon_support_01"*/, v43);
    sub_1C2E12C(&StringLiteral_20516/*"icon_eventjoin_02"*/, v44);
    sub_1C2E12C(&StringLiteral_19938/*"formation_txtbg_03"*/, v45);
    sub_1C2E12C(&StringLiteral_15783/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v46);
    sub_1C2E12C(&StringLiteral_19907/*"formation_blank_small"*/, v47);
    sub_1C2E12C(&StringLiteral_20690/*"img_frames_mask14"*/, v48);
    sub_1C2E12C(&StringLiteral_18799/*"datalost_svt_select"*/, v49);
    sub_1C2E12C(&StringLiteral_414/*"#042484"*/, v50);
    sub_1C2E12C(&StringLiteral_19935/*"formation_support_small"*/, v51);
    sub_1C2E12C(&StringLiteral_19937/*"formation_txtbg_02"*/, v52);
    sub_1C2E12C(&StringLiteral_1/*""*/, v53);
    sub_1C2E12C(&StringLiteral_10481/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/, v54);
    sub_1C2E12C(&StringLiteral_20518/*"icon_friend"*/, v55);
    sub_1C2E12C(&StringLiteral_10482/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/, v56);
    sub_1C2E12C(&StringLiteral_20517/*"icon_follow"*/, v57);
    byte_4BF9342 = 1;
  }
  entity = 0LL;
  v187 = 0;
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
      goto LABEL_203;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  maskServantLabel = (UnityEngine_Object_o *)this->fields.maskServantLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskServantLabel, 0LL, 0LL) )
  {
    lv = this->fields.maskServantLabel;
    if ( !lv )
      goto LABEL_203;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0LL);
  }
  maskEquipObj = (UnityEngine_Object_o *)this->fields.maskEquipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskEquipObj, 0LL, 0LL) )
  {
    lv = this->fields.maskEquipObj;
    if ( !lv )
      goto LABEL_203;
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
      goto LABEL_203;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0LL);
  }
  if ( item->fields.isFollower )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( item->fields.followerInfo )
    {
      lv = PartyOrganizationListViewItem__get_ServantLeader(item, (const MethodInfo *)v59);
      followerInfo = item->fields.followerInfo;
      if ( !followerInfo || !servantFaceIcon )
        goto LABEL_203;
      ServantFaceIconComponent__Set_39539140(
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
        v67 = item->fields.followerInfo;
        if ( !v67 )
          goto LABEL_203;
        type = v67->fields.type;
        if ( (unsigned int)(type - 3) < 2 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_203;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_203;
          v69 = &StringLiteral_20556/*"icon_support_01"*/;
          goto LABEL_134;
        }
        if ( type == 5 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_203;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_203;
          v69 = &StringLiteral_20517/*"icon_follow"*/;
          goto LABEL_134;
        }
        if ( type == 1 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_203;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_203;
          v69 = &StringLiteral_20518/*"icon_friend"*/;
LABEL_134:
          UISprite__set_spriteName((UISprite_o *)lv, (System_String_o *)*v69, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_203;
          (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
          goto LABEL_139;
        }
        lv = this->fields.typeSprite;
        if ( !lv )
          goto LABEL_203;
        lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
        if ( !lv )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
      }
LABEL_139:
      CommandCardList = PartyOrganizationListViewItem__GetCommandCardList(item, (const MethodInfo *)v59);
      supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
      v92 = CommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
      {
        lv = this->fields.supportSprite;
        if ( !lv )
          goto LABEL_203;
        if ( item->fields.isFollower )
          v108 = (System_String_o *)StringLiteral_20557/*"icon_support_02"*/;
        else
          v108 = 0LL;
        UISprite__set_spriteName((UISprite_o *)lv, v108, 0LL);
      }
      if ( isSimpleDisp )
      {
        v109 = (UnityEngine_Object_o *)this->fields.typeSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v109, 0LL, 0LL) )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_203;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
        }
        v110 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v110, 0LL, 0LL) )
        {
          lv = this->fields.supportSprite;
          if ( !lv )
            goto LABEL_203;
          UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
        }
        lv = this->fields.servantFaceIcon;
        if ( !lv )
LABEL_203:
          sub_1C2E388(lv, v59);
        ServantFaceIconComponent__ClearEquip((ServantFaceIconComponent_o *)lv, 0LL);
      }
LABEL_161:
      v98 = 0LL;
      if ( !isAdjustPosY )
        goto LABEL_184;
      goto LABEL_179;
    }
    if ( !servantFaceIcon )
      goto LABEL_203;
    ServantFaceIconComponent__Clear(this->fields.servantFaceIcon, 0LL);
    v95 = (UnityEngine_Object_o *)this->fields.typeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v95, 0LL, 0LL) )
    {
      lv = this->fields.typeSprite;
      if ( !lv )
        goto LABEL_203;
      lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
      if ( !lv )
        goto LABEL_203;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
    }
    v96 = UnityEngine_Object_TypeInfo;
    v97 = &StringLiteral_19935/*"formation_support_small"*/;
    goto LABEL_108;
  }
  v70 = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
  {
    lv = this->fields.typeSprite;
    if ( !lv )
      goto LABEL_203;
    lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
    if ( !lv )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  userServantEntity = item->fields.userServantEntity;
  if ( userServantEntity )
  {
    v72 = this->fields.servantFaceIcon;
    lv = PartyOrganizationListViewItem__GetEquipList(item, (const MethodInfo *)v59);
    if ( !v72 )
      goto LABEL_203;
    ServantFaceIconComponent__Set(
      v72,
      userServantEntity,
      (System_Int64_array *)lv,
      item->fields.questRestrictionInfo,
      0LL,
      0LL,
      0LL);
    if ( item->fields._IsDisappearSvt_k__BackingField )
    {
      v74 = (UnityEngine_Object_o *)this->fields.maskServantObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v74, 0LL, 0LL) )
      {
        lv = this->fields.maskServantObj;
        if ( !lv )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
      }
      v75 = (UnityEngine_Object_o *)this->fields.maskServantLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v75, 0LL, 0LL) )
      {
        v76 = this->fields.maskServantLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        lv = LocalizationManager__Get((System_String_o *)StringLiteral_15785/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0LL);
        if ( !v76 )
          goto LABEL_203;
        UILabel__set_text(v76, (System_String_o *)lv, 0LL);
      }
    }
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BF81D5 )
      {
        sub_1C2E12C(&NetworkManager_TypeInfo, v77);
        byte_4BF81D5 = 1;
      }
      v79 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v79 = NetworkManager_TypeInfo;
      }
      userIdNumber = v79->static_fields->userIdNumber;
      EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, v77);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(EquipSvtId, 0LL);
      if ( !Master_object )
        goto LABEL_203;
      if ( UserServantCollectionMaster__TryGetEntity(
             (UserServantCollectionMaster_o *)Master_object,
             &entity,
             userIdNumber,
             (int32_t)lv,
             0LL) )
      {
        v82 = this->fields.servantFaceIcon;
        v83 = entity;
        v84 = (UserServantEntity_o *)sub_1C2E378(UserServantEntity_TypeInfo);
        UserServantEntity___ctor_41549860(v84, v83, 0LL);
        if ( !v82 )
          goto LABEL_203;
        ServantFaceIconComponent__SetEquip(v82, v84, 0LL);
        v85 = (UnityEngine_Object_o *)this->fields.maskEquipObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v85, 0LL, 0LL) )
        {
          lv = this->fields.maskEquipObj;
          if ( !lv )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
        }
        maskEquipSprite = (UnityEngine_Object_o *)this->fields.maskEquipSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(maskEquipSprite, 0LL, 0LL) )
        {
          v87 = this->fields.maskEquipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(v87, (System_String_o *)StringLiteral_20690/*"img_frames_mask14"*/, 0LL);
        }
        v88 = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v88, 0LL, 0LL) )
        {
          v89 = this->fields.maskEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          lv = LocalizationManager__Get((System_String_o *)StringLiteral_15783/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0LL);
          if ( !v89 )
            goto LABEL_203;
          UILabel__set_text(v89, (System_String_o *)lv, 0LL);
        }
      }
    }
    v90 = PartyOrganizationListViewItem__GetCommandCardList(item, v73);
    v91 = (UnityEngine_Object_o *)this->fields.supportSprite;
    v92 = v90;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v91, 0LL, 0LL) )
    {
      lv = item->fields.userServantEntity;
      if ( !lv )
        goto LABEL_203;
      lv = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)lv, 0LL);
      if ( !this->fields.supportSprite )
        goto LABEL_203;
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        v93 = this->fields.supportSprite;
        v94 = (System_String_o *)StringLiteral_20516/*"icon_eventjoin_02"*/;
      }
      else
      {
        v93 = this->fields.supportSprite;
        v94 = 0LL;
      }
      UISprite__set_spriteName(v93, v94, 0LL);
    }
    goto LABEL_161;
  }
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_203;
    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)lv, 0LL);
    v96 = UnityEngine_Object_TypeInfo;
    v97 = &StringLiteral_19907/*"formation_blank_small"*/;
LABEL_108:
    v98 = (System_String_o *)*v97;
    v99 = (UnityEngine_Object_o *)this->fields.supportSprite;
    if ( !v96->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v96);
    if ( UnityEngine_Object__op_Inequality(v99, 0LL, 0LL) )
    {
      lv = this->fields.supportSprite;
      if ( !lv )
        goto LABEL_203;
      UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
    }
    goto LABEL_178;
  }
  if ( item->fields.questRestrictionInfo )
  {
    if ( ServantEntity__checkIsHeroineSvt(servantEntity, 0LL) )
    {
      lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !lv )
        goto LABEL_203;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)lv,
                            (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserServantMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, v103);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(SvtId, 0LL);
      if ( !MasterData_object )
        goto LABEL_203;
      lv = UserServantMaster__getHeroineData((UserServantMaster_o *)MasterData_object, (int32_t)lv, 0LL);
      if ( !item->fields.questRestrictionInfo )
        goto LABEL_203;
      v105 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41818836(
               item->fields.questRestrictionInfo,
               (UserServantEntity_o *)lv,
               0LL);
    }
    else
    {
      questRestrictionInfo = item->fields.questRestrictionInfo;
      v113 = PartyOrganizationListViewItem__get_SvtId(item, v101);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v113, 0LL);
      if ( !questRestrictionInfo )
        goto LABEL_203;
      v105 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount(questRestrictionInfo, (int32_t)lv, 0LL);
    }
    v111 = v105;
  }
  else
  {
    v111 = -1;
  }
  v114 = this->fields.servantFaceIcon;
  v115 = PartyOrganizationListViewItem__get_SvtId(item, (const MethodInfo *)v59);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v115, 0LL);
  svtLimitCount = item->fields.svtLimitCount;
  v118 = v116;
  lv = (void *)PartyOrganizationListViewItem__get_Level(item, v119);
  if ( !v114 )
    goto LABEL_203;
  ServantFaceIconComponent__Set_39531668(
    v114,
    v118,
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
    (int32_t)lv,
    imageSvtId,
    0,
    0LL,
    0LL);
  v120 = (UnityEngine_Object_o *)this->fields.supportSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v120, 0LL, 0LL) )
  {
    lv = this->fields.supportSprite;
    if ( !lv )
      goto LABEL_203;
    UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
  }
  v98 = 0LL;
LABEL_178:
  v92 = 0LL;
  if ( !isAdjustPosY )
    goto LABEL_184;
LABEL_179:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_203;
  if ( !ServantFaceIconComponent__IsUseEquip((ServantFaceIconComponent_o *)lv, 0LL) )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_203;
    ServantFaceIconComponent__AdjustRaritySpritePosY((ServantFaceIconComponent_o *)lv, -55.0, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_203;
    ServantFaceIconComponent__AdjustDispLimitCountSpritePosY((ServantFaceIconComponent_o *)lv, -34.0, 0LL);
  }
LABEL_184:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_203;
  ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)lv, !isRarityHide, 0LL);
  if ( item->fields._IsNotSupportSingle_k__BackingField || !item->fields._IsDataLost_k__BackingField )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_203;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 1, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_203;
    v121 = 1;
  }
  else
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_203;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 0, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_203;
    v121 = 0;
  }
  ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)lv, v121, 0LL);
  commandLabelList = this->fields.commandLabelList;
  if ( !commandLabelList )
    goto LABEL_203;
  v123 = 0LL;
  v124 = (_DWORD)v92 + 32;
  while ( 1 )
  {
    max_length = commandLabelList->max_length;
    if ( (int)v123 >= max_length )
      break;
    if ( (unsigned int)v123 >= max_length )
      goto LABEL_319;
    v126 = commandLabelList->m_Items[v123];
    if ( v92 )
    {
      if ( (unsigned int)v123 >= v92->max_length )
LABEL_319:
        sub_1C2E390(lv, v59);
      lv = System_Int32__ToString(v124, 0LL);
      v59 = (PartyOrganizationRootComponent_c *)lv;
      if ( !v126 )
        goto LABEL_203;
    }
    else
    {
      v59 = (PartyOrganizationRootComponent_c *)StringLiteral_1/*""*/;
      if ( !v126 )
        goto LABEL_203;
    }
    UILabel__set_text(v126, (System_String_o *)v59, 0LL);
    commandLabelList = this->fields.commandLabelList;
    ++v123;
    v124 += 4;
    if ( !commandLabelList )
      goto LABEL_203;
  }
  lv = this->fields.baseSprite;
  if ( !lv )
    goto LABEL_203;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 0, 0LL);
  if ( v98 )
  {
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_203;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 1, 0LL);
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_203;
    UISprite__set_spriteName((UISprite_o *)lv, v98, 0LL);
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
      goto LABEL_203;
    v129 = (System_String_o **)(index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax
                              ? &StringLiteral_19938/*"formation_txtbg_03"*/
                              : &StringLiteral_19937/*"formation_txtbg_02"*/);
    UISprite__set_spriteName((UISprite_o *)lv, *v129, 0LL);
    memberTypeSprite = this->fields.memberTypeSprite;
    v187 = item->fields.index + 1;
    v131 = System_Int32__ToString((int32_t)&v187, 0LL);
    lv = System_String__Concat_63235584((System_String_o *)StringLiteral_21782/*"member_txt_"*/, v131, 0LL);
    if ( !memberTypeSprite )
      goto LABEL_203;
    UISprite__set_spriteName(memberTypeSprite, (System_String_o *)lv, 0LL);
    lv = this->fields.memberTypeSprite;
    if ( !lv )
      goto LABEL_203;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    v134 = item->fields.userServantEntity;
    if ( v134 && UserServantEntity__IsLeave(v134, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v135 = &StringLiteral_11719/*"SELECT_NO_SORTIE"*/;
LABEL_229:
      v136 = LocalizationManager__Get((System_String_o *)*v135, 0LL);
      r = 0.0;
      g = 0.0;
      b = 0.0;
      a = 1.0;
      v142 = this;
      v143 = 0LL;
LABEL_230:
      PartyOrganizationConfirmItemDraw__SetMaskMessage(v142, v136, *(UnityEngine_Color_o *)&r, 0, v143, 0, v137);
      v144 = 1;
      goto LABEL_268;
    }
    if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, v133)
      && (item->fields.userServantEntity || item->fields.isFollower) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v147 = LocalizationManager__Get((System_String_o *)StringLiteral_10479/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
LABEL_237:
      v148 = v147;
      v149 = 0.0;
      v150 = 0.0;
      v151 = 0.0;
      v152 = 1.0;
      v153 = this;
      v154 = 0LL;
      v155 = 0;
LABEL_238:
      v144 = 1;
      PartyOrganizationConfirmItemDraw__SetMaskMessage(v153, v148, *(UnityEngine_Color_o *)&v149, 1, v154, v155, v146);
      goto LABEL_268;
    }
    if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v156 = &StringLiteral_10480/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_244:
      v157 = LocalizationManager__Get((System_String_o *)*v156, 0LL);
      v159 = 0.0;
      v160 = 0.0;
      v161 = this;
      v162 = 0;
LABEL_245:
      v144 = 1;
      PartyOrganizationConfirmItemDraw__SetWarningMessage(v161, v157, 1, v162, v159, v160, v158);
      goto LABEL_268;
    }
    if ( item->fields.isFixedSupportPositionRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v156 = &StringLiteral_10481/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/;
      goto LABEL_244;
    }
    if ( item->fields.isFixedServantPositionRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v156 = &StringLiteral_10482/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
      goto LABEL_244;
    }
    fatigureTime = item->fields.fatigureTime;
    if ( (fatigureTime & 0x8000000000000000LL) != 0 )
    {
      if ( item->fields._IsAllOutBattle_k__BackingField )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v135 = &StringLiteral_11720/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
        goto LABEL_229;
      }
      if ( item->fields._IsNotSupportSingle_k__BackingField )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v157 = LocalizationManager__Get((System_String_o *)StringLiteral_10483/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
        v159 = 10.0;
        v160 = -22.0;
        v162 = 1;
        v161 = this;
        goto LABEL_245;
      }
      if ( item->fields._IsDataLost_k__BackingField )
      {
        v148 = (System_String_o *)StringLiteral_1/*""*/;
        v149 = 1.0;
        v150 = 1.0;
        v151 = 1.0;
        v154 = (System_String_o *)StringLiteral_18799/*"datalost_svt_select"*/;
        v152 = 1.0;
        v155 = 1;
        v153 = this;
        goto LABEL_238;
      }
      if ( item->fields._TimesToRestart_k__BackingField >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v178 = LocalizationManager__Get((System_String_o *)StringLiteral_11726/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
        v182 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v179, v180, v181);
        v147 = System_String__Format(v178, v182, 0LL);
        goto LABEL_237;
      }
    }
    else
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( fatigureTime > NetworkManager__getTime(0LL) )
      {
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_414/*"#042484"*/, &color, 0LL);
        color.fields.a = 0.69804;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v164 = LocalizationManager__Get((System_String_o *)StringLiteral_11725/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, 0LL);
        r = color.fields.r;
        g = color.fields.g;
        b = color.fields.b;
        a = color.fields.a;
        v136 = v164;
        v142 = this;
        v143 = (System_String_o *)StringLiteral_20687/*"img_frames_mask11"*/;
        goto LABEL_230;
      }
      item->fields.fatigureTime = -1LL;
    }
    PartyOrganizationConfirmItemDraw__ClearMessage(this, v145);
  }
  v144 = 0;
LABEL_268:
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
    return;
  if ( !item->fields.isFollower )
  {
    v172 = item->fields.userServantEntity;
    if ( v172 )
    {
      SvtClassId = UserServantEntity__getSvtClassId(v172, 0, 0LL);
    }
    else
    {
      v166 = item->fields.servantEntity;
      if ( !v166 )
        goto LABEL_286;
      SvtClassId = v166[20];
    }
    LODWORD(v166) = 0;
    goto LABEL_287;
  }
  v166 = item->fields.followerInfo;
  if ( !v166 )
  {
LABEL_286:
    SvtClassId = 0;
    goto LABEL_287;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_203;
  v167 = DataManager__GetMasterData_object_(
           (DataManager_o *)lv,
           (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantMaster___);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, v168);
  if ( !lv )
    goto LABEL_203;
  v170 = *((_QWORD *)lv + 6);
  v169 = *((_QWORD *)lv + 7);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v189.fields.currentCryptoKey = v170;
  *(_QWORD *)&v189.fields.fakeValue = v169;
  lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v189, 0LL);
  if ( !v167 )
    goto LABEL_203;
  lv = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v167,
         (int32_t)lv,
         (const MethodInfo_327B180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !lv )
    goto LABEL_203;
  SvtClassId = *((_DWORD *)lv + 20);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, (const MethodInfo *)v59);
  if ( !lv )
    goto LABEL_203;
  LODWORD(v166) = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)lv, 0LL);
LABEL_287:
  if ( (unsigned int)v166 | v144 | (SvtClassId == 0) )
  {
    lv = this->fields.classCompatibilityIcon;
    if ( !lv )
      goto LABEL_203;
    goto LABEL_307;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_203;
  lv = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)lv, 40, 0LL);
  if ( ((unsigned __int8)lv & 1) == 0 )
    goto LABEL_304;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_203;
  lv = (void *)*((_QWORD *)lv + 4);
  if ( !lv )
    goto LABEL_203;
  v59 = PartyOrganizationRootComponent_TypeInfo;
  methodPtr_low = LOBYTE(PartyOrganizationRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)lv + 304LL) < (unsigned int)methodPtr_low
    || *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)lv + 200LL) + 8 * methodPtr_low - 8) != PartyOrganizationRootComponent_TypeInfo )
  {
    v183 = (PartyOrganizationCommandCardMenu_o *)sub_1C2E648(lv);
    PartyOrganizationCommandCardMenu__EndOpen(v183, v184);
    return;
  }
  v174 = *((_QWORD *)lv + 62);
  if ( !v174
    || (lv = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)lv + 62), 0LL), !(_DWORD)lv)
    || (v175 = *(_DWORD *)(v174 + 24)) == 0 )
  {
LABEL_304:
    v177 = this->fields.classCompatibilityIcon;
    goto LABEL_305;
  }
  v176 = (int)lv;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_203;
  lv = DataManager__GetMasterData_object_(
         (DataManager_o *)lv,
         (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !lv )
    goto LABEL_203;
  lv = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)lv, v176, v175, 0LL);
  v177 = this->fields.classCompatibilityIcon;
  if ( !lv )
  {
LABEL_305:
    if ( !v177 )
      goto LABEL_203;
    lv = v177;
LABEL_307:
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)lv, 0LL);
    return;
  }
  if ( !v177 )
    goto LABEL_203;
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
  if ( (byte_4BF9344 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, message);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v16);
    sub_1C2E12C(&PartyOrganizationConfirmItemDraw_TypeInfo, v17);
    sub_1C2E12C(&StringLiteral_18799/*"datalost_svt_select"*/, v18);
    sub_1C2E12C(&StringLiteral_20683/*"img_frames_mask03"*/, v19);
    sub_1C2E12C(&StringLiteral_1/*""*/, v20);
    byte_4BF9344 = 1;
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
      AtlasManager__SetPartyOrganizationImage(v24, (System_String_o *)StringLiteral_18799/*"datalost_svt_select"*/, 0LL);
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
      v27 = maskName ? maskName : (System_String_o *)StringLiteral_20683/*"img_frames_mask03"*/;
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
        if ( !byte_4BF7D96 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v22);
          byte_4BF7D96 = 1;
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
      if ( !byte_4BF7D96 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v22);
        byte_4BF7D96 = 1;
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
    sub_1C2E388(gameObject, v22);
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
  _DWORD *monitor; // x8
  int32_t v26; // w25
  _DWORD *v27; // x8
  Il2CppObject *Master_object; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  bool IsHideRarity; // w27
  int32_t v31; // w25
  PartyOrganizationConfirmItemDraw_o *v32; // x26
  const MethodInfo *v33; // x7
  PartyOrganizationConfirmItemDraw_c *v35; // x0
  UnityEngine_GameObject_o *self; // [xsp+8h] [xbp-88h]
  __int64 v37; // [xsp+10h] [xbp-80h]
  bool v38; // [xsp+1Ch] [xbp-74h]
  bool v39; // [xsp+20h] [xbp-70h]
  int32_t questPhase; // [xsp+24h] [xbp-6Ch]
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+28h] [xbp-68h] BYREF

  v10 = (System_Collections_Generic_List_object__o *)itemList;
  if ( (byte_4BF9346 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_NpcFollowerMaster___, supportMemberObjectList);
    sub_1C2E12C(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v11);
    sub_1C2E12C(&DataManager_TypeInfo, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Count__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__, v14);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)sub_1C2E12C(
                                                                                     &PartyOrganizationConfirmItemDraw_TypeInfo,
                                                                                     v16);
    byte_4BF9346 = 1;
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
    v38 = isSimpleDisp;
    v39 = isAdjustPosY;
    v37 = *(_QWORD *)&supportMemberObjectList->max_length;
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
                                                                                         (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          break;
        if ( itemList[4].monitor )
        {
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                           v10,
                                                                                           v21,
                                                                                           (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
          if ( !itemList )
            break;
          monitor = itemList[4].monitor;
          if ( !monitor )
            break;
          v26 = monitor[9];
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                           v10,
                                                                                           v21,
                                                                                           (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
          if ( !itemList )
            break;
          v27 = itemList[4].monitor;
          if ( !v27 )
            break;
          questPhase = v27[10];
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                           v10,
                                                                                           v21,
                                                                                           (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
          if ( !itemList )
            break;
          SvtId = PartyOrganizationListViewItem__get_SvtId(
                    (PartyOrganizationListViewItem_o *)itemList,
                    (const MethodInfo *)supportMemberObjectList);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(
                                                                                           SvtId,
                                                                                           0LL);
          if ( !Master_object )
            break;
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                                                           (NpcServantFollowerMaster_o *)Master_object,
                                                                                           &npcServantFollowerEntity,
                                                                                           v26,
                                                                                           questPhase,
                                                                                           (int32_t)itemList,
                                                                                           0LL);
          if ( ((unsigned __int8)itemList & 1) != 0 )
          {
            LODWORD(v17) = v37;
            if ( !npcServantFollowerEntity )
              break;
            IsHideRarity = NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
            if ( !npcServantFollowerEntity || !itemList )
              break;
            itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerMaster__GetEntity_40771436(
                                                                                             (NpcFollowerMaster_o *)itemList,
                                                                                             v26,
                                                                                             questPhase,
                                                                                             npcServantFollowerEntity->fields.id,
                                                                                             0LL);
            if ( itemList )
            {
              itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerEntity__GetImageSvtId(
                                                                                               (NpcFollowerEntity_o *)itemList,
                                                                                               0LL);
              v31 = (int)itemList;
            }
            else
            {
              v31 = 0;
            }
          }
          else
          {
            LODWORD(v17) = v37;
            v31 = 0;
            IsHideRarity = 0;
          }
        }
        else
        {
          v31 = 0;
          IsHideRarity = 0;
        }
        if ( v21 >= supportMemberObjectList->max_length )
          goto LABEL_40;
        v32 = *v23;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v21,
                                                                                         (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !v32 )
          break;
        PartyOrganizationConfirmItemDraw__SetItem(
          v32,
          (PartyOrganizationListViewItem_o *)itemList,
          2,
          v39,
          IsHideRarity,
          v31,
          v38,
          v33);
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
        sub_1C2E390(itemList, supportMemberObjectList);
    }
LABEL_44:
    sub_1C2E388(itemList, supportMemberObjectList);
  }
LABEL_41:
  v35 = PartyOrganizationConfirmItemDraw_TypeInfo;
  if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
    v35 = PartyOrganizationConfirmItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(self, (float)(v35->static_fields->ICON_OFFSET_SIZE * (1 - size)), 0LL);
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

  if ( (byte_4BF9345 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, message);
    sub_1C2E12C(&StringLiteral_20683/*"img_frames_mask03"*/, v13);
    sub_1C2E12C(&StringLiteral_1/*""*/, v14);
    byte_4BF9345 = 1;
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
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20683/*"img_frames_mask03"*/, 0LL);
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
                      if ( !byte_4BF7D96 )
                      {
                        gameObject = (UnityEngine_Component_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v16);
                        byte_4BF7D96 = 1;
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
                  if ( !byte_4BF7D96 )
                  {
                    gameObject = (UnityEngine_Component_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v16);
                    byte_4BF7D96 = 1;
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
    sub_1C2E388(gameObject, v16);
  }
}