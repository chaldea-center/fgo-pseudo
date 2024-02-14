void __fastcall PartyOrganizationConfirmItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4217D42 & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationConfirmItemDraw_TypeInfo, v1);
    byte_4217D42 = 1;
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

  if ( (byte_4217D3C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217D3C = 1;
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
    sub_B0D840(
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
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( restrictionMaskMessageText )
    {
      this->fields.restrictionWarningMessageWidth = restrictionMaskMessageText->fields.mWidth;
      UIWidget__set_width(restrictionMaskMessageText, 1000, 0LL);
      return;
    }
LABEL_18:
    sub_B0D97C(restrictionMaskMessageText);
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

  if ( (byte_4217D3E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_4217D3E = 1;
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
    sub_B0D97C(gameObject);
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
  PartyOrganizationConfirmItemDraw_o *v14; // x19
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
  struct FollowerInfo_o *followerInfo; // x8
  UnityEngine_Object_o *typeSprite; // x24
  const MethodInfo *v53; // x1
  struct FollowerInfo_o *v54; // x8
  int32_t type; // w8
  __int64 *v56; // x8
  UnityEngine_Object_o *v57; // x23
  const MethodInfo *v58; // x1
  UserServantEntity_o *userServantEntity; // x23
  ServantFaceIconComponent_o *v60; // x24
  const MethodInfo *v61; // x1
  System_Int32_array *v62; // x0
  UnityEngine_Object_o *v63; // x23
  System_Int32_array *v64; // x24
  UISprite_o *v65; // x0
  System_String_o *v66; // x1
  UnityEngine_Object_o *v67; // x23
  UnityEngine_Object_c *v68; // x0
  __int64 *v69; // x8
  System_String_o *v70; // x23
  UnityEngine_Object_o *v71; // x24
  ServantEntity_o *servantEntity; // x0
  const MethodInfo *v73; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v75; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v77; // w0
  System_Int32_array *CommandCardList; // x0
  UnityEngine_Object_o *supportSprite; // x25
  System_String_o *v80; // x1
  UnityEngine_Object_o *v81; // x23
  UnityEngine_Object_o *v82; // x23
  int32_t v83; // w23
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // kr10_16
  ServantFaceIconComponent_o *v86; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // kr20_16
  int32_t v88; // w0
  int32_t svtLimitCount; // w26
  int32_t v90; // w27
  const MethodInfo *v91; // x1
  UnityEngine_Object_o *v92; // x23
  bool v93; // w1
  struct UILabel_array *commandLabelList; // x8
  __int64 v95; // x26
  int32_t v96; // w21
  int max_length; // w9
  UILabel_o *v98; // x22
  System_String_o *v99; // x1
  UnityEngine_Object_o *memberTypeBaseSprite; // x21
  int32_t index; // w21
  System_String_o **v102; // x8
  UISprite_o *memberTypeSprite; // x21
  System_String_o *v104; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  const MethodInfo *v106; // x1
  UserServantEntity_o *v107; // x0
  __int64 *v108; // x8
  System_String_o *v109; // x21
  const MethodInfo *v110; // x5
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  PartyOrganizationConfirmItemDraw_o *v115; // x0
  System_String_o *v116; // x1
  System_String_o *v117; // x3
  int v118; // w24
  const MethodInfo *v119; // x1
  System_String_o *v120; // x0
  System_String_o *v121; // x21
  const MethodInfo *v122; // x5
  int v123; // s0
  PartyOrganizationConfirmItemDraw_o *v127; // x0
  System_String_o *v128; // x1
  System_String_o *v129; // x3
  bool v130; // w4
  __int64 *v131; // x8
  System_String_o *v132; // x1
  const MethodInfo *v133; // x4
  float v134; // s0
  float v135; // s1
  PartyOrganizationConfirmItemDraw_o *v136; // x0
  bool v137; // w3
  int64_t fatigureTime; // x21
  System_String_o *v139; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  _DWORD *v141; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v142; // x21
  const MethodInfo *v143; // x1
  struct UISprite_o *v144; // x22
  struct UISprite_o *v145; // x23
  const MethodInfo *v146; // x1
  int32_t SvtClassId; // w21
  UserServantEntity_o *v148; // x0
  __int64 v149; // x9
  __int64 v150; // x22
  int32_t v151; // w22
  int32_t v152; // w20
  PartyOrganizationConfirmItemDraw_o *v153; // x8
  System_String_o *v154; // x21
  Il2CppObject *v155; // x0
  __int64 v156; // x0
  PartyOrganizationCommandCardMenu_o *v157; // x0
  const MethodInfo *v158; // x1
  int32_t TimesToRestart_k__BackingField; // [xsp+44h] [xbp-6Ch] BYREF
  UnityEngine_Color_o color; // [xsp+48h] [xbp-68h] BYREF
  int v161; // [xsp+5Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16

  v14 = this;
  if ( (byte_4217D3D & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, item);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v17);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_B0D8A4(&int_TypeInfo, v19);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v20);
    sub_B0D8A4(&NetworkManager_TypeInfo, v21);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v22);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_B0D8A4(&PartyOrganizationRootComponent_TypeInfo, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v25);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B0D8A4(&StringLiteral_19438/*"icon_support_02"*/, v27);
    sub_B0D8A4(&StringLiteral_10388/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/, v28);
    sub_B0D8A4(&StringLiteral_10391/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v29);
    sub_B0D8A4(&StringLiteral_11663/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, v30);
    sub_B0D8A4(&StringLiteral_11664/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v31);
    sub_B0D8A4(&StringLiteral_11658/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v32);
    sub_B0D8A4(&StringLiteral_19551/*"img_frames_mask11"*/, v33);
    sub_B0D8A4(&StringLiteral_10387/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v34);
    sub_B0D8A4(&StringLiteral_20527/*"member_txt_"*/, v35);
    sub_B0D8A4(&StringLiteral_11657/*"SELECT_NO_SORTIE"*/, v36);
    sub_B0D8A4(&StringLiteral_19437/*"icon_support_01"*/, v37);
    sub_B0D8A4(&StringLiteral_19402/*"icon_eventjoin_02"*/, v38);
    sub_B0D8A4(&StringLiteral_18908/*"formation_txtbg_03"*/, v39);
    sub_B0D8A4(&StringLiteral_18878/*"formation_blank_small"*/, v40);
    sub_B0D8A4(&StringLiteral_17939/*"datalost_svt_select"*/, v41);
    sub_B0D8A4(&StringLiteral_354/*"#042484"*/, v42);
    sub_B0D8A4(&StringLiteral_18906/*"formation_support_small"*/, v43);
    sub_B0D8A4(&StringLiteral_18907/*"formation_txtbg_02"*/, v44);
    sub_B0D8A4(&StringLiteral_1/*""*/, v45);
    sub_B0D8A4(&StringLiteral_10389/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/, v46);
    sub_B0D8A4(&StringLiteral_19404/*"icon_friend"*/, v47);
    sub_B0D8A4(&StringLiteral_10390/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/, v48);
    this = (PartyOrganizationConfirmItemDraw_o *)sub_B0D8A4(&StringLiteral_19403/*"icon_follow"*/, v49);
    byte_4217D3D = 1;
  }
  v161 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  if ( !item || !mode )
    return;
  if ( item->fields.isFollower )
  {
    servantFaceIcon = v14->fields.servantFaceIcon;
    if ( item->fields.followerInfo )
    {
      this = (PartyOrganizationConfirmItemDraw_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                     item,
                                                     (const MethodInfo *)item);
      followerInfo = item->fields.followerInfo;
      if ( !followerInfo || !servantFaceIcon )
        goto LABEL_150;
      ServantFaceIconComponent__Set_29553232(
        servantFaceIcon,
        (ServantLeaderInfo_o *)this,
        0LL,
        0LL,
        0,
        followerInfo->fields.imageSvtId,
        0LL);
      typeSprite = (UnityEngine_Object_o *)v14->fields.typeSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (PartyOrganizationConfirmItemDraw_o *)UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v54 = item->fields.followerInfo;
        if ( !v54 )
          goto LABEL_150;
        type = v54->fields.type;
        if ( (unsigned int)(type - 3) < 2 )
        {
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
          if ( !this )
            goto LABEL_150;
          this = (PartyOrganizationConfirmItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
          if ( !this )
            goto LABEL_150;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
          if ( !this )
            goto LABEL_150;
          v56 = &StringLiteral_19437/*"icon_support_01"*/;
          goto LABEL_75;
        }
        if ( type == 5 )
        {
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
          if ( !this )
            goto LABEL_150;
          this = (PartyOrganizationConfirmItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
          if ( !this )
            goto LABEL_150;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
          if ( !this )
            goto LABEL_150;
          v56 = &StringLiteral_19403/*"icon_follow"*/;
          goto LABEL_75;
        }
        if ( type == 1 )
        {
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
          if ( !this )
            goto LABEL_150;
          this = (PartyOrganizationConfirmItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
          if ( !this )
            goto LABEL_150;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
          if ( !this )
            goto LABEL_150;
          v56 = &StringLiteral_19404/*"icon_friend"*/;
LABEL_75:
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v56, 0LL);
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
          if ( !this )
            goto LABEL_150;
          ((void (__fastcall *)(PartyOrganizationConfirmItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          goto LABEL_77;
        }
        this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
        if ( !this )
          goto LABEL_150;
        this = (PartyOrganizationConfirmItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
        if ( !this )
          goto LABEL_150;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
LABEL_77:
      CommandCardList = PartyOrganizationListViewItem__GetCommandCardList(item, v53);
      supportSprite = (UnityEngine_Object_o *)v14->fields.supportSprite;
      v64 = CommandCardList;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
      {
        this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.supportSprite;
        if ( !this )
          goto LABEL_150;
        if ( item->fields.isFollower )
          v80 = (System_String_o *)StringLiteral_19438/*"icon_support_02"*/;
        else
          v80 = 0LL;
        UISprite__set_spriteName((UISprite_o *)this, v80, 0LL);
      }
      if ( isSimpleDisp )
      {
        v81 = (UnityEngine_Object_o *)v14->fields.typeSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v81, 0LL, 0LL) )
        {
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
          if ( !this )
            goto LABEL_150;
          this = (PartyOrganizationConfirmItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
          if ( !this )
            goto LABEL_150;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        v82 = (UnityEngine_Object_o *)v14->fields.supportSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v82, 0LL, 0LL) )
        {
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.supportSprite;
          if ( !this )
            goto LABEL_150;
          UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
        }
        this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
        if ( !this )
LABEL_150:
          sub_B0D97C(this);
        ServantFaceIconComponent__ClearEquip((ServantFaceIconComponent_o *)this, 0LL);
      }
LABEL_102:
      v70 = 0LL;
      if ( !isAdjustPosY )
        goto LABEL_131;
      goto LABEL_126;
    }
    if ( !servantFaceIcon )
      goto LABEL_150;
    ServantFaceIconComponent__Clear(v14->fields.servantFaceIcon, 0LL);
    v67 = (UnityEngine_Object_o *)v14->fields.typeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v67, 0LL, 0LL) )
    {
      this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
      if ( !this )
        goto LABEL_150;
      this = (PartyOrganizationConfirmItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
      if ( !this )
        goto LABEL_150;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    v68 = UnityEngine_Object_TypeInfo;
    v69 = &StringLiteral_18906/*"formation_support_small"*/;
    goto LABEL_47;
  }
  v57 = (UnityEngine_Object_o *)v14->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v57, 0LL, 0LL) )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
    if ( !this )
      goto LABEL_150;
    this = (PartyOrganizationConfirmItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
    if ( !this )
      goto LABEL_150;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  userServantEntity = item->fields.userServantEntity;
  if ( userServantEntity )
  {
    v60 = v14->fields.servantFaceIcon;
    this = (PartyOrganizationConfirmItemDraw_o *)PartyOrganizationListViewItem__GetEquipList(item, v58);
    if ( !v60 )
      goto LABEL_150;
    ServantFaceIconComponent__Set(
      v60,
      userServantEntity,
      (System_Int64_array *)this,
      item->fields.questRestrictionInfo,
      0LL,
      0LL,
      0LL);
    v62 = PartyOrganizationListViewItem__GetCommandCardList(item, v61);
    v63 = (UnityEngine_Object_o *)v14->fields.supportSprite;
    v64 = v62;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v63, 0LL, 0LL) )
    {
      this = (PartyOrganizationConfirmItemDraw_o *)item->fields.userServantEntity;
      if ( !this )
        goto LABEL_150;
      this = (PartyOrganizationConfirmItemDraw_o *)UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0LL);
      if ( !v14->fields.supportSprite )
        goto LABEL_150;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v65 = v14->fields.supportSprite;
        v66 = (System_String_o *)StringLiteral_19402/*"icon_eventjoin_02"*/;
      }
      else
      {
        v65 = v14->fields.supportSprite;
        v66 = 0LL;
      }
      UISprite__set_spriteName(v65, v66, 0LL);
    }
    goto LABEL_102;
  }
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_150;
    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)this, 0LL);
    v68 = UnityEngine_Object_TypeInfo;
    v69 = &StringLiteral_18878/*"formation_blank_small"*/;
