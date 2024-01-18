void __fastcall PartyOrganizationConfirmItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418B6A0 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationConfirmItemDraw_TypeInfo, v1);
    byte_418B6A0 = 1;
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
  __int64 v4; // x1
  UIWidget_o *restrictionMaskMessageText; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v14; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_418B69A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B69A = 1;
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
    v12 = this->fields.restrictionMaskSprite;
    if ( !v12 )
      goto LABEL_18;
    mAtlas = v12->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.maskSpriteDefaultAtlas,
      (System_Int32_array **)mAtlas,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v14 = this->fields.restrictionMaskSprite;
    if ( !v14 )
      goto LABEL_18;
    this->fields.maskSpriteDefaultHeight = v14->fields.mHeight;
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
    sub_B2C434(restrictionMaskMessageText, v4);
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

  if ( (byte_418B69C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_418B69C = 1;
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
    sub_B2C434(gameObject, v5);
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
  PartyOrganizationListViewItem_o *v13; // x20
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
  struct FollowerInfo_o *v53; // x8
  int32_t type; // w8
  __int64 *v55; // x8
  UnityEngine_Object_o *v56; // x23
  UserServantEntity_o *userServantEntity; // x23
  ServantFaceIconComponent_o *v58; // x24
  const MethodInfo *v59; // x1
  System_Int32_array *v60; // x0
  UnityEngine_Object_o *v61; // x23
  System_Int32_array *v62; // x24
  UISprite_o *v63; // x0
  System_String_o *v64; // x1
  UnityEngine_Object_o *v65; // x23
  UnityEngine_Object_c *v66; // x0
  __int64 *v67; // x8
  System_String_o *v68; // x23
  UnityEngine_Object_o *v69; // x24
  ServantEntity_o *servantEntity; // x0
  const MethodInfo *v71; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v73; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v75; // w0
  System_Int32_array *CommandCardList; // x0
  UnityEngine_Object_o *supportSprite; // x25
  System_String_o *v78; // x1
  UnityEngine_Object_o *v79; // x23
  UnityEngine_Object_o *v80; // x23
  int32_t v81; // w23
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // kr10_16
  ServantFaceIconComponent_o *v84; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // kr20_16
  int32_t v86; // w0
  int32_t svtLimitCount; // w26
  int32_t v88; // w27
  const MethodInfo *v89; // x1
  UnityEngine_Object_o *v90; // x23
  bool v91; // w1
  struct UILabel_array *commandLabelList; // x8
  __int64 v93; // x26
  int32_t v94; // w21
  int max_length; // w9
  UILabel_o *v96; // x22
  UnityEngine_Object_o *memberTypeBaseSprite; // x21
  int32_t index; // w21
  System_String_o **v99; // x8
  UISprite_o *memberTypeSprite; // x21
  System_String_o *v101; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  const MethodInfo *v103; // x1
  UserServantEntity_o *v104; // x0
  __int64 *v105; // x8
  System_String_o *v106; // x21
  const MethodInfo *v107; // x5
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  PartyOrganizationConfirmItemDraw_o *v112; // x0
  System_String_o *v113; // x1
  System_String_o *v114; // x3
  int v115; // w24
  const MethodInfo *v116; // x1
  System_String_o *v117; // x0
  System_String_o *v118; // x21
  const MethodInfo *v119; // x5
  int v120; // s0
  PartyOrganizationConfirmItemDraw_o *v124; // x0
  System_String_o *v125; // x1
  System_String_o *v126; // x3
  bool v127; // w4
  __int64 *v128; // x8
  System_String_o *v129; // x1
  const MethodInfo *v130; // x4
  float v131; // s0
  float v132; // s1
  PartyOrganizationConfirmItemDraw_o *v133; // x0
  bool v134; // w3
  int64_t fatigureTime; // x21
  System_String_o *v136; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  _DWORD *v138; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v139; // x21
  const MethodInfo *v140; // x1
  struct UISprite_o *v141; // x22
  struct UISprite_o *v142; // x23
  int32_t SvtClassId; // w21
  UserServantEntity_o *v144; // x0
  __int64 v145; // x9
  __int64 v146; // x22
  int32_t v147; // w22
  int32_t v148; // w20
  PartyOrganizationConfirmItemDraw_o *v149; // x8
  System_String_o *v150; // x21
  Il2CppObject *v151; // x0
  __int64 v152; // x0
  PartyOrganizationCommandCardMenu_o *v153; // x0
  const MethodInfo *v154; // x1
  int32_t TimesToRestart_k__BackingField; // [xsp+44h] [xbp-6Ch] BYREF
  UnityEngine_Color_o color; // [xsp+48h] [xbp-68h] BYREF
  int v157; // [xsp+5Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16

  v13 = item;
  v14 = this;
  if ( (byte_418B69B & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v17);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_B2C35C(&int_TypeInfo, v19);
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    sub_B2C35C(&NetworkManager_TypeInfo, v21);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v22);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_B2C35C(&PartyOrganizationRootComponent_TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v25);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B2C35C(&StringLiteral_19377/*"icon_support_02"*/, v27);
    sub_B2C35C(&StringLiteral_10364/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/, v28);
    sub_B2C35C(&StringLiteral_10367/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v29);
    sub_B2C35C(&StringLiteral_11636/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, v30);
    sub_B2C35C(&StringLiteral_11637/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v31);
    sub_B2C35C(&StringLiteral_11631/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v32);
    sub_B2C35C(&StringLiteral_19489/*"img_frames_mask11"*/, v33);
    sub_B2C35C(&StringLiteral_10363/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v34);
    sub_B2C35C(&StringLiteral_20464/*"member_txt_"*/, v35);
    sub_B2C35C(&StringLiteral_11630/*"SELECT_NO_SORTIE"*/, v36);
    sub_B2C35C(&StringLiteral_19376/*"icon_support_01"*/, v37);
    sub_B2C35C(&StringLiteral_19341/*"icon_eventjoin_02"*/, v38);
    sub_B2C35C(&StringLiteral_18850/*"formation_txtbg_03"*/, v39);
    sub_B2C35C(&StringLiteral_18820/*"formation_blank_small"*/, v40);
    sub_B2C35C(&StringLiteral_17883/*"datalost_svt_select"*/, v41);
    sub_B2C35C(&StringLiteral_349/*"#042484"*/, v42);
    sub_B2C35C(&StringLiteral_18848/*"formation_support_small"*/, v43);
    sub_B2C35C(&StringLiteral_18849/*"formation_txtbg_02"*/, v44);
    sub_B2C35C(&StringLiteral_1/*""*/, v45);
    sub_B2C35C(&StringLiteral_10365/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/, v46);
    sub_B2C35C(&StringLiteral_19343/*"icon_friend"*/, v47);
    sub_B2C35C(&StringLiteral_10366/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/, v48);
    this = (PartyOrganizationConfirmItemDraw_o *)sub_B2C35C(&StringLiteral_19342/*"icon_follow"*/, v49);
    byte_418B69B = 1;
  }
  v157 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  if ( !v13 || !mode )
    return;
  if ( v13->fields.isFollower )
  {
    servantFaceIcon = v14->fields.servantFaceIcon;
    if ( v13->fields.followerInfo )
    {
      this = (PartyOrganizationConfirmItemDraw_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                     v13,
                                                     (const MethodInfo *)item);
      followerInfo = v13->fields.followerInfo;
      if ( !followerInfo || !servantFaceIcon )
        goto LABEL_150;
      ServantFaceIconComponent__Set_30720044(
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
        v53 = v13->fields.followerInfo;
        if ( !v53 )
          goto LABEL_150;
        type = v53->fields.type;
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
          v55 = &StringLiteral_19376/*"icon_support_01"*/;
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
          v55 = &StringLiteral_19342/*"icon_follow"*/;
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
          v55 = &StringLiteral_19343/*"icon_friend"*/;
LABEL_75:
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v55, 0LL);
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
      CommandCardList = PartyOrganizationListViewItem__GetCommandCardList(v13, (const MethodInfo *)item);
      supportSprite = (UnityEngine_Object_o *)v14->fields.supportSprite;
      v62 = CommandCardList;
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
        if ( v13->fields.isFollower )
          v78 = (System_String_o *)StringLiteral_19377/*"icon_support_02"*/;
        else
          v78 = 0LL;
        UISprite__set_spriteName((UISprite_o *)this, v78, 0LL);
      }
      if ( isSimpleDisp )
      {
        v79 = (UnityEngine_Object_o *)v14->fields.typeSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v79, 0LL, 0LL) )
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
        v80 = (UnityEngine_Object_o *)v14->fields.supportSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v80, 0LL, 0LL) )
        {
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.supportSprite;
          if ( !this )
            goto LABEL_150;
          UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
        }
        this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
        if ( !this )
