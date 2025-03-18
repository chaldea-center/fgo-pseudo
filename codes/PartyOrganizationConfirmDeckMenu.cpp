void __fastcall PartyOrganizationConfirmDeckMenu___ctor(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0

  if ( (byte_4C1DB45 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&BaseDialog_TypeInfo, v3);
    sub_1C3B764(&PartyOrganizationConfirmItemDraw___TypeInfo, v4);
    byte_4C1DB45 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  this->fields.memberObjectList = (struct PartyOrganizationConfirmItemDraw_array *)sub_1C3B80C(
                                                                                     PartyOrganizationConfirmItemDraw___TypeInfo,
                                                                                     (unsigned int)v5->static_fields->DeckMemberMax);
  sub_1C3B708(&this->fields.memberObjectList);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmDeckMenu__Callback(
        PartyOrganizationConfirmDeckMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v4; // x20
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1C3B708(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationConfirmDeckMenu__Close(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmDeckMenu__Close_33110464(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmDeckMenu__Close_33110464(
        PartyOrganizationConfirmDeckMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4C1DB41 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_PartyOrganizationConfirmDeckMenu_EndClose__, v5);
    byte_4C1DB41 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C3B708(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeckMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall PartyOrganizationConfirmDeckMenu__EndClose(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmDeckMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1C3B708(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationConfirmDeckMenu__EndOpen(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PartyOrganizationConfirmDeckMenu__Init(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C1DB3F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C1DB3F = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.nameLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL) )
  {
LABEL_10:
    sub_1C3B9C0(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmDeckMenu__OnClickCancel(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C1DB43 & 1) == 0 )
  {
    sub_1C3B764(&Method_PartyOrganizationConfirmDeckMenu_OnClickCancel__, method);
    byte_4C1DB43 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeckMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeckMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_PartyOrganizationConfirmDeckMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    PartyOrganizationConfirmDeckMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmDeckMenu__OnClickClose(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C1DB44 & 1) == 0 )
  {
    sub_1C3B764(&Method_PartyOrganizationConfirmDeckMenu_OnClickClose__, method);
    byte_4C1DB44 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeckMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeckMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_PartyOrganizationConfirmDeckMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    PartyOrganizationConfirmDeckMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmDeckMenu__OnClickDecide(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C1DB42 & 1) == 0 )
  {
    sub_1C3B764(&Method_PartyOrganizationConfirmDeckMenu_OnClickDecide__, method);
    byte_4C1DB42 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeckMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeckMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_PartyOrganizationConfirmDeckMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    PartyOrganizationConfirmDeckMenu__Callback(this, 1, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmDeckMenu__Open(
        PartyOrganizationConfirmDeckMenu_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
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
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  __int64 v79; // x1
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x1
  __int64 v83; // x1
  __int64 v84; // x1
  __int64 v85; // x1
  __int64 v86; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v88; // x1
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  NpcServantFollowerMaster_o *v90; // x22
  __int64 v91; // x23
  const MethodInfo *v92; // x7
  UnityEngine_GameObject_c *klass; // x8
  PartyOrganizationListViewItem_o *v94; // x24
  int32_t data_high; // w25
  int32_t bits; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct PartyOrganizationConfirmItemDraw_array *v98; // x8
  PartyOrganizationConfirmItemDraw_o *v99; // x8
  UnityEngine_GameObject_o *v100; // x0
  UILabel_o *v101; // x20
  struct UILabel_o *v102; // x20
  System_String_o *v103; // x1
  UILabel_o *v104; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 *v109; // x8
  UILabel_o *v110; // x20
  UILabel_o *v111; // x20
  UILabel_o *v112; // x20
  UILabel_o *v113; // x20
  UILabel_o *v114; // x20
  UILabel_o *v115; // x20
  UILabel_o *v116; // x20
  UILabel_o *v117; // x20
  UILabel_o *v118; // x20
  UILabel_o *v119; // x20
  UILabel_o *v120; // x20
  UILabel_o *v121; // x20
  UILabel_o *v122; // x21
  UILabel_o *v123; // x21
  UILabel_o *nameLabel; // x21
  UILabel_o *v125; // x20
  UILabel_o *v126; // x20
  UILabel_o *v127; // x20
  UILabel_o *v128; // x20
  UILabel_o *v129; // x20
  UILabel_o *v130; // x20
  UILabel_o *v131; // x20
  UILabel_o *v132; // x20
  UILabel_o *v133; // x20
  UILabel_o *v134; // x20
  UILabel_o *v135; // x20
  UILabel_o *v136; // x20
  UILabel_o *v137; // x20
  UILabel_o *v138; // x20
  UILabel_o *v139; // x20
  UILabel_o *v140; // x20
  UILabel_o *v141; // x20
  UILabel_o *v142; // x20
  UILabel_o *v143; // x20
  UILabel_o *v144; // x20
  UILabel_o *v145; // x21
  UILabel_o *v146; // x21
  System_String_o *v147; // x22
  Il2CppObject *TotalCostRestrictionMessage; // x0
  UILabel_o *v149; // x21
  UILabel_o *v150; // x20
  UILabel_o *v151; // x21
  struct UILabel_o *v152; // x21
  System_String_o *v153; // x22
  Il2CppObject *ConfirmRestrictionMessage; // x0
  UILabel_o *v155; // x21
  System_Action_o *v156; // x20
  UILabel_o *v157; // x20
  UILabel_o *v158; // x20
  UILabel_o *v159; // x20
  UILabel_o *v160; // x20
  UILabel_o *v161; // x20
  UILabel_o *v162; // x20
  UILabel_o *v163; // x20
  UILabel_o *v164; // x20
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C1DB40 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1C3B764(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v9);
    sub_1C3B764(&DataManager_TypeInfo, v10);
    sub_1C3B764(&LocalizationManager_TypeInfo, v11);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1C3B764(&Method_PartyOrganizationConfirmDeckMenu_EndOpen__, v13);
    sub_1C3B764(&StringLiteral_10402/*"PlayChapterClear "*/, v14);
    sub_1C3B764(&StringLiteral_10339/*"PathCRC"*/, v15);
    sub_1C3B764(&StringLiteral_10382/*"PickaxetAnimation_skip"*/, v16);
    sub_1C3B764(&StringLiteral_10436/*"PlayerSpecialShadowEffectId"*/, v17);
    sub_1C3B764(&StringLiteral_10357/*"PeriodTimeRoot"*/, v18);
    sub_1C3B764(&StringLiteral_10384/*"Pink"*/, v19);
    sub_1C3B764(&StringLiteral_10380/*"Pi"*/, v20);
    sub_1C3B764(&StringLiteral_10356/*"Period too large"*/, v21);
    sub_1C3B764(&StringLiteral_10429/*"PlayVoiceNo"*/, v22);
    sub_1C3B764(&StringLiteral_10408/*"PlayGacha "*/, v23);
    sub_1C3B764(&StringLiteral_10338/*"Path {0} is a directory"*/, v24);
    sub_1C3B764(&StringLiteral_10340/*"Patindex"*/, v25);
    sub_1C3B764(&StringLiteral_10428/*"PlayVoice"*/, v26);
    sub_1C3B764(&StringLiteral_10343/*"PausedTime: "*/, v27);
    sub_1C3B764(&StringLiteral_10394/*"PlayBattleEnd "*/, v28);
    sub_1C3B764(&StringLiteral_10412/*"PlayHpNameAlpha"*/, v29);
    sub_1C3B764(&StringLiteral_10388/*"Platform doesn't support open commands, try to call OpenFactory.PlatformCanOpen"*/, v30);
    sub_1C3B764(&StringLiteral_10430/*"PlayVoiceWait"*/, v31);
    sub_1C3B764(&StringLiteral_10405/*"PlayCore AssetPackManager API is not available! Make sure your gradle project includes \"com.google.android.play:core\" dependency."*/, v32);
    sub_1C3B764(&StringLiteral_10389/*"Play"*/, v33);
    sub_1C3B764(&StringLiteral_10375/*"PhotoMasterEquipIdSetting2025"*/, v34);
    sub_1C3B764(&StringLiteral_10396/*"PlayBattleStart "*/, v35);
    sub_1C3B764(&StringLiteral_10350/*"Pe"*/, v36);
    sub_1C3B764(&StringLiteral_10425/*"PlayShop "*/, v37);
    sub_1C3B764(&StringLiteral_10397/*"PlayBattleStart2 "*/, v38);
    sub_1C3B764(&StringLiteral_10376/*"PhotoMasterGenderSetting2025"*/, v39);
    sub_1C3B764(&StringLiteral_10434/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/, v40);
    sub_1C3B764(&StringLiteral_10431/*"Player"*/, v41);
    sub_1C3B764(&StringLiteral_10370/*"PhotoCampaignSelectedUsrSvtId"*/, v42);
    sub_1C3B764(&StringLiteral_10433/*"PlayerPrefsの削除"*/, v43);
    sub_1C3B764(&StringLiteral_10407/*"PlayEventBoardGameArrivalEffectAuto"*/, v44);
    sub_1C3B764(&StringLiteral_10371/*"PhotoCampaignSelectedUsrSvtId2025"*/, v45);
    sub_1C3B764(&StringLiteral_10398/*"PlayBgmForPlaying"*/, v46);
    sub_1C3B764(&StringLiteral_10427/*"PlayUnDispCostAnim2"*/, v47);
    sub_1C3B764(&StringLiteral_10359/*"PermissionSet"*/, v48);
    sub_1C3B764(&StringLiteral_10354/*"PerLabel"*/, v49);
    sub_1C3B764(&StringLiteral_10372/*"PhotoCampaignStaffCostumeSelectDialog"*/, v50);
    sub_1C3B764(&StringLiteral_10337/*"Path is too long. Path: {0}"*/, v51);
    sub_1C3B764(&StringLiteral_10404/*"PlayChapterStart "*/, v52);
    sub_1C3B764(&StringLiteral_10426/*"PlayStayAnim"*/, v53);
    sub_1C3B764(&StringLiteral_10351/*"PeachPuff"*/, v54);
    sub_1C3B764(&StringLiteral_10385/*"PipelineCallback"*/, v55);
    sub_1C3B764(&StringLiteral_10432/*"Player1"*/, v56);
    sub_1C3B764(&StringLiteral_10393/*"PlayBGM"*/, v57);
    sub_1C3B764(&StringLiteral_10399/*"PlayBoardGamePieceEffectSub"*/, v58);
    sub_1C3B764(&StringLiteral_10411/*"PlayHpCut"*/, v59);
    sub_1C3B764(&StringLiteral_10383/*"Pictures"*/, v60);
    sub_1C3B764(&StringLiteral_10410/*"PlayHappinessCounterEffect"*/, v61);
    sub_1C3B764(&StringLiteral_10377/*"PhotoSettingButton"*/, v62);
    sub_1C3B764(&StringLiteral_10358/*"Permanent Redirect"*/, v63);
    sub_1C3B764(&StringLiteral_10395/*"PlayBattleEnd2 "*/, v64);
    sub_1C3B764(&StringLiteral_10409/*"PlayGetEffectOnMap"*/, v65);
    sub_1C3B764(&StringLiteral_10341/*"Pattern"*/, v66);
    sub_1C3B764(&StringLiteral_10400/*"PlayBoardGameStopPiecePanel"*/, v67);
    sub_1C3B764(&StringLiteral_10366/*"Phone"*/, v68);
    sub_1C3B764(&StringLiteral_10369/*"PhotoCampaignSelectImageLimit2025"*/, v69);
    sub_1C3B764(&StringLiteral_10381/*"PickaxetAnimation"*/, v70);
    sub_1C3B764(&StringLiteral_10352/*"Penetrator"*/, v71);
    sub_1C3B764(&StringLiteral_10401/*"PlayChapter "*/, v72);
    sub_1C3B764(&StringLiteral_10367/*"PhotoCampaign2025"*/, v73);
    sub_1C3B764(&StringLiteral_10353/*"Penis Man"*/, v74);
    sub_1C3B764(&StringLiteral_10373/*"PhotoCampaignStaffSelectDialog"*/, v75);
    sub_1C3B764(&StringLiteral_10387/*"Plank"*/, v76);
    sub_1C3B764(&StringLiteral_10386/*"Placeholder"*/, v77);
    sub_1C3B764(&StringLiteral_10374/*"PhotoFrameSelectDialog"*/, v78);
    sub_1C3B764(&StringLiteral_10368/*"PhotoCampaignSelectImageLimit"*/, v79);
    sub_1C3B764(&StringLiteral_10435/*"PlayerShadowImageId"*/, v80);
    sub_1C3B764(&StringLiteral_10406/*"PlayEntryAnimation"*/, v81);
    sub_1C3B764(&StringLiteral_1/*""*/, v82);
    sub_1C3B764(&StringLiteral_10403/*"PlayChapterEpilogue "*/, v83);
    sub_1C3B764(&StringLiteral_10390/*"Play "*/, v84);
    sub_1C3B764(&StringLiteral_10342/*"Pause"*/, v85);
    sub_1C3B764(&StringLiteral_10355/*"Performance"*/, v86);
    byte_4C1DB40 = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( (this->fields.state | 4) != 4 )
    return;
  this->fields.callbackFunc = callback;
  sub_1C3B708(&this->fields.callbackFunc);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  memberObjectList = this->fields.memberObjectList;
  if ( !memberObjectList )
    goto LABEL_24;
  v90 = (NpcServantFollowerMaster_o *)gameObject;
  v91 = 0LL;
  while ( (int)v91 < (signed int)memberObjectList->max_length )
  {
    if ( !partyItem )
      goto LABEL_24;
    gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetMember(partyItem, v91, 0LL);
    if ( !gameObject )
      goto LABEL_24;
    klass = gameObject[7].klass;
    v94 = (PartyOrganizationListViewItem_o *)gameObject;
    if ( !klass )
      goto LABEL_19;
    data_high = HIDWORD(klass->_1.byval_arg.data);
    bits = klass->_1.byval_arg.bits;
    SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)gameObject, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                               SvtId,
                                               0LL);
    if ( !v90 )
      goto LABEL_24;
    gameObject = (UnityEngine_GameObject_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                               v90,
                                               &npcServantFollowerEntity,
                                               data_high,
                                               bits,
                                               (int32_t)gameObject,
                                               0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !npcServantFollowerEntity )
        goto LABEL_24;
      gameObject = (UnityEngine_GameObject_o *)NpcServantFollowerEntity__IsHideRarity(
                                                 npcServantFollowerEntity->fields.flag,
                                                 0LL);
    }
    else
    {
LABEL_19:
      gameObject = 0LL;
    }
    v98 = this->fields.memberObjectList;
    if ( v98 )
    {
      if ( (unsigned int)v91 >= v98->max_length )
        sub_1C3B9C8(gameObject, v88);
      v99 = v98->m_Items[v91];
      if ( v99 )
      {
        PartyOrganizationConfirmItemDraw__SetItem(v99, v94, 2, 0, (unsigned __int8)gameObject & 1, 0, 0, v92);
        memberObjectList = this->fields.memberObjectList;
        ++v91;
        if ( memberObjectList )
          continue;
      }
    }
    goto LABEL_24;
  }
  if ( (unsigned int)kind > 0x1B )
    goto LABEL_47;
  if ( ((1 << kind) & 0xFDE7C38) != 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_24;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
      gameObject,
      0LL,
      1LL,
      gameObject->klass[1]._1.interfaceOffsets);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_24;
    goto LABEL_46;
  }
  if ( ((1 << kind) & 0x183C7) != 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
            if ( gameObject )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
                if ( gameObject )
                {
                  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                    gameObject,
                    0LL,
                    1LL,
                    gameObject->klass[1]._1.interfaceOffsets);
                  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                  if ( gameObject )
                  {
                    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                      gameObject,
                      0LL,
                      1LL,
                      gameObject->klass[1]._1.interfaceOffsets);
                    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                    if ( gameObject )
                    {
LABEL_46:
                      v100 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                      AndroidBackKeyManager__AddBackBtn(v100, 0LL);
                      goto LABEL_47;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_24:
    sub_1C3B9C0(gameObject, v88);
  }
LABEL_47:
  gameObject = (UnityEngine_GameObject_o *)this->fields.nameLabel;
  if ( !gameObject )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  switch ( kind )
  {
    case 0:
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10343/*"PausedTime: "*/, 0LL);
      if ( !titleLabel )
        goto LABEL_24;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      messageLabel = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10342/*"Pause"*/, 0LL);
      if ( !messageLabel )
        goto LABEL_24;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
      decideLabel = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10341/*"Pattern"*/, 0LL);
      if ( !decideLabel )
        goto LABEL_24;
      UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v109 = &StringLiteral_10340/*"Patindex"*/;
      goto LABEL_168;
    case 1:
      v110 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10356/*"Period too large"*/, 0LL);
      if ( !v110 )
        goto LABEL_24;
      UILabel__set_text(v110, (System_String_o *)gameObject, 0LL);
      v111 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10355/*"Performance"*/, 0LL);
      if ( !v111 )
        goto LABEL_24;
      UILabel__set_text(v111, (System_String_o *)gameObject, 0LL);
      v112 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10354/*"PerLabel"*/, 0LL);
      if ( !v112 )
        goto LABEL_24;
      UILabel__set_text(v112, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v109 = &StringLiteral_10353/*"Penis Man"*/;
      goto LABEL_168;
    case 2:
      v113 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10400/*"PlayBoardGameStopPiecePanel"*/, 0LL);
      if ( !v113 )
        goto LABEL_24;
      UILabel__set_text(v113, (System_String_o *)gameObject, 0LL);
      v114 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10399/*"PlayBoardGamePieceEffectSub"*/, 0LL);
      if ( !v114 )
        goto LABEL_24;
      UILabel__set_text(v114, (System_String_o *)gameObject, 0LL);
      v115 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10398/*"PlayBgmForPlaying"*/, 0LL);
      if ( !v115 )
        goto LABEL_24;
      UILabel__set_text(v115, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v109 = &StringLiteral_10397/*"PlayBattleStart2 "*/;
      goto LABEL_168;
    case 3:
      v116 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10373/*"PhotoCampaignStaffSelectDialog"*/, 0LL);
      if ( !v116 )
        goto LABEL_24;
      UILabel__set_text(v116, (System_String_o *)gameObject, 0LL);
      v117 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10372/*"PhotoCampaignStaffCostumeSelectDialog"*/, 0LL);
      if ( !v117 )
        goto LABEL_24;
      UILabel__set_text(v117, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v109 = &StringLiteral_10371/*"PhotoCampaignSelectedUsrSvtId2025"*/;
      goto LABEL_168;
    case 4:
      v118 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10359/*"PermissionSet"*/, 0LL);
      if ( !v118 )
        goto LABEL_24;
      UILabel__set_text(v118, (System_String_o *)gameObject, 0LL);
      v119 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10358/*"Permanent Redirect"*/, 0LL);
      if ( !v119 )
        goto LABEL_24;
      UILabel__set_text(v119, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v109 = &StringLiteral_10357/*"PeriodTimeRoot"*/;
      goto LABEL_168;
    case 5:
      v120 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10350/*"Pe"*/, 0LL);
      if ( !v120 )
        goto LABEL_24;
      UILabel__set_text(v120, (System_String_o *)gameObject, 0LL);
      v121 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10352/*"Penetrator"*/, 0LL);
      if ( !v121 )
        goto LABEL_24;
      UILabel__set_text(v121, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v109 = &StringLiteral_10351/*"PeachPuff"*/;
      goto LABEL_168;
    case 6:
      v122 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10370/*"PhotoCampaignSelectedUsrSvtId"*/, 0LL);
      if ( !v122 )
        goto LABEL_24;
      UILabel__set_text(v122, (System_String_o *)gameObject, 0LL);
      v123 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10368/*"PhotoCampaignSelectImageLimit"*/, 0LL);
      if ( !v123 )
        goto LABEL_24;
      UILabel__set_text(v123, (System_String_o *)gameObject, 0LL);
      nameLabel = this->fields.nameLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10369/*"PhotoCampaignSelectImageLimit2025"*/, 0LL);
      if ( !partyItem )
        goto LABEL_24;
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                 (System_String_o *)gameObject,
                                                 (Il2CppObject *)partyItem->fields.deckName,
                                                 0LL);
      if ( !nameLabel )
        goto LABEL_24;
      UILabel__set_text(nameLabel, (System_String_o *)gameObject, 0LL);
      v125 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10367/*"PhotoCampaign2025"*/, 0LL);
      if ( !v125 )
        goto LABEL_24;
      UILabel__set_text(v125, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v109 = &StringLiteral_10366/*"Phone"*/;
      goto LABEL_168;
    case 7:
      v126 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10383/*"Pictures"*/, 0LL);
      if ( !v126 )
        goto LABEL_24;
      UILabel__set_text(v126, (System_String_o *)gameObject, 0LL);
      v127 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10382/*"PickaxetAnimation_skip"*/, 0LL);
      if ( !v127 )
        goto LABEL_24;
      UILabel__set_text(v127, (System_String_o *)gameObject, 0LL);
      v128 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10381/*"PickaxetAnimation"*/, 0LL);
      if ( !v128 )
        goto LABEL_24;
      UILabel__set_text(v128, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v109 = &StringLiteral_10380/*"Pi"*/;
      goto LABEL_168;
    case 8:
      v129 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10377/*"PhotoSettingButton"*/, 0LL);
      if ( !v129 )
        goto LABEL_24;
      UILabel__set_text(v129, (System_String_o *)gameObject, 0LL);
      v130 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10376/*"PhotoMasterGenderSetting2025"*/, 0LL);
      if ( !v130 )
        goto LABEL_24;
      UILabel__set_text(v130, (System_String_o *)gameObject, 0LL);
      v131 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10375/*"PhotoMasterEquipIdSetting2025"*/, 0LL);
      if ( !v131 )
        goto LABEL_24;
      UILabel__set_text(v131, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v109 = &StringLiteral_10374/*"PhotoFrameSelectDialog"*/;
      goto LABEL_168;
    case 9:
      v132 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10390/*"Play "*/, 0LL);
      if ( !v132 )
        goto LABEL_24;
      UILabel__set_text(v132, (System_String_o *)gameObject, 0LL);
      v133 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10389/*"Play"*/, 0LL);
      if ( !v133 )
        goto LABEL_24;
      UILabel__set_text(v133, (System_String_o *)gameObject, 0LL);
      v134 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10385/*"PipelineCallback"*/, 0LL);
      if ( !v134 )
        goto LABEL_24;
      UILabel__set_text(v134, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v109 = &StringLiteral_10384/*"Pink"*/;
      goto LABEL_168;
    case 10:
      v135 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10388/*"Platform doesn't support open commands, try to call OpenFactory.PlatformCanOpen"*/, 0LL);
      if ( !v135 )
        goto LABEL_24;
      UILabel__set_text(v135, (System_String_o *)gameObject, 0LL);
      v136 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10387/*"Plank"*/, 0LL);
      if ( !v136 )
        goto LABEL_24;
      UILabel__set_text(v136, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v109 = &StringLiteral_10386/*"Placeholder"*/;
      goto LABEL_168;
    case 11:
      v137 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10433/*"PlayerPrefsの削除"*/, 0LL);
      if ( !v137 )
        goto LABEL_24;
      UILabel__set_text(v137, (System_String_o *)gameObject, 0LL);
      v138 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10432/*"Player1"*/, 0LL);
      if ( !v138 )
        goto LABEL_24;
      UILabel__set_text(v138, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v109 = &StringLiteral_10431/*"Player"*/;
      goto LABEL_168;
    case 12:
      v139 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10427/*"PlayUnDispCostAnim2"*/, 0LL);
      if ( !v139 )
        goto LABEL_24;
      UILabel__set_text(v139, (System_String_o *)gameObject, 0LL);
      v140 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10426/*"PlayStayAnim"*/, 0LL);
      if ( !v140 )
        goto LABEL_24;
      UILabel__set_text(v140, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v109 = &StringLiteral_10425/*"PlayShop "*/;
      goto LABEL_168;
    case 13:
      v141 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10412/*"PlayHpNameAlpha"*/, 0LL);
      if ( !v141 )
        goto LABEL_24;
      UILabel__set_text(v141, (System_String_o *)gameObject, 0LL);
      v142 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10411/*"PlayHpCut"*/, 0LL);
      if ( !v142 )
        goto LABEL_24;
      UILabel__set_text(v142, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v109 = &StringLiteral_10410/*"PlayHappinessCounterEffect"*/;
      goto LABEL_168;
    case 14:
      v143 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10406/*"PlayEntryAnimation"*/, 0LL);
      if ( !v143 )
        goto LABEL_24;
      UILabel__set_text(v143, (System_String_o *)gameObject, 0LL);
      v144 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10405/*"PlayCore AssetPackManager API is not available! Make sure your gradle project includes \"com.google.android.play:core\" dependency."*/, 0LL);
      if ( !v144 )
        goto LABEL_24;
      UILabel__set_text(v144, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v109 = &StringLiteral_10404/*"PlayChapterStart "*/;
      goto LABEL_168;
    case 15:
      v145 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10396/*"PlayBattleStart "*/, 0LL);
      if ( !v145 )
        goto LABEL_24;
      UILabel__set_text(v145, (System_String_o *)gameObject, 0LL);
      v146 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10395/*"PlayBattleEnd2 "*/, 0LL);
      if ( !partyItem )
        goto LABEL_24;
      v147 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_24;
      TotalCostRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetTotalCostRestrictionMessage(
                                                      (QuestRestrictionInfo_o *)gameObject,
                                                      0LL);
      goto LABEL_150;
    case 16:
      v149 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10396/*"PlayBattleStart "*/, 0LL);
      if ( !v149 )
        goto LABEL_24;
      UILabel__set_text(v149, (System_String_o *)gameObject, 0LL);
      v146 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10395/*"PlayBattleEnd2 "*/, 0LL);
      if ( !partyItem )
        goto LABEL_24;
      v147 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_24;
      TotalCostRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                                      (QuestRestrictionInfo_o *)gameObject,
                                                      0,
                                                      0,
                                                      1,
                                                      0LL);