LABEL_47:
    v70 = (System_String_o *)*v69;
    v71 = (UnityEngine_Object_o *)v14->fields.supportSprite;
    if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v68);
    if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
    {
      this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.supportSprite;
      if ( !this )
        goto LABEL_150;
      UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
    }
    goto LABEL_125;
  }
  if ( item->fields.questRestrictionInfo )
  {
    if ( ServantEntity__checkIsHeroineSvt(servantEntity, 0LL) )
    {
      this = (PartyOrganizationConfirmItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_150;
      MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)this,
                                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, v75);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      this = (PartyOrganizationConfirmItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                     SvtId,
                                                     0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_150;
      this = (PartyOrganizationConfirmItemDraw_o *)UserServantMaster__getHeroineData(
                                                     MasterData_WarQuestSelectionMaster,
                                                     (int32_t)this,
                                                     0LL);
      if ( !item->fields.questRestrictionInfo )
        goto LABEL_150;
      v77 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_30622660(
              item->fields.questRestrictionInfo,
              (UserServantEntity_o *)this,
              0LL);
    }
    else
    {
      questRestrictionInfo = item->fields.questRestrictionInfo;
      v85 = PartyOrganizationListViewItem__get_SvtId(item, v73);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      this = (PartyOrganizationConfirmItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                     v85,
                                                     0LL);
      if ( !questRestrictionInfo )
        goto LABEL_150;
      v77 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount(questRestrictionInfo, (int32_t)this, 0LL);
    }
    v83 = v77;
  }
  else
  {
    v83 = -1;
  }
  v86 = v14->fields.servantFaceIcon;
  v87 = PartyOrganizationListViewItem__get_SvtId(item, v58);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v87, 0LL);
  svtLimitCount = item->fields.svtLimitCount;
  v90 = v88;
  this = (PartyOrganizationConfirmItemDraw_o *)PartyOrganizationListViewItem__get_Level(item, v91);
  if ( !v86 )
    goto LABEL_150;
  ServantFaceIconComponent__Set_29623744(
    v86,
    v90,
    svtLimitCount,
    v83,
    0,
    0LL,
    0LL,
    2,
    0,
    0,
    0LL,
    1,
    (int32_t)this,
    imageSvtId,
    0,
    0LL);
  v92 = (UnityEngine_Object_o *)v14->fields.supportSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v92, 0LL, 0LL) )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.supportSprite;
    if ( !this )
      goto LABEL_150;
    UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
  }
  v70 = 0LL;