LABEL_150:
          sub_B2C434(this, item);
        ServantFaceIconComponent__ClearEquip((ServantFaceIconComponent_o *)this, 0LL);
      }
LABEL_102:
      v68 = 0LL;
      if ( !isAdjustPosY )
        goto LABEL_131;
      goto LABEL_126;
    }
    if ( !servantFaceIcon )
      goto LABEL_150;
    ServantFaceIconComponent__Clear(v14->fields.servantFaceIcon, 0LL);
    v65 = (UnityEngine_Object_o *)v14->fields.typeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v65, 0LL, 0LL) )
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
    v66 = UnityEngine_Object_TypeInfo;
    v67 = &StringLiteral_18848/*"formation_support_small"*/;
    goto LABEL_47;
  }
  v56 = (UnityEngine_Object_o *)v14->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
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
  userServantEntity = v13->fields.userServantEntity;
  if ( userServantEntity )
  {
    v58 = v14->fields.servantFaceIcon;
    this = (PartyOrganizationConfirmItemDraw_o *)PartyOrganizationListViewItem__GetEquipList(
                                                   v13,
                                                   (const MethodInfo *)item);
    if ( !v58 )
      goto LABEL_150;
    ServantFaceIconComponent__Set(
      v58,
      userServantEntity,
      (System_Int64_array *)this,
      v13->fields.questRestrictionInfo,
      0LL,
      0LL,
      0LL);
    v60 = PartyOrganizationListViewItem__GetCommandCardList(v13, v59);
    v61 = (UnityEngine_Object_o *)v14->fields.supportSprite;
    v62 = v60;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v61, 0LL, 0LL) )
    {
      this = (PartyOrganizationConfirmItemDraw_o *)v13->fields.userServantEntity;
      if ( !this )
        goto LABEL_150;
      this = (PartyOrganizationConfirmItemDraw_o *)UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0LL);
      if ( !v14->fields.supportSprite )
        goto LABEL_150;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v63 = v14->fields.supportSprite;
        v64 = (System_String_o *)StringLiteral_19341/*"icon_eventjoin_02"*/;
      }
      else
      {
        v63 = v14->fields.supportSprite;
        v64 = 0LL;
      }
      UISprite__set_spriteName(v63, v64, 0LL);
    }
    goto LABEL_102;
  }
  servantEntity = v13->fields.servantEntity;
  if ( !servantEntity )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_150;
    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)this, 0LL);
    v66 = UnityEngine_Object_TypeInfo;
    v67 = &StringLiteral_18820/*"formation_blank_small"*/;