LABEL_150:
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v147, TotalCostRestrictionMessage, 0LL);
      if ( !v146 )
        goto LABEL_24;
      UILabel__set_text(v146, (System_String_o *)gameObject, 0LL);
      v150 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10394/*"PlayBattleEnd "*/, 0LL);
      if ( !v150 )
        goto LABEL_24;
      UILabel__set_text(v150, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v109 = &StringLiteral_10393/*"PlayBGM"*/;
      goto LABEL_168;
    case 17:
      v151 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10430/*"PlayVoiceWait"*/, 0LL);
      if ( !v151 )
        goto LABEL_24;
      UILabel__set_text(v151, (System_String_o *)gameObject, 0LL);
      v152 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10429/*"PlayVoiceNo"*/, 0LL);
      if ( !partyItem )
        goto LABEL_24;
      v153 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_24;
      ConfirmRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetTotalCostRestrictionMessage(
                                                    (QuestRestrictionInfo_o *)gameObject,
                                                    0LL);
      goto LABEL_165;
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
      v101 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10430/*"PlayVoiceWait"*/, 0LL);
      if ( !v101 )
        goto LABEL_24;
      UILabel__set_text(v101, (System_String_o *)gameObject, 0LL);
      v102 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10395/*"PlayBattleEnd2 "*/, 0LL);
      if ( !v102 )
        goto LABEL_24;
      v103 = (System_String_o *)gameObject;
      v104 = v102;
      goto LABEL_167;
    case 23:
      v155 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10430/*"PlayVoiceWait"*/, 0LL);
      if ( !v155 )
        goto LABEL_24;
      UILabel__set_text(v155, (System_String_o *)gameObject, 0LL);
      v152 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10429/*"PlayVoiceNo"*/, 0LL);
      if ( !partyItem )
        goto LABEL_24;
      v153 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_24;
      ConfirmRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                                    (QuestRestrictionInfo_o *)gameObject,
                                                    0,
                                                    0,
                                                    1,
                                                    0LL);