LABEL_125:
  v64 = 0LL;
  if ( !isAdjustPosY )
    goto LABEL_131;
LABEL_126:
  this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_150;
  if ( !ServantFaceIconComponent__IsUseEquip((ServantFaceIconComponent_o *)this, 0LL) )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_150;
    ServantFaceIconComponent__AdjustRaritySpritePosY((ServantFaceIconComponent_o *)this, -55.0, 0LL);
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_150;
    ServantFaceIconComponent__AdjustDispLimitCountSpritePosY((ServantFaceIconComponent_o *)this, -34.0, 0LL);
  }
LABEL_131:
  this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_150;
  ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)this, !isRarityHide, 0LL);
  if ( item->fields._IsNotSupportSingle_k__BackingField || !item->fields._IsDataLost_k__BackingField )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_150;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)this, 1, 0LL);
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_150;
    v93 = 1;
  }
  else
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_150;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)this, 0, 0LL);
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_150;
    v93 = 0;
  }
  ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, v93, 0LL);
  commandLabelList = v14->fields.commandLabelList;
  if ( !commandLabelList )
    goto LABEL_150;
  v95 = 0LL;
  v96 = (_DWORD)v64 + 32;
  while ( 1 )
  {
    max_length = commandLabelList->max_length;
    if ( (int)v95 >= max_length )
      break;
    if ( (unsigned int)v95 >= max_length )
      goto LABEL_281;
    v98 = commandLabelList->m_Items[v95];
    if ( v64 )
    {
      if ( (unsigned int)v95 >= v64->max_length )
      {
LABEL_281:
        v156 = sub_B0D9A8(this);
        sub_B0D948(v156, 0LL);
      }
      this = (PartyOrganizationConfirmItemDraw_o *)System_Int32__ToString(v96, 0LL);
      v99 = (System_String_o *)this;
      if ( !v98 )
        goto LABEL_150;
    }
    else
    {
      v99 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v98 )
        goto LABEL_150;
    }
    UILabel__set_text(v98, v99, 0LL);
    commandLabelList = v14->fields.commandLabelList;
    ++v95;
    v96 += 4;
    if ( !commandLabelList )
      goto LABEL_150;
  }
  this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.baseSprite;
  if ( !this )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  if ( v70 )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.baseSprite;
    if ( !this )
      goto LABEL_150;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.baseSprite;
    if ( !this )
      goto LABEL_150;
    UISprite__set_spriteName((UISprite_o *)this, v70, 0LL);
  }
  memberTypeBaseSprite = (UnityEngine_Object_o *)v14->fields.memberTypeBaseSprite;
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
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.memberTypeBaseSprite;
    if ( !this )
      goto LABEL_150;
    v102 = (System_String_o **)(index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax
                              ? &StringLiteral_18908/*"formation_txtbg_03"*/
                              : &StringLiteral_18907/*"formation_txtbg_02"*/);
    UISprite__set_spriteName((UISprite_o *)this, *v102, 0LL);
    memberTypeSprite = v14->fields.memberTypeSprite;
    v161 = item->fields.index + 1;
    v104 = System_Int32__ToString((int32_t)&v161, 0LL);
    this = (PartyOrganizationConfirmItemDraw_o *)System_String__Concat_43849904(
                                                   (System_String_o *)StringLiteral_20527/*"member_txt_"*/,
                                                   v104,
                                                   0LL);
    if ( !memberTypeSprite )
      goto LABEL_150;
    UISprite__set_spriteName(memberTypeSprite, (System_String_o *)this, 0LL);
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.memberTypeSprite;
    if ( !this )
      goto LABEL_150;
    ((void (__fastcall *)(PartyOrganizationConfirmItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
      this,
      this->klass[2]._1.interopData);
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)v14->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
    goto LABEL_225;
  v107 = item->fields.userServantEntity;
  if ( !v107 || !UserServantEntity__IsLeave(v107, 0LL) )
  {
    if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, v106)
      && (item->fields.userServantEntity || item->fields.isFollower) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v120 = LocalizationManager__Get((System_String_o *)StringLiteral_10387/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
LABEL_189:
      v121 = v120;
      *(UnityEngine_Color_o *)&v123 = UnityEngine_Color__get_black(0LL);
      v127 = v14;
      v128 = v121;
      v129 = 0LL;
      v130 = 0;
LABEL_190:
      v118 = 1;
      PartyOrganizationConfirmItemDraw__SetMaskMessage(v127, v128, *(UnityEngine_Color_o *)&v123, 1, v129, v130, v122);
      goto LABEL_226;
    }
    if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v131 = &StringLiteral_10388/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_197:
      v132 = LocalizationManager__Get((System_String_o *)*v131, 0LL);
      v134 = 0.0;
      v135 = 0.0;
      v136 = v14;
      v137 = 0;
LABEL_198:
      v118 = 1;
      PartyOrganizationConfirmItemDraw__SetWarningMessage(v136, v132, 1, v137, v134, v135, v133);
      goto LABEL_226;
    }
    if ( item->fields.isFixedSupportPositionRestriction )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v131 = &StringLiteral_10389/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/;
      goto LABEL_197;
    }
    if ( item->fields.isFixedServantPositionRestriction )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v131 = &StringLiteral_10390/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
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
        v108 = &StringLiteral_11658/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
        goto LABEL_180;
      }
      if ( item->fields._IsNotSupportSingle_k__BackingField )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v132 = LocalizationManager__Get((System_String_o *)StringLiteral_10391/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
        v134 = 10.0;
        v135 = -22.0;
        v137 = 1;
        v136 = v14;
        goto LABEL_198;
      }
      if ( item->fields._IsDataLost_k__BackingField )
      {
        *(UnityEngine_Color_o *)&v123 = UnityEngine_Color__get_white(0LL);
        v128 = (System_String_o *)StringLiteral_1/*""*/;
        v130 = 1;
        v127 = v14;
        v129 = (System_String_o *)StringLiteral_17939/*"datalost_svt_select"*/;
        goto LABEL_190;
      }
      if ( item->fields._TimesToRestart_k__BackingField >= 1 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v154 = LocalizationManager__Get((System_String_o *)StringLiteral_11664/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
        v155 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
        v120 = System_String__Format(v154, v155, 0LL);
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
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_354/*"#042484"*/, &color, 0LL);
        color.fields.a = 0.69804;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v139 = LocalizationManager__Get((System_String_o *)StringLiteral_11663/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, 0LL);
        r = color.fields.r;
        g = color.fields.g;
        b = color.fields.b;
        a = color.fields.a;
        v116 = v139;
        v115 = v14;
        v117 = (System_String_o *)StringLiteral_19551/*"img_frames_mask11"*/;
        goto LABEL_181;
      }
      item->fields.fatigureTime = -1LL;
    }
    PartyOrganizationConfirmItemDraw__ClearMessage(v14, v119);