LABEL_47:
    v68 = (System_String_o *)*v67;
    v69 = (UnityEngine_Object_o *)v14->fields.supportSprite;
    if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v66);
    if ( UnityEngine_Object__op_Inequality(v69, 0LL, 0LL) )
    {
      this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.supportSprite;
      if ( !this )
        goto LABEL_150;
      UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
    }
    goto LABEL_125;
  }
  if ( v13->fields.questRestrictionInfo )
  {
    if ( ServantEntity__checkIsHeroineSvt(servantEntity, 0LL) )
    {
      this = (PartyOrganizationConfirmItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_150;
      MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)this,
                                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(v13, v73);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      this = (PartyOrganizationConfirmItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                     SvtId,
                                                     0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_150;
      this = (PartyOrganizationConfirmItemDraw_o *)UserServantMaster__getHeroineData(
                                                     MasterData_WarQuestSelectionMaster,
                                                     (int32_t)this,
                                                     0LL);
      if ( !v13->fields.questRestrictionInfo )
        goto LABEL_150;
      v75 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31238264(
              v13->fields.questRestrictionInfo,
              (UserServantEntity_o *)this,
              0LL);
    }
    else
    {
      questRestrictionInfo = v13->fields.questRestrictionInfo;
      v83 = PartyOrganizationListViewItem__get_SvtId(v13, v71);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      this = (PartyOrganizationConfirmItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                     v83,
                                                     0LL);
      if ( !questRestrictionInfo )
        goto LABEL_150;
      v75 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount(questRestrictionInfo, (int32_t)this, 0LL);
    }
    v81 = v75;
  }
  else
  {
    v81 = -1;
  }
  v84 = v14->fields.servantFaceIcon;
  v85 = PartyOrganizationListViewItem__get_SvtId(v13, (const MethodInfo *)item);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v85, 0LL);
  svtLimitCount = v13->fields.svtLimitCount;
  v88 = v86;
  this = (PartyOrganizationConfirmItemDraw_o *)PartyOrganizationListViewItem__get_Level(v13, v89);
  if ( !v84 )
    goto LABEL_150;
  ServantFaceIconComponent__Set_30790452(
    v84,
    v88,
    svtLimitCount,
    v81,
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
  v90 = (UnityEngine_Object_o *)v14->fields.supportSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v90, 0LL, 0LL) )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.supportSprite;
    if ( !this )
      goto LABEL_150;
    UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
  }
  v68 = 0LL;