LABEL_165:
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v153, ConfirmRestrictionMessage, 0LL);
      if ( !v152 )
        goto LABEL_24;
      v103 = (System_String_o *)gameObject;
      v104 = v152;
LABEL_167:
      UILabel__set_text(v104, v103, 0LL);
      cancelLabel = this->fields.closeLabel;
      v109 = &StringLiteral_10428/*"PlayVoice"*/;
LABEL_168:
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v109, 0LL);
      if ( !cancelLabel )
        goto LABEL_24;
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
LABEL_170:
      this->fields.state = 1;
      v156 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v156, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeckMenu_EndOpen__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v156, 0, 0LL);
      break;
    case 24:
      v157 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10339/*"PathCRC"*/, 0LL);
      if ( !v157 )
        goto LABEL_24;
      UILabel__set_text(v157, (System_String_o *)gameObject, 0LL);
      v158 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10338/*"Path {0} is a directory"*/, 0LL);
      if ( !v158 )
        goto LABEL_24;
      UILabel__set_text(v158, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v109 = &StringLiteral_10337/*"Path is too long. Path: {0}"*/;
      goto LABEL_168;
    case 25:
      v159 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10403/*"PlayChapterEpilogue "*/, 0LL);
      if ( !v159 )
        goto LABEL_24;
      UILabel__set_text(v159, (System_String_o *)gameObject, 0LL);
      v160 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10402/*"PlayChapterClear "*/, 0LL);
      if ( !v160 )
        goto LABEL_24;
      UILabel__set_text(v160, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v109 = &StringLiteral_10401/*"PlayChapter "*/;
      goto LABEL_168;
    case 26:
      v161 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10409/*"PlayGetEffectOnMap"*/, 0LL);
      if ( !v161 )
        goto LABEL_24;
      UILabel__set_text(v161, (System_String_o *)gameObject, 0LL);
      v162 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10408/*"PlayGacha "*/, 0LL);
      if ( !v162 )
        goto LABEL_24;
      UILabel__set_text(v162, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v109 = &StringLiteral_10407/*"PlayEventBoardGameArrivalEffectAuto"*/;
      goto LABEL_168;
    case 27:
      v163 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10436/*"PlayerSpecialShadowEffectId"*/, 0LL);
      if ( !v163 )
        goto LABEL_24;
      UILabel__set_text(v163, (System_String_o *)gameObject, 0LL);
      v164 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10435/*"PlayerShadowImageId"*/, 0LL);
      if ( !v164 )
        goto LABEL_24;
      UILabel__set_text(v164, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v109 = &StringLiteral_10434/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
      goto LABEL_168;
    default:
      goto LABEL_170;
  }
}


void __fastcall PartyOrganizationConfirmDeckMenu__add_callbackFunc(
        PartyOrganizationConfirmDeckMenu_o *this,
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationConfirmDeckMenu_o *v11; // x0
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C1DB3D & 1) == 0 )
  {
    sub_1C3B764(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo, value);
    byte_4C1DB3D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmDeckMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmDeckMenu_o *)sub_1C3BC80(v8);
  PartyOrganizationConfirmDeckMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationConfirmDeckMenu__remove_callbackFunc(
        PartyOrganizationConfirmDeckMenu_o *this,
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationConfirmDeckMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C1DB3E & 1) == 0 )
  {
    sub_1C3B764(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo, value);
    byte_4C1DB3E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmDeckMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmDeckMenu_o *)sub_1C3BC80(v8);
  PartyOrganizationConfirmDeckMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A76AFC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A76AB4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationConfirmDeckMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4C1DB46 & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, result);
    byte_4C1DB46 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmDeckMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
}


void __fastcall PartyOrganizationConfirmDeckMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}