LABEL_225:
    v118 = 0;
    goto LABEL_226;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v108 = &StringLiteral_11657/*"SELECT_NO_SORTIE"*/;
LABEL_180:
  v109 = LocalizationManager__Get((System_String_o *)*v108, 0LL);
  *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_black(0LL);
  v115 = v14;
  v116 = v109;
  v117 = 0LL;
LABEL_181:
  PartyOrganizationConfirmItemDraw__SetMaskMessage(v115, v116, *(UnityEngine_Color_o *)&r, 0, v117, 0, v110);
  v118 = 1;
LABEL_226:
  classCompatibilityIcon = (UnityEngine_Object_o *)v14->fields.classCompatibilityIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
    return;
  if ( !item->fields.isFollower )
  {
    v148 = item->fields.userServantEntity;
    if ( v148 )
    {
      SvtClassId = UserServantEntity__getSvtClassId(v148, 0LL);
    }
    else
    {
      v141 = item->fields.servantEntity;
      if ( !v141 )
        goto LABEL_246;
      SvtClassId = v141[20];
    }
    LODWORD(v141) = 0;
    goto LABEL_247;
  }
  v141 = item->fields.followerInfo;
  if ( !v141 )
  {
LABEL_246:
    SvtClassId = 0;
    goto LABEL_247;
  }
  this = (PartyOrganizationConfirmItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_150;
  v142 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  this = (PartyOrganizationConfirmItemDraw_o *)PartyOrganizationListViewItem__get_ServantLeader(item, v143);
  if ( !this )
    goto LABEL_150;
  v145 = this->fields.memberTypeSprite;
  v144 = this->fields.supportSprite;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v162.fields.currentCryptoKey = v145;
  *(_QWORD *)&v162.fields.fakeValue = v144;
  this = (PartyOrganizationConfirmItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                 v162,
                                                 0LL);
  if ( !v142 )
    goto LABEL_150;
  this = (PartyOrganizationConfirmItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 v142,
                                                 (int32_t)this,
                                                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_150;
  SvtClassId = (int32_t)this->fields.restrictionMaskSprite;
  this = (PartyOrganizationConfirmItemDraw_o *)PartyOrganizationListViewItem__get_ServantLeader(item, v146);
  if ( !this )
    goto LABEL_150;
  LODWORD(v141) = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)this, 0LL);