LABEL_125:
  v62 = 0LL;
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
  if ( v13->fields._IsNotSupportSingle_k__BackingField || !v13->fields._IsDataLost_k__BackingField )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_150;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)this, 1, 0LL);
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_150;
    v91 = 1;
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
    v91 = 0;
  }
  ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, v91, 0LL);
  commandLabelList = v14->fields.commandLabelList;
  if ( !commandLabelList )
    goto LABEL_150;
  v93 = 0LL;
  v94 = (_DWORD)v62 + 32;
  while ( 1 )
  {
    max_length = commandLabelList->max_length;
    if ( (int)v93 >= max_length )
      break;
    if ( (unsigned int)v93 >= max_length )
      goto LABEL_281;
    v96 = commandLabelList->m_Items[v93];
    if ( v62 )
    {
      if ( (unsigned int)v93 >= v62->max_length )
      {
LABEL_281:
        v152 = sub_B2C460(this);
        sub_B2C400(v152, 0LL);
      }
      this = (PartyOrganizationConfirmItemDraw_o *)System_Int32__ToString(v94, 0LL);
      item = (PartyOrganizationListViewItem_o *)this;
      if ( !v96 )
        goto LABEL_150;
    }
    else
    {
      item = (PartyOrganizationListViewItem_o *)StringLiteral_1/*""*/;
      if ( !v96 )
        goto LABEL_150;
    }
    UILabel__set_text(v96, (System_String_o *)item, 0LL);
    commandLabelList = v14->fields.commandLabelList;
    ++v93;
    v94 += 4;
    if ( !commandLabelList )
      goto LABEL_150;
  }
  this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.baseSprite;
  if ( !this )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  if ( v68 )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.baseSprite;
    if ( !this )
      goto LABEL_150;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.baseSprite;
    if ( !this )
      goto LABEL_150;
    UISprite__set_spriteName((UISprite_o *)this, v68, 0LL);
  }
  memberTypeBaseSprite = (UnityEngine_Object_o *)v14->fields.memberTypeBaseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(memberTypeBaseSprite, 0LL, 0LL) )
  {
    index = v13->fields.index;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.memberTypeBaseSprite;
    if ( !this )
      goto LABEL_150;
    v99 = (System_String_o **)(index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax
                             ? &StringLiteral_18850/*"formation_txtbg_03"*/
                             : &StringLiteral_18849/*"formation_txtbg_02"*/);
    UISprite__set_spriteName((UISprite_o *)this, *v99, 0LL);
    memberTypeSprite = v14->fields.memberTypeSprite;
    v157 = v13->fields.index + 1;
    v101 = System_Int32__ToString((int32_t)&v157, 0LL);
    this = (PartyOrganizationConfirmItemDraw_o *)System_String__Concat_44305532(
                                                   (System_String_o *)StringLiteral_20464/*"member_txt_"*/,
                                                   v101,
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
  v104 = v13->fields.userServantEntity;
  if ( !v104 || !UserServantEntity__IsLeave(v104, 0LL) )
  {
    if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v13, v103)
      && (v13->fields.userServantEntity || v13->fields.isFollower) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v117 = LocalizationManager__Get((System_String_o *)StringLiteral_10363/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
LABEL_189:
      v118 = v117;
      *(UnityEngine_Color_o *)&v120 = UnityEngine_Color__get_black(0LL);
      v124 = v14;
      v125 = v118;
      v126 = 0LL;
      v127 = 0;
LABEL_190:
      v115 = 1;
      PartyOrganizationConfirmItemDraw__SetMaskMessage(v124, v125, *(UnityEngine_Color_o *)&v120, 1, v126, v127, v119);
      goto LABEL_226;
    }
    if ( v13->fields.isUniqueSvtRestriction || v13->fields.isUniqueIndividualityRestriction )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v128 = &StringLiteral_10364/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_197:
      v129 = LocalizationManager__Get((System_String_o *)*v128, 0LL);
      v131 = 0.0;
      v132 = 0.0;
      v133 = v14;
      v134 = 0;
LABEL_198:
      v115 = 1;
      PartyOrganizationConfirmItemDraw__SetWarningMessage(v133, v129, 1, v134, v131, v132, v130);
      goto LABEL_226;
    }
    if ( v13->fields.isFixedSupportPositionRestriction )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v128 = &StringLiteral_10365/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/;
      goto LABEL_197;
    }
    if ( v13->fields.isFixedServantPositionRestriction )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v128 = &StringLiteral_10366/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
      goto LABEL_197;
    }
    fatigureTime = v13->fields.fatigureTime;
    if ( (fatigureTime & 0x8000000000000000LL) != 0 )
    {
      if ( v13->fields._IsAllOutBattle_k__BackingField )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v105 = &StringLiteral_11631/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
        goto LABEL_180;
      }
      if ( v13->fields._IsNotSupportSingle_k__BackingField )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v129 = LocalizationManager__Get((System_String_o *)StringLiteral_10367/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
        v131 = 10.0;
        v132 = -22.0;
        v134 = 1;
        v133 = v14;
        goto LABEL_198;
      }
      if ( v13->fields._IsDataLost_k__BackingField )
      {
        *(UnityEngine_Color_o *)&v120 = UnityEngine_Color__get_white(0LL);
        v125 = (System_String_o *)StringLiteral_1/*""*/;
        v127 = 1;
        v124 = v14;
        v126 = (System_String_o *)StringLiteral_17883/*"datalost_svt_select"*/;
        goto LABEL_190;
      }
      if ( v13->fields._TimesToRestart_k__BackingField >= 1 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v150 = LocalizationManager__Get((System_String_o *)StringLiteral_11637/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        TimesToRestart_k__BackingField = v13->fields._TimesToRestart_k__BackingField;
        v151 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
        v117 = System_String__Format(v150, v151, 0LL);
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
        v136 = LocalizationManager__Get((System_String_o *)StringLiteral_11636/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, 0LL);
        r = color.fields.r;
        g = color.fields.g;
        b = color.fields.b;
        a = color.fields.a;
        v113 = v136;
        v112 = v14;
        v114 = (System_String_o *)StringLiteral_19489/*"img_frames_mask11"*/;
        goto LABEL_181;
      }
      v13->fields.fatigureTime = -1LL;
    }
    PartyOrganizationConfirmItemDraw__ClearMessage(v14, v116);
LABEL_225:
    v115 = 0;
    goto LABEL_226;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v105 = &StringLiteral_11630/*"SELECT_NO_SORTIE"*/;
LABEL_180:
  v106 = LocalizationManager__Get((System_String_o *)*v105, 0LL);
  *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_black(0LL);
  v112 = v14;
  v113 = v106;
  v114 = 0LL;
LABEL_181:
  PartyOrganizationConfirmItemDraw__SetMaskMessage(v112, v113, *(UnityEngine_Color_o *)&r, 0, v114, 0, v107);
  v115 = 1;
LABEL_226:
  classCompatibilityIcon = (UnityEngine_Object_o *)v14->fields.classCompatibilityIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
    return;
  if ( !v13->fields.isFollower )
  {
    v144 = v13->fields.userServantEntity;
    if ( v144 )
    {
      SvtClassId = UserServantEntity__getSvtClassId(v144, 0LL);
    }
    else
    {
      v138 = v13->fields.servantEntity;
      if ( !v138 )
        goto LABEL_246;
      SvtClassId = v138[20];
    }
    LODWORD(v138) = 0;
    goto LABEL_247;
  }
  v138 = v13->fields.followerInfo;
  if ( !v138 )
  {
LABEL_246:
    SvtClassId = 0;
    goto LABEL_247;
  }
  this = (PartyOrganizationConfirmItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_150;
  v139 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  this = (PartyOrganizationConfirmItemDraw_o *)PartyOrganizationListViewItem__get_ServantLeader(v13, v140);
  if ( !this )
    goto LABEL_150;
  v142 = this->fields.memberTypeSprite;
  v141 = this->fields.supportSprite;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v158.fields.currentCryptoKey = v142;
  *(_QWORD *)&v158.fields.fakeValue = v141;
  this = (PartyOrganizationConfirmItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                 v158,
                                                 0LL);
  if ( !v139 )
    goto LABEL_150;
  this = (PartyOrganizationConfirmItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 v139,
                                                 (int32_t)this,
                                                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_150;
  SvtClassId = (int32_t)this->fields.restrictionMaskSprite;
  this = (PartyOrganizationConfirmItemDraw_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                 v13,
                                                 (const MethodInfo *)item);
  if ( !this )
    goto LABEL_150;
  LODWORD(v138) = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)this, 0LL);