LABEL_247:
  if ( (unsigned int)v141 | v118 | (SvtClassId == 0) )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.classCompatibilityIcon;
    if ( !this )
      goto LABEL_150;
    goto LABEL_267;
  }
  this = (PartyOrganizationConfirmItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_150;
  this = (PartyOrganizationConfirmItemDraw_o *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)this, 40, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_264;
  this = (PartyOrganizationConfirmItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_150;
  this = (PartyOrganizationConfirmItemDraw_o *)this->fields.baseSprite;
  if ( !this )
    goto LABEL_150;
  v149 = *(&PartyOrganizationRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v149
    || (PartyOrganizationRootComponent_c *)this->klass->_2.typeHierarchy[v149 - 1] != PartyOrganizationRootComponent_TypeInfo )
  {
    sub_B0DC70(this);
    PartyOrganizationCommandCardMenu__EndOpen(v157, v158);
    return;
  }
  v150 = *(_QWORD *)&this[2].fields.maskSpriteDefaultHeight;
  if ( !v150
    || (this = (PartyOrganizationConfirmItemDraw_o *)BattleSetupInfo__TargetQuestId(
                                                       *(BattleSetupInfo_o **)&this[2].fields.maskSpriteDefaultHeight,
                                                       0LL),
        !(_DWORD)this)
    || (v151 = *(_DWORD *)(v150 + 24)) == 0 )
  {
LABEL_264:
    v153 = (PartyOrganizationConfirmItemDraw_o *)v14->fields.classCompatibilityIcon;
    goto LABEL_265;
  }
  v152 = (int)this;
  this = (PartyOrganizationConfirmItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_150;
  this = (PartyOrganizationConfirmItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !this )
    goto LABEL_150;
  this = (PartyOrganizationConfirmItemDraw_o *)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)this, v152, v151, 0LL);
  v153 = (PartyOrganizationConfirmItemDraw_o *)v14->fields.classCompatibilityIcon;
  if ( !this )
  {
LABEL_265:
    if ( !v153 )
      goto LABEL_150;
    this = v153;
LABEL_267:
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)this, 0LL);
    return;
  }
  if ( !v153 )
    goto LABEL_150;
  ServantClassCompatibilityIconComponent__SetIcon(
    v14->fields.classCompatibilityIcon,
    SvtClassId,
    (System_Int32_array *)this->fields.memberTypeSprite,
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
  struct UISprite_o *v24; // x22
  int32_t DATA_LOST_MASK_HEIGHT; // w1
  System_String_o *v26; // x1
  float v27; // s0
  float v28; // s8
  UnityEngine_Transform_o *transform; // x20
  float restrictionMaskMessageWidth; // s0
  float v31; // s1
  float v32; // s0
  float v33; // s2
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = maskColor.fields.a;
  b = maskColor.fields.b;
  g = maskColor.fields.g;
  r = maskColor.fields.r;
  if ( (byte_4217D3F & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, message);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&PartyOrganizationConfirmItemDraw_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_17939/*"datalost_svt_select"*/, v18);
    sub_B0D8A4(&StringLiteral_19547/*"img_frames_mask03"*/, v19);
    sub_B0D8A4(&StringLiteral_1/*""*/, v20);
    byte_4217D3F = 1;
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
    v23 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(v23, (System_String_o *)StringLiteral_17939/*"datalost_svt_select"*/, 0LL);
      v24 = this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)PartyOrganizationConfirmItemDraw_TypeInfo;
      if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
      }
      if ( !v24 )
        goto LABEL_45;
      gameObject = (UnityEngine_Component_o *)v24;
      DATA_LOST_MASK_HEIGHT = PartyOrganizationConfirmItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT;
    }
    else
    {
      if ( !v23 )
        goto LABEL_45;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_45;
      v26 = maskName ? maskName : (System_String_o *)StringLiteral_19547/*"img_frames_mask03"*/;
      UISprite__set_spriteName((UISprite_o *)gameObject, v26, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_45;
      DATA_LOST_MASK_HEIGHT = this->fields.maskSpriteDefaultHeight;
    }
    UIWidget__set_height((UIWidget_o *)gameObject, DATA_LOST_MASK_HEIGHT, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_45;
    v35.fields.r = r;
    v35.fields.g = g;
    v35.fields.b = b;
    v35.fields.a = a;
    UIWidget__set_color((UIWidget_o *)gameObject, v35, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_45;
    if ( isScale )
    {
      LODWORD(v27) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_45;
      v28 = v27;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      transform = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v28 > restrictionMaskMessageWidth )
      {
        v31 = 1.0;
        v32 = restrictionMaskMessageWidth / v28;
        v33 = 1.0;
        if ( !gameObject )
          goto LABEL_45;
        goto LABEL_35;
      }
    }
    else
    {
      transform = UnityEngine_Component__get_transform(gameObject, 0LL);
    }
    *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_45;
LABEL_35:
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v32, 0LL);
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
    sub_B0D97C(gameObject);
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
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v10; // x28
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
  il2cpp_array_size_t v21; // w19
  const MethodInfo *v22; // x7
  __int64 v23; // x8
  __int64 v24; // x9
  int32_t v25; // w24
  __int64 v26; // x8
  int32_t v27; // w25
  const MethodInfo *v28; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v30; // w4
  bool IsHideRarity; // w26
  int32_t v32; // w24
  int32_t v33; // w8
  PartyOrganizationConfirmItemDraw_c *v34; // x0
  UnityEngine_GameObject_o *v35; // x20
  __int64 v36; // x0
  UnityEngine_GameObject_o *self; // [xsp+0h] [xbp-70h]
  bool v38; // [xsp+8h] [xbp-68h]
  bool v39; // [xsp+Ch] [xbp-64h]
  NpcServantFollowerMaster_o *Master_WarQuestSelectionMaster; // [xsp+10h] [xbp-60h]
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+18h] [xbp-58h] BYREF

  v10 = itemList;
  if ( (byte_4217D41 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_NpcFollowerMaster___, supportMemberObjectList);
    sub_B0D8A4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v11);
    sub_B0D8A4(&DataManager_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Count__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__, v14);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)sub_B0D8A4(
                                                                                     &PartyOrganizationConfirmItemDraw_TypeInfo,
                                                                                     v16);
    byte_4217D41 = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( !v10 )
    goto LABEL_55;
  self = supportMemberBase;
  if ( !supportMemberObjectList )
    goto LABEL_55;
  v17 = *(_QWORD *)&supportMemberObjectList->max_length;
  size = v10->fields._size;
  if ( (int)v17 >= 1 )
  {
    v19 = 4LL;
    v39 = isAdjustPosY;
    v20 = size > 0;
    v38 = isSimpleDisp;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)*((_QWORD *)&supportMemberObjectList->obj.klass
                                                                                     + v19);
      if ( !itemList )
        break;
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)itemList,
                                                                                       0LL);
      if ( !itemList )
        break;
      if ( v20 )
      {
        v21 = v19 - 4;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 1, 0LL);
        if ( v10->fields._size <= (unsigned int)(v19 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v23 = *((_QWORD *)&v10->fields._items->obj.klass + v19);
        if ( !v23 )
          break;
        if ( !*(_QWORD *)(v23 + 160) )
          goto LABEL_40;
        if ( v10->fields._size <= v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v24 = *(_QWORD *)(v23 + 160);
        if ( !v24 )
          break;
        v25 = *(_DWORD *)(v24 + 36);
        if ( v10->fields._size <= v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v26 = *(_QWORD *)(v23 + 160);
        if ( !v26 )
          break;
        v27 = *(_DWORD *)(v26 + 40);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (NpcServantFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
        if ( v10->fields._size <= v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)*((_QWORD *)&v10->fields._items->obj.klass
                                                                                       + v19);
        if ( !itemList )
          break;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)itemList, v28);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(SvtId, 0LL);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)Master_WarQuestSelectionMaster;
        if ( !Master_WarQuestSelectionMaster )
          break;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                                                         Master_WarQuestSelectionMaster,
                                                                                         &npcServantFollowerEntity,
                                                                                         v25,
                                                                                         v27,
                                                                                         v30,
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
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
          if ( !npcServantFollowerEntity || !itemList )
            break;
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerMaster__GetEntity_19793912(
                                                                                           (NpcFollowerMaster_o *)itemList,
                                                                                           v25,
                                                                                           v27,
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
        }
        else
        {
LABEL_40:
          v32 = 0;
          IsHideRarity = 0;
        }
        if ( v21 >= supportMemberObjectList->max_length )
          goto LABEL_56;
        if ( v10->fields._size <= v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !*((_QWORD *)&supportMemberObjectList->obj.klass + v19) )
          break;
        PartyOrganizationConfirmItemDraw__SetItem(
          *((PartyOrganizationConfirmItemDraw_o **)&supportMemberObjectList->obj.klass + v19),
          *((PartyOrganizationListViewItem_o **)&v10->fields._items->obj.klass + v19),
          2,
          v39,
          IsHideRarity,
          v32,
          v38,
          v22);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
      }
      v33 = v19 - 3;
      if ( (int)v19 - 3 >= (int)v17 )
        goto LABEL_50;
      ++v19;
      v20 = v33 < size;
      if ( (unsigned int)(v19 - 4) >= supportMemberObjectList->max_length )
      {
LABEL_56:
        v36 = sub_B0D9A8(itemList);
        sub_B0D948(v36, 0LL);
      }
    }
LABEL_55:
    sub_B0D97C(itemList);
  }
LABEL_50:
  v34 = PartyOrganizationConfirmItemDraw_TypeInfo;
  if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v35 = self;
    if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
      v34 = PartyOrganizationConfirmItemDraw_TypeInfo;
    }
  }
  else
  {
    v35 = self;
  }
  GameObjectExtensions__SetLocalPositionX(v35, (float)(v34->static_fields->ICON_OFFSET_SIZE * (1 - size)), 0LL);
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
  UIWidget_o *v17; // x22
  int v18; // s0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  float v25; // s0
  float v26; // s8
  int32_t restrictionWarningMessageWidth; // s0
  UnityEngine_Transform_o *transform; // x19
  float v29; // s0
  float v30; // s1
  float v31; // s0
  float v32; // s2

  if ( (byte_4217D40 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, message);
    sub_B0D8A4(&StringLiteral_19547/*"img_frames_mask03"*/, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    byte_4217D40 = 1;
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
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19547/*"img_frames_mask03"*/, 0LL);
      v17 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_black(0LL);
      if ( !v17 )
        goto LABEL_31;
      UIWidget__set_color(v17, *(UnityEngine_Color_o *)&v18, 0LL);
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
          v23 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v23, iconPosY, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
          if ( gameObject )
          {
            v24 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
            GameObjectExtensions__SetLocalPositionY(v24, msgPosY, 0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
              gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
              if ( gameObject )
              {
                if ( isScale )
                {
                  LODWORD(v25) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
                  gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
                  if ( !gameObject )
                    goto LABEL_31;
                  v26 = v25;
                  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                  restrictionWarningMessageWidth = this->fields.restrictionWarningMessageWidth;
                  transform = (UnityEngine_Transform_o *)gameObject;
                  v29 = (float)restrictionWarningMessageWidth;
                  if ( v26 > v29 )
                  {
                    v30 = 1.0;
                    v31 = v29 / v26;
                    v32 = 1.0;
                    if ( !gameObject )
                      goto LABEL_31;
                    goto LABEL_35;
                  }
                }
                else
                {
                  transform = UnityEngine_Component__get_transform(gameObject, 0LL);
                }
                *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_one(0LL);
                if ( transform )
                {
LABEL_35:
                  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v31, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B0D97C(gameObject);
  }
}