LABEL_247:
  if ( (unsigned int)v138 | v115 | (SvtClassId == 0) )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.classCompatibilityIcon;
    if ( !this )
      goto LABEL_150;
    goto LABEL_267;
  }
  this = (PartyOrganizationConfirmItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_150;
  this = (PartyOrganizationConfirmItemDraw_o *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)this, 40, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_264;
  this = (PartyOrganizationConfirmItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_150;
  this = (PartyOrganizationConfirmItemDraw_o *)this->fields.baseSprite;
  if ( !this )
    goto LABEL_150;
  item = (PartyOrganizationListViewItem_o *)PartyOrganizationRootComponent_TypeInfo;
  v145 = *(&PartyOrganizationRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v145
    || (PartyOrganizationRootComponent_c *)this->klass->_2.typeHierarchy[v145 - 1] != PartyOrganizationRootComponent_TypeInfo )
  {
    sub_B2C728(this);
    PartyOrganizationCommandCardMenu__EndOpen(v153, v154);
    return;
  }
  v146 = *(_QWORD *)&this[2].fields.maskSpriteDefaultHeight;
  if ( !v146
    || (this = (PartyOrganizationConfirmItemDraw_o *)BattleSetupInfo__TargetQuestId(
                                                       *(BattleSetupInfo_o **)&this[2].fields.maskSpriteDefaultHeight,
                                                       0LL),
        !(_DWORD)this)
    || (v147 = *(_DWORD *)(v146 + 24)) == 0 )
  {
LABEL_264:
    v149 = (PartyOrganizationConfirmItemDraw_o *)v14->fields.classCompatibilityIcon;
    goto LABEL_265;
  }
  v148 = (int)this;
  this = (PartyOrganizationConfirmItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_150;
  this = (PartyOrganizationConfirmItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !this )
    goto LABEL_150;
  this = (PartyOrganizationConfirmItemDraw_o *)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)this, v148, v147, 0LL);
  v149 = (PartyOrganizationConfirmItemDraw_o *)v14->fields.classCompatibilityIcon;
  if ( !this )
  {
LABEL_265:
    if ( !v149 )
      goto LABEL_150;
    this = v149;
LABEL_267:
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)this, 0LL);
    return;
  }
  if ( !v149 )
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
  __int64 v22; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v24; // x24
  struct UISprite_o *v25; // x22
  int32_t DATA_LOST_MASK_HEIGHT; // w1
  System_String_o *v27; // x1
  float v28; // s0
  float v29; // s8
  UnityEngine_Transform_o *transform; // x20
  float restrictionMaskMessageWidth; // s0
  float v32; // s1
  float v33; // s0
  float v34; // s2
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = maskColor.fields.a;
  b = maskColor.fields.b;
  g = maskColor.fields.g;
  r = maskColor.fields.r;
  if ( (byte_418B69D & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, message);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&PartyOrganizationConfirmItemDraw_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_17883/*"datalost_svt_select"*/, v18);
    sub_B2C35C(&StringLiteral_19485/*"img_frames_mask03"*/, v19);
    sub_B2C35C(&StringLiteral_1/*""*/, v20);
    byte_418B69D = 1;
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
    v24 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(v24, (System_String_o *)StringLiteral_17883/*"datalost_svt_select"*/, 0LL);
      v25 = this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)PartyOrganizationConfirmItemDraw_TypeInfo;
      if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
      }
      if ( !v25 )
        goto LABEL_45;
      gameObject = (UnityEngine_Component_o *)v25;
      DATA_LOST_MASK_HEIGHT = PartyOrganizationConfirmItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT;
    }
    else
    {
      if ( !v24 )
        goto LABEL_45;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_45;
      v27 = maskName ? maskName : (System_String_o *)StringLiteral_19485/*"img_frames_mask03"*/;
      UISprite__set_spriteName((UISprite_o *)gameObject, v27, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_45;
      DATA_LOST_MASK_HEIGHT = this->fields.maskSpriteDefaultHeight;
    }
    UIWidget__set_height((UIWidget_o *)gameObject, DATA_LOST_MASK_HEIGHT, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_45;
    v36.fields.r = r;
    v36.fields.g = g;
    v36.fields.b = b;
    v36.fields.a = a;
    UIWidget__set_color((UIWidget_o *)gameObject, v36, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_45;
    if ( isScale )
    {
      LODWORD(v28) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_45;
      v29 = v28;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      transform = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v29 > restrictionMaskMessageWidth )
      {
        v32 = 1.0;
        v33 = restrictionMaskMessageWidth / v29;
        v34 = 1.0;
        if ( !gameObject )
          goto LABEL_45;
        goto LABEL_35;
      }
    }
    else
    {
      transform = UnityEngine_Component__get_transform(gameObject, 0LL);
    }
    *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_45;
LABEL_35:
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v33, 0LL);
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
    sub_B2C434(gameObject, v22);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v29; // w4
  bool IsHideRarity; // w26
  int32_t v31; // w24
  int32_t v32; // w8
  PartyOrganizationConfirmItemDraw_c *v33; // x0
  UnityEngine_GameObject_o *v34; // x20
  __int64 v35; // x0
  UnityEngine_GameObject_o *self; // [xsp+0h] [xbp-70h]
  bool v37; // [xsp+8h] [xbp-68h]
  bool v38; // [xsp+Ch] [xbp-64h]
  NpcServantFollowerMaster_o *Master_WarQuestSelectionMaster; // [xsp+10h] [xbp-60h]
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+18h] [xbp-58h] BYREF

  v10 = itemList;
  if ( (byte_418B69F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_NpcFollowerMaster___, supportMemberObjectList);
    sub_B2C35C(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)sub_B2C35C(
                                                                                     &PartyOrganizationConfirmItemDraw_TypeInfo,
                                                                                     v16);
    byte_418B69F = 1;
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
    v38 = isAdjustPosY;
    v20 = size > 0;
    v37 = isSimpleDisp;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v23 = *((_QWORD *)&v10->fields._items->obj.klass + v19);
        if ( !v23 )
          break;
        if ( !*(_QWORD *)(v23 + 160) )
          goto LABEL_40;
        if ( v10->fields._size <= v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v24 = *(_QWORD *)(v23 + 160);
        if ( !v24 )
          break;
        v25 = *(_DWORD *)(v24 + 36);
        if ( v10->fields._size <= v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v26 = *(_QWORD *)(v23 + 160);
        if ( !v26 )
          break;
        v27 = *(_DWORD *)(v26 + 40);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (NpcServantFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
        if ( v10->fields._size <= v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)*((_QWORD *)&v10->fields._items->obj.klass
                                                                                       + v19);
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
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(SvtId, 0LL);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)Master_WarQuestSelectionMaster;
        if ( !Master_WarQuestSelectionMaster )
          break;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                                                         Master_WarQuestSelectionMaster,
                                                                                         &npcServantFollowerEntity,
                                                                                         v25,
                                                                                         v27,
                                                                                         v29,
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
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
          if ( !npcServantFollowerEntity || !itemList )
            break;
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerMaster__GetEntity_20112236(
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
            v31 = (int)itemList;
          }
          else
          {
            v31 = 0;
          }
        }
        else
        {
LABEL_40:
          v31 = 0;
          IsHideRarity = 0;
        }
        if ( v21 >= supportMemberObjectList->max_length )
          goto LABEL_56;
        if ( v10->fields._size <= v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !*((_QWORD *)&supportMemberObjectList->obj.klass + v19) )
          break;
        PartyOrganizationConfirmItemDraw__SetItem(
          *((PartyOrganizationConfirmItemDraw_o **)&supportMemberObjectList->obj.klass + v19),
          *((PartyOrganizationListViewItem_o **)&v10->fields._items->obj.klass + v19),
          2,
          v38,
          IsHideRarity,
          v31,
          v37,
          v22);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
      }
      v32 = v19 - 3;
      if ( (int)v19 - 3 >= (int)v17 )
        goto LABEL_50;
      ++v19;
      v20 = v32 < size;
      if ( (unsigned int)(v19 - 4) >= supportMemberObjectList->max_length )
      {
LABEL_56:
        v35 = sub_B2C460(itemList);
        sub_B2C400(v35, 0LL);
      }
    }
LABEL_55:
    sub_B2C434(itemList, supportMemberObjectList);
  }
LABEL_50:
  v33 = PartyOrganizationConfirmItemDraw_TypeInfo;
  if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v34 = self;
    if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
      v33 = PartyOrganizationConfirmItemDraw_TypeInfo;
    }
  }
  else
  {
    v34 = self;
  }
  GameObjectExtensions__SetLocalPositionX(v34, (float)(v33->static_fields->ICON_OFFSET_SIZE * (1 - size)), 0LL);
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
  UIWidget_o *v18; // x22
  int v19; // s0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  float v26; // s0
  float v27; // s8
  int32_t restrictionWarningMessageWidth; // s0
  UnityEngine_Transform_o *transform; // x19
  float v30; // s0
  float v31; // s1
  float v32; // s0
  float v33; // s2

  if ( (byte_418B69E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, message);
    sub_B2C35C(&StringLiteral_19485/*"img_frames_mask03"*/, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    byte_418B69E = 1;
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
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19485/*"img_frames_mask03"*/, 0LL);
      v18 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_black(0LL);
      if ( !v18 )
        goto LABEL_31;
      UIWidget__set_color(v18, *(UnityEngine_Color_o *)&v19, 0LL);
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
          v24 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v24, iconPosY, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
          if ( gameObject )
          {
            v25 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
            GameObjectExtensions__SetLocalPositionY(v25, msgPosY, 0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
              gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
              if ( gameObject )
              {
                if ( isScale )
                {
                  LODWORD(v26) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
                  gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
                  if ( !gameObject )
                    goto LABEL_31;
                  v27 = v26;
                  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                  restrictionWarningMessageWidth = this->fields.restrictionWarningMessageWidth;
                  transform = (UnityEngine_Transform_o *)gameObject;
                  v30 = (float)restrictionWarningMessageWidth;
                  if ( v27 > v30 )
                  {
                    v31 = 1.0;
                    v32 = v30 / v27;
                    v33 = 1.0;
                    if ( !gameObject )
                      goto LABEL_31;
                    goto LABEL_35;
                  }
                }
                else
                {
                  transform = UnityEngine_Component__get_transform(gameObject, 0LL);
                }
                *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_one(0LL);
                if ( transform )
                {
LABEL_35:
                  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v32, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B2C434(gameObject, v16);
  }
}